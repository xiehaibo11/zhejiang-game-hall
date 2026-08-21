local PromoteDefine = {}

PromoteDefine.DRAW_TYPE = { -- 抽奖类型
    FIRST = "first",
    SECOND = "second",
    PERIOD = "period"
}

PromoteDefine.TASK_TYPE = { -- 任务类型
    USER = "USER",
    A = "A",
    B = "B",
    C = "C",
    D = "D",
    E = "E"
}

PromoteDefine.PLAYER_TYPE = { -- 推广请求的玩家类型定义
    PLAYER = 0, -- 玩家
    OWNER = 1, -- 领队
    ADMIN = 2 -- 副领队
}

PromoteDefine.TIP_TYPE = { -- 通用提示框类型
    PLAYER_NOTICE = 1, -- 玩家
    OWNER_CREATE = 2, -- 领队收到通知创建玩法
    OWNER_INVITE = 3, -- 领队邀请玩家
    TEA_TIP_USER = 4, -- 玩家点击体验拿好礼
    TEA_TIP_OWNER = 5 -- 引导领队创桌
}

PromoteDefine.AWARD_TYPE = { -- 领奖类型
    SHARE = 'share',
    FIRST = 'first',
    PERIOD = 'period',
    DRAW_SHARE_FIRST = 'draw_share_first',
    DRAW_SHARE_SECOND = 'draw_share_second'
}

return PromoteDefine
