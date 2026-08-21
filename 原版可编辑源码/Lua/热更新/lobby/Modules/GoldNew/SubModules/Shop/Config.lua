local LocalConfig = import("...Configs.LocalConfig")

local ShopConfig = {}
-- 一级页签
ShopConfig.SpecialTag = {
    GIFT = "gift",
    SXVIP = "sxvip",
    GOLDVIP = "vip",
    REC = "rec", -- 推荐
    DIAMOND = "zs",
    ROOMCARD = "fk",
    GOLD = "jb",
    PROP = "daoju",
    HUDONG = "hudong",
    ZHUANGBAN = "zhuangban",
    COUPON = "lqsc",
    ENTERANI = "enterani",
    ZUOJIA = "prop_rqdh",
}

ShopConfig.ProductDefaultIcon = {["zs"] = LocalConfig.IMG_PATH.SHOP .. "Img_zs_%d.png"}

-- 风信后台商品分类定义(动画依赖)
ShopConfig.ItemsModifyKey = {
    YPQ = "ypq",
    FRAME = "txk",
    MARKER = "prop_jpq",
    SHUFFLE = "shuffle",
    PB = "mahback",
    TABLEBG = "tablebg",
    ENTERANI = "prop_rqdh"
}

-- 支持快捷兑换的商品类型
ShopConfig.QuickReChargeType = {"jb", "gold", "room_card", "marker", "shuffle"}

ShopConfig.ProductDetailIcon = {
    ["propDiamndID"] = "hall/Image/NewGoldHall/Main/Img_ZS.png",
    ["roomCardID"] = "hall/Image/NewGoldHall/Main/Img_FK.png",
    ["gold"] = "hall/Image/NewGoldHall/Main/Img_JB.png",
    ["rmb"] = "ico_rmb.png",
    ["couponID"] = "hall/Image/NewGoldHall/Main/Img_LQ.png"
}

-- 各个商品道具兑换返回提示
ShopConfig.NotEnoughPropsTips = {
    ["propDiamndID"] = "ERROR_SHOP_DIAMOND_NOT_ENOUGH",
    ["roomCardID"] = "ERROR_SHOP_ROOM_CARD_NOT_ENOUGH",
    ["gold"] = "ERROR_SHOP_GOLD_NOT_ENOUGH",
    ["couponID"] = "ERROR_SHOP_COUPON_NOT_ENOUGH"
}

--------------------------------------以下为动画配置--------------------------------------

-- 道具id动画
ShopConfig.PropsIdAni = {
    [150326] = {path = "animation/Lobby/Base/head-tx-zcjb/head-tx-zcjb.ExportJson", amatureName = "head-tx-zcjb", animationName = "Animation1"}
}

-- 桌布动画
ShopConfig.TableBgAni = {path = "animation/Lobby/Base/sy_light/sy_light.ExportJson", amatureName = "sy_light", animationName = "Animation1"}

-- 压牌器动画
ShopConfig.YaPaiQiAni = {
    path = "animation/Lobby/Base/zjb_ypq_sczs_ani/",
    ske = "zjb_ypq_sczs_ani_ske.json",
    tex = "zjb_ypq_sczs_ani_tex.json",
    armatureName = "Armature",
    dragonBonesName = "zjb_ypq_sczs_ani",
    animationName = "zjb_ypq_sc"
}

local secondTitleImg = {
    ["记牌器"] = "Img_j",
    ["加倍卡"] = "Img_jb",
    ["角色"] = "Img_js",
    ["牌背"] = "Img_pb",
    ["牌桌"] = "Img_pz",
    ["桌布"] = "Img_pz",
    ["入场动画"] = "Img_rcdh",
    ["入场卡"] = "Img_rck",
    ["特效"] = "Img_tx",
    ["头像框"] = "Img_txk",
    ["洗牌券"] = "Img_xp",
    ["压牌器"] = "Img_ypq",

    ["表情包"] = "Img_bq",
    ["功能道具"] = "Img_gn",
    ["聊天语音"] = "Img_ltyy",
    ["转运道具"] = "Img_zy",
    ["称号"] = "Img_ch"

}
ShopConfig.getSecondTitleImg = function(name, isOn)
    if not secondTitleImg[name] then
        return nil
    end
    return string.format("%s/%s_%s.png", LocalConfig.IMG_PATH.SHOP .. "txt", secondTitleImg[name] or "", isOn and "on" or "off")
end

-- 商城2.0 对应业务场景名
ShopConfig.BussinessName = {GoldLobbyDiamond = "gold_lobby", GoldLobbyExchange = {"gold_lobby_exchange", "fk_lobby_exchange", "lq_lobby_exchange", "jbhy_gift"}}
-- 回流用户的商城
ShopConfig.BussinessNameRecall = {GoldLobbyDiamond = "gold_lobby_recall", GoldLobbyExchange = {"gold_lobby_exc_re", "fk_lobby_exchange_re", "lq_lobby_exchange", "jbhy_gift"}}

ShopConfig.ERR_CODE = {
    [29001] = "下单失败，无购买资格~", -- 没有商城资格
    [29002] = "订单处理中，请稍后尝试~", -- 商品购买中（限购类还有未支付的订单等待支付)
    [29003] = "兑换失败，已达限购数量~",
    [29004] = "抱歉，商品不存在~",
    [29005] = "兑换失败，接口异常~",
    [29006] = "兑换失败，道具不支持~",
    [29007] = "兑换失败，道具不足",
    [29008] = "兑换失败，库存不足~"
}
ShopConfig.getErrMsg = function(errCode)
    return ShopConfig.ERR_CODE[errCode or -1] or "未知错误" .. (errCode or -1)
end

ShopConfig.ZhuangBanAllType = {"table_bg","mahback","head_frame","prop_rqdh", "zb_zq","prop_title","card_holder", "prop_zpq", "prop_bsq"}
ShopConfig.isZhuangBanType = function(type)
    return table.indexof(ShopConfig.ZhuangBanAllType,type) ~= false
end

return ShopConfig
