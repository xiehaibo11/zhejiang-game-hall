local GameDefine = CF.gameClass("GameDefine", "game.Mahjong.BasicMahjong.Define.GameDefine")

GameDefine.HU_TYPE = 
{
    ET_NONE = 0,        -- 逃跑
    ET_SELF = 1,        -- 自摸 
    ET_DISCARD = 2,     -- 点炮                                 
    ET_ROBKONG = 3,     -- 抢杠  
    ET_DRAWN = 5        -- 流局
}

GameDefine.WINLOST_KUNG_TYPE =
{
    [0] = "直杠",
    [1] = "暗杠",
    [2] = "面下杠",
}

GameDefine.WINLOST_FAN_TYPE = 
{        
    [1015] = "天胡",
    [1016] = "地胡",
    [1012] = "青龙七对",
    [1009] = "龙七对",
    [1010] = "清七对",
    [1011] = "清金钩钩",
    [1008] = "清对",
    [32] = "清一色",
    [14] = "七对",
    [1014] = "金钩钩",
    [23] = "对对胡",
    [20] = "平胡",
    [39] = "杠上开花",
    [90] = "抢杠胡",
    [1013] = "杠上炮",
}

GameDefine.WINLOST_FAN_NUMS =
{
    [1015] = 6,
    [1016] = 6,
    [1012] = 6,
    [1009] = 5,
    [1010] = 5,
    [1011] = 5,
    [1008] = 4,
    [32] = 3,
    [14] = 3,
    [1014] = 3,
    [23] = 2,
    [20] = 1,
    [39] = 1,
    [90] = 1,
    [1013] = 1,
}

return GameDefine