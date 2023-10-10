#pragma once

#include <Radiant/Scene/Scene.hpp>

namespace Radiant
{
	class PanelOutliner
	{
	public:
		PanelOutliner(const Memory::Shared<Scene>& scene = nullptr);
		void SetContext(const Memory::Shared<Scene>& scene);

		void DrawComponentsUI(const std::string& ButtonName = "ADD", float x = 40, float y = 25);
		void DrawImGuiUI();
	private:
		void DrawEntityNodeUI(Entity* entity);
		void DrawPropertiesUI();
	private:
		Memory::Shared<Scene> m_Context;
		Entity* m_SelectedEntity;
	};
}