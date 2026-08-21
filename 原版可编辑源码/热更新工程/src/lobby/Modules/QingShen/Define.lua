local QingShenDefine = {}

-- 请神：各神明对应道具 id
--- 兑换商城 V2 的 business 标识（与 ReqExchangeGoodsListV2 的 businesses 一致）
QingShenDefine.BUSINESS_GAME_PROPPUSH = "game_proppush"

--- 请神装扮槽位（GetEquipProps equip 字段）
QingShenDefine.EQUIP_SLOT = 15

QingShenDefine.QingShenPropId = {
    MaZu = 150935,-- 150864,           -- 请神-妈祖
    GuanDiShengJun = 150936,--150865, -- 请神-关圣帝君
    WenShuPuSa = 150937,--150866,     -- 请神-文殊菩萨
    HuangDaXian = 150938,--150867,    -- 请神-黄大仙
}

-- 请神全屏/飞行特效
local QINGSHEN_ANI_DIR = "animation/GameCommon/qingshen/"

-- 请神桌面Icon出现动画1，不分级别,不分道具ID
QingShenDefine.QS_ICON_ANIM_CX1 = {
    json = QINGSHEN_ANI_DIR .. "eff_qs_icongx.json",
    atlas = QINGSHEN_ANI_DIR .. "eff_qs_icongx.atlas",
    anim = "animation"
}

-- 请神桌面Icon出现动画2（等级动画），不分级别,不分道具ID
QingShenDefine.QS_ICON_ANIM_CX2 = {
    json = QINGSHEN_ANI_DIR .. "eff_qs_icongx2.json",
    atlas = QINGSHEN_ANI_DIR .. "eff_qs_icongx2.atlas",
    anim = "animation"
}

-- 请神桌面Icon动画，分级：1~3
QingShenDefine.QS_ICON_ANIM_LOOP = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_icon.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_icon.atlas",
        anim = {"animation1", "animation2", "animation3"}
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_icon2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_icon2.atlas",
        anim = {"animation1", "animation2", "animation3"}
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_icon3.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_icon3.atlas",
        anim = {"animation1", "animation2", "animation3"}
    },
    [QingShenDefine.QingShenPropId.HuangDaXian] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_icon.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_icon.atlas",
        anim = {"animation1", "animation2", "animation3"}
    }
}

-- 请神动画第一段通用动画，不分级别
QingShenDefine.QS_STAGE1_ANIM = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_mz1.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_mz1.atlas",
        anim = "animation",
        scale = 0.7/0.66667,
        sound = "res/audio/PropAni/qingshen/mazu.mp3",
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_gg1.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_gg1.atlas",
        anim = "animation",
        scale = 0.7/0.66667,
        sound = "res/audio/PropAni/qingshen/guanshengdijun.mp3",
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_ws1.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_ws1.atlas",
        anim = "animation",
        scale = 0.7/0.66667,
        sound = "res/audio/PropAni/qingshen/wenshu.mp3",
    },
    [QingShenDefine.QingShenPropId.HuangDaXian] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_mz1.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_mz1.atlas",
        anim = "animation",
        scale = 0.7/0.66667,
    }
}

-- 请神动画第二段, 分级别，1~3
QingShenDefine.QS_STAGE2_ANIM = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_mz2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_mz2.atlas",
        anim = {"animation1", "animation2", "animation3"},
        scale = 0.7/0.66667,
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_gg2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_gg2.atlas",
        anim = {"animation1", "animation2", "animation3"},
        scale = 0.7/0.66667,
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_ws2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_ws2.atlas",
        anim = {"animation1", "animation2", "animation3"},
        scale = 0.7/0.66667,
    },
    [QingShenDefine.QingShenPropId.HuangDaXian] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_mz2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_mz2.atlas",
        anim = {"animation1", "animation2", "animation3"},
        scale = 0.7/0.66667,
    }
}

-- 整合界面卡片立绘：json 用请神礼包(QingShenLiBao)角色动画，atlas/png 用 QS_STAGE2
local QS_LIBAO_ANI_DIR = "animation/GameCommon/propPushGP/"
QingShenDefine.QS_INTEGRATE_CARD_ANIM = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        json = QS_LIBAO_ANI_DIR .. "bb_dt_hylb_mz.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_mz2.atlas",
        anim = "cx",
        animLoop = "loop",
        scale = 1,
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        json = QS_LIBAO_ANI_DIR .. "bb_dt_hylb_gg.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_gg2.atlas",
        anim = "cx",
        animLoop = "loop",
        scale = 1,
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        json = QS_LIBAO_ANI_DIR .. "bb_dt_hylb_ws.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_ws2.atlas",
        anim = "cx",
        animLoop = "loop",
        scale = 1,
    },
}

-- 请神开局手牌动画
QingShenDefine.QS_HAND_ANIM = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_mz2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_mz2.atlas",
        anim = "animation11",
        sound = "res/audio/PropAni/qingshen/mazu2.mp3",
        scale = 0.7/0.66667,
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_gg2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_gg2.atlas",
        anim = "animation11",
        sound = "res/audio/PropAni/qingshen/guanshengdijun2.mp3",
        scale = 0.7/0.66667,
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_ws2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_ws2.atlas",
        anim = "animation11",
        sound = "res/audio/PropAni/qingshen/wenshu2.mp3",
        scale = 0.7/0.66667,
    },
    [QingShenDefine.QingShenPropId.HuangDaXian] = {
        json = QINGSHEN_ANI_DIR .. "eff_qs_mz2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_qs_mz2.atlas",
        anim = "animation11",
        scale = 0.7/0.66667,
    }
}

-- 购买后爆开动画,不分级别,不分道具ID
QingShenDefine.BKCX_ANIM = {
    json = QINGSHEN_ANI_DIR .. "eff_ty_bkgx.json",
    atlas = QINGSHEN_ANI_DIR .. "eff_ty_bkgx.atlas",
    anim = "animation",
}

-- 购买后飞光点动画,不分级别,不分道具ID
QingShenDefine.FXGD_ANIM = {
    json = QINGSHEN_ANI_DIR .. "eff_ty_fxgd.json",
    atlas = QINGSHEN_ANI_DIR .. "eff_ty_fxgd.atlas",
    anim = "animation",
}

-- 购买后头像运势上升动画（分级别，1~3）
QingShenDefine.YUNSHI_ANIM = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        json = QINGSHEN_ANI_DIR .. "eff_ty_yunshi.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_ty_yunshi.atlas",
        anim = "animation1",
        animLoop = "animation11",
        scale = 1,
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        json = QINGSHEN_ANI_DIR .. "eff_ty_yunshi2.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_ty_yunshi2.atlas",
        anim = "animation1",
        animLoop = "animation11",
        scale = 1,
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        json = QINGSHEN_ANI_DIR .. "eff_ty_yunshi3.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_ty_yunshi3.atlas",
        anim = "animation",
        animLoop = "animation",
        scale = 1,
    },
    [QingShenDefine.QingShenPropId.HuangDaXian] = {
        json = QINGSHEN_ANI_DIR .. "eff_ty_yunshi.json",
        atlas = QINGSHEN_ANI_DIR .. "eff_ty_yunshi.atlas",
        anim = "animation1",
        animLoop = "animation11",
        scale = 1,
    }
}

-- 请神动画循环动画（目前使用求财运福运值满的动画）
QingShenDefine.HEAD_LOOP_SPINE_NAME = "qingshen"
QingShenDefine.HEAD_UP_SPINE_NAME = "qingshen_up"
QingShenDefine.NODE_NAME = "QSHeadCountdown"
QingShenDefine.RENEW_REMIND_NODE_NAME = "QingShenRenewRemind"
--- 请神即将到期续费提醒阈值（秒），可被 allconfig.PropPush.qingShenRenewRemindSec 覆盖
QingShenDefine.RENEW_REMIND_SECONDS_DEFAULT = 30
--- 续费提醒文案（按神明道具 id 随机一条）
QingShenDefine.RENEW_REMIND_TEXTS = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        "赐福快要消失了",
        "神佑要结束了~",
        "圣母即将离去~",
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        "财运加成将结束",
        "神佑要结束了~",
        "帝君即将离去",
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        "祝福即将消失~",
        "神佑要结束了~",
    },
}
-- 附着在头像上的请神父节点，所有请神头像动画都挂在这个节点下
QingShenDefine.HEAD_NODE_ANI_NAME = "QingShenAniParent"
--- 头像循环/升起动画挂点（QingShenAniParent 本地坐标）
QingShenDefine.HEAD_ANI_POS = { x = -55, y = -45 }
--- 倒计时相对 HEAD_ANI_POS 的偏移；最终位置 = HEAD_ANI_POS + offset
QingShenDefine.HEAD_LEFT_TIME_OFFSET = { x = 27, y = 12 } -- 默认 → (21, -23)
QingShenDefine.HEAD_LEFT_TIME_OFFSET_BY_PROP = {
    [QingShenDefine.QingShenPropId.MaZu] = { x = 27, y = 10 }, -- → (21, -25)
}

--- 倒计时节点位置（与 HEAD_ANI_POS 联动）
function QingShenDefine.getHeadLeftTimePos(propId)
    local base = QingShenDefine.HEAD_ANI_POS
    local off = QingShenDefine.HEAD_LEFT_TIME_OFFSET_BY_PROP[tonumber(propId)]
        or QingShenDefine.HEAD_LEFT_TIME_OFFSET
    return cc.p(base.x + off.x, base.y + off.y)
end

--- 桌面 icon 角标「请财神」本地缓存前缀（实际键为 KEY .. userId）
QingShenDefine.ICON_BADGE_SAVE_KEY = "QING_SHEN_ICON_BADGE_"
--- 角标最多展示创房次数（含本场）
QingShenDefine.ICON_BADGE_MAX_CREATE_ROOM = 5

--- 整合界面：每页神祇数量
QingShenDefine.GODS_PER_PAGE = 3
--- 激活神祇卡片放大比例
QingShenDefine.ACTIVE_CARD_SCALE = 1.15

--- 整合界面神祇卡片状态
QingShenDefine.CardState = {
    NotPurchased = 1, --未购买
    PurchasedInactive = 2, --已购买未装裱
    Active = 3, --已装扮，但是可能没时效了
}

--- 神祇展示顺序
QingShenDefine.GOD_LIST = {
    QingShenDefine.QingShenPropId.MaZu,
    QingShenDefine.QingShenPropId.GuanDiShengJun,
    QingShenDefine.QingShenPropId.WenShuPuSa,
    -- QingShenDefine.QingShenPropId.HuangDaXian,
}

local QS_IMG_DIR = "Common/CSB/GameBase/PropPush/Image/GiftPackage/qs/"
QingShenDefine.GOD_IMG = {
    [QingShenDefine.QingShenPropId.MaZu] = QS_IMG_DIR .. "Img_mz2.png",
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = QS_IMG_DIR .. "Img_gg2.png",
    [QingShenDefine.QingShenPropId.WenShuPuSa] = QS_IMG_DIR .. "Img_pus2.png",
    -- [QingShenDefine.QingShenPropId.HuangDaXian] = QS_IMG_DIR .. "Img_mz2.png",
}

QingShenDefine.GOD_NAME = {
    [QingShenDefine.QingShenPropId.MaZu] = "圣母妈祖",
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = "关圣帝君",
    [QingShenDefine.QingShenPropId.WenShuPuSa] = "文殊菩萨",
    -- [QingShenDefine.QingShenPropId.HuangDaXian] = "黄大仙",
}

--- 祝福语：未激活 / 赐福中
QingShenDefine.GOD_BLESS_TEXT = {
    [QingShenDefine.QingShenPropId.MaZu] = {
        inactive = "诚心礼拜，妈祖护佑",
        active = "妈祖赐福中",
        status = "神佑加身，好运连连",
    },
    [QingShenDefine.QingShenPropId.GuanDiShengJun] = {
        inactive = "关帝护佑，财运亨通",
        active = "关圣护佑中",
        status = "财运加持，旗开得胜",
    },
    [QingShenDefine.QingShenPropId.WenShuPuSa] = {
        inactive = "文殊开示，智慧增长",
        active = "文殊祝福中",
        status = "智慧加身，思路大开",
    },
    -- [QingShenDefine.QingShenPropId.HuangDaXian] = {
    --     inactive = "黄大仙庇佑，万事顺遂",
    --     active = "黄大仙护佑中",
    --     status = "仙家护佑，诸事顺利",
    -- },
}

QingShenDefine.INTEGRATE_EVENT_REFRESH = "QING_SHEN_INTEGRATE_REFRESH"

--- 埋点 customize.scene_type：请神整合页 / 请神弹窗
QingShenDefine.ThrowSceneType = {
    Integrate = "请神整合页",
    Popup = "请神弹窗",
}

--- 埋点 oh26042111 page_item_id：点击购买 / 点击请财神图标 / 关闭 / 切换
QingShenDefine.ThrowClickType = {
    Buy = "点击购买",
    OldGod = "点击请财神图标",
    Close = "关闭",
    Switch = "切换",
}

--- 3.3 调整通知教程：活动列表 type（Lobby onRespActList）
--- 仅当活动列表含 type=="god_tips" 时，桌面 Icon 才会尝试弹出「请财神已整合」引导
QingShenDefine.ACT_TYPE_GOD_TIPS = "god_tips"
--- 教程过期时间戳（2026-12-30 00:00:00 本地），之后不再弹出
--- 注意：os.time 在模块加载时求值，依赖设备本地时区
QingShenDefine.GOD_TIPS_EXPIRE_TIME = os.time({ year = 2026, month = 12, day = 30, hour = 0, min = 0, sec = 0 })
--- 桌面「请财神整合」教程本地缓存前缀（实际键 = 前缀 + userId）
QingShenDefine.GOD_TIPS_TABLE_SAVE_KEY = "QING_SHEN_GOD_TIPS_TABLE_"
--- 整合界面首次「请财神在这里」教程本地缓存前缀（实际键 = 前缀 + userId）
QingShenDefine.GOD_TIPS_INTEGRATE_SAVE_KEY = "QING_SHEN_GOD_TIPS_INTEGRATE_"
--- 桌面教程自动关闭秒数
QingShenDefine.GOD_TIPS_TABLE_AUTO_CLOSE_SEC = 10
--- 整合界面教程自动关闭秒数
QingShenDefine.GOD_TIPS_INTEGRATE_AUTO_CLOSE_SEC = 5
QingShenDefine.GOD_TIPS_TABLE_TEXT = "【请财神】整合到请神啦，打开界面就可以正常使用"
QingShenDefine.GOD_TIPS_INTEGRATE_TEXT = "【请财神】在这里哦~"
QingShenDefine.GOD_TIPS_BTN_TEXT = "知道啦~"

return QingShenDefine
