local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldNewDefine = {}

-- 活动列表
GoldNewDefine.ACTLIST = {
    RECHARGE = "gold_recharge", -- 新金币充值活动
    SIGN = "gold_sign", -- 新金币签到活动
    INTERGRAL = "gold_integral_point", -- 新金币整点活动
    GOLD_FIRST_FREE = "gold_first_free", -- 充值活动免费
    BANK_RUPT = "gold_loose_discount_package-", -- discount
    GOLD_BANK_RUPT = "gold_bankrupt", -- 破产礼包
}

-- 领奖弹窗类型
GoldNewDefine.AWARDTYPE = {
    AWARD_RECHARGE = "gold_recharge", -- 超值畅玩
    AWARD_BANKRUPT = "gold_bankrupt", -- 破产补助
}

return GoldNewDefine�