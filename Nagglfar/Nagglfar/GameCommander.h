#include "CombatCommander.h"
#include "base/WorkerManager.h"
#include "base/ProductionManager.h"
#include "base/BuildingManager.h"
#include "ScoutManager.h"

namespace NagglfarBot {

	class GameCommander {
		CombatCommander		combatCommander;
		ScoutManager		scoutManager;
		WorkerManager		workerManager;
		BuildingManager		buildingManager;
		ProductionManager	productionManager;

	public:
		GameCommander();

		void update();
	};
}