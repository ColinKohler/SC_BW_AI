#include "WorkerManager.h"

using namespace NagglfarBot;

WorkerManager::WorkerManager() {
	for (auto &u : BWAPI::Broodwar->self()->getUnits()) {
		if (u->getType().isWorker()) {
			workerData.addWorker(u, WorkerData::Idle);
		}
	}
}

void WorkerManager::update() {


	// worker bookkeeping
	updateWorkerStatus();

	// handle idle workers
	handleIdleWorkers();

	// set the gas workers
	handleGasWorkers();

	// handle move workers
	handleMoveWorkers();

	// handle combat workers
	handleCombatWorkers();

	// hangle repair workers
	handleRepairWorkers();
}

void WorkerManager::updateWorkerStatus() {
	
}

void WorkerManager::handleIdleWorkers() {
	for (BWAPI::UnitInterface* worker : workerData.getWorkers()) {
		if (workerData.getWorkerJob(worker) == WorkerData::Idle) {
			BWAPI::UnitInterface* minField = worker->getClosestUnit(BWAPI::Filter::IsMineralField);
			worker->rightClick(minField);
			workerData.setWorkerJob(worker, WorkerData::Minerals);
		}
	}
}

void WorkerManager::handleGasWorkers() {

}

void WorkerManager::handleMoveWorkers() {

}

void WorkerManager::handleCombatWorkers() {

}

void WorkerManager::handleRepairWorkers() {

}