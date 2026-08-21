-- 金币场活动的配置都放在这边
local YGiftBankruptcyDefine = {}

YGiftBankruptcyDefine.ACTLIST = {
    Bankruptcy = "bankruptcy_gift", -- 破产礼包
    Defeat = "deductible_gift", -- 免败礼包
    Enter = "joinroom_gift", -- 进房礼包
    BankruptcyAD = "bankruptcy_gift_ad", -- 看广告领破产礼包
    SpringFestivalRecall = "SpringFestivalRecall", -- 春节召回
    TimeLoginAct = "login_reward",    -- 定时登录
    EnterV2 = "joinroom_gift_v2", -- 进房礼包
    BankruptcyV2 = "bankruptcy_gift_v2", -- 破产礼包
    GoldFirstPayGift = "GoldFirstPayGift", --金币首充
    TeHuiLiBao = "TeHuiLiBao", --特惠礼包
}

YGiftBankruptcyDefine.NewModeGoldGameID = {
    30579,       -- 暗斗双扣
    30116,       -- 千变双扣
    42038,       -- 边茶千变双扣gameid
}

YGiftBankruptcyDefine.ACTION_TYPE = {
    QUERY = 0,      -- 查询
    GETWARD = 1,    -- 领取
}

YGiftBankruptcyDefine.BreakGold = 2000

return YGiftBankruptcyDefine