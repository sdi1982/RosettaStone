// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <Rosetta/Tasks/SimpleTasks/SwapHeroPowerTask.hpp>

namespace RosettaStone::SimpleTasks
{
TaskStatus SwapHeroPowerTask::Impl(Player* player)
{
    const auto temp = player->GetHero()->heroPower;
    player->GetHero()->heroPower = player->opponent->GetHero()->heroPower;
    player->opponent->GetHero()->heroPower = temp;

    player->GetHero()->heroPower->player = player;
    player->opponent->GetHero()->heroPower->player = player->opponent;

    return TaskStatus::COMPLETE;
}

std::unique_ptr<ITask> SwapHeroPowerTask::CloneImpl()
{
    return std::make_unique<SwapHeroPowerTask>();
}
}  // namespace RosettaStone::SimpleTasks
