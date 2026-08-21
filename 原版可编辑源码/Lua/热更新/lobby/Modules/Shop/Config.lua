local ShopConfig = { }

ShopConfig.GoodsType = {
    ["Subscription"] = "Subscription" ,
    ["Non-subscription"] = "Non-subscription",
}

-- 特殊标签定义
ShopConfig.SpecialTag = {
    NONE = 0,
    NEW = "new",    -- 最新上架
    HOT = "hot",    -- 热门购买
    FAV = "fav",    -- 我的常用
    DIAMOND = "zs",
    CARD = "fk",
    GOLD = "jb",
    MARKER = "marker",
    SHUFFLE = "shuffle",
    VIP = "vip",
    FRAME = "txk",
    YPQ = "ypq",
    PB = "pb",
    GIFT = "gift",
    TABLEBG = "tablebg",
    ENTERANI = "enterani",
    LINGQI = "lingqi",
    FUQI = "happyVal",
    WECHATPACKTE = "wechatRedPack",
    LIQUAN = "liquan",
    SXVIP = "sxvip",  --时效会员
    HUDONG = "hudong",
    ZHUANGBAN = "zhuangban",
    COUPON = "lqsc",
}

ShopConfig.ProductDefaultIcon = {
    ["zs"] = "ico_diamond_%d.png",
}

-- 需要依赖本地房卡金币数据地区
ShopConfig.ProductIconLocal = {
    [7127] = 1,
    [7105] = 1,
    [7109] = 1,
    [7136] = 1
}

ShopConfig.ProductIcon = {
    ["fk"] = "ico_card_%d.png",
    ["jb"] = "ico_gold_%d.png", 
}

-- 风信后台商品分类定义(动画依赖)
ShopConfig.ItemsModifyKey = {
    YPQ = "yapaiqi",
    FRAME = "touxiangkuang",
    MARKER = "marker",
    SHUFFLE = "shuffle",
    PB = "paibei",
    TABLEBG = "zhuobu",
    ENTERANI = "enterani",
}

-- 角标相关定义
ShopConfig.JiaoBiaoBase = "shop_new_items_icon_"
ShopConfig.DefaultPos = { posX = 45, posY = 332 }
ShopConfig.JiaoBiao = {
    { iconName = "hot", posX = 40, posY = 327, },
    { iconName = "new", posX = 40, posY = 327, },
    { iconName = "tj", posX = 40, posY = 327, },
    { iconName = "first" },
    { iconName = "th" },
    { iconName = "xs" },
    { iconName = "xl" },
    { iconName = "zs" },
    { iconName = "2d" },
}

-- 时间设置
ShopConfig.HourSet = {
    ["Day"] = 86400,
    ["Hour"] = 3600,
    ["Minute"] = 60,
}

-- 活动类型
ShopConfig.ProductAct = {
    FIRST = "first",        -- 首单优惠
    PROMOTION = "promotion",    -- 特惠
    DISCOUNT = "discount",     -- 折扣
    SEND = "send",         -- 买赠
}

-- 商品类型
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
    TABLEBG = 16,-- 局内桌布水印
    ENTERANI = 17,-- 局内入场动画
    CAIYUN = 19,    -- 拜财神
    CAIYUNNEW = 20, -- 求财运
    GOLDHALL = 21, -- 金币大厅兑换商城
    CHANGECARD = 22, -- 换牌卡
}

-- 显示的商品类型名字
-- ShopConfig.ProductTypeDes = {
--     "房卡","金币","钻石","记牌器","礼券","洗牌道具","一卡通","会员","包厢会员","头像框","压牌器","牌背","宝箱","灵气值","礼包","桌布","入场动画"
-- }

ShopConfig.ProductDetailIcon = {
    ["propDiamndID"] = "ico_diamond.png",
    ["roomCardID"] = "ico_card.png",
    ["gold"] = "ico_gold.png",
    ["rmb"] = "ico_rmb.png",
    ["couponID"] = "ico_liquan_1.png", 
}

-- 各个商品道具兑换返回提示
ShopConfig.NotEnoughPropsTips = {
    ["propDiamndID"] = "ERROR_SHOP_DIAMOND_NOT_ENOUGH",
    ["roomCardID"] = "ERROR_SHOP_ROOM_CARD_NOT_ENOUGH",
    ["gold"] = "ERROR_SHOP_GOLD_NOT_ENOUGH",
    ["couponID"] = "ERROR_SHOP_COUPON_NOT_ENOUGH"
}

-- 支持快捷兑换的商品类型
ShopConfig.QuickReChargeType = {
    "gold",
    "room_card",
    "marker",
    "shuffle",
}

-- 快捷兑换与task约定的gifttype
ShopConfig.GiftType = {
    GOLD = 88885051,
    ROOMCARD = 88885052,
    MARKER = 88885053,
    YPQ = 88885054,
    FREAME = 88885055,
    PB = 88885056,
    TABLEBG = 88885057,
    ENTERANI = 88885058,
}

ShopConfig.DressUpProp = {
    ShopConfig.ProductType.YPQ,
    ShopConfig.ProductType.FRAME,
    ShopConfig.ProductType.PB,
    ShopConfig.ProductType.TABLEBG,
    ShopConfig.ProductType.ENTERANI,
}

--------------------------------------以下为动画配置--------------------------------------

-- 道具id动画
ShopConfig.PropsIdAni = {
    [150326] =
    {
        path = "animation/Lobby/Base/head-tx-zcjb/head-tx-zcjb.ExportJson",
        amatureName = "head-tx-zcjb",
        animationName = "Animation1",
    },
}

-- 桌布动画
ShopConfig.TableBgAni = {
    path = "animation/Lobby/Base/sy_light/sy_light.ExportJson",
    amatureName = "sy_light",
    animationName = "Animation1",
}

-- 压牌器动画
ShopConfig.YaPaiQiAni = {
    path = "animation/Lobby/Base/zjb_ypq_sczs_ani/",
    ske = "zjb_ypq_sczs_ani_ske.json",
    tex = "zjb_ypq_sczs_ani_tex.json",
    armatureName = "Armature",
    dragonBonesName = "zjb_ypq_sczs_ani",
    animationName = "zjb_ypq_sc"
}

ShopConfig.PropName = function(curShopPropId)
    if (not curShopPropId) then
        return
    elseif (curShopPropId == XH.areaData:getPropRoomCardID()) then
        return "房卡"
    elseif (curShopPropId == XH.areaData:getPropDiamndID()) then
        return "钻石"
    elseif (curShopPropId == XH.areaData:getPropCouponID()) then
        return "礼券"
    end
    return
end

ShopConfig.TabListNames = {
    {
        NameStr = "房卡",
        NameImg = "shop_new_text_tab_fangka.png"
    },
    {
        NameStr = "金币",
        NameImg = "shop_new_text_tab_jinbi.png"
    },
    {
        NameStr = "钻石充值",
        NameImg = "shop_new_text_tab_zuanshichongzhi.png"
    },
    {
        NameStr = "热门推荐",
        NameImg = "shop_new_text_tab_rementuijian.png"
    },
    {
        NameStr = "会员",
        NameImg = "shop_new_text_tab_huiyuan.png"
    },
    {
        NameStr = "活动礼包",
        NameImg = "shop_new_text_tab_huodonglibao.png"
    },
    {
        NameStr = "记牌器",
        NameImg = "shop_new_text_tab_jipaiqi.png"
    },
    {
        NameStr = "礼券商城",
        NameImg = "shop_new_text_tab_liquanshangcheng.png"
    },
    {
        NameStr = "装扮道具",
        NameImg = "shop_new_text_tab_zhuangbandaoju.png"
    },
    {
        NameStr = "钻石充值",
        NameImg = "shop_new_text_tab_zuanshichongzhi.png"
    },
}

return ShopConfig