local GameDefine = CF.gameClass("GameDefine", "game.Landlords.BaseLandlords.Define.GameDefine")

-- 游戏步骤
GameDefine.GAME_STEP = {
    GAME_STEP_NONE = 0, 
    GAME_STEP_START_GAME        = 1,    -- 开始
    GAME_STEP_SHUFFLE_CARDS     = 2,    -- 洗牌
    GAME_STEP_SPECF_CARDS       = 3,    -- 做牌
    GAME_STEP_SEND_CARDS        = 4,    -- 发牌
    GAME_STEP_CALL_BANKER       = 5,    -- 叫地主
    GAME_STEP_ADD_BASE          = 6,    -- 加底
    GAME_STEP_PLAY_CARD         = 7,    -- 打牌
    GAME_STEP_WIN_LOST          = 8,    -- 计算
    GAME_STEP_ESCAPE_WIN_LOST   = 9,    -- 逃跑计算    
    GAME_STEP_END_GAME          = 10,   -- 结束
}

GameDefine.GAME_STEP_NAME = {
    [1] = "游戏开始",    -- 开始
    [2] = "洗牌",    -- 洗牌
    [3] = "做牌",    -- 做牌
    [4] = "发牌",    -- 发牌
    [5] = "叫地主",   -- 叫地主
    [6] = "加底",     -- 加底
    [7] = "打牌",    -- 打牌
    [8] = "计算",    -- 计算
    [9] = "逃跑计算",-- 逃跑计算    
    [10]= "结束",    -- 结束
}

-- 抢叫权限
GameDefine.CallBanker = {
    CB_NOT_CALL = 0x01,     -- 不叫
    CB_CALL_ONE = 0x02,     -- 叫一分
    CB_CALL_TWO = 0x04,     -- 叫二分
    CB_CALL_THREE = 0x08,   -- 叫三分
    CB_ALL = 0x0f,          -- 所有权限
}

GameDefine.DismissTipsString = {
    [0] = "有玩家不同意解散，游戏继续进行!",
    [1] = "房主已解散房间!",
    [2] = "解散房间成功!",
    [3] = "等待时间过长解散房间!",
    [4] = "解散房间成功!",
    [5] = "等待时间过长解散房间!",
    [6] = "老板/副领队已设定为不允许申请解散，如需帮助请联系老板/副领队！",
    [7] = "由于长时间游戏未开始本桌已解散",
    [8] = "由于长时间游戏未准备，被踢出房间",
    [9] = "由于长时间游戏未准备，房间被解散",
    [12] = "长时间未开始游戏，已离开本桌",
    [101] = "有玩家逃跑，游戏结束!",
    [1004] = "桌子已被老板解散!",
    [1008] = "桌子已被老板解散",
    [1010] = "有玩家桌卡不足，无法续桌",
}

GameDefine.SHARE_SELECT = {
    URL = 1,
    TEXT = 2,
    PIC = 3,
}

return GameDefine�