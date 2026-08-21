---@class TeaHouseMainView : View
local TeaHouseMainView = class("TeaHouseMainView", TeaHouse.View)
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")
local SxvipConfig = require("lobby.Modules.Sxvip.Config")
local LuckyTaskDefine = require("lobby.Modules.LuckyTask.Define")

local KW_ICON_DEFAULT_PNG = "tea_house_main_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_main_view.plist"

local KW_MAX_COL_NUM = 3

TeaHouseMainView.TABLE_ITEM_TYPE = {
    NONE = 0,
    CREATE = 1, ---创建桌子
    MAHJONG_PLAYERS = 2, ---玩家麻将桌子
    POKER_PLAYERS = 3, ---玩家牌类桌子
    MAHJONG_PLAY_MODE = 4, ---固定玩法麻将桌子
    POKER_PLAY_MODE = 5, ---固定玩法牌类桌子
    CREATE_PLAY_MODE = 6, ---创建固定玩法桌子
    ACT = 7, ---活动类桌子
}

--功能下拉列表
local EXTEND_FUNC_LIST = {
    FILTER =  {
        img ="teahouse_main_extend_filter.png",
        events = "onFilterClicked"
    },
    UPGRADE = {
        img ="teahouse_main_extend_up.png",
        events = "onUpgradeTableClicked"
    },
    CUSSERVICE = {
        img ="tea_house_main_cusservice_btn.png",
        events = "onCusServiceCliicked"
    },
    FAQ = {
        img ="tea_house_main_FAQ_btn.png",
        events = "onFAQClicked"
    },
}

TeaHouseMainView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMainView.csb",
    binding = {
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_PWD"] = { tag = "_KW_TEXT_PWD", name = "_textPwd", class = "text" },
        ["_KW_IMG_PROP_COUNT_1"] = { tag = "_KW_IMG_PROP_COUNT_1", name = "_imgPropCount1", class = "img" },
        ["_KW_IMG_PROP_COUNT_2"] = { tag = "_KW_IMG_PROP_COUNT_2", name = "_imgPropCount2", class = "img" },
        ["_KW_IMG_PROP_COUNT_3"] = { tag = "_KW_IMG_PROP_COUNT_3", name = "_imgPropCount3", class = "img" },
        ["_KW_TEXT_PROP_COUNT_1_1"] = { tag = "_KW_TEXT_PROP_COUNT_1_1", name = "_textPropCount11", class = "text" },
        ["_KW_TEXT_PROP_COUNT_1_2"] = { tag = "_KW_TEXT_PROP_COUNT_1_2", name = "_textPropCount12", class = "text" },
        ["_KW_TEXT_PROP_COUNT_2_1"] = { tag = "_KW_TEXT_PROP_COUNT_2_1", name = "_textPropCount21", class = "text" },
        ["_KW_TEXT_PROP_COUNT_2_2"] = { tag = "_KW_TEXT_PROP_COUNT_2_2", name = "_textPropCount22", class = "text" },
        ["_KW_TEXT_PROP_COUNT_3_1"] = { tag = "_KW_TEXT_PROP_COUNT_3_1", name = "_textPropCount31", class = "text" },
        ["_KW_BTN_RECHARGE_3"] = { tag = "_KW_BTN_RECHARGE_3", name = "_btnRecharge3", class = "btn", events = "onRechargeClcked" },
        ["_KW_TEXT_PLAYER_COUNT"] = { tag = "_KW_TEXT_PLAYER_COUNT", name = "_textPlayerCount", class = "text" },
        ["_KW_TEXT_TABLE_COUNT"] = { tag = "_KW_TEXT_TABLE_COUNT", name = "_textTableCount", class = "text" },
        ["_KW_NODE_LIST_OFFSET"] = { tag = "_KW_NODE_LIST_OFFSET", name = "_nodeListOffset", class = "node" },
        ["_KW_BTN_BACK"] = { tag = "_KW_BTN_BACK", name = "_btnBack", class = "btn", events = "onBackClicked" },
        ["_KW_SV_TABLE_LIST"] = { tag = "_KW_SV_TABLE_LIST", name = "_svTableList", class = "scrollview" },
        ["_KW_BTN_QUIT_CLOSE"] = { tag = "_KW_BTN_QUIT_CLOSE", name = "_btnQuitClose", class = "btn", events = "onQuitCloseClicked" },
        ["_KW_BTN_MAX_PLAYER"] = { tag = "_KW_BTN_MAX_PLAYER", name = "_btnMaxPlayer", class = "btn", events = "onMaxPlayerClicked" },
        ["_KW_IMG_QUIT_TITLE"] = { tag = "_KW_IMG_QUIT_TITLE", name = "_imgQuitTitle", class = "img" },
        ["_KW_IMG_CLOSE_TITLE"] = { tag = "_KW_IMG_CLOSE_TITLE", name = "_imgCloseTitle", class = "img" },
        ["_KW_PANEL_BTNS_1"] = { tag = "_KW_PANEL_BTNS_1", name = "_panelBtns1", class = "panel" },
        ["_KW_BTN_MEMBER_1"] = { tag = "_KW_BTN_MEMBER_1", name = "_btnMember1", class = "btn", events = "onMemberClicked" },
        ["_KW_IMG_MEMBER_HINT_1"] = { tag = "_KW_IMG_MEMBER_HINT_1", name = "_imgMemberHint1", class = "img" },
        ["_KW_BTN_BILL_1"] = { tag = "_KW_BTN_BILL_1", name = "_btnBill1", class = "btn", events = "onBillClicked" },
        ["_KW_BTN_BILL_MANAGE_1"] = { tag = "_KW_BTN_BILL_MANAGE_1", name = "_btnBillManage1", class = "btn", events = "onBillManageClicked" },
        ["_KW_BTN_RANK_1"] = { tag = "_KW_BTN_RANK_1", name = "_btnRank1", class = "btn", events = "onRankClicked" },
        ["_KW_BTN_MORE_1"] = { tag = "_KW_BTN_MORE_1", name = "_btnMore1", class = "btn", events = "onMoreClicked" },
        ["_KW_BTN_AGENT"] = { tag = "_KW_BTN_AGENT", name = "_btnAgent", class = "btn", events = "onAgentClicked" },
        ["_KW_PANEL_BTNS_2"] = { tag = "_KW_PANEL_BTNS_2", name = "_panelBtns2", class = "panel" },
        ["_KW_BTN_MEMBER_2"] = { tag = "_KW_BTN_MEMBER_2", name = "_btnMember2", class = "btn", events = "onMemberClicked" },
        ["_KW_IMG_MEMBER_HINT_2"] = { tag = "_KW_IMG_MEMBER_HINT_2", name = "_imgMemberHint2", class = "img" },
        ["_KW_BTN_BILL_2"] = { tag = "_KW_BTN_BILL_2", name = "_btnBill2", class = "btn", events = "onBillClicked" },
        ["_KW_BTN_BILL_MANAGE_2"] = { tag = "_KW_BTN_BILL_MANAGE_2", name = "_btnBillManage2", class = "btn", events = "onBillManageClicked" },
        ["_KW_BTN_RANK_2"] = { tag = "_KW_BTN_RANK_2", name = "_btnRank2", class = "btn", events = "onRankClicked" },
        ["_KW_BTN_MORE_2"] = { tag = "_KW_BTN_MORE_2", name = "_btnMore2", class = "btn", events = "onMoreClicked" },
        ["_KW_BTN_SETTING"] = { tag = "_KW_BTN_SETTING", name = "_btnSetting", class = "btn", events = "onSettingClicked" },
        ["_KW_PANEL_APPLY_MASK"] = { tag = "_KW_PANEL_APPLY_MASK", name = "_panelApplyMask", class = "panel" },
        ["_KW_BTN_APPLY"] = { tag = "_KW_BTN_APPLY", name = "_btnApply", class = "btn", events = "onApplyClicked" },
        ["_KW_BTN_RECHARGE_1"] = { tag = "_KW_BTN_RECHARGE_1", name = "_btnRecharge1", class = "btn", events = "onRechargeClcked" },
        ["_KW_BTN_RECHARGE_2"] = { tag = "_KW_BTN_RECHARGE_2", name = "_btnRecharge2", class = "btn", events = "onRechargeClcked" },
        ["_KW_BTN_REFRESH"] = { tag = "_KW_BTN_REFRESH", name = "_btnRefresh", class = "btn", events = "onRefreshClicked" },
        ["_KW_BTN_REFRESH_2"] = { tag = "_KW_BTN_REFRESH_2", name = "_btnRefresh2", class = "btn", events = "onRefreshClicked" },
        ["_KW_BTN_REMODEL_CARD"] = { tag = "_KW_BTN_REMODEL_CARD", name = "_btnRemodelCard", class = "btn", events = "onRechargeClcked" },
        ["_KW_BTN_COPY"] = { tag = "_KW_BTN_COPY", name = "_btnCopy", class = "btn", events = "onCopyClicked" },
        ["_KW_BTN_OWER_SHOP"] = {tag = "_KW_BTN_OWER_SHOP", name = "_btnOwerShop", class = "btn", events = "onOpenOwerShop" },
        ["_KW_BTN_LEVEL_UP"] = {tag = "_KW_BTN_LEVEL_UP", name = "_btnLevelUp", class = "btn", events = "onLevelUpClicked" },
        ["_KW_BTN_FULI_1"] = {tag = "_KW_BTN_FULI_1", name = "_btnFuLiIcon1", class = "btn", events = "onOpenFuLiIcon" },
        ["_KW_BTN_FULI_2"] = {tag = "_KW_BTN_FULI_2", name = "_btnFuLiIcon2", class = "btn", events = "onOpenFuLiIcon" },
        --比赛场功能下拉框
        ["_KW_BTN_FUNCTION"] = {tag = "_KW_BTN_FUNCTION", name = "_btnFuncListIcon", class = "panel" },
        ["_KW_FUNC_IMG_BTN"] = {tag = "_KW_FUNC_IMG_BTN", name = "_btnFuncList", class = "btn", events = "onFuncListClicked" },
        ["_KW_FUNC_IMG_BTN"] = {tag = "_KW_FUNC_IMG_BTN", name = "_btnFuncList", class = "btn", events = "onFuncListClicked" },
        ["_KW_FUNC_LIST"] = { tag = "_KW_FUNC_LIST", name = "_panelFuncList", class = "panel" },
        ["_KW_FUNC_LIST_BG"] = { tag = "_KW_FUNC_LIST_BG", name = "_panelFuncListBg", class = "panel" },
        ["_KW_FUNC_ANIM_NODE"] = { tag = "_KW_FUNC_ANIM_NODE", name = "_funcListAniNode", class = "panel" },
        ["_KW_FUNC_NODE"] = {tag = "_KW_FUNC_NODE", name = "_funcNodeItem", class = "panel"},
        --比赛场活动下拉框
        ["_KW_BTN_ACTIVITIES"] = {tag = "_KW_BTN_ACTIVITIES", name = "_btnActListIcon", class = "panel" },
        ["_KW_ACT_IMG_BTN"] = {tag = "_KW_ACT_IMG_BTN", name = "_btnActList", class = "btn", events = "onActListClicked" },
        ["_KW_ACT_LIST"] = { tag = "_KW_ACT_LIST", name = "_panelActList", class = "panel" },
        ["_KW_ACT_LIST_BG"] = { tag = "_KW_ACT_LIST_BG", name = "_panelActListBg", class = "panel" },
        ["_KW_ACT_LIST2"] = { tag = "_KW_ACT_LIST2", name = "_panelActList2", class = "panel"},
        ["_KW_ACT_IMG_BTN_R"] = { tag = "_KW_ACT_IMG_BTN_R", name = "_imgActRedP", class = "image"},
        ["_KW_ACT_ANIM_NODE"] = { tag = "_KW_ACT_ANIM_NODE", name = "_actListAniNode", class = "panel" },

        ["_KW_BTN_COMPLAIN"] = {tag = "_KW_BTN_COMPLAIN", name = "_btnComplain", class = "btn", events = "onComplainClicked" },
        ["_KW_TIPS_COMPLAIN"] = { tag = "_KW_TIPS_COMPLAIN", name = "_ComplainTips", class = "image" },
        ["_KW_TXT_COMPLAIN"] = { tag = "_KW_TXT_COMPLAIN", name = "_ComplainTipsContent", class = "text" },
        ["_KW_COMPLAIN_RED_POINT"] = { tag = "_KW_COMPLAIN_RED_POINT", name = "_ComplainRedPoint", class = "image" },

        --更多
        ["_KW_SHARE_NODE"] = {tag = "_KW_SHARE_NODE", name = "_shareNodeItem", class = "btn", events = "onShareClicked"},
        ["_KW_LOG_NODE"] = {tag = "_KW_LOG_NODE", name = "_logNodeItem", class = "btn", events = "onLogClicked"},

        ["_KW_TEXT_PROP_COUNT_2_1_NUM"] = { tag = "_KW_TEXT_PROP_COUNT_2_1_NUM", name = "_textPropCount", class = "text" },

        ["_KW_GUIDE_PANEL"] = { tag = "_KW_GUIDE_PANEL", name = "_panelGuide", class = "panel" },
        --划卡气泡提示
        ["_KW_QIPAO_TIP"] = { tag = "_KW_QIPAO_TIP", name = "_qipaoTip", class = "image" },
        --赠送房卡气泡提示
        ["_KW_GUIDE_AWARD_TIP"] = {tag = "_KW_GUIDE_AWARD_TIP" ,name = "_guideAwardTip",class = "image"},

        ["_KW_BTN_NEW_PLAY_TYPE"] = { tag = "_KW_BTN_NEW_PLAY_TYPE", name = "_btnNewPlayType", class = "btn", events = "onNewPlayTypeClicked" },
        ["_KW_BTN_NEW_PLAY_TYPE_DRAW_1"] = { tag = "_KW_BTN_NEW_PLAY_TYPE_DRAW_1", name = "_btnNewPlayTypeDraw1", class = "btn", events = "onNewPlayTypeDrawActClicked" },

        ["_KW_PANEL_AUTO_CREATE_GUIDE_PANEL"] = { tag = "_KW_PANEL_AUTO_CREATE_GUIDE_PANEL", name = "_autoCreateGuide", class = "panel", events = "onAutoCreateGuideClicked" },

        -- 推广活动
        ["_KW_PANEL_PROMOTE"] = {tag = "_KW_PANEL_PROMOTE", name = "_btnPromote", class = "btn", events = "onPromoteClicked" },
        ["_KW_PANEL_HORESE"] = {tag = "_KW_PANEL_HORESE", name = "_panelHorse" },
        ["_KW_TEXT_HORSE"] = {tag = "_KW_TEXT_HORSE", name = "_textHorse" },
        ["_KW_PANEL_HORSE_TEXT"] = {tag = "_KW_PANEL_HORSE_TEXT", name = "_textHorsePanel" },

        ["_KW_PANEL_RRBY"] = { tag = "_KW_PANEL_RRBY", name = "_btnRRBY", class = "btn", events = "onRRBYClicked" },
        ["_KW_PANEL_DOUBLE12"] = { tag = "_KW_PANEL_DOUBLE12", name = "_btnDouble12", class = "btn", events = "onDouble12Clicked" },
        ["_KW_PANEL_NEWYEAR2026"] = { tag = "_KW_PANEL_NEWYEAR2026", name = "_btnNewYear2026", class = "btn", events = "onButtonNewYear2026" },
        -- 会员入口
        ["_KWA_BTN_VIP"] = {tag = "_KWA_BTN_VIP",  name = "KWA_BTN_VIP", class = "btn" , events = "on_KWA_BTN_VIP" },
        ["_KW_SXVIP_XSYH"] = {tag = "_KW_SXVIP_XSYH", name = "_KW_SXVIP_XSYH" },
        ["_KW_NORMAL_QIPAO"] = {tag = "_KW_NORMAL_QIPAO", name = "_KW_NORMAL_QIPAO" },
        ["_KW_TEXT_QIPAO"] = {tag = "_KW_TEXT_QIPAO", name = "_KW_TEXT_QIPAO" },

        ["_KW_BTN_CARD_MODE"] = {tag = "_KW_BTN_CARD_MODE",  name = "_btnCardModeTransfer", class = "btn" , events = "onCardModeClicked" },
    }
}

function TeaHouseMainView:ctor()
    TeaHouseMainView.super.ctor(self)

    self._tableListSize = nil
    self._itemOriginPos = nil
    self._itemOffsetPos = nil
    self._isClosOrPaused = false

    self._itemInfos = {}
    self._itemPlayersNodes = {}
    self._itemPlayModeNodes = {}
    self._itemCreateNode = nil
    self._actIconList = {}

    self._bntList = {}
    self._teaHouseActIconScale = 0.85

    self:initUI()
    self:initEvents()
    self:initActivitiyList()--活动列表
    self:initPromoteIcon()

    self._firstEnter = true
    self._hasOpenCardLimt = false --限时自助划卡
    XH.lobby:getModule("Lobby"):openAniTopView()

    self:onFlushSxVipAct()
    self:initRecallNewAct()
    self:onEventFlushLuckyMission()
    TeaHouse.manager.teahouseMain:setIsFirstInTea()
end

function TeaHouseMainView:onEnter()
    TeaHouseMainView.super.onEnter(self)

    TeaHouse.startReqPersonalGiftPackInfo()
    if self._firstEnter == true then
        self._firstEnter = false
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_5)
    end
    if self._isClosOrPaused then
        self:levealTeaHouse(0.5)
    end
    --活跃值为0的情况下多请求一次 
    if TeaHouse.manager.teahouseData:getTeaActiveValue() == 0 and TeaHouse.manager.teahouseData:isOwner()then
        TeaHouse.manager.teahouseList:reqUserActiveNum()
    end
    TeaHouse.reqLuckyTurnTableAct()
    TeaHouse.SysTool.performWithDelay(1, function()
        if not self or tolua.isnull(self) then
            return
        end
        self:onUpdateTableStatus()
    end)

    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isOwner() or teahouseData:isAdmin() then
        TeaHouse.manager.teaHouseVisualCardTransferModule:updateConfig()
        TeaHouse.manager.teaHouseVisualCardTransferModule:reqModeInfo(true)
    end

    self:onUpdateSxvipStatus()
    self:customEventInit()

    if TeaHouse.isOnlineAct() then
        local teahouseData = TeaHouse.manager.teahouseData
        local teaNumber = teahouseData:getTeaNumber()
        TeaHouse.reqNewSpreadInfo(teaNumber)

        -- 每天最多自动弹推广弹框 3 次，用 UserDefault 存储当日已弹次数
        local dailyPopTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PROMOTE2_TEAHOUSE_AUTO_POP, 0)
        if dailyPopTimes < 3 then
            self:runAction(cc.Sequence:create(cc.DelayTime:create(0.5), cc.CallFunc:create(function()
                if not self or tolua.isnull(self) then
                    return
                end
                local currentTimes = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PROMOTE2_TEAHOUSE_AUTO_POP, 0)
                if currentTimes < 3 then
                    self:openPromoteView()
                    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PROMOTE2_TEAHOUSE_AUTO_POP, currentTimes + 1)
                end
            end)))
        end
    end

    -- 进入比赛场：幸运任务推广弹窗曝光判断（与登录共用每日上限）
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.6), cc.CallFunc:create(function()
        if not self or tolua.isnull(self) then
            return
        end
        XH.lobby:getModule("LuckyTaskPromote"):checkLuckyTaskPromotePop()
    end)))
end

function TeaHouseMainView:onEventNewYear2026Info(event)
    -- if XH.lobby:getModule("NewYear2026"):isValid() then
    --     -- if self._recallShow == nil then
    --     --     XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080601, { page = "比赛场" })
    --     --     self._recallShow = true
    --     -- end
    --     self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.NEWYEAR_2026, self.onButtonNewYear2026)
    --     self:setIconRedPoint(TeaHouse.BridgeUI.getIconConfig().ICON_ID.NEWYEAR_2026, XH.lobby:getModule("NewYear2026"):isHaveAward())
    -- else
    --     self:removeActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.NEWYEAR_2026)
    -- end
    local txtNode = XH.UITool.seekNodeByName(self._btnNewYear2026,"KW_TXT")
	local bVisible = XH.lobby:getModule("NewYear2026"):isValid()
	local bAward = XH.lobby:getModule("NewYear2026"):isHaveAward()
    if bVisible and XH.lobby:getModule("NewYear2026"):isHaveAward(true) and not self._btnNewYear2026.isChecked then
        self._btnNewYear2026.isChecked = true
        XH.lobby:getModule("NewYear2026"):checkShowInviteViewWithAward()
    end
    txtNode:setString(bAward and "待领取" or "领话费")
    self._btnNewYear2026:setVisible(bVisible)
	self:updateRitghActBtnPos()
end

function TeaHouseMainView:onExit()
    TeaHouseMainView.super.onExit(self)
    if self._listenerEventWinSizeChange then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerEventWinSizeChange)
        self._listenerEventWinSizeChange = nil
    end
end

function TeaHouseMainView:customEventInit()
    self._listenerEventWinSizeChange = cc.EventListenerCustom:create("event_do_screen_size_changed", handler(self, self.onWinSizeChange))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventWinSizeChange, 1)
end

function TeaHouseMainView:onWinSizeChange()
    if self._svTableList ~= nil then
        self._tableListSize = self._svTableList:getContentSize()
    end
    self._itemOriginPos = cc.p(0, self._tableListSize.height - 160)
    self._itemOffsetPos = cc.p(self._itemOriginPos.x, self._itemOriginPos.y)
    self:adjustTablesPostion()
end

function TeaHouseMainView:onUpdateTableStatus()
    for _, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.CREATE and itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.ACT then
            itemInfo.item:updateState()
        end
    end
end

function TeaHouseMainView:initUI()
    self:initBtnPos()
    if self._svTableList ~= nil then
        self._svTableList:setScrollBarEnabled(false)
        self._tableListSize = self._svTableList:getContentSize()
    end
    if self._nodeListOffset then
        self._itemOriginPos = cc.p(self._nodeListOffset:getPosition())
    else
        self._itemOriginPos = cc.p(0, 0)
    end
    self._itemOffsetPos = cc.p(self._itemOriginPos.x, self._itemOriginPos.y)

    local teahouseData = TeaHouse.manager.teahouseData
    local payModeType = teahouseData:getTeaHousePayMode()
    self:updateHead()
    self:updateName()
    if self._textPwd then
        local teaHousePwd = string.format("%06d", TeaHouse.manager.teahouseData:getTeaHousePwd())
        self._textPwd:setString("口令：" .. teaHousePwd)
        self._textPwd:addTouchEventListener(function(send, eventType)
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            self:copyTeaHousePwd()
        end)
    end
    self:updatePropCount()
    if self._textPlayerCount then
        self._textPlayerCount:setVisible(teahouseData:isOwner())
    end
    self:updateTableCount()
    self:updatePlayerCount()
    self:updateMaxPlayerCount()
    self:updateKickCount()
    self:updatePower()
    self:updateApplyState()
    self:updateApplyHint()
    self:updateFuncListIcon()
    self:updateFilter()
    self:initBackRoomNode()
    self:initActivitiyList()--活动列表
    self:initBuyuBtnAni()
    self:initDouble12Icon()
    self:initNewYear2026Icon()
    self._panelGuide:setVisible(false)
    if TeaHouse.manager.teaHouseGuide:isCreateGuideFlowShowTip() and teahouseData:isOwner() then
        if not TeaHouse.manager.teaHouseGuide:isCreateHouse() or not TeaHouse.BridgeData:isRemodelArea() then
            self:addGuideLayer()
        end
    end
    self:onComplainActShow() --问卷系统(我要吐槽)
    cc.UserDefault:getInstance():setBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID(),false)
    TeaHouse.manager.teahouseMain:onReqGetBanInfo()
    --为修复线上预付模式刷新可用房卡为0bug
    if payModeType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
        TeaHouse.manager.teahouseMain:reqBuyPorp(true)
    end
    --这里做判断，如果是新手引导流程进来的，不主动请求。
    local isSettingGuideEntry = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_RECORD_GUIDE_ENTRY)
    if isSettingGuideEntry then
        TeaHouse.manager.teahouseMain:onReqTeaInviteActivityStatus()
    end
end

function TeaHouseMainView:initEvents()
    local teahouseList = TeaHouse.manager.teahouseList
    self:createListener(teahouseList)
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_CLOSE, handler(self, self.onTeaHousePaused))

    local teahouseGeneral = TeaHouse.manager.teahouseGeneral
    self:createListener(teahouseGeneral)
    :addEventListener(teahouseGeneral.EVENT_TEA_HOUSE_RELINK, handler(self, self.onTeaHouseRelink))
    :addEventListener(teahouseGeneral.EVENT_TEA_HOUSE_CAN_QUIT, handler(self, self.onUpdateCanQuitTeaHouse))

    local teahouseSetup = TeaHouse.manager.teahouseSetup
    self:createListener(teahouseSetup)
    :addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_NOTIFY, handler(self, self.onSetupUpdateNotify))
    :addEventListener(teahouseSetup.EVENT_REQ_INVITE_ACT, handler(self, self.onReqGuideAwardInviteAct))

    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_POWER_UPDATE, handler(self, self.onPowerUpdate))
    :addEventListener(teahouseMember.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onUpdateAdminRight))
    :addEventListener(teahouseMember.EVENT_TEAMEMBER_HOUSE_CLOSED, handler(self, self.onTeaHouseClosed))

    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_TABLE_LIST_ADD, handler(self, self.onTableListAdd))
    :addEventListener(teahouseMain.EVENT_TABLE_LIST_UPATE, handler(self, self.onTableListUpdate))
    :addEventListener(teahouseMain.EVENT_TABLE_LIST_REMOVE, handler(self, self.onTableListRemove))
    :addEventListener(teahouseMain.EVENT_PLAYER_LIST_ADD, handler(self, self.onPlayerListAdd))
    :addEventListener(teahouseMain.EVENT_PLAYER_LIST_UPDATE, handler(self, self.onPlayerListUpdate))
    :addEventListener(teahouseMain.EVENT_PLAYER_LIST_REMOVE, handler(self, self.onPlayerListRemove))
    :addEventListener(teahouseMain.EVENT_TEA_HOUSE_INFO_UPDATE, handler(self, self.onTeaHouseInfoUpdate))
    :addEventListener(teahouseMain.EVENT_PROP_COUNT_UPDATE, handler(self, self.onPropCountUpdate))
    :addEventListener(teahouseMain.EVENT_TEA_HOUSE_PAUSED, handler(self, self.onTeaHousePaused))
    :addEventListener(teahouseMain.EVENT_TEA_HOUSE_CLOSED, handler(self, self.onTeaHouseClosed))
    :addEventListener(teahouseMain.EVENT_UCRIGHT_UPDATE, handler(self, self.onUCRightUpdate))
    :addEventListener(teahouseMain.EVENT_UCRIGHT_YES, handler(self, self.onUCRightYes))
    :addEventListener(teahouseMain.EVENT_PLAY_MODE_LIST_CHANGED, handler(self, self.onPlayModeListChanged))
    :addEventListener(teahouseMain.EVENT_PLAY_MODE_LIST_UPDATE, handler(self, self.onPlayModeListUpdate))
    :addEventListener(teahouseMain.EVENT_PAY_MODE_UPDATE, handler(self, self.onPayModeUpdate))
    :addEventListener(teahouseMain.EVENT_POWER_UPDATE, handler(self, self.onPowerUpdate))
    :addEventListener(teahouseMain.EVENT_OTHERS_SHOW_UPDATE, handler(self, self.onOthersShowUpdate))
    :addEventListener(teahouseMain.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onUpdateAdminRight))
    :addEventListener(teahouseMain.EVENT_RANK_VISIBLE_UPDATE, handler(self, self.onRankVisibleUpdate))
    :addEventListener(teahouseMain.EVENT_TEAHOUSE_LEVELUP_SUCCSEE, handler(self, self.onLevelUpSuccess))
    :addEventListener(teahouseMain.EVENT_LACK_CARD_NOTIFY, handler(self, self.onLackCardNotify))
    :addEventListener(teahouseMain.EVENT_OPEN_TEACARD_LIMT, handler(self, self.onOpenTeaCardLimt))
    :addEventListener(teahouseMain.EVENT_SHOW_INVITE_ACTIVITY_ICON, handler(self, self.onShowInvitePlayerIcon))
    :addEventListener(teahouseMain.EVENT_SHOW_AWARD_TIP, handler(self, self.onShowGuideAwardTip))
    :addEventListener(teahouseMain.EVENT_FLUSH_RECALL_NEW_ACT_INFO, handler(self, self.onEventFlushRecallNew))
    :addEventListener(teahouseMain.EVENT_FLUSH_RECALL_TEAM_ACT_INFO, handler(self, self.onEventFlushRecallTeam))
    :addEventListener(teahouseMain.EVENT_FLUSH_LUCKY_MISSION, handler(self, self.onEventFlushLuckyMission))
    -- :addEventListener(teahouseMain.EVENT_PLAYER_LIST_CHANGED, handler(self, self.onUpdateTableStatus))
    

    local teaHouseFilter = TeaHouse.manager.teaHouseFilter
    self:createListener(teaHouseFilter)
    :addEventListener(teaHouseFilter.EVENT_FILTER_LIST_CHANGED, handler(self, self.onFilterListChanged))

    local teahouseRank = TeaHouse.manager.teahouseRank
    self:createListener(teahouseRank)
    :addEventListener(teahouseRank.EVENT_RANK_VISIBLE_UPDATE, handler(self, self.onRankVisibleUpdate))

    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.DROP_CHANGED, "TeaHouseMainView", handler(self, self.updatePropCount))
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.PERSONAL_GIFTPACK_INFO, "TeaHouseMainView", handler(self, self.onPersonalGiftPackInfo))
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.LUCKY_TURN_TABLE, "TeaHouseMainView", handler(self, self.onLuckyTurnTableActInfo))
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.NEWYEAR_2026_INFO, "TeaHouseMainView", handler(self, self.onEventNewYear2026Info))

    local teahouseGuide = TeaHouse.manager.teaHouseGuide
    self:createListener(teahouseGuide)
    :addEventListener(teahouseGuide.EVENT_TYPE_START_CREATE_GUIDE, handler(self, self.addGuideLayer))
    :addEventListener(teahouseGuide.EVENT_TYPE_NEW_JOIN, handler(self, self.addNewJoinGuideTip))

    local teaHouseVisualCardTransferModule = TeaHouse.manager.teaHouseVisualCardTransferModule
    self:createListener(teaHouseVisualCardTransferModule)
    :addEventListener(teaHouseVisualCardTransferModule.EVENT_CARD_MODE_UPDATE, handler(self, self.onEventUpdateCardMode))
    :addEventListener(teaHouseVisualCardTransferModule.EVENT_TRANSER_RESULT, handler(self, self.onEventUpdateCardMode))

    --test
    -- self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.NEWYEAR_2026, self.onButtonNewYear2026)

    local gamePlayReachModule = XH.lobby:getModule("GamePlayReach")
    self:createListener(gamePlayReachModule)
    :addEventListener(gamePlayReachModule.EVENT_CONFIG_UPDATED, handler(self, self.onGamePlayReachConfigUpdated))
end

function TeaHouseMainView:onGamePlayReachConfigUpdated()
    self:refreshGamePlayReachSettingRedDot()
end

function TeaHouseMainView:refreshGamePlayReachSettingRedDot()
    if not self._btnSetting or tolua.isnull(self._btnSetting) or not self._btnSetting:isVisible() then
        return
    end
    local lobbyid = XH.areaData:getLobbyID()
    if lobbyid == XH.LOBBY_ID.ZHOUSHAN or lobbyid == XH.LOBBY_ID.YUYAO or lobbyid == XH.LOBBY_ID.NINGBO then
        return
    end
    XH.lobby:getModule("GamePlayReach"):attachBtnRedDot(self._btnSetting)
end

function TeaHouseMainView:cleanup()
    TeaHouseMainView.super.cleanup(self)

    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.DROP_CHANGED, "TeaHouseMainView")
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.PERSONAL_GIFTPACK_INFO, "TeaHouseMainView")
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.LUCKY_TURN_TABLE, "TeaHouseMainView")
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.NEWYEAR_2026_INFO, "TeaHouseMainView")
end

function TeaHouseMainView:initBackRoomNode()
    self._backRoomNode = TeaHouse.manager.viewManager:createView("TeaHouseTableItem.TeaHouseBackRoomNode")
    self:addChild(self._backRoomNode, 1)
end

function TeaHouseMainView:initTable()
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:needShowCreateTable() then
        TeaHouse.manager.teahouseSetup:setTeaNumber(teahouseData:getTeaNumber())
        TeaHouse.manager.teahouseSetup:reqPlayModeInfo()
    end
    if self._svTableList then
        self._svTableList:removeAllChildren()
        self._addPlayerTable = false
    end

    self._itemInfos = {}
    self._itemPlayersNodes = {}
    self._itemPlayModeNodes = {}
    self._itemCreateNode = nil

    if teahouseData:getPlayModeInfoFlag() or not teahouseData:needShowCreateTable() then
        if teahouseData:getPlayModeInfosCount() > 0 then
            for _, playModeInfo in pairs(teahouseData:getPlayModeInfos()) do
                if playModeInfo.bIsEnable then
                    self:addPlayModeTableItem(playModeInfo)
                end
            end
        else
            self:addCreateTableItem()
            self:addCreatePlayModeTableItem()
        end
        self:addPlayersTableItemFirst()
    end
    for _, playerInfo in pairs(teahouseData:getPlayerInfos()) do
        self:addPlayerInfo(playerInfo.areaid, playerInfo.numid)
    end
    
    self:sortTableItems()
    self:adjustTablesPostion()
end

function TeaHouseMainView:updateHead()
    if not self._panelHead then
        return
    end

    if not self._remoteImage then
        local size = self._panelHead:getContentSize()
        self._remoteImage = TeaHouse.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 5, size.height - 5)
        :addTo(self._panelHead)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
        self._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
    end
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local url = SwitchConfig.ShowOwnerHead ~= 0 and TeaHouse.manager.teahouseData:getOwnerUrl() or ""
    TeaHouse.SysTool.loadRemoteImage(self._remoteImage, url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
end

function TeaHouseMainView:updateName()
    if not self._textName then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local name = teahouseData:getOwnerName()
    local nameExt = teahouseData:getTeaHouseNameExt()
    if nameExt and #nameExt > 0 then
        self._textName:setString(string.format("%s的比赛场(%s)", TeaHouse.StringTool.getTrimName(name), nameExt))
    else
        self._textName:setString(string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(name)))
    end
end

function TeaHouseMainView:updatePropCount()
    if not self._imgPropCount1 or not self._imgPropCount2 then
        return
    end
    if not self._textPropCount11 or not self._textPropCount12 then
        return
    end
    if not self._textPropCount21 or not self._textPropCount22 then
        return
    end
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    local teahouseData = TeaHouse.manager.teahouseData
    local isVisible = teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES
    if not isVisible then
        isVisible = teahouseData:isOthersShow()
    end
    local isPlayerOwner = teahouseData:isPlayerOwnerPayType()
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()
    local isLobbyPlayer = teahouseData:isLobbyPlayerPayType()
    if isPlayerOwner then
        if teahouseData:checkSelfPower("RechargeTeaHouse") then
            if SetupConfig.IsOpenSelectYiKaTong then
                self._textPropCount21:setString("可用房卡:")
                self._textPropCount:setString(teahouseData:getPropCount())
                self._textPropCount22:setString("可用一卡通:" .. TeaHouse.BridgeData.getIPass())
                self._imgPropCount1:setVisible(false)
                self._imgPropCount2:setVisible(isVisible)
                self._imgPropCount3:setVisible(false)
                if self._btnRecharge2 then
                    self._btnRecharge2:setVisible(false)
                end
            else
                if teahouseData:isOwner() then
                    self._textPropCount21:setString("比赛场房卡:"..teahouseData:getSelfPropcount())
                    self._textPropCount22:setString("可用房卡:" .. teahouseData:getPlayerOwnerPropCount())
                    self._imgPropCount1:setVisible(false)
                    self._imgPropCount2:setVisible(true)
                    self._imgPropCount3:setVisible(false)
                    if self._btnRecharge2 then
                        self._btnRecharge2:setVisible(true)
                    end
                    if self._btnRefresh then
                        self._btnRefresh:setVisible(false)
                    end
                else
                    self._textPropCount11:setVisible(true)
                    self._textPropCount11:setString("可用房卡:" .. teahouseData:getPlayerOwnerPropCount())
                    self._textPropCount12:setVisible(false)
                    self._imgPropCount1:setVisible(true)
                    self._imgPropCount2:setVisible(false)
                    self._imgPropCount3:setVisible(false)
                    if self._btnRecharge1 then
                        self._btnRecharge1:setVisible(false)
                    end
                    if self._btnRefresh then
                        self._btnRefresh:setVisible(false)
                    end
                end
            end
        else
            if SetupConfig.IsOpenSelectYiKaTong then
                self._textPropCount21:setString("可用房卡:")
                self._textPropCount:setString(teahouseData:getPlayerOwnerPropCount())
                self._textPropCount22:setString("可用一卡通:" .. TeaHouse.BridgeData.getIPass())
                self._imgPropCount1:setVisible(false)
                self._imgPropCount2:setVisible(isVisible)
                self._imgPropCount3:setVisible(false)
                if self._btnRecharge2 then
                    self._btnRecharge2:setVisible(false)
                end
            else
                self._textPropCount11:setVisible(true)
                self._textPropCount11:setString("可用房卡:" .. teahouseData:getPlayerOwnerPropCount())
                self._textPropCount12:setVisible(false)
                self._imgPropCount1:setVisible(isVisible)
                self._imgPropCount2:setVisible(false)
                self._imgPropCount3:setVisible(false)
                if self._btnRecharge1 then
                    self._btnRecharge1:setVisible(false)
                end
                if self._btnRefresh then
                    self._btnRefresh:setVisible(false)
                end
            end
        end
    elseif isAgentPlayer then
        if teahouseData:checkSelfPower("RechargeTeaHouse") then
            self._imgPropCount1:setVisible(false)
            self._imgPropCount2:setVisible(false)
            self._imgPropCount3:setVisible(false)
            if teahouseData:isAdmin() then
                self._textPropCount11:setVisible(true)
                self._textPropCount11:setString("可用比赛场卡:" .. string.format("%.2f", teahouseData:getUserShowPropCount()))     
                self._imgPropCount1:setVisible(isVisible)
                if self._btnRecharge1 then
                    self._btnRecharge1:setVisible(false)
                end
                if self._btnRefresh then
                    self._btnRefresh:setVisible(false)
                end
            end
        else
            self._textPropCount11:setVisible(true)
            self._textPropCount11:setString("可用比赛场卡:" .. string.format("%.2f", teahouseData:getUserShowPropCount()))
            self._textPropCount12:setVisible(false)
            self._imgPropCount1:setVisible(isVisible)
            self._imgPropCount2:setVisible(false)
            self._imgPropCount3:setVisible(false)
            if self._btnRecharge1 then
                self._btnRecharge1:setVisible(false)
            end
            if self._btnRefresh then
                self._btnRefresh:setVisible(false)
            end
        end
    elseif isLobbyPlayer then
        self._textPropCount11:setVisible(true)
        self._textPropCount11:setString("可用房卡:" .. TeaHouse.BridgeData.getRemodelRoomCard())
        self._textPropCount12:setVisible(false)
        self._imgPropCount1:setVisible(true)
        self._imgPropCount2:setVisible(false)
        self._imgPropCount3:setVisible(false)
        if self._btnRecharge1 then
            self._btnRecharge1:setVisible(true)
        end
        if self._btnRefresh then
            self._btnRefresh:setVisible(false)
        end
        self._qipaoTip:setVisible(fasle)
    else
        if teahouseData:checkSelfPower("RechargeTeaHouse") then
            if SetupConfig.IsOpenSelectYiKaTong then
                local payTypes = teahouseData:getPayTypeByID()
                if payTypes then
                    for _, payType in pairs(payTypes) do
                        if payType ~= TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER then
                            self._textPropCount21:setString("可用房卡:")
                            self._textPropCount:setString(teahouseData:getSelfPropcount())
                            self._textPropCount22:setString("可用一卡通:" .. TeaHouse.BridgeData.getIPass())
                            self._imgPropCount1:setVisible(false)
                            self._imgPropCount2:setVisible(isVisible)
                            if self._btnRecharge2 then
                                self._btnRecharge2:setVisible(true)
                            end
                            return
                        end
                    end
                    self._textPropCount11:setVisible(true)
                    self._textPropCount11:setVisible(true)
                    self._textPropCount11:setString("可用房卡:" .. teahouseData:getSelfPropcount())
                    self._imgPropCount1:setVisible(isVisible)
                    self._imgPropCount2:setVisible(false)
                    self._imgPropCount3:setVisible(false)
                    if self._btnRecharge1 then
                        self._btnRecharge1:setVisible(true)
                    end
                    if self._btnRefresh then
                        self._btnRefresh:setVisible(false)
                    end
                end
            else
                --转型地区有相关的需求，拥有库存权限的副领队需要看到比赛场房卡
                --需要打开ModifyInventory和RechargeTeaHouse 2个权限才能生效
                if TeaHouse.BridgeData.isRemodelArea() then
                    --转型地区的逻辑
                    local hasInventory =  teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.INVENTORY)
                    if  (TeaHouse.manager.teahouseData:checkSelfPower("ModifyInventory") and hasInventory ) then
                        local payMode = teahouseData:getTeaHousePayMode()
                        if payMode and payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                            self._textPropCount21:setString("比赛场房卡:"..teahouseData:getSelfPropcount())
                            -- self._textPropCount:setString(teahouseData:getSelfPropcount())
                            self._textPropCount22:setString("可用房卡:" .. teahouseData:getUserShowPropCount())
                            self._imgPropCount2:setVisible(true)
                            self._imgPropCount3:setVisible(false)
                        else
                            local payTypes = teahouseData:getPayTypeByID()
                            if payTypes then
                                for _, payType in pairs(payTypes) do
                                    if( payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA 
                                    or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA) 
                                    and TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
                                        self._textPropCount31:setString("可用房卡:"..TeaHouse.BridgeData.getRemodelRoomCard())
                                    else
                                        self._textPropCount31:setString("比赛场房卡:"..teahouseData:getSelfPropcount())
                                    end
                                end
                            end
                            self._textPropCount31:setVisible(true)
                            self._btnRecharge3:setVisible(true)
                            self._imgPropCount3:setVisible(true)
                            self._imgPropCount2:setVisible(false)
                        end
                        self._imgPropCount1:setVisible(false)
                        if self._btnRecharge2 then
                            self._btnRecharge2:setVisible(true)
                            if teahouseData:isAdmin() then
                                self._btnRecharge2:loadTexture("remodel_tea_btn_card.png",ccui.TextureResType.plistType)
                                self._btnRemodelCard:setVisible(true)
                                self._btnRecharge3:setVisible(false)
                                if not XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ISFIRST_LOGIN) and self._hasOpenCardLimt then
                                    self._qipaoTip:setVisible(true)
                                end
                            end
                        end
                        if self._btnRefresh2 then
                            self._btnRefresh2:setVisible(false)
                        end
                    elseif self._hasOpenCardLimt then
                        self:openCardEdit()
                    else
                        local payMode = teahouseData:getTeaHousePayMode()
                        if payMode and payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                            self._textPropCount11:setVisible(true)
                            self._textPropCount11:setString("可用房卡:" .. teahouseData:getUserShowPropCount())
                            self._imgPropCount1:setVisible(true)
                        else                            
                            self._imgPropCount1:setVisible(false)
                        end
                        self._imgPropCount2:setVisible(false)
                        self._imgPropCount3:setVisible(false)
                        if self._btnRecharge1 then
                            self._btnRecharge1:setVisible(false)
                        end
                        if self._btnRefresh then
                            self._btnRefresh:setVisible(true)
                        end
                        --绍兴老版领队平摊显示
                        if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D
                        and not (payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON) then
                            local payTypes = teahouseData:getPayTypeByID()
                            if payTypes then
                                for _, payType in pairs(payTypes) do
                                    if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                                        self._textPropCount31:setString("可用房卡:"..TeaHouse.BridgeData.getRemodelRoomCard())
                                        self._imgPropCount3:setVisible(true)
                                    elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
                                        self._imgPropCount3:setVisible(false)
                                    end
                                end
                            end
                            self._textPropCount31:setVisible(true)
                            self._btnRecharge3:setVisible(true)
                            self._imgPropCount2:setVisible(false)
                            self._imgPropCount1:setVisible(false)
                        end
                    end
                else
                    --非转型地区的(原先的逻辑)
                    self._textPropCount11:setVisible(true)
                    self._textPropCount11:setString("可用房卡:" .. teahouseData:getSelfPropcount())
                    self._textPropCount12:setVisible(false)
                    self._imgPropCount1:setVisible(isVisible)
                    self._imgPropCount2:setVisible(false)
                    if self._btnRecharge1 then
                        self._btnRecharge1:setVisible(true)
                    end
                    if self._btnRefresh then
                        self._btnRefresh:setVisible(false)
                    end
                end
            end
        elseif self._hasOpenCardLimt then
            self:openCardEdit()
        else
            local payMode = teahouseData:getTeaHousePayMode()
            if payMode and payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
                if (SwitchConfig.ManagerCanGetAdminCard ~= 0 and teahouseData:isAdmin()) then
                    self._textPropCount21:setString("比赛场房卡:"..teahouseData:getSelfPropcount())
                    self._textPropCount22:setString("可用房卡:" .. teahouseData:getUserShowPropCount())
                    self._imgPropCount1:setVisible(false)
                    self._imgPropCount2:setVisible(isVisible)
                    if self._btnRecharge2 then
                        self._btnRecharge2:setVisible(false)
                    end
                    if self._btnRefresh2 then
                        self._btnRefresh2:setVisible(true)
                    end
                else
                    self._textPropCount11:setVisible(true)
                    self._textPropCount11:setString("可用房卡:" .. teahouseData:getUserShowPropCount())
                    self._textPropCount12:setVisible(false)
                    self._imgPropCount1:setVisible(isVisible)
                    self._imgPropCount2:setVisible(false)
                    self._imgPropCount3:setVisible(false)
                    if self._btnRecharge1 then
                        self._btnRecharge1:setVisible(false)
                    end
                    if self._btnRefresh then
                        self._btnRefresh:setVisible(true)
                    end
                end
            else
                local payTypes = teahouseData:getPayTypeByID()
                if payTypes then
                    for _, payType in pairs(payTypes) do
                        if payType ~= TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER then
                            if SetupConfig.IsOpenSelectYiKaTong then
                                self._textPropCount21:setString("可用房卡:")
                                self._textPropCount:setString(TeaHouse.BridgeData.getRoomCard())
                                self._textPropCount22:setString("可用一卡通:" .. TeaHouse.BridgeData.getIPass())
                                self._imgPropCount1:setVisible(false)
                                self._imgPropCount2:setVisible(isVisible)
                                if self._btnRecharge2 then
                                    self._btnRecharge2:setVisible(true)
                                end
                            else
                                self._textPropCount11:setVisible(true)
                                if TeaHouse.BridgeData.isRemodelArea() then
                                    self._textPropCount11:setString("可用房卡:" .. TeaHouse.BridgeData.getRemodelRoomCard())
                                else
                                    self._textPropCount11:setString("可用房卡:" .. TeaHouse.BridgeData.getRoomCard())
                                end
                                self._textPropCount12:setVisible(false)
                                self._imgPropCount1:setVisible(isVisible)
                                self._imgPropCount2:setVisible(false)
                                if self._btnRecharge1 then
                                    self._btnRecharge1:setVisible(false)
                                end
                                if self._btnRefresh then
                                    self._btnRefresh:setVisible(false)
                                end
                                if TeaHouse.BridgeData.isFixPayTypeArea() then
                                    self._textPropCount11:setVisible(false)
                                    self._imgPropCount1:setVisible(false)
                                end
                                --绍兴老版领队玩家视角
                                if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
                                    local payTypes = teahouseData:getPayTypeByID()
                                    if payTypes then
                                        for _, payType in pairs(payTypes) do
                                            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
                                                if teahouseData:isOwner() then
                                                    self._textPropCount31:setString("可用房卡:"..TeaHouse.BridgeData.getRemodelRoomCard())
                                                    self._textPropCount31:setVisible(true)
                                                    self._imgPropCount3:setVisible(true)
                                                else
                                                    self._imgPropCount3:setVisible(false)
                                                end
                                            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                                                self._textPropCount31:setString("可用房卡:"..TeaHouse.BridgeData.getRemodelRoomCard())
                                                self._textPropCount31:setVisible(true)
                                                self._imgPropCount3:setVisible(true)
                                            end
                                        end
                                    end
                                end
                            end
                            return
                        end
                    end
                    if SetupConfig.IsOpenSelectYiKaTong then
                        -- self._textPropCount11:setVisible(false)
                        -- self._textPropCount12:setVisible(true)
                        -- self._textPropCount12:setString("可用一卡通：" .. TeaHouse.BridgeData.getRoomCard())
                        -- self._imgPropCount1:setVisible(isVisible)
                        -- self._imgPropCount2:setVisible(false)
                        -- if self._btnRecharge1 then
                        --     self._btnRecharge1:setVisible(true)
                        -- end
                        -- if self._btnRefresh then
                        --     self._btnRefresh:setVisible(false)
                        -- end
                        if TeaHouse.BridgeData.isRemodelArea() then
                            self._imgPropCount1:setVisible(false)
                            self._imgPropCount2:setVisible(false)
                            self._imgPropCount3:setVisible(true)
                            self._textPropCount31:setString("可用房卡："..teahouseData:getUserShowPropCount())
                            self._textPropCount31:setVisible(true)
                            self._btnRemodelCard:setVisible(false)
                        else
                            self._textPropCount21:setString("我的房卡:")
                            self._textPropCount:setString(TeaHouse.BridgeData.getRoomCard())
                            self._textPropCount22:setString("可用一卡通:" .. TeaHouse.BridgeData.getIPass())
                            self._imgPropCount1:setVisible(false)
                            self._imgPropCount2:setVisible(isVisible)
                            if self._btnRecharge2 then
                                self._btnRecharge2:setVisible(true)
                            end
                        end
                    else
                        self._imgPropCount1:setVisible(false)
                        self._imgPropCount2:setVisible(false)
                        self._imgPropCount3:setVisible(false)
                    end
                end
            end
        end
    end
end

function TeaHouseMainView:updatePlayerCount()
    local teahouseData = TeaHouse.manager.teahouseData
    if self._textPlayerCount then
        self._textPlayerCount:setString(string.format("人数：%d/%d", teahouseData:getPlayerOnlineCount(), teahouseData:getPlayerCount()))
    end
end

function TeaHouseMainView:updateMaxPlayerCount()
    local teahouseData = TeaHouse.manager.teahouseData
    if self._btnMaxPlayer then
        if teahouseData:isOwner() or (teahouseData:isAdmin() and teahouseData:checkSelfPower("ModifyMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.AUDIT))  then
            local playerCount = teahouseData:getPlayerCount()
            local maxPlayerCount = teahouseData:getMaxPlayerCount()
            local clearTime = teahouseData:getClearTime()
            local now = os.time()
            self._btnMaxPlayer:setVisible(playerCount > maxPlayerCount and maxPlayerCount > 0 and now < clearTime)

            if teahouseData:isOwner() and playerCount > maxPlayerCount and maxPlayerCount > 0 and now < clearTime then
                TeaHouse.SysTool.performWithDelay(0.2, function()
                    if not self or tolua.isnull(self) then
                        return
                    end
                    local count = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_TEAHOUSE_MAX_PLAYER_TIP, 0, teahouseData:getTeaHousePwd())
                    if count == 0 then
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TEAHOUSE_MAX_PLAYER_TIP, 1, teahouseData:getTeaHousePwd())
                        self:onMaxPlayerClicked(self._btnMaxPlayer,2)
                    end
                end)
            end
        else
            self._btnMaxPlayer:setVisible(false)
        end
    end
end

function TeaHouseMainView:updateKickCount()
    local teahouseData = TeaHouse.manager.teahouseData
    
        if teahouseData:isOwner() then
            local kickTime = teahouseData:getKickTime()
            local kickCount = teahouseData:getKickCount()
            if kickTime > 0 and kickCount > 0 then
                TeaHouse.SysTool.performWithDelay(0.2, function()
                    if not self or tolua.isnull(self) then
                        return
                    end
                    local count = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_TEAHOUSE_SYSTEM_KICK_TIP, 0, tostring(teahouseData:getTeaHousePwd()) .. "_" .. tostring(kickTime))
                    if count == 0 then
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TEAHOUSE_SYSTEM_KICK_TIP, 1, tostring(teahouseData:getTeaHousePwd()) .. "_" .. tostring(kickTime))
                        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,}, "SYSTEM_AUTO_KICK",kickCount)
                    end
                end)
            end
        end
    
end

function TeaHouseMainView:openCardEdit()--限时划卡界面布局
    local teahouseData = TeaHouse.manager.teahouseData
    self._imgPropCount1:setVisible(false)
    self._imgPropCount2:setVisible(false)
    self._imgPropCount3:setVisible(true)
    if teahouseData:getTeaHousePayMode()==TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then--预付模式显示可用房卡
        self._textPropCount31:setString("可用房卡:"..teahouseData:getUserShowPropCount())
        self._textPropCount31:setVisible(true)
        self._btnRemodelCard:setVisible(true)
        self._btnRecharge3:setVisible(false)
    else--领队模式显示比赛场房卡
        self._textPropCount31:setString("比赛场房卡:"..teahouseData:getSelfPropcount())
        self._textPropCount31:setVisible(true)
        self._btnRemodelCard:setVisible(true)
        self._btnRecharge3:setVisible(false)
    end
    if not XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ISFIRST_LOGIN) then
        self._qipaoTip:setVisible(true)
    end
end

function TeaHouseMainView:updateTableCount()
    if not self._textTableCount then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local isVisible = teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES
    if not isVisible then
        isVisible = teahouseData:isOthersShow()
    end
    self._textTableCount:setVisible(isVisible)
    self._textTableCount:setString(string.format("桌数：%d/%d", teahouseData:getTableCount(), teahouseData:getTableTotalCount()))
end

function TeaHouseMainView:updateApplyState()
    if not self._panelApplyMask then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    self._panelApplyMask:setVisible(teahouseData:getUCRight() == teahouseData.UC_RIGHT.NO)
end

function TeaHouseMainView:updateApplyHint()
    if not self._imgMemberHint1 or not self._imgMemberHint2 then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local isModifyMember = false
    if teahouseData:checkSelfPower("ModifyMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.AUDIT) then
        isModifyMember = true
    end
    if isModifyMember then
        self._imgMemberHint1:setVisible(teahouseData:getAskPowerCount() > 0)
        self._imgMemberHint2:setVisible(teahouseData:getAskPowerCount() > 0)
    else
        self._imgMemberHint1:setVisible(false)
        self._imgMemberHint2:setVisible(false)
    end
end

function TeaHouseMainView:onUpdateCanQuitTeaHouse(event)
    self:updatePower()
end

function TeaHouseMainView:updatePower()
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:checkSelfPower("ModifyPlayMode") or teahouseData:checkSelfPower("ModifyTeahouse") then
        if self._panelBtns1 then
            self._panelBtns1:setVisible(false)
        end
        if self._btnAgent then
            self._btnAgent:setVisible(false)
        end
        if self._panelBtns2 then
            self._panelBtns2:setVisible(true)
        end
        if self._btnSetting then
            self._btnSetting:setVisible(true)
        end
    else
        if self._panelBtns1 then
            self._panelBtns1:setVisible(true)
        end
        if self._btnAgent then
            self._btnAgent:setVisible(not (TeaHouse.BridgeData.isRemodelArea() or TeaHouse.BridgeData.isNotTeaAgentMode()))
        end
        if self._panelBtns2 then
            self._panelBtns2:setVisible(false)
        end
        if self._btnSetting then
            self._btnSetting:setVisible(false)
        end
    end

    local isCanQuit = teahouseData:checkSelfPower("QuitTeaHouse")
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig.NeedCheckCanQuit ~= 0 then
        isCanQuit = teahouseData:checkSelfPower("QuitTeaHouse") and teahouseData:getIsCanQuitTeaHouse()
    end
    -- if self._imgQuitTitle then--2022.1.5隐藏大厅退圈按钮
    --     self._imgQuitTitle:setVisible(isCanQuit)
    -- end
    if self._imgCloseTitle then
        self._imgCloseTitle:setVisible(teahouseData:checkSelfPower("PauseTeaHouse"))
    end
    if self._btnQuitClose then
        -- self._btnQuitClose:setVisible(isCanQuit or teahouseData:checkSelfPower("PauseTeaHouse"))
        self._btnQuitClose:setVisible(teahouseData:checkSelfPower("PauseTeaHouse"))
    end

    self._btnLevelUp:setVisible(teahouseData:isOwner() and teahouseData:getTeaHouseLevel() == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.INTERMEDIATE)

    self:updateAdminRight()
end

function TeaHouseMainView:updateAdminRight()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if teahouseData:checkSelfPower("ModifyPlayMode") or teahouseData:checkSelfPower("ModifyTeahouse") then
        if SwitchConfig.ManagerCanSetTableMode ~= 0 then
            local teahouseData = TeaHouse.manager.teahouseData
            if self._btnAgent then
                if TeaHouse.BridgeData:isRemodelArea() then
                    self._btnAgent:setVisible(false)
                else    
                    self._btnAgent:setVisible(not teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.SET_PLAY_TYPE + teahouseData.ADMIN_RIGHT.SET_PLAY_TYPES))
                end
            end
            if self._btnSetting then
                self._btnSetting:setVisible(teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.SET_PLAY_TYPE + teahouseData.ADMIN_RIGHT.SET_PLAY_TYPES))
            end
            if self._panelBtns1 then
                self._panelBtns1:setVisible(not teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.SET_PLAY_TYPE + teahouseData.ADMIN_RIGHT.SET_PLAY_TYPES))
            end
            if self._panelBtns2 then
                self._panelBtns2:setVisible(teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.SET_PLAY_TYPE + teahouseData.ADMIN_RIGHT.SET_PLAY_TYPES))
            end
        end
    end
    if self._btnMore1 and self._btnMore2 then
        self._btnMore1:setVisible(true)
        self._btnMore2:setVisible(true)
    end
    if self._btnRank1 and self._btnRank2 then
        if XH.lobby:getModule("Lobby"):isShowPeakRace() then
            self._btnRank1:setVisible(true)
            self._btnRank2:setVisible(true)
        else
            if teahouseData:checkSelfPower("QueryRank") and teahouseData:checkRankBit() then
                self._btnRank1:setVisible(true)
                self._btnRank2:setVisible(true)
            else
                self._btnRank1:setVisible(false)
                self._btnRank2:setVisible(false)
                TeaHouse.manager.viewManager:closeView("TeaHouseRankView")
                TeaHouse.manager.viewManager:closeView("TeaHouseRankView2")
            end
        end
    end
    local isModifyBill = false
    if teahouseData:checkSelfPower("ModifyBill") and
    teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.QUERY + teahouseData.ADMIN_RIGHT.FILTER, teahouseData.ADMIN_RIGHT.BILL) then
        isModifyBill = true
    end
    if isModifyBill then
        if self._btnBill1 then
            self._btnBill1:setVisible(false)
        end
        if self._btnBill2 then
            self._btnBill2:setVisible(false)
        end
        if self._btnBillManage1 then
            self._btnBillManage1:setVisible(true)
        end
        if self._btnBillManage2 then
            self._btnBillManage2:setVisible(true)
        end
    else
        if self._btnBill1 then
            self._btnBill1:setVisible(true)
        end
        if self._btnBill2 then
            self._btnBill2:setVisible(true)
        end
        if self._btnBillManage1 then
            self._btnBillManage1:setVisible(false)
        end
        if self._btnBillManage2 then
            self._btnBillManage2:setVisible(false)
        end
        TeaHouse.manager.viewManager:closeView("TeaHouseAgentBillView")
    end
    if self._btnMember1 and self._btnMember2 then
        local isModifyMember = false
        if teahouseData:checkSelfPower("ModifyMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.AUDIT) then
            isModifyMember = true
        end
        local isModifyRemark = teahouseData:checkSelfPower("ModifyRemark")
        local isModifyAdmin = teahouseData:checkSelfPower("ModifyAdmin")
        local isModifyBlack = false
        if teahouseData:checkSelfPower("ModifyBlack") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.BLACK) then
            isModifyBlack = true
        end
        local isKickMember = false
        if teahouseData:checkSelfPower("KickMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.KICK) then
            isKickMember = true
        end
        local isAddCardTeaHouse = false
        if teahouseData:checkSelfPower("AddCardTeaHouse") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.CARD) then
            isAddCardTeaHouse = true
        end
        local isModifyMemberCost = teahouseData:checkSelfPower("ModifyMemberCost")
        local isModifyMutex = false
        if teahouseData:checkSelfPower("ModifyMutex") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.BLACK) then
            isModifyMutex = true
        end
        local isModifyInventory = false
        if TeaHouse.manager.teahouseData:checkSelfPower("ModifyInventory") and TeaHouse.manager.teahouseData:isAdmin() then
            isModifyInventory = true
        end
        if isModifyMember or isModifyRemark or isModifyAdmin or isModifyBlack or isKickMember or
        isAddCardTeaHouse or isModifyMemberCost or isModifyMutex or isModifyInventory then
            self._btnMember1:setVisible(true)
            self._btnMember2:setVisible(true)
        else
            self._btnMember1:setVisible(false)
            self._btnMember2:setVisible(false)
            TeaHouse.manager.viewManager:closeView("TeaHouseMemberView")
        end
    end

    if self._btnFuLiIcon1 and self._btnFuLiIcon2 then
        local notShowArea = TeaHouse.manager.configManager.remodelConfig.NOT_SHOW_ACTIVE_AREA
        local isShow = not not table.indexof(notShowArea, TeaHouse.BridgeData.getAreaID())
        self._btnFuLiIcon1:setVisible(isShow)
        self._btnFuLiIcon2:setVisible(isShow)
    end

    if SwitchConfig.ManagerCanGetAdminCard ~= 0 then
        self:updatePropCount()
    end
    self:updateBtnPos()
    self:updateApplyHint()
    for _, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.CREATE and itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.ACT then
            itemInfo.item:updateState()
        end
    end

    --新玩法数据
    if self._panelBtns1 and self._panelBtns1:isVisible() then
        if self._btnNewPlayTypeDraw1 and self._btnNewPlayTypeDraw1:isVisible() then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_ICON_PUSH)
        end
    elseif self._panelBtns2 and self._panelBtns2:isVisible() then
        if self._btnNewPlayType and self._btnNewPlayType:isVisible() then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_B_ICON_PUSH)
        end
    end
    self:refreshGamePlayReachSettingRedDot()
end

function TeaHouseMainView:initBtnPos()
    local bntList1 = {}
    bntList1[#bntList1 + 1] = { self._btnAgent }
    bntList1[#bntList1 + 1] = { self._btnMore1 }
    bntList1[#bntList1 + 1] = { self._btnRank1 }
    bntList1[#bntList1 + 1] = { self._btnBill1, self._btnBillManage1 }
    bntList1[#bntList1 + 1] = { self._btnMember1 }
    bntList1[#bntList1 + 1] = { self._btnFuLiIcon1 }
    bntList1[#bntList1 + 1] = { self._btnNewPlayTypeDraw1 }

    local btnPosXList1 = {}
    btnPosXList1[#btnPosXList1 + 1] = { self._btnAgent:getPositionX() }
    btnPosXList1[#btnPosXList1 + 1] = { self._btnMore1:getPositionX() }
    btnPosXList1[#btnPosXList1 + 1] = { self._btnRank1:getPositionX() }
    btnPosXList1[#btnPosXList1 + 1] = { self._btnBill1:getPositionX(), self._btnBillManage1:getPositionX() }
    btnPosXList1[#btnPosXList1 + 1] = { self._btnMember1:getPositionX() }
    btnPosXList1[#btnPosXList1 + 1] = { self._btnFuLiIcon1:getPositionX() }
    btnPosXList1[#btnPosXList1 + 1] = { self._btnNewPlayTypeDraw1:getPositionX() }

    local bntList2 = {}
    bntList2[#bntList2 + 1] = { self._btnMore2 }
    bntList2[#bntList2 + 1] = { self._btnSetting }
    bntList2[#bntList2 + 1] = { self._btnRank2 }
    bntList2[#bntList2 + 1] = { self._btnBill2, self._btnBillManage2 }
    bntList2[#bntList2 + 1] = { self._btnMember2 }
    bntList2[#bntList2 + 1] = { self._btnOwerShop }
    bntList2[#bntList2 + 1] = { self._btnFuLiIcon2 }
    bntList2[#bntList2 + 1] = { self._btnNewPlayType }

    local btnPosXList2 = {}
    btnPosXList2[#btnPosXList2 + 1] = { self._btnMore2:getPositionX() }
    btnPosXList2[#btnPosXList2 + 1] = { self._btnSetting:getPositionX() }
    btnPosXList2[#btnPosXList2 + 1] = { self._btnRank2:getPositionX() }
    btnPosXList2[#btnPosXList2 + 1] = { self._btnBill2:getPositionX(), self._btnBillManage2:getPositionX() }
    btnPosXList2[#btnPosXList2 + 1] = { self._btnMember2:getPositionX() }
    btnPosXList2[#btnPosXList2 + 1] = { self._btnOwerShop:getPositionX() }
    btnPosXList2[#btnPosXList2 + 1] = { self._btnFuLiIcon2:getPositionX() }
    btnPosXList2[#btnPosXList2 + 1] = { self._btnNewPlayType:getPositionX() }
    self._bntList = {
        btn = {
            bntList1,
            bntList2,
        },
        posX = {
            btnPosXList1,
            btnPosXList2,
        }
    }
end

function TeaHouseMainView:updateBtnPos()
    local btnList = nil
    local btnPosXList = nil
    if self._panelBtns1:isVisible() then
        btnList = self._bntList.btn[1]
        btnPosXList = self._bntList.posX[1]
    elseif self._panelBtns2:isVisible() then
        btnList = self._bntList.btn[2]
        btnPosXList = self._bntList.posX[2]
    end
    if btnList == nil or btnPosXList == nil then
        return
    end
    local offset = 0
    for i = 1, #btnList do
        local btns = btnList[i]
        if btns then
            local isVisible = false
            for _, btn in ipairs(btns) do
                if btn:isVisible() then
                    isVisible = true
                    break
                end
            end
            if isVisible then
                for j, btn in ipairs(btns) do
                    print(btn:getName())
                    btn:setPositionX(btnPosXList[i][j] + offset)
                end
            else
                if i + 1 <= #btnList then
                    offset = offset + btnPosXList[i][1] - btnPosXList[i + 1][1]
                end
            end
        end
    end
end

function TeaHouseMainView:onTableListAdd(event)
    self:addPlayersTableItem(event.msg.info)
    self:sortTableItems()
    self:adjustTablesPostion()
    self:updateTableCount()
end

function TeaHouseMainView:onTableListUpdate(event)
    self:updatePlayersTableItem(event.msg.info)
    self:sortTableItems()
    self:adjustTablesPostion()
end

function TeaHouseMainView:onTableListRemove(event)
    self:removePlayersTableItem(event.msg.info)
    self:adjustTablesPostion()
    self:updateTableCount()
end

function TeaHouseMainView:onPlayerListAdd(event)
    self:addPlayerInfo(event.msg.areaID, event.msg.numID)
    self:sortTableItems()
    self:adjustTablesPostion()
end

function TeaHouseMainView:onPlayerListUpdate(event)
    self:removePlayerInfo(event.msg.areaID, event.msg.numID)
    self:addPlayerInfo(event.msg.areaID, event.msg.numID)
end

function TeaHouseMainView:onPlayerListRemove(event)
    self:removePlayerInfo(event.msg.areaID, event.msg.numID)
    self:sortTableItems()
    self:adjustTablesPostion()
end

function TeaHouseMainView:onTeaHouseInfoUpdate(event)
    self:updateHead()
    self:updateName()
    self:updateTableCount()
    self:updatePlayerCount()
    self:updateMaxPlayerCount()
    self:updateKickCount()
    self:updateApplyHint()
end

function TeaHouseMainView:onPropCountUpdate(event)
    self:updatePropCount()
end

function TeaHouseMainView:onTeaHousePaused(event)
    self._isClosOrPaused = true 
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,
    funcOK = function()
        if TeaHouse.getTopSceneTag() == XH.SCENE_TAG.TEAHOUSE then
            self:levealTeaHouse()
        end
    end,
    funcClose = function()
        if TeaHouse.getTopSceneTag() == XH.SCENE_TAG.TEAHOUSE then
            self:levealTeaHouse()
        end
    end }, event.msg.data)
end

function TeaHouseMainView:onTeaHouseClosed(event)
    self:levealTeaHouse()
end

function TeaHouseMainView:onTeaHouseRelink(event)
    for i = #self._itemInfos, 1, -1 do
        local itemInfo = self._itemInfos[i]
        if itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.CREATE and itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.ACT then
            itemInfo.item:removeSelf()
            table.remove(self._itemInfos, i)
        end
    end
    self._itemPlayersNodes = {}
    self._itemPlayModeNodes = {}
end

function TeaHouseMainView:onSetupUpdateNotify(event)
    local teahouseData = TeaHouse.manager.teahouseData
    if event.msg.teaNumber ~= teahouseData:getTeaNumber() then
        return
    end
    self:updateName()
    self:updatePropCount()
    TeaHouse.refreshTeaHouseProp()
end

function TeaHouseMainView:onUCRightUpdate(event)
    self:updatePropCount()
    self:updateTableCount()
    self:updateApplyState()
    self:updateAdminRight()
    if self._itemCreateNode then
        self._itemCreateNode:updateState()
    end

    -- TeaHouse.manager.teahouseMain:reqUserInfoListCnt()
end

function TeaHouseMainView:onUCRightYes(event)
    for _, itemInfo in ipairs(self._itemInfos) do
        itemInfo.item:setVisible(true)
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE then
            itemInfo.item:updateState()
        end
    end
    self:adjustTablesPostion()
end

function TeaHouseMainView:onPlayModeListChanged(event)
    self._itemPlayModeNodes = {}
    for i = #self._itemInfos, 1, -1 do
        local itemInfo = self._itemInfos[i]
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE then
            itemInfo.item:removeSelf()
            table.remove(self._itemInfos, i)
        end
    end
    self:removeCreateTableItem()
    self:removeCreatePlayModeTableItem()
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:getPlayModeInfosCount() > 0 then
        for _, playModeInfo in pairs(teahouseData:getPlayModeInfos()) do
            if playModeInfo.bIsEnable then
                self:addPlayModeTableItem(playModeInfo)
            end
        end
    else
        self:addCreateTableItem()
        self:addCreatePlayModeTableItem()
    end
    self:sortTableItems()
    self:addPlayersTableItemFirst()
    self:adjustTablesPostion()
end

function TeaHouseMainView:onPlayModeListUpdate(event)
    local playModeInfo = event.msg.info
    self:removeCreateTableItem()
    self:removeCreatePlayModeTableItem()
    if playModeInfo.bIsEnable then
        self:removePlayModeTableItem(playModeInfo)
        self:addPlayModeTableItem(playModeInfo)
    else
        self:removePlayModeTableItem(playModeInfo)
        local teahouseData = TeaHouse.manager.teahouseData
        if teahouseData:getPlayModeInfosCount() <= 0 then
            self:addCreateTableItem()
            self:addCreatePlayModeTableItem()
        end
    end
    self:sortTableItems()
    self:adjustTablesPostion()
end

function TeaHouseMainView:onPayModeUpdate(event)
    self:updatePropCount()
    for _, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.CREATE and itemInfo.type ~= TeaHouseMainView.TABLE_ITEM_TYPE.ACT then
            itemInfo.item:updateState()
        end
    end
end

function TeaHouseMainView:onPowerUpdate(event)
    self:updatePower()
    self:removeCreateTableItem()
    self:removeCreatePlayModeTableItem()
    for _, itemInfo in ipairs(self._itemInfos) do
        itemInfo.item:updateState()
    end
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:getPlayModeInfosCount() <= 0 then
        self:addCreateTableItem()
        self:addCreatePlayModeTableItem()
    end
    self:sortTableItems()
    self:adjustTablesPostion()
end

function TeaHouseMainView:onUpdateAdminRight(event)
    self:updateAdminRight()
end

function TeaHouseMainView:onOthersShowUpdate(event)
    local teahouseData = TeaHouse.manager.teahouseData
    local isVisible = teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES
    if isVisible then
        return
    end
    self:updatePropCount()
    self:updateTableCount()
    self:updateAdminRight()
    for _, itemInfo in ipairs(self._itemInfos) do
        itemInfo.item:setVisible(teahouseData:isOthersShow())
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE then
            itemInfo.item:updateState()
        end
    end
    self:adjustTablesPostion()
end

function TeaHouseMainView:onFilterListChanged(event)
    self:updateFilter()
end

function TeaHouseMainView:onRankVisibleUpdate(event)
    self:updatePower()
end

function TeaHouseMainView:onBackClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:levealTeaHouse()
    -- TeaHouse.TipTool.showTip({
    --     type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    --     funcOK = function()
    --         self:levealTeaHouse()
    --     end
    -- }, "SURE_TO_QUITTEAHOUSE")
end

function TeaHouseMainView:onQuitCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:checkSelfPower("PauseTeaHouse") then
        TeaHouse.TipTool.showTip({
            type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = function()
                TeaHouse.manager.teahouseList:pauseTeaHouse()
                TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_47)
            end
        }, "SURE_TO_SUSPENDTEAHOUSE")
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_46)
    elseif teahouseData:checkSelfPower("QuitTeaHouse") then
        TeaHouse.manager.viewManager:openView("TeaHouseQuitTeaHouseLayer")
    end
end

function TeaHouseMainView:onMaxPlayerClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local teahouseData = TeaHouse.manager.teahouseData
    local playerCount = teahouseData:getPlayerCount()
    local maxPlayerCount = teahouseData:getMaxPlayerCount()
    local clearTime = teahouseData:getClearTime()


    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,
    funcOK = function()
        if not self or tolua.isnull(self) then
        else
            self:onMemberClicked(send, eventType,{tabIndex = TeaHouse.manager.teahouseMember.OPEN_TAB_TYPE.INACTIVIE_MEMBER})
        end
    end }, "PLAYER_MAX_TIP",maxPlayerCount,playerCount-maxPlayerCount,os.date("%Y.%m.%d %H:%M", clearTime))

    -- if teahouseData:checkSelfPower("PauseTeaHouse") then
    --     TeaHouse.TipTool.showTip({
    --         type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    --         funcOK = function()
    --             TeaHouse.manager.teahouseList:pauseTeaHouse()
    --             TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_47)
    --         end
    --     }, "SURE_TO_SUSPENDTEAHOUSE")
    --     TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_46)
    -- elseif teahouseData:checkSelfPower("QuitTeaHouse") then
    --     TeaHouse.manager.viewManager:openView("TeaHouseQuitTeaHouseLayer")
    -- end
end

function TeaHouseMainView:onNewPlayTypeClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TODAY_CLICK_NEW_PLAY_TYPE_BTN, true)
    send:stopAllActions()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_B_ICON_CLICK)
end

function TeaHouseMainView:onNewPlayTypeDrawActClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TODAY_CLICK_NEW_PLAY_TYPE_DRAW_BTN, true)
    send:stopAllActions()
    XH.viewManager:openView("NewTypeDrawView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_ICON_CLICK)
end

function TeaHouseMainView:onMemberClicked(send, eventType,param)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMain:reqDailyProp()
    TeaHouse.manager.viewManager:openView("TeaHouseMemberView",nil,param)
    TeaHouse.manager.teahouseMember:reqDealPower()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_9)
    if TeaHouse.manager.teaHouseGuide:isJoinGuideFlowBtnTip() then
        TeaHouse.manager.teaHouseGuide:nextJoinGuideFlow()
    end
end

function TeaHouseMainView:onBillClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local teahouseData = TeaHouse.manager.teahouseData
    local teaNumber = teahouseData:getTeaNumber()
    TeaHouse.manager.playerBill:openInTeaHouse(teaNumber)
    TeaHouse.manager.viewManager:openView("TeaHousePlayerBillView")
end

function TeaHouseMainView:onBillManageClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.viewManager:openView("TeaHouseAgentBillView", 0, {
        teaNumber = TeaHouse.manager.teahouseData:getTeaNumber()
    })

    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_26)
end

function TeaHouseMainView:onRankClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if XH.lobby:getModule("Lobby"):isShowPeakRace() then
        TeaHouse.manager.viewManager:openView("TeaHouseRankView2")
    else
        TeaHouse.manager.viewManager:openView("TeaHouseRankView")
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_55)
end

function TeaHouseMainView:onShareClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local teahouseData = TeaHouse.manager.teahouseData
    local name = teahouseData:getOwnerName()
    local nameExt = teahouseData:getTeaHouseNameExt()
    local title = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(name, 12))
    if nameExt and #nameExt > 0 then
        title = title .. string.format("(%s)", nameExt)
    end
    TeaHouse.BridgeData.getShareModule():setShareScene("比赛场", "大厅加入比赛场")
    TeaHouse.SysTool.shareTeaHouse(teahouseData:getTeaHousePwd(), title)

    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_31)
end

function TeaHouseMainView:onOnLineClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMain:reqUserInfoListCnt()
    TeaHouse.manager.viewManager:openView("TeaHouseOnlineListView")
end

function TeaHouseMainView:onSettingClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:openTeaHouseSetupView()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_32)
end

function TeaHouseMainView:onAgentClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.teaPlayerguide()
end

function TeaHouseMainView:onApplyClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseGeneral:applyTeaHouse()
end

function TeaHouseMainView:onRechargeClcked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._hasOpenCardLimt then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_ISFIRST_LOGIN, true)
        self._qipaoTip:setVisible(false)
    end
    -- FIXME:这里的逻辑有些混乱,不因该通过UI的显隐状态来判断是打开商城还是打开设置界面
    -- 建议根据配置或者消耗模式来控制这里的逻辑
    local isOpenShop = false
    if self._imgPropCount1 and self._imgPropCount2 and self._textPropCount12 then
        if self._imgPropCount1:isVisible() and self._textPropCount12:isVisible() then
            isOpenShop = true
        elseif self._imgPropCount2:isVisible() then
            isOpenShop = true
        end
    end
    if TeaHouse.BridgeData:isRemodelArea() then
        --转型地区的业务需求扩展了这部分,但是没有解决混乱的问题
        local teahouseData = TeaHouse.manager.teahouseData
        local isLobbyPlayer = teahouseData:isLobbyPlayerPayType()
        local isShaoXingGuanZhu = false
        local payTypes = teahouseData:getPayTypeByID()

        if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
            if payTypes then
                for _, payType in pairs(payTypes) do
                    if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA 
                    or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                        isShaoXingGuanZhu = true
                    end
                end
            end
        end
        if isLobbyPlayer or isShaoXingGuanZhu then
            TeaHouse.BridgeUI.openShopView()
        else
            if ( TeaHouse.manager.teahouseData:checkSelfPower("ModifyInventory") and TeaHouse.manager.teahouseData:isAdmin() ) or (self._hasOpenCardLimt and  not TeaHouse.manager.teahouseData:isOwner() ) then
                TeaHouse.manager.viewManager:openView("TeaHouseRemodelModifyInventory")
            else
                --self:openTeaHouseSetupView()
                TeaHouse.manager.viewManager:openView("TeaHouseQuitRechargeView")
                TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_80)
            end
        end
    else
        if isOpenShop then
            TeaHouse.showShop()
        else
            --self:openTeaHouseSetupView()
            TeaHouse.manager.viewManager:openView("TeaHouseQuitRechargeView")
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_80)
        end
    end
    local propcount = self:JudegePropCount()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_6,{PropCount = propcount})
end

function TeaHouseMainView:JudegePropCount()
    local PropCount
    local teahouseData = TeaHouse.manager.teahouseData
    local isPlayerOwner = teahouseData:isPlayerOwnerPayType()
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()
    local isLobbyPlayer = teahouseData:isLobbyPlayerPayType()
    if isPlayerOwner then
	    if teahouseData:checkSelfPower("RechargeTeaHouse") then
		    PropCount = teahouseData:getPropCount()
	    else
		    PropCount = teahouseData:getPlayerOwnerPropCount()
	    end
    elseif isAgentPlayer then
	    return
    elseif isLobbyPlayer then
	    PropCount = TeaHouse.BridgeData.getRemodelRoomCard()
    else
	    if teahouseData:checkSelfPower("RechargeTeaHouse") then
		    if TeaHouse.BridgeData.isRemodelArea() then
		 	    PropCount = teahouseData:getUserShowPropCount()
		    else
		 	    PropCount = teahouseData:getSelfPropcount()
		    end
	    else
		    PropCount = teahouseData:getUserShowPropCount()
	    end
    end
    return PropCount
end

function TeaHouseMainView:onRefreshClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.teahouseMain:reqBuyPorp()
end

function TeaHouseMainView:onCopyClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:copyTeaHousePwd()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_7)
end

function TeaHouseMainView:onFilterClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local itemInfos = {}
    for index, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS then
            local info = itemInfo.item:getTableInfo()
            itemInfos[info.gameid] = itemInfos[info.gameid] or {
                gameID = info.gameid,
                gameName = info.name,
                gameCount = 0,
                createTime = info.createTime,
            }
            local itemInfo = itemInfos[info.gameid]
            itemInfo.gameCount = itemInfo.gameCount + 1
            if info.createTime > itemInfo.createTime then
                itemInfo.createTime = info.createTime
            end
        elseif itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE then
            local info = itemInfo.item:getPlayModeInfo()
            itemInfos[info.nGameId] = itemInfos[info.nGameId] or {
                gameID = info.nGameId,
                gameName = info.acName,
                gameCount = 0,
                createTime = info.nPlayModeId,
            }
            local itemInfo = itemInfos[info.nGameId]
            itemInfo.gameCount = itemInfo.gameCount + 1
            if info.nPlayModeId > itemInfo.createTime then
                itemInfo.createTime = info.nPlayModeId
            end
        end
    end
    local itemList = {}
    for _, itemInfo in pairs(itemInfos) do
        itemList[#itemList + 1] = itemInfo
    end
    table.sort(itemList, function(info1, info2)
        if info1.gameCount ~= info2.gameCount then
            return info1.gameCount > info2.gameCount
        end
        if info1.createTime ~= info2.createTime then
            return info1.createTime > info2.createTime
        end
        return info1.gameID > info2.gameID
    end)
    TeaHouse.manager.viewManager:openView("TeaHouseFilterView", 0, itemList)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_54)
end

function TeaHouseMainView:levealTeaHouse(delayTime)
    TeaHouse.manager.teahouseData:clearTeahouseInfos()
    if delayTime then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime), cc.CallFunc:create(function()
            TeaHouse.manager.teahouseGeneral:levealTeaHouse()
        end)))
    else
        TeaHouse.manager.teahouseGeneral:levealTeaHouse()
    end
end

function TeaHouseMainView:addPlayersTableItemFirst()
    if not self._addPlayerTable then
        for _, tableInfo in pairs(TeaHouse.manager.teahouseData:getTableInfos()) do
            self:addPlayersTableItem(tableInfo)
            self._addPlayerTable = true
        end
    end
end

function TeaHouseMainView:addPlayersTableItem(tableInfo)
    local tableInfo = self:changeTableName(tableInfo)
    local playersItem = nil
    if TeaHouse.getGameTypeByGameID(tableInfo.gameid) == "Mahjong" then
        playersItem = TeaHouse.manager.viewManager:createView("TeaHouseTableItem.TeaHouseTableMahjongPlayersItem", tableInfo)
        self:addTableItem(TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS, playersItem)
    else
        playersItem = TeaHouse.manager.viewManager:createView("TeaHouseTableItem.TeaHouseTablePokerPlayersItem", tableInfo)
        self:addTableItem(TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS, playersItem)
    end
    if playersItem == nil then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local isVisible = teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES
    if not isVisible then
        isVisible = teahouseData:isOthersShow()
    end
    if isVisible then
        isVisible = not TeaHouse.manager.teaHouseFilter:isInFilter(tableInfo.gameid)
    end
    playersItem:setVisible(isVisible)
    self._svTableList:addChild(playersItem)
    playersItem:updateState()
end

--角标合规2021.11.12
--并不想更改原来的gameNameList.json故采用此方法
local SpecialName =
{
    [30316] = "平阳台炮玩法",
    [30317] = "灵溪台炮玩法",
    [30588] = "乌龙玩法"
}
function TeaHouseMainView:changeTableName(tableInfo)
    if TeaHouse.BridgeData.isShowMarkGame(tableInfo.gameid) then
        if tableInfo.gameid == 30316 or tableInfo.gameid == 30317 or tableInfo.gameid == 30588 then
            tableInfo.name = SpecialName[tableInfo.gameid] or ""
        else
            local markText = TeaHouse.BridgeData.getMarkTextByGameID(tableInfo.gameid)
            tableInfo.name = markText.gameName
        end
        return tableInfo
    end
    return tableInfo
end

function TeaHouseMainView:addPlayModeTableItem(playModeInfo)
    local playModeItem = nil
    if TeaHouse.getGameTypeByGameID(playModeInfo.nGameId) == "Mahjong" then
        playModeItem = TeaHouse.manager.viewManager:createView("TeaHouseTableItem.TeaHouseTableMahjongPlayModeItem", playModeInfo)
        self:addTableItem(TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE, playModeItem)
    else
        playModeItem = TeaHouse.manager.viewManager:createView("TeaHouseTableItem.TeaHouseTablePokerPlayModeItem", playModeInfo)
        self:addTableItem(TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE, playModeItem)
    end
    if playModeItem == nil then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local isVisible = teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES
    if not isVisible then
        isVisible = teahouseData:isOthersShow()
    end
    if isVisible then
        isVisible = not TeaHouse.manager.teaHouseFilter:isInFilter(playModeInfo.nGameId)
    end
    playModeItem:setVisible(isVisible)
    self._svTableList:addChild(playModeItem)
    local playerCount = clone(playModeInfo.anPlayerCount)
    table.sort(playerCount)
    playModeItem:updateState()
end

function TeaHouseMainView:addCreateTableItem()
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isOwner() or teahouseData:isAdmin() or teahouseData:checkSelfPower("CreateTable") then
        local createItem = TeaHouse.manager.viewManager:createView("TeaHouseTableItem.TeaHouseTableCreateItem")
        local teahouseData = TeaHouse.manager.teahouseData
        local isVisible = teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES
        if not isVisible then
            isVisible = teahouseData:isOthersShow()
        end
        createItem:setVisible(isVisible)
        self._svTableList:addChild(createItem)
        createItem:updateState()
        self:addTableItem(TeaHouseMainView.TABLE_ITEM_TYPE.CREATE, createItem)
    end
end

function TeaHouseMainView:addCreatePlayModeTableItem()
    local teahouseData = TeaHouse.manager.teahouseData
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if teahouseData:needShowCreateTable() and SetupConfig.IsOpenPlayMode then
        local createPlayModeItem = TeaHouse.manager.viewManager:createView("TeaHouseTableItem.TeaHouseTableCreatePlayModeItem")
        self._svTableList:addChild(createPlayModeItem)
        createPlayModeItem:updateState()
        self:addTableItem(TeaHouseMainView.TABLE_ITEM_TYPE.CREATE_PLAY_MODE, createPlayModeItem)
        self:removeCreateTableItem()
    end
end

function TeaHouseMainView:removeCreatePlayModeTableItem()
    for index, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE_PLAY_MODE then
            itemInfo.item:removeSelf()
            table.remove(self._itemInfos, index)
            self._itemCreatePlayModeNode = nil
            break
        end
    end
    if self._itemCreatePlayModeNode ~= nil then
        self._itemCreatePlayModeNode:removeSelf()
        self._itemCreatePlayModeNode = nil
    end
end

function TeaHouseMainView:updatePlayersTableItem(tableInfo)
    for index, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS then
            local info = itemInfo.item:getTableInfo()
            if info.tableid == tableInfo.tableid then
                itemInfo.item:updateState()
                break
            end
        end
    end
end

function TeaHouseMainView:removePlayersTableItem(tableInfo)
    for index, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS then
            local info = itemInfo.item:getTableInfo()
            if info.tableid == tableInfo.tableid then
                itemInfo.item:removeSelf()
                table.remove(self._itemInfos, index)
                self._itemPlayersNodes[info.tableid] = nil
                break
            end
        end
    end
    if self._itemPlayersNodes[tableInfo.tableid] ~= nil then
        self._itemPlayersNodes[tableInfo.tableid]:removeSelf()
        self._itemPlayersNodes[tableInfo.tableid] = nil
    end
end

function TeaHouseMainView:removePlayModeTableItem(playModeInfo)
    for index, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE then
            local info = itemInfo.item:getPlayModeInfo()
            if info.nPlayModeId == playModeInfo.nPlayModeId then
                itemInfo.item:removeSelf()
                table.remove(self._itemInfos, index)
                self._itemPlayModeNodes[info.nPlayModeId] = nil
                break
            end
        end
    end
    if self._itemPlayModeNodes[playModeInfo.nPlayModeId] ~= nil then
        self._itemPlayModeNodes[playModeInfo.nPlayModeId]:removeSelf()
        self._itemPlayModeNodes[playModeInfo.nPlayModeId] = nil
    end
end

function TeaHouseMainView:removeCreateTableItem()
    for index, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE then
            itemInfo.item:removeSelf()
            table.remove(self._itemInfos, index)
            self._itemCreateNode = nil
            break
        end
    end
    if self._itemCreateNode ~= nil then
        self._itemCreateNode:removeSelf()
        self._itemCreateNode = nil
    end
end

function TeaHouseMainView:sortTableItems()
    table.sort(self._itemInfos, function(itemInfo1, itemInfo2)
        local isPlayersItemInfo1 = itemInfo1.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS or itemInfo1.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS

        local isPlayersItemInfo2 = itemInfo2.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS or itemInfo2.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS

        local isPlayModeItemInfo1 = itemInfo1.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or itemInfo1.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE

        local isPlayModeItemInfo2 = itemInfo2.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or itemInfo2.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE

        if itemInfo1.type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE then
            return true
        end
        if itemInfo2.type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE then
            return false
        end

        local playModeGameID1
        local playModeGameID2
        if isPlayModeItemInfo1 and itemInfo1.item and itemInfo1.item._playModeInfo and GameNewTypeConfiger:getIsNewPlayTypGame(itemInfo1.item._playModeInfo.nGameId) then
            playModeGameID1 = itemInfo1.item._playModeInfo.nGameId
        end
        if isPlayModeItemInfo2 and itemInfo2.item and itemInfo2.item._playModeInfo and GameNewTypeConfiger:getIsNewPlayTypGame(itemInfo2.item._playModeInfo.nGameId) then
            playModeGameID2 = itemInfo2.item._playModeInfo.nGameId
        end
        if playModeGameID1 and playModeGameID2 then
            if playModeGameID1 == playModeGameID2 then
                return false
            else
                return GameNewTypeConfiger:getNewPlayTypeGameIndexByGameID(playModeGameID1) > GameNewTypeConfiger:getNewPlayTypeGameIndexByGameID(playModeGameID2)
            end
        end
        if playModeGameID1 then
            return true
        end
        if playModeGameID2 then
            return false
        end

        if itemInfo1.type == TeaHouseMainView.TABLE_ITEM_TYPE.ACT then
            return true
        end
        if itemInfo2.type == TeaHouseMainView.TABLE_ITEM_TYPE.ACT then
            return false
        end

        if itemInfo1.type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE_PLAY_MODE then
            return true
        end
        if itemInfo2.type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE_PLAY_MODE then
            return false
        end

        if isPlayersItemInfo1 and isPlayersItemInfo2 then
            local tableInfo1 = itemInfo1.item:getTableInfo()
            local tableInfo2 = itemInfo2.item:getTableInfo()
            local needPlayerCount1 = tableInfo1.size - tableInfo1.nPlayerCount
            local needPlayerCount2 = tableInfo2.size - tableInfo2.nPlayerCount
            if tableInfo1.state ~= tableInfo2.state then
                return tableInfo1.state < tableInfo2.state
            elseif needPlayerCount1 ~= needPlayerCount2 then
                return needPlayerCount1 < needPlayerCount2
            elseif tableInfo1.nPlayerCount ~= tableInfo2.nPlayerCount then
                return tableInfo1.nPlayerCount > tableInfo2.nPlayerCount
            elseif tableInfo1.createTime ~= tableInfo2.createTime then
                return tableInfo1.createTime > tableInfo2.createTime
            else
                return tableInfo1.tableid < tableInfo2.tableid
            end
        elseif isPlayersItemInfo1 and isPlayModeItemInfo2 then
            local tableInfo1 = itemInfo1.item:getTableInfo()
            return tableInfo1.state == 0
        elseif isPlayModeItemInfo1 and isPlayersItemInfo2 then
            local tableInfo2 = itemInfo2.item:getTableInfo()
            return tableInfo2.state ~= 0
        elseif isPlayModeItemInfo1 and isPlayModeItemInfo2 then
            local playModeInfo1 = itemInfo1.item:getPlayModeInfo()
            local playModeInfo2 = itemInfo2.item:getPlayModeInfo()
            return playModeInfo1.nPlayModeId < playModeInfo2.nPlayModeId
        end
    end)
end

function TeaHouseMainView:addTableItem(type, item)
    if type == TeaHouseMainView.TABLE_ITEM_TYPE.NONE or item == nil then
        return
    end
    if type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE then
        if self._itemCreateNode ~= nil then
            self:removeCreateTableItem()
        end
        self._itemCreateNode = item
    elseif type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS or
    type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS then
        local tableInfo = item:getTableInfo()
        if self._itemPlayersNodes[tableInfo.tableid] ~= nil then
            self:removePlayersTableItem(tableInfo)
        end
        self._itemPlayersNodes[tableInfo.tableid] = item
    elseif type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or
    type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE then
        local playModeInfo = item:getPlayModeInfo()
        if self._itemPlayModeNodes[playModeInfo.nPlayModeId] ~= nil then
            self:removePlayModeTableItem(playModeInfo)
        end
        self._itemPlayModeNodes[playModeInfo.nPlayModeId] = item
    elseif type == TeaHouseMainView.TABLE_ITEM_TYPE.CREATE_PLAY_MODE then
        if self._itemCreatePlayModeNode ~= nil then
            self:removeCreatePlayModeTableItem()
        end
        self._itemCreatePlayModeNode = item
    end
    self._itemInfos[#self._itemInfos + 1] = { type = type, item = item }
end

function TeaHouseMainView:adjustTablesPostion()
    local originHeight = self._tableListSize.height - self._itemOriginPos.y
    local height = originHeight
    local itemInfos = {}
    for i = 1, #self._itemInfos do
        local itemInfo = self._itemInfos[i]
        if itemInfo.item:isVisible() then
            local index = #itemInfos + 1
            itemInfos[index] = itemInfo
            if index % KW_MAX_COL_NUM == 1 then
                height = height + itemInfo.item:getSize().height
            end
        end
    end
    local innerPos = self._svTableList:getInnerContainerPosition()
    local innerSize = self._svTableList:getInnerContainerSize()
    local innerOffset = innerSize.height + innerPos.y
    if self._svTableList then
        if height < self._tableListSize.height then
            height = self._tableListSize.height
            self._svTableList:setInnerContainerSize(self._tableListSize)
        elseif height > self._tableListSize.height then
            self._svTableList:setInnerContainerSize(cc.size(self._tableListSize.width, height))
        end
    end
    self._svTableList:setInnerContainerPosition(cc.p(innerPos.x, innerOffset - height))
    self._itemOffsetPos = cc.p(self._itemOriginPos.x, height - originHeight)
    for i = 1, #itemInfos do
        local itemInfo = itemInfos[i]
        itemInfo.item:setPosition(self._itemOffsetPos)
        if i % KW_MAX_COL_NUM == 0 then
            self._itemOffsetPos.x = self._itemOriginPos.x
            self._itemOffsetPos.y = self._itemOffsetPos.y - itemInfo.item:getSize().height
        else
            self._itemOffsetPos.x = self._itemOffsetPos.x + itemInfo.item:getSize().width
        end
    end
end

function TeaHouseMainView:addPlayerInfo(areaID, numID)
    local teahouseData = TeaHouse.manager.teahouseData
    local playerInfo = teahouseData:getPlayerInfo(areaID, numID)
    if playerInfo == nil or playerInfo.tableid <= 0 or playerInfo.seat < 0 then
        return
    end
    local tableInfo = teahouseData:getTableInfoByID(playerInfo.tableid)
    if tableInfo == nil or not teahouseData:checkTableState(tableInfo) then
        return
    end
    local item = self._itemPlayersNodes[tableInfo.tableid]
    if item == nil then
        return
    end
    item:addPlayerInfo(playerInfo)
end

function TeaHouseMainView:removePlayerInfo(areaID, numID)
    local teahouseData = TeaHouse.manager.teahouseData
    local playerInfo = teahouseData:getPlayerInfo(areaID, numID)
    if playerInfo == nil or playerInfo.tableid <= 0 or playerInfo.seat < 0 then
        return
    end
    local tableInfo = teahouseData:getTableInfoByID(playerInfo.tableid)
    if tableInfo == nil or not teahouseData:checkTableState(tableInfo) then
        return
    end
    local item = self._itemPlayersNodes[tableInfo.tableid]
    if item == nil then
        return
    end
    item:removePlayerInfo(playerInfo)
end

function TeaHouseMainView:openTeaHouseSetupView()
    local teahouseData = TeaHouse.manager.teahouseData
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if SetupConfig.IsOpenNewTeahouseSetupView then
        TeaHouse.manager.viewManager:openView("TeaHouseSetupViewNew", 0, {
            nTeaNumber = teahouseData:getTeaNumber(),
            szData = teahouseData:getTeaHouseNameExt(),
            isOwner = teahouseData:isOwner(),
            momentLevel = teahouseData:getTeaHouseLevel(),
            useBuyedProp = teahouseData:getUseBuyedProp(),
        })
    else
        TeaHouse.manager.viewManager:openView("TeaHouseSetupView", 0, {
            nTeaNumber = teahouseData:getTeaNumber(),
            szData = teahouseData:getTeaHouseNameExt(),
            isOwner = teahouseData:isOwner(),
            momentLevel = teahouseData:getTeaHouseLevel()
        })
    end
end

function TeaHouseMainView:copyTeaHousePwd()
    local teaHousePwd = string.format("%06d", TeaHouse.manager.teahouseData:getTeaHousePwd())
    TeaHouse.SysTool.copyClipboard("比赛场口令：" .. teaHousePwd)
    TeaHouse.TipTool.showToast("成功复制比赛场号")
end

function TeaHouseMainView:onLevelUpClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local condition  = TeaHouse.manager.teahouseData:getUpTeaLevelActNum() or 15000 --升级比赛场的默认数值
    local activeValue = tonumber(TeaHouse.manager.teahouseData:getTeaActiveValue())
    local tipMsg = string.format("您当前活跃值%s，\n达到%s活跃度即可升级比赛场，是否升级？",activeValue,condition)
    local info = {}
    info.type = XH.TIP_LAYER_TYPE.OK_CANCEL
    info.funcOK  = function()
        if activeValue >= condition then
            TeaHouse.manager.teahouseMain:reqUpgradeTeaHouse(TeaHouse.manager.teahouseData:getTeaNumber())
        else
            TeaHouse.TipTool.showToast("TEAHOUSE_ACTIVE_VALUE_NOT_ENOUGH")
        end
    end
    TeaHouse.TipTool.showTip(info,tipMsg)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_102)
end

function TeaHouseMainView:onOpenOwerShop(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.BridgeUI.openShopView()
end

function TeaHouseMainView:onOpenFuLiIcon(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.BridgeUI.openTabsActivityView()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_8)
end

function TeaHouseMainView:onLevelUpSuccess(event)
    if self._btnLevelUp then
        self._btnLevelUp:setVisible(false)
    end
    TeaHouse.TipTool.showToast("TEAHOUSE_LEVELUP_SUCCESS")
end

function TeaHouseMainView:updateFilter()
    for index, itemInfo in ipairs(self._itemInfos) do
        if itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAYERS or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAYERS then
            local info = itemInfo.item:getTableInfo()
            itemInfo.item:setVisible(not TeaHouse.manager.teaHouseFilter:isInFilter(info.gameid))
        elseif itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.MAHJONG_PLAY_MODE or
        itemInfo.type == TeaHouseMainView.TABLE_ITEM_TYPE.POKER_PLAY_MODE then
            local info = itemInfo.item:getPlayModeInfo()
            itemInfo.item:setVisible(not TeaHouse.manager.teaHouseFilter:isInFilter(info.nGameId))
        end
    end
    self:adjustTablesPostion()
end

function TeaHouseMainView:onFuncListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._panelFuncListBg:setVisible(not self._panelFuncList:isVisible())
    self._panelFuncList:setVisible(not self._panelFuncList:isVisible())
    self:showTeaHouseArrowUpAni(self._funcListAniNode,self._panelFuncList:isVisible())
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_53)
end

--显示可选的功能列表
function TeaHouseMainView:updateFuncListIcon()
    -- 检查当前地区是否有功能
    local funcList = {}
    if TeaHouse.BridgeData.isRemodelArea() and TeaHouse.manager.teahouseData:isOwner()
        and TeaHouse.manager.teahouseData:getTeaHouseLevel() ~= TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.JUNIOR then
        table.insert(funcList,EXTEND_FUNC_LIST.UPGRADE)
    end
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig and SwitchConfig.PlayFilter == 1 then
        table.insert(funcList,EXTEND_FUNC_LIST.FILTER)
    end
    table.insert(funcList,EXTEND_FUNC_LIST.CUSSERVICE)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isOwner() then
        table.insert(funcList,EXTEND_FUNC_LIST.FAQ)
    end
    self._btnFuncListIcon:setVisible(#funcList > 0)
    if #funcList > 0 then
        self._panelFuncList:setScrollBarEnabled(false)
        self:updateFuncListContent(funcList)
        self:showTeaHouseArrowUpAni(self._funcListAniNode,false)
    end
end

function TeaHouseMainView:updateFuncListContent(funcList)
    if next(funcList) then
        for i = 1,#funcList do
            local item = self._funcNodeItem:clone()
            item:setName(funcList[i].img)
            local height = item:getContentSize().height
            local listSize = self._panelFuncList:getContentSize()
            self._panelFuncList:setContentSize(cc.size(listSize.width,listSize.height+height))
            local bgSize = self._panelFuncListBg:getContentSize()
            self._panelFuncListBg:setContentSize(cc.size(bgSize.width,bgSize.height+height))
            self._panelFuncList:addChild(item)
            item:loadTexture(funcList[i].img,ccui.TextureResType.plistType)
            if funcList[i].events then
                item:addTouchEventListener(handler(self, self[funcList[i].events]))
            end
            if i == #funcList then
                local line = item:getChildByName("KW_NODE_LINE")
                if line then
                    line:setVisible(false)
                end
            end
        end
    end
end

function TeaHouseMainView:showTeaHouseArrowUpAni(node,isClose)
    node:removeAllChildren()
    local dargonBonesInfo = {
        path = "animation/Lobby/Base/teahouse_arrow/arrow_up/",
        ske = "ios_jiantou_zx2_ske.json",
        tex = "ios_jiantou_zx2_tex.json",
        armatureName = "Armature",
        dragonBonesName = "ios_jiantou_zx2",
        animationName =  isClose and "xia" or "shang"
    }
    local dargonBones = display.playDargonBonesAnimByTimes(dargonBonesInfo, 0)
    if not dargonBones then
        return
    end
    node:addChild(dargonBones)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
end

function TeaHouseMainView:onActListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._panelActListBg:setVisible(not self._panelActList:isVisible())
    self._panelActList:setVisible(not self._panelActList:isVisible())
    self._panelActList2:setVisible(not self._panelActList:isVisible())
    self:showTeaHouseArrowRightAni(self._actListAniNode,self._panelActList:isVisible())
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_48)
end

function TeaHouseMainView:showTeaHouseArrowRightAni(node,isClose)
    node:removeAllChildren()
    local dargonBonesInfo = {
        path = "animation/Lobby/Base/teahouse_arrow/arrow_right/",
        ske = "ios_jiantou_zx_ske.json",
        tex = "ios_jiantou_zx_tex.json",
        armatureName = "Armature",
        dragonBonesName = "ios_jiantou_zx",
        animationName = isClose and "shou" or "zhankai"
    }
    local dargonBones = display.playDargonBonesAnimByTimes(dargonBonesInfo, 0)
    if not dargonBones then
        return
    end
    node:addChild(dargonBones)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
end

function TeaHouseMainView:addActivityIconToList(iconID,clickCallback)
    if iconID then
        local isAlReadyAdd
        local isHasLuckTask
        for i =1,#self._actIconList do
            if iconID == self._actIconList[i] then
                isAlReadyAdd = true
            end
            -- if self._actIconList[i] == TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TASK_STA then
            --     isHasLuckTask = true
            -- end
        end
        -- 先默认推入幸运任务
        -- if self._removeLuckTask == nil and isHasLuckTask == nil and iconID ~= TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TASK_STA then
        --     self:addActivityIcon(TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TASK_STA,self.showLuckyTask)
        -- end
        if not isAlReadyAdd then
            self:addActivityIcon(iconID, clickCallback)
        end
    end
    self:flushActRedP()
end

function TeaHouseMainView:addActivityIcon(iconID, clickCallback)
    table.insert(self._actIconList,iconID)
    if #self._actIconList > 0 then
        self._btnActListIcon:setVisible(true)
        self._panelActList:setScrollBarEnabled(false)
        self:showTeaHouseArrowRightAni(self._actListAniNode, false)
        local iocnItem = TeaHouse.BridgeUI.getMenuIcon().createIcon(iconID)
        local iconInfo = iocnItem:getIconInfo(iconID)
        local width = iocnItem:getContentSize().width
        iocnItem:setScale(iconInfo.teaScale or iconInfo.iconSize or self._teaHouseActIconScale)
        iocnItem:setTag(iconID)
        iocnItem:addTouchEventListener(handler(self, clickCallback))
        local listSize = self._panelActList:getContentSize()
        self._panelActList:setContentSize(cc.size(listSize.width + width,listSize.height))
        local bgSize = self._panelActListBg:getContentSize()
        self._panelActListBg:setContentSize(cc.size(bgSize.width + width,bgSize.height))
        self._panelActList:addChild(iocnItem)
    end
    if #self._actIconList > 2 then
        --缩进去
        self._panelActListBg:setVisible(false)
        self._panelActList:setVisible(false)
        self._panelActList2:setVisible(true)
    else
        self._btnActListIcon:setVisible(false)
        self._panelActList2:setVisible(true)
    end
    self:updateActList2()
end

function TeaHouseMainView:removeActivityIconToList(iconID)
    if iconID and #self._actIconList > 0 then
        for i = #self._actIconList,1,-1 do
            if iconID == self._actIconList[i] then
                table.remove(self._actIconList,i)
                if #self._actIconList > 0 then
                    local iocnItem =  self._panelActList:getChildByTag(iconID)
                    local width = iocnItem:getContentSize().width
                    local listSize = self._panelActList:getContentSize()
                    self._panelActList:setContentSize(cc.size(listSize.width - width,listSize.height))
                    local bgSize = self._panelActListBg:getContentSize()
                    self._panelActListBg:setContentSize(cc.size(bgSize.width - width,bgSize.height))
                    self._panelActList:removeChild(iocnItem)
                else
                    self._btnActListIcon:setVisible(false)
                end
                break
            end
        end
    end
    self:updateActList2()
    self:flushActRedP()
end

function TeaHouseMainView:updateActList2()
    self._panelActList2:removeAllChildren()
    local listSize = self._panelActList2:getContentSize()
    self._panelActList2:setContentSize(cc.size(40,listSize.height))
    self._panelActList2:setScrollBarEnabled(false)
    actIconList = clone(self._actIconList)
    local showCount = #self._actIconList
    if showCount > 2 then 
        showCount = 1 
        self._panelActList2:setPositionX(172)
        for i =1,#self._actIconList do
            if self._actIconList[i] == TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_MISSION then
                actIconList = {self._actIconList[i]}
            end
        end
    else
        self._panelActList2:setPositionX(26)
    end

    if showCount > 0 then
        for i = 1,showCount do
            local iconID = actIconList[i]
            local iocnItem = TeaHouse.BridgeUI.getMenuIcon().createIcon(iconID)
            local iconInfo = iocnItem:getIconInfo(iconID)
            local width = iocnItem:getContentSize().width * self._teaHouseActIconScale
            iocnItem:setScale(iconInfo.teaScale or iconInfo.iconSize or self._teaHouseActIconScale)
            iocnItem:setTag(iconID)
            local listSize = self._panelActList2:getContentSize()
            self._panelActList2:setContentSize(cc.size(listSize.width + width,listSize.height))
            self._panelActList2:addChild(iocnItem)
            if iconID == TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TASK_STA then
                iocnItem:addTouchEventListener(handler(self, self.showLuckyTask))
                self:setIconRedPoint2(iconID, XH.lobby:getModule("LuckyTask"):isHaveAward())
            elseif iconID == TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_MISSION then
                iocnItem:addTouchEventListener(handler(self, self.onOpenLuckyMission))
                self:setIconRedPoint2(iconID, XH.lobby:getModule("LuckyMission"):isShowRedPointList())
            elseif iconID == TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW then
                iocnItem:addTouchEventListener(handler(self, self.onOpenRecallNew))
                self:setIconRedPoint2(iconID, XH.lobby:getModule("RecallNew"):isShowRedPointList())
            elseif iconID == TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW_TEAM then
                iocnItem:addTouchEventListener(handler(self, self.onOpenRecallTeam))
                self:setIconRedPoint2(iconID, XH.lobby:getModule("RecallTeam"):isExistRedPoint())
            elseif iconID == TeaHouse.BridgeUI.getIconConfig().ICON_ID.TEA_HOUSE_BATCH_INVITE then
                iocnItem:addTouchEventListener(handler(self, self.onOpenInvitePlayerActivity))
            elseif iconID == TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TURN_TABLE then
                iocnItem:addTouchEventListener(handler(self, self.onOpenLuckyTable))
            elseif iconID == TeaHouse.BridgeUI.getIconConfig().ICON_ID.TE_HUI_SHANG_CHENG then
                iocnItem:addTouchEventListener(handler(self, self.onPersonalGiftPackClicked))
            end
        end
    end
end

function TeaHouseMainView:flushActRedP()
    local isShowRed = false
    for i =1,#self._actIconList do
        if self._actIconList[i] == TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TASK_STA then
            isShowRed = isShowRed or XH.lobby:getModule("LuckyTask"):isHaveAward()
        elseif self._actIconList[i] == TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_MISSION then
            isShowRed = isShowRed or XH.lobby:getModule("LuckyMission"):isShowRedPointList()
        elseif self._actIconList[i] == TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW then
            isShowRed = isShowRed or XH.lobby:getModule("RecallNew"):isShowRedPointList()
        elseif self._actIconList[i] == TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW_TEAM then
            isShowRed = isShowRed or XH.lobby:getModule("RecallTeam"):isExistRedPoint()
        end
    end
    self._imgActRedP:setVisible(isShowRed)
end

function TeaHouseMainView:initActivitiyList()
    --人人比赛场地区
    if TeaHouse.BridgeData:isRemodelArea() then
        self:initLuckyTableIcon()
    end
    local teahouseData = TeaHouse.manager.teahouseData

    self:initLuckyTaskIcon()
    self:initSpfectActIcon()
end

function TeaHouseMainView:onPersonalGiftPackInfo(event)
    local confData = event.msg.configData or {}
    if #confData > 0 then
        self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.TE_HUI_SHANG_CHENG, self.onPersonalGiftPackClicked)
    else
        self:removeActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.TE_HUI_SHANG_CHENG)
    end
end

function TeaHouseMainView:onLuckyTurnTableActInfo(event)
    local canDraw = false
    if event and event.data and event.data.leftDraw and event.data.leftDraw > 0 then
        canDraw = true
    end
    if canDraw and self._btnNewPlayTypeDraw1 then
        TeaHouse.BridgeUI.setVisible(self._btnNewPlayTypeDraw1, "KW_TIPS", canDraw)
        XH.SysTool.createShakeAni(self._btnNewPlayTypeDraw1)
    else
        TeaHouse.BridgeUI.setVisible(self._btnNewPlayTypeDraw1, "KW_TIPS", false)
    end
end

function TeaHouseMainView:initLuckyTableIcon()
    if TeaHouse.LOBBY_ID.HUZHOU == TeaHouse.BridgeData.getLobbyID() then
        self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TURN_TABLE,self.onOpenLuckyTable)
    elseif TeaHouse.LOBBY_ID.TAIZHOU == TeaHouse.BridgeData.getLobbyID() then
        if XH.lobby:getModule("LuckyTurnTableAct"):hasWhiteAct() then
            self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_TURN_TABLE,self.onOpenLuckyTable)
        end
    end
end

function TeaHouseMainView:onUpgradeTableClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local localConfig = TeaHouse.manager.configManager.remodelConfig._creatCondition
    local nUnLockActiveValue = localConfig[TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR].tUpgradeTableCount
    TeaHouse.manager.teahouseMain:doUnLockTableNumber(nUnLockActiveValue,nil,true)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_100)
end

function TeaHouseMainView:onPersonalGiftPackClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType,self._teaHouseActIconScale)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.BridgeUI.openPersonalGiftPackView(send:getTouchBeganPosition())
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PersonalGiftPackIcon,{userid = TeaHouse.BridgeData.getNumberID(),sence = "TeaHouse"})
end

function TeaHouseMainView:onOpenLuckyTable(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType,self._teaHouseActIconScale)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.BridgeUI.openLuckyTurnTableAct()
end

function TeaHouseMainView:setIconRedPoint(icon, nShow)
    --TeaHouse.BridgeUI.getMenuIcon().setRedPointVisible(icon, nShow)
    if not icon then
        return
    end

    local result = self:getActIcon(icon)
    if not result then
        return
    end

    if nShow then
        result:showRedPoint()
    else
        result:hideRedPoint()
    end
end

function TeaHouseMainView:setIconRedPoint(iconID, nShow)
    --TeaHouse.BridgeUI.getMenuIcon().setRedPointVisible(icon, nShow)
    if not iconID then
        return
    end

    local result = self:getActIcon(iconID)
    if not result then
        return
    end

    if nShow then
        result:showRedPoint()
    else
        result:hideRedPoint()
    end
end

function TeaHouseMainView:setIconTipText(iconID, tipText, tipDelay)
    local menuIcon = self:getActIcon(iconID)
    if not menuIcon then
        return
    end
    menuIcon:showTipText(TeaHouse.BridgeUI.getIconConfig().ICON_TIP_TEXT_TYPE.BOTTOM,tipText, tipDelay)
end

function TeaHouseMainView:getActIcon(icon)
    local childList = self._panelActList:getChildren()
    if childList then
        for _, iconBtn in pairs(childList) do
            if iconBtn:getTag() == icon then
                return iconBtn
            end
        end
    end
end

function TeaHouseMainView:setIconRedPoint2(iconID, nShow)
    local result = self:getActIcon2(iconID)
    if result then
        if nShow then
            result:showRedPoint()
        else
            result:hideRedPoint()
        end
    end
end

function TeaHouseMainView:getActIcon2(icon)
    local childList = self._panelActList2:getChildren()
    if childList then
        for _, iconBtn in pairs(childList) do
            if iconBtn:getTag() == icon then
                return iconBtn
            end
        end
    end
    return nil
end

function TeaHouseMainView:onOpenInvitePlayerActivity(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseBatchInviteView")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_96)
end

function TeaHouseMainView:onShowInvitePlayerIcon(event)
    -- 检查当天的强制弹出次数是否满足条件
    if event.show then
        local guideLayerState = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_FIRST_CREATE_TEA_HOUSE)
        if TeaHouse.manager.teahouseMain:isNeedPopInviteActivityView() 
        and guideLayerState == 2 then
            TeaHouse.manager.viewManager:openView("TeaHouseBatchInviteView")
            self:onActListClicked(self._btnActList,ccui.TouchEventType.ended)
        end
        self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.TEA_HOUSE_BATCH_INVITE, self.onOpenInvitePlayerActivity)
    else
        self:removeActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.TEA_HOUSE_BATCH_INVITE)
    end
end

function TeaHouseMainView:onComplainClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_COMPLAIN_SUBMIT, true)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_COMPLAIN_TIPS, true)
    if self._ComplainRedPoint then
        self._ComplainRedPoint:setVisible(false)
    end
    if self._ComplainTips then
        self._ComplainTips:stopAllActions()
        self._ComplainTips:setVisible(false)
    end
    TeaHouse.manager.viewManager:openView("TeaHouseComplainView")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_79)
end

function TeaHouseMainView:onComplainActShow()
    local tmpData = TeaHouse.BridgeData.getComplainData()
    if tmpData and tmpData.show == "true" then
        if self._btnComplain then
            self._btnComplain:setVisible(true)
        end
        if self._ComplainRedPoint and not XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_COMPLAIN_SUBMIT, false) then
            self._ComplainRedPoint:setVisible(true)
        end
        if self._ComplainTips then
            self._ComplainTips:setVisible(true)
            self:showComplainTips(tmpData.text)
        end
    else
        if self._btnComplain then
            self._btnComplain:setVisible(false)
        end
        if self._ComplainTips then
            self._ComplainTips:setVisible(false)
        end
    end
end

function TeaHouseMainView:onOpenTeaCardLimt()
    self._hasOpenCardLimt = true
    self:updatePropCount()
end

function TeaHouseMainView:showComplainTips(tipStr)
    if not self._ComplainTipsContent or not self._ComplainTips or not tipStr or tipStr == "" then
        return
    end
    self._ComplainTipsContent:setString(tipStr)
    local whiteLen = 40
    local originSize = self._ComplainTips:getContentSize()
    local textSize = self._ComplainTipsContent:getContentSize()
    self._ComplainTips:setContentSize( textSize.width + whiteLen,originSize.height)
    if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_COMPLAIN_TIPS, false) then
        self._ComplainTips:setVisible(false)
    end
end


function TeaHouseMainView:onCusServiceCliicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.showCusServiceView("QYQDETAILS")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_82)
end

function TeaHouseMainView:onFAQClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseFAQView")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_83)
end

function TeaHouseMainView:onMoreClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(ccui.Helper:seekWidgetByName(send, "_KW_IMG_MORE"), eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local moreBg = ccui.Helper:seekWidgetByName(send, "_KW_IMG_MORE_BG")
    if not moreBg then
        return
    end
    moreBg:setVisible(not moreBg:isVisible())
    if moreBg:isVisible() then
        self:initMoreBtns(moreBg)
    end
end

function TeaHouseMainView:initMoreBtns(moreBg)
    if not moreBg then
        return
    end
    moreBg:removeAllChildren()
    local moreBtns = {"_shareNodeItem"}
    local initialLenth = 112 + 64   -- 上方留白+下方留白
    local bgSize = cc.size(130, 397)
    local startPosY = 64
    local whiteLenth = 20
    local btnsLenth = 0
    local bgLenth = 0
    if TeaHouse.BridgeData.isRemodelArea() then
        local teahouseData = TeaHouse.manager.teahouseData
        if teahouseData:isOwner() or teahouseData:isAdmin() then
            table.insert(moreBtns, "_logNodeItem")
        end
    end
    for i = 1, #moreBtns do
        local btn = self[moreBtns[i]]:clone()
        btn:setPositionX(bgSize.width / 2)
        btn:setPositionY(startPosY + btnsLenth + (i - 1) * whiteLenth)
        btnsLenth = btnsLenth + btn:getContentSize().height
        if i == 1 then
            TeaHouse.BridgeUI.setVisible(btn, "KW_NODE_LINE", false)
        end
        moreBg:addChild(btn)
    end
    moreBg:setContentSize(bgSize.width, (#moreBtns - 1) * whiteLenth + initialLenth + btnsLenth)
end

function TeaHouseMainView:onLogClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    send:getParent():setVisible(false)
    TeaHouse.manager.teahouseMain:reqTeaHouseOperationLog()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_AUTO_ADD_LOG)
end

function TeaHouseMainView:onLackCardNotify(event)
    if not self._textPropCount or not self._btnRecharge2 then
        return
    end
    self._btnRecharge2:stopAllActions()
    if event.show then
        self._btnRecharge2:runAction(cc.Repeat:create(cc.Sequence:create(cc.DelayTime:create(2), cc.RotateTo:create(0.03, 10), cc.RotateTo:create(0.06, -10), cc.RotateTo:create(0.06, 10), cc.RotateTo:create(0.03, 0)), 5))
        self._textPropCount:setTextColor(cc.c3b(255, 0, 0))
    else
        self._textPropCount:setTextColor(cc.c3b(250, 207, 156))
    end
end

function TeaHouseMainView:addGuideLayer()
    local nodeList = {
        self._btnMember2,
        self._btnBill2,
        -- self._btnSetting,
        self._btnFuncList,
    }
    local tipType = {
        { showType = "top", text = "点击添加成员、修改房卡、管理成员" },
        { showType = "topright", text = "点击处理成员战绩、查看回放等" },
        -- { showType = "topright", text = "点击修改消耗模式与固定玩法" },
        { showType = "right", text = "其他疑问，可点击联系人工客服" },
    }
    if not self._panelGuide:isVisible() then
        local teaHouseGuideTipItem = TeaHouse.manager.viewManager:createView("TeaHouseGuideTipItem.TeaHouseGuideTipItem")
        local tempNo = 1
        local node = nodeList[tempNo]
        local xPos = node:getPositionX()
        local yPos = node:getPositionY()
        local worldPos = node:getParent():convertToWorldSpace(cc.p(xPos, yPos))
        worldPos = self._panelGuide:convertToNodeSpace(worldPos)
        local size = node:getContentSize()
        cc.SpriteFrameCache:getInstance():addSpriteFrames("TeaHouse/Image/teahouse_guide.plist")
        -- 生成一个遮罩ClippingNode
        local uiClippingNode = cc.ClippingNode:create()
        uiClippingNode:setInverted(true)
        -- 是否裁剪模板之外的内容
        uiClippingNode:setAlphaThreshold(0.5)
        -- 设置阿发值
        -- 生成模板
        local clippingMask = cc.Sprite:create()
        clippingMask:setSpriteFrame("teahouse_guide_BG.png")
        clippingMask:setPosition(worldPos)
        clippingMask:setScaleX(size.width / 100)
        clippingMask:setScaleY(size.height / 100)
        clippingMask:setAnchorPoint(cc.p(0.5, 0.5))
        -- 设置模板
        uiClippingNode:setStencil(clippingMask)
        -- 生成背景
        local layerNode = cc.Sprite:create()
        layerNode:setSpriteFrame("teahouse_guide_BG.png")
        layerNode:setPosition(self._panelGuide:getContentSize().width/2, self._panelGuide:getContentSize().height/2)
        layerNode:setScaleX(30)
        layerNode:setScaleY(20)
        uiClippingNode:addChild(layerNode)
        self._panelGuide:addChild(uiClippingNode)
        self._panelGuide:addChild(teaHouseGuideTipItem)
        teaHouseGuideTipItem:setPosition(worldPos)
        teaHouseGuideTipItem:updata(tipType[tempNo].showType, tipType[tempNo].text)
        self._panelGuide:setVisible(true)
        self._panelGuide:addTouchEventListener( function(send, event)
            if event ~= ccui.TouchEventType.ended then
                return
            end
            tempNo = tempNo + 1
            node = nodeList[tempNo]
            if node then
                xPos = node:getPositionX()
                yPos = node:getPositionY()
                worldPos = node:getParent():convertToWorldSpace(cc.p(xPos, yPos))
                worldPos = self._panelGuide:convertToNodeSpace(worldPos)
                size = node:getContentSize()
                clippingMask:setPosition(worldPos)
                clippingMask:setScaleX(size.width / 100)
                clippingMask:setScaleY(size.height / 100)
                teaHouseGuideTipItem:setPosition(worldPos)
                teaHouseGuideTipItem:updata(tipType[tempNo].showType, tipType[tempNo].text)
            else
                TeaHouse.manager.teahouseMain:showSetupTip()
                self._panelGuide:setVisible(false)
                TeaHouse.manager.teaHouseGuide:endCreateTeaHouseGuide()
            end
        end )
    end
end

function TeaHouseMainView:addNewJoinGuideTip(event)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isOwner() then
        self._btnMember2:removeChildByName("KW_GUIDE_ITEM")
        if teahouseData:getAskPowerCount() > 0 and event.data then
            local teaHouseGuideTipItem = TeaHouse.manager.viewManager:createView("TeaHouseGuideTipItem.TeaHouseGuideTipItem")
            self._btnMember2:addChild(teaHouseGuideTipItem)
            teaHouseGuideTipItem:updata("top","有新成员加入，去处理",3)
            teaHouseGuideTipItem:setName("KW_GUIDE_ITEM")
            teaHouseGuideTipItem:setPosition(cc.p(self._btnMember2:getContentSize().width /2,self._btnMember2:getContentSize().height/2))
        end
    end
end

function TeaHouseMainView:onReqGuideAwardInviteAct()
    TeaHouse.manager.teahouseMain:onReqTeaInviteActivityStatus()
end

function TeaHouseMainView:onShowGuideAwardTip()  
    --5秒气泡提示框展示
    self:runAction(cc.Sequence:create(cc.CallFunc:create(self.showGuideAwardTip),cc.DelayTime:create(5), cc.CallFunc:create(self.hideGuideAwardTip)))
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_SETMODULE_GUIDE_AWARD,false)
end

function TeaHouseMainView:showGuideAwardTip()
    self._guideAwardTip:setVisible(true)
end

function TeaHouseMainView:hideGuideAwardTip()
    self._guideAwardTip:setVisible(false)
end

function TeaHouseMainView:onAutoCreateGuideClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._autoCreateGuide:removeAllChildren()
    self._autoCreateGuide:setVisible(false)
end

function TeaHouseMainView:addAutoCreateTableGuide()
    if not self._autoCreateGuide then
        return
    end
    if not self._autoCreateGuide:isVisible() then
        for _, node in pairs(self._itemPlayModeNodes) do
            local stModeInfo = TeaHouse.manager.teahouseSetup:getPlayModeList()
            local vInfo = node:getPlayModeInfo()
            for _, info in pairs(stModeInfo) do
                if vInfo.nPlayModeId == info.nPlayModeId and info.aPlayModeType and info.aPlayModeType == 1 then
                    self:showGuide(node, "left", "我知道了")
                    return
                end
            end
        end
    end
end

function TeaHouseMainView:showGuide(node, showType, showText)
    if not node then
        return
    end
    local teaHouseGuideTipItem = TeaHouse.manager.viewManager:createView("TeaHouseGuideTipItem.TeaHouseGuideTipItem")
    local xPos, yPos = node:getPosition()
    local worldPos = node:getParent():convertToWorldSpace(cc.p(xPos, yPos))
    worldPos = self._autoCreateGuide:convertToNodeSpace(worldPos)
    local size = node:getSize()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("TeaHouse/Image/teahouse_guide.plist")
    -- 生成一个遮罩ClippingNode
    local uiClippingNode = cc.ClippingNode:create()
    uiClippingNode:setInverted(true)
    -- 是否裁剪模板之外的内容
    uiClippingNode:setAlphaThreshold(0.5)
    -- 生成模板
    local clippingMask = cc.Sprite:create()
    clippingMask:setSpriteFrame("teahouse_guide_BG.png")
    clippingMask:setContentSize(size.width, size.height)
    clippingMask:setAnchorPoint(cc.p(0, 1))
    clippingMask:setPosition(worldPos.x + 20, worldPos.y + 50)
    -- 设置模板
    uiClippingNode:setStencil(clippingMask)
    local floor = cc.LayerColor:create(cc.c4b(0,0,0,150)) 
    uiClippingNode:addChild(floor)
    self._autoCreateGuide:addChild(uiClippingNode)
    self._autoCreateGuide:addChild(teaHouseGuideTipItem)
    teaHouseGuideTipItem:setPosition(worldPos.x + size.width + 20, worldPos.y - size.height + 100)
    if showType and showText then
        teaHouseGuideTipItem:updata(showType, showText)
    end
    self._autoCreateGuide:setVisible(true)
end

function TeaHouseMainView:initPromoteIcon()
    self._btnPromote:setVisible(false)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData == nil then
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PROMOTE_LAST_TEAID, teahouseData:getTeaHousePwd())  
    local teahouseInfo = TeaHouse.getPendTeahouseInfo(teahouseData:getTeaNumber())
    if not teahouseInfo or not teahouseInfo.nTeaOwnerNumid then
        -- 新增的比赛场外部没刷新
        teahouseInfo = teahouseData:getTeaHouseInfoByID(teahouseData:getTeaNumber())
        if not teahouseInfo or not teahouseInfo.nTeaOwnerNumid then
            return
        else
            TeaHouse.flushLobbyTeaHouseList()
        end
    end
    -- 跑马灯
    if TeaHouse.checkIsPromote2Open() then
        TeaHouse.setPromoteIcon(self, self._btnPromote)
    end
end


function TeaHouseMainView:openPromoteView()
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData == nil then
        return
    end
    local teahouseInfo = TeaHouse.getPendTeahouseInfo(teahouseData:getTeaNumber())
    if not teahouseInfo or not teahouseInfo.nTeaOwnerNumid then
        return
    end
    local posX, posY = self._btnPromote:getPosition()
    local worldPos = self._btnPromote:getParent():convertToWorldSpace(cc.p(posX,posY))
    TeaHouse.showPromoteView(teahouseData:isAdmin(),teahouseData:isOwner(),teahouseData:getTeaNumber(),teahouseInfo.nTeaOwnerNumid,worldPos)
end

function TeaHouseMainView:onPromoteClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:openPromoteView()
    -- 活动_圈主/玩家_2/3人_icon点击（从比赛场打开 2/3人 推广弹窗时上报）
    local isOwner = TeaHouse.manager.teahouseData:isOwner()
    if isOwner then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgqz032002, {})
    else
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.wftgwj032007, {})
    end
end

function TeaHouseMainView:onDouble12Clicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("Double12View", nil, {page = "比赛场大厅"})
    XH.NewThrowDataManager:throwData("cc2025112102", {page = "比赛场大厅"})
end

function TeaHouseMainView:onCardModeClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseCardModeTransferView")
end

function TeaHouseMainView:onRRBYClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = {
        block_label = "人人捕鱼"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lianyun2024021802, data)
    if XH.lobby:getModule("RRBuYu"):isDownloading() then 
        XH.TipTool.showToast("正在加载中，请稍等...", 3)
        return
    end
    local enterRRBY = function()
        if device.platform == "android" then
            XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
            XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
        elseif device.platform == "ios" then
            XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
        end
    end
    local position = TeaHouse.BridgeData.getPlayerPosition()
    if position.gameID ~= 0 then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lianyun2024021803, data)
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lianyun2024021804, data)
                enterRRBY()
            end
        }, "当前正在对局中，是否前往？")
        return
    end
    enterRRBY()
end

function TeaHouseMainView:showLuckyTask(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType,self._teaHouseActIconScale)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.showLuckyTask(LuckyTaskDefine.POP_FROM.MATCH)
    XH.lobby:getModule("LuckyTask"):reportData("iconClick", "比赛场")
end

function TeaHouseMainView:initLuckyTaskIcon()
    TeaHouse.initLuckyTaskIcon(self)
end

function TeaHouseMainView:initSpfectActIcon()
    XH.SysTool.performDelayOnce(function()
        -- if TeaHouse.manager.teahouseMain:getIsFirstInTea() then
        --     return
        -- end
        XH.lobby:getModule("AutoPop"):onBackToLobby("tea")
        XH.lobby:getModule("AutoPop"):whenBackLobbyCheckPop()
    end, 0.1)
end

function TeaHouseMainView:on_KWA_BTN_VIP(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = {
        block_label = '比赛场大厅左侧入口'
    }
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.zyt2024032801, data)
    XH.viewManager:openView("SxvipPrivilegeView", nil, SxvipConfig.ThrowData.source.matchMain)
    XH.lobby:getModule("Sxvip"):setTouchIconStatus(true)
end

function TeaHouseMainView:onUpdateSxvipStatus()
    local showEntry = XH.lobby:getModule("Sxvip"):getSxvipOpen()
    self.KWA_BTN_VIP:setVisible(showEntry)
    if showEntry then
        local isHaveWath = XH.lobby:getModule("Sxvip"):getPowerExit(SxvipConfig.SXVIP_POWER.WATCH) and true or false
        XH.UITool.setVisible(self.KWA_BTN_VIP, "KW_NO_LOOK", not isHaveWath)
        XH.UITool.setVisible(self.KWA_BTN_VIP, "KW_LOOK", isHaveWath)
    end
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
                elseif remainTime > 0 and remainTime < 86400 then -- 最后一天
                    imgBubble:setVisible(true)
                    imgBubble:setContentSize(cc.size(260, imgBubble:getContentSize().height))
                    textBubble:setString("会员权益即将到期")
                end
            end
        end
    end
    self:flushSxVipTips()
end

function TeaHouseMainView:initDouble12Icon()
    local bShow = XH.lobby:getModule("Double12"):checkShow()
    if bShow then
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/CSB/Activity/Double12_2025/Image/_Plist.plist")
        XH.UITool.loadTexture(self._btnDouble12, "KW_ICON", "animation/Lobby/Base/hghl_icon/ac_icon_double12rk.png", ccui.TextureResType.localType)
        self._btnDouble12:setVisible(bShow)
        local iconSprite = cc.Sprite:create()
        iconSprite:setPosition(cc.p(15, 95))
        iconSprite:setSpriteFrame("hall/CSB/Activity/Double12_2025/Image/Img_100.png")
        self._btnDouble12:addChild(iconSprite)
        if not self._isShowDouble12Icon and self._btnDouble12:isVisible() then
            self._isShowDouble12Icon = true
            XH.NewThrowDataManager:throwData("cc2025112101", {page = "比赛场大厅"})
        end
    end
end

function TeaHouseMainView:initNewYear2026Icon()
    local bShow = XH.lobby:getModule("NewYear2026"):isValid()
    if bShow then
        -- XH.UITool.loadTexture(self._btnNewYear2026, "KW_ICON", "animation/Lobby/Base/hghl_icon/act_icon_xcfl.png", ccui.TextureResType.localType)
        self._btnNewYear2026:setVisible(bShow)
        -- self._btnNewYear2026:getChildByName("KW_REDPOINT"):setVisible(false)
        local aniNode = XH.UITool.seekNodeByName(self._btnNewYear2026,"KW_ANI")
        XH.SpineManager:playAni(aniNode,"animation/Lobby/Activity/NewYear2026/","zzb_xchl_icon","animation",true)
        self:updateRitghActBtnPos()
        -- self:updateRitghActBtnPos()
        -- local iconSprite = cc.Sprite:create()
        -- iconSprite:setPosition(cc.p(15, 95))
        -- iconSprite:setSpriteFrame("hall/CSB/Activity/Double12_2025/Image/Img_100.png")
        -- self._btnDouble12:addChild(iconSprite)
        -- if not self._isShowDouble12Icon and self._btnDouble12:isVisible() then
        --     self._isShowDouble12Icon = true
        --     XH.NewThrowDataManager:throwData("cc2025112101", {page = "比赛场大厅"})
        -- end
        self._btnNewYear2026:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function() 
            self:onEventNewYear2026Info()
        end)))
        self._btnNewYear2026:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function() 
            self._btnNewYear2026.isChecked = true
        end)))
    end
end

function TeaHouseMainView:initBuyuBtnAni()
    local lobbyConfig = TeaHouse.BridgeUI.getIconConfig()
    local iconConf = lobbyConfig.MenuIconConfig[lobbyConfig.ICON_ID.REN_REN_BU_YU]
    local aniInfo = iconConf and iconConf.SpineInfo
    if not aniInfo then
        return
    end
    local size = self._btnRRBY:getContentSize()
    local anchor = cc.Node:create()
    anchor:setCascadeOpacityEnabled(true)
    anchor:setAnchorPoint(cc.p(0.5, 0.5))
    anchor:setPosition(cc.p(size.width / 2, size.height / 2))
    -- 对齐旧逻辑：create scale=1.6 后节点 setScale(0.45)
    anchor:setScale(0.45)
    self._btnRRBY:addChild(anchor)
    if aniInfo.RemoteKey and XH.RemoteSpineManager then
        XH.RemoteSpineManager:playRemoteAni(anchor, aniInfo.RemoteKey, {
            scale = 1.6,
            localFallback = {
                path = "animation/Lobby/Base/rrby_icon/",
                fileName = "zzb_rk_rrbu9",
                aniName = aniInfo.ArmatureName or "animation",
                scale = 1.6,
            },
        })
    else
        local params = {path = "", tex = aniInfo.JsonPath, ske = aniInfo.AtlasPath, armatureName = aniInfo.ArmatureName, scale = 1.6}
        local armature = display.playDargonBonesSpine(params)
        if armature then
            anchor:addChild(armature)
            armature:setAnchorPoint(cc.p(0.5, 0.5))
        end
    end
    self._btnRRBY:getChildByName("Image_3"):setLocalZOrder(2)
    self._btnRRBY:getChildByName("Image_5"):removeFromParent()
end

function TeaHouseMainView:onFlushSxVipAct()
    self._KW_SXVIP_XSYH:setVisible(XH.lobby:getModule("SxvipAct"):getShowAct() ~= nil)
    if self._KW_SXVIP_XSYH:isVisible() then
        XH.lobby:getModule("Sxvip"):addSgAni(self._KW_SXVIP_XSYH, 1)
    end
    self:flushSxVipTips()
end

function TeaHouseMainView:flushSxVipTips()
    if self._KW_SXVIP_XSYH:isVisible() then
        local imgBubble = self.KWA_BTN_VIP:getChildByName("_KWA_IMG_BUBBLE")
        if imgBubble then
            imgBubble:setVisible(false)
        end
    end
end

function TeaHouseMainView:initRecallNewAct()
    if XH.lobby:getModule("RecallTeam"):isInAct() and (TeaHouse.manager.teahouseData:isOwner() or TeaHouse.manager.teahouseData:isAdmin()) then
        XH.lobby:getModule("RecallTeam"):listClubReBackPlayersRequest(TeaHouse.manager.teahouseData:getTeaNumber(), 1, true, true)
    end
    self:onEventFlushRecallNew()
    self:onEventFlushRecallTeam()
end

function TeaHouseMainView:onButtonNewYear2026(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local bAward = XH.lobby:getModule("NewYear2026"):isHaveAward()
    XH.NewThrowDataManager:throwData("lys26012301", {page_item_id = "比赛场", block_item_id= bAward and "待领取" or "无奖励"})
    XH.viewManager:openView("NewYear2026", nil, {source = "match"})
end


function TeaHouseMainView:onOpenRecallNew(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType, self._teaHouseActIconScale)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080602, {page = "比赛场"})
    XH.viewManager:openView("RecallNewView", nil, nil, "比赛场")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.TABS_CONSUME_ACT_ICON_CLICK)
end

function TeaHouseMainView:onOpenRecallTeam(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType, self._teaHouseActIconScale)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("RecallTeamView")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.TABS_CONSUME_ACT_ICON_CLICK)
end

function TeaHouseMainView:onEventFlushRecallNew()
    if XH.lobby:getModule("RecallNew"):isInAct() then
        if self._recallShow == nil then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080601, { page = "比赛场" })
            self._recallShow = true
        end
        self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW, self.onOpenRecallNew)
        self:setIconRedPoint(TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW, XH.lobby:getModule("RecallNew"):isShowRedPointList())
        if XH.lobby:getModule("RecallNew"):isFreeRoom() then
            self:showRecallNewTip()
        end
    else
        self:removeActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW)
    end
end

function TeaHouseMainView:showRecallNewTip()
    local icon = self:getActIcon(TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW)
    if icon and not self._showRecallFree then
        self._showRecallFree = true
        self._panelActList:forceDoLayout()
        local lastPos = self._KW_NORMAL_QIPAO:convertToNodeSpace(icon:getWorldPosition())
        self._KW_NORMAL_QIPAO:setPosition(cc.p(lastPos.x + icon:getContentSize().width, lastPos.y))
        self._KW_TEXT_QIPAO:setString("回归特权，\n首次免费")
        self._KW_NORMAL_QIPAO:setVisible(true)
        XH.SysTool.performDelayOnce(function()
            if not self or tolua.isnull(self) then
                return
            end
            self._KW_NORMAL_QIPAO:setVisible(false)
        end, 3)
    end
end

function TeaHouseMainView:onEventFlushRecallTeam()
    if XH.lobby:getModule("RecallTeam"):isShowIcon() and (TeaHouse.manager.teahouseData:isOwner() or TeaHouse.manager.teahouseData:isAdmin()) then
        if self._recallTeamShow == nil then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080608, {club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber()})
            self._recallTeamShow = true
        end
        self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW_TEAM, self.onOpenRecallTeam)
        self:setIconRedPoint(TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW_TEAM, XH.lobby:getModule("RecallTeam"):isExistRedPoint())
    else
        self:removeActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.RECALL_NEW_TEAM)
    end
end

function TeaHouseMainView:onEventFlushLuckyMission()
    if XH.lobby:getModule("LuckyMission"):isInAct() then
        self:addActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_MISSION, self.onOpenLuckyMission)
        self:setIconRedPoint(TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_MISSION, XH.lobby:getModule("LuckyMission"):isShowRedPointList())
        local icon = self:getActIcon(TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_MISSION)
        if icon and icon:getChildrenCount() > 0 then
            icon:getChildren()[1]:setAnimation(0, XH.lobby:getModule("LuckyMission"):isShowRedPointList() and "animation" or "animation2", true)
        end
        if self._luckyMissionShow == nil then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092201, { page = "比赛场" })
            self._luckyMissionShow = true
        end
    else
        self:removeActivityIconToList(TeaHouse.BridgeUI.getIconConfig().ICON_ID.LUCKY_MISSION)
    end
end

function TeaHouseMainView:onOpenLuckyMission(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType, self._teaHouseActIconScale)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("LuckyMissionView", nil, nil, "比赛场大厅")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092202, { page = "比赛场大厅" })
end

function TeaHouseMainView:onEventUpdateCardMode()
    local bShow = TeaHouse.manager.teaHouseVisualCardTransferModule:isNeedShowMainEntry()
    self._btnCardModeTransfer:setVisible(bShow)
    if bShow and not self._isReportCardMode then
        self._isReportCardMode = true
        XH.NewThrowDataManager:throwData("lys25121801", {club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber()})
    end
end

function TeaHouseMainView:updateRitghActBtnPos()
    local btns = {self._btnDouble12, self._btnNewYear2026}
    local firstPos = cc.p(self._btnDouble12:getPosition())
    local idx = 0
    for i,v in ipairs(btns) do
        if v:isVisible() then
            v:setPosition(firstPos.x, firstPos.y - 120*idx)
            idx = idx + 1
        end
    end
end
return TeaHouseMainView �} 