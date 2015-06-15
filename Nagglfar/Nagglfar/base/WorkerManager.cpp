#include "WorkerManager.h"

using namespace NagglfarBot;

WorkerManager::WorkerManager() {

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
	// super rough stuff
	for (auto &u : BWAPI::Broodwar->self()->getUnits()) {
		if (u->getType().isWorker()) {
			if (u->isIdle()) {
				if (u->isCarryingGas() || u->isCarryingMinerals()) {
					u->returnCargo();
				}
				else {
					u->gather(u->getClosestUnit(BWAPI::Filter::IsMineralField || BWAPI::Filter::IsRefinery));
				}
			}
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