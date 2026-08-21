local LocalConfig = import("..Configs.LocalConfig")
local BtnBase = import(".BtnBase")
local BannerBtn = import(".ActBtns.BannerBtn")
local BottoomBtn = import(".ResidentBtns.BottoomBtn")
local TopBtn = import(".ResidentBtns.TopBtn")
local ScoringAssistantBtn = import(".ResidentBtns.ScoringAssistantBtn")
local StoreBtn = import(".ResidentBtns.StoreBtn")
local LuckyTaskBtn = import(".ActBtns.LuckyTaskBtn")
local BankruptGiftBtn = import(".ActBtns.BankruptGiftBtn")
local DefeatGiftBtn = import(".ActBtns.DefeatGiftBtn")
local NewVipBtn = import(".ActBtns.NewVipBtn")
local ActFRFirstBtn = import("..SubModules.ActFirstRecharge.ActFRFirstBtn")
local ActFRSecondBtn = import("..SubModules.ActFirstRecharge.ActFRSecondBtn")
local ActBaoJiRankBtn = import("..SubModules.ActBaoJiRank.ActBaoJiRankBtn")
local ActPeGPBtn = import("..SubModules.ActPeriodicGiftPackage.ActPeGPBtn")
local GPCBtn = import("..SubModules.GiftPackCollection.GiftPackCollectionBtn")
local CoinRewardsBtn = import("..SubModules.CoinRewards.CoinRewardsBtn")
local DarkShuangKouChallengeBtn = import(".ActBtns.DarkShuangKouChallengeBtn")
local UnLimitGoldActBtn = import(".ActBtns.UnLimitGoldActBtn")
local BattlePassDarkShuangKouBtn = import(".ActBtns.BattlePassDarkShuangKouBtn")
local BattlePassLobbyBtn = import(".ActBtns.BattlePassLobbyBtn")
local UnlimitedGiftBtn = import(".ActBtns.UnlimitedGiftBtn")
local LuckyBagBtn = import(".ActBtns.LuckyBagBtn")
local RecallNewBtn = import(".ActBtns.RecallNewBtn")
local MonthlyCardBtn = import(".ActBtns.MonthlyCardBtn")
local LuckyMissionBtn = import(".ActBtns.LuckyMissionBtn")
local TimeLoginActBtn = import(".ActBtns.TimeLoginActBtn")

local BtnFactory = {}
local FactoryMap = {
    [LocalConfig.BTN_ID.BANNER] = BannerBtn,
    [LocalConfig.BTN_ID.SHOP] = StoreBtn,
    [LocalConfig.BTN_ID.BAG] = BottoomBtn,
    [LocalConfig.BTN_ID.ACT] = BottoomBtn,
    [LocalConfig.BTN_ID.MAIL] = BottoomBtn,
    [LocalConfig.BTN_ID.SHARE] = BottoomBtn,
    [LocalConfig.BTN_ID.MORE] = BottoomBtn,
    [LocalConfig.BTN_ID.GONG_GAO] = BottoomBtn,
    [LocalConfig.BTN_ID.HEALTH] = BottoomBtn,
    [LocalConfig.BTN_ID.RULE] = BottoomBtn,
    [LocalConfig.BTN_ID.ZHUANG_BAN] = BottoomBtn,
    [LocalConfig.BTN_ID.CUSTOMER_BOTTOM] = BottoomBtn,
    -- [LocalConfig.BTN_ID.GONG_GAO] = BottoomBtn,
    -- [LocalConfig.BTN_ID.HEALTH] = BottoomBtn,
    -- [LocalConfig.BTN_ID.RULE] = BottoomBtn,

    [LocalConfig.BTN_ID.SCORINGASSISTANT] = ScoringAssistantBtn,
    [LocalConfig.BTN_ID.SETTING] = TopBtn,
    [LocalConfig.BTN_ID.TOP_BAG] = TopBtn,
    [LocalConfig.BTN_ID.CUSTOMER] = TopBtn,
    [LocalConfig.BTN_ID.LUCKY_TASK] = LuckyTaskBtn,
    [LocalConfig.BTN_ID.FIRST_RECHARGE_GIFT] = ActFRFirstBtn,
    [LocalConfig.BTN_ID.FIRST_RECHARGE_SECOND] = ActFRSecondBtn,
    [LocalConfig.BTN_ID.BAOJI_RANK] = ActBaoJiRankBtn,
    [LocalConfig.BTN_ID.PERIODIC_GIFT] = ActPeGPBtn,
    [LocalConfig.BTN_ID.GIFT_PACK_COLLECTION] = GPCBtn,
    [LocalConfig.BTN_ID.COIN_REWARDS] = CoinRewardsBtn,
    [LocalConfig.BTN_ID.DARK_SHUANG_KOU_CHALLENGE] = DarkShuangKouChallengeBtn,
    [LocalConfig.BTN_ID.BATTLE_PASS_DARK_SHUANG_KOU] = BattlePassDarkShuangKouBtn,
    [LocalConfig.BTN_ID.BANKRUPT_GIFT] = BankruptGiftBtn,
    [LocalConfig.BTN_ID.DEFEAT_GIFT] = DefeatGiftBtn,
    [LocalConfig.BTN_ID.NEW_VIP] = NewVipBtn,
    [LocalConfig.BTN_ID.UN_LIMIT_GOLD_ACT] = UnLimitGoldActBtn,
    [LocalConfig.BTN_ID.BATTLE_PASS_LOBBY] = BattlePassLobbyBtn,
    [LocalConfig.BTN_ID.UNLIMITED_GIFT] = UnlimitedGiftBtn,
    [LocalConfig.BTN_ID.LUCKY_BAG] = LuckyBagBtn,
    [LocalConfig.BTN_ID.RECALL_NEW] = RecallNewBtn,
    [LocalConfig.BTN_ID.MONTHLY_CARD] = MonthlyCardBtn,
    [LocalConfig.BTN_ID.ACT_TIME_LOGIN] = TimeLoginActBtn,
    [LocalConfig.BTN_ID.LUCKY_MISSION] = LuckyMissionBtn
}
function BtnFactory:create(btnId, areaId, ...)
    return (FactoryMap[btnId] or BtnBase).new(btnId, areaId, ...)
end

return BtnFactory
