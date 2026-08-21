local TimeLoginActConfig = {}

-- 奖励状态
TimeLoginActConfig.STATUS = {
    CanReward = "CanReward",  -- 可领取
    Rewarded = "Rewarded", --  已领取
    CanSupple = "CanSupple", -- 可补领
    NotInTime = "NotInTime", -- 未到时间
    OverTime = "OverTime", -- 已过期
}

TimeLoginActConfig.TIME = {
    MORNING = 32400,        -- 早上
    NOON = 57600,           -- 中午
    EVENING = 82800,        -- 晚上
}

TimeLoginActConfig.ClaimFlag = {
  Success = "Success",  -- 领奖成功
  Not_In_Time = "Not_In_Time", --  不在领奖时间内
  Already_Claim = "Already_Claim", -- 已领取过
  Gold_Over = "Gold_Over", -- 金币数量超限
  Box_Cnt_Lack = "Box_Cnt_Lack", -- 次数不足领取宝箱
  Failed = "Failed",  -- 失败 其他错误
  Wheel_Cnt_Lack = "Wheel_Cnt_Lack", --转盘次数不足
}
return TimeLoginActConfig