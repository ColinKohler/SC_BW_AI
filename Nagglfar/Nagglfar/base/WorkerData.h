#pragma once

#include "../Common.h"

namespace NagglfarBot {

	class WorkerData {
	public:
		enum WorkerJob {
			Minerals, Gas, Build, Combat, Idle, Repair, Move, Scout, Default
		};

	private:
		std::set<BWAPI::UnitInterface*>					     workers;
		std::map<BWAPI::UnitInterface*, WorkerJob>           workerJobMap;

		void                                                 clearPreviousJob(BWAPI::UnitInterface* unit);

	public:
		WorkerData();

		void                                                 addWorker(BWAPI::UnitInterface* unit, WorkerJob job);
		void                                                 setWorkerJob(BWAPI::UnitInterface* unit, WorkerJob job);
		enum WorkerJob                                       getWorkerJob(BWAPI::UnitInterface* unit);

		const std::set<BWAPI::UnitInterface*> &              getWorkers() const { return workers;  }
	};

}