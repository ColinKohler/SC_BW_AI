#include "NagglfarModule.h"
#include "Common.h"
#include <iostream>

using namespace NagglfarBot;

void NagglfarModule::onStart() {
	// Print useful information
	BWAPI::Broodwar->sendText("Test");
	BWAPI::Broodwar << "The map is" << BWAPI::Broodwar->mapName() << "!" << std::endl;
	if (BWAPI::Broodwar->enemy())
		BWAPI::Broodwar << "The matchup is " << BWAPI::Broodwar->self()->getRace() << " vs " << BWAPI::Broodwar->enemy()->getRace() << std::endl;

	//// Setup Junk
	BWAPI::Broodwar->enableFlag(BWAPI::Flag::UserInput);
	//Broodwar->enableFlag(Flag::CompleteMapInformation);
	// Allows common commands to be goruped and lowers the bot's APM
	//Broodwar->setCommandOptimizationLevel(2);

	// Get map information using BWTA
	//BWTA::readMap();
	//BWTA::analyze();
}

void NagglfarModule::onEnd(bool isWinner) {
	if (isWinner) {
		// Log your win!
	}
}

void NagglfarModule::onFrame() {
	gameCommander.update();
}

void NagglfarModule::onUnitDiscover(BWAPI::Unit unit) {

}

void NagglfarModule::onUnitEvade(BWAPI::Unit unit) {

}

void NagglfarModule::onUnitShow(BWAPI::Unit unit) {

}

void NagglfarModule::onUnitHide(BWAPI::Unit unit) {

}

void NagglfarModule::onUnitCreate(BWAPI::Unit unit) {

}

void NagglfarModule::onUnitDestroy(BWAPI::Unit unit) {

}

void NagglfarModule::onUnitMorph(BWAPI::Unit unit){

}

void NagglfarModule::onUnitComplete(BWAPI::Unit unit) {

}