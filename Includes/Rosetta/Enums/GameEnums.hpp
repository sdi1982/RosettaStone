// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ROSETTASTONE_GAME_ENUMS_HPP
#define ROSETTASTONE_GAME_ENUMS_HPP

namespace RosettaStone
{
//! \brief An enumerator for evaluating the relation between primitive values
//! during game simulation.
enum class RelaSign
{
    EQ,   //!< Equal.
    GEQ,  //!< Greater equal.
    LEQ   //!< Lesser equal.
};
}  // namespace RosettaStone

#endif  // ROSETTASTONE_GAME_ENUMS_HPP
