#pragma once
#include "Module.h"

namespace Args
{
	class CoreModule : public Module
	{
	public:
		CoreModule(Args::ECS& ecs) : Args::Module(ecs) {}

		virtual void InitComponents(const std::unordered_set<std::string>& arguments) override;
		virtual void InitSystems(const std::unordered_set<std::string>& arguments) override;
	};
}
