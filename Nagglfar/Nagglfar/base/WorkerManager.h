#pragma once

#include "../Common.h"
#include "BuildingManager.h"

namespace NagglfarBot {
	class WorkerManager {

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