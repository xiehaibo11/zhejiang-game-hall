local PropPushDefine = {}
local QingShenPropId = require("lobby.Modules.QingShen.Define").QingShenPropId

XH.PropPushTest = false
if XH.PropPushTest then
    XH.PropPushLevel = 1
    XH.PropPushPropId = QingShenPropId.GuanDiShengJun
end

-- 道具推送类型
PropPushDefine.PushType = {
    None = 0,
    QiuCaiYun = 1,   -- 求财运
    BaiCaiShen = 2, -- 拜财神
    QingShen = 3,    -- 请神
    XiPai = 4,       -- 洗牌
    XiQiePai = 5,    -- 洗切牌
    HuanPai = 6,     -- 换牌
    LiBao = 7,       -- 礼包（含破冰/金蛋/请神礼包三种样式，见 GiftPackStyle）
}

--[[
礼包样式（历史 PushType.LiBao）：原由礼包模块按 giftPackPropIds 序号映射破冰/金蛋；PropPushGP 已移除，仅保留常量供资源路径引用；
#optProps > 0 时判定为请神礼包（QingShenLiBao）。服务端 giftStyle / style 为兜底字段。

  PoBing(1)        : 破冰礼包。展示倒计时，须在 recommendTime 归零前完成钻石兑换。
  JinDan(2)        : 金蛋礼包。默认未敲破：隐藏附赠/价格/购买；点击金蛋播破裂动画后再展示。
  QingShenLiBao(3) : 请神礼包。点击购买前须通过 GiftPackBonusSelectView 完成附赠 3 选 1（数据源 optProps）。
]]
PropPushDefine.GiftPackStyle = {
    PoBing = 1,        -- 破冰：倒计时内钻石兑换
    JinDan = 2,        -- 金蛋：敲破前隐藏赠送/价格/购买，敲破后展示
    QingShenLiBao = 3, -- 请神礼包：购买前需附赠 3 选 1 确认
}

--- 礼包推送兑换商城 V2 的 business 标识（ReqExchangeGoodsListV2 / reqExchangeGoodsV2 共用）
PropPushDefine.BUSINESS_GAME_PROPPUSH_GIFTPACK = "game_proppush"

local QINGSHEN_ANI_DIR = "animation/GameCommon/qingshen/"
PropPushDefine.Push_QingShen = {
    dir = QINGSHEN_ANI_DIR,
    slot = QINGSHEN_ANI_DIR .. "eff_qs_gg_animation.json",
    anim = {[0] = "animation0_1", [1] = "animation1_1", [2] = "animation2_1", [3] = "animation3_1"},
    animLoop = {[0] = "animation0_2", [1] = "animation1_2", [2] = "animation2_2", [3] = "animation3_2"},
    [QingShenPropId.MaZu] = {
        fileName = "eff_qs_gg",
        sound = "res/audio/PropAni/qingshen/mazu2.mp3",
    },
    [QingShenPropId.GuanDiShengJun] = {
        fileName = "eff_qs_gg3",
        sound = "res/audio/PropAni/qingshen/guanshengdijun2.mp3",
    },
    [QingShenPropId.WenShuPuSa] = {
        fileName = "eff_ws_gg",
        sound = "res/audio/PropAni/qingshen/wenshu2.mp3",
    },
}
-- 推送其他道具的界面弹出通用动画
local PROPPUSH_ANI_DIR = "animation/GameCommon/propPush/"
--- 礼包推送 spine 动画（三种样式各自独立资源，目录 animation/GameCommon/propPush/giftPack/）
--- 金蛋样式额外字段 animBreak：敲破时播放的破裂动画名
local GIFT_PACK_ANI_DIR = "animation/GameCommon/propPushGP/"
PropPushDefine.Push_GiftPack = {
    dir = GIFT_PACK_ANI_DIR,
    [PropPushDefine.GiftPackStyle.PoBing] = {
        fileName = "bb_dt_zylb",
        anim = "cx",
        animLoop = "loop",
    },
    [PropPushDefine.GiftPackStyle.JinDan] = {
        fileName = "bb_dt_jdlb",
        anim = "cx",       -- 未敲破
        animBreak = "za", -- 破裂
        animLoop = "loop",  -- 破裂后循环
        slot = GIFT_PACK_ANI_DIR .. "bb_dt_jdlb.json"
    },
    [PropPushDefine.GiftPackStyle.QingShenLiBao] = {
        fileName = "bb_dt_hylb",
        anim = "cx2",
        animLoop = "loop2",
        slot = GIFT_PACK_ANI_DIR .. "bb_dt_hylb.json",
    },
}

PropPushDefine.Push_OtherCommon = {
    dir = PROPPUSH_ANI_DIR,
    slot = PROPPUSH_ANI_DIR .. "eff_xqp_db_animation.json",
    btnAni = {
        fileName = "eff_xqp_ansg",
        anim = "animation",
    },
    fireAni = {
        fileName = "eff_xqp_cbsg",
        anim = "animation",
    },
    main = {
        fileName = "eff_xqp_db",
        anim = "animation",
    },
    flower = {
        fileName = "eff_xqp_ztgx",
        anim = "animation1",
        animLoop = "animation2"
    },
}

--- 推送主体（除请神外）的 Title + 道具展示配置：
---   title : 顶部 Title 图（plist 内资源名），必填
---   icon  : 静态道具 Icon 图（plist 内资源名），可选
---   ani   : spine 动画配置，可选；存在则优先以动画展示道具
---     · dir      : spine 资源目录，缺省走 PROPPUSH_ANI_DIR
---     · fileName : spine 资源文件名（不带扩展名）
---     · anim     : 动画名。可以是字符串（所有游戏共用），
---                  也可以是 { mahjong = "...", poker = "..." } 形式按游戏类型选择
--- 至少需要配置 icon 或 ani 其中之一，否则该 propId 推送会被直接关闭。
PropPushDefine.ICON = {
}

PropPushDefine.BtnText = {
    [PropPushDefine.PushType.QingShen] = "请神",
    [PropPushDefine.PushType.QiuCaiYun] = "祈福",
    [PropPushDefine.PushType.BaiCaiShen] = "祈福",
    [PropPushDefine.PushType.XiPai] = "洗牌",
    [PropPushDefine.PushType.XiQiePai] = "洗切牌",
    [PropPushDefine.PushType.HuanPai] = "换牌",
    [PropPushDefine.PushType.LiBao] = "购买",
}

PropPushDefine.PushText = {
    [PropPushDefine.PushType.QingShen] = "请\n神",
    [PropPushDefine.PushType.QiuCaiYun] = "求\n财\n运",
    [PropPushDefine.PushType.BaiCaiShen] = "拜\n财\n神",
    [PropPushDefine.PushType.XiPai] = "洗\n牌",
    [PropPushDefine.PushType.XiQiePai] = "洗\n切\n牌",
    [PropPushDefine.PushType.HuanPai] = "换\n牌",
    [PropPushDefine.PushType.LiBao] = "礼\n包",
}

--- 各礼包样式附赠道具展示槽位数（破冰最多 5 个，金蛋/请神礼包 3 个）
PropPushDefine.GiftPackBonusMaxCount = {
    [PropPushDefine.GiftPackStyle.PoBing] = 5,
    [PropPushDefine.GiftPackStyle.JinDan] = 5,
    [PropPushDefine.GiftPackStyle.QingShenLiBao] = 3,
}

--- 礼包样式 -> 顶部 Title 图（plist 内资源名，需美术产出 PropPush_Img_bt7~9.png）
PropPushDefine.GiftPackTitle = {
    [PropPushDefine.GiftPackStyle.PoBing] = "PropPush_Img_bt7.png",
    [PropPushDefine.GiftPackStyle.JinDan] = "PropPush_Img_bt8.png",
    [PropPushDefine.GiftPackStyle.QingShenLiBao] = "PropPush_Img_bt9.png",
}

PropPushDefine.LOCAL_JINDAN_BROKEN_KEY = "LOCAL_PROPPUSH_GP_JINDAN_BROKEN"

return PropPushDefine
