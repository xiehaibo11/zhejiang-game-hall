---@class TeaHouseAgentBillView : View
local TeaHouseAgentBillView = class("TeaHouseAgentBillView", TeaHouse.View)

local KW_MAX_BILL_FILTER_COUNT = 4
local KW_MAX_TEAHOUSE_CHOOSE_FILTER_COUNT = 5       -- 比赛场选择个数
local KW_SHOW_BILL_DAY = 7

TeaHouseAgentBillView.TAB_TYPE = {
    ALL = 1, ---所有战绩
    UNBILL = 2, ---未完成战绩
    FINISH = 3, ---已完成战绩
    SELF = 4,   --自己的战绩
}

TeaHouseAgentBillView.BILL_FILTER = {
    ALL = 1, ---所有战绩
    AGENTPAY = 2, ---领队模式
    PREPAY = 3, ---预付模式
    CIRCULATE = 4, ---流通模式
}

TeaHouseAgentBillView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseAgentBillView.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        -- 比赛场选择
        ["_KW_PANEL_TEAHOUSE_PWD"] = { tag = "_KW_PANEL_TEAHOUSE_PWD", name = "_panelTeaHouseChoose", class = "panel" },
        ["_KW_TEXT_SELECT_TEAHOUSE"] = { tag = "_KW_TEXT_SELECT_TEAHOUSE", name = "_textSelectTeaHouse", class = "text" },
        ["_KW_PANEL_TEAHOUSE_CHOOSE_MASK"] = { tag = "_KW_PANEL_TEAHOUSE_CHOOSE_MASK", name = "_panelSearchTeaHouseMask", class = "panel" },
        ["_KW_IMG_TEAHOUSE_FILTER_BG"] = { tag = "_KW_IMG_TEAHOUSE_FILTER_BG", name = "_imgTeaHouseFilterBG", class = "img" },
        ["_KW_IMG_TEAHOUSE_PWD_BG"] = { tag = "_KW_IMG_TEAHOUSE_PWD_BG", name = "_imgSearchTeaHouseBG", class = "img", events = "onShowAllTeaHouse" },
        ["_KW_BUTTON_SHOW_ALL_TEAHOUSE"] = { tag = "_KW_BUTTON_SHOW_ALL_TEAHOUSE", name = "_btnShowAllTeaHouse", class = "btn", events = "onShowAllTeaHouse" },
        ["_KW_BUTTON_HIDE_ALL_TEAHOUSE"] = { tag = "_KW_BUTTON_HIDE_ALL_TEAHOUSE", name = "_btnHideAllTeaHouse", class = "btn", events = "onHideAllTeaHouse" },

        -- 公共控件
        ["_KW_PANEL_LIST_INFO"] = { tag = "_KW_PANEL_LIST_INFO", name = "_panelListInfo", class = "panel" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", name = "_panelListItem", class = "panel" },

        -- 日期选择控件
        ["_KW_IMG_SEARCH_DATE_BG"] = { tag = "_KW_IMG_SEARCH_DATE_BG", name = "_panelSearchDateBG", class = "img" },
        ["_KW_PANEL_SEARCH_DATE"] = { tag = "_KW_PANEL_SEARCH_DATE", name = "_panelSearchDate", class = "panel" },
        ["_KW_PANEL_DATE_MASK"] = { tag = "_KW_PANEL_DATE_MASK", name = "_panelSearchDateMask", class = "panel" },
        ["_KW_TEXT_SEARCH_DATE"] = { tag = "_KW_TEXT_SEARCH_DATE", name = "_textSearchDate", class = "text" },
        ["_KW_IMG_SEARCH_DATE_BG"] = { tag = "_KW_IMG_SEARCH_DATE_BG", name = "_imgSearchDataBg", class = "img", events = "onShowSearchDate" },
        ["_KW_BTN_SHOW_DATE"] = { tag = "_KW_BTN_SHOW_DATE", name = "_btnShowDate", class = "btn", events = "onShowSearchDate" },
        ["_KW_BTN_HIDE_DATE"] = { tag = "_KW_BTN_HIDE_DATE", name = "_btnHideDate", class = "btn", events = "onHideSearchDate" },
        ["_KW_IMG_DATE_FILTER_BG"] = { tag = "_KW_IMG_DATE_FILTER_BG", name = "_panelDateFilterBG", class = "img" },

        -- 查询玩家控件
        ["_KW_PANEL_SEARCH_PLAYER"] = { tag = "_KW_PANEL_SEARCH_PLAYER", name = "_panelSearchPlayer", class = "panel" },
        ["_KW_TF_SEARCH"] = { tag = "_KW_TF_SEARCH", name = "_tfSearch", class = "textfield" },
        ["_KW_TEXT_SEARCH"] = { tag = "_KW_TEXT_SEARCH", name = "_textSearch", class = "text" },
        ["_KW_BTN_SEARCH"] = { tag = "_KW_BTN_SEARCH", name = "_btnSearch", class = "btn", events = "onSearchClicked" },
        ["_KW_BTN_REFRESH"] = { tag = "_KW_BTN_REFRESH", name = "_btnRefresh", class = "btn", events = "onRefreshClicked" },
        --副领队查看自己的战绩信息，冠军次数，每日分数等
        ["_KW_PANEL_SELF_BILL_INFO"] = { tag = "_KW_PANEL_SELF_BILL_INFO", name = "_selfBillInfo", class = "panel" },
        ["_KW_TEXT_BIG_WIN_COUNT"] = { tag = "_KW_TEXT_BIG_WIN_COUNT", name = "_textBigWinCount", class = "text" },
        ["_KW_TEXT_TODAY_SCORE"] = { tag = "_KW_TEXT_TODAY_SCORE", name = "_textTodayScore", class = "text" },
        ["_KW_TEXT_TODAY_PLAYCOUNT"] = { tag = "_KW_TEXT_TODAY_PLAYCOUNT", name = "_textTodayPlayCount", class = "text" },

        -- 账单选择控件
        ["_KW_PANEL_SEARCH_BILL"] = { tag = "_KW_PANEL_SEARCH_BILL", name = "_panelSearchBill", class = "panel" },
        ["_KW_IMG_BILL_POP_BG"] = { tag = "_KW_IMG_BILL_POP_BG", name = "_imgBillFilterPopBG", class = "img" },
        ["_KW_PANEL_BILL_FILTER_MASK"] = { tag = "_KW_PANEL_BILL_FILTER_MASK", name = "_panelSearchBillMask", class = "panel" },
        ["_KW_TEXT_FILTER_SELECT"] = { tag = "_KW_TEXT_FILTER_SELECT", name = "_textSearchBill", class = "text" },
        ["_KW_IMG_BILL_FILTER_BG"] = { tag = "_KW_IMG_BILL_FILTER_BG", name = "_imgBillFilterBG", class = "img", events = "onShowBillFilterClicked" },
        ["_KW_BTN_HIDE_FILTER"] = { tag = "_KW_BTN_HIDE_FILTER", name = "_btnHideBillFilter", class = "btn", events = "onHideBillFilterClicked" },
        ["_KW_BTN_SHOW_FILTER"] = { tag = "_KW_BTN_SHOW_FILTER", name = "_btnShowBillFilter", class = "btn", events = "onShowBillFilterClicked" },

        -- 左侧标签页控件
        ["_KW_BTN_ALLBILL1"] = { tag = "_KW_BTN_ALLBILL1", name = "_btnAllBill1", class = "btn", events = "onAllBill1Clicked" },
        ["_KW_BTN_ALLBILL2"] = { tag = "_KW_BTN_ALLBILL2", name = "_btnAllBill2", class = "btn", events = "onAllBill2Clicked" },
        ["_KW_BTN_UNFINISHED1"] = { tag = "_KW_BTN_UNFINISHED1", name = "_btnUnfinished1", class = "btn", events = "onUnfinished1Clicked" },
        ["_KW_BTN_UNFINISHED2"] = { tag = "_KW_BTN_UNFINISHED2", name = "_btnUnfinished2", class = "btn", events = "onUnfinished2Clicked" },
        ["_KW_BTN_FINISHED1"] = { tag = "_KW_BTN_FINISHED1", name = "_btnFinished1", class = "btn", events = "onFinished1Clicked" },
        ["_KW_BTN_FINISHED2"] = { tag = "_KW_BTN_FINISHED2", name = "_btnFinished2", class = "btn", events = "onFinished2Clicked" },
        ["_KW_BTN_SELF1"] = { tag = "_KW_BTN_SELF1", name = "_btnSelf1", class = "btn", events = "onSelf1Clicked" },
        ["_KW_BTN_SELF2"] = { tag = "_KW_BTN_SELF2", name = "_btnSelf2", class = "btn", events = "onSelf2Clicked" },
        ["_KW_PANEL_ALLBILL"] = { tag = "_KW_PANEL_ALLBILL", name = "_panelAllBill", class = "panel" },
        ["_KW_PANEL_UNFINISHED"] = { tag = "_KW_PANEL_UNFINISHED", name = "_panelUnfinished", class = "panel" },
        ["_KW_PANEL_FINISHED"] = { tag = "_KW_PANEL_FINISHED", name = "_panelFinished", class = "panel" },
        ["_KW_PANEL_SELF"] = { tag = "_KW_PANEL_SELF", name = "_panelSelf", class = "panel" },

        -- 底部控件
        ["_KW_PANEL_BOTTOM"] = { tag = "_KW_PANEL_BOTTOM", name = "_panelBottom", class = "panel" },
        ["_KW_TEXT_ROOMCARD_COST"] = { tag = "_KW_TEXT_ROOMCARD_COST", name = "_textRoomCardCost", class = "text" },
        ["_KW_TEXT_BILL_COUNT"] = { tag = "_KW_TEXT_BILL_COUNT", name = "_textBillCount", class = "text" },
        ["_KW_BTN_PLAYBACK_BYCODE"] = { tag = "_KW_BTN_PLAYBACK_BYCODE", name = "_btnPlayBackByCode", class = "btn", events = "onPlayBackByCode" },

        -- 分数筛选
        ["_KW_PANEL_SEARCH_SCORE"] = { tag = "_KW_PANEL_SEARCH_SCORE", name = "_panelScoreFilter", class = "panel" },
        ["_KW_TEXT_SEARCH_SCORE_MIN"] = { tag = "_KW_TEXT_SEARCH_SCORE_MIN", name = "_textScoreMin", class = "text" },
        ["_KW_TEXT_SEARCH_SCORE_MAX"] = { tag = "_KW_TEXT_SEARCH_SCORE_MAX", name = "_textScoreMax", class = "text" },
        ["_KW_BTN_SCORE"] = { tag = "_KW_BTN_SCORE", name = "_btnScore", class = "btn", events = "onScoreClicked" },
        ["_KW_BTN_FILTER"] = { tag = "_KW_BTN_FILTER", name = "_btnFilter", class = "btn", events = "onFilterClicked" },

        ["_KW_IMG_TITLE"] = { tag = "_KW_IMG_TITLE", name = "_imgTitle", class = "img" },
        ["_KW_TEXT_RENQI_RANK_TIP"] = { tag = "_KW_TEXT_RENQI_RANK_TIP", name = "_textRenqiRankTip", class = "text" },
    }
}

-- 比赛场选择
TeaHouse.SysTool.mergeCsbBinding(TeaHouseAgentBillView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_TEAHOUSE_", startNum = 1, endNum = KW_MAX_TEAHOUSE_CHOOSE_FILTER_COUNT, preName = "_btnFilterTeaHouse", class = "btn"
})
-- 战绩选择
TeaHouse.SysTool.mergeCsbBinding(TeaHouseAgentBillView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_BILL_FILTER_", startNum = 1, endNum = KW_MAX_BILL_FILTER_COUNT, preName = "_btnFilterBill", class = "btn"
})
-- 日期选择
TeaHouse.SysTool.mergeCsbBinding(TeaHouseAgentBillView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_DATE_INFO_", startNum = 1, endNum = KW_SHOW_BILL_DAY, preName = "_btnFilterDate", class = "btn"
})

function TeaHouseAgentBillView:ctor(info)
    TeaHouseAgentBillView.super.ctor(self)

    self._bFirstEnter = true
    self._teaId = info.teaNumber
    self._bAccount = false
    self._tabType = nil -- 当前标签页
    self._tabNodes = {} -- 标签页节点

    self._infoList = {}
    self._oldDataLength = 0
    self._lastShowTime = 0

    self:initUI()
    self:adaptUI()
end

function TeaHouseAgentBillView:initUI()
    self._tabNodes[TeaHouseAgentBillView.TAB_TYPE.ALL] = { self._btnAllBill1, self._btnAllBill2 }
    self._tabNodes[TeaHouseAgentBillView.TAB_TYPE.UNBILL] = { self._btnUnfinished1, self._btnUnfinished2 }
    self._tabNodes[TeaHouseAgentBillView.TAB_TYPE.FINISH] = { self._btnFinished1, self._btnFinished2 }
    self._tabNodes[TeaHouseAgentBillView.TAB_TYPE.SELF] = { self._btnSelf1, self._btnSelf2 }

    if self._teaId then
        self._panelTeaHouseChoose:setVisible(false)
    end
    for i = 1, KW_MAX_BILL_FILTER_COUNT do
        local btnFilter = self["_btnFilterBill" .. i]
        if btnFilter then
            btnFilter:addTouchEventListener(function(send, eventType)
                self:onBillFilterClicked(send, eventType, i)
            end)
        end
    end
    if self._panelSearchBillMask then
        self._panelSearchBillMask:addTouchEventListener(function(send, eventType)
            self:setBillFilterState(false)
        end)
    end

    if self._tfSearch and self._textSearch then
        self._tfSearch:setFontColor(cc.c3b(255, 255, 255))
        self._tfSearch:registerScriptEditBoxHandler(function(eventName)
            if eventName == "began" then
                self._textSearch:setVisible(false)
            elseif eventName == "changed" then
                self._textSearch:setString(self._tfSearch:getText())
            elseif eventName == "ended" or eventName == "return" then
                local searchString = self._tfSearch:getText()
                if #searchString <= 0 then
                    self._textSearch:setString("房间号/玩家序号")
                end
                self._textSearch:setVisible(true)
            end
        end)
    end
    if self._panelSearchDate then
        self._panelSearchDate:addTouchEventListener(function(send, eventType)
            self:setDateFilterState(true)
        end)
    end
    if self._panelSearchDateMask then
        self._panelSearchDateMask:addTouchEventListener(function(send, eventType)
            self:setDateFilterState(false)
        end)
    end
    -- 比赛场选择
    for i = 1, KW_MAX_TEAHOUSE_CHOOSE_FILTER_COUNT do
        local btnFilter = self["_btnFilterTeaHouse" .. i]
        if btnFilter then
            btnFilter:addTouchEventListener(function(send, eventType)
                self:onTeaHouseFilterClicked(send, eventType, i)
            end)
            btnFilter:setVisible(false)
        end
    end
    if self._panelSearchTeaHouseMask then
        self._panelSearchTeaHouseMask:addTouchEventListener(function(send, eventType)
            self:setTeaHouseFilterState(false)
        end)
    end
    self:updateTabs()

    if TeaHouse.manager.teahouseAgentBill:isOpenScoreFilter() then
        self:resetScoreFilter()
        if self._panelScoreFilter then
            self._panelScoreFilter:setVisible(true)
        end
    else
        if self._panelScoreFilter then
            self._panelScoreFilter:setVisible(false)
        end
    end
end

-- 通过配置获取是否显示
function TeaHouseAgentBillView:updateTabs(isUpdate)
    local teahouseData = TeaHouse.manager.teahouseData
    if self._panelUnfinished and self._panelFinished then
        local isFinishBill = teahouseData:checkSelfPower("FinishBill")
        local isClose = teahouseData:getCloseFinishBill()
        if isFinishBill then
            self._panelUnfinished:setVisible(true)
            self._panelFinished:setVisible(true)
            if isClose then
                TeaHouse.BridgeUI.setText(self._btnUnfinished1, "KW_TEXT_UNFINISHED", "战绩详情")
                TeaHouse.BridgeUI.setText(self._btnUnfinished2, "KW_TEXT_UNFINISHED", "战绩详情")
                self._panelFinished:setVisible(false)
            else
                TeaHouse.BridgeUI.setText(self._btnUnfinished1, "KW_TEXT_UNFINISHED", "未推荐队员")
                TeaHouse.BridgeUI.setText(self._btnUnfinished2, "KW_TEXT_UNFINISHED", "未推荐队员")
                TeaHouse.BridgeUI.setText(self._btnFinished1, "KW_TEXT_FINISHED", "已推荐队员")
                TeaHouse.BridgeUI.setText(self._btnFinished2, "KW_TEXT_FINISHED", "已推荐队员")
            end
        else
            self._panelUnfinished:setVisible(false)
            self._panelFinished:setVisible(false)
        end
    end
    if self._panelSelf then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        local teahouseData = TeaHouse.manager.teahouseData
        if SwitchConfig.ManagerCanCheckSelfBill ~= 0 and teahouseData:isAdmin() then
            self._panelSelf:setVisible(true)
        else
            self._panelSelf:setVisible(false)
        end
    end
    if self._tabType == TeaHouseAgentBillView.TAB_TYPE.ALL and not self._panelAllBill:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseAgentBillView.TAB_TYPE.UNBILL and not self._panelUnfinished:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseAgentBillView.TAB_TYPE.FINISH and not self._panelFinished:isVisible() then
        self._tabType = nil
    elseif self._tabType == TeaHouseAgentBillView.TAB_TYPE.SELF and not self._panelSelf:isVisible() then
        self._tabType = nil
    end
    if isUpdate and self._tabType == nil then
        if self._panelAllBill:isVisible() then
            self:setTabType(TeaHouseAgentBillView.TAB_TYPE.APPLY)
        elseif self._panelUnfinished:isVisible() then
            self:setTabType(TeaHouseAgentBillView.TAB_TYPE.UNBILL)
        elseif self._panelFinished:isVisible() then
            self:setTabType(TeaHouseAgentBillView.TAB_TYPE.FINISH)
        elseif self._panelSelf:isVisible() then
            self:setTabType(TeaHouseAgentBillView.TAB_TYPE.SELF)
        end
    end
    self:flushRenqiRankTip()
end

--- 未推荐/已推荐队员页签且当前地区开放人气榜与点赞时显示说明文案
function TeaHouseAgentBillView:flushRenqiRankTip()
    if not self._textRenqiRankTip then
        return
    end
    local onMemberTab = self._tabType == TeaHouseAgentBillView.TAB_TYPE.UNBILL
        or self._tabType == TeaHouseAgentBillView.TAB_TYPE.FINISH
    local show = onMemberTab and TeaHouse.manager.teahouseRank:isShowRenqiRank()
    self._textRenqiRankTip:setVisible(show)
end

function TeaHouseAgentBillView:onEnter()
    self:initEvents()
    if self._bFirstEnter then
        TeaHouse.manager.teahouseAgentBill:reqCurTime()
    end
    self._bFirstEnter = false
end

function TeaHouseAgentBillView:initEvents()
    local teahouseAgentBill = TeaHouse.manager.teahouseAgentBill
    self:createListener(teahouseAgentBill)
    :addEventListener(teahouseAgentBill.EVENT_CUR_DATE_UPDATE, handler(self, self.onCurDateUpdate))
    :addEventListener(teahouseAgentBill.EVENT_TEAHOUSE_COST_UPDATE, handler(self, self.onTeaHouseCostUpdate))
    :addEventListener(teahouseAgentBill.EVENT_TEA_BILL_INFO, handler(self, self.onTeaHouseAllBill))             -- 战绩总单显示
    :addEventListener(teahouseAgentBill.EVENT_TEAHOUSE_SIMPLE_INFO, handler(self, self.onTeaHouseSimPleInfo))   -- 领队的所有比赛场信息
    :addEventListener(teahouseAgentBill.EVENT_DETAIL_BILL_INFO, handler(self, self.onDetailBillInfo))   -- 战绩查询详单
    :addEventListener(teahouseAgentBill.EVENT_BIGWINNER_DETAIL_INFO, handler(self, self.onDetailBigWinnerInfo))   -- 冠军详单
    :addEventListener(teahouseAgentBill.EVENT_DEAL_BIGWINNER, handler(self, self.onDealBigWinner))
    :addEventListener(teahouseAgentBill.EVENT_CHANGE_SCORE_FILTER, handler(self, self.onDealChangeScoreFilter))

    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onAdminRightUpdate))

    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onAdminRightUpdate))
end

function TeaHouseAgentBillView:refreshTableView(isCleanup)
    if not self._panelListInfo then
        return
    end
    if self._detailInfoPanel ~= nil then
        self._detailInfoPanel:removeFromParent()
        self._detailInfoPanel = nil
    end
    if self._tvInfoList ~= nil and isCleanup then
        self._tvInfoList:removeFromParent()
        self._tvInfoList = nil
    end
    if self._tvInfoList == nil then
        self._tvInfoList = cc.TableView:create(self._panelListInfo:getContentSize())
        self._tvInfoList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvInfoList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvInfoList:setIgnoreAnchorPointForPosition(false)
        self._tvInfoList:setAnchorPoint(cc.p(0, 0))
        self._tvInfoList:setPosition(cc.p(0, 0))
        self._panelListInfo:addChild(self._tvInfoList)
        self._tvInfoList:setDelegate()
        self._tvInfoList:registerScriptHandler(handler(self, self.scrollViewDidScroll), cc.SCROLLVIEW_SCRIPT_SCROLL)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvInfoList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tvInfoList ~= nil then   
        self._tvInfoList:reloadData()
    end
end

function TeaHouseAgentBillView:setTableViewContentOffset(tableView)
    if tableView and self._oldDataLength > 0 then
        local cellHeight = self._panelListItem:getContentSize().height or 0
        local offsetY = (self._oldDataLength - #self._infoList) * cellHeight
        self._tvInfoList:setContentOffset(cc.p(0, offsetY),false)
    end
end

function TeaHouseAgentBillView:scrollViewDidScroll(tableView,eventType)
    -- local contentOffsetY = math.abs(tableView:getContentOffset().y)
    -- if contentOffsetY <= 0 then
    --     self._oldDataLength = #self._infoList or 0
    --     if not TeaHouse.manager.teahouseAgentBill:reqTeaBillInfoEx() then
    --         -- 5秒才显示一次
    --         if os.time() - self._lastShowTime > 5 then
    --             self._lastShowTime = os.time()
    --             TeaHouse.TipTool.showToast("没有更多数据了...")
    --         end
    --     end
    -- end
end

function TeaHouseAgentBillView:onTableCellTouched(tableView, cell)

end

function TeaHouseAgentBillView:onCellSizeForTable(tableView, index)
    if self._panelListItem == nil then
        return 0, 0
    end
    local size = self._panelListItem:getContentSize()
    return size.width, size.height
end

function TeaHouseAgentBillView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local infoItem = nil
        if self._tabType == TeaHouseAgentBillView.TAB_TYPE.ALL or self._tabType == TeaHouseAgentBillView.TAB_TYPE.SELF then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseAgentBillItem.TeaHouseAgentBillTableItem", handler(self, self.showAllDetailInfo))
        else
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseAgentBillItem.TeaHouseAgentBillWinnerItem", handler(self, self.showBigWinnerDetailInfo))
        end
        if infoItem ~= nil then
            infoItem:setAnchorPoint(cc.p(0, 0))
            infoItem:setPosition(0, 0)
            infoItem:setName("InfoItem")
            if self._panelListItem then
                infoItem:setContentSize(self._panelListItem:getContentSize())
                ccui.Helper:doLayout(infoItem)
            end
            cell:addChild(infoItem)
        end
    end
    local infoItem = cell:getChildByName("InfoItem")
    if infoItem ~= nil then
        infoItem:updateInfo(self._infoList[index + 1], index + 1, self._bAccount)
    end
    return cell
end

function TeaHouseAgentBillView:onNumberOfCellsInTableView(tableView)
    return #self._infoList
end

function TeaHouseAgentBillView:onCurDateUpdate(event)
    local date = event.msg.nTime
    local msgData = {}
    msgData.curTeaId = self._teaId
    msgData.curBillTimeStamp = date
    msgData.curBillDate = os.date("%Y-%m-%d", date)
    msgData.curBillHour = os.date("%H", date)
    self:initDate(date)
    msgData.curBillTimeIndex = KW_SHOW_BILL_DAY
    -- 设置初始数据
    TeaHouse.manager.teahouseAgentBill:setInitData(msgData)

    self._textSearchDate:setString(os.date("%Y-%m-%d", date))
    self:setTabType(TeaHouseAgentBillView.TAB_TYPE.ALL)
    TeaHouse.manager.teahouseAgentBill:reqSimpleTeaHouseInfo()
end

function TeaHouseAgentBillView:initDate(date)
    local nCurTime = date
    for i = 1, KW_SHOW_BILL_DAY do
        local btnFilter = self["_btnFilterDate" .. i]
        if btnFilter then
            btnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangeDate(send, eventType, i)
            end)
        end
        btnFilter:setTitleText(os.date("%Y-%m-%d", nCurTime - 86400 * (KW_SHOW_BILL_DAY - i)))
    end
end

function TeaHouseAgentBillView:setTabType(tabType)
    if self._tabType == tabType then
        return
    end

    self:setSearchState(false)

    -- 重置所有按钮
    for i = 1, #self._tabNodes do
        if i == self._tabType then
            self._tabNodes[i][1]:setVisible(true)
            self._tabNodes[i][2]:setVisible(false)
            break
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
    -- 未完成和已完成战绩不显示筛选玩家和战绩的panel
    if self._panelSearchPlayer then
        self._panelSearchPlayer:setVisible(self._tabType == TeaHouseAgentBillView.TAB_TYPE.ALL)
    end
    if self._panelSearchBill then
        -- self._panelSearchBill:setVisible(self._tabType == TeaHouseAgentBillView.TAB_TYPE.ALL)
        self._panelSearchBill:setVisible(false)
    end
    if self._panelBottom then
        self._panelBottom:setVisible(self._tabType == TeaHouseAgentBillView.TAB_TYPE.ALL or self._tabType == TeaHouseAgentBillView.TAB_TYPE.SELF)
    end
    if self._selfBillInfo then
        self._selfBillInfo:setVisible(self._tabType == TeaHouseAgentBillView.TAB_TYPE.SELF)
    end
    if self._panelScoreFilter then
        if self._tabType == TeaHouseAgentBillView.TAB_TYPE.ALL then
            self._panelScoreFilter:setPositionX(1175)
        else
            self._panelScoreFilter:setPositionX(550)
        end
        self:resetScoreFilter()
    end

    if self._tabType == TeaHouseAgentBillView.TAB_TYPE.UNBILL then
        self._bAccount = false
    elseif self._tabType == TeaHouseAgentBillView.TAB_TYPE.FINISH then
        self._bAccount = true
    end

    -- 切换标签页时，清除界面信息
    if self._detailInfoPanel ~= nil then
        self._detailInfoPanel:removeFromParent()
        self._detailInfoPanel = nil
    end
    if self._tvInfoList ~= nil then
        self._tvInfoList:removeFromParent()
        self._tvInfoList = nil
    end

    if self._tabType == TeaHouseAgentBillView.TAB_TYPE.ALL then
        -- 打开战绩界面请求日期，请求消耗，请求当天战绩信息
        TeaHouse.manager.teahouseAgentBill:reqTeaHouseCost()
    end

    TeaHouse.manager.teahouseAgentBill:onChangeTab(self._tabType)
    self:flushRenqiRankTip()
end

function TeaHouseAgentBillView:onTeaHouseAllBill(event)
    self._infoList = event.msg.info
    --屏蔽浙江包没有的游戏
    local finalResults = {}
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    local isCard13 = function(gameid)
        if TeaHouse.ReadGameListAndRuleConfig.judgeIsCard13ByGameId(gameid) and TeaHouse.manager.teahouseAgentBill._curBillTimeStamp > 1590166800 then
            return true
        else
            return false
        end
    end

    for _, result in ipairs(self._infoList) do
        if not result.ledgerInfo then
            finalResults = self._infoList
            break
        else
            if result.ledgerInfo.gameID and gameNameList[result.ledgerInfo.gameID] and not isCard13(result.ledgerInfo.gameID)  then
                table.insert(finalResults, result)
            end
        end
    end

    self._infoList = finalResults
    if self._infoList ~= nil then
        if event.tatalBillCount then
            if event.tatalBillCount > 0 then
                self._textBillCount:setString(tostring(event.tatalBillCount))
            else
                --旧版账单服务没有tatalBillCount字段
                local getMaxOrdinalIndex = function(list)
                    local maxIndex = 1
                    for _,v in pairs(self._infoList) do
                        if v.nOrdinalIndex > maxIndex then
                            maxIndex = v.nOrdinalIndex
                        end
                    end
                    return maxIndex
                end
                self._textBillCount:setString(getMaxOrdinalIndex(self._infoList))
            end
        else
            self._textBillCount:setString(tostring(#self._infoList))
        end
    end
    if event.isRequestLeftBill then
        self:refreshTableView(false)
        self:setTableViewContentOffset(self._tvInfoList)
    else
        self:refreshTableView(true)
    end
    --副领队查看自己战绩
    if self._tabType == TeaHouseAgentBillView.TAB_TYPE.SELF then
        local nTodayScore = 0
        local nTodayPlayCount = #self._infoList
        local nBigWinCount = 0
        for i = 1, #self._infoList do
            local selfScore = 0
            local bigScore = 0
            for _, tPlayerInfo in ipairs(self._infoList[i].ledgerInfo.playerInfos) do
                if tPlayerInfo.totalscore > bigScore then
                    bigScore = tPlayerInfo.totalscore
                end
                --统计玩家今日优胜值
                if tPlayerInfo.numid == TeaHouse.BridgeData.getNumberID() then
                    selfScore = tPlayerInfo.totalscore
                end
            end
            nTodayScore = nTodayScore + selfScore
            if bigScore == selfScore then
                nBigWinCount = nBigWinCount + 1
            end
        end
        if self._textBigWinCount then
            self._textBigWinCount:setString(nBigWinCount)
        end
        if self._textTodayPlayCount then
            self._textTodayPlayCount:setString(nTodayPlayCount)
        end
        if self._textTodayScore then
            self._textTodayScore:setString(nTodayScore)
        end
    end
end

--请求桌子账单
function TeaHouseAgentBillView:reqTableBillInfo()
    TeaHouse.manager.teahouseAgentBill:reqTeaBillInfo()
end

function TeaHouseAgentBillView:setSearchState(isSearch)
    local searchString = ""
    if self._tfSearch then
        searchString = self._tfSearch:getText()
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
            self._textSearch:setString("房间号/玩家序号")
        end
    end
    TeaHouse.manager.teahouseAgentBill:onSearchBill(searchString, isSearch)
end

function TeaHouseAgentBillView:onTeaHouseCostUpdate(event)
    if self._textRoomCardCost then
        self._textRoomCardCost:setString(tostring(event.msg.todayCost))
    end
end

function TeaHouseAgentBillView:onTeaHouseSimPleInfo(event)
    local teaCount = #event.msg.info
    for i = 1, teaCount do
        local tmpInfo = event.msg.info[i] or {}
        if tmpInfo and tmpInfo ~= {} then
            local btnFilter = self["_btnFilterTeaHouse" .. i]
            if btnFilter then
                btnFilter:setTitleText(string.format("%06d", tmpInfo.nTeaPwd))
                btnFilter:setVisible(true)
            end
        end
    end
end

function TeaHouseAgentBillView:onDetailBillInfo(event)
    if self._tvInfoList ~= nil then
        self._tvInfoList:setVisible(false)
    end
    if not self._panelListInfo then
        return
    end
    if self._detailInfoPanel ~= nil then
        self._detailInfoPanel:removeFromParent()
        self._detailInfoPanel = nil
    end
    self._detailInfoPanel = TeaHouse.manager.viewManager:createView("TeaHouseAgentBillItem.TeaHouseAgentBillTablePanel", handler(self, self.hideDetailInfo))
    self._detailInfoPanel:setContentSize(self._panelListInfo:getContentSize())
    self._panelListInfo:addChild(self._detailInfoPanel)
    ccui.Helper:doLayout(self._detailInfoPanel)
    self._detailInfoPanel:updateDetailInfo(event.msg.roomInfo, event.msg.detailInfo)
end

function TeaHouseAgentBillView:onDetailBigWinnerInfo(event)
    if self._tvInfoList ~= nil then
        self._tvInfoList:setVisible(false)
    end
    if not self._panelListInfo then
        return
    end
    if self._detailInfoPanel ~= nil then
        self._detailInfoPanel:removeFromParent()
        self._detailInfoPanel = nil
    end
    self._detailInfoPanel = TeaHouse.manager.viewManager:createView("TeaHouseAgentBillItem.TeaHouseAgentBillWinnerPanel", handler(self, self.hideDetailInfo))
    self._detailInfoPanel:setContentSize(self._panelListInfo:getContentSize())
    self._panelListInfo:addChild(self._detailInfoPanel)
    ccui.Helper:doLayout(self._detailInfoPanel)
    self._detailInfoPanel:updateDetailInfo(event.msg.roomInfo, event.msg.detailInfo)
end

function TeaHouseAgentBillView:onDealBigWinner(event)
    if self._tvInfoList == nil then
        return
    end

    self._tvInfoList:updateCellAtIndex(event.msg.index - 1)
end

function TeaHouseAgentBillView:onAdminRightUpdate(event)
    self:updateTabs(true)
end

function TeaHouseAgentBillView:setDateFilterState(bShow)
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

function TeaHouseAgentBillView:setTeaHouseFilterState(bShow)
    if self._imgTeaHouseFilterBG then
        self._imgTeaHouseFilterBG:setVisible(bShow)
    end
    if self._btnShowAllTeaHouse then
        self._btnShowAllTeaHouse:setVisible(not bShow)
    end
    if self._btnHideAllTeaHouse then
        self._btnHideAllTeaHouse:setVisible(bShow)
    end
    if self._panelSearchTeaHouseMask then
        if bShow and self._panelRoot and self._panelSearchDate then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelSearchDate:convertToNodeSpace(rootPosition)
            self._panelSearchTeaHouseMask:setPosition(rootPosition)
            self._panelSearchTeaHouseMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelSearchTeaHouseMask:setVisible(bShow)
    end
end

function TeaHouseAgentBillView:setBillFilterState(bShow)
    if self._imgBillFilterPopBG then
        self._imgBillFilterPopBG:setVisible(bShow)
    end
    if self._btnShowBillFilter then
        self._btnShowBillFilter:setVisible(not bShow)
    end
    if self._btnHideBillFilter then
        self._btnHideBillFilter:setVisible(bShow)
    end
    if self._panelSearchBillMask then
        if bShow and self._panelRoot and self._panelSearchDate then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelSearchDate:convertToNodeSpace(rootPosition)
            self._panelSearchBillMask:setPosition(rootPosition)
            self._panelSearchBillMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelSearchBillMask:setVisible(bShow)
    end
end
----------------------------------------分割线----------------------------------------
-- 以下函数为按钮触发函数
function TeaHouseAgentBillView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseAgentBillView:onAllBill1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseAgentBillView.TAB_TYPE.ALL)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_27)
end

function TeaHouseAgentBillView:onUnfinished1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseAgentBillView.TAB_TYPE.UNBILL)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_29)
end

function TeaHouseAgentBillView:onFinished1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseAgentBillView.TAB_TYPE.FINISH)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_30)
end

function TeaHouseAgentBillView:onSelf1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseAgentBillView.TAB_TYPE.SELF)
end

function TeaHouseAgentBillView:onSearchClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setSearchState(true)
end

function TeaHouseAgentBillView:onRefreshClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setSearchState(false)
end

function TeaHouseAgentBillView:onShowSearchDate(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDateFilterState(true)
end

function TeaHouseAgentBillView:onHideSearchDate(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDateFilterState(false)
end

function TeaHouseAgentBillView:onShowAllTeaHouse(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTeaHouseFilterState(true)
end

function TeaHouseAgentBillView:onHideAllTeaHouse(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTeaHouseFilterState(false)
end

function TeaHouseAgentBillView:onShowBillFilterClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setBillFilterState(true)
end

function TeaHouseAgentBillView:onHideBillFilterClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setBillFilterState(true)
end

function TeaHouseAgentBillView:onTouchEventChangeDate(send, eventType, index)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDateFilterState(false)
    if index == TeaHouse.manager.teahouseAgentBill:getCurBillTimeIndex() then
        return
    end

    local curBillDate = send:getTitleText()
    self._textSearchDate:setString(curBillDate)
    self._textBillCount:setString("获取中")
    self._infoList = {}
    self:refreshTableView(false)
    TeaHouse.manager.teahouseAgentBill:onChangeDate(index)
end

function TeaHouseAgentBillView:onTeaHouseFilterClicked(send, eventType, index)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTeaHouseFilterState(false)
    local curTeaHouse = send:getTitleText()
    self._textSelectTeaHouse:setString(curTeaHouse)
    -- TODO 请求对应比赛场账单
    TeaHouse.manager.teahouseAgentBill:onChangeTeaHouse(index)
end

function TeaHouseAgentBillView:showAllDetailInfo(info)
    TeaHouse.manager.teahouseAgentBill:reqTableBillDetailInfo(info)
end

function TeaHouseAgentBillView:showBigWinnerDetailInfo(index)
    TeaHouse.manager.teahouseAgentBill:reqBigWinnerDetailInfo(index)
end

function TeaHouseAgentBillView:hideDetailInfo()
    if self._tvInfoList ~= nil then
        self._tvInfoList:setVisible(true)
    end
    if self._detailInfoPanel ~= nil then
        self._detailInfoPanel:removeFromParent()
        self._detailInfoPanel = nil
    end
end

function TeaHouseAgentBillView:onBillFilterClicked(send, eventType, type)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setBillFilterState(false)
    local curBillType = send:getTitleText()
    self._textSearchBill:setString(curBillType)
end

function TeaHouseAgentBillView:onPlayBackByCode(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseRecordView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041701, {block_label='比赛场战绩一级页'})
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_28)
end

function TeaHouseAgentBillView:adaptUI()
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

function TeaHouseAgentBillView:onScoreClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.viewManager:openView("TeaHouseScorePicker")
end

function TeaHouseAgentBillView:onFilterClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local minScore = tonumber(self._textScoreMin:getString())
    local maxScore = tonumber(self._textScoreMax:getString())
    if maxScore == nil then
        maxScore = -1
    end
    --cc.UserDefault:getInstance():setIntegerForKey("CHESS_BILL_BIG_WINNER_POINT_MIN", minScore)
    --cc.UserDefault:getInstance():setIntegerForKey("CHESS_BILL_BIG_WINNER_POINT_MAX", maxScore)
    TeaHouse.manager.teahouseAgentBill:onScoreFilterBill(minScore, maxScore)
end

function TeaHouseAgentBillView:onDealChangeScoreFilter(event)
    if event.msg then
        self._textScoreMin:setString(tostring(event.msg.minScore))
        self._textScoreMax:setString(tostring(event.msg.maxScore))

        local minScore = tonumber(event.msg.minScore)
        local maxScore = tonumber(event.msg.maxScore)
        if maxScore == nil then
            maxScore = -1
        end
        TeaHouse.manager.teahouseAgentBill:onScoreFilterBill(minScore, maxScore)
    end
end

function TeaHouseAgentBillView:resetScoreFilter()
    TeaHouse.manager.teahouseAgentBill:clearScoreFilterCache()
    local minScore, maxScore = TeaHouse.manager.teahouseAgentBill:getScoreFilter()
    if self._panelScoreFilter then
        self._textScoreMin:setString(minScore)
        self._textScoreMax:setString(maxScore)
    end
end

return TeaHouseAgentBillView)�