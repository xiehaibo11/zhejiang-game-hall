-- 大厅（主场景）

local MenuBar = require("lobby.Modules.Lobby.MenuBar.MenuBar")
local HorizontalMenuBar = require("lobby.Modules.Lobby.MenuBar.HorizontalMenuBar")
local VerticalMenuBar = require("lobby.Modules.Lobby.MenuBar.VerticalMenuBar")
local LobbyView = class("LobbyView", XH.ViewBase)

local LobbyConfig = require("lobby.Modules.Lobby.Config")
local ShopConfig = require("lobby.Modules.Shop.Config")
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

local ShowPropFunction = require("lobby.Modules.BagSysNew.ShowPropFunction")
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")

local PromoteConfig = require("lobby.Modules.Promote.Config")
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")

local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

local TimeLoginActConfig = require("lobby.Modules.TimeLoginAct.Config")
local RedPointManager = require("lobby.Modules.GoldNew.Manager.RedPointManager")

local ActionUtils = require("lobby.Modules.GoldNew.Tool.ActionUtils")

local DEFAULT_SECOND_SCENE_SIZE = cc.size(900,150)
local HEAD_FRAME_NAME = "HEAD_FRAME_NAME"

local UNIONGAME_NAME ={
    [3021] = "人人捕鱼",
    [3022] = "谁是首富",
    [3015] = "玲萌直播",
    [3002] = "捕鱼王",
    [3001] = "决战沙邑",
}

function LobbyView:getCSBPath()
    return "cocosStudio/hall/CSB/MainScene.csb"
end

function LobbyView:getBindingInfo()
    return {
        ["_KW_STOP_TOUCH_LAYER"] = {varName = "_KW_STOP_TOUCH_LAYER"},
        ["_panelBg"] = {varName = "_panelBg"},
        ["_imgBlur"] = { varName = "_imgBlur" },
        ["_KWA_BTND_ADD_ROOM_CARD"] = { varName = "KWA_BTND_ADD_ROOM_CARD", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_ADD_ROOM_CARD"},
        ["_KWA_BTND_ADD_DIAMOND"] = { varName = "KWA_BTND_ADD_DIAMOND", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_ADD_DIAMOND"},
        ["_KWA_BTND_CREATE_BACK_BOX_ROOM"] = { varName = "_createBackBoxRoomBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickCreateRoom" },
        ["_KWA_BTND_TEA_HOUSE"] = { varName = "KWA_BTND_TEA_HOUSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_TEA_HOUSE" },
        ["_KWA_IMAGE_HEAD"] = { varName = "KWA_IMAGE_HEAD"},
        ["_KWA_HEAD_PANEL"] = { varName = "KWA_HEAD_PANEL", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "on_KWA_BTND_HEAD"},
        ["_KWA_BTN_VIP"] = { varName = "KWA_BTN_VIP", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTN_VIP" },
        ["_KWA_POS_VIP_ANI"] = { varName = "KWA_POS_VIP_ANI"},
        ["_KW_HEAD_FRAME"] = { varName = "_headFrameImg" },
        ["_KW_HEAD_FRAME_TEMP"] = { varName = "_headFrameImgTemp" },
        ["_KW_IMAGE_HEAD_FLAG"] = { varName = "_imageHeadFlag" },
        ["_KWA_LABEL_HEAD_ROOMCARD"] = { varName = "KWA_LABEL_HEAD_ROOMCARD" },
        ["_KWA_XIUXIANDATING_TITLE"] = { varName = "KWA_XIUXIANDATING_TITLE" },
        ["_KWA_NICKNAME"] = { varName = "KWA_NICKNAME" },
        ["_KW_BINDCARD_STATE"] = { varName = "_bindCardTip" },
        ["_KWA_USER_ID"] = { varName = "KWA_USER_ID" },
        ["_KWA_BTN_COPY"] = { varName = "KWA_BTN_COPY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTN_COPY" },
        ["_KW_IMG_AREA"] = { varName = "areaImage"},
        ["_KWA_AREA_PANEL"] = { varName = "KWA_AREA_PANEL", type = XH.UI_TYPE.PANEL_TOBUTTON , onTouchEnded = "onTouchEventChangeArea" },
        ["_KW_TEXT_AREA"] = { varName = "areaText" },
        ["_KWA_NORMAL_LOBBY_PANEL"] = { varName = "KWA_NORMAL_LOBBY_PANEL" },
        ["_KWA_XIUXIAN_LOBBY_PANEL"] = { varName = "KWA_XIUXIAN_LOBBY_PANEL" },
        ["_KWA_XIUXIAN_LOBBY_NEW_PANEL"] = { varName = "KWA_XIUXIAN_LOBBY_NEW_PANEL" },
        ["_KWA_LABEL_HEAD_DIAMOND"] = { varName = "KWA_LABEL_HEAD_DIAMOND" },
        ["_KW_IMAGE_DIAMOND"] = { varName = "KW_IMAGE_DIAMOND" },
        ["_KWA_HEAD_INFO_BG"] = { varName = "_headInfoPanel" },
        ["_KW_IMG_BOX_ROOM_FLAG"] = {varName="_imgBoxRoomFlag"},
        ["_KW_IMG_BOX_ROOM_FREE"] = {varName="_imgBoxRoomFree"},
        ["_KW_IMG_BOX_ROOM_FREE_ACT"] = {varName="_imgBoxRoomFreeAct"},
        ["_KW_IMG_BOX_ROOM_FREE_ACT_ANIM"] = {varName="_imgBoxRoomFreeActAnim"},
        ["_KW_IMG_TEA_FLAG"] = {varName="_imgTeaFlag"},
        ["_KW_IMG_BOX_ROOM_FLAG_CPS"] = {varName="_imgBoxRoomFlagCps"},
        ["_KW_IMG_TEA_FLAG_CPS"] = {varName="_imgTeaFlagCps"},
        ["_KW_LOBBY_TIPS"] = {varName="_lobbyTips"},
        ["_KW_LOBBY_TIPS_CONTENT"] = {varName="_lobbyTipsContent"},

        -- 金币场相关
        ["_KWA_LEFT_POS"] = { varName = "KWA_LEFT_POS" },
        ["_KWA_RIGHT_POS"] = { varName = "KWA_RIGHT_POS" },
        ["_KWA_RIGHT_TOP_PANEL"] = { varName = "KWA_RIGHT_TOP_PANEL" },
        ["_KWA_ROOM_CARD_BG"] = { varName = "KWA_ROOM_CARD_BG", type = XH.UI_TYPE.IMAGE_TOBUTTON, style = XH.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "on_KWA_BTND_ADD_ROOM_CARD" },
        ["_KWA_DIAMOND_BG"] = { varName = "KWA_DIAMOND_BG", type = XH.UI_TYPE.IMAGE_TOBUTTON, style = XH.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "on_KWA_BTND_ADD_DIAMOND" },
        ["_KWA_GOLD_NUM_BG"] = { varName = "KWA_GOLD_NUM_BG", type = XH.UI_TYPE.IMAGE_TOBUTTON, style = XH.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "on_KWA_BTND_ADD_GOLD" },
        ["_KWA_GOLD_NUM_BG_2"] = { varName = "KWA_GOLD_NUM_BG_2" },
        ["_KWA_LABEL_HEAD_GOLD"] = { varName = "KWA_LABEL_HEAD_GOLD" },
        ["_KWA_LABEL_HEAD_GOLD_2"] = { varName = "KWA_LABEL_HEAD_GOLD_2" },
        ["_KWA_BTND_ADD_GOLD"] = { varName = "KWA_BTND_ADD_GOLD", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_ADD_GOLD" },
        ["_KWA_TOUCH_LAYER_PANEL"] = { varName = "KWA_TOUCH_LAYER_PANEL", type = XH.UI_TYPE.LAYOUT, onTouchEnded = "on_KWA_TOUCH_LAYER_PANEL" },
        ["_KWA_GOLD_BTND_JOIN_ROOM"] = { varName = "KWA_GOLD_BTND_JOIN_ROOM", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickJoinRoom" },
        ["_KW_MINI_GAME_PANEL"] = { varName = "KW_MINI_GAME_PANEL"},
        
        ---比赛场更新
        ["_KW_IMG_TEA_HOUSE_UPDATE"] = { varName = "_imgTeaHouseUpdate" },
        ["_KW_LB_TEA_HOUSE_UPDATE"] = { varName = "_lbTeaHouseUpdate" },
        ["_KW_TEXT_TEA_HOUSE_UPDATE"] = { varName = "_textTeaHouseUpdate" },

        --
        ["_KWA_MENU_BAR"] = { varName = "KWA_MENU_BAR" },
        ["_KWA_TOP_MENU_BAR"] = { varName = "KWA_TOP_MENU_BAR" },
        ["_KWA_GOLD_TOP_MENU_BAR"] = { varName = "KWA_GOLD_TOP_MENU_BAR" },
        ["_KWA_GOLD_MENU_BAR"] = { varName = "KWA_GOLD_MENU_BAR" },
        ["_KWA_RIGHT_MENU_BAR"] = { varName = "_rightMenuBarPos" },
        ["_KWA_LEFT_MENU_BAR"] = { varName = "_leftMenuBarPos" },
        ["_KWA_BOTTOM_LEFT_MENU_BAR"] = { varName = "_bottomLeftMenuBarPos" },
        --临时bq相关控制
        ["_KW_TEXT_TEMPORARY"] = { varName = "_TextBanQuan"},

        -- 好友系统相关
        ["_KWA_IM_LIST_PANEL"] = { varName = "KWA_IM_LIST_PANEL" },

        ["_KW_PANEL_ANI_CLICK"] = { varName = "_KW_PANEL_ANI_CLICK" },
        ["_KW_TEA_REMODEL_ICON"] = {varName = "_imgTeaRemodel"},
        ["_KW_IMG_CREATE_AWARD_TIP"] = {varName = "_imgShowTeaHouseAwardTip"},
        ["_KW_IMG_BACKGROUNG"] = { varName = "_backgroundImg", onTouchEnded = "clickBg"},

        ["_KWA_PARY_DEC"] = { varName = "KWA_PARY_DEC"},

        --cps渠道包界面布局调整
        ["_KW_BOX_PANEL"] = {varName = "_KW_BOX_PANEL"},
        ["_KW_GOLD_PANEL"] = {varName = "_KW_GOLD_PANEL"},
        ["_KW_BOX_PANEL_CPS"] = {varName = "_KW_BOX_PANEL_CPS"},
        ["_KW_GOLD_PANEL_CPS"] = {varName = "_KW_GOLD_PANEL_CPS"},
        ["_KW_BTND_CREATE_BACK_BOX_ROOM_CPS"] = { varName = "_createBackBoxRoomBtnCps", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickCreateRoom" },
        ["_KW_BTND_TEA_HOUSE_CPS"] = { varName = "KW_BTND_TEA_HOUSE_CPS", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_TEA_HOUSE" },
        ["_KW_GOLD_BTND_JOIN_ROOM_CPS"] = { varName = "KW_GOLD_BTND_JOIN_ROOM_CPS", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickJoinRoom" },
        ["_KW_MINI_GAME_PANEL_CPS"] = { varName = "KW_MINI_GAME_PANEL_CPS"},
        ["_KW_IMG_CPS_BACKGROUND"] = { varName = "_KW_IMG_CPS_BACKGROUND",type = XH.UI_TYPE.LAYOUT, onTouchEnded = "on_KW_IMG_CPS_BACKGROUND"  },
        ["_KW_PANEL_CHOOSE_GUIDE"] = { varName = "KW_PANEL_CHOOSE_GUIDE"},
        ["_KWA_TOP_HORSE"] = { varName = "_KWA_TOP_HORSE", onTouchEnded = "on_KWA_TOP_HORSE"},
        ["_KWA_TOP_HORSE_TEXT"] = { varName = "_KWA_TOP_HORSE_TEXT"},
        ["_KWA_TOP_HORSE_LEN"] = { varName = "_KWA_TOP_HORSE_LEN"},
        ["_KW_BG_CHANGE_IMG_1"] = { varName = "_KW_BG_CHANGE_IMG_1" },
        ["_KW_BG_CHANGE_IMG_2"] = { varName = "_KW_BG_CHANGE_IMG_2" },
        ["_KW_BG_CHANGE_IMG_3"] = { varName = "_KW_BG_CHANGE_IMG_3" },
        ["_KW_BG_CHANGE_IMG_4"] = { varName = "_KW_BG_CHANGE_IMG_4" },
        ["_KW_BG_CHANGE_IMG_5"] = { varName = "_KW_BG_CHANGE_IMG_5" },
        ["_KW_BG_CHANGE_IMG_6"] = { varName = "_KW_BG_CHANGE_IMG_6" },
        ["_KW_PANEL_TIME_LEFT"] = { varName = "_KW_PANEL_TIME_LEFT" },
        ["_KW_IMG_NEWYEAR2026_REDPOINT"] = { varName = "_KW_IMG_NEWYEAR2026_REDPOINT" },
        ["_KWA_BTND_NEWYEAR2026"] = { varName = "_KWA_BTND_NEWYEAR2026", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventNewYear2026Act"},
        ["_KWA_BTND_PEAK_RACE"] = { varName = "_KWA_BTND_PEAK_RACE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "openDfsView"},
        ["_KWA_BTND_GAMECENTER"] = { varName = "_KWA_BTND_GAMECENTER", type = XH.UI_TYPE.BUTTON, onTouchEnded = "openGameCenter"},
        ["_KWA_GAMECENTER_FINGER_ANI"] = { varName = "_KWA_GAMECENTER_FINGER_ANI"},
        ["_KWA_GAMECENTER_ANI"] = { varName = "_KWA_GAMECENTER_ANI"},
        ["_KWA_GAMECENTER_TITLE"] = { varName = "_KWA_GAMECENTER_TITLE"},
        ["_KWA_BTND_PEAK_RACE_MATCH"] = { varName = "_KWA_BTND_PEAK_RACE_MATCH", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_TEA_HOUSE"},
        ["_KW_IMG_PEAK_TIME"] = { varName = "_KW_IMG_PEAK_TIME" },
        ["_KW_TEXT_PEAK_TIME"] = { varName = "_KW_TEXT_PEAK_TIME" },
        ["_KW_PANEL_LIMITFREE"] = { varName = "_KW_PANEL_LIMITFREE"},
        ["_KW_BTN_LIMITFREE_TIP_X"] = { varName = "_KW_BTN_LIMITFREE_TIP_X"},
        ["_KW_BTN_LIMITFREE_TIP"] = { varName = "_KW_BTN_LIMITFREE_TIP", onTouchEnded = "onClickFreeTipView"},
        ["_KW_ANI_BACK"] = { varName = "_KW_ANI_BACK" },
        ["_KW_ANI_TOP"] = { varName = "_KW_ANI_TOP" },
        ["_KW_SXVIP_XSYH"] = { varName = "_KW_SXVIP_XSYH" },
        ["_KW_IMG_RECALL_FREE"] = { varName = "_KW_IMG_RECALL_FREE" },
        ["_KWA_BOTTOM_QUICKSTAR"] = { varName = "_KWA_BOTTOM_QUICKSTAR", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickQuickStart"},
        ["_KWA_QUICKSTART_POS"] = { varName = "_posQuickStart" },
        ["_KWA_QUICKSTART_INFO"] = { varName = "_txtQuickStartInfo" },
        ["_KW_AD_ICON"] = { varName = "_KW_AD_ICON" },

        ["_KW_BTN_VIP"] = {varName = "_btnVip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSxvip"},
        ["_imgDiamondTip"] = {varName = "_imgDiamondTip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_ADD_DIAMOND" },
        ["_imgGoldTip"] = {varName = "_imgGoldTip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "on_KWA_BTND_ADD_GOLD"},
    }
end

function LobbyView:getInitProxyEventsState()
    return "enterTransitionFinish"
end

function LobbyView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Match"), eventKeyName = "EVENT_UPDATE_PEAKRACE", callBack = "flushPeakRaceInfo" },
        { module = XH.teaHouseManager, eventKeyName = "EVENT_TEA_HOUSE_UPDATE_START", callBack = "onTeaHouseUpdateStart" },
        { module = XH.teaHouseManager, eventKeyName = "EVENT_TEA_HOUSE_UPDATE_CHANGE", callBack = "onTeaHouseUpdateChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_AGENT_FLAG_CHANGED", callBack = "onAgentFlagChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_PHONE_CHANGED", callBack = "onPhoneChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_BIND_DSB_CHANGED", callBack = "onBindDSBChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_POSITION_CHANGED", callBack = "onPositionChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "onItemUpdate" },
        { module = XH.playerData, eventKeyName = "EVENT_BIND_USER_CHANGED", callBack = "onCheckBindUser" },
        { module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "onSRChanged" },
        { module = XH.playerData, eventKeyName = "EVENT_GET_PLAYER_POSITION", callBack = "onEnterH5GameListen" },
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_RECHARGE_FLAG", callBack = "onPlayerRechargeFlag" },
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_TIME_ROOMCARD_CHANGED", callBack = "onTimeCardInfo" },
        { module = XH.goldConfigManager, eventKeyName = "GOLD_EVENT_CONFIG", callBack = "onRefreshGoldUI" },
        { module = XH.taskManager, eventKeyName = "BREAK_GIFT_BAG_SHOW_TIME", callBack = "onBreakGiftBagEvent" },
        { module = XH.lobby:getModule("BackActivity"), eventKeyName = "KW_BACK_ACT_SHOW_ICON", callBack = "onShowBackActIcon" },
        { module = XH.lobby:getModule("GoldNew.SubModules.Mail"), eventKeyName = "MAIL_EVENT_CHECKNEW", callBack = "refreshMailRed" },
        { module = XH.lobby:getModule("NewVip"), eventKeyName = "EVENT_SHOW_VIP", callBack = "onShowVip" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_XIUXIAN_GAME", callBack = "showXIUXIANLobby" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_BOX_GAME", callBack = "showYouXILobby" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_SHOW_DETAIL_LAYER", callBack = "onShowDetailGoldLayer" },
        { module = XH.lobby:getModule("BagSysNew"), eventKeyName = "EVENT_BAGMANAGER_CHANGE_HEAD_FRRAME", callBack = "onEventChangeHeadFrame" },
        { module = XH.lobby:getModule("BagSysNew"), eventKeyName = "KW_SHOW_BAG_BTN_TEXT", callBack = "onEventSetBagBtnText" },
        { module = XH.lobby:getModule("GiftBag"), eventKeyName = "EVENT_SHOW_BREAK_GIFT", callBack = "onBreakGiftBagShow"},
        { module = XH.lobby:getModule("SaleGiftbag"), eventKeyName = "TASK_TYPE_ID_DISCOUNT", callBack = "onShowDiscountLayer"},
        { module = XH.lobby:getModule("SaleGiftbag"), eventKeyName = "EVENT_SHOW_DISCOUNT_GIFT", callBack = "onEventShowDiscountGift"},
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_HUO_DONG_RED_POS", callBack = "onEventflushPhoneBindRedPos" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_OPEN_IM_VIEW", callBack = "onEventOpenImCallBack" },
        { module = XH.lobby:getModule("CusService"), eventKeyName = "EVENT_CUS_SERVICE_MSG_UNREAD", callBack = "refreshCurServiceRed" },
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_HAVE_NEW_GIFT_BOX", callBack = "refreshShopIconRed" },
        { module = XH.lobby:getModule("ToponAct"), eventKeyName = "KW_TOPON_ACT_SHOW_ICON", callBack = "onShowToponActIcon" },
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_SHOP_NEW_ITEM", callBack = "refreshShopIconRed" },
        { module = XH.lobby:getModule("PrayAct"), eventKeyName = "EVENT_INVITE_PRAYACT_INFO", callBack = "onPrayActInfo"},
        { module = XH.lobby:getModule("PersonalGiftPack"), eventKeyName = "EVENT_CONFIG_DATA_CHANGED", callBack = "onPersonalGiftPackInfo"},
        { module = XH.sdkManager, eventKeyName = "EVENT_H5GAME_CALLBACK", callBack = "onH5GameClose" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_START_H5ROOM",callBack = "startH5Room"},
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_LOBBY_ICONS",callBack = "onReqWebIconsBack"},
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_LEISURE_ENTRANCE",callBack = "onEventShowLeisureEntrance"},
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_GET_ICON_WORLD_POS",callBack = "onEventGetIconWorldPos"},
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE",callBack = "onWinSizeChange"},
        { module = XH.lobby:getModule("Double12"), eventKeyName = "EVENT_ACT_INFO",callBack = "flushDouble12ActIcon"},
        { module = XH.lobby:getModule("NewYear2026"), eventKeyName = "EVENT_FLUSH_ACTIVITY_INFO",callBack = "flushNewYear2026Icon"},
        { module = XH.lobby:getModule("InviteActivity"), eventKeyName = "EVENT_INVITE_ACT",callBack = "flushInviteActIcon"},
        { module = XH.lobby:getModule("LuckyTurnTableAct"), eventKeyName = "EVENT_FLUSH_LOBBY_ICON", callBack = "flushLuckyTurnTableActIcon"},
        { module = XH.viewManager,eventKeyName = "EVENT_CLOSE_VIEW", callBack = "onCloseView" },
        { module = XH.viewManager,eventKeyName = "EVENT_OPEN_VIEW", callBack = "onOpenView" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_SHOW_RED_POS", callBack = "onEventShowRedPos" },
        { module = XH.lobby:getModule("LuckyTurnTableAct"), eventKeyName = "EVENT_GET_ACT_DATA", callBack = "onGetLuckyTurnTableActData"},
        { module = XH.lobby:getModule("Promote"), eventKeyName = "EVENT_FULSH_PROMOTE_DAY_ICON", callBack = "onEventShowPromoteIcon"},
        { module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NUIAddLobbyIcon", callBack = "onEventShowLuckTaskIcon"},
        { module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyLuckyTaskJoin", callBack = "onEventLuckyTaskJoin"},
        { module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NUIUPDATELOBBYICONBUBBLETIP", callBack = "onEventLuckyTaskIconTip"},
        { module = XH.lobby:getModule("Share"), eventKeyName = "EVENT_LOBBY_SHARE_DATA", callBack = "onEventFlushShareInfo"},
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_SHOW_SIGN_ICON", callBack = "onEventShowSignIcon" },
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_SHOW_SIGN_REDPOINT", callBack = "onEventShowSignRedPoint" },
        { module = XH.lobby:getModule("Article"), eventKeyName = "EVENT_ARTICLE_LIST_INFO", callBack = "onEventArticleList" },
        { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_CONFIG_SUCC", callBack = "onUpdateSxvipStatus" },
        { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_CONFIG_FAIL", callBack = "onUpdateSxvipStatus" },
        { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REMAINDER", callBack = "onUpdateSxvipStatus" },
        { module = XH.lobby:getModule("YGiftBankruptcy"), eventKeyName = "FLUSH_ACT_INFO", callBack = "onUpdateBankruptcyStatus" },
        { module = XH.lobby:getModule("YGiftBankruptcyV2"), eventKeyName = "FLUSH_ACT_INFO", callBack = "onUpdateBankruptcyStatus" },
        { module = XH.lobby:getModule("YGiftDefeat"), eventKeyName = "FLUSH_ACT_INFO", callBack = "onUpdateGiftDefeatStatus" },
        { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_MESSAGE_COUNT", callBack = "onUpdateSxvipStatus" },
        { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
        { module = XH.lobby:getModule("LimitFreeAct"), eventKeyName = "EVENT_FLUSH_FREE_ACT_INFO", callBack = "onEventFlushLimitFreeAct" },
        { module = XH.lobby:getModule("TimeLoginAct"), eventKeyName = "FLUSH_TIMELOGIN_ACT_INFO", callBack = "onUpdateTimeLoginActStatus" },
        { module = XH.lobby:getModule("BindPhone"), eventKeyName = "EVENT_BIND_PHONE_INFO", callBack = "onBindPhone" },
        { module = XH.lobby:getModule("SxvipAct"), eventKeyName = "SXVIP_ACT_FINISH", callBack = "onFlushSxVipAct" },
        { module = XH.lobby:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_UPDATE_BATTLE_PASS_ICON", callBack = "onEventUpdateBattlePassIcon" },
        { module = XH.lobby:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_UPDATE_BATTLE_PASS_REDPOINT", callBack = "onEventUpdateBattlePassRedPoint" },
        { module = XH.lobby:getModule("UnlimitBoxAct"), eventKeyName = "FLUSH_ACT_INFO", callBack = "onUpdateUnlimitBoxActTag" },
        { module = XH.lobby:getModule("Share"), eventKeyName = "EVENT_UPDATE_LUCKY_BAG_ICON", callBack = "onEventUpdateLuckyBagIcon" },
        { module = XH.lobby:getModule("GoldNew"), eventKeyName = "EVENT_RUN_BACKGROUND_ACTION", callBack = "onEventRunBackgroundAction" },
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "onEventFlushRecallNewIcon" },

        {module = XH.lobby:getModule("GoldNew.SubModules.Shop"), eventKeyName = "EVNET_DIAMONDS_GOODS_LIST", callBack = "onRefreshNewGoodsList"},
        {module = XH.lobby:getModule("GoldNew.SubModules.Shop"), eventKeyName = "EVENT_GOLDHALL_EXCHANGE_INFO", callBack = "onRefreshNewGoodsList"},
        {module = XH.lobby:getModule("LuckyMission"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "onEventFlushLuckyMissionIcon" },
        {module = XH.lobby:getModule("GoldNew.SubModules.CoinRewards"), eventKeyName = "EVENT_UPDATE_RED_POINT", callBack = "updateCoinRewardRedPoint"},
        
        { module = XH.lobby:getModule("InviteActivity"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "onEventFlushInviteActRedPoint" },
        { module = XH.lobby:getModule("LuckyMission"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "onEventFlushLuckyMissionIcon" },
        { module = XH.lobby:getModule("FriendTea"), eventKeyName = "EVENT_UPDATE_HALLFRIENDS", callBack = "onUpdateFriendTeaStatus"},
        { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
    }
end

function LobbyView:onGetConfiguration()
    self._imgBoxRoomFree:setVisible(XH.lobby:getModule("LimitFreeAct"):isInFreeTimeAll())
end

function LobbyView:onEnterEventInit()
    self._enterForegroundListener = cc.EventListenerCustom:create("APP_ENTER_FOREGROUND_EVENT",handler(self, self.onEnterCPSChannelForeground))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._enterForegroundListener, 1)
end

function LobbyView:onCleanup()
    self:removeHorseSchedule()
    self:removeGoldSchedule()
    self:removeGameCenterSchedule()
    LobbyView.super.onCleanup(self)
end

function LobbyView:onExit()
    self._goldConfigSuccess = false
    self._nicheConfigSuccess = false

    LobbyView.super.onExit(self)

    if self._enterForegroundListener then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._enterForegroundListener)
    end

    if self.KWA_IM_LIST_PANEL then
        local child = self.KWA_IM_LIST_PANEL:getChildren()[1]
        if child then
            child:close()
        end
    end

    if self._mainRightMenuBar then
        local iMMessageIcon = self._mainRightMenuBar:getMenuByID(LobbyConfig.ICON_ID.HAO_YOU_XI_TONG)
        if iMMessageIcon then
            local child = iMMessageIcon:getChildren()[1]
            if child then
                child:close()
            end
        end
    end
end

-- 切换选区
function LobbyView:onTouchEventChangeArea(send, eventType)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_CHANGE_AREA)
    XH.login:getModule("Login"):clearLoginStates()
    XH.loginData:setLobbyID(0)
    XH.Controller:getInstance():enterLogin(false,true)
end

function LobbyView:ctor() 
    LobbyView.super.ctor(self)
    self:setContentSize(display.width, display.height)
    self._curLobbyType = XH.LOBBY_TYPE.YUEJU
    XH.lobby:getModule("Lobby"):setLobbyType(self._curLobbyType)
    
    self._mainTopMenuBar = nil
    self._mainBottomRightMenuBar = nil
    self._mainBottomLeftMenuBar = nil
    self._mainScondMenu = nil
    self._mainRightMenuBar = nil
    self._mainLeftMenuBar = nil
    self._discountData = nil
    self:adaptForLiuHai()--左侧按钮列表刘海屏适配
    self:recordLobbyViewData()
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement", false)
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement1", false)

    local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.TABLE]
    local infoMah = info.mah
    local infoCard = info.card
    XH.SpineManager:preloadAni(infoMah.aniPath, infoMah.filename)
    XH.SpineManager:preloadAni(infoCard.aniPath, infoCard.filename)

    self._goldConfigSuccess = false
    self._nicheConfigSuccess = false
end

function LobbyView:recordLobbyViewData()
    local data = {}
    data.time1 = os.time()
    data.userid = XH.playerData:getNumberID()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.LoginSuccess,data)
end

function LobbyView:throwStart()
    XH.NewThrowDataManager:AnalyseStartData("大厅页面")
    XH.NewThrowDataManager:endData()
end

function LobbyView:onEnter()
    self:throwStart()
    XH.playerData:flushPlayerPosition()
    XH.lobby:getModule("GoldNew.SubModules.Mail"):reqCheckNewMail()

    local bSupportFriendList = XH.areaData:isSupportFriendList()
    if bSupportFriendList then
        self.KWA_IM_LIST_PANEL:removeAllChildren()
        if XH.areaData:isSupportFriendsV2() then
            self._imListLayer = require("lobby.Modules.Im.NewIMView").new()
        else
            self._imListLayer = require("lobby.Modules.Im.View").new(self._curLobbyType)
        end
        self.KWA_IM_LIST_PANEL:addChild(self._imListLayer)

        XH.SysTool.performWithDelayGlobal(function ()
            local reserveInfo = XH.lobby:getModule("Im"):getReserveInfo()
            if reserveInfo then
                XH.viewManager:openView("ImInviteView", nil, {info = reserveInfo})
                XH.lobby:getModule("Im"):clearReserveInfo()
            end
        end, 0.5)
    end

    -- 个推消息相关处理
    XH.lobby:getModule("Lobby"):dealWithGeTuiMsg()

    XH.lobby:getModule("CrmNotice"):reqCrmNotice()

    XH.lobby:getModule("LuckyTurnTableAct"):reqActData()

    --请求封禁状态
    cc.UserDefault:getInstance():setBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID(),false)
    XH.lobby:getModule("Lobby"):reqGetBanInfo()
end

--游戏第一次登陆成功的时候，该layer还没有初始化
function LobbyView:onEnterTransitionFinish()
    self:playSpringAni()
    XH.sdkManager:reqDeviceId()
    self:initLayer()
    self.KWA_TOUCH_LAYER_PANEL:setSwallowTouches(false)
    self:updateData()

    self:setGoldSchedule()
    self:initAudio()
    self:initRightTopUI()
    self:initMainRightBottomUI()
    self:initRightUI()
    self:initLeftUI()
    self:initBottomLeftUI()
    self:initMainSecondMenu()
    self:initAni()
    self:onEnterEventInit()
    self:retainPlists()
    --刷新一次cps渠道的界面
    self:updateCpsChannelUI()
    if self._curLobbyType == XH.LOBBY_TYPE.YUEJU then
        self:showYouXILobby(false)
    else
        self:showXIUXIANLobby(nil, true)
    end
    if self._imgTeaHouseUpdate then
        self._imgTeaHouseUpdate:setVisible(false)
    end
    -- XH.goldConfigManager:resetGoldConfig()
    -- XH.lobby:getModule("Lobby"):reqWebIcons()
    -- 请求配置中心配置，从登录移到这里，防止数据请求太快，但是UI还没初始化，事件分发不过来的问题。
    self:reqGameIconList()
    self:updateLeisureEntrance()
    if XH.ChannelTool.checkIsECarChannel() then
        self.KWA_GOLD_TOP_MENU_BAR:setVisible(false)
    end
    
    self:showSexVoiceTip()
    --进入大厅主动请求一次y_m_n_link的接口
    if not self.isReqGetUri then
        self.isReqGetUri = true
        local targetPlatform = cc.Application:getInstance():getTargetPlatform()
        if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform then
            XH.sdkManager:xhCallOCFunc("XHlink", "xhlink_get_uri")
        elseif cc.PLATFORM_OS_ANDROID == targetPlatform then
            if XH.SysTool:GetBundleVersion() > "1.0.4" then
                XH.TipTool.showClipboardTip({msg = "是否允许使用剪切板，快速加入房间"})
            end
        end
    end
    self:onEventFlushLimitFreeAct()
    self:onEventShowLuckTaskIcon({ data = { icon = LobbyConfig.ICON_ID.SCORE_ASSISTANT, isShow = true } })
    self:setMenuIconVisible(LobbyConfig.ICON_ID.XIA_GUANG, XH.lobby:getModule("XiaGuang"):isValid())
    self:setMenuIconVisible(LobbyConfig.ICON_ID.DIAN_FENG_SAI, true)

    -- self:setMenuIconTipText(LobbyConfig.ICON_ID.ZHAN_JI, "可以查看金币场战绩啦")
    XH.lobby:getModule("Lobby"):openAniTopView()
    self:initRedpointEvent()
    self:updateQuickStart()
    self._is2026RedShow = false
    self:runAction(cc.Sequence:create(cc.DelayTime:create(5), cc.CallFunc:create(function() 
		self._is2026RedShow = true
	end)))
end

function LobbyView:getAllConfigInfo(key)
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    return configModule:getAllConfigData(key)
end

function LobbyView:updateQuickStart()
    if self._aniQuickStart == nil then
        self._aniQuickStart = XH.SpineManager:playAni(self._posQuickStart, "animation/Lobby/Base/NewGoldHall/QuickStart/", "zzb_jbdt_ksks", "animation", true)
    end
    local localInfo = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LAST_GAME_INFO, {lid = 0, isGold = true}) 
    if localInfo.isGold and localInfo.lid == 0 then 
        local remoteCfg = (self:getAllConfigInfo("QuickStart") or {})[XH.areaData:getAreaID()..""] or {lid = 2034}
        localInfo.lid = remoteCfg.lid
    end

    if localInfo.isGold then
        local ConfID = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX, 0)
        if ConfID > 0 then
            localInfo.lid = ConfID 
        end
        local roomConfig = XH.goldConfigManager:getGoldRoomInfoByIndex(localInfo.lid)
        if roomConfig and roomConfig.roomInfo and roomConfig.roomInfo.GameTitle then
            localInfo.gameName = roomConfig.roomInfo.GameTitle
            localInfo.gameId = roomConfig.roomInfo.GameID
        end
    end
    localInfo.teaId = localInfo.teaId or 0
    local info = localInfo.isGold and "金币场-".. (localInfo.gameName or "") or tonumber(localInfo.teaId) > 0 and "比赛场" or "好友房"
    self._txtQuickStartInfo:setString(info)
    self._quickStartInfo = localInfo
end

function LobbyView:onClickQuickStart()
    self._mainScondMenu:setVisible(false)
    if self._quickStartInfo then
        if tonumber(self._quickStartInfo.teaId) > 0 then
            local bSuc =  XH.lobby:getModule("Lobby"):gotoTeaHouse(self._quickStartInfo.teaId)
            if not bSuc then
                self:on_KWA_BTND_TEA_HOUSE()
            end
        elseif not self._quickStartInfo.isGold then
            XH.viewManager:openView("CreateBoxRoomView", nil, {gameid = self._quickStartInfo.gameId})
        else
            XH.lobby:getModule("GoldQuickEnter"):enterGoldGameByLID(self._quickStartInfo.lid)
        end
        XH.NewThrowDataManager:throwData("xjb25022807", {page="主大厅", game_id = self._quickStartInfo.gameId or 0})
    end
end

function LobbyView:initRedpointEvent()
    if self._isInitRedPoint then
        return
    end
    if XH.Bridge:getModule("GoldNew"):isSupport("shop") then
        RedPointManager:registerNode("shop")
        RedPointManager:addListener("shop", function(state)
            if tolua.isnull(self) then
                return
            end
            self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.SHANG_CHENG, state)
        end)
    end
    RedPointManager:registerNode("bag")
    RedPointManager:addListener("bag", function(state)
        if tolua.isnull(self) then
            return
        end
        -- state = true
        self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.BEI_BAO, state)
        if state then
            self:setMenuIconTipText(LobbyConfig.ICON_ID.BEI_BAO, "查看新物品", 2)
        end
    end)
    RedPointManager:registerNode("zhuangban")
    RedPointManager:addListener("zhuangban", function(state)
        if tolua.isnull(self) then
            return
        end
        self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.ZHUANG_BAN, state)
    end)
    local isClicked = cc.UserDefault:getInstance():getBoolForKey("EVENT_CLICK_ZB_BTN_" .. XH.playerData:getNumberID(), false)
    RedPointManager:setState("zhuangban", isClicked == false)
    self._isInitRedPoint = true
end

function LobbyView:showUpdateTip()
    XH.TipTool.showTip(
        {
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                XH.SysTool.downloadNewVersionApp()
            end
        },
        "新玩法上线！请更新至新版本体验！"
    )
end

function LobbyView:isNeedShowUpdateTip()
    -- 人人捕鱼提示更新条件
    if device.platform == "ios" and not XH.SysTool:CompareToBundleVersion("1.3.29") then
        return true
    end
    return false
end

function LobbyView:checkShowUpdateTip()
    if XH.loginData:isTodayFirstLogin() and self:isNeedShowUpdateTip() then
        self:showUpdateTip()
    end
    if device.platform == "ios" and self:isNeedShowUpdateTip() then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.APP_UPDATE_TIP, true)
    end
end

function LobbyView:onPlayerRechargeFlag(event)
    if XH.playerData:isRechargePlayer() then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.MEI_RI_CHOU_JIANG, false)
    end
end

function LobbyView:onReqWebIconsBack(event)
    self:initRightTopUI()
    self:initRightUI()
    self:initBottomLeftUI()
    if self._curLobbyType == XH.LOBBY_TYPE.YUEJU then
        self._mainTopMenuBar:setOpacity(255)
        self._mainRightMenuBar:setOpacity(255)
    else
        self._mainTopMenuBar:setOpacity(0)
        self._mainRightMenuBar:setOpacity(0)
    end
    if XH.lobby:getModule("ToponAct"):isOpen() then
        XH.lobby:getModule("ToponAct"):reqToponActInfo()
    end
    
    XH.lobby:getModule("Lobby"):checkOpenActivity()
        --请求折扣礼包
    XH.lobby:getModule("SaleGiftbag"):reqDiscountGiftBag()
    if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CUSSERVICE_TIP_SHOW, false) then
        self:removeMenuIconTipText(LobbyConfig.ICON_ID.KE_FU)
    end
    self:initTipImageButtonCallBack()

    XH.lobby:getModule("BackActivity"):reqBackActProtocol("lobby")

    XH.lobby:getModule("PrayAct"):reqPrayActInfo()
    XH.lobby:getModule("PopCommonLayer"):reqPopLayerInfo()
    -- 问卷系统
    if XH.lobby:getModule("PopComplain"):isReqComplainData() then
        XH.lobby:getModule("PopComplain"):reqComplainInfo()
    end

    if XH.lobby:getModule("Promote"):getBaseInfo() == nil then
        XH.lobby:getModule("Promote"):reqSpreadInfo()
    end

    XH.lobby:getModule("LuckyTask"):reqActList()
    XH.lobby:getModule("LuckyTask"):reqTaskList(true)
    XH.lobby:getModule("Share"):reqLobbyShareInfo()
    XH.lobby:getModule("Article"):reqArticleListInfo()
    XH.lobby:getModule("YGiftBankruptcy"):initGoldActData()
    XH.lobby:getModule("YGiftBankruptcyV2"):initGoldActData()
    XH.lobby:getModule("InviteActivity"):reqInviteLogin()
    -- 假分享类型
    XH.lobby:getModule("Share"):reqGetShareType()
    self:reqPeakRaceInfo()
    -- self:checkShowUpdateTip()
    -- 绑定手机
    XH.lobby:getModule("BindPhone"):reqBindPhoneInfo()
    XH.playerData:flushBindUserData()

    -- 检测红点显示
    XH.lobby:getModule("GoldNew.SubModules.CoinRewards"):checkRedPoint()
    self:onFlushSxVipAct()
    self:setMenuIconVisible(LobbyConfig.ICON_ID.XIA_GUANG, XH.lobby:getModule("XiaGuang"):isValid())
    self:setMenuIconVisible(LobbyConfig.ICON_ID.DIAN_FENG_SAI, true)
    self:onUpdateFriendTeaStatus(true)
    self:onEventFlushLuckyMissionIcon()
end
-- 这里增加请求的时候确认下金币场是否需要请求，需要的话插件包也要加相关请求 function GoldNewView:initReqPlugin()

function LobbyView:adaptForLiuHai()
    local nodeListName = {"panel_head", "_KWA_LEFT_MENU_BAR", "_KWA_BOTTOM_LEFT_MENU_BAR", "_KWA_BOTTOM_QUICKSTAR"}

    local nodeList = {}
    for _,name in pairs(nodeListName) do
        local tmpNode = XH.UITool.seekNodeByName(self, name)
        nodeList[#nodeList + 1] = tmpNode
    end
    XH.UITool.adaptForLiuHai(nodeList)
end

function LobbyView:onAgentFlagChanged(event)
    
end

-- 邀请码红点
function LobbyView:onBindDSBChanged(event)
    local lasttime = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_TOUCH_INVATE)
    if XH.playerData:getIsBindDSB() or XH.SysTool.isToday(lasttime) then
        self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.YAO_QING,false)
    else
        self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.YAO_QING,true)
    end
end

-- 邮件红点
function LobbyView:refreshMailRed(event)
    local cnt = event.count or 0
    local awardCnt = event.awardCount or 0
    -- self:setMenuIconTipNewAwardVisible(LobbyConfig.ICON_ID.YOU_JIAN, awardCnt > 0)
    -- self:setMenuIconTipNewsVisible(LobbyConfig.ICON_ID.YOU_JIAN, awardCnt <= 0 and cnt > 0)
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.YOU_JIAN,awardCnt > 0)
end

-- 客服红点
function LobbyView:refreshCurServiceRed(event)
    local cnt = event.msg or 0
    local showRed = cnt > 0 and true or false
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.KE_FU,showRed)
end

-- 刷新商城红点状态
function LobbyView:refreshShopIconRed(event)
    -- if event then
    --     self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.SHANG_CHENG, event.data or false)
    -- end
end

function LobbyView:initAni()
    -- BQ相关处理
    self:initLobbyMainBanquan()
    -- 更新远端动画
    self:updateGameCommonAni()
end

function LobbyView:initLobbyMainBanquan()
    local areaBqString = XH.areaData:getTemporaryBq() or ""
    if XH.configerManager:getIsBanQuan() and areaBqString ~= "" then
        self._TextBanQuan:setText("-" .. areaBqString)
        self._TextBanQuan:setVisible(true)
    else
        self._TextBanQuan:setVisible(false)
    end
end

function LobbyView:onShowVip(event)
    local isVip = event.isVip or false
    self:initVipAni(isVip)
end

function LobbyView:initLayer()
    self:onChangeBg()
end

function LobbyView:onItemUpdate()
    self:updateData()
    self:showShopChargeTip()
end

function LobbyView:onPositionChanged()
    self:showBackBoom()
end

function LobbyView:showBackBoom()
    
    local node 
    if XH.ChannelTool.checkIsCPSChannel() then
        node = XH.UITool.seekNodeByName(self, "_KW_IMG_BOX_ROOM_TITLE_CPS")
    else
        node = XH.UITool.seekNodeByName(self, "_KW_IMG_BOX_ROOM_TITLE")
    end
    if node then
        local position = XH.playerData:getPlayerPosition()
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/lobby.plist")
        if position.gameID ~= 0 then
            node:loadTexture("lobby_title_back_box.png", ccui.TextureResType.plistType)
        else
            node:loadTexture("lobby_title_create_box.png", ccui.TextureResType.plistType)
        end
    end
end

function LobbyView:onPhoneChanged()
    if XH.playerData:isBindPhone() then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.BANG_DING_SHOU_JI, false)
    end
    XH.playerData:flushBindUserData()
    self:showPhoneBindQiPao()
end

function LobbyView:flushDouble12ActIcon(event)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/CSB/Activity/Double12_2025/Image/_Plist.plist")
    self:setMenuIconVisible(LobbyConfig.ICON_ID.DOUBLE12, event.data.visible)
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.DOUBLE12, true)
    if not self._isShowDouble12Icon and event.data.visible then
        self._isShowDouble12Icon = true
        XH.NewThrowDataManager:throwData("cc2025112101", {page = "主大厅"})
    end
end

function LobbyView:flushNewYear2026Icon(event)
    -- local bShowNewYearAct = XH.lobby:getModule("NewYear2026"):isValid()
    -- self:setMenuIconVisible(LobbyConfig.ICON_ID.NEWYEAR_2026, false)-- bShowNewYearAct)
    -- self:setMenuIconVisible(LobbyConfig.ICON_ID.DIAN_FENG_SAI, bShowNewYearAct)
    -- self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.NEWYEAR_2026, XH.lobby:getModule("NewYear2026"):isHaveAward())
    -- if not self._is2026RedShow and XH.lobby:getModule("NewYear2026"):isHaveAward(true) then
    --     self._is2026RedShow = true
    --     XH.lobby:getModule("NewYear2026"):checkShowInviteViewWithAward()
    -- end 
end

function LobbyView:flushInviteActIcon(event)
    self:setMenuIconVisible(LobbyConfig.ICON_ID.INVITE_ACT, event.data.bShow)
    self:updateDFSEntry()
end

function LobbyView:flushLuckyTurnTableActIcon(event)
    self:setMenuIconVisible(LobbyConfig.ICON_ID.LUCKY_TURN_TABLE_ACT, event.data.bShow)
end

function LobbyView:onClickCreateRoom(send,eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240112)
    self:on_KWA_BTND_CREATE_BACK_BOX_ROOM(send,eventType)
end

function LobbyView:on_KWA_BTND_CREATE_BACK_BOX_ROOM(send,eventType)
    XH.TipTool.showLoading()
    local func = function()
        XH.TipTool.hideLoading()
    end
    self:performWithDelay(func, 0.2)
    --if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
    local position = XH.playerData:getPlayerPosition()
    if position.gameID == 0 then
        if cc.UserDefault:getInstance():getBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID()) then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,            
            }, "您已被封禁对局，无法进入房间，如有疑问请联系客服。")
        else
            XH.viewManager:openView("CreateBoxRoomView")
        end
        XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_CREATE_BOX_ROOM)
    else
        XH.TipTool.showLoading()
        local func = function ()
		    if tonumber(position.teaID) ~= 0 and not XH.lobby:getModule("Im"):checkIsGroup(position.teaID) then
			    --事件分发,请求进入比赛场
                XH.teaHouseManager:joinTeaHouse(position.teaID, position.roomID)
		    else
                if position.teaNumber then
                    XH.lobby:getModule("Im"):getIMData():setEnterTeaHouseID(position.teaNumber)
                end
                local func = function( )
                    local param = {}
                    param.appID = position.gameAppID
                    param.gameID = position.gameID
                    param.roomMode = XH.ROOM_MODE.BOXROOM
                    param.roomID = position.roomID
                    param.srsGroupID = position.srsGroupID
                    param.sRoomMode = position.roomMode
                    XH.roomManager:gameStart(param)
                end

                if XH.lobby:getModule("Lobby"):isNeedHotUpdata(position.gameID) then
                    lobby.gameHotUpdateSuccessCallBack = func
                else
                    func()
                end
		    end
            XH.TipTool.hideLoading()
        end
        self:performWithDelay(func, 0.2)
    end
end

function LobbyView:on_KWA_BTND_HEAD(send,eventType)
    XH.playerData:flushPlayerDrop()
    XH.playerData:flushGoldCoin()
    XH.playerData:flushBindUserData()
    XH.viewManager:openView("PersonalCenterView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BTN_PERSON_CENTER)
    if self._bindCardTip:isVisible() then
        self._bindCardTip:setVisible(false)
        XH.lobby:getModule("Lobby"):addRecordForLimitedTimeBindCard()
    end
end

function LobbyView:onClickJoinRoom(send, eventType)
    self:on_KWA_BTND_JOIN_ROOM(send, eventType)
end

function LobbyView:on_KWA_BTND_JOIN_ROOM(send, eventType)
    XH.TipTool.showLoading()
    local func = function()
        XH.TipTool.hideLoading()
    end
    self:performWithDelay(func, 0.2)
    if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
    if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/joinboxroom.plist")
    local position = XH.playerData:getPlayerPosition()
    if position.gameID ~= 0 then
        self:on_KWA_BTND_CREATE_BACK_BOX_ROOM(self._createBackBoxRoomBtn, eventType)
    else
        XH.viewManager:openView("JoinBoxRoomView")
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_JOIN_BOX_ROOM)
    XH.TipTool.showClipboardTip({always = true, msg = "是否允许使用剪切板，快速加入房间"})
end

function LobbyView:on_KWA_BTND_TEA_HOUSE(send,eventType)
    if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
    if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
    XH.teaHouseManager:openTeaHouseList()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_JOIN_TEA_HOUSE)
end

function LobbyView:on_KWA_BTND_ADD_GOLD(send,eventType)
    cc.UserDefault:getInstance():setIntegerForKey("NEWGOLDHALL_JBTIP_LASTSHOWTIME", os.time())
    self:onRefreshNewGoodsList()
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.GOLD})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_ADD_GOLD_BTN,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_ACTIVITY_QIANDAO(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function LobbyView:on_KWA_TOUCH_LAYER_PANEL(send, eventType)
    self._mainScondMenu:setVisible(false)

    --好友系统页面
    XH.lobby:getModule("Im"):dispatchEvent({name = XH.lobby:getModule("Im").EVENT_HIDE_MESSAGELAYER})
    XH.lobby:getModule("Im"):dispatchEvent({name = XH.lobby:getModule("Im").EVENT_HIDE_NOTIFY_INVITE})
end

function LobbyView:showYouXILobby(withAni)
    if withAni == nil then
        withAni = true
    end
    XH.lobby:getModule("Lobby"):setIsOpenGoldView(false)
    self._curLobbyType = XH.LOBBY_TYPE.YUEJU
    XH.lobby:getModule("Lobby"):setLobbyType(self._curLobbyType)
    self:onChangeBg()
    
    if XH.ChannelTool.judgeIsChannel() then 
        self:setAreaInfoVisible(false)
    else
        self:setAreaInfoVisible(true)
    end 
    local isNewGoldHall = XH.lobby:getModule("Lobby"):isNewGoldHall()
    if isNewGoldHall then
        self._KW_ANI_TOP:setVisible(true)
        if withAni then
            XH.UITool.runLobbyAction(self._KWA_TOP_HORSE, {"", "commonFadeIn"})
            XH.UITool.runLobbyAction(self.KWA_NORMAL_LOBBY_PANEL, {"", "commonFadeIn"})
            local panel_head = XH.UITool.seekNodeByName(self, "panel_head")
            if panel_head then
                XH.UITool.runLobbyAction(panel_head, {"", "commonFadeIn"})
            end
        else
            self._KWA_TOP_HORSE:setOpacity(255)
            self.KWA_NORMAL_LOBBY_PANEL:setOpacity(255)
            local panel_head = XH.UITool.seekNodeByName(self, "panel_head")
            if panel_head then
                panel_head:setOpacity(255)
            end
        end
    end
    self.KWA_XIUXIANDATING_TITLE:setVisible(false)
    self._mainBottomRightMenuBar:setVisible(true)
    self._mainLeftMenuBar:setVisible(true)
    if withAni then
        -- XH.UITool.runLobbyAction(self._btnLuckBag, {"", "commonFadeIn"})
        XH.UITool.runLobbyAction(self._mainTopMenuBar, {"", "commonFadeIn"})
        XH.UITool.runLobbyAction(self._mainBottomLeftMenuBar, {"", "commonFadeIn"})
        XH.UITool.runLobbyAction(self._mainRightMenuBar, {"", "commonFadeIn"})
        XH.UITool.runLobbyAction(self._posQuickStart, {"", "commonFadeIn"})
    else
        -- self._btnLuckBag:setOpacity(255)
        self._mainTopMenuBar:setOpacity(255)
        self._mainBottomLeftMenuBar:setOpacity(255)
        self._mainRightMenuBar:setOpacity(255)
    end

    self:showLobbyHeadSR(false)
    self:changeLobbyUI(self.KWA_RIGHT_POS, self.KWA_NORMAL_LOBBY_PANEL, true, nil, nil, withAni)
    self:stopTouch(0.7)
    self:showBreakGift()

    XH.lobby:getModule("PopSystem"):startShowPopViews("LOBBY")
    
    self:showNewPlayTypeUI(self:isShowNewPlayTypeUI())
    self:UpdatePromoteState()
    XH.lobby:getModule("AutoPop"):whenBackLobbyCheckPop()
    XH.lobby:getModule("LuckyTurnTableAct"):tryDailyAutoPop()
end

function LobbyView:UpdatePromoteState()
    self._imgBoxRoomFree:setVisible(XH.lobby:getModule("LimitFreeAct"):isInFreeTimeAll())
    self:onUpdateUnlimitBoxActTag()
end

function LobbyView:onUpdateUnlimitBoxActTag()
    local isActive = XH.lobby:getModule("UnlimitBoxAct"):getRemainTime(2) > 0 and not self._imgBoxRoomFree:isVisible()
    self._imgBoxRoomFreeAct:setVisible(isActive)
    if isActive and #self._imgBoxRoomFreeActAnim:getChildren() == 0 then
        local node1 = XH.SpineManager:playAni(self._imgBoxRoomFreeActAnim, "res/animation/GameCommon/PokerGame/zzb_sk_hy/", "zzb_sk_hy", "animation", true, nil, nil, false)
        node1:setScaleX(0.6)
        node1:setScaleY(0.8)
        node1:setPositionX(-38)
        node1:setPositionY(10)
        local node2 = XH.SpineManager:playAni(self._imgBoxRoomFreeActAnim, "res/animation/GameCommon/PokerGame/zzb_sk_hy/", "zzb_sk_hy", "animation", true, nil, nil, false)
        node2:setScaleX(0.6)
        node2:setScaleY(0.8)
        node2:setPositionX(38)
        node2:setPositionY(10)
    end
end

function LobbyView:isShowNewPlayTypeUI()
    if XH.areaData:getLobbyID() == XH.LOBBY_ID.LISHUI then
        return false
    end
    return GameNewTypeConfiger:getIsNewPlayTypeArea(XH.areaData:getLobbyID())
end

function LobbyView:gotoBuYu()
    if XH.lobby:getModule("RRBuYu"):isDownloading() then 
        XH.TipTool.showToast("正在加载中，请稍等...", 3)
        return
    end
    XH.TipTool.showLoading(2)
    if device.platform == "android" then
        XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
        XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
    elseif device.platform == "ios" then
        XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
    end
end

function LobbyView:showXIUXIANLobby(event, isBackHall, will2ChooseRoom)
    XH.lobby:getModule("Lobby"):setIsOpenGoldView(true)
    self._curLobbyType = XH.LOBBY_TYPE.XIUXIAN
    XH.lobby:getModule("Lobby"):setLobbyType(self._curLobbyType)
    self:onChangeBg()
    self:onUpdateBankruptcyStatus()
    self:onUpdateGiftDefeatStatus()
    self:setAreaInfoVisible(false)
    self.KWA_XIUXIANDATING_TITLE:setVisible(true)
    self._mainBottomRightMenuBar:setVisible(false)
    self._mainScondMenu:setVisible(false)
    self._mainTopMenuBar:setOpacity(0)
    self._mainBottomLeftMenuBar:setOpacity(0)
    self._mainRightMenuBar:setOpacity(0)
    self._mainLeftMenuBar:setVisible(false)
    self._KWA_TOP_HORSE:setOpacity(0)
    -- self._btnLuckBag:setOpacity(0)
    self._posQuickStart:setOpacity(0)
    self:showLobbyHeadSR(true)
    local isNewGoldHall = XH.lobby:getModule("Lobby"):isNewGoldHall()
    if isNewGoldHall then
        self.KWA_NORMAL_LOBBY_PANEL:setOpacity(0)
        local panel_head = XH.UITool.seekNodeByName(self, "panel_head")
        if panel_head then
            panel_head:setOpacity(0)
        end
        self._KW_ANI_TOP:setVisible(false)
        self.KWA_XIUXIANDATING_TITLE:setVisible(false)
        self:showLobbyHeadSR(false)
    end
    self:changeLobbyUI(self.KWA_LEFT_POS, self.KWA_NORMAL_LOBBY_PANEL,false,isBackHall, will2ChooseRoom)
    XH.lobby:getModule("Im"):dispatchEvent({name = XH.lobby:getModule("Im").EVENT_HIDE_LIST_ENTRANCE})
    if (isBackHall == nil and will2ChooseRoom == true) or (isBackHall == true and will2ChooseRoom == nil) then
    else
        XH.lobby:getModule("PopSystem"):startShowPopViews("GOLD")
    end
    XH.lobby:getModule("YGiftBankruptcy"):initGoldActData()
    XH.lobby:getModule("YGiftBankruptcyV2"):initGoldActData()
end

function LobbyView:updateData()
     local nickname = XH.playerData:getNickName()
     local sex = XH.playerData:getSex()
     local id = XH.playerData:getNumberID()
     local roomCard = XH.playerData:getRemodelRoomCard()
     if string.len(nickname) > 12 then
        local validBytes = XH.StringTool.getMinimumValidBytesUTF8(nickname, 12)
        nickname = string.sub(nickname,1,validBytes) .. "..."
     end
     self.KWA_NICKNAME:setText(nickname)
     self.KWA_USER_ID:setText(id)
     -- 超过1W不显示后面小数
     self.KWA_LABEL_HEAD_ROOMCARD:setText(roomCard >= 10000 and math.floor(roomCard) or roomCard)

     --钻石数据
     local diamondCnt = XH.playerData:getDiamnd()
     self.KWA_LABEL_HEAD_DIAMOND:setText(diamondCnt)

     --设置金币数据
     self:updateSR()

     local head = XH.playerData:getHead()
     if head == 0 then --default head
        local headImageKey
         if sex == 0 then --girl
            headImageKey = "_0002_mrtx_w.png"
         else   --boy
            headImageKey = "_0002_mrtx_m.png"
         end
         XH.UITool.setPlistTextureOnNode(self.KWA_IMAGE_HEAD, headImageKey)
     end

	local url = XH.playerData:getWeChatURL()
    self:updateImg(url)

    self:updateBindCardTipShow()
end

function LobbyView:onTimeCardInfo()
    self:updateBindCardTipShow()
end

function LobbyView:updateBindCardTipShow()
    self._bindCardTip:setVisible(XH.lobby:getModule("Lobby"):isHaveNewLimitedTimeBindCard())
end

function LobbyView:updateImg(url)
    if not url or url == "" then
        return 
    end

    if not self._headImg then
        local size = self.KWA_IMAGE_HEAD:getContentSize()
        self._headImg = XH.RemoteImage.new()
            :setTouchEnabled(false)
            :setPosition(size.width/2, size.height/2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width, size.height)
            :addTo(self.KWA_IMAGE_HEAD)
    end

    self._headImg:setUrl(url, true)
end

function LobbyView:onShowBackActIcon(event)
    local data = event.data
    if data.actStartTime and data.actStartTime > 0 then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.HUI_GUI_LI_BAO, true)
        XH.lobby:getModule("TabsActivity"):setShowBackAct(true)
    else
        self:setMenuIconVisible(LobbyConfig.ICON_ID.HUI_GUI_LI_BAO, false)
        XH.lobby:getModule("TabsActivity"):setShowBackAct(false)
    end
end

function LobbyView:onShowToponActIcon(event)
    local data = event.data
    for _, info in ipairs(data) do
        if info.icon and info.isVisibled then
            self:setMenuIconVisible(info.icon, info.isVisibled)
        end
    end
end

function LobbyView:onLoginSuccess()
    self:onChangeBg()
    self:onShowInvateBtn()
end

function LobbyView:onChangeBg()
    if not self._backgroundImg then
        return
    end
    if self.areaImage and self.areaText then
        local areaString = XH.areaData:getAreaName()
        self.areaText:setString(areaString)
        self:setAreaInfoVisible(true)
    end
end

function LobbyView:onWinSizeChange()
    local bili = display.width / display.height
    if bili > (2340 / 1080) then
        self._backgroundImg:setScaleX(display.width / 2340)
    end
    self._panelBg:setScale(1.07)
    local updateFuns = {
        "adaptForLiuHai",
        -- "initMainRightBottomUI",
        -- "initMainSecondMenu"
    }

    for _, v in ipairs(updateFuns) do
        if self[v] then
            self[v](self)
        end
    end
end

function LobbyView:playSpringAni()
    -- if self._KW_ANI_BACK:getChildrenCount() > 0 then
    --     return
    -- end
    -- local path = "animation/Lobby/Base/spine_dt_cjcj/"
    -- if not cc.FileUtils:getInstance():isFileExist(path .. "spine_dt_cjcj.json") then
    --     return
    -- end
    -- local params = { path = path, tex = "spine_dt_cjcj.json", ske = "spine_dt_cjcj.atlas", armatureName = "qian", scale = 1 }
    -- local armature = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    -- if armature then
    --     armature:setAnimation(0, "qian", true)
    -- end
    -- local armature2 = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    -- if armature2 then
    --     armature2:setAnimation(0, "hou", true)
    -- end
    -- self._KW_ANI_BACK:addChild(armature2)
    -- self._KW_ANI_TOP:addChild(armature)
    local bili = display.width / display.height
    if bili > (2340 / 1080) then
        self._backgroundImg:setScaleX(display.width / 2340)
    end
    self._panelBg:setScale(1.07)
    if self._KW_ANI_BACK:getChildrenCount() > 0 then
        return
    end
    local path = "animation/Lobby/Base/zzb_jbdt_cj/"
    if not cc.FileUtils:getInstance():isFileExist(path .. "zzb_jbdt_cj.json") then
        return
    end
    local params = { path = path, tex = "zzb_jbdt_cj.json", ske = "zzb_jbdt_cj.atlas", armatureName = "bg", scale = 1 }
    local armature = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    if armature then
        armature:setAnimation(0, params.armatureName, true)
    end
    local armature2 = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    if armature2 then
        armature2:setAnimation(0, "qj", true)
    end
    self._KW_ANI_TOP:addChild(armature2)
    self._KW_ANI_BACK:addChild(armature)
end

function LobbyView:setAreaInfoVisible(visible)
    self.areaText:setVisible(visible)
    self.areaImage:setVisible(visible)
    self.KWA_AREA_PANEL:setVisible(visible)
end

-- 判断是否存在异常情况导致UI不显示
function LobbyView:fixError(moveNode)
    self._judgeFixError = true
    XH.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        if not self._judgeFixError then
            return
        end
        local nowPosition = cc.p(moveNode:getPosition())
        local opacity = moveNode:getOpacity()
        if opacity == 0 then
            moveNode:stopAllActions()
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.KW_COMMON, { label = "大厅显示异常" }, { info = opacity .. "_" .. nowPosition.x .. "_" .. nowPosition.y })
            moveNode:setOpacity(255)
        end
    end, 0.75)
end

function LobbyView:changeLobbyUI(targetPosNode, moveNode, bMoveIn, isBackHall, will2ChooseRoom, withAni)
    if targetPosNode == nil or moveNode == nil then
        return
    end
    self._judgeFixError = false
    local action
    if bMoveIn then
        self:fixError(moveNode)
    end

    local isNewGoldHall = XH.lobby:getModule("Lobby"):isNewGoldHall()
    if not self._goldLayer and (not isNewGoldHall or not bMoveIn) then
        self._goldLayer = require(isNewGoldHall and "lobby.Modules.GoldNew.View" or "lobby.Modules.Gold.View").new(isBackHall);
        self._goldLayer:setVisible(false)
        self[isNewGoldHall and "KWA_XIUXIAN_LOBBY_NEW_PANEL" or "KWA_XIUXIAN_LOBBY_PANEL"]:addChild(self._goldLayer);
    end

    
    if self._goldLayer then
        if not bMoveIn then
            self._goldLayer:setVisible(true)
        end
        self._goldLayer:showGoldLayer(not bMoveIn, isBackHall, will2ChooseRoom, withAni)
    end

    if XH.areaData:isRemodelArea() then
        self._imgTeaRemodel:setVisible(true)
    end
end

function LobbyView:showLobbyHeadSR(bShow)
    XH.playerData:flushPlayerDrop()
    self:setGoldNumberVisible2(bShow)
    self:setGoldNumberVisible(not bShow)
    self:setRoomCardNumberVisible(not bShow)
    self:setDiamondNumberVisible(not bShow)
    self:onUpdateSxvipStatus()
    self:updateSR()
end

function LobbyView:setGoldNumberVisible2(visible)
    self.KWA_GOLD_NUM_BG_2:setVisible(visible)
    self.KWA_LABEL_HEAD_GOLD_2:setVisible(visible)
end

function LobbyView:setGoldNumberVisible(visible)
    self.KWA_GOLD_NUM_BG:setVisible(visible)
    self.KWA_LABEL_HEAD_GOLD:setVisible(visible)
end

function LobbyView:setDiamondNumberVisible(visible)
    self.KWA_DIAMOND_BG:setVisible(visible)
    self.KWA_LABEL_HEAD_DIAMOND:setVisible(visible)
end

function LobbyView:setRoomCardNumberVisible(visible)
    self.KWA_ROOM_CARD_BG:setVisible(visible)
    self.KWA_LABEL_HEAD_ROOMCARD:setVisible(visible)
end

function LobbyView:onTeaHouseUpdateStart(event)
    local data = event.msg.data
    if self._imgTeaHouseUpdate then
        self._imgTeaHouseUpdate:setVisible(data.isStart)
    end
end

function LobbyView:onTeaHouseUpdateChanged(event)
    local data = event.msg.data
    if self._lbTeaHouseUpdate then
        self._lbTeaHouseUpdate:setPercent(data.percent)
    end
    if self._textTeaHouseUpdate then
        self._textTeaHouseUpdate:setString(string.format("加载中(%.0d%%)...", data.percent))
    end
end

function LobbyView:on_KWA_BTN_COPY(send,eventType)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_COPY_NUMBER)
    local strId = self.KWA_USER_ID:getString()
    local copyStr = strId
    local stringArr = string.split(strId,":")
    if stringArr and #stringArr == 2 then
        copyStr = stringArr[2]
    end
    XH.SysTool.copyString(copyStr)
    XH.TipTool.showToast("复制成功!")
end

function LobbyView:onCheckBindUser()
    if XH.playerData:isBindPhone() then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.BANG_DING_SHOU_JI, false)
    end
end

function LobbyView:onSRChanged()
    self:updateSR()
    self:showPhoneBindQiPao()
    self:showShopChargeTip()
end

function LobbyView:updateSR()
    local playerSR = XH.playerData:getStrSR()
    self.KWA_LABEL_HEAD_GOLD:setText(playerSR)
    self.KWA_LABEL_HEAD_GOLD_2:setText(playerSR)
end

function LobbyView:onEventChangeHeadFrame(event)
    if not event or not event.data then
        self._headFrameImg:setVisible(true)
        self._headFrameImgTemp:setVisible(false)
        return
    end
    self._headFrameImgTemp:removeChildByName(HEAD_FRAME_NAME)
    local size = self._headFrameImgTemp:getContentSize()
    if not ShowPropFunction.createHeadFrameAni(self._headFrameImgTemp,event.data.propid,0.6,HEAD_FRAME_NAME) then
        local headImgFrame = XH.RemoteImage.new()
        headImgFrame:ignoreContentAdaptWithSize(false)
        headImgFrame:addTo(self._headFrameImgTemp)
        headImgFrame:setPosition(size.width / 2 , size.height / 2 + 5)
        headImgFrame:setContentSize(size.width + 30, size.height + 30)
        headImgFrame:setUrl(event.data.url)
        headImgFrame:setName(HEAD_FRAME_NAME)
    end
    self._headFrameImg:setVisible(false)
    self._headFrameImgTemp:setVisible(true)
end

function LobbyView:onEventSetBagBtnText(event)
    if event.data then
        -- self:setMenuIconTipText(LobbyConfig.ICON_ID.BEI_BAO, event.data)
    end
end

-------------------------------金币场快捷入口--------------------------------

function LobbyView:onRefreshGoldUI()
    self:initGoldQuickList()
end

local gameView = nil
function LobbyView:initGoldQuickList()
    if not XH.ChannelTool.checkIsDoubleKouGame() and (XH.ChannelTool.checkIsCPSChannel() or XH.ChannelTool.checkIsWaishengChannel()) then
        self.KW_MINI_GAME_PANEL_CPS:removeAllChildren()
        gameView = require("lobby.Modules.Lobby.GameListView").new()
        gameView:addItemClickListener(self, self.onMenuBarItemClicked)
        self.KW_MINI_GAME_PANEL_CPS:addChild(gameView)
    else
        self.KW_MINI_GAME_PANEL:removeAllChildren()
        gameView = require("lobby.Modules.Lobby.GameListView").new()
        gameView:addItemClickListener(self, self.onMenuBarItemClicked)
        self.KW_MINI_GAME_PANEL:addChild(gameView)
    end
end

function LobbyView:initRightTopUI()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/lobby.plist")
    
    local param = {
        config = XH.configerManager:getLobbyMenuBarConfig(LobbyConfig.MENUBAR_ID.MAIN_TOP),
        size = cc.size(900, 162),
        adjustSize = cc.size(80, 0),
        bFixDis = true,
        fixDis = 150,
        tipType = LobbyConfig.ICON_TIP_TEXT_TYPE.TOP
    }

    if self._mainTopMenuBar then
        self._mainTopMenuBar:removeFromParent()
    end
    -- if not self._mainTopMenuBar then
        local topMenuBarRoot = self.KWA_TOP_MENU_BAR
        local topMenuBar = HorizontalMenuBar.new(param)
        topMenuBar:setAnchorPoint(cc.p(1, 1))
        topMenuBarRoot:addChild(topMenuBar)
        topMenuBar:addItemClickListener(self, self.onMenuBarItemClicked)
        self._mainTopMenuBar = topMenuBar
    -- end
    -- 推广活动刷新
    XH.lobby:getModule("Promote"):flushPromoteActIcon()
end

function LobbyView:initMainRightBottomUI()
    local param = {
        config = {},--XH.configerManager:getLobbyMenuBarConfig(LobbyConfig.MENUBAR_ID.MAIN_BOTTOM_RIGHT) or {},
        size = cc.size(display.width, 100),
        adjustSize = cc.size(60, -3),
        -- bg = "lobby_caidanlanxia_bg.png",
        bFull = false,
        line = "img_line.png",
        bAddForward = false,
        iconSize = cc.size(150, 100),
        tipType = LobbyConfig.ICON_TIP_TEXT_TYPE.BOTTOM
    }
 
    if not self._mainBottomRightMenuBar then
        local menuBar = HorizontalMenuBar.new(param)
        menuBar:setAnchorPoint(cc.p(0, 0))
        menuBar:setVisible(false)
        self.KWA_MENU_BAR:setPositionX(0)
        self.KWA_MENU_BAR:addChild(menuBar)
        menuBar:addItemClickListener(self, self.onMenuBarItemClicked)
        self._mainBottomRightMenuBar = menuBar
    end 
end

function LobbyView:initBottomLeftUI()
    local config = XH.configerManager:getLobbyMenuBarConfig(LobbyConfig.MENUBAR_ID.MAIN_BOTTOM_LEFT) or {}
    local cnt = #config
    local itemWidth = 160
    local gap = 10
    local param = {
        config = config,
        size = cc.size(2*gap + cnt * itemWidth, 95),
        adjustSize = cc.size(gap, 0), --左右预留宽度,改了需要同步size的大小
        iconSize = cc.size(itemWidth, 95),
        bFixDis = true,
        fixDis = itemWidth,
        bg = "hall/Image/lobbyNew/Img_dl.png",
        line = "hall/Image/lobbyNew/Img_fgx.png",

        tipType = LobbyConfig.ICON_TIP_TEXT_TYPE.BOTTOM,
        bAddForward = true
    }
    if not self._mainBottomLeftMenuBar then
        local HorizontalMenuBarEx = require("lobby.Modules.Lobby.MenuBar.HorizontalMenuBarEx")
        local menuBar = HorizontalMenuBarEx.new(param)
        menuBar:setAnchorPoint(cc.p(0, 0.5))
        self._bottomLeftMenuBarPos:addChild(menuBar)
        menuBar:addItemClickListener(self, self.onMenuBarItemClicked)
        self._mainBottomLeftMenuBar = menuBar
    end
end

function LobbyView:changeGoldSecondMenuVisible()
end

function LobbyView:initMainSecondMenu()
    if self._mainScondMenu then
        return
    end
    local menuBarRoot = self._mainBottomLeftMenuBar:getMenuByID(LobbyConfig.ICON_ID.GENG_DUO)
    if not menuBarRoot then
        return
    end
    
    local param = {
        config = XH.configerManager:getLobbyMenuBarConfig(LobbyConfig.MENUBAR_ID.MAIN_MORE) or {},
        size = cc.size(875, 150),
        adjustSize = cc.size(40, 10),
        bg = "hall/Image/lobbyNew/Img_tip_di.png",
        bSmallIconBar = true,
        bFull = true,
        iconSize = cc.size(60, 100),
        capInsets = cc.rect(9, 28, 5, 5),
    }
    if XH.areaData:getLobbyID() == XH.LOBBY_ID.WENZHOU then
        LobbyConfig.MenuIconConfig[LobbyConfig.ICON_ID.YAO_QING].IsDefaultHide = false
    else
        LobbyConfig.MenuIconConfig[LobbyConfig.ICON_ID.YAO_QING].IsDefaultHide = true
    end
    local menuBar = HorizontalMenuBar.new(param)
    -- 重置尺寸
    local menuIconCount = menuBar:getMenuIconCount()
    local defaultCount = #param.config - 1
    local width = (menuIconCount > 0 and menuIconCount or defaultCount)*140
    menuBar:setContentSize(cc.size(width, 150))

    local worldPos = self._mainBottomLeftMenuBar:convertToWorldSpace(cc.p(menuBarRoot:getPosition()))
    menuBar:setAnchorPoint(cc.p(0, 0))
    menuBar:setPosition(cc.p(worldPos.x - (width-65), worldPos.y + 59))
    menuBar:addItemClickListener(self, self.onMenuBarItemClicked)
    menuBar:setVisible(false)
    self:addChild(menuBar)
    self._mainScondMenu = menuBar
    self._mainScondMenu:updateIconsPosition()
end
 
function LobbyView:changeMainSecondMenuVisible()
    if not self._mainScondMenu then
        return
    end
    local isShow = self._mainScondMenu:isVisible()
    self._mainScondMenu:setVisible(not isShow)
end

function LobbyView:initRightUI()
    local param = {
        config = XH.configerManager:getLobbyMenuBarConfig(LobbyConfig.MENUBAR_ID.MAIN_RIGHT),
        size = cc.size(105, 700),
        bFixDis = true,
        fixDis = 150,
        tipType = LobbyConfig.ICON_TIP_TEXT_TYPE.RIGHT
    }
    if self._mainRightMenuBar then
        self._mainRightMenuBar:removeFromParent()
    end
    -- if not self._mainRightMenuBar then
        local menuBar = VerticalMenuBar.new(param)
        menuBar:setCascadeOpacityEnabled(true)
        menuBar:setAnchorPoint(cc.p(0.5, 1))
        self._rightMenuBarPos:addChild(menuBar)
        menuBar:addItemClickListener(self, self.onMenuBarItemClicked)
        self._mainRightMenuBar = menuBar
        self._mainRightMenuBar:updateIconsPosition()

    -- end
end

function LobbyView:initLeftUI()
    local param = {
        config = XH.configerManager:getLobbyMenuBarConfig(LobbyConfig.MENUBAR_ID.MAIN_LEFT) or {},
        size = cc.size(105, 700),
        bFixDis = true,
        fixDis = 150,
    }
    if not self._mainLeftMenuBar then
        local menuBar = VerticalMenuBar.new(param)
        menuBar:setAnchorPoint(cc.p(0.5, 1))
        self._leftMenuBarPos:addChild(menuBar)
        menuBar:addItemClickListener(self, self.onMenuBarItemClicked)
        self._mainLeftMenuBar = menuBar
    end
end

function LobbyView:getAllMenuBars()
    local bars = {}
    table.insert(bars, self._mainTopMenuBar)
    table.insert(bars, self._mainBottomRightMenuBar)
    table.insert(bars, self._mainBottomLeftMenuBar)
    table.insert(bars, self._mainRightMenuBar)
    table.insert(bars, self._mainLeftMenuBar)
    table.insert(bars, self._mainScondMenu)
    -- table.insert(bars, self._goldTopMenuBar)
    -- table.insert(bars, self._goldMenuBar)
    -- table.insert(bars, self._goldSecondMenu)
    -- table.insert(bars, self._goldBottomLeftMenuBar)
    return bars
end

function LobbyView:refreshMenuBarUI()
    self:initRightTopUI()
    self:initRightUI()
    self:initBottomLeftUI()
    self:initMainSecondMenu()
    for id, v in pairs(self._iconShows) do
        if v == true then
            self:setMenuIconVisible(id, true)
        end
    end
end

function LobbyView:getMenuBarByID(menuBarID)
    -- 目前MAIN_BOTTOM_RIGHT和MAIN_LEFT暂时无用
    if menuBarID == LobbyConfig.MENUBAR_ID.MAIN_TOP then
        return self._mainTopMenuBar
    elseif menuBarID == LobbyConfig.MENUBAR_ID.MAIN_BOTTOM_RIGHT then
        return self._mainBottomRightMenuBar
    elseif menuBarID == LobbyConfig.MENUBAR_ID.MAIN_BOTTOM_LEFT then
        return self._mainBottomLeftMenuBar
    elseif menuBarID == LobbyConfig.MENUBAR_ID.MAIN_RIGHT then
        return self._mainRightMenuBar
    elseif menuBarID == LobbyConfig.MENUBAR_ID.MAIN_LEFT then
        return self._mainLeftMenuBar
    elseif menuBarID == LobbyConfig.MENUBAR_ID.MAIN_MORE then
        return self._mainScondMenu
    end
end

function LobbyView:setMenuIconVisible(iconID, bShow)
    self._iconShows = self._iconShows or {}
    self._iconShows[iconID] = bShow
    local iconConfig = XH.configerManager:getLobbyMenuConfigByIconID(iconID)

    -- 找到当前所有iconID等于当前iconID的配置项
    for _,curConfig in pairs(iconConfig) do
        -- 获取当前icon的menubar
        local menuBarID = curConfig.MenuBarID
        local menuBar = self:getMenuBarByID(curConfig.MenuBarID)
        -- 获取当前iconID位置下最高优先级并且显示的icon
        local function getMaxShowIconConfig(curConfig, bShow)
            local maxPriority = 0
            local maxIconConfig
            local allShowIcons = {}
            if bShow then
                maxIconConfig = curConfig
            end
            for id,v in pairs(self._iconShows) do
                if v == true then
                    local tmpConfig = XH.configerManager:getOnlyConfigByID(id, curConfig.MenuBarID)
                    if tmpConfig and tmpConfig.index and tmpConfig.index == curConfig.index and tmpConfig.priority > maxPriority then
                        maxPriority = tmpConfig.priority
                        maxIconConfig = tmpConfig
                    end
                end
            end
            return maxIconConfig
        end
        if menuBar then
            -- 如果没有多个按钮占用这个位置，直接处理
            if not curConfig.index then
                if bShow then
                    menuBar:recoveryMenu(iconID)
                    -- 首胜福袋需要特殊处理下显示
                    if iconID == LobbyConfig.ICON_ID.LUCKY_BAG then
                        self:updateLuckyBagIcon()
                    end
                else
                    menuBar:removeMenuByID(iconID)
                end
            else
                local maxIconConfig = getMaxShowIconConfig(curConfig, bShow)
                if not maxIconConfig then
                    menuBar:removeMenuByID(iconID)
                else
                    local config = XH.configerManager:getLobbyMenuBarConfig(menuBarID)
                    for _, v in pairs(config) do
                        -- 根据iconID和menuBarID获取唯一的配置项 self._iconShows
                        if v.index and maxIconConfig.index and v.index == maxIconConfig.index then
                            if v.IconID ~= maxIconConfig.IconID then
                                menuBar:removeMenuByID(v.IconID)
                            end
                        end
                    end
                    menuBar:recoveryMenu(maxIconConfig.IconID)
                    -- 首胜福袋需要特殊处理下显示
                    if maxIconConfig.IconID == LobbyConfig.ICON_ID.LUCKY_BAG then
                        self:updateLuckyBagIcon()
                    end
                end
            end
        end
    end
end

function LobbyView:setMenuIconRedPointVisible(iconID, bShow)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        menuBar:setRedPointVisible(iconID, bShow)
    end
end

function LobbyView:setMenuIconTipNewsVisible(iconID, bShow, ...)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        menuBar:setTipNewsVisible(iconID, bShow, ...)
    end
end

function LobbyView:setMenuIconTipNewAwardVisible(iconID, bShow)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        menuBar:setTipNewAwardVisible(iconID, bShow)
    end
end

function LobbyView:setMenuIconExtendAnimVisible(iconID, bShow)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        menuBar:setExtendAnimVisible(iconID, bShow)
    end
end

function LobbyView:setMenuIconTipText(iconID, tipText, tipDelay)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        menuBar:setIconTipText(iconID, tipText, tipDelay)
    end
end

function LobbyView:removeMenuIconTipText(iconID)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        menuBar:removeTipText(iconID)
    end
end

function LobbyView:setTipTextImgVisible(iconID, bShow)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        menuBar:setTipTextImgVisible(iconID, bShow)
    end
end

function LobbyView:onMenuBarItemClicked(event)
    local send = event.send
    local eventType = event.eventType
    local bind = event.bind
    local touchID = tonumber(send:getName())
    local dealFuncTab = {
        [LobbyConfig.ICON_ID.SHANG_CHENG] = function() bind:on_KWA_BTND_SHOP(send, eventType) end,
        [LobbyConfig.ICON_ID.HUO_DONG] = function() bind:on_KWA_BTND_EVENT(send, eventType) end,
        [LobbyConfig.ICON_ID.GUI_ZE] = function() bind:on_KWA_BTND_HELP(send, eventType) end,
        [LobbyConfig.ICON_ID.GONG_GAO] = function() bind:on_KWA_BTND_POST(send, eventType) end,
        [LobbyConfig.ICON_ID.ZHAN_JI] = function() bind:on_KWA_BTND_RESULT(send, eventType) end,
        [LobbyConfig.ICON_ID.SHE_ZHI] = function() bind:on_KWA_BTND_SETTING(send, eventType) end,
        [LobbyConfig.ICON_ID.GENG_DUO] = function() bind:on_KWA_BTND_MORE(send, eventType) end,
        [LobbyConfig.ICON_ID.YAO_QING] = function() bind:on_KWA_BTND_INVATE(send, eventType) end,
        [LobbyConfig.ICON_ID.JIAN_KANG_XU_ZHI] = function() bind:on_KWA_BTND_HEALTH_NOTE(send, eventType) end,
        [LobbyConfig.ICON_ID.FANG_DB] = function() bind:on_KWA_BTND_ANTI_JAMBEL(send, eventType) end,
        [LobbyConfig.ICON_ID.BANG_DING_SHOU_JI] = function() bind:on_KWA_BTND_BIND_PHONE(send, eventType) end,
        [LobbyConfig.ICON_ID.DUI_HUAN] = function() bind:on_KWA_BTND_LIQUAN(send, eventType) end,
        [LobbyConfig.ICON_ID.FEN_XAING] = function() bind:on_KWA_BTND_SHARE(send, eventType) end,
        [LobbyConfig.ICON_ID.YOU_JIAN] = function() bind:on_KWA_BTND_MAIL(send, eventType) end,
        [LobbyConfig.ICON_ID.KE_FU] = function() bind:on_KWA_BTND_SERVICE(send, eventType) end,
        [LobbyConfig.ICON_ID.BEI_BAO] = function() bind:on_KWA_BTND_BAG(send, eventType) end,
        [LobbyConfig.ICON_ID.ZHE_JIANG_XIN_WEN] = function() bind:onTouchEventZheJiangNews(send, eventType) end,
        [LobbyConfig.ICON_ID.TE_HUI_SHANG_CHENG] = function() bind:onTouchEventTeHuiShangCheng(send, eventType) end,
        [LobbyConfig.ICON_ID.HUI_GUI_LI_BAO] = function() bind:onTouchEventBackAct(send, eventType) end,
        [LobbyConfig.ICON_ID.MEI_RI_CHOU_JIANG] = function() bind:onTouchEventDailyLuckyAct(send, eventType) end,
        [LobbyConfig.ICON_ID.XIAN_SHI_YOU_HUI] = function() bind:onTouchEventBreakGift(send, eventType) end, 
        [LobbyConfig.ICON_ID.ZHE_KOU_LI_BAO] = function() bind:onTouchEventShowDiscountLayer(send, eventType) end, 
        [LobbyConfig.ICON_ID.QIAN_PAO_BU_YU] = function() bind:onTouchEventH5BuYu(send, eventType) end,
        [LobbyConfig.ICON_ID.JUE_ZHAN_SHA_YI] = function() bind:onTouchEventH5Legend(send, eventType) end, 
        [LobbyConfig.ICON_ID.YI_DAO_CHUAN_SHI] = function() bind:onTouchEventH5Knifelegend(send, eventType) end,
        [LobbyConfig.ICON_ID.SHARE_HMQ_ACT]  = function () bind:onTouchEventShareHmqAct(send, eventType) end,
        [LobbyConfig.ICON_ID.LUCKY_TURN_TABLE]  = function () bind:onTouchEventLuckTurnTableAct(send, eventType) end,
        [LobbyConfig.ICON_ID.NEW_VIP]  = function () bind:onTouchEventVip(send, eventType) end,
        [LobbyConfig.ICON_ID.TOPON_PH_FEE] = function() bind:onTouchEventShowToponActPhFee(send, eventType) end,
        [LobbyConfig.ICON_ID.PRAY_ACT] = function() bind:onTouchEventPrayAct(send, eventType) end,
        [LobbyConfig.ICON_ID.BU_YU_DA_JIANG_SAI] = function () bind:onTouchEventH5BuYuDaJiangSai(send,eventType) end,
        [LobbyConfig.ICON_ID.DA_TIAN_SHI_ZHI_JIAN] = function () bind:onTouchEventH5DaTianShiZhiJian(send,eventType) end,
        [LobbyConfig.ICON_ID.LING_MENG_ZHI_BO] = function() bind:onTouchEventH5LingMeng(send, eventType) end,
        [LobbyConfig.ICON_ID.RE_XUE_FENG_SHEN] = function () bind:onTouchEventH5ReXue(send,eventType) end,
        [LobbyConfig.ICON_ID.DOU_LUO_DA_LU] = function() bind:onTouchEventH5DouLuo(send, eventType) end,
        [LobbyConfig.ICON_ID.JIE_JI_SAN_GUO] = function() bind:onTouchEventH5SanGuo(send, eventType) end,
        [LobbyConfig.ICON_ID.REN_REN_BU_YU] = function() bind:onTouchEventUnityRRBUYU(send, eventType) end,
        [LobbyConfig.ICON_ID.REN_REN_BU_YU_1] = function() bind:onTouchEventUnityRRBUYU(send, eventType) end,
        [LobbyConfig.ICON_ID.REN_REN_BU_YU_2] = function() bind:onTouchEventUnityRRBUYU(send, eventType) end,
        [LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI] = function() bind:onTouchEventLianYun(send, eventType) end,
        [LobbyConfig.ICON_ID.LIANYUN_CARD13] = function() bind:onTouchEventLianYun(send, eventType) end,
        [LobbyConfig.ICON_ID.LIANYUN_APGDY] = function() bind:onTouchEventLianYun(send, eventType) end,
        [LobbyConfig.ICON_ID.SHEI_SHI_SHOU_FU] = function() bind:onTouchEventH5SheiShiShouFu(send, eventType) end,
        [LobbyConfig.ICON_ID.PROMOTE_ACT] = function() bind:onTouchEventShowPromote(send, eventType) end,
        [LobbyConfig.ICON_ID.WX_PUBLIC] = function() bind:onTouchEventWxPublic(send, eventType) end,
        [LobbyConfig.ICON_ID.LUCKY_TASK] = function() bind:onTouchEventShowLuckyTask(send, eventType) end,
        [LobbyConfig.ICON_ID.SIGN_IN] = function() bind:onTouchEventTabSignInAct(send, eventType) end,
        [LobbyConfig.ICON_ID.APP_UPDATE_TIP] = function() bind:onTouchEventAppUpdateTip(send, eventType) end,
        [LobbyConfig.ICON_ID.GOLDNEW_LZDDZ] = function() bind:onTouchEventGoldNewView(send, eventType) end,
        [LobbyConfig.ICON_ID.GOLDNEW_LZDDZ_CENTER] = function() bind:onTouchEventGoldNewView(send, eventType) end,
        [LobbyConfig.ICON_ID.JINLONGJIANGLIN] = function() bind:onTouchEventJinLong(send, eventType) end,
        [LobbyConfig.ICON_ID.WEIJINGCHUANQI] = function() bind:onTouchEventH5WeiJingChuangQi(send, eventType) end,
        [LobbyConfig.ICON_ID.ZHUOYUECHUANSHUO] = function() bind:onTouchEventH5ZYCS(send, eventType) end,
        [LobbyConfig.ICON_ID.YUANZHENGJIANGSHI] = function() bind:onTouchEventH5YZJS(send, eventType) end,
        [LobbyConfig.ICON_ID.RONGYAOZHINU] = function() bind:onTouchEventH5RYZN(send, eventType) end,
        [LobbyConfig.ICON_ID.BAIZHANSHACHENG] = function() bind:onTouchEventH5BZSC(send, eventType) end,
        [LobbyConfig.ICON_ID.GOLD_NEW_BANKRUPT] = function() bind:onTouchEventGoldBankrupt(send, eventType) end,
        [LobbyConfig.ICON_ID.GOLD_NEW_DEFEAT] = function() bind:onTouchEventDefeat(send, eventType) end,
        [LobbyConfig.ICON_ID.HUANXIANGMINGJIANGLU] = function() bind:onTouchEventH5HXMJL(send, eventType) end,
        [LobbyConfig.ICON_ID.SHENYUANQIYUE] = function() bind:onTouchEventH5SYQY(send, eventType) end,
        [LobbyConfig.ICON_ID.FUMOZHANGE] = function() bind:onTouchEventH5FMZG(send, eventType) end,
        [LobbyConfig.ICON_ID.SCORE_ASSISTANT] = function() bind:onTouchEventScoreAssistant(send, eventType) end,
        [LobbyConfig.ICON_ID.ACT_TIME_LOGIN] = function() bind:onTouchEventTimeLoginAct(send, eventType) end,
        [LobbyConfig.ICON_ID.BIND_PHONE] = function() bind:onTouchEventBindPhone(send, eventType) end,
        [LobbyConfig.ICON_ID.BATTLE_PASS] = function() bind:onTouchEventBattlePass(send, eventType) end,
        [LobbyConfig.ICON_ID.XIA_GUANG] = function() bind:onTouchEventXiaGuang(send, eventType) end,
        [LobbyConfig.ICON_ID.DIAN_FENG_SAI] = function() bind:openDfsView(send, eventType) end,
        [LobbyConfig.ICON_ID.NEWYEAR_2026] = function() bind:onTouchEventNewYear2026Act(send, eventType) end,
        [LobbyConfig.ICON_ID.DOUBLE12] = function() bind:onTouchEventDouble12Act(send, eventType) end,
        [LobbyConfig.ICON_ID.INVITE_ACT] = function() bind:onTouchEventInviteAct(send, eventType) end,
        [LobbyConfig.ICON_ID.LUCKY_TURN_TABLE_ACT] = function() bind:onTouchEventLuckyTurnTableActView(send, eventType) end,
        [LobbyConfig.ICON_ID.RECALL_NEW] = function() bind:onTouchEventRecallNew(send, eventType) end,
        [LobbyConfig.ICON_ID.ZHUANG_BAN] = function() bind:onTouchEventZhuangBan(send, eventType) end,
        [LobbyConfig.ICON_ID.LUCKY_MISSION] = function() bind:onTouchEventLuckyMission(send, eventType) end,
        [LobbyConfig.ICON_ID.FRIEND_TEA] = function() bind:onTouchEventFriendTea(send, eventType) end,
        [LobbyConfig.ICON_ID.COIN_REWARD] = function() bind:onTouchEventCoinRewards(send, eventType) end,
    }

    local func = dealFuncTab[touchID]
    if func then 
        func()
    end
end

function LobbyView:onTouchEventAppUpdateTip(send,eventType)
    self:showUpdateTip()
end

function LobbyView:onTouchEventWxPublic(send, eventType)
    local WXPublicConfig = require("lobby.Modules.WXPublic.Config")
    if not WXPublicConfig.PublicConfig[XH.areaData:getLobbyID()] then
        XH.TipTool.showToast("请联系客服")
        return 
    end
    XH.viewManager:openView("WXPublicView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.WX_PUBLIC_CLICK_LOBBY_ICON)
end

function LobbyView:onOpenView(event)
    if event and XH.viewManager:isFullScreenView(event.viewName) then
        self:setVisible(false)
    end
end

function LobbyView:onCloseView(event)
    if event and XH.viewManager:isFullScreenView(event.viewName) then
        self:setVisible(true)
    end
end

function LobbyView:on_KWA_BTND_SHOP(send,eventType)
    -- local productType 
    -- local paramData = {}
    -- -- productType = ShopConfig.SpecialTag.GOLD
    -- -- paramData.productType = productType
    -- if self._shopCardLight then
    --     paramData.showCardChargeTip = true 
    -- end
    -- if self._shopGoldLight then
    --     paramData.showGoldChargeTip = true 
    -- end
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby"})
    --点击商城后隐藏充值提示
    self:hideShopIconChargeTip()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BOTTOM_SHOP,{Source = self._curLobbyType})
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080866, {page = "大厅"})
end

function LobbyView:on_KWA_BTND_EVENT(send,eventType)
    -- if XH.lobby:getModule("TabsActivity"):getCanGetFanZhaAward() then
        -- XH.viewManager:openView("TabsActivityView", nil, { tab = "FANZHA"})
    -- else
    XH.viewManager:openView("TabsActivityView")
    -- end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BOTTOM_ACTIVITY,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_HELP(send,eventType)
    XH.viewManager:openView("RuleView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_MORE_RULE,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_POST(send,eventType)
    XH.viewManager:openView("TabsActivityView", nil, {firstTab = 0})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_MORE_ANNOUNCE,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_RESULT(send,eventType)
    XH.viewManager:openView("PlayerBillView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BOTTOM_BILL)
end

function LobbyView:on_KWA_BTND_SETTING(send,eventType)
    XH.viewManager:openView("SetView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_MORE_SETTING,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_MORE(send, eventType)
    if self._curLobbyType ==  XH.LOBBY_TYPE.YUEJU then
        self:changeMainSecondMenuVisible()
    elseif self._curLobbyType ==  XH.LOBBY_TYPE.XIUXIAN then
        self:changeGoldSecondMenuVisible()
    end
    cc.UserDefault:getInstance():setBoolForKey("KW_FIRST_CLICK_GENGDUO", false)
    self:setTipTextImgVisible(LobbyConfig.ICON_ID.GENG_DUO, false)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BOX_MOER,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_INVATE(send,eventType)
    -- 隐藏邀请码红点
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_TOUCH_INVATE, os.time())
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.YAO_QING,false)
    XH.viewManager:openView("InvateView")
end

function LobbyView:on_KWA_BTND_HEALTH_NOTE(send,eventType)    
    XH.viewManager:openView("HealthView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_MORE_HEALTH,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_ANTI_JAMBEL(send,eventType)
    XH.viewManager:openView("AniGambleView")
end

function LobbyView:on_KWA_BTND_BIND_PHONE(send,eventType)
    XH.viewManager:openView("PhoneBindView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_PHONE_BIND,{Source = self._curLobbyType})
end

function LobbyView:on_KWA_BTND_LIQUAN(send,eventType)
end

function LobbyView:on_KWA_BTND_SHARE(send,eventType)
    -- 设置分享场景，子场景
    XH.lobby:getModule("Share"):setShareScene("大厅","分享朋友")
    local shareInfo = XH.lobby:getModule("Share"):getShareInfo()
    if shareInfo == nil or shareInfo.award == nil or #shareInfo.award == 0 then
        XH.lobby:getModule("Lobby"):onTouchShareLobby()
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_LOBBY_SHARE_CLICK, nil, {share_type = 0, area_id = XH.areaData:getAreaID()})
    else
        XH.viewManager:openView("LobbyShareView")
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_LOBBY_SHARE_CLICK, nil, {share_type = 1, area_id = XH.areaData:getAreaID()})
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BOTTOM_SHARE)
end

function LobbyView:on_KWA_BTND_MAIL(send,eventType)
    XH.viewManager:openView("GoldHallMailView")
end

-- 客服系统点击事件(numid, nickname, avatar)
function LobbyView:on_KWA_BTND_SERVICE(send, eventType)
    XH.lobby:getModule("CusService"):oponCusServerView(nil,"GAMELOBBY")
    self:hideKeFuTips()
    XH.lobby:getModule("CrmNotice"):clearCrmNotice()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_CUSTOMER_SERVICE)
end

function LobbyView:on_KWA_BTND_BAG(send,eventType)
    XH.viewManager:openView("GoldHallBagView", nil, {openType = "Lobby"})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BOTTOM_BAG)
    self:setTipTextImgVisible(LobbyConfig.ICON_ID.BEI_BAO, false)
end

-- 浙江新闻点击事件
function LobbyView:onTouchEventZheJiangNews(send, eventType)
    XH.viewManager:openView("ZheJiangNewsView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.ZJ_NEWS_BTN)
end

function LobbyView:onTouchEventBackAct(send, eventType)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "BACKGIFT"})
    self:refreshIcon(send, LobbyConfig.ICON_ID.HUI_GUI_LI_BAO)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.BACK_ACT_LOBBY_ICON)
end

function LobbyView:onTouchEventDailyLuckyAct(send, eventType)
    XH.viewManager:openView("DailyLuckDrawMainView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_DAILY_LUCKY_DRAW,{Source = self._curLobbyType})
end

function LobbyView:onTouchEventBreakGift(send, eventType)
    if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
    if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
    XH.viewManager:openView("GiftBagView")
end

function LobbyView:onTouchEventH5Legend(send, eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ZHUBO_CLICK,{label = "决战沙邑",item_id = "决战沙邑"})
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.LEGEND)
end

function LobbyView:onTouchEventH5BuYu(send, eventType) 
    if self._curLobbyType == XH.LOBBY_TYPE.XIUXIAN then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.BUYUWANG_GOLD)
    else
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHOUFU_CLICK,{label = "捕鱼王"})
    end
    XH.viewManager:openView("FishingKingTransferView")
end


function LobbyView:onTouchEventH5ReXue(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.REXUEFENGSHEN)
end

function LobbyView:onTouchEventH5DouLuo(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.DOULUODALU)
end

function LobbyView:onTouchEventH5SanGuo(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.JIEJISANGUO)
end

function LobbyView:onTouchEventH5SheiShiShouFu(send, eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHOUFU_CLICK)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.SHEISHISHOUFU)
end

function LobbyView:onTouchEventH5BuYuDaJiangSai(send,eventType)
    local tmpData = {}
    tmpData.userid = XH.playerData:getNumberID()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.H5Game_buyudajiangsai, tmpData)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.BUYUDAJIANGSAI)
end

function LobbyView:onTouchEventH5DaTianShiZhiJian(send,eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.DATIANSHIZHIJIAN)
end

function LobbyView:onTouchEventH5Knifelegend(send, eventType)
    --点击合集大厅(原一刀传世) 开启H5Room 
    -- self:startH5Room()
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.KNIFELEGEND)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_ICON_YIDAOCHUANSHI_CLICK)
end

function LobbyView:onTouchEventH5LingMeng(send, eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ZHUBO_CLICK)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.LINGMENGZHIBO)
end

function LobbyView:onTouchEventUnityRRBUYU(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = {
        block_label = "人人捕鱼"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lianyun2024021801, data)
    if not XH.lobby:getModule("RRBuYu"):isSupportRRBY() then
        return
    end
    send:setTouchEnabled(false)
    self:performWithDelay(function()
        if send and not tolua.isnull(send) then
            send:setTouchEnabled(true)
        end
    end, 4)
    if XH.UITool.isVisible(send,"KW_NODE_PROGRESS") or XH.lobby:getModule("RRBuYu"):isDownloading() then 
        return
    end
    self:startUnityGame(XH.lobby:getModule("Lobby").H5GameNameList.RENRENBUYU)
end

function LobbyView:onTouchEventLianYun(send,eventType)
    local touchID = tonumber(send:getName())
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local gameID = 0
    if touchID == LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI then
        gameID = LobbyConfig.QXBP_GAMEID
    elseif touchID == LobbyConfig.ICON_ID.LIANYUN_CARD13 then
        gameID = LobbyConfig.CARD13_GAMEID
    elseif touchID == LobbyConfig.ICON_ID.LIANYUN_APGDY then
        gameID = LobbyConfig.GAME_ID_APGDY
    end
    send:setTouchEnabled(false)
    self:performWithDelay(function()
        if send and not tolua.isnull(send) then
            send:setTouchEnabled(true)
        end
    end, 4)
    local skip = device.platform == "android"
    if not skip then
        if XH.UITool.isVisible(send,"KW_NODE_PROGRESS") or XH.lobby:getModule("LianYun"):isDownloading() then 
            XH.TipTool.showToast("正在下载中...")
            return
        end
    end
    XH.lobby:getModule("LianYun"):enter({gameID = gameID, checkPosition = true})
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lygx032501, { 
        hostid = XH.lobby:getModule("LianYun"):getHostId(), 
        host_areaid = XH.areaData:getAreaID(),
        block_label = "包厢大厅icon"
    })
end

-- 3折礼包
function LobbyView:onTouchEventShowDiscountLayer(send, eventType)
    XH.viewManager:openView("SaleGiftbagView", nil, self._discountData)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BOTTOM_DISCOUNTGIFT)
end

function LobbyView:onEventShowDiscountGift(event)
    self:setMenuIconVisible(LobbyConfig.ICON_ID.ZHE_KOU_LI_BAO, false)
end

function LobbyView:onShowDiscountLayer(data)
    if data and data.msg then
        self._discountData = data.msg
        if data.msg.showIcon then
            self:initDiscountAni(data.msg.showLayer)
        else
            self:setMenuIconVisible(LobbyConfig.ICON_ID.ZHE_KOU_LI_BAO, false)
        end
    end
end

function LobbyView:showLeftTime()
    if not self._discountData or not self._discountData.leftTime or self._discountData.leftTime < 0 then
        return
    end
    local leftTimeText = XH.UITool.seekNodeByName(self._discountBtnBG, "_KW_DISCOUNT_GIFT_LEFT_TIME")
    if not leftTimeText then
        return
    end
    local day = math.floor(self._discountData.leftTime / 60 / 60 / 24)
    local hour = math.floor(self._discountData.leftTime / 60 / 60) % 24
    local min = math.floor(self._discountData.leftTime / 60) % 60
    local sec = self._discountData.leftTime % 60
    local str = string.format("%d天%d时", day, hour)
    if day == 0 then
        str = string.format("%d时%d分", hour, min)
        if hour == 0 then
            str = string.format("%d分%d秒", min, sec)
        end
    end
    leftTimeText:setString(str)
    leftTimeText:stopAllActions()
    leftTimeText:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(
        function()
            self._discountData.leftTime = self._discountData.leftTime - 1
            self:showLeftTime()
        end
    )))
end

------------------------------破产礼包------------------------------

function LobbyView:onBreakGiftBagShow(event)
    self:setMenuIconVisible(LobbyConfig.ICON_ID.XIAN_SHI_YOU_HUI, false)
end

function LobbyView:showBreakGift()
    --休闲大厅返回到游戏时
    local breakGiftInfo = XH.taskManager:getBreakGiftInfo()
    if not breakGiftInfo then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.XIAN_SHI_YOU_HUI, false)
        return
    end
    self:setMenuIconVisible(LobbyConfig.ICON_ID.XIAN_SHI_YOU_HUI, breakGiftInfo.isShowBtn)
end

function LobbyView:onBreakGiftBagEvent(event)
    self:showBreakGift()
end

function LobbyView:initDiscountAni(bShowLayer)
    self:setMenuIconVisible(LobbyConfig.ICON_ID.ZHE_KOU_LI_BAO, true)
    if bShowLayer then
        XH.viewManager:openView("SaleGiftbagView", nil, self._discountData)
    end
end

----------------------------H5ROOM游戏------------------------------
function LobbyView:startH5Room()
    XH.lobby:getModule("Lobby"):startH5Room()
end 
 
----------------------------UNITY游戏------------------------------
function LobbyView:startUnityGame(gameName)
    if gameName == XH.lobby:getModule("Lobby").H5GameNameList.RENRENBUYU then
        XH.TipTool.showLoading(5)
        if device.platform == "android" then
            XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
            XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
        elseif device.platform == "ios" then
            XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
        end
        XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.RENRENBUYU_1)
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.RENRENBUYU_1)
    end
end

----------------------------手机绑定------------------------------
function LobbyView:onBindPhone()
    local isShow = XH.lobby:getModule("BindPhone"):isShowBindPhoneIcon()
    if isShow then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sjbd24122601)
    end
    self:setMenuIconVisible(LobbyConfig.ICON_ID.BIND_PHONE, isShow)
end
------------------------------------------------------------------------


function LobbyView:h5StartGameLoginCallback(cell, type, data)
    -- 回恢复音效
    local musicPercent = XH.lobby:getModule("Set"):getMusicPercent()
    local soundPercent = XH.lobby:getModule("Set"):getSoundPercent()
    XH.audioManager:SetMusicVolume(musicPercent / 100.0)
    XH.audioManager:SetSFXVolume(soundPercent / 100.0)
end

function LobbyView:on_KWA_BTND_ADD_ROOM_CARD(send,eventType)
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.CARD})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_ADD_CARD_BTN)
end

function LobbyView:on_KWA_BTND_ADD_DIAMOND(send,eventType)
    cc.UserDefault:getInstance():setIntegerForKey("NEWGOLDHALL_ZSTIP_LASTSHOWTIME", os.time())
    self:onRefreshNewGoodsList()
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.DIAMOND})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_ADD_DIAMOND_BTN)
end

function LobbyView:onShowDetailGoldLayer(event)
    local isNewGoldHall = XH.lobby:getModule("Lobby"):isNewGoldHall()
    if isNewGoldHall then
        local confID = event.confID
        local roomConf = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(confID)
        local roomFlag = roomConf.roomInfo.roomFlag
        if roomFlag and #roomFlag > 1 then
            self:showXIUXIANLobby(nil, nil, true)
            XH.lobby:getModule("GoldNew"):dispatchShowChooseRoom(roomConf, true, event.ext)
            return
        end
        if roomFlag and #roomFlag > 0 then
            XH.lobby:getModule("Gold"):reqJoinGoldRoom(confID, roomFlag[1])
        end
    else
        local moduleName = "lobby.Modules.Gold.LevelView" .. (event.goldUIStype or "")
        local success, levelLayerModule = pcall(require, moduleName)
        if not success then
            -- 如果加载失败，则使用默认模块
            levelLayerModule = require("lobby.Modules.Gold.LevelView")
        end
        local levelLayer = levelLayerModule.new(event.confID, event.gameID, event.goldUIStype);
        self:addChild(levelLayer)
    end
end

function LobbyView:onTouchEventShareHmqAct(send, eventType)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.USERDEFAULT_ACTIVITY_TYPE, XH.lobby:getModule("TabsActivity").ActivityType.ActivityShareHmq)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "SHAREFORCARD"})
    self:refreshIcon(send, LobbyConfig.ICON_ID.SHARE_HMQ_ACT)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_SHARE_AWARD_CARD)
end

function LobbyView:onTouchEventLuckTurnTableAct(send, eventType)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "LUCKYTURNTABLE"})
    self:refreshIcon(send, LobbyConfig.ICON_ID.LUCKY_TURN_TABLE)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_UESR_LUCKY_TURN_TABLE_ACT)
end

function LobbyView:onTouchEventVip(send, eventType)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "VIPGIFT"})
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.VIP_WELFARE_BTN,{Source = self._curLobbyType})
end

function LobbyView:PlayAnimation(node,path,armatureName,animationPlayParam)
    if node and node:getChildrenCount() == 0 then
        if not cc.FileUtils:getInstance():isFileExist(path) then
            return
        end
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(path)
        local aniNode = ccs.Armature:create(armatureName)
        node:addChild(aniNode)
        aniNode:getAnimation():play(animationPlayParam, -1, 1)
    end
end

function LobbyView:initVipAni(isVip)
    if not XH.areaData:isSupportVip() then
        return
    end
    local menuItem = self.KWA_HEAD_PANEL:getChildByName("vipAniMenu")
    if not menuItem then
        menuItem = ccui.Layout:create()
        menuItem:setCascadeOpacityEnabled(true)
        menuItem:setAnchorPoint(0.5, 0.5)
        local size = cc.size(49, 51)
        menuItem:setContentSize(size)
        menuItem:setPosition(cc.p(104, 99))
        menuItem:setTouchEnabled(true)
        menuItem:addTouchEventListener(handler(self, self.onTouchEventVip))
        menuItem:setName("vipAniMenu")
        self.KWA_HEAD_PANEL:addChild(menuItem)
        if cc.FileUtils:getInstance():isFileExist("animation/Lobby/Base/vip-icon/vip-icon.ExportJson") then
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo("animation/Lobby/Base/vip-icon/vip-icon.ExportJson")
            local shopAni = ccs.Armature:create("vip-icon")
            menuItem:addChild(shopAni)
            shopAni:setAnchorPoint(cc.p(0.5, 0.5))
            shopAni:setPosition(cc.p(size.width/2, size.height/2))
            shopAni:getAnimation():play("Animation1", -1, 1)
            shopAni:setName("vipAni")
        end

        local shopAni = menuItem:getChildByName("vipAni")
        if shopAni then
            local shaderCmd
            if isVip then 
                shaderCmd = "ShaderPositionTextureColor_noMVP"
            else 
                shaderCmd = "ShaderUIGrayScale"
            end
            local glProgram = cc.GLProgramCache:getInstance():getGLProgram(shaderCmd)
            if glProgram then
                local bones = shopAni:getBoneDic()
                for _,v in pairs(bones) do
                    local renderNode = v:getDisplayManager():getDisplayRenderNode()
                    if renderNode then
                        renderNode:setGLProgram(glProgram)
                    end
                end
            end
        end
    end
end

-- 对低版本隐藏相关抽奖ICON
function LobbyView:showDailyLuckyDrawIcon()
    if device.platform == "android" and XH.SysTool:GetBundleVersion() <= "1.0.1" then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.MEI_RI_CHOU_JIANG, false)
    elseif XH.ChannelTool.checkIsECarChannel() then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.MEI_RI_CHOU_JIANG, false)
    elseif XH.playerData:isRechargePlayer() then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.MEI_RI_CHOU_JIANG, false)
    else
        self:setMenuIconVisible(LobbyConfig.ICON_ID.MEI_RI_CHOU_JIANG, true)
    end
end

-- 防止安卓资源被释放
function LobbyView:retainPlists()
    if cc.Application:getInstance():getTargetPlatform() ~= cc.PLATFORM_OS_ANDROID then
        return
    end
    local filePlists = {
        "res/cocosStudio/hall/Image/img_login.plist",
        "res/cocosStudio/Common/Image/HallWithTea/common_htg.plist",
		"res/cocosStudio/hall/Image/goldLayer/goldLayer.plist",
		"res/cocosStudio/hall/Image/goldLayer/goldLayer2.plist",
		"res/cocosStudio/hall/Image/goldLayer/gold_title.plist",
    }
    for i = 1, #filePlists do
        local getTables = cc.FileUtils:getInstance():getValueMapFromFile(filePlists[i])
        if getTables and getTables.frames then
            for pngName, _ in pairs(getTables.frames) do
                local spriteFrame = cc.SpriteFrameCache:getInstance():getSpriteFrameByName(pngName)
                if spriteFrame then
                    local getPngKeys = spriteFrame:getReferenceCount()
                    if getPngKeys and getPngKeys == 1 then
                        spriteFrame:retain()
                    end
                end
            end
        end
    end
end

function LobbyView:onTipButtonClicked(event)
    local send = event.send
    local eventType = event.eventType
    local bind = event.bind
    local touchParent = send:getParent() and send:getParent():getParent()
    local touchID = nil
    if touchParent then
        touchID = tonumber(touchParent:getName())
    end
    local dealFuncTab = {
        [LobbyConfig.ICON_ID.KE_FU] = function() bind:on_KWA_BTND_SERVICE_TIP(send, eventType) end,
    }
    local func = dealFuncTab[touchID]
    if func then
        func()
    end
end

function LobbyView:on_KWA_BTND_SERVICE_TIP(send, eventType)
    self:hideKeFuTips()
end

function LobbyView:initTipImageButtonCallBack()
    for _, menuBar in pairs(self:getAllMenuBars()) do
        if menuBar then
            menuBar:addTipButtonClickListener(self, self.onTipButtonClicked)
        end
    end
end

function LobbyView:hideKeFuTips()
    self:removeMenuIconTipText(LobbyConfig.ICON_ID.KE_FU)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_CUSSERVICE_TIP_SHOW, true)
end

function LobbyView:onEventflushPhoneBindRedPos(msg)
    if msg then
        self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.HUO_DONG, msg.data)
    end
end

function LobbyView:onEventOpenImCallBack()
    local bSupportFriendList = XH.areaData:isSupportFriendList()
    if bSupportFriendList and self._imListLayer ~= nil then
        self._imListLayer:showListLayer()
    end
end

function LobbyView:showPhoneBindQiPao()
    -- 取消tip
    -- if not XH.playerData:isBindPhone() and (XH.playerData:getRoomCard() <= 1 or XH.playerData:getSR() <= 2000) then
    --     self:setMenuIconTipText(LobbyConfig.ICON_ID.HUO_DONG, "免费房卡金币！")
    -- else   
    --     self:setTipTextImgVisible(LobbyConfig.ICON_ID.HUO_DONG, false)
    -- end
end

function LobbyView:showSexVoiceTip()
    self:setTipTextImgVisible(LobbyConfig.ICON_ID.GENG_DUO, false)
end

--[[
    @desc: 房卡数量小于2或者金币数量小于2000,显示充值提示
    author:{qiuzhong}
    time:2021-02-01 13:49:25
]]
function LobbyView:showShopChargeTip()
    local minRoomCardNum = 2
    local minGoldNum = 2000
    self._shopCardLight = false
    self._shopGoldLight = false
    local isTodayCardShow = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LOBBY_SHOP_CHARGE_CARD_TIP_SHOW, false)
    local isTodayGoldShow = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LOBBY_SHOP_CHARGE_GOLD_TIP_SHOW, false)
    if XH.playerData:getRoomCard() <= minRoomCardNum and not isTodayCardShow then
        self._shopCardLight = true
    end
    if  XH.playerData:getSR() <= minGoldNum and not isTodayGoldShow then
        self._shopGoldLight = true
    end
    self:setMenuIconExtendAnimVisible(LobbyConfig.ICON_ID.SHANG_CHENG, self._shopCardLight or self._shopGoldLight)
    -- if self._shopCardLight  or  self._shopGoldLight then
    --     self:setMenuIconTipText(LobbyConfig.ICON_ID.SHANG_CHENG, "您有新的折\n扣请查收！")
    -- else
    -- end
    self:setTipTextImgVisible(LobbyConfig.ICON_ID.SHANG_CHENG,false)
end

--[[
    @desc: 隐藏商城充值提示
    author:{qiuzhong}
    time:2021-02-01 13:54:57
]]
function LobbyView:hideShopIconChargeTip()
    if self._shopCardLight then
        self._shopCardLight = false
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LOBBY_SHOP_CHARGE_CARD_TIP_SHOW, true)
    end
    if self._shopGoldLight then
        self._shopGoldLight = false
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LOBBY_SHOP_CHARGE_GOLD_TIP_SHOW, true)
    end
    self:setMenuIconExtendAnimVisible(LobbyConfig.ICON_ID.SHANG_CHENG, false)
    self:setTipTextImgVisible(LobbyConfig.ICON_ID.SHANG_CHENG,false)
end

-- 大厅领话费
function LobbyView:onTouchEventShowToponActPhFee(send, eventType)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "TOPONPHONEFEE"})
    self:refreshIcon(send, LobbyConfig.ICON_ID.TOPON_PH_FEE)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_TOPON_PHONE_FEE_ICON)
end

-- 推广活动
function LobbyView:onTouchEventShowPromote(send,eventType)
    XH.viewManager:openView("PromoteHallView")
end

-- 幸运任务
function LobbyView:onTouchEventShowLuckyTask(send,eventType)
    local throwDataSceneName = ""
    local popFrom = LuckyTaskDefine.POP_FROM.LOBBY
    if self._mainRightMenuBar and self._mainRightMenuBar:isVisible() then 
        throwDataSceneName = "大厅"
    end
    XH.viewManager:openView("LuckyTaskView", nil, popFrom)
    XH.lobby:getModule("LuckyTask"):reportData("iconClick", throwDataSceneName)
end

-- 签到页面
function LobbyView:onTouchEventTabSignInAct(send,eventType)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "DAILYSIGN"})
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_SIGN_CLICK, nil, {area_id = XH.areaData:getAreaID()})
end

--祈福小游戏
function LobbyView:onTouchEventPrayAct(send, eventType)
    XH.viewManager:openView("PrayActView")
end

function LobbyView:onPrayActInfo(event)
    if not event or not event.data then
        return
    end
    if event.data.giftbox == 3 then
        self.KWA_PARY_DEC:setVisible(true)
        self.KWA_PARY_DEC:loadTexture(string.format("prayact_logo_%d.png", event.data.selectkind),ccui.TextureResType.plistType)
        self:performWithDelay(function()
            XH.playerData:flushGoldCoin()
        end,3)
    end
end

function LobbyView:onEventShowPromoteIcon(event)
    if not event or not event.data then
        return
    end
    self:setMenuIconVisible(event.data.icon, event.data.isShow)
    self:UpdatePromoteState()
end

function LobbyView:onEventShowLuckTaskIcon(event)
    if not event or not event.data then
        return
    end
    self:setMenuIconVisible(event.data.icon, event.data.isShow)
    if event.data.icon == LobbyConfig.ICON_ID.LUCKY_TASK and event.data.isShow and not self._isReportLuckyTask and "EVENT_NUIADDLOBBYICON" == event.name then
        XH.lobby:getModule("LuckyTask"):reportData("iconShow", "大厅")
        self._isReportLuckyTask = true
    end
end

function LobbyView:updateCpsChannelUI()
    if XH.ChannelTool.checkIsDoubleKouGame() then
        return
    end
    if XH.ChannelTool.checkIsCPSChannel() then
        self._KW_BOX_PANEL:setVisible(false)
        self._KW_GOLD_PANEL:setVisible(false)
        self._KW_BOX_PANEL_CPS:setVisible(true)
        self._KW_GOLD_PANEL_CPS:setVisible(true)
        local imgName = XH.ChannelTool.getCPSHotupdateImg()
        if  imgName ~= "" then 
            self._KW_IMG_CPS_BACKGROUND:loadTexture(imgName, ccui.TextureResType.localType) 
        end
        self._KW_IMG_CPS_BACKGROUND:setVisible(true)
        if XH.ChannelTool.checkIsDoubleKouGame() then
            self._KW_IMG_CPS_BACKGROUND:setVisible(false)
        end
        self:performWithDelay(function()
            self._KW_IMG_CPS_BACKGROUND:setVisible(false)
        end,3)
    elseif XH.ChannelTool.checkIsWaishengChannel() then 
        self._KW_BOX_PANEL:setVisible(false)
        self._KW_GOLD_PANEL:setVisible(false)
        self._KW_BOX_PANEL_CPS:setVisible(true)
        self._KW_GOLD_PANEL_CPS:setVisible(true)
        --缩放调整位置
        self._KW_BOX_PANEL_CPS:setScale(0.9)
        self._KW_BOX_PANEL_CPS:setAnchorPoint(cc.p(0.5, 0.5))
        self._KW_BOX_PANEL_CPS:setPositionType(ccui.PositionType.percent)
        self._KW_BOX_PANEL_CPS:setPositionPercent(cc.p(0.25, 0.1))

    end
end

-- 切到前台
function LobbyView:onEnterCPSChannelForeground()
    self:onEnterH5Game()
end

function LobbyView:onEnterH5GameListen()
    if not self._bNotfirstEnterH5 then
        self._bNotfirstEnterH5 = true
        self:onEnterH5Game()
    end
end

function LobbyView:onH5GameClose()
    if XH.ChannelTool.checkIsCPSChannel() and not XH.ChannelTool.checkIsDoubleKouGame() then
        self:performWithDelay(function()
            self._KW_IMG_CPS_BACKGROUND:setVisible(false)
        end,1)
    end
end

function LobbyView:onEnterH5Game()
    --特殊渠道直接打开游戏
    if XH.ChannelTool.checkIsCPSChannel() and not XH.ChannelTool.checkIsDoubleKouGame() then
        local position = XH.playerData:getPlayerPosition()
        --不在游戏中，且在大厅
        if position.gameID == 0 and XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.LOBBY then
            XH.lobby:getModule("Lobby"):startH5Game(XH.ChannelTool.getH5GameName())
        end  
   end
end

function LobbyView:onTouchEventTeHuiShangCheng(send, eventType)
    XH.viewManager:openView("TabsActivityView", nil, { tab = "PERSONALGIFT"})
    local data = {}
    data.userid = XH.playerData:getNumberID()
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PersonalGiftPackIcon,data)
end

function LobbyView:onPersonalGiftPackInfo(event)
    local confData = event.msg.configData or {}
    local bShow = #confData > 0
    self:setMenuIconVisible(LobbyConfig.ICON_ID.TE_HUI_SHANG_CHENG, bShow)
end

function LobbyView:on_KW_IMG_CPS_BACKGROUND(send, eventType)
    self._KW_IMG_CPS_BACKGROUND:setVisible(false) 
end

function LobbyView:refreshIcon(icon, iconID)
    if not iconID or not iconID then
        return
    end
    local iconClicked = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ACT_ICON_CLICKED, false, {key = iconID})
    if not iconClicked then
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/Activity/activity_icons.plist")
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_ACT_ICON_CLICKED, true, {key = iconID})
        icon:stopAllActions()
        icon:removeAllChildren()
        if icon._imgIcon then
            icon._imgIcon = nil
        end
        local iconCfg = LobbyConfig.MenuIconConfig[iconID]
        icon:initImageViewIcon(iconCfg.Plist, iconCfg.IconResName)
    end
end

function LobbyView:onEventShowLeisureEntrance(event)
    self:updateLeisureEntrance()
    self:updateQuickStart()
end

function LobbyView:updateLeisureEntrance()
    local leisureEntranceData = XH.lobby:getModule("Lobby"):getLeisureEntranceData()
    if not leisureEntranceData or not next(leisureEntranceData) then
        return
    end
    self:onRefreshGoldUI()
end

function LobbyView:onEventGetIconWorldPos(event)
    if not event or not event.data then
        return
    end
    local data = event.data
    for _, menuBar in pairs(self:getAllMenuBars()) do
        local btn = menuBar:getMenuByID(data.iconId)
        if btn then
            local posX, posY = btn:getPosition()
            local worldPos = menuBar:convertToWorldSpace(cc.p(posX,posY))
            local size = btn:getContentSize()
            data.callback(worldPos,size)
            return
        end
    end
    data.callback()
end

function LobbyView:initAudio()
    local gameID = 1
    local key = "GameSound_" .. gameID
    local priority = 1
    local GameSoundResChecker = require("app.hotupdate.gamesound.GameSoundResChecker")
    GameSoundResChecker._startHotFix(gameID, key, priority)
end

function LobbyView:updateGameCommonAni()
    local GameAniResChecker = require("app.hotupdate.gameani.GameAniResChecker")
    GameAniResChecker._startHotFix(GameAniResChecker.KW_ANI_TYPE.GAMECOMMON, 1)
end

function LobbyView:showNewPlayTypeUI(show)
    if not self._lobbyTips or not self._lobbyTipsContent then
        return
    end
    self:initLobbyEntranceFlagImg(show)
    self._lobbyTips:setVisible(show)
    local lobbyTipsContent = GameNewTypeConfiger:getNewPlayTypeLobbyTipsByLobbyID(XH.areaData:getLobbyID())
    if lobbyTipsContent then
        self._lobbyTipsContent:setString(lobbyTipsContent)
        local contentSize = self._lobbyTipsContent:getContentSize()
        local tipsSize = self._lobbyTips:getContentSize()
        local minLength = 166
        local whiteLenth = 10
        if contentSize.width + whiteLenth * 2 > minLength then
            self._lobbyTips:setContentSize(contentSize.width + whiteLenth * 2, tipsSize.height)
        end
        self._lobbyTipsContent:setPositionX(contentSize.width / 2 + whiteLenth)
    else
        self._lobbyTips:setVisible(false)
    end
end

function LobbyView:initLobbyEntranceFlagImg(show)
    if not self._imgBoxRoomFlag or not self._imgTeaFlag or not self._imgBoxRoomFlagCps or not self._imgTeaFlagCps then
        return
    end
    pcall(function()
        local teaFlagImg = GameNewTypeConfiger:getLobbyTeaFlagImgByLobbyID(XH.areaData:getLobbyID())
        if teaFlagImg and teaFlagImg ~= "" then
            self._imgTeaFlag:loadTexture(teaFlagImg, ccui.TextureResType.plistType)
            self._imgTeaFlagCps:loadTexture(teaFlagImg, ccui.TextureResType.plistType)
            self._imgTeaFlag:setVisible(show)
            self._imgTeaFlagCps:setVisible(show)
        end
        local boxFlagImg = GameNewTypeConfiger:getLobbyBoxFlagImgByLobbyID(XH.areaData:getLobbyID())
        if boxFlagImg and boxFlagImg ~= "" then
            self._imgBoxRoomFlag:loadTexture(boxFlagImg, ccui.TextureResType.plistType)
            self._imgBoxRoomFlagCps:loadTexture(boxFlagImg, ccui.TextureResType.plistType)
            self._imgBoxRoomFlag:setVisible(show)
            self._imgBoxRoomFlagCps:setVisible(show)
        end
    end)
end

function LobbyView:onEventShowRedPos(event)
    self:setMenuIconRedPointVisible(event.data.iconID, event.data.bShow)
end

function LobbyView:onGetLuckyTurnTableActData(event)
    if not event.data then
        return
    end
    if self._mainRightMenuBar and event.data.leftDraw and event.data.leftDraw > 0 then
        local newPlayTypeDrawIcon = self._mainRightMenuBar:getMenuByID(LobbyConfig.ICON_ID.LUCKY_TURN_TABLE)
        if newPlayTypeDrawIcon and newPlayTypeDrawIcon.showTipText then
            newPlayTypeDrawIcon:showTipText(LobbyConfig.ICON_TIP_TEXT_TYPE.RIGHT, "可抽奖")
        end
    end
    if XH.areaData:getLobbyID() == XH.LOBBY_ID.TAIZHOU and XH.lobby:getModule("LuckyTurnTableAct"):hasWhiteAct() then
        local iconID = LobbyConfig.ICON_ID.LUCKY_TURN_TABLE_ACT
        local hasDraw = event.data.leftDraw and event.data.leftDraw > 0
        self:setMenuIconRedPointVisible(iconID, hasDraw)
        if self._mainRightMenuBar and hasDraw then
            local luckyTurnIcon = self._mainRightMenuBar:getMenuByID(iconID)
            if luckyTurnIcon and luckyTurnIcon.showTipText then
                luckyTurnIcon:showTipText(LobbyConfig.ICON_TIP_TEXT_TYPE.RIGHT, "可抽奖")
            end
        end
    end
end

function LobbyView:on_GUIDE_CHOOSEAREA()
    self.KW_PANEL_CHOOSE_GUIDE:setVisible(true)
    XH.SysTool.performWithDelayGlobal(function ()
        self.KW_PANEL_CHOOSE_GUIDE:setVisible(false)
    end,6)
end

function LobbyView:onEventLuckyTaskJoin(event)
    if event.data == nil then
        return
    end
    local type = LuckyTaskDefine.JumpType[event.data.type]
    local gameid = event.data.gameid
    if type == nil then
        return
    end
    if type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_NULL then
        return
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_LOGIN then
        XH.TipTool.showToast("今天已登录，明天再来吧")
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_TEA then
        -- 比赛场
        self:on_KWA_BTND_TEA_HOUSE()
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_TANL then
        -- 包厢加比赛场
        self:on_KWA_BTND_TEA_HOUSE()
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_CHARGE then
        -- 充值
        XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.DIAMOND})
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_SHARE then
        -- 分享
        self:on_KWA_BTND_SHARE()
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_OTHER then
        -- 联运
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_COIN then
        -- 金币场
        self:showXIUXIANLobby()
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_BY then
        -- 捕鱼
        self:gotoBuYu()
    elseif type == LuckyTaskDefine.JumpType.AC_JUMPTYPE_GAME then 
        local confID = XH.goldConfigManager:getConfIDByGameID(gameid)
        if confID == nil then 
            return 
        end
        local roominfo = XH.goldConfigManager:getGoldRoomInfoByIndex(confID).roomInfo
        if gameView then 
            gameView.roomConf = roominfo
            gameView:onTouchEventQuickJoinGold(gameView, ccui.TouchEventType.ended, event.data.ext)
        end 

        --gameid
    else
        -- 大厅创建面板
        local position = XH.playerData:getPlayerPosition()
        if position.gameID == 0 then
            if cc.UserDefault:getInstance():getBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID()) then
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "您已被封禁对局，无法进入房间，如有疑问请联系客服。")
            else
                XH.viewManager:openView("CreateBoxRoomView",nil,{gameid = gameid})
            end
        else
            self:on_KWA_BTND_CREATE_BACK_BOX_ROOM()
        end
    end
end

function LobbyView:onEventLuckyTaskIconTip(event)
    if event.data == nil then
        return
    end
    for _, menuBar in pairs(self:getAllMenuBars()) do
        if menuBar._allMenuIcons ~= nil and #menuBar._allMenuIcons > 0 then
            for i = 1, #menuBar._allMenuIcons do
                if tostring(LobbyConfig.ICON_ID.LUCKY_TASK) == menuBar._allMenuIcons[i]:getName() and menuBar._allMenuIcons[i]:getChildrenCount() > 0 then
                    XH.lobby:getModule("LuckyTask"):flushAwardState(menuBar._allMenuIcons[i]:getChildren()[1], event.data.bShow)
                end
            end
        end
    end
end

function LobbyView:getMenuNodeByName(icon)
    for _, menuBar in pairs(self:getAllMenuBars()) do
        if menuBar._allMenuIcons ~= nil and #menuBar._allMenuIcons > 0 then
            for i = 1, #menuBar._allMenuIcons do
                local menu = menuBar._allMenuIcons[i]
                if tostring(icon) == menu:getName() then
                    return menu
                end
            end
        end
    end
    return nil
end

function LobbyView:onEventFlushShareInfo(event)
    local node = self:getMenuNodeByName(LobbyConfig.ICON_ID.FEN_XAING)
    if node == nil then
        return
    end
    local shareInfo = XH.lobby:getModule("Share"):getShareInfo()
    local show = not (shareInfo == nil or shareInfo.award == nil or #shareInfo.award == 0)
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.FEN_XAING, show)
    -- for i = 1,node:getChildrenCount() do 
    --     if node:getChildren()[i]:getName() == "KW_VIEW_LOBBY_NAME" then
    --         node:getChildren()[i]:setVisible(show)
    --         return
    --     end
    -- end
    if show then
        self:setMenuIconTipText(LobbyConfig.ICON_ID.FEN_XAING, "分享有礼", 10)
        -- local tipTextImg = ccui.ImageView:create()
        -- tipTextImg:loadTexture("sign_in_lobby_qipao.png", ccui.TextureResType.plistType)
        -- tipTextImg:setAnchorPoint(cc.p(0.5,0))
        -- tipTextImg:setName("KW_VIEW_LOBBY_NAME")
        -- tipTextImg:setPosition(node:getContentSize().width*0.5+20,node:getContentSize().height*0.5+35)
        -- tipTextImg:setScale9Enabled(true)
        -- node:addChild(tipTextImg)
        -- local tipText = ccui.Text:create()
        -- tipText:setFontName("cocosStudio/Common/Font/fangzhengcuyuan.TTF")
        -- tipText:setFontSize(36)
        -- tipText:setColor(cc.c3b(233, 78, 52))
        -- tipText:setAnchorPoint(cc.p(0.5, 0.5))
        -- tipText:setString("分享有礼")
        -- tipTextImg:setContentSize(tipText:getContentSize().width + 40,tipTextImg:getContentSize().height+10)
        -- tipText:setPosition(tipTextImg:getContentSize().width*0.5,tipTextImg:getContentSize().height*0.5+15)
        -- tipTextImg:addChild(tipText)
    end
end

function LobbyView:onEventShowSignIcon(event)
    self:setMenuIconVisible(event.data.iconID, event.data.bShow)
end

function LobbyView:onEventShowSignRedPoint(event)
    self:setMenuIconRedPointVisible(event.data.iconID, event.data.bShow)
end

function LobbyView:onEventFlushInviteActRedPoint(event)
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.INVITE_ACT, event.data.bShow)
    local isHaveHuaFei = XH.lobby:getModule("InviteActivity"):isHaveHuaFei()
    self:setMenuIconTipNewsVisible(LobbyConfig.ICON_ID.INVITE_ACT, isHaveHuaFei, "newyear2026_pakrace_Img_shf.png", cc.p(40,90))
    self:updateDFSEntry()
end

function LobbyView:onTouchEventGoldNewView(send, eventType)
    XH.lobby:getModule("Lobby"):enterNewGold()
    if send:getName() == "3026" then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_1, nil, {area_id = XH.areaData:getAreaID()})
    elseif send:getName() == "3027" then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_2, nil, {area_id = XH.areaData:getAreaID()})
    end
end

function LobbyView:onTouchEventJinLong(send, eventType)
    XH.viewManager:openView("JinLongPopNode")
end

function LobbyView:onTouchEventH5WeiJingChuangQi(send, eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHOUFU_CLICK)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.WEIJINGCHUANQI)
end

function LobbyView:onTouchEventH5ZYCS(send, eventType)
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHOUFU_CLICK)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.ZHUOYUECHUANSHUO)
end

function LobbyView:onTouchEventH5YZJS(send, eventType)
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.SHOUFU_CLICK)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.YUANZHENGJIANGSHI)
end

function LobbyView:onTouchEventH5RYZN(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.RONGYAOZHINU)
end

function LobbyView:onTouchEventH5BZSC(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.BAIZHANSHACHENG)
end

function LobbyView:onTouchEventH5HXMJL(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.HUANXIANGMINGJIANGLU)
end

function LobbyView:onTouchEventH5SYQY(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.SHENYUANQIYUE)
end

function LobbyView:onTouchEventH5FMZG(send, eventType)
    XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.FUMOZHANGE)
end

function LobbyView:onEventArticleList()
    local list = XH.lobby:getModule("Article"):getArticleList()
    if not list or #list == 0 then
        return
    end
    self:setHorseSchedule()
end

function LobbyView:showHorseStart()
    local list = XH.lobby:getModule("Article"):getArticleList()
    if not list or #list == 0 then
        return
    end
    local idx = XH.lobby:getModule("Article"):getCurIndex()
    idx = idx + 1
    if not list[idx] then
        idx = 1
    end
    self:showHorse(list[idx])
    XH.lobby:getModule("Article"):setCurIndex(idx)
end

function LobbyView:on_KWA_TOP_HORSE()
    local list = XH.lobby:getModule("Article"):getArticleList()
    if not list or #list == 0 then
        return
    end
    local idx = XH.lobby:getModule("Article"):getCurIndex()
    if not list[idx] then
        return
    end
    XH.lobby:getModule("Article"):reqArticleThrow()
    cc.Application:getInstance():openURL(list[idx].url)
end

local horseTime = 10
function LobbyView:showHorse(str)
    if self._KW_PANEL_LIMITFREE:isVisible() then
        -- self._KWA_TOP_HORSE:setVisible(false)
        self._KWA_TOP_HORSE:setOpacity(0)
        return
    end
    self._KWA_TOP_HORSE_TEXT:stopAllActions()
    -- self._KWA_TOP_HORSE:setVisible(true)
    self._KWA_TOP_HORSE:setOpacity(255)
    self._KWA_TOP_HORSE_TEXT:setString(str.title)
    self._KWA_TOP_HORSE_TEXT:setPositionX(self._KWA_TOP_HORSE:getContentSize().width - 60)
    local repeatAct2 = cc.MoveTo:create(horseTime, cc.p(-self._KWA_TOP_HORSE_TEXT:getContentSize().width, self._KWA_TOP_HORSE_TEXT:getPositionY()))
    self._KWA_TOP_HORSE_TEXT:runAction(repeatAct2)
end

function LobbyView:removeHorseSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function LobbyView:setHorseSchedule()
    self:removeHorseSchedule()
    self:showHorseStart()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:showHorseStart()
    end, horseTime, false)
end

function LobbyView:flushActBG()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/LimitFreeAct/LimitFreeAct.plist")
    self._KW_BG_CHANGE_IMG_1:loadTexture("LimitFreeAct_ny_qyyjc.png", ccui.TextureResType.plistType)
    -- self._KW_BG_CHANGE_IMG_2:loadTexture("LimitFreeAct_ny_qydzc.png", ccui.TextureResType.plistType)
    self._KW_BG_CHANGE_IMG_3:loadTexture("LimitFreeAct_ny_di2.png", ccui.TextureResType.plistType)
    self._KW_BG_CHANGE_IMG_4:loadTexture("LimitFreeAct_ny_qyyjc.png", ccui.TextureResType.plistType)
    self._KW_BG_CHANGE_IMG_5:loadTexture("LimitFreeAct_ny_xxjbc.png", ccui.TextureResType.plistType)
    self._KW_BG_CHANGE_IMG_6:loadTexture("LimitFreeAct_ny_di2.png", ccui.TextureResType.plistType)
    self._KW_BOX_PANEL:loadTexture("LimitFreeAct_ny_di1.png", ccui.TextureResType.plistType)
    self._KW_GOLD_PANEL:loadTexture("LimitFreeAct_ny_di1.png", ccui.TextureResType.plistType)
    self._createBackBoxRoomBtn:loadTextures("LimitFreeAct_ny_create.png", "LimitFreeAct_ny_create.png", "LimitFreeAct_ny_create.png", ccui.TextureResType.plistType)
    -- self.KWA_BTND_TEA_HOUSE:loadTextures("LimitFreeAct_ny_qyq.png", "LimitFreeAct_ny_qyq.png", "LimitFreeAct_ny_qyq.png", ccui.TextureResType.plistType)
    self.KWA_GOLD_BTND_JOIN_ROOM:loadTextures("LimitFreeAct_ny_jrfj.png", "LimitFreeAct_ny_jrfj.png", "LimitFreeAct_ny_jrfj.png", ccui.TextureResType.plistType)
end

function LobbyView:onEventFlushLimitFreeAct()
    self._KW_PANEL_LIMITFREE:setVisible(false)
    local info = XH.lobby:getModule("LimitFreeAct"):getActConfig()
    if not info or XH.lobby:getModule("LimitFreeAct"):isActEnd() then
        return
    end
    -- GP配置房间免费，大厅不显示免费动画
    if info.serverfree then
        return
    end
    local node = self._KW_PANEL_LIMITFREE:getChildByName("KW_BTN_LIMITFREE_TIP_" .. XH.areaData:getLobbyID())
    if node then
        node:setVisible(true)
    elseif info.gameNameImg then
        local imgName = self._KW_PANEL_LIMITFREE:getChildByName("KW_BTN_LIMITFREE_TIP_0")
        imgName:loadTexture(info.gameNameImg, ccui.TextureResType.plistType)
        imgName:ignoreContentAdaptWithSize(true)
        imgName:setVisible(true)
    end
    local imgRule = self._KW_PANEL_LIMITFREE:getChildByName("KW_BTN_LIMITFREE_RULE")
    if imgRule and info.ruleImg then
        imgRule:loadTexture(info.ruleImg, ccui.TextureResType.plistType)
    end
    self._KW_PANEL_LIMITFREE:setVisible(true)
end

function LobbyView:onClickFreeTipView()
    XH.lobby:getModule("LimitFreeAct"):openTipView()
end

function LobbyView:on_KWA_BTN_VIP(send , eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = {
        block_label = '大厅顶部入口'
    }
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.zyt2024032801, data)
    XH.viewManager:openView("SxvipPrivilegeView", nil, SxvipConfig.ThrowData.source.lobbyMain)
    XH.lobby:getModule("Sxvip"):setTouchIconStatus(true)
end

function LobbyView:onUpdateSxvipStatus()
    if self._curLobbyType ==  XH.LOBBY_TYPE.YUEJU then
        local showEntry = XH.lobby:getModule("Sxvip"):getSxvipOpen()
        self.KWA_BTN_VIP:setVisible(showEntry)
        local spineNode = self.KWA_POS_VIP_ANI:getChildByName("VIP_ANI")
        if showEntry and not spineNode then
            local aniNode = XH.SpineManager:playAni(self.KWA_POS_VIP_ANI, "animation/Lobby/Base/zzb_hy_icon/", "zzb_hy_icon", "animation", true)
            if aniNode then
                aniNode:setName("VIP_ANI")
            end
        end

        -- 会员赠送功能已经隐藏了
        -- local messageCount = XH.lobby:getModule("Sxvip"):getMessageCount()
        -- if messageCount > 0 then
        --     -- 隐藏会员即将过期显示
        --     XH.UITool.setVisible(self.KWA_BTN_VIP, "_KWA_IMG_BUBBLE", false)
        --     local imgMessage = self.KWA_BTN_VIP:getChildByName("_KWA_IMG_MESSAGE")
        --     imgMessage:setVisible(true)
        --     local messageStr = tostring(messageCount)
        --     if messageCount > 99 then
        --         messageStr = "99+"
        --     end
        --     XH.UITool.setText(imgMessage, "_KW_TEXT_COUNT", messageStr)
        --     if XH.lobby:getModule("Sxvip"):isHideSendMenu() then
        --         XH.UITool.setVisible(self.KWA_BTN_VIP, "_KWA_IMG_MESSAGE", false)
        --     end
        --     return
        -- end
        XH.UITool.setVisible(self.KWA_BTN_VIP, "_KWA_IMG_MESSAGE", false)

        -- 最后一天，气泡一直显示
        -- 到期，点击消失
        local sxvipRemainder = tonumber(XH.playerData:getSxvipRemainder())
        if sxvipRemainder and sxvipRemainder > 0 then
            local imgBubble = self.KWA_BTN_VIP:getChildByName("_KWA_IMG_BUBBLE")
            if imgBubble then
                imgBubble:setVisible(false)
                local textBubble = imgBubble:getChildByName("_KWA_TIPS")
                if textBubble then
                    local remainTime = sxvipRemainder - os.time()
                    if remainTime <= 0 and not XH.lobby:getModule("Sxvip"):getTouchIconStatus() then --过期未点击
                        imgBubble:setVisible(true)
                        imgBubble:setContentSize(cc.size(180, imgBubble:getContentSize().height))
                        textBubble:setString("特权已到期")
                        textBubble:setPositionX(90)
                    elseif remainTime > 0 and remainTime < 86400 then -- 最后一天
                        imgBubble:setVisible(true)
                        imgBubble:setContentSize(cc.size(260, imgBubble:getContentSize().height))
                        textBubble:setString("会员权益即将到期")
                        textBubble:setPositionX(130)
                    end
                end
            end
        end
        -- 头像下面的会员按钮
        if self._btnVip then
            local isExpire = XH.lobby:getModule("Sxvip"):isExpire()
            if isExpire then
                XH.UITool.gray(self._btnVip)
            else
                XH.UITool.resetGray(self._btnVip)
            end
        end
    else
        self.KWA_BTN_VIP:setVisible(false)
    end
    self:flushSxVipTips()
end

function LobbyView:onTouchEventGoldBankrupt(send, eventType)
    local block_label = "金币场大厅"
    if self._curLobbyType == XH.LOBBY_TYPE.YUEJU then
        block_label = "大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052902, {page_label = "破产礼包", page = block_label})
    XH.lobby:getModule("YGiftBankruptcy"):showBankruptcy(self._curLobbyType)
end

function LobbyView:onTouchEventDefeat(send, eventType)
    local block_label = "金币场大厅"
    if self._curLobbyType == XH.LOBBY_TYPE.YUEJU then
        block_label = "大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052902, {page_label = "免赔礼包", page = block_label})
    XH.lobby:getModule("YGiftBankruptcy"):showGiftDefeat(nil, self._curLobbyType)
end

-- 刷新免赔按钮
function LobbyView:onUpdateGiftDefeatStatus()
    local icon = self._mainRightMenuBar:getMenuByID(LobbyConfig.ICON_ID.GOLD_NEW_DEFEAT)
    local info = XH.lobby:getModule("YGiftDefeat"):getPlayerActInfo()
    if info == nil then
        if icon then
            self:setMenuIconVisible(LobbyConfig.ICON_ID.GOLD_NEW_DEFEAT, false)
        end
    else 
        local left = 0
        for i = 1, #info do
            left = tonumber(info[i].period) - XH.lobby:getModule("Shop"):getServerTime()
        end
        if left <= 0 then
            if icon then
                XH.viewManager:closeView("YGiftDefeatView")
                self:setMenuIconVisible(LobbyConfig.ICON_ID.GOLD_NEW_DEFEAT, false)
            end
        else 
            if not icon then
                local block_label = "金币场大厅"
                if self._curLobbyType == XH.LOBBY_TYPE.YUEJU then
                    block_label = "大厅"
                end
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052901, {page_label = "免赔礼包", block_label = block_label})
                self:setMenuIconVisible(LobbyConfig.ICON_ID.GOLD_NEW_DEFEAT, true)
            end
            if icon then
                local item = icon:getChildByName("_KW_PANEL_TIME_LEFT")
                if item then
                    item:getChildByName("_KW_TEXT"):setString(self:getLeftTimeStr(left))
                else
                    local tmp = self._KW_PANEL_TIME_LEFT:clone()
                    tmp:getChildByName("_KW_TEXT"):setString(self:getLeftTimeStr(left))
                    tmp:setPosition(icon:getContentSize().width / 2, icon:getContentSize().height)
                    tmp:setVisible(true)
                    icon:addChild(tmp)
                end
            end
        end
    end
end

-- 刷新破产按钮
function LobbyView:onUpdateBankruptcyStatus()
    local icon = self._mainRightMenuBar:getMenuByID(LobbyConfig.ICON_ID.GOLD_NEW_BANKRUPT)
    local info = XH.lobby:getModule("YGiftBankruptcy"):getPlayerActInfo()
    if info == nil then
        if icon then
            self:setMenuIconVisible(LobbyConfig.ICON_ID.GOLD_NEW_BANKRUPT, false)
        end
    else 
        local left = 0
        for i = 1, #info do
            left = tonumber(info[i].period) - XH.lobby:getModule("Shop"):getServerTime()
        end
        if left <= 0 then
            if icon then
                XH.viewManager:closeView("GoldBaseLiveView")
                XH.viewManager:closeView("GoldBankruptcyView")
                self:setMenuIconVisible(LobbyConfig.ICON_ID.GOLD_NEW_BANKRUPT, false)
            end
        else 
            if not icon then
                local block_label = "金币场大厅"
                if self._curLobbyType == XH.LOBBY_TYPE.YUEJU then
                    block_label = "大厅"
                end
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052901, {page_label = "破产礼包", block_label = block_label})
                self:setMenuIconVisible(LobbyConfig.ICON_ID.GOLD_NEW_BANKRUPT, true)
            end
            if icon then
                local item = icon:getChildByName("_KW_PANEL_TIME_LEFT")
                if item then
                    item:getChildByName("_KW_TEXT"):setString(self:getLeftTimeStr(left))
                else
                    local tmp = self._KW_PANEL_TIME_LEFT:clone()
                    tmp:getChildByName("_KW_TEXT"):setString(self:getLeftTimeStr(left))
                    tmp:setVisible(true)
                    tmp:setPosition(icon:getContentSize().width / 2, icon:getContentSize().height)
                    icon:addChild(tmp)
                end
            end
        end
    end
end

function LobbyView:getLeftTimeStr(time)
    return string.format("%02d", math.floor(time/60)) .. ":" .. string.format("%02d", math.floor(time%60))
end

function LobbyView:removeGoldSchedule()
    if self._goldListener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._goldListener)
    end
    self._goldListener = nil
end

function LobbyView:removeGameCenterSchedule()
    if self._gameCenterListener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._gameCenterListener)
    end
    self._gameCenterListener = nil
end

-- 运行期停止游戏中心入口的所有动画与调度，保证再次 startGameCenterAni 时状态干净
function LobbyView:stopGameCenterAni()
    self:removeGameCenterSchedule()
    if self._KWA_GAMECENTER_ANI and not tolua.isnull(self._KWA_GAMECENTER_ANI) then
        -- 停掉容器上未完成的缩放 Sequence，避免残留 scale = 0/1.03 的脏帧
        self._KWA_GAMECENTER_ANI:stopAllActions()
        self._KWA_GAMECENTER_ANI:setScale(1)
        self._KWA_GAMECENTER_ANI:removeAllChildren()
    end
    if self._KWA_GAMECENTER_FINGER_ANI and not tolua.isnull(self._KWA_GAMECENTER_FINGER_ANI) then
        self._KWA_GAMECENTER_FINGER_ANI:removeAllChildren()
    end
end

function LobbyView:setGoldSchedule()
    self:removeGoldSchedule()
    self._goldListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if not self or tolua.isnull(self) then
            return
        end
        self:onUpdateBankruptcyStatus()
        self:onUpdateGiftDefeatStatus()
        self:onUpdateTimeLoginActStatus(true)
    end, 1, false)
end

function LobbyView:flushPeakRaceIcon()

end

function LobbyView:startGameCenterAni()
    self:stopGameCenterAni()

    local aniConfig = {
        {path = "animation/Lobby/Base/zzb_rk_yxzx/", aniName = "zzb_rk_yxzx", aniMation = "animation", loop = true, title = "hall/Image/newyear2025/gamecenter_yxzx.png"},
        {remoteKey = "buyuLobbyGameCenter", title = "hall/Image/newyear2025/gamecenter_rrby.png"},
        {path = "animation/Lobby/Base/zzb_rk_zzh/", aniName = "zzb_rk_zzh", aniMation = "animation", loop = true, title = "hall/Image/newyear2025/gamecenter_zzh.png"},
    }
    local function playGameCenterAni(idx)
        if not self._KWA_GAMECENTER_ANI then
            return
        end
        local cfg = aniConfig[idx]
        self._KWA_GAMECENTER_ANI:removeAllChildren()
        if cfg.remoteKey then
            XH.RemoteSpineManager:playRemoteAni(self._KWA_GAMECENTER_ANI, cfg.remoteKey)
        else
            XH.SpineManager:playAni(self._KWA_GAMECENTER_ANI, cfg.path, cfg.aniName, cfg.aniMation, cfg.loop)
        end
        if self._KWA_GAMECENTER_TITLE then
            self._KWA_GAMECENTER_TITLE:loadTexture(cfg.title, ccui.TextureResType.plistType)
        end
    end

    local index = 1
    playGameCenterAni(index)
    self._gameCenterListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        function()
            if self._KWA_GAMECENTER_ANI then
                self._KWA_GAMECENTER_ANI:runAction(
                    cc.Sequence:create(
                        cc.ScaleTo:create(4 / 60, 1.03),
                        cc.ScaleTo:create(1 / 60, 0),
                        cc.CallFunc:create(
                            function()
                                -- 在 aniConfig 列表中循环切换：1 -> 2 -> ... -> #aniConfig -> 1
                                index = index % #aniConfig + 1
                                playGameCenterAni(index)
                            end
                        ),
                        cc.ScaleTo:create(10 / 60, 1.02),
                        cc.ScaleTo:create(9 / 60, 1)
                    )
                )
            end
        end,
        3,
        false
    )
end

function LobbyView:updateDFSEntry()
    local isNew = false
    local AllConfig = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    local lianYun = AllConfig and AllConfig.LianYunIcon
    if lianYun and lianYun.MainShow and type(lianYun.MainShow) == "boolean" then
        isNew = lianYun.MainShow
    end
    local isShuang = XH.playerData:getNumberID() % 2 == 0
    self._KW_AD_ICON:loadTexture("hall/Image/newyear2025/" .. (isShuang and "zdyl_icon.png" or "yjyq_icon.png"), ccui.TextureResType.plistType)
    local isInMatch = false
    local data = XH.lobby:getModule("Match"):getPeakRaceInfo()
    if data and data.info then
        local now = os.time()
        local start = tonumber(data.info.startTime)
        local endTime = tonumber(data.info.endTime)
        if now > start and now < endTime then
            isInMatch = true
        end
    end
    local isShowGameCenter = not (device.platform == "ios")
    local isShow = XH.lobby:getModule("InviteActivity"):isShowIcon()
    local isShowNewYearAct = isShow and not isInMatch and not isNew
    self._KWA_BTND_NEWYEAR2026:setVisible(isShowNewYearAct)
    local showPeakRace = not (isShow and not isInMatch)
    if isNew and not showPeakRace then
        showPeakRace = not isShowGameCenter
    end
    self._KWA_BTND_PEAK_RACE:setVisible(showPeakRace)
    self._KWA_BTND_GAMECENTER:setVisible(false)
    if isNew then
        self:startGameCenterAni()
        self._KWA_BTND_GAMECENTER:setVisible(not showPeakRace)
        if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_GAMECENTER_FINGER_ANI_SHOW, false) ~= true then
            XH.SpineManager:playAni(self._KWA_GAMECENTER_FINGER_ANI, "animation/Lobby/Base/shoudianji/", "ShouDianJi", "ShouDianJi", true)
        end
    else
        self:stopGameCenterAni()
    end
    local isHaveAward = XH.lobby:getModule("InviteActivity"):isHaveAward()
    local isHaveHuafei = XH.lobby:getModule("InviteActivity"):isHaveHuaFei()
    if isHaveAward ~= nil or isHaveHuafei ~= nil then
        self._KW_IMG_NEWYEAR2026_REDPOINT:setVisible(isHaveAward or isHaveHuafei)
        self._KW_IMG_NEWYEAR2026_REDPOINT:loadTexture(isHaveAward and "newyear2026_pakrace_Img_dlj.png" or "newyear2026_pakrace_Img_shf.png", ccui.TextureResType.plistType)
        if self._KWA_BTND_NEWYEAR2026:isVisible() and not self._KW_IMG_NEWYEAR2026_REDPOINT.action then
            local scaleNode = self._KW_IMG_NEWYEAR2026_REDPOINT:getParent()
            scaleNode:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/Lobby/Activity/NewYear2026/spine_xchd_dlj.json", animationName = "animation", boneName = "2", slotName = "1", isLoop=true})
            self._KW_IMG_NEWYEAR2026_REDPOINT:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/Lobby/Activity/NewYear2026/spine_xchd_dlj.json", animationName = "animation", boneName = "1", slotName = "1", isLoop=true})
            self._KW_IMG_NEWYEAR2026_REDPOINT.action = true
        end
    end
    self:setMenuIconVisible(LobbyConfig.ICON_ID.INVITE_ACT, isShow and (isNew or isInMatch))
    self:setMenuIconVisible(LobbyConfig.ICON_ID.DIAN_FENG_SAI, not self._KWA_BTND_PEAK_RACE:isVisible())
end

-- 巅峰赛
function LobbyView:reqPeakRaceInfo()
    if not XH.lobby:getModule("Lobby"):isShowPeakRace() then
        return
    end
    self.KWA_BTND_TEA_HOUSE:setVisible(false)
    self._KWA_BTND_PEAK_RACE_MATCH:setVisible(true)
    -- self._KWA_BTND_PEAK_RACE:setVisible(true)
    self:updateDFSEntry()
    local info = XH.lobby:getModule("Match"):getPeakRaceInfo()
    if info == nil then
        XH.lobby:getModule("Match"):reqPeakMatchInfo()
    else
        self:flushPeakRaceInfo()
    end
end

-- 更新巅峰赛详细
function LobbyView:flushPeakRaceInfo()
    local data = XH.lobby:getModule("Match"):getPeakRaceInfo()
    local peakrace_wordBg = self._KW_IMG_PEAK_TIME
    local peakrace_word = self._KW_TEXT_PEAK_TIME
    peakrace_word:setVisible(false)
    peakrace_wordBg:setVisible(false)
    if data and data.info then
        local now = os.time()
        local start = tonumber(data.info.startTime)
        local endTime = tonumber(data.info.endTime)
        if now < start then
            -- 开赛倒计时
            local left = start - now
            local numDay = math.floor(left / 86400)
            local numHour = math.floor((left - numDay * 86400) / 3600)
            local day = string.format("%02d", numDay)
            local hour = string.format("%02d", numHour)
            local min = string.format("%02d", math.floor((left - numDay * 86400 - numHour * 3600) / 60))
            local text = "距开赛:" .. day .. "天" .. hour .. "小时" .. min .. "分"
            peakrace_word:setString(text)
            peakrace_wordBg:setContentSize(peakrace_word:getContentSize().width + 30, peakrace_wordBg:getContentSize().height)
            peakrace_word:setVisible(true)
            peakrace_wordBg:setVisible(true)
        elseif now > start and now < endTime then
            peakrace_word:setString("已开赛")
            peakrace_wordBg:setContentSize(140, peakrace_wordBg:getContentSize().height)
            peakrace_word:setVisible(true)
            peakrace_wordBg:setVisible(true)
        end
    end
end

function LobbyView:openDfsView()
    local param = {
        gameid = 1 -- 巅峰赛gameid
    }
    local newGoldController = require("newgold.NewGoldController")
    newGoldController:getInstance():enter(param)
    -- XH.lobby:getModule("NewYear2026"):flushAids({act={}})
    -- XH.lobby:getModule("NewYear2026"):reqInfo()
end

function LobbyView:openGameCenter()
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_GAMECENTER_FINGER_ANI_SHOW, true)
    self._KWA_GAMECENTER_FINGER_ANI:removeAllChildren()
    XH.viewManager:openView("GameCenterView")
end

function LobbyView:onTouchEventScoreAssistant()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092401)
    XH.viewManager:openView("ScoringAssistantView")
end

function LobbyView:onTouchEventBindPhone()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sjbd24122602)
    XH.viewManager:openView("BindPhoneView")
end

function LobbyView:onGetConfiguration(event)
    local key = event.data.key
    if key and key == ConfigurationDefine.Config.GOLD and not self._goldConfigSuccess then
        XH.lobby:getModule("Lobby"):onGetConfiguration()
        self._goldConfigSuccess = true
    elseif key and key == ConfigurationDefine.Config.ALL then
        self:updateQuickStart()
        self:updateBindCardTipShow()
    end
    local matchKey = string.format(ConfigurationDefine.Config.LOBBY, XH.areaData:getLobbyID())
    if key == matchKey then
        self:reqPeakRaceInfo()
    end
    if key and key == ConfigurationDefine.Config.NICHE and not self._nicheConfigSuccess then
        XH.lobby:getModule("Lobby"):updateWebIcons()
        XH.configerManager:updateLobbyMenuBarConfig()
        if self._curLobbyType == XH.LOBBY_TYPE.YUEJU then
            self:refreshMenuBarUI()
        end
        self._nicheConfigSuccess = true
    end
end

function LobbyView:reqGameIconList()
    if not self._goldConfigSuccess then
        XH.lobby:getModule("Configuration"):reqConfigDataMd5(ConfigurationDefine.Config.GOLD)
    end
    if not self._nicheConfigSuccess then
        XH.lobby:getModule("Configuration"):reqConfigDataMd5(ConfigurationDefine.Config.NICHE)
    end
end

function LobbyView:onTouchEventTimeLoginAct(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("TimeLoginActView")
end

function LobbyView:onUpdateTimeLoginActStatus(needUpdate)
    local icons = {}
    table.insert(icons,self._mainRightMenuBar:getMenuByID(LobbyConfig.ICON_ID.ACT_TIME_LOGIN))
    for _, v in ipairs(icons) do
        local icon = v
        if icon then
            if needUpdate then
                XH.lobby:getModule("TimeLoginAct"):updateLoginRewards()
            end
            local info = XH.lobby:getModule("TimeLoginAct"):getLoginRewards()
            if info == nil or #info == 0 then
                icon:setVisible(false)
            else 
                if not icon:isVisible() then
                    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010801)
                end
                icon:setVisible(true)
                -- 金币大于5W不显示红点
                if XH.playerData:getSR() <= XH.lobby:getModule("TimeLoginAct"):getGoldOver() then
                    local isShowRedPoint = false
                    for _,v in ipairs(info) do
                        if v.rewardFlag == TimeLoginActConfig.STATUS.CanReward or v.rewardFlag == TimeLoginActConfig.STATUS.CanSupple then
                            isShowRedPoint = true
                        end
                    end
                    if isShowRedPoint == false then
                        local boxReward = XH.lobby:getModule("TimeLoginAct"):getCurShowBoxReward()
                        if boxReward and boxReward.rewardFlag == TimeLoginActConfig.STATUS.CanReward then
                            isShowRedPoint = true
                        end
                    end
                    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.ACT_TIME_LOGIN, isShowRedPoint)
                end
            end
        end
    end
    self._mainRightMenuBar:updateIconsPosition()
end

function LobbyView:clickBg()

end

function LobbyView:onFlushSxVipAct()
    self._KW_SXVIP_XSYH:setVisible(XH.lobby:getModule("SxvipAct"):getShowAct() ~= nil)
    if self._KW_SXVIP_XSYH:isVisible() then
        -- XH.lobby:getModule("Sxvip"):addSgAni(self._KW_SXVIP_XSYH, 1)
    end
    self:flushSxVipTips()
end

function LobbyView:flushSxVipTips()
    if self._KW_SXVIP_XSYH:isVisible() then
        XH.UITool.setVisible(self.KWA_BTN_VIP, "_KWA_IMG_BUBBLE", false)
        XH.UITool.setVisible(self.KWA_BTN_VIP, "_KWA_IMG_MESSAGE", false)
    end
end

function LobbyView:onEventUpdateBattlePassIcon(event)
    if not event or not event.data then
        return
    end
    self:setMenuIconVisible(LobbyConfig.ICON_ID.BATTLE_PASS, event.data.isOpen or false)
end

function LobbyView:onEventUpdateLuckyBagIcon(event)
    if not event or not event.data then
        return
    end

    local visible = event.data.visible or false
    self:setMenuIconVisible(LobbyConfig.ICON_ID.LUCKY_BAG, visible)
end

function LobbyView:updateLuckyBagIcon()
    if self._mainRightMenuBar then
        local menuIcon = self._mainRightMenuBar:getMenuByID(LobbyConfig.ICON_ID.LUCKY_BAG)
        if menuIcon and menuIcon:getChildByName("LuckyBagIcon") == nil then
            local luckyBagIcon = require("src.lobby.Modules.Share.LuckyBagIconView"):new({source = "大厅"})
            luckyBagIcon:setName("LuckyBagIcon")
            local size = menuIcon:getContentSize()
            luckyBagIcon:setPosition(cc.p(size.width/2, size.height/2))
            menuIcon:addChild(luckyBagIcon)
        end
    end
end

function LobbyView:onTouchEventRecallNew(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080602, {page = "大厅"})
    XH.viewManager:openView("RecallNewView", nil, nil, "大厅")
end

function LobbyView:onEventRunBackgroundAction(event)
    local actType = event.info and event.info.type
    if actType == "enter" then
        self._panelBg:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/GoldNew/zzb_jbdt_zjm.json", animationName = "animation", boneName = "bj"})
    elseif actType == "exit" then
        self._panelBg:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/GoldNew/zzb_jbdt_zjm.json", animationName = "animation2", boneName = "bj"})
    end
    local blurShow = event.info and event.info.blurShow
    local blurTime = event.info and event.info.blurTime
    if blurShow ~= nil then
        ActionUtils:runBgBlurShow(self._imgBlur, blurShow, blurTime)
    end
end

function LobbyView:onEventFlushRecallNewIcon()
    self._KW_IMG_RECALL_FREE:setVisible(XH.lobby:getModule("RecallNew"):isFreeRoom())
    if XH.lobby:getModule("RecallNew"):isInAct() and not self._lastRecallNewVisible then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080601, {page = "大厅"})
        self._lastRecallNewVisible = true
    end
    self:setMenuIconVisible(LobbyConfig.ICON_ID.RECALL_NEW, XH.lobby:getModule("RecallNew"):isInAct())
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.RECALL_NEW, XH.lobby:getModule("RecallNew"):isShowRedPointList())
end

function LobbyView:onEventUpdateBattlePassRedPoint(event)
    if not event or not event.data then
        return
    end
    local data = event.data
    local showRedPoint = data.hasAwardReward or data.hasTaskReward
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.BATTLE_PASS, showRedPoint or false)
end

function LobbyView:onTouchEventBattlePass()
    local page = self._curLobbyType == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042702, {page = page})
    XH.viewManager:openView("LobbyBattlePassView")
end

function LobbyView:onTouchEventXiaGuang()
    local page = self._curLobbyType == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25061201, {page = page})
    XH.viewManager:openView("XiaGuangView")
end

function LobbyView:onTouchEventNewYear2026Act()
    local isShuang = XH.playerData:getNumberID() % 2 == 0
    local page = isShuang and "组队有礼" or "有奖邀请"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jsh25091001, {page_item_id = page})
    XH.viewManager:openView("InviteAct")
    XH.lobby:getModule("InviteActivity"):setShowWarning(false)
end
function LobbyView:onTouchEventDouble12Act()
    XH.NewThrowDataManager:throwData("cc2025112102", {page = "主大厅"})
    XH.viewManager:openView("Double12View", nil, {page = "主大厅"})
end

function LobbyView:onTouchEventInviteAct()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jsh25091001)
    XH.viewManager:openView("InviteAct")
    XH.lobby:getModule("InviteActivity"):setShowWarning(false)
end

function LobbyView:onTouchEventLuckyTurnTableActView()
    XH.NewThrowDataManager:throwData("ws26070202")
    XH.viewManager:openView("LuckyTurnTableActView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_UESR_LUCKY_TURN_TABLE_ACT)
end

function LobbyView:onTouchEventZhuangBan()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = "prop_rqdh"})
    cc.UserDefault:getInstance():setBoolForKey("EVENT_CLICK_ZB_BTN_" .. XH.playerData:getNumberID(), true)
    RedPointManager:setState("zhuangban", false)
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080866, {page = "大厅-装扮"})
end

function LobbyView:onTouchEventLuckyMission()
    XH.viewManager:openView("LuckyMissionView", nil, nil, "大厅")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092202, {page = "大厅"})
end

function LobbyView:onTouchEventFriendTea()
    XH.viewManager:openView("FriendTeaView", nil, {isAuto = false})
    XH.NewThrowDataManager:throwData("hgsc24112702")
end

function LobbyView:onEventFlushLuckyMissionIcon()
    self:setMenuIconVisible(LobbyConfig.ICON_ID.LUCKY_MISSION, XH.lobby:getModule("LuckyMission"):isInAct())
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.LUCKY_MISSION, XH.lobby:getModule("LuckyMission"):isShowRedPointList())
    local luckyMissionIcon = self._mainRightMenuBar:getMenuByID(LobbyConfig.ICON_ID.LUCKY_MISSION)
    if luckyMissionIcon and luckyMissionIcon:getChildrenCount() > 0 then
        luckyMissionIcon:getChildren()[1]:setAnimation(0, XH.lobby:getModule("LuckyMission"):isShowRedPointList() and "animation" or "animation2", true)
    end
    if XH.lobby:getModule("LuckyMission"):isInAct() and not self._luckyMissionVisible then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092201, {page = "大厅"})
        self._luckyMissionVisible = true
    end
end

function LobbyView:stopTouch(time)
    self._KW_STOP_TOUCH_LAYER:stopAllActions()
    self._KW_STOP_TOUCH_LAYER:setVisible(true)
    self._KW_STOP_TOUCH_LAYER:runAction(cc.Sequence:create(cc.DelayTime:create(time or 0.5), cc.CallFunc:create(function()
        self._KW_STOP_TOUCH_LAYER:setVisible(false)
    end)))
end

function LobbyView:onUpdateFriendTeaStatus(isInit)
    -- 没有比赛场列表，不显示入口
    local clubLists = XH.lobby:getModule("FriendTea"):getClubLists()
    if not clubLists or #clubLists == 0 then
        self:setMenuIconVisible(LobbyConfig.ICON_ID.FRIEND_TEA, false)
        return
    end

    self:setMenuIconVisible(LobbyConfig.ICON_ID.FRIEND_TEA, true)
    if not self._isThrowYHSC then
        XH.NewThrowDataManager:throwData("hgsc24112701")
        self._isThrowYHSC = true
    end

    local activeClub = XH.lobby:getModule("FriendTea"):getActiveClub()
    local isHaveCanJoinClub = XH.lobby:getModule("FriendTea"):isHaveCanJoinClub()
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.FRIEND_TEA, isHaveCanJoinClub)
    if isInit == true or XH.viewManager:isViewExist("FriendTeaView") or activeClub or not clubLists or #clubLists == 0 then
        return
    end

    local numid = XH.playerData:getNumberID()
    -- 拍脸弹窗
    local saveData = cc.UserDefault:getInstance():getStringForKey('SHOW_FRIENDTEA_VIEW_' .. numid) or os.date("%Y%m%d") .. "_0"
    local tab = string.split(saveData, "_")
    local curDate = tab[1] or os.date("%Y%m%d")
    local times = curDate == os.date("%Y%m%d") and (tab[2] or 0) or 0
    local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("FriendTea") or {showTimes=3}
    if curDate == os.date("%Y%m%d") and tonumber(times) >= (cfg.showTimes or 3) then
        return
    end
    XH.viewManager:openView("FriendTeaView", nil, {isAuto = true})
    saveData = os.date("%Y%m%d") .. "_" .. tostring(tonumber(times) + 1)
    cc.UserDefault:getInstance():setStringForKey('SHOW_FRIENDTEA_VIEW_' .. numid, saveData)
end

function LobbyView:onTouchEventSxvip()
    XH.viewManager:openView("SxvipPrivilegeView", nil, SxvipConfig.ThrowData.source.LobbyMainHead)
end

function LobbyView:onRefreshNewGoodsList(event)
    local isShowZSTip = true
    local isShowJBTip = true
    local lastShowTime = cc.UserDefault:getInstance():getIntegerForKey("NEWGOLDHALL_ZSTIP_LASTSHOWTIME", 0)
    if lastShowTime > 0 and os.time() - lastShowTime < 86400 then
        isShowZSTip = false
    end
    lastShowTime = cc.UserDefault:getInstance():getIntegerForKey("NEWGOLDHALL_JBTIP_LASTSHOWTIME", 0)
    if lastShowTime > 0 and os.time() - lastShowTime < 86400 then
        isShowJBTip = false
    end
    local IMG_CFG = {"Img_lan_tab.png", "Img_hong_tab.png", "Img_zi_tab.png"}
    local info = XH.lobby:getModule("GoldNew.SubModules.Shop"):getActInfoByTag({tag = "jb"})
    if isShowJBTip and info.cornerName ~= "" then
        isShowZSTip = false -- 金币提示优先
    end
    self._imgGoldTip:setVisible(isShowJBTip and info.cornerName ~= "")
    XH.UITool.setText(self._imgGoldTip, "txtTip", info.cornerName)
    if info.style > 0 and info.style <= 3 then
        self._imgGoldTip:loadTexture(IMG_CFG[info.style], ccui.TextureResType.plistType)
    end

    local info = XH.lobby:getModule("GoldNew.SubModules.Shop"):getActInfoByTag({tag = "zs"})
    self._imgDiamondTip:setVisible(isShowZSTip and info.cornerName ~= "")
    XH.UITool.setText(self._imgDiamondTip, "txtTip", info.cornerName)
    if info.style > 0 and info.style <= 3 then
        self._imgDiamondTip:loadTexture(IMG_CFG[info.style], ccui.TextureResType.plistType)
    end
end

function LobbyView:onTouchEventCoinRewards()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060403, {page = "大厅"})
    XH.viewManager:openView("CoinRewardsView", nil, {page = "大厅"})
end

function LobbyView:updateCoinRewardRedPoint()
    local showRed = XH.lobby:getModule("GoldNew.SubModules.CoinRewards"):getShowRedPoint()
    self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.COIN_REWARD, showRed)
end

return LobbyView  �� 