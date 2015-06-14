#include "Nagglfar.h"
#include <iostream>

using namespace BWAPI;
using namespace Filter;

void Nagglfar::onStart() {
	// Print useful information
	Broodwar << "The map is" << Broodwar->mapName() << "!" << std::endl;
	if (Broodwar->enemy())
		Broodwar << "The matchup is " << Broodwar->self()->getRace() << " vs " << Broodwar->enemy()->getRace() << std::endl;


	// Setup Junk
	Broodwar->enableFlag(Flag::UserInput);
	//Broodwar->enableFlag(Flag::CompleteMapInformation);
	// Allows common commands to be goruped and lowers the bot's APM
	//Broodwar->setCommandOptimizationLevel(2);
}

void Nagglfar::onEnd(bool isWinner) {
	if (isWinner) {
		// Log your win!
	}
}

void Nagglfar::onFrame() {

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