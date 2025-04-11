#include "core/commands/Command.hpp"
#include "game/gta/Stats.hpp"

namespace YimMenu::Features
{
	class CayoPericoSetup : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			Stats::SetInt("MPX_H4CNF_BS_GEN", 131071);
			Stats::SetInt("MPX_H4CNF_BS_ENTR", 63);
			Stats::SetInt("MPX_H4CNF_BS_ABIL", 63);
			Stats::SetInt("MPX_H4CNF_WEAPONS", 1);
			Stats::SetInt("MPX_H4CNF_WEP_DISRP", 3);
			Stats::SetInt("MPX_H4CNF_ARM_DISRP", 3);
			Stats::SetInt("MPX_H4CNF_HEL_DISRP", 3);
			Stats::SetInt("MPX_H4CNF_TARGET", 3);
			Stats::SetInt("MPX_H4CNF_APPROACH", -1);
			Stats::SetInt("MPx_H4LOOT_GOLD_I", -1);
			Stats::SetInt("MPx_H4LOOT_GOLD_C", -1);
			Stats::SetInt("MPx_H4LOOT_PAINT", -1);
			Stats::SetInt("MPX_H4_PROGRESS", 130667);
			Stats::SetInt("MPx_H4LOOT_GOLD_I_SCOPED", -1);
			Stats::SetInt("MPx_H4LOOT_GOLD_C_SCOPED", -1);
			Stats::SetInt("MPx_H4LOOT_PAINT_SCOPED", -1);
			Stats::SetInt("MPX_H4_MISSIONS", 65535);
			Stats::SetInt("MPX_H4_PLAYTHROUGH_STATUS", 40000);
		}
	};

	static CayoPericoSetup _CayoPericoSetup{"skipcayosetup", "Setup Cayo Perico Heist", "Gives the best cayo perico loadout."};
}