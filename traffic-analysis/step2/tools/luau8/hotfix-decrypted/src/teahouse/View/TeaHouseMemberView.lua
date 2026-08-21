---@class TeaHouseMemberView : View
local TeaHouseMemberView = class("TeaHouseMemberView", TeaHouse.View)
local UrlConf = require("app.Config.UrlConf")
local TeaHouseMemberMutexHeadListItem = require("src.teahouse.View.TeaHouseMemberItem.TeaHouseMemberMutexHeadListItem")
local KW_MAX_FILTER_COUNT = 4
local KW_MAX_FILTER_DAY_COUNT = 4
local KW_MAX_FILTER_TIME_COUNT = 4
local KW_TBLEVIEW_NEED_OFFSET = 100
local ONE_PAGE_SHOW_ITEM = 10
local FILTER_NAME = {'全部申请', '普通申请', '通过牌友申请'}
TeaHouseMemberView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT = "KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT"

TeaHouseMemberView.TAB_TYPE = {
    NONE = 0,
    APPLY = 1, ---当前申请
    MEMBER = 2, ---成员列表
    INACTIVEMEMBER = 3, ---不活跃玩家
    LOG = 4, ---成员日志
    MUTEX = 5, ---互斥名单
    ADDCARDLOG = 6, --划卡记录（前项付费模式）
    INVITEFRIEND = 7,--邀请好友
    KICKLOG = 8, --请出记录
}

TeaHouseMemberView.MEMBER_FILTER = {
    ALL = 1, ---所有成员
    MEMBER = 2, ---普通成员
    BLACK = 3, ---黑名单
    ADMIN = 4, ---副领队
}

TeaHouseMemberView.INACTIVE_FILTER = {
    SEVEN_DAY = 1, ---7天
    FIFTEEN_DAY = 2, ---15天
    THIRTY_DAY = 3, ---30天
}

TeaHouseMemberView.TIME_FILTER = {
    FIGHT_TIME_UP = 1, 
    FIGHT_TIME_DOWN = 2, 
    ONLINE_TIME_UP = 3, 
    ONLINE_TIME_DOWN = 4, 
}

TeaHouseMemberView.LIST_TYPE = {
    TYPE_1 = 1,
    TYPE_2 = 2,
    TYPE_3 = 3,
}

TeaHouseMemberView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberView.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_PANEL_LIST_INFO_1"] = { tag = "_KW_PANEL_LIST_INFO_1", name = "_panelListInfo1", class = "panel" },
        ["_KW_PANEL_LIST_ITEM_1"] = { tag = "_KW_PANEL_LIST_ITEM_1", name = "_panelListItem1", class = "panel" },
        ["_KW_PANEL_LIST_INFO_2"] = { tag = "_KW_PANEL_LIST_INFO_2", name = "_panelListInfo2", class = "panel" },
        ["_KW_PANEL_LIST_ITEM_2"] = { tag = "_KW_PANEL_LIST_ITEM_2", name = "_panelListItem2", class = "panel" },
        ["_KW_PANEL_LIST_ITEM_3"] = { tag = "_KW_PANEL_LIST_ITEM_3", name = "_panelListItem3", class = "panel" },
        ["_KW_BTN_APPLE_1"] = { tag = "_KW_BTN_APPLE_1", name = "_btnApply1", class = "btn", events = "onApply1Clicked" },
        ["_KW_BTN_APPLE_2"] = { tag = "_KW_BTN_APPLE_2", name = "_btnApply2", class = "btn", events = "onApply2Clicked" },
        ["_KW_BTN_MEMBER_1"] = { tag = "_KW_BTN_MEMBER_1", name = "_btnMember1", class = "btn", events = "onMember1Clicked" },
        ["_KW_BTN_MEMBER_2"] = { tag = "_KW_BTN_MEMBER_2", name = "_btnMember2", class = "btn", events = "onMember2Clicked" },
        ["_KW_BTN_LOG_1"] = { tag = "_KW_BTN_LOG_1", name = "_btnLog1", class = "btn", events = "onLog1Clicked" },
        ["_KW_BTN_LOG_2"] = { tag = "_KW_BTN_LOG_2", name = "_btnLog2", class = "btn", events = "onLog2Clicked" },
        ["_KW_BTN_ADD_CARD_LOG_2"] = { tag = "_KW_BTN_ADD_CARD_LOG_2", name = "_btnAddCardLog2", class = "btn", events = "onAddCardLog2Clicked" },
        ["_KW_BTN_ADD_CARD_LOG_1"] = { tag = "_KW_BTN_ADD_CARD_LOG_1", name = "_btnAddCardLog1", class = "btn", events = "onAddCardLog1Clicked" },
        ["_KW_BTN_MUTEX_1"] = { tag = "_KW_BTN_MUTEX_1", name = "_btnMutex1", class = "btn", events = "onMutex1Clicked" },
        ["_KW_BTN_MUTEX_2"] = { tag = "_KW_BTN_MUTEX_2", name = "_btnMutex2", class = "btn", events = "onMutex2Clicked" },
        ["_KW_BTN_INVITE_FRIEND_1"] = { tag = "_KW_BTN_INVITE_FRIEND_1", name = "_btnInvite1", class = "btn", events = "onInviteFriend1Clicked" },
        ["_KW_BTN_INVITE_FRIEND_2"] = { tag = "_KW_BTN_INVITE_FRIEND_2", name = "_btnInvite2", class = "btn", events = "onInviteFriend2Clicked" },
        ["_KW_BTN_KICK_LOG_1"] = { tag = "_KW_BTN_KICK_LOG_1", name = "_btnKickLog1", class = "btn", events = "onKickLog1Clicked" },
        ["_KW_BTN_KICK_LOG_2"] = { tag = "_KW_BTN_KICK_LOG_2", name = "_btnKickLog2", class = "btn", events = "onKickLog2Clicked" },
        ["_KW_BTN_INACTIVE_MEMBER_1"] = { tag = "_KW_BTN_INACTIVE_MEMBER_1", name = "_btnInactiveMember1", class = "btn", events = "onInactiveMember1Clicked" },
        ["_KW_BTN_INACTIVE_MEMBER_2"] = { tag = "_KW_BTN_INACTIVE_MEMBER_2", name = "_btnInactiveMember2", class = "btn", events = "onInactiveMember2Clicked" },
        ["_KW_LISTVIEW"] = { name = "_listView" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_SEARCH"] = { tag = "_KW_BTN_SEARCH", name = "_btnSearch", class = "btn", events = "onSearchClicked" },
        ["_KW_TEXT_SEARCH_1"] = { tag = "_KW_TEXT_SEARCH_1", name = "_textSearch1" },
        ["_KW_IMG_SEARCH_BG"] = { tag = "_KW_IMG_SEARCH_BG", name = "_imgSearch" },
        ["_KW_BTN_REFRESH"] = { tag = "_KW_BTN_REFRESH", name = "_btnRefresh", class = "btn", events = "onRefreshClicked" },
        ["_KW_PANEL_FILTER"] = { tag = "_KW_PANEL_FILTER", name = "_panelFilter", class = "panel" },
        ["_KW_IMG_POP_FILTER_BG"] = { tag = "_KW_IMG_POP_FILTER_BG", name = "_imgPopFilterBg", class = "img" },
        ["_KW_BTN_HIDE_FILTER"] = { tag = "_KW_BTN_HIDE_FILTER", name = "_btnHideFilter", class = "btn", events = "onHideFilterClicked" },
        ["_KW_BTN_SHOW_FILTER"] = { tag = "_KW_BTN_SHOW_FILTER", name = "_btnShowFilter", class = "btn", events = "onShowFilterClicked" },
        ["_KW_TEXT_FILTER_SELECT"] = { tag = "_KW_TEXT_FILTER_SELECT", name = "_textFilterSelect", class = "text" },
        ["_KW_TF_SEARCH"] = { tag = "_KW_TF_SEARCH", name = "_tfSearch", class = "textfield" },
        ["_KW_TEXT_SEARCH"] = { tag = "_KW_TEXT_SEARCH", name = "_textSearch", class = "text" },
        ["_KW_PANEL_FILTER_MASK"] = { tag = "_KW_PANEL_FILTER_MASK", name = "_panelFilterMask", class = "panel" },
        ["_KW_PANEL_APPLY"] = { tag = "_KW_PANEL_APPLY", name = "_panelApply", class = "panel" },
        ["_KW_PANEL_MEMBER"] = { tag = "_KW_PANEL_MEMBER", name = "_panelMember", class = "panel" },
        ["_KW_PANEL_LOG"] = { tag = "_KW_PANEL_LOG", name = "_panelLog", class = "panel" },
        ["_KW_PANEL_MUTEX"] = { tag = "_KW_PANEL_MUTEX", name = "_panelMutex", class = "panel" },
        ["_KW_NODE_TAB_1"] = { tag = "_KW_NODE_TAB_1", name = "_nodeTab1", class = "node" },
        ["_KW_NODE_TAB_2"] = { tag = "_KW_NODE_TAB_2", name = "_nodeTab2", class = "node" },
        ["_KW_NODE_TAB_3"] = { tag = "_KW_NODE_TAB_3", name = "_nodeTab3", class = "node" },
        ["_KW_NODE_TAB_4"] = { tag = "_KW_NODE_TAB_4", name = "_nodeTab4", class = "node" },
        ["_KW_NODE_TAB_5"] = { tag = "_KW_NODE_TAB_5", name = "_nodeTab5", class = "node" },
        ["_KW_NODE_TAB_6"] = { tag = "_KW_NODE_TAB_6", name = "_nodeTab6", class = "node" },
        ["_KW_NODE_TAB_7"] = { tag = "_KW_NODE_TAB_7", name = "_nodeTab7", class = "node" },
        ["_KW_NODE_TAB_8"] = { tag = "_KW_NODE_TAB_8", name = "_nodeTab8", class = "node" },
        ["_KW_PANEL_LIST_ROOT_1"] = { tag = "_KW_PANEL_LIST_ROOT_1", name = "_panelListRoot1", class = "panel" },
        ["_KW_PANEL_LIST_ROOT_2"] = { tag = "_KW_PANEL_LIST_ROOT_2", name = "_panelListRoot2", class = "panel" },
        ["_KW_PANEL_LIST_ROOT_3"] = { tag = "_KW_PANEL_LIST_ROOT_3", name = "_panelListRoot3", class = "panel" },
        ["_KW_BTN_ADD_MUTEX"] = { tag = "_KW_BTN_ADD_MUTEX", name = "_btnAddMutex", class = "btn", events = "onAddMutexClicked" },
        ["_KW_TEXT_NOTICE_NO_MUTEX"] = { tag = "_KW_TEXT_NOTICE_NO_MUTEX", name = "_textNoMutex", class = "text" },
        ["_KW_TEXT_PROXY_FEE_INFO"] = { tag = "_KW_TEXT_PROXY_FEE_INFO", name = "_textproxyFeeInfo", class = "text" },
        ["_KW_PANEL_ADDCARDLOG"] = { tag = "_KW_PANEL_ADDCARDLOG", name = "_panelAddCardLog", class = "panel" },
        ["_KW_PANEL_INVITE_FRIEND"] =  { tag = "_KW_PANEL_INVITE_FRIEND", name = "_panelInviteFriend", class = "panel" },
        ["_KW_PANEL_KICK_LOG"] =  { tag = "_KW_PANEL_KICK_LOG", name = "_panelKickLog", class = "panel" },
        ["_KW_PANEL_INACTIVE_MEMBER"] =  { tag = "_KW_PANEL_INACTIVE_MEMBER", name = "_panelInactiveMember", class = "panel" },
        ["_KW_TEXT_RECORD_TIP"] = { tag = "_KW_TEXT_RECORD_TIP", name = "_textRecordTip", class = "text" },
        -- 日期选择控件
        ["_KW_IMG_SEARCH_DATE_BG"] = { tag = "_KW_IMG_SEARCH_DATE_BG", name = "_panelSearchDateBG", class = "img" },
        ["_KW_PANEL_SEARCH_DATE"] = { tag = "_KW_PANEL_SEARCH_DATE", name = "_panelSearchDate", class = "panel" },
        ["_KW_PANEL_DATE_MASK"] = { tag = "_KW_PANEL_DATE_MASK", name = "_panelSearchDateMask", class = "panel" },
        ["_KW_TEXT_SEARCH_DATE"] = { tag = "_KW_TEXT_SEARCH_DATE", name = "_textSearchDate", class = "text" },
        ["_KW_IMG_SEARCH_DATE_BG"] = { tag = "_KW_IMG_SEARCH_DATE_BG", name = "_imgSearchDataBg", class = "img", events = "onShowSearchDate" },
        ["_KW_BTN_SHOW_DATE"] = { tag = "_KW_BTN_SHOW_DATE", name = "_btnShowDate", class = "btn", events = "onShowSearchDate" },
        ["_KW_BTN_HIDE_DATE"] = { tag = "_KW_BTN_HIDE_DATE", name = "_btnHideDate", class = "btn", events = "onHideSearchDate" },
        ["_KW_IMG_DATE_FILTER_BG"] = { tag = "_KW_IMG_DATE_FILTER_BG", name = "_panelDateFilterBG", class = "img" },
        --邀请好友
        ["_KW_PANEL_INVITE_ROOT"] = {tag = "_KW_PANEL_INVITE_ROOT", name = "_panelInviteRoot"},
        ["_KW_PANEL_LIST_INVITE_USER"] = {tag = "_KW_PANEL_LIST_INVITE_USER" , name = "_panelInviteList"},
        ["_KW_BTN_INVITE_SEARCH"] = {tag = "_KW_BTN_INVITE_SEARCH", name = "_btnInviteSearch", events = "onClickInviteSearch"},
        ["_KW_BTN_INVITE_SHARE"] = {tag = "_KW_BTN_INVITE_SHARE", name = "_btnInviteShare" , events = "doBatchInviteShare"},
        ["_KW_BTN_INVITE_ALL"] = {tag = "_KW_BTN_INVITE_ALL",name = "_btnInviteAll" ,class = "btn", events = "onClickInviteAll"},
        ["_KW_TEXT_INVITE_NOTICE"] = {tag = "_KW_TEXT_INVITE_NOTICE", name = "_noPlayerTextTip"},
        ["_KW_IV_SEARCH"] = {tag = "_KW_IV_SEARCH",name = "_iVSearch",class = "textfield"},
        ["_KW_TEXT_INVITE_SEARCH"] = {tag = "_KW_TEXT_INVITE_SEARCH", name = "_textIVSearch"},
        ["_KW_INVITE_RECORD"] = {tag = "_KW_INVITE_RECORD", name = "_btnIVRecord", events = "onClickInviteRecord"},
        ["_KW_BTN_CARDMODE_TRANSFER"] = {tag = "_KW_BTN_CARDMODE_TRANSFER", name = "_btnCardModeTransfer", events = "onClickCardModeTransfer"},
        ["_KW_CHANGE_INVITE_LIST"] = {tag = "_KW_CHANGE_INVITE_LIST", name = "_changeList", events = "onClickChangeList"},
        ["_KW_TEXT_INVITE_TIP"] = {tag = "_KW_TEXT_INVITE_TIP", name = "_textIVTip"},
        ["_KW_PANEL_LIST_INVITE_HIDE"] = {tag = "_KW_PANEL_LIST_INVITE_HIDE",name = "_InviteListHide"},
        ["_KW_BTN_BATCH"] = { tag = "_KW_BTN_BATCH", name = "_btnBatch", class = "btn", events = "onBatchClicked" },

        ["_KW_PANEL_FILTER_DAY"] = { tag = "_KW_PANEL_FILTER_DAY", name = "_panelFilterDay", class = "panel" },
        ["_KW_IMG_POP_FILTER_DAY_BG"] = { tag = "_KW_IMG_POP_FILTER_DAY_BG", name = "_imgPopFilterDayBg", class = "img" },
        ["_KW_BTN_HIDE_FILTER_DAY"] = { tag = "_KW_BTN_HIDE_FILTER_DAY", name = "_btnHideFilterDay", class = "btn", events = "onHideFilterDayClicked" },
        ["_KW_BTN_SHOW_FILTER_DAY"] = { tag = "_KW_BTN_SHOW_FILTER_DAY", name = "_btnShowFilterDay", class = "btn", events = "onShowFilterDayClicked" },
        ["_KW_TEXT_FILTER_DAY_SELECT"] = { tag = "_KW_TEXT_FILTER_DAY_SELECT", name = "_textFilterDaySelect", class = "text" },       
        ["_KW_PANEL_FILTER_DAY_MASK"] = { tag = "_KW_PANEL_FILTER_DAY_MASK", name = "_panelFilterDayMask", class = "panel" },

        ["_KW_PANEL_FILTER_TIME"] = { tag = "_KW_PANEL_FILTER_TIME", name = "_panelFilterTime", class = "panel" },
        ["_KW_IMG_POP_FILTER_TIME_BG"] = { tag = "_KW_IMG_POP_FILTER_TIME_BG", name = "_imgPopFilterTimeBg", class = "img" },
        ["_KW_BTN_HIDE_FILTER_TIME"] = { tag = "_KW_BTN_HIDE_FILTER_TIME", name = "_btnHideFilterTime", class = "btn", events = "onHideFilterTimeClicked" },
        ["_KW_BTN_SHOW_FILTER_TIME"] = { tag = "_KW_BTN_SHOW_FILTER_TIME", name = "_btnShowFilterTime", class = "btn", events = "onShowFilterTimeClicked" },
        ["_KW_TEXT_FILTER_TIME_SELECT"] = { tag = "_KW_TEXT_FILTER_TIME_SELECT", name = "_textFilterTimeSelect", class = "text" },       
        ["_KW_PANEL_FILTER_TIME_MASK"] = { tag = "_KW_PANEL_FILTER_TIME_MASK", name = "_panelFilterTimeMask", class = "panel" },


        
        ["_KW_PANEL_GUIDE"] = { tag = "_KW_PANEL_GUIDE", name = "_panelGuide", class = "panel" },
        ["_KW_IMG_TITLE"] = { tag = "_KW_IMG_TITLE", name = "_imgTitle", class = "img" },
        ["_KW_PANEL_APPLY_BOTTOM"] = { tag = "_KW_PANEL_APPLY_BOTTOM", name = "_panelApplyBottom", class = "panel" },
        
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_FILTER_", startNum = 1, endNum = KW_MAX_FILTER_COUNT, preName = "_btnFilter", class = "btn"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_FILTER_", startNum = 1, endNum = KW_MAX_FILTER_COUNT, preName = "_textFilter", class = "text"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_IMG_FILTER_LINE_", startNum = 1, endNum = KW_MAX_FILTER_COUNT, preName = "_imgFilterLine", class = "text"
})
-- 日期选择
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_DATE_INFO_", startNum = 1, endNum = TeaHouse.manager.teahouseMember.KW_SHOW_ADD_CARD_LOG_DAY, preName = "_btnFilterDate", class = "btn"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_FILTER_DAY_", startNum = 1, endNum = KW_MAX_FILTER_DAY_COUNT, preName = "_btnFilterDay", class = "btn"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_FILTER_DAY_", startNum = 1, endNum = KW_MAX_FILTER_DAY_COUNT, preName = "_textFilterDay", class = "text"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_IMG_FILTER_LINE_DAY_", startNum = 1, endNum = KW_MAX_FILTER_DAY_COUNT, preName = "_imgFilterDayLine", class = "text"
})

TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_FILTER_TIME_", startNum = 1, endNum = KW_MAX_FILTER_TIME_COUNT, preName = "_btnFilterTime", class = "btn"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_FILTER_TIME_", startNum = 1, endNum = KW_MAX_FILTER_TIME_COUNT, preName = "_textFilterTime", class = "text"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseMemberView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_IMG_FILTER_LINE_TIME_", startNum = 1, endNum = KW_MAX_FILTER_TIME_COUNT, preName = "_imgFilterTimeLine", class = "text"
})

function TeaHouseMemberView:ctor(param)
    TeaHouseMemberView.super.ctor(self)

    self._infoList = {}
    self._tvInfoList = nil
    self._isTableViewBottom = false

    self._showInfoList = {}
    
    self._tabType = nil
    self._tabNodes = {}

    self._filterType = nil
    self._filterDayType = nil
    self._filterTimeType = nil

    self._isSearch = false

    self._guideType = TeaHouseMemberView.TAB_TYPE.NONE
    if TeaHouse.manager.teaHouseGuide:isJoinGuideFlowAgreeTip() or TeaHouse.manager.teaHouseGuide:isJoinGuideFlowNoneTip() then
        self._guideType = TeaHouseMemberView.TAB_TYPE.APPLY
    elseif TeaHouse.manager.teaHouseGuide:isJoinGuideFlowPowerTip() then
        self._guideType = TeaHouseMemberView.TAB_TYPE.MEMBER
    end
    self:initUI()

    self:adaptUI()

    TeaHouse.manager.teahouseMember:resetTeaHouseSelectPlayers()
    self:setFilterType(TeaHouseMemberView.MEMBER_FILTER.ALL)
    self:setFilterDayType(TeaHouseMemberView.INACTIVE_FILTER.SEVEN_DAY)
    self:setFilterTimeType(TeaHouseMemberView.TIME_FILTER.FIGHT_TIME_UP)
    if param and param.tabIndex and param.tabIndex == 2 then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        local teahouseData = TeaHouse.manager.teahouseData
        if SwitchConfig and SwitchConfig.InactiveMember == 1 and (teahouseData:isOwner() or teahouseData:isAdmin()) then
            self:onInactiveMember1Clicked(self._btnInactiveMember1,2)
        else
            self:onMember1Clicked(self._btnMember1,2)        
        end
    end        
end

function TeaHouseMemberView:initUI()
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.APPLY] = { self._btnApply1, self._btnApply2 }
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER] = { self._btnInactiveMember1, self._btnInactiveMember2 }
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.MEMBER] = { self._btnMember1, self._btnMember2 }
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.LOG] = { self._btnLog1, self._btnLog2 }
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.ADDCARDLOG] = { self._btnAddCardLog1, self._btnAddCardLog2 }
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.MUTEX] = { self._btnMutex1, self._btnMutex2 }
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.INVITEFRIEND] = { self._btnInvite1, self._btnInvite2 }
    self._tabNodes[TeaHouseMemberView.TAB_TYPE.KICKLOG] = { self._btnKickLog1, self._btnKickLog2 }

    local reduceHeight = 0
    local teahouseData = TeaHouse.manager.teahouseData
    local powerConfig = TeaHouse.manager.configManager.powerConfig
    if powerConfig == nil then
        return
    end
    local powerValue = teahouseData.POWER_VALUE.ALLOW_LOW
    for i = KW_MAX_FILTER_COUNT, 1, -1 do
        local btnFilter = self["_btnFilter" .. i]
        local imgFilterLine = self["_imgFilterLine" .. i]
        local btnFilterDay = self["_btnFilterDay" .. i]
        local btnFilterTime = self["_btnFilterTime" .. i]
        if btnFilter then
            local isNoPower = false
            TeaHouse.UITool.setText(btnFilter, "_KW_TEXT_FILTER_" .. i, TeaHouse.UITool.getText(btnFilter, "_KW_TEXT_FILTER_" .. i))
            if i == TeaHouseMemberView.MEMBER_FILTER.ADMIN then
                if not powerConfig:checkPower(teahouseData.POWER_LEVEL.OWNER, "ModifyAdmin", powerValue) then
                    isNoPower = true
                end
                local TeaHouseRemodelConfig = TeaHouse.manager.configManager.remodelConfig
                if TeaHouse.manager.teahouseData:getTeaHouseLevel() == TeaHouseRemodelConfig.TEAHOUSELEVEL.JUNIOR 
                    or TeaHouse.manager.teahouseData:getTeaHouseLevel() == TeaHouseRemodelConfig.TEAHOUSELEVEL.INTERMEDIATE then
                        isNoPower = true
                end
            end
            if i == TeaHouseMemberView.MEMBER_FILTER.BLACK then
                if not powerConfig:checkPower(teahouseData.POWER_LEVEL.OWNER, "ModifyBlack", powerValue) then
                    isNoPower = true
                end
                local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
                if not isNoPower and SwitchConfig and SwitchConfig.hasBlack == 0 then
                    isNoPower = true
                end
            end
           
            

            if isNoPower then
                btnFilter:setVisible(false)
                reduceHeight = reduceHeight + btnFilter:getContentSize().height
                if imgFilterLine then
                    imgFilterLine:setVisible(false)
                end
            else                
                btnFilter:setPositionY(btnFilter:getPositionY() - reduceHeight)
                if imgFilterLine then
                    imgFilterLine:setPositionY(imgFilterLine:getPositionY() - reduceHeight)
                end
                btnFilter:addTouchEventListener(function(send, eventType)
                    self:onFilterClicked(send, eventType, i)
                    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_19)
                end)
            end
        end
        if btnFilterDay then
            btnFilterDay:addTouchEventListener(function(send, eventType)
                self:onFilterDayClicked(send, eventType, i)
            end)
        end
        if btnFilterTime then
            btnFilterTime:addTouchEventListener(function(send, eventType)
                self:onFilterTimeClicked(send, eventType, i)
            end)
        end
    end
    if self._imgPopFilterBg then
        local filterBgSize = self._imgPopFilterBg:getContentSize()
        self._imgPopFilterBg:setContentSize(cc.size(filterBgSize.width, filterBgSize.height - reduceHeight))
        self._imgPopFilterBg:setPositionY(self._imgPopFilterBg:getPositionY() + reduceHeight)
    end

    if self._tfSearch and self._textSearch then
        self._tfSearch:setFontColor(cc.c3b(255, 255, 255))
        self._tfSearch:registerScriptEditBoxHandler(function(eventName)
            if eventName == "began" then
                self._textSearch:setVisible(false)
            elseif eventName == "changed" then
                self._textSearch:setString(self._tfSearch:getText())
            elseif eventName == "ended" or eventName == "return" then
                self._textSearch:setVisible(true)
            end
        end)
    end
    if self._iVSearch and self._textIVSearch then
        self._iVSearch:setFontColor(cc.c3b(255, 255, 255))
        self._iVSearch:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
        self._iVSearch:registerScriptEditBoxHandler(function(eventName)
            if eventName == "began" then
                self._textIVSearch:setVisible(false)
            elseif eventName == "changed" then
                self._textIVSearch:setString(self._iVSearch:getText())
            elseif eventName == "ended" or eventName == "return" then
                self._textIVSearch:setVisible(true)
            end
        end)
    end
    if self._panelFilter then
        self._panelFilter:addTouchEventListener(function(send, eventType)
            self:setFilterState(true)
        end)
    end
    if self._panelFilterMask then
        self._panelFilterMask:addTouchEventListener(function(send, eventType)
            self:setFilterState(false)
        end)
    end
    if self._panelFilterDay then
        self._panelFilterDay:addTouchEventListener(function(send, eventType)
            self:setFilterDayState(true)
        end)
    end
    if self._panelFilterDayMask then
        self._panelFilterDayMask:addTouchEventListener(function(send, eventType)
            self:setFilterDayState(false)
        end)
    end
    if self._panelFilterTime then
        self._panelFilterTime:addTouchEventListener(function(send, eventType)
            self:setFilterTimeState(true)
        end)
    end
    if self._panelFilterTimeMask then
        self._panelFilterTimeMask:addTouchEventListener(function(send, eventType)
            self:setFilterTimeState(false)
        end)
    end
    if self._panelSearchDate then
        self._panelSearchDate:addTouchEventListener(function(send, eventType)
            self:setDateFilterState(true)
        end)
    end
    self:updateTabs()
    self:initApplyBottomPanel()
end

function TeaHouseMemberView:adaptUI()
    if not TeaHouse.UITool.isLiuHaiScreen() then
        return
    end
    if not self._panelRoot then
        return
    end
    local notchWidth = TeaHouse.UITool.getNotchWidth()
    local rootSize = self._panelRoot:getContentSize()
    self._panelRoot:setContentSize(cc.size(rootSize.width - notchWidth * 2, rootSize.height))
    ccui.Helper:doLayout(self._panelRoot)
end

function TeaHouseMemberView:updateTabs(isAdminRightUpdate)
    local tabIndex = 1
    local teahouseData = TeaHouse.manager.teahouseData
    self._listView:setScrollBarEnabled(false)
    if self._panelApply then
        local isModifyMember = false
        if teahouseData:checkSelfPower("ModifyMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.AUDIT) then
            isModifyMember = true
        end
        if isModifyMember then
            self._panelApply:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelApply:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelApply:retain()
            self._panelApply:removeFromParent()
            self._listView:addChild(self._panelApply)
        else
            self._panelApply:setVisible(false)
            local par1 = self._panelApply:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelApply:removeFromParent()
                end
            end
        end
    end    
    if self._panelMember then
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
        if isModifyAdmin or isModifyBlack or isKickMember or isAddCardTeaHouse or isModifyMemberCost then
            self._panelMember:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelMember:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelMember:retain()
            self._panelMember:removeFromParent()
            self._listView:addChild(self._panelMember)
        else
            self._panelMember:setVisible(false)
            local par1 = self._panelMember:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelMember:removeFromParent()
                end
            end
        end
    end
    if self._panelInactiveMember then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.InactiveMember == 1 and (teahouseData:isOwner() or teahouseData:isAdmin()) then
            self._panelInactiveMember:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelInactiveMember:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelInactiveMember:retain()
            self._panelInactiveMember:removeFromParent()
            self._listView:addChild(self._panelInactiveMember)            
        else
            self._panelInactiveMember:setVisible(false)
            local par1 = self._panelInactiveMember:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelInactiveMember:removeFromParent()
                end
            end
        end

    end
    if self._panelLog then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.MemberLog == 1 then
            self._panelLog:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelLog:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelLog:retain()
            self._panelLog:removeFromParent()
            self._listView:addChild(self._panelLog)
        else
            self._panelLog:setVisible(false)
            local par1 = self._panelLog:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelLog:removeFromParent()
                end
            end
        end
    end
    if self._panelAddCardLog then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        local curPayMode = TeaHouse.manager.teahouseData:getTeaHousePayMode() or -1
        local showAddCardLog = curPayMode ~= TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
        local payTypes = teahouseData:getPayTypeByID()
        local showPlayerOwnerCardLog = false
        local showFangFeiCardLog = false
        for _, payType in pairs(payTypes) do--已转人人且有领队流通模式的区 显示给玩家划卡界面
            if TeaHouse.BridgeData.isRemodelArea() then
                if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
                    showPlayerOwnerCardLog = true
                elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA 
                or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
                    showFangFeiCardLog = true
                end
            end
        end
        if SwitchConfig and SwitchConfig.AddCardLog == 1 and (showAddCardLog or showPlayerOwnerCardLog or showFangFeiCardLog) then
            self._panelAddCardLog:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelAddCardLog:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelAddCardLog:retain()
            self._panelAddCardLog:removeFromParent()
            self._listView:addChild(self._panelAddCardLog)
        else
            self._panelAddCardLog:setVisible(false)
            local par1 = self._panelAddCardLog:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelAddCardLog:removeFromParent()
                end
            end
        end
    end
    if self._panelMutex then
        local isModifyMutex = false
        if teahouseData:checkSelfPower("ModifyMutex") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.BLACK) then
            isModifyMutex = true
        end
        if isModifyMutex then
            self._panelMutex:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelMutex:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelMutex:retain()
            self._panelMutex:removeFromParent()
            self._listView:addChild(self._panelMutex)
        else
            self._panelMutex:setVisible(false)
            local par1 = self._panelMutex:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelMutex:removeFromParent()
                end
            end
        end
    end
    if self._panelInviteFriend then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.InviteFriend == 1 and teahouseData:isOwner() then
            self._panelInviteFriend:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelInviteFriend:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelInviteFriend:retain()
            self._panelInviteFriend:removeFromParent()
            self._listView:addChild(self._panelInviteFriend)
        else
            self._panelInviteFriend:setVisible(false)
            local par1 = self._panelInviteFriend:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelInviteFriend:removeFromParent()
                end
            end
        end
    end
    if self._panelKickLog then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.KickLog == 1 and (teahouseData:isOwner() or teahouseData:isAdmin()) then
            self._panelKickLog:setVisible(true)
            local nodeTab = self["_nodeTab" .. tabIndex]
            tabIndex = tabIndex + 1
            if nodeTab then
                self._panelKickLog:setPosition(cc.p(nodeTab:getPosition()))
            end
            self._panelKickLog:retain()
            self._panelKickLog:removeFromParent()
            self._listView:addChild(self._panelKickLog)
        else
            self._panelKickLog:setVisible(false)
            local par1 = self._panelKickLog:getParent()        
            if par1 then
                local par2 = par1:getParent()
                if par2 and par2 == self._listView then
                    self._panelKickLog:removeFromParent()
                end
            end
        end

    end

    if self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY and not self._panelApply:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER and not self._panelMember:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER and not self._panelInactiveMember:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.LOG and not self._panelLog:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG and not self._panelAddCardLog:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MUTEX and not self._panelMutex:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INVITEFRIEND and not self._panelInviteFriend:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG and not self._panelKickLog:isVisible() then
        self._tabType = nil
    end
    if isAdminRightUpdate then
        if self._tabType ~= nil then
            self:setTabType(self._tabType,isAdminRightUpdate)
        end
    end   
    if self._tabType == nil then
        if self._panelApply:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.APPLY)
        elseif self._panelMember:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.MEMBER)
        elseif self._panelInactiveMember:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
        elseif self._panelLog:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.LOG)
        elseif self._panelAddCardLog:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.ADDCARDLOG)
        elseif self._panelMutex:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.MUTEX)
        elseif self._panelInviteFriend:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.INVITEFRIEND)
        elseif self._panelKickLog:isVisible() then
            self:setTabType(TeaHouseMemberView.TAB_TYPE.KICKLOG)
        end
    end
    
end

function TeaHouseMemberView:onEnter()
    self:initEvents()
end

function TeaHouseMemberView:onCleanup()
    TeaHouseMemberView.super.onCleanup(self)
    XH.lobby:getModule("FriendTea"):clearApplyFriends()
end

function TeaHouseMemberView:initEvents()
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_MEMBER_LIST_UPDATE, handler(self, self.onMemberListUpdate))
    :addEventListener(teahouseMain.EVENT_MEMBER_LIST_CHANGED, handler(self, self.onMemberListChanged))
    :addEventListener(teahouseMain.EVENT_MEMBER_LIST_NOTICE, handler(self, self.onMemberListNotice))
    :addEventListener(teahouseMain.EVENT_PAY_MODE_UPDATE, handler(self, self.onPayModeUpdate))
    :addEventListener(teahouseMain.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onAdminRightUpdate))
    :addEventListener(teahouseMain.EVENT_SHOW_INVITE_ACTIVITY_LIST, handler(self, self.onUpdateInvitePlayerList))


    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_MEMBER_LIST_UPDATE, handler(self, self.onMemberListUpdate))
    :addEventListener(teahouseMember.EVENT_MEMBER_LIST_CHANGED, handler(self, self.onMemberListChanged))
    :addEventListener(teahouseMember.EVENT_MEMBER_LIST_NOTICE, handler(self, self.onMemberListNotice))
    :addEventListener(teahouseMember.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onAdminRightUpdate))
    :addEventListener(teahouseMember.EVENT_LOG_LIST_CHANGED, handler(self, self.onLogListChanged))
    :addEventListener(teahouseMember.EVENT_KICK_OUT_LOG_LIST_CHANGED, handler(self, self.onKickOutLogListChanged))    
    :addEventListener(teahouseMember.EVENT_FORBID_LIST_CHANGED, handler(self, self.onForbidListChanged))
    :addEventListener(teahouseMember.EVENT_TEA_TABEL_CARD, handler(self, self.onTeaTableCardChanged))
    :addEventListener(teahouseMember.EVENT_ADD_CADR_LOG_LIST_CHANGED, handler(self, self.onAddCardLogListChanged))
    :addEventListener(teahouseMember.EVENT_MEMBER_FRIEND_LIST_UPDATE, handler(self, self.onGetApplyFriendInfo))
    
    local teaHouseGuide = TeaHouse.manager.teaHouseGuide
    self:createListener(teaHouseGuide)
    :addEventListener(teaHouseGuide.EVENT_TYPE_START_MEMBER_POWER_GUIDE, handler(self, self.onStartMemberPowerGuide))
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    self._headSelectListener = cc.EventListenerCustom:create(TeaHouseMemberView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT,handler(self, self.onHeadSelect))
    eventDispatcher:addEventListenerWithSceneGraphPriority(self._headSelectListener,self.resourceNode_)

    local teaHouseVisualCardTransferModule = TeaHouse.manager.teaHouseVisualCardTransferModule
    self:createListener(teaHouseVisualCardTransferModule)
    :addEventListener(teaHouseVisualCardTransferModule.EVENT_CARD_MODE_UPDATE, handler(self, self.onEventUpdateCardMode))
    :addEventListener(teaHouseVisualCardTransferModule.EVENT_TRANSER_RESULT, handler(self, self.onEventUpdateCardMode))
end

function TeaHouseMemberView:removeAllEvents()
    if self._headSelectListener then
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        eventDispatcher:removeEventListener(self._headSelectListener)
    end
end

function TeaHouseMemberView:getListPanel()
    if self._tabType == TeaHouseMemberView.TAB_TYPE.MUTEX then
        return self._panelListInfo2
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INVITEFRIEND then
        return self._panelInviteList
    end
    return self._panelListInfo1
end

function TeaHouseMemberView:getItemPanel()
    if self._tabType == TeaHouseMemberView.TAB_TYPE.MUTEX then
        return self._panelListItem2
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INVITEFRIEND then
        return self._panelListItem3
    end
    return self._panelListItem1
end

function TeaHouseMemberView:refreshTableView(isCleanup, isKeepOffset)
    local listPanel = self:getListPanel()
    if listPanel == nil then
        return
    end
    if self._tvInfoList ~= nil and isCleanup then
        self._tvInfoList:removeFromParent()
        self._tvInfoList = nil
    end
    if self._tvInfoList == nil then
        local size = listPanel:getContentSize()
        self._tvInfoList = cc.TableView:create(listPanel:getContentSize())
        self._tvInfoList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvInfoList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvInfoList:setIgnoreAnchorPointForPosition(false)
        self._tvInfoList:setAnchorPoint(cc.p(0, 0))
        self._tvInfoList:setPosition(cc.p(0, 0))
        self._tvInfoList:setDelegate()
        self._tvInfoList:registerScriptHandler(handler(self, self.onScrollViewScriptScroll), cc.SCROLLVIEW_SCRIPT_SCROLL)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvInfoList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
        listPanel:addChild(self._tvInfoList)
    end
    if self._tvInfoList ~= nil then
        if isKeepOffset then
            local tableOffset = self._tvInfoList:getContentOffset()
            local tableSize1 = self._tvInfoList:getContentSize()
            local tableOffsetY = tableSize1.height + tableOffset.y
            self._tvInfoList:reloadData()
            local tableSize2 = self._tvInfoList:getContentSize()
            tableOffset.y = tableOffsetY - tableSize2.height
            local listSize = listPanel:getContentSize()
            local offsetHeight = 0
            if tableSize2.height < listSize.height then
                offsetHeight = listSize.height - tableSize2.height
            end
            if tableOffset.y > offsetHeight then
                tableOffset.y = offsetHeight
            end
            self._tvInfoList:setContentOffset(tableOffset)
        else
            self._tvInfoList:reloadData()
        end
    end
    self:updateTableViewTitle()
end

function TeaHouseMemberView:onScrollViewScriptScroll(tableView)
    local listPanel = self:getListPanel()
    if not listPanel or not self._tvInfoList then
        return
    end

    local listSize = listPanel:getContentSize()
    local tableSize = self._tvInfoList:getContentSize()
    local offsetHeight = 0
    if tableSize.height < listSize.height then
        offsetHeight = listSize.height - tableSize.height
    end
    local tableOffset = self._tvInfoList:getContentOffset()
    tableOffset.y = tableOffset.y - offsetHeight
    if tableOffset.y > KW_TBLEVIEW_NEED_OFFSET and not self._isTableViewBottom then
        self._isTableViewBottom = true
        self:onScrollToBottom()
    end
    if tableOffset.y <= 0 then
        self._isTableViewBottom = false
    end
end

function TeaHouseMemberView:onTableCellTouched(tableView, cell)

end

function TeaHouseMemberView:onCellSizeForTable(tableView, index)
    local itemPanel = self:getItemPanel()
    if itemPanel == nil then
        return 0, 0
    end
    local size = itemPanel:getContentSize()
    return size.width, size.height
end

function TeaHouseMemberView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local infoItem = nil
        if self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberApplyItem")
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER then
            if TeaHouse.manager.teaHouseVisualCardTransferModule:isShowTwoCardInfo() then
                infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberListItemEx")
            else
                infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberListItem")
            end
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseInactiveMemberListItem")
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.LOG then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberLogItem")
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseKickOutLogItem")
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberAddCardLogItem")
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MUTEX then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberMutexItem")
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INVITEFRIEND then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberMutexHeadListItem")
        end
        if self._tabType == TeaHouseMemberView.TAB_TYPE.INVITEFRIEND then
            if infoItem ~= nil then
                infoItem:setAnchorPoint(cc.p(0, 0))
                infoItem:setPosition(0, 0)
                infoItem:setName("InfoItem")
                local itemPanel = self:getItemPanel()
                if itemPanel then
                    infoItem:setContentSize(itemPanel:getContentSize())
                    ccui.Helper:doLayout(infoItem)
                end
                cell:addChild(infoItem)
                local singleLineHeadCount = TeaHouseMemberMutexHeadListItem.KW_PLAYER_MAX_COUNT
                local tempPlayerInfos = {}
                for i = index*singleLineHeadCount + 1, index*singleLineHeadCount + singleLineHeadCount do
                    local tempInfo = self._showInfoList[i]
                    if not tempInfo then
                        break
                    end
                    table.insert(tempPlayerInfos, tempInfo)
                end
                infoItem:updateInfo(tempPlayerInfos, TeaHouseMemberView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT)
            end
        else
            if infoItem ~= nil then
                infoItem:setAnchorPoint(cc.p(0, 0))
                infoItem:setPosition(0, 0)
                infoItem:setName("InfoItem")
                local itemPanel = self:getItemPanel()
                if itemPanel then
                    infoItem:setContentSize(itemPanel:getContentSize())
                    ccui.Helper:doLayout(infoItem)
                end
                cell:addChild(infoItem)
            end
        end
    else
        --已经生成的cell也要做适配
        local infoItem = cell:getChildByName("InfoItem")
        local itemPanel = self:getItemPanel()
        if itemPanel then
            infoItem:setContentSize(itemPanel:getContentSize())
            ccui.Helper:doLayout(infoItem)
        end
    end
    local infoItem = cell:getChildByName("InfoItem")
    if infoItem ~= nil then
        infoItem:updateInfo(self._infoList[index + 1])
    end
    return cell
end

function TeaHouseMemberView:onNumberOfCellsInTableView(tableView)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.INVITEFRIEND then
        local singleLineHeadCount = 5
        return math.ceil( #self._showInfoList / singleLineHeadCount )
    end
    return #self._infoList
end

function TeaHouseMemberView:onApply1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._textproxyFeeInfo:setVisible(false)    
    self:setTabType(TeaHouseMemberView.TAB_TYPE.APPLY)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_10)
end

function TeaHouseMemberView:onApply2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_10)
end

function TeaHouseMemberView:onMember1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseMemberView.TAB_TYPE.MEMBER)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_12)
end

function TeaHouseMemberView:onMember2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_12)
end

function TeaHouseMemberView:onLog1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseMemberView.TAB_TYPE.LOG)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_20)
end

function TeaHouseMemberView:onLog2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_20)
end

function TeaHouseMemberView:onAddCardLog1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseMemberView.TAB_TYPE.ADDCARDLOG)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_21)
end

function TeaHouseMemberView:onAddCardLog2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_21)
end

function TeaHouseMemberView:onMutex1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseMemberView.TAB_TYPE.MUTEX)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_22)
end

function TeaHouseMemberView:onMutex2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_22)
end

function TeaHouseMemberView:onInviteFriend1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseMemberView.TAB_TYPE.INVITEFRIEND)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_103)
end

function TeaHouseMemberView:onInviteFriend2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_103)
end

function TeaHouseMemberView:onKickLog1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setTabType(TeaHouseMemberView.TAB_TYPE.KICKLOG)
    -- TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_103)
end

function TeaHouseMemberView:onKickLog2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_103)
end

function TeaHouseMemberView:onInactiveMember1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setTabType(TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
    -- TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_103)
end

function TeaHouseMemberView:onInactiveMember2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_103)
end

function TeaHouseMemberView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    -- 测试代码，方便调试
    -- package.loaded["teahouse.View.TeaHouseMemberView"] = nil
    -- package.loaded["teahouse.View.TeaHouseMemberItem.TeaHouseKickOutLogItem"] = nil
    -- package.loaded["teahouse.View.TeaHouseMemberItem.TeaHouseInactiveMemberListItem"] = nil
end

function TeaHouseMemberView:onSearchClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setSearchState(true)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_11)
end

function TeaHouseMemberView:onRefreshClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setSearchState(false)
end

function TeaHouseMemberView:onBatchClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local teaHouseSelectPlayers = TeaHouse.manager.teahouseMember:getTeaHouseSelectPlayers()
    local _ids = {}
    local teahouseData = TeaHouse.manager.teahouseData
    for i, v in pairs(teaHouseSelectPlayers) do
        if v == true then
            local memberInfo = teahouseData:getMemberInfo(TeaHouse.BridgeData.getAreaID(), i)
            if memberInfo then
                table.insert(_ids, i)
            else
                TeaHouse.manager.teahouseMember:setTeaHouseSelectPlayers(i, false)
            end
        end
    end
    if #_ids == 0 then
        TeaHouse.TipTool.showToast("BATCH_TIP")
    else        
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
        funcOK = function()
            if not self or tolua.isnull(self) then
                return
            end
            -- 确定后再次判断，以免这期间有数据出入
            local ids = {}
            local areaid
            local numid
            local tableid
            for i, v in pairs(_ids) do
                local memberInfo = teahouseData:getMemberInfo(TeaHouse.BridgeData.getAreaID(), v)
                if memberInfo then
                    if areaid==nil then
                        areaid = memberInfo.areaid
                        numid = memberInfo.numid
                        tableid = memberInfo.tableid
                    end
                    table.insert(ids, v)
                else
                    TeaHouse.manager.teahouseMember:setTeaHouseSelectPlayers(v, false)
                end
            end
            if #ids == 0 then
                TeaHouse.TipTool.showToast("BATCH_TIP_NOT_EXITS")
            else
                TeaHouse.manager.teahouseMember:kickMember(areaid, numid, tableid,ids)
            end
        end }, "IS_BATCH_KICKOUT_PLAYER", #_ids)          
    end
end

function TeaHouseMemberView:onHideFilterClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterState(false)
end

function TeaHouseMemberView:onShowFilterClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterState(true)
end

function TeaHouseMemberView:onHideFilterDayClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterDayState(false)
end

function TeaHouseMemberView:onShowFilterDayClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterDayState(true)
end

function TeaHouseMemberView:onHideFilterTimeClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterTimeState(false)
end

function TeaHouseMemberView:onShowFilterTimeClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterTimeState(true)
end


function TeaHouseMemberView:onFilterClicked(send, eventType, type)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterType(type)
    self:setFilterState(false)
end

function TeaHouseMemberView:onFilterDayClicked(send, eventType, type)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterDayType(type)
    self:setFilterDayState(false)
    self:changeInactiveList(false)
end

function TeaHouseMemberView:onFilterTimeClicked(send, eventType, type)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setFilterTimeType(type)
    self:setFilterTimeState(false)
    self:changeInactiveList(false)
end

function TeaHouseMemberView:onAddMutexClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.viewManager:openView("TeaHouseMutexView")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_23)
end

function TeaHouseMemberView:setTabType(tabType,isAdminRightUpdate)
    if self._tabType == tabType then
        if isAdminRightUpdate and (self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER or self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG) then
        else
            return
        end
    end

    if self._tabType == nil then
        for i = 1, #self._tabNodes do
            self._tabNodes[i][1]:setVisible(true)
            self._tabNodes[i][2]:setVisible(false)
        end
    else
        for i = 1, #self._tabNodes do
            if i == self._tabType then
                self._tabNodes[i][1]:setVisible(true)
                self._tabNodes[i][2]:setVisible(false)
                break
            end
        end
    end
    self._tabType = tabType
    for i = 1, #self._tabNodes do
        if i == self._tabType then
            self._tabNodes[i][1]:setVisible(false)
            self._tabNodes[i][2]:setVisible(true)
            break
        end
    end

    if self._panelFilter then
        self._panelFilter:setVisible(self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER)
    end
    if self._panelFilterDay then
        self._panelFilterDay:setVisible(self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
    end
    if self._panelFilterTime then
        self._panelFilterTime:setVisible(self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
    end
    if self._panelApplyBottom then
        local isOwner = TeaHouse.manager.teahouseData:isOwner()
        local isAdmin = TeaHouse.manager.teahouseData:isAdmin()
        local showAllApproveDeny = XH.lobby:getModule("FriendTea"):isCurAreaShowAllApproveDeny()
        self._panelApplyBottom:setVisible(self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY and showAllApproveDeny and (isOwner or isAdmin))
    end
    if self._btnCardModeTransfer then
        self._btnCardModeTransfer:setVisible(self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER and TeaHouse.manager.teaHouseVisualCardTransferModule:isNeedShowMainEntry())
    end
    if self._btnBatch then
        if self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER then
            local teahouseData = TeaHouse.manager.teahouseData
            if teahouseData:isOwner() or (teahouseData:isAdmin() and teahouseData:checkSelfPower("ModifyMember") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.AUDIT)) then
                self._btnBatch:setVisible(true)
            -- 自己是副领队，但是没有踢人权限，不展示
            else
                self._btnBatch:setVisible(false)
            end
        else
            self._btnBatch:setVisible(false)
        end
    end    
    if self._textSearch1 then
        self._textSearch1:setVisible(self._tabType ~= TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
    end
    if self._imgSearch then
        self._imgSearch:setVisible(self._tabType ~= TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
    end
    if self._btnSearch then
        self._btnSearch:setVisible(self._tabType ~= TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
    end
    if self._btnRefresh then
        self._btnRefresh:setVisible(self._isSearch and self._tabType ~= TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER)
    end

    if self._panelSearchDate then
        self:initDate(os.time())
        -- self._panelSearchDate:setVisible(self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG and TeaHouse.LOBBY_ID.BAOBAO  == TeaHouse.BridgeData.getLobbyID())
        self._panelSearchDate:setVisible(false)
    end
    self:setFilterState(false)
    self:setFilterDayState(false)
    self:setFilterTimeState(false)
    local listType = TeaHouseMemberView.LIST_TYPE.TYPE_1
    if self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY then
        local friendsInfo = XH.lobby:getModule("FriendTea"):getApplyFriendsInfo(TeaHouse.manager.teahouseData:getTeaNumber())
        self:changeApplyList(true, friendsInfo)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER then
        self:changeMemberList(true)
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig.MemberMangeProxyFeeInfo ~= 0 then
            local teahouseData = TeaHouse.manager.teahouseData
            local payTypes = teahouseData:getPayTypeByID()
            if payTypes then
                for _, payType in pairs(payTypes) do
                    if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA 
                    or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
                        TeaHouse.manager.teahouseMember:reqGetTeaTableCard()
                    end
                end
            end
        end
        if  TeaHouse.manager.configManager.SetupConfig.IsCloseAdminIcon  then
            if self._panelFilter then
                self._panelFilter:setVisible(false)
            end
        end
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER then
        self:changeInactiveList(true)
        -- self:changeKickLogList(true)
        -- TeaHouse.manager.teahouseMember:reqSystemTime()
        -- TeaHouse.manager.teahouseMember:reqTeaHouseKickLog()
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.LOG then
        self:changeLogList(true)
        TeaHouse.manager.teahouseMember:reqSystemTime()
        TeaHouse.manager.teahouseMember:reqTeaHouseLog()
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG then
        self:changeAddCardLogList(true)
        TeaHouse.manager.teahouseMember:reqTeaHouseAddCardLog(TeaHouse.manager.teahouseMember:getCurAddCardLogTimeIndex())
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MUTEX then
        listType = TeaHouseMemberView.LIST_TYPE.TYPE_2
        self:changeMutexList(true)
        TeaHouse.manager.teahouseMember:reqForbidPlayInSameTable()
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INVITEFRIEND then
        listType = TeaHouseMemberView.LIST_TYPE.TYPE_3
        self:changeInviteFriendList(true)
        TeaHouse.manager.teahouseMain:onReqTeaInviteActivityPlayerList()
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG then
        self:changeKickLogList(true)
        TeaHouse.manager.teahouseMember:reqSystemTime()
        TeaHouse.manager.teahouseMember:reqTeaHouseKickLog()
    end
    if self._panelListRoot1 then
        self._panelListRoot1:setVisible(listType == TeaHouseMemberView.LIST_TYPE.TYPE_1)
    end
    if self._panelListRoot2 then
        self._panelListRoot2:setVisible(listType == TeaHouseMemberView.LIST_TYPE.TYPE_2)
    end
    if self._panelListRoot3 then
        self._panelListRoot3:setVisible(listType == TeaHouseMemberView.LIST_TYPE.TYPE_3)
    end
    self._panelGuide:setVisible(self._guideType == tabType)
end

function TeaHouseMemberView:onScrollToBottom()
    if self._tabType == TeaHouseMemberView.TAB_TYPE.LOG then
        local teahouseMember = TeaHouse.manager.teahouseMember
        teahouseMember:reqTeaHouseLog(teahouseMember:getTeaHouseLogCount())
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG then
        local teahouseMember = TeaHouse.manager.teahouseMember
        teahouseMember:reqTeaHouseLog(teahouseMember:getTeaHouseKickLogCount())
        -- elseif self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG then
        -- local teahouseMember = TeaHouse.manager.teahouseMember
        -- teahouseMember:reqTeaHouseAddCardLog()
    end
end

function TeaHouseMemberView:onMemberListUpdate(event)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY then
        self:updateApplyList(event.msg.areaID, event.msg.numID)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER or self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG then
        self:updateMemberList(event.msg.areaID, event.msg.numID)
    end
end

function TeaHouseMemberView:onMemberListChanged(event)
    local userIds = {}
    local teahouseData = TeaHouse.manager.teahouseData
    for i, memberInfo in pairs(teahouseData:getMemberInfos()) do
        if memberInfo.numid ~= TeaHouse.BridgeData.getNumberID() then
            if teahouseData:isMemberInJoin(memberInfo) or teahouseData:isMemberInQuit(memberInfo) then
                table.insert(userIds, memberInfo.numid)
            end
        end
    end
    if #userIds > 0 then
        local data = {clubId=TeaHouse.manager.teahouseData:getTeaNumber(), userIds=userIds}
		XH.lobby:getModule("FriendTea"):reqBBClubApplyFriends(data)
    end
    self:reloadMemberList()
end

function TeaHouseMemberView:onGetApplyFriendInfo(event)
    if event.msg.userInfos and next(event.msg.userInfos) ~= nil and event.msg.clubId == TeaHouse.manager.teahouseData:getTeaNumber() then
        if self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY then
            self:changeApplyList(false, event.msg.userInfos)
        elseif self._tabType == TeaHouseMemberView.TAB_TYPE.LOG then
            self:changeLogList(false, event.msg.userInfos)
        end
    end
end

function TeaHouseMemberView:onAdminRightUpdate(event)
    self:updateTabs(true)
    self:reloadMemberList()
end

function TeaHouseMemberView:onLogListChanged(event)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.LOG then
        self:changeLogList(false)
    end
end

function TeaHouseMemberView:onKickOutLogListChanged(event)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG then
        self:changeKickLogList(false)
    end
end

function TeaHouseMemberView:onAddCardLogListChanged(event)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG then
        self:changeAddCardLogList(false)
    end
end

function TeaHouseMemberView:onForbidListChanged(event)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.MUTEX then
        self:changeMutexList(false)
    end
end

function TeaHouseMemberView:onTeaTableCardChanged(event)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER then
        self._textproxyFeeInfo:setVisible(true)
        self._textproxyFeeInfo:setString(event.info)
    end
end


function TeaHouseMemberView:reloadList()
    if self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY then
        self:changeApplyList(false)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER then
        self:changeMemberList(false)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER then
        self:changeInactiveList(false)        
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.LOG then
        self:changeLogList(false)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG then
        self:changeKickLogList(false)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG then
        self:changeAddCardLogList(false)
    end
end

function TeaHouseMemberView:reloadMemberList()
    if self._tabType == TeaHouseMemberView.TAB_TYPE.APPLY then
        local friendsInfo = XH.lobby:getModule("FriendTea"):getApplyFriendsInfo(TeaHouse.manager.teahouseData:getTeaNumber())
        self:changeApplyList(false, friendsInfo)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER then
        self:changeMemberList(false)
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.INACTIVEMEMBER then
        self:changeInactiveList(false)
    end
end

function TeaHouseMemberView:onMemberListNotice(event)
    TeaHouse.manager.teahouseMember:reqDealPower()
end

-- function TeaHouseMemberView:onInviteMember(event)
--     TeaHouse.manager.teahouseMember:reqDealPower()
--     TeaHouse.manager.teahouseMember:reqTeaHouseKickLog()
-- end

--请出记录邀请玩家进圈后，重新刷新一下成员列表和请出记录
function TeaHouseMemberView:onPayModeUpdate(event)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER then
        self:changeMemberList(false)
    end
end

function TeaHouseMemberView:changeApplyList(isCleanup, friendsInfo)
    self._infoList = {}
    friendsInfo = friendsInfo or XH.lobby:getModule("FriendTea"):getApplyFriendsInfo(TeaHouse.manager.teahouseData:getTeaNumber())
    local teahouseData = TeaHouse.manager.teahouseData
    for i, memberInfo in pairs(teahouseData:getMemberInfos()) do
        if memberInfo.numid ~= TeaHouse.BridgeData.getNumberID() then
            if teahouseData:isMemberInJoin(memberInfo) or teahouseData:isMemberInQuit(memberInfo) then
                if self:isInMemberFilter(memberInfo) then
                    local friendInfo = friendsInfo[memberInfo.numid .. ""]
                    local isFromFriend = (friendInfo and friendInfo.users) ~= nil and teahouseData:isMemberInJoin(memberInfo)
                    memberInfo.isFromFriend = isFromFriend
                    memberInfo.friendInfo = friendInfo and friendInfo.users or nil
                    if self._filterIdx == 1 or (self._filterIdx == 2 and not isFromFriend) or (self._filterIdx == 3 and isFromFriend) then
                        self._infoList[#self._infoList + 1] = memberInfo
                    end
                end
            end
        end
    end

    table.sort(self._infoList, function(info1, info2)
        return info1.nAskTime > info2.nAskTime
    end)

    self:refreshTableView(isCleanup)
    if self._guideType == TeaHouseMemberView.TAB_TYPE.APPLY and self._tvInfoList:cellAtIndex(0) then
        self:showJoinGuide(self._tvInfoList:cellAtIndex(0))
    else
        self._panelGuide:removeAllChildren()
    end
end

function TeaHouseMemberView:changeMemberList(isCleanup)
    self._infoList = {}
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local isShowSelf = SwitchConfig.ShowSelfInMember ~= 0
    for _, memberInfo in pairs(teahouseData:getMemberInfos()) do
        if isShowSelf or memberInfo.numid ~= TeaHouse.BridgeData.getNumberID() then
            if teahouseData:isMemberInMember(memberInfo) then
                if self:isInMemberFilter(memberInfo) then
                    if self._filterType == TeaHouseMemberView.MEMBER_FILTER.ALL then
                        if TeaHouse.BridgeData:isRemodelArea() and memberInfo.nUserRight == TeaHouse.manager.teahouseData.IDENTITY.OWNER and memberInfo.numid ~= TeaHouse.BridgeData.getNumberID() then
                            --副领队和普通玩家的列表里不显示领队,领队自己可以看到
                        else
                            self._infoList[#self._infoList + 1] = memberInfo
                        end
                    elseif self._filterType == TeaHouseMemberView.MEMBER_FILTER.ADMIN then
                        if teahouseData:isPlayerAdmin(memberInfo) then
                            self._infoList[#self._infoList + 1] = memberInfo
                        end
                    elseif self._filterType == TeaHouseMemberView.MEMBER_FILTER.BLACK then
                        if teahouseData:isPlayerBlack(memberInfo) then
                            self._infoList[#self._infoList + 1] = memberInfo
                        end
                    elseif self._filterType == TeaHouseMemberView.MEMBER_FILTER.MEMBER then
                        if not teahouseData:isPlayerAdmin(memberInfo) and not teahouseData:isPlayerBlack(memberInfo)  then
                            if  TeaHouse.BridgeData:isRemodelArea() and memberInfo.nUserRight == TeaHouse.manager.teahouseData.IDENTITY.OWNER then
                                --副领队和普通玩家的列表里不显示领队,领队自己可以看到
                            else
                                self._infoList[#self._infoList + 1] = memberInfo
                            end
                        end
                    end
                end
            end
        end
    end
    table.sort(self._infoList, function(info1, info2)
        local isPlayerAdmin1 = teahouseData:isPlayerAdmin(info1)
        local isPlayerAdmin2 = teahouseData:isPlayerAdmin(info2)
        local isOffLine1 = info1.bOffLine
        local isOffLine2 = info2.bOffLine
        if isPlayerAdmin1 == isPlayerAdmin2 then
            if isOffLine1 == isOffLine2 then
                if isOffLine1 then
                    if info1.nLastLeaveTime == info2.nLastLeaveTime then
                        return info1.nJoinTime < info2.nJoinTime
                    end
                    return info1.nLastLeaveTime > info2.nLastLeaveTime
                else
                    return info1.nJoinTime < info2.nJoinTime
                end
            else
                if isOffLine1 then
                    return false
                end
                if isOffLine2 then
                    return true
                end
            end
        else
            return isPlayerAdmin1
        end
    end)

    self:refreshTableView(isCleanup)
    local memberNum = TeaHouse.manager.teaHouseGuide:getTeaHouseFirstMember()
    if self._guideType == TeaHouseMemberView.TAB_TYPE.MEMBER then 
        if self._tvInfoList:cellAtIndex(memberNum) then
            self:showMemberPower(self._tvInfoList:cellAtIndex(memberNum))
        else
            self._panelGuide:setVisible(false)
            self._guideType = TeaHouseMemberView.TAB_TYPE.NONE
        end
    end
end

function TeaHouseMemberView:changeInactiveList(isCleanup)
    self._infoList = {}
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local isShowSelf = true -- SwitchConfig.ShowSelfInMember ~= 0
    local filterDay = 7
    if self._filterDayType == 1 then
        filterDay = 7
    elseif self._filterDayType == 2 then
        filterDay = 15
    elseif self._filterDayType == 3 then
        filterDay = 30
    end
    for _, memberInfo in pairs(teahouseData:getMemberInfos()) do
        if isShowSelf or memberInfo.numid ~= TeaHouse.BridgeData.getNumberID() then
            if teahouseData:isMemberInMember(memberInfo) then               
                if memberInfo.nUserRight ~= TeaHouse.manager.teahouseData.IDENTITY.OWNER and not TeaHouse.manager.teahouseMember:judgeRecordDay(memberInfo.nLastFightTime,filterDay) then
                    self._infoList[#self._infoList + 1] = memberInfo
                end                
            end
        end
    end

    table.sort(self._infoList, function(info1, info2)        
        if self._filterTimeType == 1 and info1.nLastFightTime ~= info2.nLastFightTime then            
            return info1.nLastFightTime < info2.nLastFightTime
        elseif self._filterTimeType == 2 and info1.nLastFightTime ~= info2.nLastFightTime then            
            return info1.nLastFightTime > info2.nLastFightTime
        else
            local lastTime1 = info1.nLastLeaveTime
            if lastTime1 < info1.nJoinTime then
                lastTime1 = info1.nJoinTime
            end
            local lastTime2 = info2.nLastLeaveTime
            if lastTime2 < info2.nJoinTime then
                lastTime2 = info2.nJoinTime
            end
            if self._filterTimeType == 3 or self._filterTimeType == 1 then            
                return lastTime1 < lastTime2
            else
                return lastTime1 > lastTime2
            end
        end
    end)

    -- table.sort(self._infoList, function(info1, info2)
    --     local isPlayerAdmin1 = teahouseData:isPlayerAdmin(info1)
    --     local isPlayerAdmin2 = teahouseData:isPlayerAdmin(info2)
    --     local isOffLine1 = info1.bOffLine
    --     local isOffLine2 = info2.bOffLine
    --     if isPlayerAdmin1 == isPlayerAdmin2 then
    --         if isOffLine1 == isOffLine2 then
    --             if isOffLine1 then
    --                 if info1.nLastLeaveTime == info2.nLastLeaveTime then
    --                     return info1.nJoinTime < info2.nJoinTime
    --                 end
    --                 return info1.nLastLeaveTime > info2.nLastLeaveTime
    --             else
    --                 return info1.nJoinTime < info2.nJoinTime
    --             end
    --         else
    --             if isOffLine1 then
    --                 return false
    --             end
    --             if isOffLine2 then
    --                 return true
    --             end
    --         end
    --     else
    --         return isPlayerAdmin1
    --     end
    -- end)

    self:refreshTableView(isCleanup)
    
end

function TeaHouseMemberView:changeLogList(isCleanup, friendsInfo)
    self._infoList = {}
    local userIds = {}
    local teahouseData = TeaHouse.manager.teahouseData
    for _, logInfo in pairs(TeaHouse.manager.teahouseMember:getTeaHouseLogs()) do
        if logInfo.nPlayerNumId ~= TeaHouse.BridgeData.getNumberID() then
            if self:isInLogFilter(logInfo) then
                self._infoList[#self._infoList + 1] = logInfo
                if logInfo.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.JOIN then
                    local friendInfo = friendsInfo and friendsInfo[logInfo.nPlayerNumId .. ""]
                    local isFromFriend = (friendInfo and friendInfo.users) ~= nil
                    logInfo.isFromFriend = isFromFriend
                    logInfo.friendInfo = friendInfo and friendInfo.users or nil
                    table.insert(userIds, logInfo.nPlayerNumId)
                end
            end
        end
    end
    table.sort(self._infoList, function(info1, info2)
        return info1.nTime > info2.nTime
    end)
    self:refreshTableView(isCleanup, not isCleanup)

    if friendsInfo == nil and #userIds > 0 then
        local data = {clubId=TeaHouse.manager.teahouseData:getTeaNumber(), userIds=userIds}
		XH.lobby:getModule("FriendTea"):reqBBClubApplyFriends(data)
    end
end

function TeaHouseMemberView:changeKickLogList(isCleanup)
    self._infoList = {}
    local teahouseData = TeaHouse.manager.teahouseData
    for _, logInfo in pairs(TeaHouse.manager.teahouseMember:getTeaHouseKickLogs()) do
        if logInfo.nPlayerNumId ~= TeaHouse.BridgeData.getNumberID() then
            if self:isInLogFilter(logInfo) then
                self._infoList[#self._infoList + 1] = logInfo
            end
        end
    end
    table.sort(self._infoList, function(info1, info2)
        return info1.nTime > info2.nTime
    end)
    self:refreshTableView(isCleanup, not isCleanup)
end

function TeaHouseMemberView:changeAddCardLogList(isCleanup)
    self._infoList = {}
    local teahouseData = TeaHouse.manager.teahouseData
    for _, logInfo in pairs(TeaHouse.manager.teahouseMember:getTeaHouseAddCardLogs()) do
        if self:isInAddCardLogFilter(logInfo) then
            self._infoList[#self._infoList + 1] = logInfo
        end
    end
    table.sort(self._infoList, function(info1, info2)
        if info1.nOptTime and  info2.nOptTime then
            return info1.nOptTime > info2.nOptTime
        else
            return info1.time > info2.time
        end
    end)
    self:refreshTableView(isCleanup, not isCleanup)
end

function TeaHouseMemberView:changeMutexList(isCleanup)
    self._infoList = {}
    local teahouseData = TeaHouse.manager.teahouseData
    self._infoList = TeaHouse.manager.teahouseMember:getTeaHouseForbid()
    self:refreshTableView(isCleanup)

    if self._textNoMutex then
        self._textNoMutex:setVisible(#self._infoList == 0)
    end
end

function TeaHouseMemberView:updateApplyList(areaID, numID)
    if self._tvInfoList ~= nil then
        self._tvInfoList:reloadData()
    end
end

function TeaHouseMemberView:updateMemberList(areaID, numID)
    if self._tvInfoList == nil then
        return
    end

    for index, playerInfo in ipairs(self._infoList) do
        if playerInfo.areaid == areaID and playerInfo.numid == numID then
            local cell = self._tvInfoList:cellAtIndex(index - 1)
            if cell == nil then
                break
            end
            local infoItem = cell:getChildByName("InfoItem")
            if infoItem == nil then
                break
            end
            infoItem:updateInfo(self._infoList[index])
            break
        end
    end
end

function TeaHouseMemberView:setFilterState(isShow)
    if self._imgPopFilterBg then
        self._imgPopFilterBg:setVisible(isShow)
    end
    if self._btnHideFilter then
        self._btnHideFilter:setVisible(isShow)
    end
    if self._btnShowFilter then
        self._btnShowFilter:setVisible(not isShow)
    end
    if self._panelFilterMask then
        if isShow and self._panelRoot and self._panelFilter then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelFilter:convertToNodeSpace(rootPosition)
            self._panelFilterMask:setPosition(rootPosition)
            self._panelFilterMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelFilterMask:setVisible(isShow)
    end
end

function TeaHouseMemberView:setFilterDayState(isShow)
    if self._imgPopFilterDayBg then
        self._imgPopFilterDayBg:setVisible(isShow)
    end
    if self._btnHideFilterDay then
        self._btnHideFilterDay:setVisible(isShow)
    end
    if self._btnShowFilterDay then
        self._btnShowFilterDay:setVisible(not isShow)
    end
    if self._panelFilterDayMask then
        if isShow and self._panelRoot and self._panelFilterDay then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelFilterDay:convertToNodeSpace(rootPosition)
            self._panelFilterDayMask:setPosition(rootPosition)
            self._panelFilterDayMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelFilterDayMask:setVisible(isShow)
    end
end

function TeaHouseMemberView:setFilterTimeState(isShow)
    if self._imgPopFilterTimeBg then
        self._imgPopFilterTimeBg:setVisible(isShow)
    end
    if self._btnHideFilterTime then
        self._btnHideFilterTime:setVisible(isShow)
    end
    if self._btnShowFilterTime then
        self._btnShowFilterTime:setVisible(not isShow)
    end
    if self._panelFilterTimeMask then
        if isShow and self._panelRoot and self._panelFilterTime then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelFilterTime:convertToNodeSpace(rootPosition)
            self._panelFilterTimeMask:setPosition(rootPosition)
            self._panelFilterTimeMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelFilterTimeMask:setVisible(isShow)
    end
end

function TeaHouseMemberView:setFilterType(filterType)
    if self._filterType == filterType then
        return
    end
    if not self._textFilterSelect then
        return
    end
    local textFilter = self["_textFilter" .. filterType]
    if not textFilter then
        return
    end
    self._textFilterSelect:setString(textFilter:getString())
    self._filterType = filterType
    self:reloadMemberList()
end

function TeaHouseMemberView:setFilterDayType(filterType)
    if self._filterDayType == filterType then
        return
    end
    if not self._textFilterDaySelect then
        return
    end
    local textFilter = self["_textFilterDay" .. filterType]
    if not textFilter then
        return
    end
    self._textFilterDaySelect:setString(textFilter:getString())
    self._filterDayType = filterType
    -- self:reloadMemberList()
end

function TeaHouseMemberView:setFilterTimeType(filterType)
    if self._filterTimeType == filterType then
        return
    end
    if not self._textFilterTimeSelect then
        return
    end
    local textFilter = self["_textFilterTime" .. filterType]
    if not textFilter then
        return
    end
    self._textFilterTimeSelect:setString(textFilter:getString())
    self._filterTimeType = filterType
    -- self:reloadMemberList()
end

function TeaHouseMemberView:isInMemberFilter(playerInfo)
    if not self._isSearch then
        return true
    end
    local searchString = ""
    if self._textSearch then
        searchString = self._textSearch:getString()
    end
    if string.find(playerInfo.nickName, searchString, 1, true) then
        return true
    end
    local isDigitText = true
    for i = 1, #searchString do
        local searchChar = string.byte(searchString, i, i)
        if searchChar < 48 or searchChar > 57 then
            isDigitText = false
            break
        end
        i = i + TeaHouse.StringTool.privateGuessUTFLen(searchChar)
    end
    if isDigitText then
        local numID = tostring(playerInfo.numid)
        if #numID >= 2 then
            return string.find(numID, searchString, 1, true)
        end
    end
    return false
end

function TeaHouseMemberView:isInLogFilter(logInfo)
    if not self._isSearch then
        return true
    end
    local searchString = ""
    if self._textSearch then
        searchString = self._textSearch:getString()
    end
    if string.find(logInfo.acNickName, searchString, 1, true) then
        return true
    end
    local isDigitText = true
    for i = 1, #searchString do
        local searchChar = string.byte(searchString, i, i)
        if searchChar < 48 or searchChar > 57 then
            isDigitText = false
            break
        end
        i = i + TeaHouse.StringTool.privateGuessUTFLen(searchChar)
    end
    if isDigitText then
        local numID = tostring(logInfo.nPlayerNumId)
        if #numID >= 2 then
            return string.find(numID, searchString, 1, true)
        end
    end
    return false
end

function TeaHouseMemberView:setSearchState(isSearch)
    local searchString = ""
    if self._textSearch then
        searchString = self._textSearch:getString()
    end
    if #searchString <= 0 then
        isSearch = false
    end
    if not self._isSearch and not isSearch then
        return
    end
    self._isSearch = isSearch
    if self._btnRefresh then
        self._btnRefresh:setVisible(self._isSearch)
    end
    if not self._isSearch then
        if self._tfSearch and self._textSearch then
            self._tfSearch:setText("")
            self._textSearch:setString("")
        end
    end
    self:reloadList()
end

function TeaHouseMemberView:setDateFilterState(bShow)
    if self._panelDateFilterBG then
        self._panelDateFilterBG:setVisible(bShow)
    end
    if self._btnShowDate then
        self._btnShowDate:setVisible(not bShow)
    end
    if self._btnHideDate then
        self._btnHideDate:setVisible(bShow)
    end
    if self._panelSearchDateMask then
        if bShow and self._panelRoot and self._panelSearchDate then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelSearchDate:convertToNodeSpace(rootPosition)
            self._panelSearchDateMask:setPosition(rootPosition)
            self._panelSearchDateMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelSearchDateMask:setVisible(bShow)
    end
end

function TeaHouseMemberView:onShowSearchDate(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setDateFilterState(true)
end

function TeaHouseMemberView:onHideSearchDate(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setDateFilterState(false)
end

function TeaHouseMemberView:initDate(date)
    local nCurTime = date
    self._textSearchDate:setString(os.date("%Y-%m-%d", nCurTime))
    local canShowDays = TeaHouse.manager.teahouseMember.KW_SHOW_ADD_CARD_LOG_DAY
    for i = 1, canShowDays do
        local btnFilter = self["_btnFilterDate" .. i]
        if btnFilter then
            btnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangeDate(send, eventType, i)
            end)
            btnFilter:setTitleText(os.date("%Y-%m-%d", nCurTime - 86400 * (canShowDays - i)))
        end
    end
end

function TeaHouseMemberView:onTouchEventChangeDate(send, eventType, index)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setDateFilterState(false)
    if index == TeaHouse.manager.teahouseMember:getCurAddCardLogTimeIndex() then
        return
    end
    local curBillDate = send:getTitleText()
    self._textSearchDate:setString(curBillDate)
    self._infoList = {}
    self:refreshTableView(false)
    TeaHouse.manager.teahouseMember:onChangeDate(index)
end

function TeaHouseMemberView:isInAddCardLogFilter(addCardInfo)
    if not self._isSearch then
        return true
    end
    local searchString = ""
    if self._textSearch then
        searchString = self._textSearch:getString()
    end
    if addCardInfo.tToUserinfo then
        if  string.find(addCardInfo.tToUserinfo.acNickName, searchString, 1, true) then
            return true
        end
        local isDigitText = true
        for i = 1, #searchString do
            local searchChar = string.byte(searchString, i, i)
            if searchChar < 48 or searchChar > 57 then
                isDigitText = false
                break
            end
            i = i + TeaHouse.StringTool.privateGuessUTFLen(searchChar)
        end
        if isDigitText then
            local numID = tostring(addCardInfo.tToUserinfo.nNumId)
            if #numID >= 2 then
                return string.find(numID, searchString, 1, true)
            end
        end
    else
        local isDigitText = true
        for i = 1, #searchString do
            local searchChar = string.byte(searchString, i, i)
            if searchChar < 48 or searchChar > 57 then
                isDigitText = false
                break
            end
            i = i + TeaHouse.StringTool.privateGuessUTFLen(searchChar)
        end
        if isDigitText then
            local numID = tostring(addCardInfo.player_numid)
            if #numID >= 2 then
                return string.find(numID, searchString, 1, true)
            end
        end
    end
    return false
end

function TeaHouseMemberView:showJoinGuide(cell)
    if TeaHouse.manager.teaHouseGuide:isJoinGuideFlowAgreeTip() then
        self._panelGuide:removeAllChildren()
        local teaHouseGuideTipItem = TeaHouse.manager.viewManager:createView("TeaHouseGuideTipItem.TeaHouseGuideTipItem")
        self._panelGuide:addChild(teaHouseGuideTipItem)
        self._panelGuide:setVisible(true)
        self._panelGuide:setTouchEnabled(false)
        self._panelGuide:setEnabled(false)
        local cellItem = cell:getChildByName("InfoItem")
        if cellItem then
            local agreeBtn = cellItem:getGuideTipNode()
            local item = cellItem:getGuideTipItemNode()
            local xPos, yPos = agreeBtn:getPosition()
            local worldPos = item:convertToWorldSpace(cc.p(xPos,yPos))
            worldPos = self._panelGuide:convertToNodeSpace(worldPos)
            teaHouseGuideTipItem:setPosition(worldPos)
            teaHouseGuideTipItem:updata("topright","点击同意",4)
        else
            self._panelGuide:setVisible(false)
        end
    end
end

function TeaHouseMemberView:onStartMemberPowerGuide(event)
    if event and event.data then
        self._guideType = TeaHouseMemberView.TAB_TYPE.MEMBER
        self:setTabType(TeaHouseMemberView.TAB_TYPE.MEMBER)
    else
        if self._guideType ~= TeaHouseMemberView.TAB_TYPE.APPLY then
            self._guideType = TeaHouseMemberView.TAB_TYPE.NONE
        end
        self._panelGuide:setVisible(false)
    end
end

function TeaHouseMemberView:showMemberPower(cell)
    if TeaHouse.manager.teaHouseGuide:isJoinGuideFlowPowerTip() then
        self._panelGuide:removeAllChildren()
        local teaHouseGuideTipItem = TeaHouse.manager.viewManager:createView("TeaHouseGuideTipItem.TeaHouseGuideTipItem")
        self._panelGuide:addChild(teaHouseGuideTipItem)
        self._panelGuide:setVisible(true)
        local cellItem = cell:getChildByName("InfoItem")
        local btnItem = 1
        local btnList = cellItem:getGuideTipNode()
        local item = cellItem:getGuideTipItemNode()
        local xPos, yPos = btnList[btnItem]:getPosition()
        local worldPos = item:convertToWorldSpace(cc.p(xPos, yPos))
        worldPos = self._panelGuide:convertToNodeSpace(worldPos)
        teaHouseGuideTipItem:setPosition(worldPos)

        local teahouseData = TeaHouse.manager.teahouseData
        local isPlayerOwner = teahouseData:isPlayerOwnerPayType()
        local isAgentPlayer = teahouseData:isAgentPlayerPayType()
        local isLobbyPlayer = teahouseData:isLobbyPlayerPayType()
        local payMode = teahouseData:getTeaHousePayMode()
        local payTypes = teahouseData:getPayTypeByID()
        local isWinner = false
        for _, payType in pairs(payTypes) do
            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER then
                isWinner = true
                if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
                    isWinner = false
                end
                break
            end
        end
        if (not isPlayerOwner) and(isAgentPlayer or payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON) then
            teaHouseGuideTipItem:updata("topright", "给成员添加房卡，可用来进行游戏", 2)
        elseif isWinner then
            teaHouseGuideTipItem:updata("topright", "设置成员房卡当日使用上限", 2)
        else
            btnItem = btnItem + 1
            local xPos, yPos = btnList[btnItem]:getPosition()
            worldPos = item:convertToWorldSpace(cc.p(xPos, yPos))
            worldPos = self._panelGuide:convertToNodeSpace(worldPos)
            teaHouseGuideTipItem:setPosition(worldPos)
            teaHouseGuideTipItem:updata("topright", "更多成员权限管理，请点击", 2)
        end
        btnItem = btnItem + 1
        self._panelGuide:setTouchEnabled(true)
        self._panelGuide:setEnabled(true)
        self._panelGuide:addTouchEventListener(handler(self, function(self, send, eventType)
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            if btnItem > #btnList then
                self._panelGuide:setVisible(false)
                self._guideType = TeaHouseMemberView.TAB_TYPE.NONE
                TeaHouse.manager.teaHouseGuide:endSetPlayerJoinGuide()
                return
            end
            local xPos, yPos = btnList[btnItem]:getPosition()
            local worldPos = item:convertToWorldSpace(cc.p(xPos, yPos))
            worldPos = self._panelGuide:convertToNodeSpace(worldPos)
            teaHouseGuideTipItem:setPosition(worldPos)
            teaHouseGuideTipItem:updata("topright", "更多成员权限管理，请点击", 2)
            btnItem = btnItem + 1
        end ))
    end
end

function TeaHouseMemberView:onUpdateInvitePlayerList(event)
    if event and event.msg and event.msg.playerInfo then
        self._infoList = event.msg.playerInfo or {}
        -- self._infoList = self:createTestData()
        -- for i=1,#self._infoList do        
        --     if self._infoList[i] then
        --         -- self._infoList[i].numid = "序号:".. self._infoList[i].numid
        --         -- self._infoList[i].nickName = "昵称:".. self._infoList[i].nickName
        --         self._infoList[i].bSelected = true
        --         table.insert(self._showInfoList,self._infoList[i])
        --     end
        -- end
        self:updateShowInfoList()
    end
end

function TeaHouseMemberView:updateShowInfoList()
    -- self._infoList = self:createTestData()
    self:updateShowInfoListData()
    self:refreshTableView()
end

function TeaHouseMemberView:updateShowInfoListData()
    self._noPlayerTextTip:setVisible(#self._infoList == 0)
    self._btnInviteAll:setVisible(#self._infoList > 0)
    self._btnInviteShare:setVisible(#self._infoList == 0)
    self._textIVTip:setVisible(#self._infoList > 0)
    self._changeList:setVisible(#self._infoList > 0)
    self._InviteListHide:setVisible(false)
    self._showInfoList = {}
    for i=1,ONE_PAGE_SHOW_ITEM do--展示的列表只展示前10个。。
        if self._infoList[i] then
            self._infoList[i].bSelected = true
            table.insert(self._showInfoList,self._infoList[i])
        end
    end
end

function TeaHouseMemberView:onHeadSelect(event)
    if event.playerID == nil or event.bSelected == nil then
        return 
    end
    if event.bSelected then
        for i,v in pairs(self._showInfoList) do 
            if event.playerID == v.numid then
                self._showInfoList[i].bSelected = true
            end
        end
    else
        for i,v in pairs(self._showInfoList) do
            if event.playerID == v.numid then
                self._showInfoList[i].bSelected = false
            end
        end
    end
    --是否灰置判断
    local canClickIVAllBtn = true
    local unSelectNum = 0
    for _,v in pairs(self._showInfoList) do 
        if v.bSelected == false then
            unSelectNum = unSelectNum + 1
        end
    end
    if unSelectNum == #self._showInfoList then
        self._btnInviteAll:setEnabled(false)
    else
        self._btnInviteAll:setEnabled(true)
    end
end

function TeaHouseMemberView:changeInviteFriendList(isClean)
    self._infoList = {}
    self:refreshTableView(isClean)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_106)
end

function TeaHouseMemberView:onClickInviteAll(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --等服务接口，一键邀请所有玩家
    local acceptNumidTab = {}
    for i,v in pairs(self._showInfoList) do
        if v.bSelected == true then
            self._showInfoList[i].state = 1
            table.insert( acceptNumidTab,v.numid)
        end
    end
    TeaHouse.manager.teahouseMain:onReqSendRecomendInvite(acceptNumidTab,1)
    self:refreshTableView(true)
    self._btnInviteAll:setEnabled(false)
    self._InviteListHide:setVisible(true)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_105)
end

function TeaHouseMemberView:onClickInviteSearch(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --一键邀请，搜索对应id好友框，等服务给接口
    local ivNumber = tonumber(self._iVSearch:getText())
    TeaHouse.manager.teahouseMember:reqTeaOtherMemberInfo(ivNumber)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_104)
end

function TeaHouseMemberView:onClickInviteRecord(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseInviteLogView")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_107)
end
function TeaHouseMemberView:onClickCardModeTransfer(send, eventType)
    TeaHouse.UITool.onDefaultButtonClickedWithScale(send, eventType, 0.6)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    XH.NewThrowDataManager:throwData("lys25121808", {
        club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber()
    })
    TeaHouse.manager.viewManager:openView("TeaHouseCardModeTransferSecondView")
end

function TeaHouseMemberView:onClickChangeList(send,eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local tempInfoList = {}--暂存删除已展示的元素
    for i,v in pairs(self._infoList) do 
        if i > ONE_PAGE_SHOW_ITEM then 
            table.insert(tempInfoList,v)
        end
    end
    self._infoList = tempInfoList
    local tempShowList ={}--暂存未邀请的元素
    for k,v in pairs(self._showInfoList) do 
        if v.state == 0 then--判断状态是否为已邀请
            table.insert(tempShowList,v)
        end
    end
    for i = 1,#tempShowList do--将未邀请的重新加入至数组尾部
        table.insert(self._infoList,tempShowList[i])
    end
    TeaHouse.TipTool.showToast("已是最新推荐列表")
    self._btnInviteAll:setEnabled(true)
    self._InviteListHide:setVisible(false)
    self:updateShowInfoListData()
    self:refreshTableView(true)
    
end

function TeaHouseMemberView:createTestData()
    local testPlayerData = {}
    for i =1 ,11 do
        local tem  = {}
        tem.numid = 10000000 + i
        tem.nickName = "00" .. i 
        tem.url = ""
        tem.state = 0
        table.insert(testPlayerData,tem)
    end
    return testPlayerData
end

function TeaHouseMemberView:doBatchInviteShare(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local text = string.format("比赛场口令：%06d", teahouseData:getTeaHousePwd())
    local url = UrlConf.DOWNLOAD_ADDRESS_IOS
    if device.platform == "android" then
        url = UrlConf.DOWNLOAD_ADDRESS_ANDROID
    end
    local title = string.format("快来加入%s吧!", teahouseData:getTeaHouseTitle())
    if TeaHouse.getIsWXBanUrl() then
        TeaHouse.SysTool.copyClipboard(title .. text)
        TeaHouse.TipTool.showToast("邀请信息已复制成功，粘贴分享给您的好友吧！")
        TeaHouse.SysTool.openWeChat()
    else
        local shareInfo = {
            textTitle = title, --分享标题
            textTitleUrl = "", --微信不用
            site = "", --微信不用
            siteUrl = "", --微信不用
            imagePath = "", --微信不用
            url = url, --微信网页模式分享的链接
            type = "url", --word是文字分享，url网页模式分享，pic分享图片
            scene = "0", --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "com.xm.zjgamecenter", --分享图片地址（分享网页模式，需要传安卓包名）
            text = text, ---分享内容
            comment = "", --微信不用
            copyTextWhenNoWX = title .. text
        }
        TeaHouse.SysTool.share(shareInfo)
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_108)
end

function TeaHouseMemberView:updateTableViewTitle()
    self._textRecordTip:setVisible(self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG or self._tabType == TeaHouseMemberView.TAB_TYPE.LOG or self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG)
    if self._tabType == TeaHouseMemberView.TAB_TYPE.LOG or self._tabType == TeaHouseMemberView.TAB_TYPE.KICKLOG then
        --成员日志
        if TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.TAIZHOU then
            self._textRecordTip:setString("注：仅保留7天内记录（上限200条）")
        else
            self._textRecordTip:setString("注：仅保留7天内记录（上限50条）")
        end
    elseif self._tabType == TeaHouseMemberView.TAB_TYPE.ADDCARDLOG then
        --划卡记录宝宝不需要提示
        self._textRecordTip:setString("注：仅保留7天内记录")
        -- if TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.BAOBAO then
        --     self._textRecordTip:setVisible(false)
        -- end
    end
    
end

function TeaHouseMemberView:initApplyBottomPanel()
    XH.UIButton.create(XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_BTN_FILTER1"),XH.UIButton.CLICK_STYLE.DEFAULT, function() 
        self:onBtnFilter(1)
    end)
    XH.UIButton.create(XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_BTN_FILTER2"),XH.UIButton.CLICK_STYLE.DEFAULT, function() 
        self:onBtnFilter(2)
    end)
    XH.UIButton.create(XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_BTN_FILTER3"),XH.UIButton.CLICK_STYLE.DEFAULT, function() 
        self:onBtnFilter(3)
    end)
    local panelFilterInfo = XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_PANEL_APPLY_FILTER")
    XH.UIButton.create(XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_FILTER_APPLY"),XH.UIButton.CLICK_STYLE.NOSCALE, function() 
        panelFilterInfo:setVisible(not panelFilterInfo:isVisible())
        -- XH.UITool.setScale(self._panelApplyBottom,"KW_BTN_LIST_1", panelFilterInfo:isVisible() and 1 or -1)
    end)
    XH.UIButton.create(XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_BTN_ALL_SURE"),XH.UIButton.CLICK_STYLE.DEFAULT, function() 
        self:onBtnDealAll(true)
    end)
        XH.UIButton.create(XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_BTN_ALL_REF"),XH.UIButton.CLICK_STYLE.DEFAULT, function() 
        self:onBtnDealAll(false)
    end)

	self:initFilter(1)
	self._panelCheckBox = XH.UITool.seekNodeByName(self._panelApplyBottom,"KW_PANEL_CHECKBOX")
    local isOwner = TeaHouse.manager.teahouseData:isOwner()
    local isAdmin = TeaHouse.manager.teahouseData:isAdmin()
	local showCheckMDR = XH.lobby:getModule("Configuration"):getAllConfigData("ShowCheckMDR") or false
	local showAllApproveDeny = XH.lobby:getModule("FriendTea"):isCurAreaShowAllApproveDeny()
	self._panelCheckBox:setVisible(showCheckMDR and isOwner)
	self._panelApplyBottom:setVisible(showAllApproveDeny and (isOwner or isAdmin))
    local clubId = TeaHouse.manager.teahouseData:getTeaNumber()
	self.m_checkBox = XH.UITool.seekNodeByName(self._panelApplyBottom, "KW_FRIEND_APPLY_CHECKBOX")
	self.m_checkBox:setSelected(false)
	self.m_checkBox:addEventListenerCheckBox(function(sender,eventType)
		if eventType == ccui.CheckBoxEventType.selected then
			XH.lobby:getModule("FriendTea"):reqBBClubSet({clubId=clubId, isSet=true, setType=1078, setValue=1})
		elseif eventType == ccui.CheckBoxEventType.unselected then
			XH.lobby:getModule("FriendTea"):reqBBClubSet({clubId=clubId, isSet=true, setType=1078, setValue=0})
		end
	end)
    -- local data = ChaGuanModel:getTeaHouseInfoByID(ChaGuanModel.m_curChaGuanID)
	-- XH.lobby:getModule("FriendTea"):reqBBClubSet({clubId=TeaHouse.manager.teahouseData:getTeaNumber(), isSet=false, setType=1078, callback=function(data)
	-- 	if tolua.isnull(self) then return end
	-- 	self.m_checkBox:setSelected(data.setValue == 1)
	-- end})
end


function TeaHouseMemberView:onBtnFilter(index)
	self:initFilter(index)

	local friendsInfo = XH.lobby:getModule("FriendTea"):getApplyFriendsInfo(TeaHouse.manager.teahouseData:getTeaNumber())
    self:changeApplyList(false, friendsInfo)

	local conventionData = {
		club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
	}
	local extraData = {
		type = FILTER_NAME[self._filterIdx],
	}
	XH.NewThrowDataManager:throwData("lys25092802", conventionData, extraData)
end

function TeaHouseMemberView:onBtnDealAll(isAgree)
	    -- 上抛埋点
    local conventionData = {
		club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
    }
    local extraData = {
        room_type = isAgree and "全部同意" or "全部拒绝",
		type = FILTER_NAME[self._filterIdx],
		count = #self._infoList,
    }
    XH.NewThrowDataManager:throwData("lys25092801", conventionData, extraData)

	if not self._infoList or #self._infoList == 0 then
		return
	end
    XH.TipTool.showTip({
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function ()
            local userIds = {}
            for i,v in ipairs(self._infoList) do
                local teahouseMember = TeaHouse.manager.teahouseMember
                teahouseMember:dealPower(v.areaid, v.numid, isAgree and teahouseMember.APPLY_FLAG.AGREE or teahouseMember.APPLY_FLAG.REFUSE)
                self:throwFriendTeaData(isAgree and 1 or 2, v, v.friendInfo)
                if v.isFromFriend then
                    table.insert(userIds, v.numid)
                end
            end
            if #userIds > 0 then
                XH.lobby:getModule("FriendTea"):reqBBDealJoinClub({clubId=TeaHouse.manager.teahouseData:getTeaNumber(), userIds=userIds, agree=isAgree})
            end
        end}, "您确定"..(isAgree and '同意' or '拒绝') .. "全部玩家的加入申请吗\n" .. "(当前为" .. FILTER_NAME[self._filterIdx] ..")")
end

function TeaHouseMemberView:initFilter(index)
    XH.UITool.seekNodeByName(self._panelApplyBottom,"KW_PANEL_APPLY_FILTER"):setVisible(false)
    self._filterIdx = index
	XH.UITool.seekNodeByName(self._panelApplyBottom,"KW_BTN_TXT"):setString(FILTER_NAME[index])
end

-- type:1同意,2拒绝
function TeaHouseMemberView:throwFriendTeaData(type, data, friendsInfo)
	if not data or not friendsInfo or #friendsInfo == 0 then
		return
	end
	local conventionData = {
		block_item_id = type == 1 and "同意" or "拒绝"
	}
    local isLeader = TeaHouse.manager.teahouseData:isOwner()
	local extraData = {
		choice = friendsInfo[1].userId,	-- 牌友id，选第一个玩家ID
		click_source = data.numid,	-- 申请人id
		club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),	-- 比赛场id
		role = isLeader and "领队" or "副领队",	-- 领队/副领队
	}
	XH.NewThrowDataManager:throwData("hgsc24112713", conventionData, extraData)
end

function TeaHouseMemberView:onEventUpdateCardMode()
    if self._btnCardModeTransfer then
        local beforeVisible = self._btnCardModeTransfer:isVisible()
        local newVisible = self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER and TeaHouse.manager.teaHouseVisualCardTransferModule:isNeedShowMainEntry()
        self._btnCardModeTransfer:setVisible(newVisible)
        if beforeVisible ~= newVisible and self._tabType == TeaHouseMemberView.TAB_TYPE.MEMBER then
            self:changeMemberList(true)
        end
    end
end
return TeaHouseMemberView��