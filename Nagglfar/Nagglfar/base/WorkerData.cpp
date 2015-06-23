#include "WorkerData.h"

using namespace NagglfarBot;

///////////////////////////////////////////////////////////////////////////////////////////////////
// WorkerData Class
///////////////////////////////////////////////////////////////////////////////////////////////////

WorkerData::WorkerData() {

}

void WorkerData::addWorker(BWAPI::UnitInterface* unit, enum WorkerJob job) {
	if (!unit) { return;  }

	workers.insert(unit);
	setWorkerJob(unit, job);
}

void WorkerData::setWorkerJob(BWAPI::UnitInterface* unit, enum WorkerJob job) {
	if (!unit) { return;  }

	clearPreviousJob(unit);
	workerJobMap[unit] = job;
}

void WorkerData::clearPreviousJob(BWAPI::UnitInterface* unit) {
	if (!unit) { return;  }
		
	workerJobMap.erase(unit);
}

enum WorkerData::WorkerJob WorkerData::getWorkerJob(BWAPI::UnitInterface* unit) {
	if (!unit) { return Default;  }

	std::map<BWAPI::UnitInterface*, enum WorkerJob>::iterator it = workerJobMap.find(unit);

	if (it != workerJobMap.end()) {
		return it->second;
	}

	return Default;
}