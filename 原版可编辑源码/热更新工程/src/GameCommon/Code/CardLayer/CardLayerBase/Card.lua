----create by lcy 2017.12.1
local Card = class("Card")

Card.CardColour = {
    None  = 0,
    Diamond  = 1,      --方块
    Club   = 2,        --梅花
    Heart  = 3,        --红桃
    Spade  = 4,       --黑桃
    Joker  = 5,       --王
    Count  = 7        --花色数量
} 

Card.CardNum = {
    None = 0,
    CardA    = 1,
    Card2    = 2,
    Card3    = 3,
    Card4    = 4,
    Card5    = 5,
    Card6    = 6,
    Card7    = 7,
    Card8    = 8,
    Card9    = 9,
    Card10   = 10,
    CardJ    = 11,
    CardQ    = 12,
    CardK    = 13,
    CardSJ    = 14,    --小王
    CardBJ    = 15,    --大王
    CardCount    = 16,
}

Card.CardID = {
    None     = 0,
    DiamondA   = 1,
    Diamond_2   = 2,
    Diamond_3   = 3,
    Diamond_4   = 4,
    Diamond_5   = 5,
    Diamond_6   = 6,
    Diamond_7   = 7,
    Diamond_8   = 8,
    Diamond_9   = 9,
    Diamond_10  = 10,
    Diamond_J   = 11,
    Diamond_Q   = 12,
    Diamond_K   = 13,
    ClubA    = 14,
    Club_2    = 15,
    Club_3    = 16,
    Club_4    = 17,
    Club_5    = 18,
    Club_6    = 19,
    Club_7    = 20,
    Club_8    = 21,
    Club_9    = 22,
    Club_10   = 23,
    Club_J    = 24,
    Club_Q    = 25,
    Club_K    = 26,
    HeartA   = 27,
    Heart_2   = 28,
    Heart_3   = 29,
    Heart_4   = 30,
    Heart_5   = 31,
    Heart_6   = 32,
    Heart_7   = 33,
    Heart_8   = 34,
    Heart_9   = 35,
    Heart_10  = 36,
    Heart_J   = 37,
    Heart_Q   = 38,
    Heart_K   = 39,
    SpadeA    = 40,
    Spade_2    = 41,
    Spade_3    = 42,
    Spade_4    = 43,
    Spade_5    = 44,
    Spade_6    = 45,
    Spade_7    = 46,
    Spade_8    = 47,
    Spade_9    = 48,
    Spade_10   = 49,
    Spade_J    = 50,
    Spade_Q    = 51,
    Spade_K    = 52,
    Joker_F   = 53,
    Joker_Z   = 54,
    Back     = 55,  
}

return Card
