#pragma once

#include "../Common.h"
#include "WorkerData.h"
#include "BuildingManager.h"

namespace NagglfarBot {
	class WorkerManager {
	private:
		WorkerData workerData;

	public:
		WorkerManager();
		void update();

		void updateWorkerStatus();
		void handleIdleWorkers();
		void handleGasWorkers();
		void handleMoveWorkers();
		void handleCombatWorkers();
		void handleRepairWorkers();
	};

}