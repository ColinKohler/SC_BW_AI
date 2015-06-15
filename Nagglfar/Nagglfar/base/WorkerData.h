#pragma once

#include "../Common.h"

namespace NagglfarBot {

	class WorkerData {

	public:
		WorkerData();
		enum WorkerJob {
			Minerals, Gas, Build, Combat, Idle, Repair, Move, Scount, Default
		};
	};

}