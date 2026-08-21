local LobbyConfig = {}

LobbyConfig.DEVICE_PLATFORM = {
    ALL = 0,
    ANDROID = 1,
    IOS = 2
}

LobbyConfig.ICON_TIP_TEXT_TYPE = {
    BOTTOM = 1,
    TOP = 2,
    RIGHT = 3
}

LobbyConfig.ICON_TIP_BUTTON_STYLE = {
    STYLE_ONE = 1
}

LobbyConfig.RedPointResName = "hall/Image/lobbyNew/Img_redpoint.png"
LobbyConfig.RedPointResNameActIcon = "lobby_act_Img_yb.png"
LobbyConfig.RedPointResNameActBg = "lobby_act_Img_hd_red_di.png"
LobbyConfig.TipTextConfig = {
    [LobbyConfig.ICON_TIP_TEXT_TYPE.BOTTOM] = {
        Font = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
        FontSize = 32,
        TextColor = cc.c3b(0x9b, 0x50, 0x36),
        TextAnchorPoint = cc.p(0.5, 0.5),
        TextPositionY = 38,
        PlistName = "cocosStudio/hall/Image/lobbyNew/_Plist.plist",
        BgResName = "hall/Image/lobbyNew/Img_tips.png",
        BgArrowResName = "hall/Image/lobbyNew/Img_tips_sj.png",
        AnchorPoint = cc.p(0.5, 0),
        Scale9Enabled = true,
        CapInsets = cc.rect(25, 23, 20, 20),
        OffSetX = 0
    },
    [LobbyConfig.ICON_TIP_TEXT_TYPE.TOP] = {
        Font = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
        FontSize = 30,
        TextColor = cc.c3b(201, 90, 41),
        TextAnchorPoint = cc.p(0.5, 0.5),
        TextPositionY = -30,
        BgResName = "lobby_icon_tip_bg.png",
        AnchorPoint = cc.p(0, 1),
        Scale9Enabled = true,
        CapInsets = cc.rect(125, 125, 70, 70),
        OffSetX = 35
    },
    [LobbyConfig.ICON_TIP_TEXT_TYPE.RIGHT] = {
        Font = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
        FontSize = 30,
        TextColor = cc.c3b(175, 112, 60),
        TextAnchorPoint = cc.p(0.5, 0.5),
        TextPositionY = 31,
        BgResName = "meun_icon_qi_pao.png",
        AnchorPoint = cc.p(1, 0.5),
        Scale9Enabled = true,
        CapInsets = cc.rect(39, 17, 40, 20),
        OffSetX = 0
    }
}

LobbyConfig.TipNewsConfig = {
    ResName = "lobby_mail_tip_news.png",
    AnchorPoint = cc.p(0.5, 0)
}

LobbyConfig.TipNewAwardConfig = {
    ResName = "lobby_mail_tip_new_award.png",
    AnchorPoint = cc.p(0.5, 0)
}

LobbyConfig.MENUBAR_ID = {
    MAIN_TOP = 1,
    MAIN_BOTTOM_RIGHT = 2,
    MAIN_BOTTOM_LEFT = 3,
    MAIN_RIGHT = 4,
    MAIN_LEFT = 5,
    MAIN_MORE = 6,
    GOLD_TOP = 7,
    GOLD_BOTTOM_RIGHT = 8,
    GOLD_BOTTOM_LEFT = 9,
    GOLD_RIGHT = 10,
    GOLD_LEFT = 11,
    GOLD_MORE = 12,
    UNION_GAME = 13
}

LobbyConfig.ICON_POS_TYPE = {
    LOBBY_LONG = 1,
    LOBBY_SHORT = 2,
    GOLD_LONG = 3,
    GOLD_SHORT = 4
}

LobbyConfig.ICON_DATA = {
    [1] = "match_long",
    [2] = "match_short",
    [3] = "gold_long",
    [4] = "gold_short"
}

-- 大厅Icon图标ID
LobbyConfig.ICON_ID = {
    SHANG_CHENG = 1001, -- 商城
    HUO_DONG = 1002, -- 活动
    GUI_ZE = 1003, -- 规则
    GONG_GAO = 1004, -- 公告
    ZHAN_JI = 1005, -- 战绩
    SHE_ZHI = 1006, -- 设置
    GENG_DUO = 1007, -- 更多
    YAO_QING = 1008, -- 邀请(温茶)
    JIAN_KANG_XU_ZHI = 1010, -- 健康须知
    FANG_DB = 1011, --(废弃)
    BANG_DING_SHOU_JI = 1012, -- 绑定手机
    DUI_HUAN = 1015, -- 兑奖(废弃)
    FEN_XAING = 1017, -- 分享
    YOU_JIAN = 1018, -- 邮件
    KE_FU = 1019, -- 客服
    BEI_BAO = 1021, -- 背包
    ZHE_JIANG_XIN_WEN = 1022, -- 新闻
    HAO_YOU_XI_TONG = 1023, -- 好友系统(废弃)
    TE_HUI_SHANG_CHENG = 1024, -- 特惠商城(废弃)
    WX_PUBLIC = 1025, -- 公众号
    APP_UPDATE_TIP = 1026, -- 更新提示(废弃)
    ZHUANG_BAN = 1027, -- 装扮
    DIAN_FENG_SAI = 1028, -- 巅峰赛
    ------------------------------活动开始------------------------------
    GENG_XIN_FU_LI = 2005, -- 更新福利(废弃)
    HUI_GUI_LI_BAO = 2006, -- 回归礼包(废弃,BackActConfig.isShowArea已全部下架)
    KAN_JIA_HUO_DONG = 2007, -- 砍价活动(废弃)
    MEI_RI_CHOU_JIANG = 2008, -- 每日抽奖(已隐藏入口)
    XIAN_SHI_YOU_HUI = 2010, -- 限时优惠(原金币入口,已废弃)
    ZHE_KOU_LI_BAO = 2011, -- 折扣礼包(原金币入口,已废弃)
    NATIONAL_DAY_ACT = 2012, -- 国庆活动(废弃)
    SHARE_HMQ_ACT = 2013, -- 分享活动
    LUCKY_TURN_TABLE = 2014, -- 幸运转盘活动(入口已隐藏，移到获取金币界面)
    TOPON_PH_FEE = 2016, -- topon 话费(没配置入口显示)
    CREATE_TEA_HOUSE = 2019, -- 温茶引导创圈活动(废弃)
    NEW_PALY_TYPE_C = 2020, -- 新玩法活动C端(废弃)
    ------------------------------联运开始------------------------------
    LIAN_YUN_ROOM = 3000, --联运大厅
    JUE_ZHAN_SHA_YI = 3001, -- 决战
    QIAN_PAO_BU_YU = 3002, -- 千炮捕鱼
    YI_DAO_CHUAN_SHI = 3003, -- 传奇
    NEW_VIP = 3004, -- vip(原金币入口,已废弃)
    PRAY_ACT = 3009, --祈福活动(入口隐藏)
    LAYOR_DAY_GIFT = 3010, --51礼包(废弃)
    BUSINESS_ACT = 3011, --比赛场B端活动(废弃)
    BU_YU_DA_JIANG_SAI = 3012, --捕鱼大奖赛(废弃)
    FOUR_TO_TWO_TEA_POP = 3013, --比赛场4转2(废弃)
    DA_TIAN_SHI_ZHI_JIAN = 3014, --大天使之剑
    LING_MENG_ZHI_BO = 3015, --羚萌直播
    RE_XUE_FENG_SHEN = 3017, --热血封神
    DOU_LUO_DA_LU = 3018, --斗罗大陆
    JIE_JI_SAN_GUO = 3019, --街机三国
    TEA_HOUSE_BATCH_INVITE = 3020,
    REN_REN_BU_YU = 3021, --人人捕鱼
    REN_REN_BU_YU_1 = 30211, --人人捕鱼
    REN_REN_BU_YU_2 = 30212, --人人捕鱼
    SHEI_SHI_SHOU_FU = 3022, --谁是首富
    PROMOTE_ACT = 3023, --推广活动(入口隐藏)
    LUCKY_TASK = 3024, --幸运任务
    SIGN_IN = 3025, --签到有礼(入口隐藏)
    GOLDNEW_LZDDZ = 3026, --连炸斗地主(废弃)
    GOLDNEW_LZDDZ_CENTER = 3027, --连炸斗地主中心ICON
    JINLONGJIANGLIN = 3028, -- 金龙降临(废弃)
    WEIJINGCHUANQI = 3029, -- 维京传奇
    ZHUOYUECHUANSHUO = 3030, -- 卓越传说
    YUANZHENGJIANGSHI = 3031, -- 远征将士
    RONGYAOZHINU = 3032, -- 荣耀之怒
    BAIZHANSHACHENG = 3033, -- 百战沙城
    GOLD_NEW_BANKRUPT = 3034, -- 破产礼包
    GOLD_NEW_DEFEAT = 3035, -- 免赔礼包
    HUANXIANGMINGJIANGLU = 3036,
    AOYUN_ACT = 3037, -- 奥运活动(废弃)
    SHENYUANQIYUE = 3038, -- 深渊契约
    FUMOZHANGE = 3039, -- 伏魔战歌
    SCORE_ASSISTANT = 3040, -- 计分助手
    ACT_TIME_LOGIN = 3041, -- 准点登录活动(入口已隐藏，移到获取金币界面)
    SPRING_FESTIVAL_ACT = 3043, -- 春节活动(废弃)
    BIND_PHONE = 3042, -- 手机绑定(入口已隐藏，移到获取金币界面)
    BATTLE_PASS = 3044, -- 雀神令
    XIA_GUANG = 3045, -- 霞光勝境
    LUCKY_BAG = 3046, -- 福袋活动
    RECALL_NEW = 3047, -- 召回活动
    RECALL_NEW_TEAM = 3048, -- 召回领队活动
    LUCKY_TASK_STA = 3049, --幸运任务静态版
    LUCKY_MISSION = 3050, --幸运任务2.0
    MONTHLY_CARD = 3051, -- 月卡
    COIN_REWARD = 3052, -- 获取金币
    NEWYEAR_2026 = 3053, -- 新年活动2026
    DOUBLE12 = 3054, --双12抽奖
    INVITE_ACT = 3055, --拉新活动
    FRIEND_TEA = 3056, -- 牌友加入比赛场
    LUCKY_TURN_TABLE_ACT = 3060, -- 转盘活动

    LIANYUN_QIXINGBAOPAI = 3057, -- 七星宝牌
    LIANYUN_CARD13 = 3058, -- 十三张
    LIANYUN_APGDY = 3059, -- 暗牌干瞪眼
}

LobbyConfig.HPMAHJANG_GAMEID = 20834
LobbyConfig.QXBP_GAMEID = 20840
LobbyConfig.CARD13_GAMEID = 30580 -- 十三张联运
LobbyConfig.GAME_ID_APGDY = 30590 -- 暗牌干瞪眼
LobbyConfig.GameInfoLianYun = {
    [LobbyConfig.HPMAHJANG_GAMEID] = "game_hpmj",
    [LobbyConfig.QXBP_GAMEID] = "game_k7star",
    [LobbyConfig.CARD13_GAMEID] = "game_card13",
    [LobbyConfig.GAME_ID_APGDY] = "game_apgd",
}
-- 十三张 gameid 列表，用于返场时走联运入口
LobbyConfig.Card13GameIDList = {
    LobbyConfig.CARD13_GAMEID,
    30581,
    30582,
    30583,
    30584,
    30585,
    30586,
    30587,
    LobbyConfig.GAME_ID_APGDY
}

LobbyConfig.Card13GameIDName = {
    [LobbyConfig.CARD13_GAMEID] = "经典四人",
    [30581] = "十三张-免洗鬼牌",
    [30582] = "十三张-看牌加倍",
    [30583] = "十三张-全一色",
    [30584] = "十三张-换三张",
    [30585] = "比鸡",
    [30586] = "八张",
    [30587] = "十三张-自定义",
    [LobbyConfig.GAME_ID_APGDY] = "暗牌干瞪眼",
}

LobbyConfig.RedPointPos = {
    Small = cc.p(40, 35),
    Big = cc.p(70, 20),
    Bottom = cc.p(44, 21),
    ZhuangBan = cc.p(50, 38),
}

local getIconExCfg = function(title)
    return {Title = title, Size = cc.size(150, 100)}
end

-- 大厅Icon图标配置
-- Plist表示图标所在plist，如果图标无png资源，则不需要配置
-- IconResName表示png在plist中的资源名，如果不是plist资源则不需要配置
-- IsNeedRedPoint表示当前Icon是否需要红点
-- IsOpen表示游戏是否开启该Icon，true为开启，只有开启时各区配置该Icon才会显示
-- OffSetX,OffSetY表示图标是的位置偏移，若不需偏移则不需要配置
-- ProgeressInfo表示图标有进度条功能，如无进度条功能则不需要配置
LobbyConfig.MenuIconConfig = {
    [LobbyConfig.ICON_ID.SHANG_CHENG] = {
        -- Ex = getIconExCfg("商城"),
        RedPointPos = cc.p(52,84),
        IsOpen = true,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/NewGoldHall/StoreBtn/zzb_jbdt_sc.json",
            AtlasPath = "animation/Lobby/Base/NewGoldHall/StoreBtn/zzb_jbdt_sc.atlas",
            ArmatureName = "animation"
        },
        OffSetX = 7,
        OffSetY = -58,
        iconSize = cc.size(150,180),
        IconScaleSpine = 1
    },
    [LobbyConfig.ICON_ID.GOLDNEW_LZDDZ_CENTER] = {
        IconScale = 0.68,
        IsOpen = true,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "gold_icons_lianzha.png",

        RedPointPos = LobbyConfig.RedPointPos.Big,
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/rrbuyu.plist",
            markResName = "btn_rrby_black1.png",
            barResName = "btn_rrby_black2.png",
            markOffset = cc.p(0, 10),
            barOffset = cc.p(0, 10),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40)
        }
    },
    [LobbyConfig.ICON_ID.GOLDNEW_LZDDZ] = {
        IsOpen = false,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/lzddz_iconright/skeleton.json",
            AtlasPath = "animation/Lobby/Base/lzddz_iconright/skeleton.atlas",
            ArmatureName = "animation"
        },
        IconAniScale = 1.5
    },
    [LobbyConfig.ICON_ID.HUO_DONG] = {
        Ex = getIconExCfg("活动"),
        -- Plist = "cocosStudio/hall/Image/lobby.plist",
        -- IconResName = "huodong.png",
        RedPointPos = LobbyConfig.RedPointPos.Bottom,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.GUI_ZE] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "guize.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.GONG_GAO] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        MiniIconResName = "lobby_notice_btn.png",
        IconResName = "lobby_menu_notice.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.ZHAN_JI] = {
        Ex = getIconExCfg("战绩"),
        -- Plist = "cocosStudio/hall/Image/lobby.plist",
        -- IconResName = "lobby_menu_zhanji.png",
        RedPointPos = LobbyConfig.RedPointPos.Bottom,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.SHE_ZHI] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_menu_shezhi.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.GENG_DUO] = {
        Ex = getIconExCfg("更多"),
        -- Plist = "cocosStudio/hall/Image/lobby.plist",
        -- IconResName = "lobby_menu_more.png",
        RedPointPos = LobbyConfig.RedPointPos.Bottom,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.YAO_QING] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_menu_invate.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsDefaultHide = true,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.JIAN_KANG_XU_ZHI] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "jiankangxuzhi.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.FANG_DB] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_fangdubo_btn.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = false
    },
    [LobbyConfig.ICON_ID.BANG_DING_SHOU_JI] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "bangdingshouji_btn.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.DUI_HUAN] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_menu_duihuan.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.FEN_XAING] = {
        Ex = getIconExCfg("分享"),
        -- Plist = "cocosStudio/hall/Image/lobby.plist",
        -- IconResName = "lobby_sharte_btn.png",
        RedPointPos = LobbyConfig.RedPointPos.Bottom,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.YOU_JIAN] = {
        Ex = getIconExCfg("邮件"),
        -- Plist = "cocosStudio/hall/Image/lobby.plist",
        -- IconResName = "lobby_menu_mail.png",
        RedPointPos = LobbyConfig.RedPointPos.Bottom,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.KE_FU] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_serviec_btn.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.BEI_BAO] = {
        Ex = getIconExCfg("背包"),
        -- Plist = "cocosStudio/hall/Image/lobby.plist",
        -- IconResName = "lobby_bag_btn.png",
        RedPointPos = LobbyConfig.RedPointPos.Bottom,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.ZHUANG_BAN] = {
        Ex = getIconExCfg("装扮"),
        RedPointPos = LobbyConfig.RedPointPos.ZhuangBan,
        RedPointRes = "hall/Image/lobbyNew/Img_x.png",
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.ZHE_JIANG_XIN_WEN] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "btn_news.png",
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.HAO_YOU_XI_TONG] = {
        Plist = "cocosStudio/hall/Image/friends.plist",
        IconResName = "friend_icon_bell.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.TE_HUI_SHANG_CHENG] = {
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_personalGift.png",
        IsDefaultHide = true,
        IsOpen = true,
        OffSetY = 15
    },
    [LobbyConfig.ICON_ID.WX_PUBLIC] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_wxpublic_btn.png",
        IsOpen = true,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.APP_UPDATE_TIP] = {
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_app_update_btn.png",
        IsDefaultHide = true,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.GENG_XIN_FU_LI] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        Plist = "cocosStudio/hall/Image/transferactivity/transferactivity.plist",
        IconResName = "transfer_mainentrance.png",
        IsDefaultHide = true,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.HUI_GUI_LI_BAO] = {
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_backGift.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsDefaultHide = true,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.MEI_RI_CHOU_JIANG] = {
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_freeDraw.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsDefaultHide = true,
        IsOpen = false,
        OffSetY = 15
    },
    [LobbyConfig.ICON_ID.XIAN_SHI_YOU_HUI] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsDefaultHide = true,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/xsyh-icon/xsyh-icon.ExportJson",
            ArmatureName = "xsyh-icon",
            AniName = "Animation1"
        }
    },
    [LobbyConfig.ICON_ID.ZHE_KOU_LI_BAO] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsDefaultHide = true,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/3zlb_icon/3zlb_icon.ExportJson",
            ArmatureName = "3zlb_icon",
            AniName = "Animation1"
        }
    },
    [LobbyConfig.ICON_ID.QIAN_PAO_BU_YU] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/zjb-by-icon/zjb-by-icon.ExportJson",
            ArmatureName = "zjb-by-icon",
            AniName = "Animation1"
        },
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.JUE_ZHAN_SHA_YI] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsDefaultHide = true,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/mr2_comeon_ani/mr2_comeon_ani.ExportJson",
            ArmatureName = "mr2_comeon_ani",
            AniName = "Animation1"
        },
        IconAniScale = 0.5,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.YI_DAO_CHUAN_SHI] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        -- AniInfo = {
        --     File = "animation/Lobby/Base/mir2_comeon_ani/mir2_comeon_ani.ExportJson",
        --     ArmatureName = "mir2_comeon_ani",
        --     AniName = "Animation1"
        -- },
        -- IconAniScale = 0.6,
        -- OffSetY = -5,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_xiuxian_icon_ydcs.png",
        IconScale = 0.9,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.SHARE_HMQ_ACT] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_ShareForCard.png",
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/mffk-icon/mffk-icon.ExportJson",
            ArmatureName = "mffk-icon",
            AniName = "Animation1"
        }
    },
    [LobbyConfig.ICON_ID.LUCKY_TURN_TABLE] = {
        IconResPath = "animation/Lobby/Base/hghl_icon/ac_icon_xyzp.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.NEW_VIP] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/hyhl_icon/hyhl_icon.ExportJson",
            ArmatureName = "hyhl_icon",
            AniName = "Animation1"
        }
    },
    [LobbyConfig.ICON_ID.BU_YU_DA_JIANG_SAI] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/budjs-icon/budjs-icon.ExportJson",
            ArmatureName = "budjs-icon",
            AniName = "Animation1"
        },
        IconAniScale = 0.8,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.DA_TIAN_SHI_ZHI_JIAN] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        DargonBonesInfo = {
            path = "animation/Lobby/Base/DTSZJ_ske/",
            ske = "DTSZJ_ske.json",
            tex = "DTSZJ_tex.json",
            armatureName = "Armature",
            dragonBonesName = "DTSZJ",
            animationName = "newAnimation"
        },
        IconAniScale = 0.7,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.RE_XUE_FENG_SHEN] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        DargonBonesInfo = {
            path = "animation/Lobby/Base/ly-rxfs-icon/",
            ske = "ly-rxfs-icon_ske.json",
            tex = "ly-rxfs-icon_tex.json",
            armatureName = "armatureName",
            dragonBonesName = "ly-rxfs-icon",
            animationName = "Animation1"
        },
        IconAniScale = 0.6,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.DOU_LUO_DA_LU] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        DargonBonesInfo = {
            path = "animation/Lobby/Base/ly-dldl-icon/",
            ske = "icon_dldl_ske.json",
            tex = "icon_dldl_tex.json",
            armatureName = "Armature",
            dragonBonesName = "icon_dldl",
            animationName = "newAnimation"
        },
        IconAniScale = 0.6,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.JIE_JI_SAN_GUO] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        DargonBonesInfo = {
            path = "animation/Lobby/Base/ly-jjsg-icon/",
            ske = "icon_jjsg_ske.json",
            tex = "icon_jjsg_tex.json",
            armatureName = "Armature",
            dragonBonesName = "icon_jjsg",
            animationName = "newAnimation"
        },
        IconAniScale = 0.6,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.REN_REN_BU_YU] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        --IsDefaultHide = true,
        IsOpen = true,
        SpineInfo = {
            RemoteKey = "buyuIcon",
            JsonPath = "animation/Lobby/Base/rrby_icon/zzb_rk_rrbu9.json",
            AtlasPath = "animation/Lobby/Base/rrby_icon/zzb_rk_rrbu9.atlas",
            ArmatureName = "animation"
        },
        IconAniScale = 1.15,
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/rrbuyu.plist",
            markResName = "btn_rrby_black1.png",
            barResName = "btn_rrby_black2.png",
            markOffset = cc.p(0, 10),
            barOffset = cc.p(0, 10),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40)
        }
        -- Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.REN_REN_BU_YU_1] = {
        Plist = "cocosStudio/hall/Image/LobbyIconRRBY.plist",
        IconResName = "lobby_icon_rrby_1.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/rrbuyu.plist",
            markResName = "btn_rrby_black1.png",
            barResName = "btn_rrby_black2.png",
            markOffset = cc.p(0, 10),
            barOffset = cc.p(0, 10),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40)
        },
        IsOpen = true
        -- Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.REN_REN_BU_YU_2] = {
        Plist = "cocosStudio/hall/Image/LobbyIconRRBY.plist",
        IconResName = "lobby_icon_rrby_2.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/rrbuyu.plist",
            markResName = "btn_rrby_black1.png",
            barResName = "btn_rrby_black2.png",
            markOffset = cc.p(0, 10),
            barOffset = cc.p(0, 10),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40)
        },
        IsOpen = true
        -- Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI] = {
        IconScale = 0.68,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "qxbp_icon.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/GoldIcons.plist",
            markResName = "gold_icon_progress.png",
            barResName = "gold_icon_progress.png",
            markOffset = cc.p(0, 2),
            barOffset = cc.p(0, 2),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            OutLineColor = cc.c4b(0x1c, 0x1c, 0x1c, 255),
            OutLineSize = 2,
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40),
            progressSize = cc.size(120,120),
            bgInVisible = true,
            opacity = 255,
        },
        IsOpen = true
        -- Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.LIANYUN_CARD13] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IconScale = 1,
        IconScaleSpine = 1,
        IconAniScale = 1.11,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/icon_card13/zzb_rk_13.json",
            AtlasPath = "animation/Lobby/Base/icon_card13/zzb_rk_13.atlas",
            ArmatureName = "animation"
        },
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/GoldIcons.plist",
            markResName = "gold_icon_progress.png",
            barResName = "gold_icon_progress.png",
            markOffset = cc.p(0, 2),
            barOffset = cc.p(0, 2),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            OutLineColor = cc.c4b(0x1c, 0x1c, 0x1c, 255),
            OutLineSize = 2,
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40),
            progressSize = cc.size(120, 120),
            bgInVisible = true,
            opacity = 255,
        },
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.LIANYUN_APGDY] = {
        IconScale = 0.68,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_xiuxian_andoupinshi.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/GoldIcons.plist",
            markResName = "gold_icon_progress.png",
            barResName = "gold_icon_progress.png",
            markOffset = cc.p(0, 2),
            barOffset = cc.p(0, 2),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            OutLineColor = cc.c4b(0x1c, 0x1c, 0x1c, 255),
            OutLineSize = 2,
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40),
            progressSize = cc.size(120,120),
            bgInVisible = true,
            opacity = 255,
        },
        IsOpen = true
        -- Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.SHEI_SHI_SHOU_FU] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        DargonBonesInfo = {
            path = "animation/Lobby/Base/sssf-icon/",
            ske = "sssf-icon_ske.json",
            tex = "sssf-icon_tex.json",
            armatureName = "armatureName",
            dragonBonesName = "sssf-icon",
            animationName = "Animation1"
        },
        IconAniScale = 0.6,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.PROMOTE_ACT] = {
        IsOpen = true,
        IsDefaultHide = true,
        IconAniScale = 1,
        DargonBonesInfo = {
            path = "cocosStudio/hall/Image/Activity/Promote/qxwf_icon/",
            ske = "qxwf_icon_ske.json",
            tex = "qxwf_icon_tex.json",
            armatureName = "Armature",
            dragonBonesName = "qxwf_icon",
            animationName = "newAnimation"
        }
    },
    [LobbyConfig.ICON_ID.LUCKY_TASK] = {
        IsOpen = true,
        IsDefaultHide = true,
        IconScaleSpine = 1,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/zzb_dt_xyrw_rk/zzb_dt_xyrw_rk.json",
            AtlasPath = "animation/Lobby/Base/zzb_dt_xyrw_rk/zzb_dt_xyrw_rk.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.SIGN_IN] = {
        IsOpen = false,
        IsDefaultHide = true,
        Plist = "cocosStudio/hall/Image/Activity/Signin/lobby_sign_in.plist",
        IconResName = "sign_in_act_icon.png",
        RedPointPos = cc.p(60, 40)
    },
    [LobbyConfig.ICON_ID.TOPON_PH_FEE] = {
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_pheeAct.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsDefaultHide = true,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/lhf-icon-ani/lhf-icon-ani.ExportJson",
            ArmatureName = "lhf-icon-ani",
            AniName = "Animation1"
        }
    },
    [LobbyConfig.ICON_ID.PRAY_ACT] = {
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_prayAct.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsDefaultHide = false,
        IsOpen = true,
        OffSetY = 15
    },
    [LobbyConfig.ICON_ID.BUSINESS_ACT] = {
        Plist = "cocosStudio/TeaHouse/Image/teahouse_remodel_act_icon.plist",
        IconResName = "RecallAct_icon.png",
        RedPointPos = cc.p(50, 30),
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.FOUR_TO_TWO_TEA_POP] = {
        Plist = "cocosStudio/TeaHouse/Image/teahouse_remodel_act_icon.plist",
        IconResName = "four_to_two_pop_icon.png",
        RedPointPos = cc.p(50, 30),
        IsOpen = true,
        iconSize = 1
    },
    [LobbyConfig.ICON_ID.LING_MENG_ZHI_BO] = {
        IsDefaultHide = true,
        IsOpen = true,
        AniInfo = {
            File = "animation/Lobby/Base/tczb_ani/tczb-icon.ExportJson",
            ArmatureName = "tczb-icon",
            AniName = "Animation1"
        },
        IconAniScale = 1,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.TEA_HOUSE_BATCH_INVITE] = {
        Plist = "cocosStudio/hall/Image/TeaBatchInvite/lobby_tea_batch_invite.plist",
        IconResName = "teahouse_batch_invite_icon.png",
        IsOpen = true,
        iconSize = 1
    },
    [LobbyConfig.ICON_ID.NEW_PALY_TYPE_C] = {
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_new_play_type_c.png",
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.JINLONGJIANGLIN] = {
        Plist = "cocosStudio/hall/Image/Activity/activity_icons.plist",
        IconResName = "activityIcon_jinlong.png",
        IsOpen = true
    },
    [LobbyConfig.ICON_ID.WEIJINGCHUANQI] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_xiuxian_icon_wjcq.png",
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.ZHUOYUECHUANSHUO] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_game_ly_810019.png",
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.YUANZHENGJIANGSHI] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_game_ly_810020.png",
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.RONGYAOZHINU] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_game_ly_810023.png",
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.BAIZHANSHACHENG] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/bzsc/jiezhi.json",
            AtlasPath = "animation/Lobby/Base/bzsc/jiezhi.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.GOLD_NEW_BANKRUPT] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        IsDefaultHide = true,
        IconScale = 1,
        IconScaleSpine = 1,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/zzb_pclb_icon/zzb_pclb_icon.json",
            AtlasPath = "animation/Lobby/Base/zzb_pclb_icon/zzb_pclb_icon.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.GOLD_NEW_DEFEAT] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        IsDefaultHide = true,
        IconScale = 1,
        IconScaleSpine = 1,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/zzb_mplb_icon/zzb_mplb_icon.json",
            AtlasPath = "animation/Lobby/Base/zzb_mplb_icon/zzb_mplb_icon.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.HUANXIANGMINGJIANGLU] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_game_ly_810027.png",
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.SHENYUANQIYUE] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_game_ly_810028.png",
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID
    },
    [LobbyConfig.ICON_ID.FUMOZHANGE] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        IconScale = 0.78,
        Platform = LobbyConfig.DEVICE_PLATFORM.ANDROID,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/fumozhange/skeleton.json",
            AtlasPath = "animation/Lobby/Base/fumozhange/skeleton.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.SCORE_ASSISTANT] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        IconScaleSpine = 0.8,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/zzb_dt_jfzs_rk/zzb_dt_jfzs_rk.json",
            AtlasPath = "animation/Lobby/Base/zzb_dt_jfzs_rk/zzb_dt_jfzs_rk.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.ACT_TIME_LOGIN] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IsDefaultHide = true,
        IconScale = 1,
        Plist = "cocosStudio/hall/Image/Activity/TimeLoginAct/TimeLogin.plist",
        IconResName = "TimeLoginIcon.png"
    },
    [LobbyConfig.ICON_ID.BIND_PHONE] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IsDefaultHide = true,
        Plist = "cocosStudio/hall/Image/BindPhone/BindPhone.plist",
        IconResName = "bind_phone_Img_icon_zj.png",
    },
    [LobbyConfig.ICON_ID.BATTLE_PASS] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        -- IconScaleSpine = 0.8,
        iconSize = cc.size(161, 150),
        IsDefaultHide = true,
        SpineInfo = {
            JsonPath = "animation/Common/zzb_ty_xingguang.json",
            AtlasPath = "animation/Common/zzb_ty_xingguang.atlas",
            ArmatureName = "animation"
        },
        Plist = "cocosStudio/hall/Image/lobby.plist",
        IconResName = "lobby_icon_img_qsl.png",
    },
    [LobbyConfig.ICON_ID.XIA_GUANG] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IconScaleSpine = 1,
        IconAniScale = 1,
        iconSize = cc.size(161, 150),
        IsDefaultHide = true,
        SpineInfo = {
            JsonPath = "animation/Common/xiaguangshengjing/XGSJIcon.json",
            AtlasPath = "animation/Common/xiaguangshengjing/XGSJIcon.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.NEWYEAR_2026] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IconAniScale = 1,
        iconSize = cc.size(150, 150),
        TeaScale = 1,
        IsDefaultHide = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/act_icon_xcfl.png",
    },
    [LobbyConfig.ICON_ID.DOUBLE12] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IconAniScale = 1,
        iconSize = cc.size(150, 150),
        IsDefaultHide = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/ac_icon_double12rk.png",
        RedPointPos = cc.p(-45, 38),
        RedPointRes = "hall/CSB/Activity/Double12_2025/Image/Img_100.png",
    },
    [LobbyConfig.ICON_ID.INVITE_ACT] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IconAniScale = 1,
        iconSize = cc.size(150, 150),
        IsDefaultHide = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/ac_icon_yq.png",
    },
    [LobbyConfig.ICON_ID.LUCKY_TURN_TABLE_ACT] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true,
        IconAniScale = 1,
        iconSize = cc.size(150, 150),
        IsDefaultHide = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/ac_icon_xyzp.png",
    },
    [LobbyConfig.ICON_ID.LUCKY_BAG] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        iconSize = cc.size(161, 150),
        IsDefaultHide = true,
    },
    [LobbyConfig.ICON_ID.RECALL_NEW] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IconScaleSpine = 1,
        IconAniScale = 1,
        IsDefaultHide = true,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/zzb_hghd_rk/zzb_hghl_icon.json",
            AtlasPath = "animation/Lobby/Base/zzb_hghd_rk/zzb_hghl_icon.atlas",
            ArmatureName = "animation2"
        }
    },
    [LobbyConfig.ICON_ID.RECALL_NEW_TEAM] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IsDefaultHide = true,
        IconScaleSpine = 1,
        IconAniScale = 1,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/zzb_lyhg_icon/zzb_lyhg_icon.json",
            AtlasPath = "animation/Lobby/Base/zzb_lyhg_icon/zzb_lyhg_icon.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.LUCKY_TASK_STA] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IsDefaultHide = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/sta_rk_sta_1.png",
    },
    [LobbyConfig.ICON_ID.DIAN_FENG_SAI] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IsDefaultHide = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/ac_icon_zjdf.png",
    },
    [LobbyConfig.ICON_ID.FRIEND_TEA] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IsDefaultHide = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/ac_icon_friendTea.png",
    },
    [LobbyConfig.ICON_ID.LUCKY_MISSION] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IconScaleSpine = 1,
        IconAniScale = 1,
        IsDefaultHide = true,
        SpineInfo = {
            JsonPath = "animation/Lobby/Base/zzb_flrw_rk/zzb_flrw_rk.json",
            AtlasPath = "animation/Lobby/Base/zzb_flrw_rk/zzb_flrw_rk.atlas",
            ArmatureName = "animation"
        }
    },
    [LobbyConfig.ICON_ID.COIN_REWARD] = {
        RedPointPos = LobbyConfig.RedPointPos.Small,
        IsOpen = true,
        IconResPath = "animation/Lobby/Base/hghl_icon/ac_icon_hqjb.png"
    },
}

if device.platform == "ios" then
    LobbyConfig.MenuIconConfig[LobbyConfig.ICON_ID.REN_REN_BU_YU] = {
        RedPointPos = LobbyConfig.RedPointPos.Big,
        --IsDefaultHide = true,
        IsOpen = true,
        SpineInfo = {
            RemoteKey = "buyuIcon",
            JsonPath = "animation/Lobby/Base/rrby_icon/zzb_rk_rrbu9.json",
            AtlasPath = "animation/Lobby/Base/rrby_icon/zzb_rk_rrbu9.atlas",
            ArmatureName = "animation"
        },
        IconAniScale = 1.15,
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/rrbuyu.plist",
            markResName = "btn_rrby_black1.png",
            barResName = "btn_rrby_black2.png",
            markOffset = cc.p(0, 10),
            barOffset = cc.p(0, 10),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 26,
            TextColor = cc.c3b(255, 255, 255),
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40)
        }
    }
    LobbyConfig.MenuIconConfig[LobbyConfig.ICON_ID.REN_REN_BU_YU_1] = {
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_xiuxian_renrenbuyu.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true
    }
    LobbyConfig.MenuIconConfig[LobbyConfig.ICON_ID.REN_REN_BU_YU_2] = {
        Plist = "cocosStudio/hall/Image/GoldIcons.plist",
        IconResName = "lobby_xiuxian_renrenbuyu.png",
        RedPointPos = LobbyConfig.RedPointPos.Big,
        IsOpen = true
    }
end

LobbyConfig.TipButtonConfig = {
    [LobbyConfig.ICON_TIP_BUTTON_STYLE.STYLE_ONE] = {
        Font = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
        FontSize = 30,
        TextColor = cc.c3b(201, 90, 41),
        TextAnchorPoint = cc.p(0.5, 0.5),
        TextPositionY = 38,
        NormalResName = "_11111_lobby_icon_know_btn.png",
        PressedResName = "_11111_lobby_icon_know_btn.png",
        DisabledResName = "_11111_lobby_icon_know_btn.png",
        AnchorPoint = cc.p(0.5, 1),
        Scale9Enabled = true,
        BtnScale = 1.2,
        BtnPosY = 10,
        OffSetX = 0
    }
}

LobbyConfig.MenuIconTipImageStyle = {
    STYPE_ONE = 1
}

LobbyConfig.MenuIconTipImage = {
    [LobbyConfig.MenuIconTipImageStyle.STYPE_ONE] = {
        resName = "lobby_icon_bird.png",
        AnchorPoint = cc.p(0, 0.5),
        PositionX = -90,
        Scale = 1.2,
        OffSetX = 35
    }
}

LobbyConfig.GoldIcons = {
    [30116] = {
        {
            Text = "双扣",
            Name = "lobby_xiuxian_shuangkou.png",
            Bg = "lobby_xiuxian_bg_sk.png"
        }
    },
    [30579] = {
        {
            Text = "暗斗双扣",
            Name = "",
            Bg = "lobby_xiuxian_anpaishuangkou1.png"
        }
    },
    [LobbyConfig.GAME_ID_APGDY] = {
        {
            Text = "暗斗拼十",
            Name = "",
            Bg = "lobby_xiuxian_andoupinshi.png"
        }
    },
    [30310] = {
        {
            Text = "广式麻将",
            Name = "lobby_xiuxian_guangshimajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30329] = {
        {
            Text = "龙港麻将",
            Name = "lobby_xiuxian_longgangmajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30401] = {
        {
            Text = "三门玩法",
            Name = "lobby_xiuxian_sanmenmajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30312] = {
        {
            Text = "龙泉麻将",
            Name = "lobby_xiuxian_longquanmajiang.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        }
    },
    [30386] = {
        {
            Text = "跑得快",
            Name = "lobby_xiuxian_new_cygp.png",
            Bg = "lobby_xiuxian_bg_pdk.png",
            LeisureID = 2005,
        },
        {
            Text = "跑得快",
            Name = "",
            Bg = "lobby_xiuxian_bg_pdk2.png",
            LeisureID = 2136,
        }
    },
    [30421] = {
        {
            Text = "斗地主玩法",
            Name = "lobby_xiuxian_doudizhu.png",
            Bg = "lobby_xiuxian_bg_ddz.png"
        }
    },
    [30379] = {
        {
            Text = "二人广式",
            Name = "lobby_xiuxian_errenguangshi.png",
            Bg = "lobby_xiuxian_bg_mj_3.png"
        }
    },
    [30117] = {
        {
            Text = "二人温麻",
            Name = "lobby_xiuxian_errenwenma.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        },
        {
            Text = "温州麻将",
            Name = "lobby_xiuxian_wenzhoumajiang.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        }
    },
    [30332] = {
        {
            Text = "台炮玩法",
            Name = "lobby_xiuxian_taipaomajiang.png",
            Bg = "lobby_xiuxian_bg_mj_3.png"
        }
    },
    [30159] = {
        {
            Text = "杭州双扣",
            Name = "lobby_xiuxian_new_cysk.png",
            Bg = "lobby_btn_game_sk_2.png"
        }
    },
    [30134] = {
        {
            Text = "杭州玩法",
            Name = "lobby_xiuxian_hangzhoumajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        },
        {
            Text = "二人麻将",
            Name = "lobby_xiuxian_errenmajiang.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        }
    },
    [30205] = {
        {
            Text = "温岭玩法",
            Name = "lobby_xiuxian_wenlingmajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30206] = {
        {
            Text = "玉环玩法",
            Name = "lobby_xiuxian_yuhuanmajiang.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        }
    },
    [30400] = {
        {
            Text = "台州麻将",
            Name = "lobby_xiuxian_taizhoumajiang.png",
            Bg = "lobby_xiuxian_bg_mj_3.png"
        }
    },
    [30450] = {
        {
            Text = "定海玩法",
            Name = "lobby_xiuxian_dinghaimajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30451] = {
        {
            Text = "沈家门玩法",
            Name = "lobby_xiuxian_shenjiamenmajiang.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        }
    },
    [30123] = {
        {
            Text = "湖州麻将",
            Name = "lobby_xiuxian_huzhoumajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30124] = {
        {
            Text = "长兴玩法",
            Name = "lobby_xiuxian_changxingmajiang.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        }
    },
    [30185] = {
        {
            Text = "安吉麻将",
            Name = "lobby_xiuxian_anjimajiang.png",
            Bg = "lobby_xiuxian_bg_mj_3.png"
        }
    },
    [30275] = {
        {
            Text = "瑞安麻将",
            Name = "lobby_xiuxian_ruianmajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30276] = {
        {
            Text = "点炮麻将",
            Name = "lobby_xiuxian_dianpaomajiang.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        }
    },
    [30277] = {
        {
            Text = "洞头麻将",
            Name = "lobby_xiuxian_dongtoumajiang.png",
            Bg = "lobby_xiuxian_bg_mj_3.png"
        }
    },
    [30224] = {
        {
            Text = "乐清麻将",
            Name = "lobby_xiuxian_yueqingmajiang.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    },
    [30578] = {
        {
            Text = "干瞪眼",
            Name = "lobby_xiuxian_gdy.png",
            Bg = "lobby_xiuxian_bg_gdy.png"
        }
    },
    [30179] = {
        {
            Text = "二人麻将",
            Name = "lobby_xiuxian_errenmajiang1.png",
            Bg = "lobby_xiuxian_bg_mj_3.png"
        },
        {
            Text = "瞎子麻将",
            Name = "lobby_xiuxian_new_cjmj.png",
            Bg = "lobby_xiuxian_bg_mj_2.png"
        },
        {
            Text = "亮子麻将",
            Name = "lobby_xiuxian_new_cjmj.png",
            Bg = "lobby_xiuxian_bg_mj.png"
        }
    }
}

-- 游戏中心 LianYunIcon 动画：ShowGame 中配置的 key -> spine 文件名（res/animation/Lobby/GameCenter/icon/ 下，不含后缀）
LobbyConfig.GameCenterIconAni = {
    main = "zzb_yxzx_icon",
    bazhetianxia = "zzb_yxzx_bztx",
    renrenbuyu = "zzb_yxzx_rrby2",
    weijingchuanqi = "zzb_yxzx_wjcq",
    fumo = "zzb_yxzx_fmzg",
    baizhanshacheng = "zzb_yxzx_vzsc",
}

LobbyConfig.TempGuanDanGameID = 999999
LobbyConfig.GoldNewGameID = 42210 -- 新金币场

LobbyConfig.LBGameID = 30227 -- 两帮，特殊gameid，用的老包的代码

return LobbyConfig
8�  