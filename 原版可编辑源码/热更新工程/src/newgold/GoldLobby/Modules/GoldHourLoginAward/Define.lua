local GoldHourLoginAwardDefine = {}

GoldHourLoginAwardDefine.STATE = {
    UNOPEN = -1, -- 未开启
    CANAWARD = 0, -- 可领取
    HADAWARD = 1, -- 已领取
    TIMEOUT = 2 -- 已过期
}

return GoldHourLoginAwardDefine

