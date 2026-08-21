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
    [1023] =  "",--四红中  （不显示）
    [1022] =  "", --平胡不显示  (熟客是自摸/接炮)
    [1018] = "七对",
    [1019] = "对对胡",
    [1020] = "清一色",
    [1021] = "杠上花",
    [1014] = "单吊",
    [1015] = "天胡",
    [1016] = "地胡",
}

GameDefine.WINLOST_FAN_NUMS =
{
    [1023] = 1,--四红中
    [1022] = 1,--平胡不显示  (熟客是自摸/接炮)
    [1018] = 2,
    [1019] = 2,
    [1020] = 2,
    [1021] = 2,
    [1014] = 2,
    [1015] = 2,
    [1016] = 2,
}

GameDefine.LOST_END_TYPE =
{
    NONE = -1,          -- 无
    BAOPAI = 0,         -- 包牌
    REBACKKUNG = 1,     -- 退杠
    THREEBACK = 2,      -- 三背
    DIANPAO = 3,        -- 点炮
    BAOPEI = 4,         -- 包赔
    FANGGANG = 5,       -- 放杠
    ZIMO = 6,           -- 自摸
}

return GameDefine