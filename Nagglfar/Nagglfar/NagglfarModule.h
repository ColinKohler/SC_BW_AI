#pragma once

#include <BWAPI.h>
#include <BWTA.h>
#include "GameCommander.h"
#include <windows.h>

namespace NagglfarBot {

	class NagglfarModule : public BWAPI::AIModule {
		GameCommander gameCommander;

	public:
		virtual void onStart();
		virtual void onEnd(bool isWinner);
		virtual void onFrame();
		virtual void onUnitDiscover(BWAPI::Unit unit);
		virtual void onUnitEvade(BWAPI::Unit unit);
		virtual void onUnitShow(BWAPI::Unit unit);
		virtual void onUnitHide(BWAPI::Unit unit);
		virtual void onUnitCreate(BWAPI::Unit unit);
		virtual void onUnitDestroy(BWAPI::Unit unit);
		virtual void onUnitMorph(BWAPI::Unit unit);
		virtual void onUnitComplete(BWAPI::Unit unit);
	};

}