#include "NagglfarModule.h"
#include <iostream>

using namespace NagglfarBot;

void Nagglfar::onStart() {
	// Print useful information
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

void Nagglfar::onEnd(bool isWinner) {
	if (isWinner) {
		// Log your win!
	}
}

void Nagglfar::onFrame() {
	gameCommander.update();
}

void Nagglfar::onUnitDiscover(BWAPI::Unit unit) {

}

void Nagglfar::onUnitEvade(BWAPI::Unit unit) {

}

void Nagglfar::onUnitShow(BWAPI::Unit unit) {

}

void Nagglfar::onUnitHide(BWAPI::Unit unit) {

}

void Nagglfar::onUnitCreate(BWAPI::Unit unit) {

}

void Nagglfar::onUnitDestroy(BWAPI::Unit unit) {

}

void Nagglfar::onUnitMorph(BWAPI::Unit unit){

}

void Nagglfar::onUnitComplete(BWAPI::Unit unit) {

}