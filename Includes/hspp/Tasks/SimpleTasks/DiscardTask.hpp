// This code is based on Sabberstone project.
// Copyright (c) 2017-2018 SabberStone Team, darkfriend77 & rnilva
// Hearthstone++ is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef HEARTHSTONEPP_DISCARD_TASK_HPP
#define HEARTHSTONEPP_DISCARD_TASK_HPP

#include <hspp/Tasks/Tasks.hpp>

namespace Hearthstonepp::SimpleTasks
{
//!
//! \brief DiscardTask class.
//!
//! This class represents the task for discarding card(s) from hand.
//!
class DiscardTask : public ITask
{
 public:
    //! Constructs task with given \p entityType.
    //! \param entityType The entity type of target to discard card(s).
    DiscardTask(EntityType entityType);

    //! Returns task ID.
    //! \return Task ID.
    TaskID GetTaskID() const override;

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    MetaData Impl(Player& player) override;

    EntityType m_entityType = EntityType::EMPTY;
};
}  // namespace Hearthstonepp::SimpleTasks

#endif  // HEARTHSTONEPP_DISCARD_TASK_HPP