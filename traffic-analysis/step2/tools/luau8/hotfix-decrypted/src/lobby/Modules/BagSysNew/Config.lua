-- BagList: 对应ShopConfig的 ShopConfig.ProductType
--  10:头像框，11:压牌器，12:牌背，4:记牌器，6:洗牌券, 16:局内桌布水印, 17:入场动画
--[[--商品类型
ShopConfig.ProductType = {
    NONE = 0,
    CARD = 1,
    GOLD = 2,
    DIAMOND = 3,
    MARKER = 4,
    LIQUAN = 5,
    SHUFFLE = 6,
    IPASS = 7,
    VIP = 8,
    FREEQUAN = 9,
    FRAME = 10,
    YPQ = 11,
    PB = 12,
    BOX = 13,
    LINGQI = 14,
    GIFT = 15,
    TABLEBG = 16, --局内桌布水印
    ENTERANI = 17, --局内入场动画
}
]]
local tab = {
    GameMenuList = {
        { ConfID = 900038,        ShiName = "丽水",        BagList = { 10, 18, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 73    },
        { ConfID = 900037,        ShiName = "温州(茶)",    BagList = { 4, 10, 11, 12, 6, 16, 17 }, BHasBag = 1,        ShopID = 75    },
        { ConfID = 900017,        ShiName = "温州(熟)",    BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 92    },
        { ConfID = 900025,        ShiName = "杭州(宝宝)", BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 162    },
        { ConfID = 900021,        ShiName = "杭州",        BagList = { 10, 11, 12, 16, 17 },        BHasBag = 1,        ShopID = 77    },
        { ConfID = 900020,        ShiName = "金华",        BagList = { 10, 11, 12, 16, 17 },        BHasBag = 1,        ShopID = 112    },
        { ConfID = 900036,        ShiName = "瑞安",        BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 114    },
        { ConfID = 900031,        ShiName = "乐清",        BagList = { 10, 11, 12, 17 },            BHasBag = 1,        ShopID = 121    },
        { ConfID = 900003,        ShiName = "衢州",        BagList = { 10, 11, 12, 16, 17 },        BHasBag = 1,        ShopID = 118    },
        { ConfID = 900008,        ShiName = "湖州",        BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 116    },
        { ConfID = 900023,        ShiName = "台州",        BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 72    },
        { ConfID = 900043,        ShiName = "舟山",        BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 124    },
        { ConfID = 900039,        ShiName = "青田",        BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 84    },
        { ConfID = 900007,        ShiName = "绍兴",        BagList = { 10, 11, 12, 4, 17 },        BHasBag = 1,        ShopID = 119    },
        { ConfID = 900046,        ShiName = "绍兴3D",    BagList = { 10, 4, 17 },                BHasBag = 1,        ShopID = 163    },
        { ConfID = 900006,        ShiName = "宁波",        BagList = { 10, 11, 12, 4, 16, 17 },    BHasBag = 1,        ShopID = 120    },
        { ConfID = 40165,        ShiName = "嘉兴",        BagList = { 10, 11, 12, 4, 16, 17 },        BHasBag = 1,        ShopID = 117    },
        { ConfID = 900029,        ShiName = "余姚",        BagList = { 10, 11, 12, 4, 16, 17 },        BHasBag = 1,        ShopID = 122    },
    }
}

--灰度
local DEBUG = require("app.Config.GlobalConfig").IsDebug
if DEBUG then
    tab = {
        GameMenuList = {
            { ConfID = 900038, ShiName = "丽水", BHasBag = 1, ShopID = 18    },
        }
    }
end

-- ConfID
tab.GameMenuListByConfID = {}
for _, rec in pairs(tab.GameMenuList) do
    tab.GameMenuListByConfID[rec.ConfID] = rec
end

tab.Enum = {
}

tab.PROP_ID_DOUBLE_CARD = 150733    -- 加倍卡
tab.PROP_ID_PEAK_RACE = 101859    -- 巅峰赛门票

-- 50道具类型
tab.Prop50 = {
    [tab.PROP_ID_DOUBLE_CARD] = {
        prop_id = tab.PROP_ID_DOUBLE_CARD,
        burse_type = 6
    },
    [tab.PROP_ID_PEAK_RACE] = {
        prop_id = tab.PROP_ID_PEAK_RACE,
        burse_type = 6
    }
}

--入场动画配置
tab.ENTER_ANI_CONFIG = {
    [150300] = {--财神入场
        path = "animation/GameCommon/EnterAni/Ios_caishen_2/", 
        ske = "caisheny_ske.json", 
        tex = "caisheny_tex.json", 
        armatureName = "armatureName", 
        dragonBonesName = "caisheny", 
        animationName = "animation1",
    },
    [150301] = {--貔貅入场
        path = "animation/GameCommon/EnterAni/Ios_pixiu/", 
        ske = "Ios_pixiu_ske.json", 
        tex = "Ios_pixiu_tex.json", 
        armatureName = "Armature", 
        dragonBonesName = "Ios_pixiu", 
        animationName = "newAnimation",
    },
    [150302] = {--豪车入场
        path = "animation/GameCommon/EnterAni/ZJB_haocheruchang/", 
        ske = "ZJB_haocheruchang_ske.json", 
        tex = "ZJB_haocheruchang_tex.json", 
        armatureName = "Armature", 
        dragonBonesName = "ZJB_haocheruchang", 
        animationName = "newAnimation",
    },
    [150303] = {--鼠你最强入场
        path = "animation/GameCommon/EnterAni/ZJB_shuniandaji/", 
        ske = "ZJB_shuniandaji_ske.json", 
        tex = "ZJB_shuniandaji_tex.json", 
        armatureName = "Armature", 
        dragonBonesName = "ZJB_shuniandaji", 
        animationName = "newAnimation",
    },
    [150355] = {--貔貅入场
        path = "animation/GameCommon/EnterAni/Ios_pixiu/", 
        ske = "Ios_pixiu_ske.json", 
        tex = "Ios_pixiu_tex.json", 
        armatureName = "Armature", 
        dragonBonesName = "Ios_pixiu", 
        animationName = "newAnimation",
    },
    [150671] = {--豪车入场
        path = "animation/GameCommon/EnterAni/ZJB_haocheruchang/", 
        ske = "ZJB_haocheruchang_ske.json", 
        tex = "ZJB_haocheruchang_tex.json", 
        armatureName = "Armature", 
        dragonBonesName = "ZJB_haocheruchang", 
        animationName = "newAnimation",
    },
    [150691] = { --虎虎生威入场
        path = "animation/GameCommon/EnterAni/hu/", 
        ske = "hu_ske.json", 
        tex = "hu_tex.json", 
        armatureName = "Armature", 
        dragonBonesName = "hu", 
        animationName = "newAnimation",
    },
    -- [150301] = {
    --     path = "animation/GameCommon/EnterAni/test/", 
    --     tex = "skeleton.json", 
    --     ske = "skeleton.atlas", 
    --     armatureName = "animation", 
    --     loop = false,
    --     spine = true, 
    --     skin = "2",
    -- }
}

tab.getZuoJiaAniCfg = function(id)
    if id < 150801 then
        return tab.ENTER_ANI_CONFIG[id]
    end
    return {
        path = "animation/GameCommon/EnterAni/car/", 
        tex = "zzb_rcdj_xqc.json", 
        ske = "zzb_rcdj_xqc.atlas", 
        armatureName = "hou", 
        loop = false,
        spine = true, 
    }
end
return tab^