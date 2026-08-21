local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldStoreDefine = {}

-- 商城金币typeid
GoldStoreDefine.GOLD_TYPE = 730
GoldStoreDefine.GOLD_TYPE_DISCOUNT = 754
if GoldAreaConfig.BridgeIsDebug then
    GoldStoreDefine.GOLD_TYPE = 568
    GoldStoreDefine.GOLD_TYPE_DISCOUNT = 579
end

-- 类型
GoldStoreDefine.TYPE = {GOLD = 1, DIAMOND = 2, GOLD_DISCOUNT = 3}

-- 钻石商城配置
GoldStoreDefine.SHOPCONFIG = {ZHEJIANG = {ShopAppId = 1432, ShopPackgeId = 5044}}
GoldStoreDefine.HLD_ID = 101473
return GoldStoreDefine
