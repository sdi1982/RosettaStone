// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include "gtest/gtest.h"

#include <Rosetta/Cards/Card.hpp>
#include <Rosetta/Enums/CardEnums.hpp>

using namespace RosettaStone;

TEST(Card, Constructer)
{
    Card card1;
    card1.id = "cardTest1";
    card1.gameTags[GameTag::RARITY] = static_cast<int>(Rarity::COMMON);
    card1.gameTags[GameTag::FACTION] = static_cast<int>(Faction::NEUTRAL);
    card1.gameTags[GameTag::CARD_SET] = static_cast<int>(CardSet::NONE);
    card1.gameTags[GameTag::CLASS] = static_cast<int>(CardClass::NEUTRAL);
    card1.gameTags[GameTag::CARDTYPE] = static_cast<int>(CardType::MINION);
    card1.gameTags[GameTag::CARDRACE] = static_cast<int>(Race::DRAGON);
    card1.name = "card1";
    card1.text = "this is test card1";
    card1.gameTags[GameTag::COLLECTIBLE] = 1;
    card1.gameTags[GameTag::COST] = 1;
    card1.Initialize();

    Card card2;
    card2.id = "cardTest2";
    card2.gameTags[GameTag::RARITY] = static_cast<int>(Rarity::LEGENDARY);
    card2.gameTags[GameTag::FACTION] = static_cast<int>(Faction::NEUTRAL);
    card2.gameTags[GameTag::CARD_SET] = static_cast<int>(CardSet::NONE);
    card2.gameTags[GameTag::CLASS] = static_cast<int>(CardClass::NEUTRAL);
    card2.gameTags[GameTag::CARDTYPE] = static_cast<int>(CardType::MINION);
    card2.gameTags[GameTag::CARDRACE] = static_cast<int>(Race::DRAGON);
    card2.name = "card2";
    card2.text = "this is test card2";
    card2.gameTags[GameTag::COLLECTIBLE] = 1;
    card2.gameTags[GameTag::COST] = 1;
    card2.Initialize();

    EXPECT_NO_THROW(card1.ShowBriefInfo());
    EXPECT_NO_THROW(card1.ShowInfo());
    EXPECT_EQ("cardTest1", card1.id);
    EXPECT_EQ(Rarity::COMMON, card1.GetRarity());
    EXPECT_EQ(CardClass::NEUTRAL, card1.GetCardClass());
    EXPECT_EQ(CardType::MINION, card1.GetCardType());
    EXPECT_EQ(Race::DRAGON, card1.GetRace());
    EXPECT_EQ(1, card1.gameTags.at(GameTag::COST));
    EXPECT_EQ(2, static_cast<int>(card1.GetMaxAllowedInDeck()));
    EXPECT_EQ(1, static_cast<int>(card2.GetMaxAllowedInDeck()));
    EXPECT_EQ(1, card1.gameTags.at(GameTag::COLLECTIBLE));
}

TEST(Card, HasMechanic)
{
    Card card;
    card.id = "cardTest1";
    card.gameTags[GameTag::RARITY] = static_cast<int>(Rarity::COMMON);
    card.gameTags[GameTag::FACTION] = static_cast<int>(Faction::NEUTRAL);
    card.gameTags[GameTag::CARD_SET] = static_cast<int>(CardSet::NONE);
    card.gameTags[GameTag::CLASS] = static_cast<int>(CardClass::NEUTRAL);
    card.gameTags[GameTag::CARDTYPE] = static_cast<int>(CardType::MINION);
    card.gameTags[GameTag::CARDRACE] = static_cast<int>(Race::DRAGON);
    card.name = "card1";
    card.text = "this is test card1";
    card.gameTags[GameTag::COLLECTIBLE] = true;
    card.gameTags[GameTag::COST] = 1;
    card.Initialize();

    EXPECT_EQ(false, card.HasGameTag(GameTag::ADAPT));
}