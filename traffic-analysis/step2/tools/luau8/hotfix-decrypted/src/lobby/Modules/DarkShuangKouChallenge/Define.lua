local Define = {}

Define.ENUM_REWARD_STATE = {
    UNDERWAY = 0, -- 进行中
    AVAILABLE = 1, -- 可领取
    RECEIVED = 2 -- 已领取
}

Define.ENUM_TASK_GROUP = {
    [0] = {name = "无类"},
    [1] = {name = "单张类"},
    [2] = {name = "对子类"},
    [3] = {name = "三张类"},
    [4] = {name = "炸弹类"},
    [5] = {name = "暴击"}
}

return Define
�