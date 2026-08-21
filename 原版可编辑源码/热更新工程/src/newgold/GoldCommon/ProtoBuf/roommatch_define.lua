local roommatch_define = {
    processid = 1147,
    CODE = {
        GOLD_SUCCESS = 0;                     -- 正常
        GOLD_FAILED = 13001;                  --失败
        GOLD_LOW_LIMIT = 13002;               -- 金币低于下限
        GOLD_HIGH_LIMIT = 13003;              -- 金币超过上限
        GOLD_GAMING = 13004;                  -- 加入失败,玩家还在游戏中
        GOLD_QUEUING = 13005;                 -- 加入失败,玩家还在队列中
        GOLD_PARAM_ERROR = 13006;             -- 参数错误
        GOLD_GAME_CONFIG_NOT_FOUND = 13007;   -- 找不到游戏配置
        GOLD_OTHERS_GAMING = 13008;           -- 正在其他场次游戏中
        GOLD_BROKE_TIMES_LIMIT = 13009;       -- 破产补助已达上线
        GOLD_BROKE_INTERNAL_LIMIT = 13010;    -- 破产补助冷却中
        GOLD_BROKE_SUPPLY = 13011;            -- 破产补助成功
    },
}

return roommatch_define