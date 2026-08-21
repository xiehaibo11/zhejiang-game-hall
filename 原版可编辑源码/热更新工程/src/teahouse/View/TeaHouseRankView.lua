---@class TeaHouseRankView : View
local TeaHouseRankView = class("TeaHouseRankView", TeaHouse.View)

local KW_MAX_NAME_FONT_SIZE = 36
local KW_MIN_NAME_FONT_SIZE = 26
local KW_MAX_NAME_WIDTH = 140
local KW_SHOW_BILL_DAY = 7

TeaHouseRankView.TAB_TYPE = {
    COST = 1, ---消耗
    PLAY_COUNT = 2, ---局数
    BIG_WINNER = 3, ---冠军
    SCORE = 4, ---优胜值
    WIN_LOSE = 5, ---胜负
}

TeaHouseRankView.DAY_TYPE = {
    DAY1 = 1, ---今日
    DAY2 = 2, ---昨日
    DAY7 = 3, ---七日
}

TeaHouseRankView.RANK_TYPE = {
    CLOSE = 0,
    OPEN = 1,
    FILTER = 2,
}

TeaHouseRankView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRankView.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_PANEL_LIST_INFO"] = { tag = "_KW_PANEL_LIST_INFO", name = "_panelListInfo", class = "panel" },
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_COST_1"] = { tag = "_KW_BTN_COST_1", name = "_btnCost1", class = "btn", events = "onCost1Clicked" },
        ["_KW_BTN_COST_2"] = { tag = "_KW_BTN_COST_2", name = "_btnCost2", class = "btn", events = "onCost2Clicked" },
        ["_KW_BTN_PLAY_COUNT_1"] = { tag = "_KW_BTN_PLAY_COUNT_1", name = "_btnPlayCount1", class = "btn", events = "onPlayCount1Clicked" },
        ["_KW_BTN_PLAY_COUNT_2"] = { tag = "_KW_BTN_PLAY_COUNT_2", name = "_btnPlayCount2", class = "btn", events = "onPlayCount2Clicked" },
        ["_KW_BTN_BIG_WINNER_1"] = { tag = "_KW_BTN_BIG_WINNER_1", name = "_btnBigWinner1", class = "btn", events = "onBigWinner1Clicked" },
        ["_KW_BTN_BIG_WINNER_2"] = { tag = "_KW_BTN_BIG_WINNER_2", name = "_btnBigWinner2", class = "btn", events = "onBigWinner2Clicked" },
        ["_KW_BTN_SCORE_1"] = { tag = "_KW_BTN_SCORE_1", name = "_btnScore1", class = "btn", events = "onScore1Clicked" },
        ["_KW_BTN_SCORE_2"] = { tag = "_KW_BTN_SCORE_2", name = "_btnScore2", class = "btn", events = "onScore2Clicked" },
        ["_KW_BTN_WIN_LOSE_1"] = { tag = "_KW_BTN_WIN_LOSE_1", name = "_btnWinLose1", class = "btn", events = "onWinLose1Clicked" },
        ["_KW_BTN_WIN_LOSE_2"] = { tag = "_KW_BTN_WIN_LOSE_2", name = "_btnWinLose2", class = "btn", events = "onWinLose2Clicked" },
        ["_KW_BTN_TYPE_DAY1_1"] = { tag = "_KW_BTN_TYPE_DAY1_1", name = "_btnDay11", class = "btn", events = "onDay11Clicked" },
        ["_KW_BTN_TYPE_DAY1_2"] = { tag = "_KW_BTN_TYPE_DAY1_2", name = "_btnDay12", class = "btn", events = "onDay12Clicked" },
        ["_KW_BTN_TYPE_DAY2_1"] = { tag = "_KW_BTN_TYPE_DAY2_1", name = "_btnDay21", class = "btn", events = "onDay21Clicked" },
        ["_KW_BTN_TYPE_DAY2_2"] = { tag = "_KW_BTN_TYPE_DAY2_2", name = "_btnDay22", class = "btn", events = "onDay22Clicked" },
        ["_KW_BTN_TYPE_DAY7_1"] = { tag = "_KW_BTN_TYPE_DAY7_1", name = "_btnDay71", class = "btn", events = "onDay71Clicked" },
        ["_KW_BTN_TYPE_DAY7_2"] = { tag = "_KW_BTN_TYPE_DAY7_2", name = "_btnDay72", class = "btn", events = "onDay72Clicked" },
        ["_KW_PANEL_LIST_TITLE"] = { tag = "_KW_PANEL_LIST_TITLE", name = "_panelListTitle", class = "panel" },
        ["_KW_PANEL_LIST_TITLE_2"] = { tag = "_KW_PANEL_LIST_TITLE_2", name = "_panelListTitle2", class = "panel" },
        ["_KW_TEXT_RANK_DESC"] = { tag = "_KW_TEXT_RANK_DESC", name = "_textRankDesc", class = "text" },
        ["_KW_TEXT_RANK_DESC_2_1"] = { tag = "_KW_TEXT_RANK_DESC_2_1", name = "_textRankDesc21", class = "text" },
        ["_KW_TEXT_RANK_DESC_2_2"] = { tag = "_KW_TEXT_RANK_DESC_2_2", name = "_textRankDesc22", class = "text" },
        ["_KW_TEXT_RANK_DESC_2_3"] = { tag = "_KW_TEXT_RANK_DESC_2_3", name = "_textRankDesc23", class = "text" },
        ["_KW_TEXT_SELF_RANK"] = { tag = "_KW_TEXT_SELF_RANK", name = "_textSelfRank", class = "text" },
        ["_KW_TEXT_SELF_DESC"] = { tag = "_KW_TEXT_SELF_DESC", name = "_textSelfDesc", class = "text" },
        ["_KW_TEXT_SELF_DESC_TIP"] = { tag = "_KW_TEXT_SELF_DESC_TIP", name = "_textSelfDescTip", class = "text" },
        ["_KW_NODE_RANK_1"] = { tag = "_KW_NODE_RANK_1", name = "_nodeRank1", class = "node" },
        ["_KW_NODE_RANK_2"] = { tag = "_KW_NODE_RANK_2", name = "_nodeRank2", class = "node" },
        ["_KW_NODE_RANK_3"] = { tag = "_KW_NODE_RANK_3", name = "_nodeRank3", class = "node" },
        ["_KW_NODE_RANK_4"] = { tag = "_KW_NODE_RANK_4", name = "_nodeRank4", class = "node" },
        ["_KW_PANEL_COST"] = { tag = "_KW_PANEL_COST", name = "_panelCost", class = "panel" },
        ["_KW_PANEL_PLAY_COUNT"] = { tag = "_KW_PANEL_PLAY_COUNT", name = "_panelPlayCount", class = "panel" },
        ["_KW_PANEL_BIG_WINNER"] = { tag = "_KW_PANEL_BIG_WINNER", name = "_panelBigWinner", class = "panel" },
        ["_KW_PANEL_SCORE"] = { tag = "_KW_PANEL_SCORE", name = "_panelScore", class = "panel" },
        ["_KW_PANEL_WIN_LOSE"] = { tag = "_KW_PANEL_WIN_LOSE", name = "_panelWinLose", class = "panel" },
        ["_KW_PANEL_GAME_LIST"] = { tag = "_KW_PANEL_GAME_LIST", name = "_panelGameList", class = "panel" },
        ["_KW_PANEL_GAME_LIST_MASK"] = { tag = "_KW_PANEL_GAME_LIST_MASK", name = "_panelGameListMask", class = "panel" },
        ["_KW_IMG_GAME_LIST_BG"] = { tag = "_KW_IMG_GAME_LIST_BG", name = "_imgGameListBg", class = "img" },
        ["_KW_BTN_HIDE_GAME_LIST"] = { tag = "_KW_BTN_HIDE_GAME_LIST", name = "_btnHideGameList", class = "btn", events = "onHideGameListClicked" },
        ["_KW_BTN_SHOW_GAME_LIST"] = { tag = "_KW_BTN_SHOW_GAME_LIST", name = "_btnShowGameList", class = "btn", events = "onShowGameListClicked" },
        ["_KW_BTN_GAME"] = { tag = "_KW_BTN_GAME", name = "_btnGame", class = "btn" },
        ["_KW_SV_GAME_LIST"] = { tag = "_KW_SV_GAME_LIST", name = "_svGameList", class = "scrollview" },
        ["_KW_TEXT_GAME_SELECT"] = { tag = "_KW_TEXT_GAME_SELECT", name = "_textGameSelect", class = "text" },
        ["_KW_BTN_RANK_SETTING"] = { tag = "_KW_BTN_RANK_SETTING", name = "_btnRankSetting", class = "btn", events = "onRankSettingClicked" },

        ["_KW_PANEL_TYPE_FIXED"] = { tag = "_KW_PANEL_TYPE_FIXED", name = "_panelFixedType", class = "panel" },
        ["_KW_PANEL_TYPE_OPTIONAL"] = { tag = "_KW_PANEL_TYPE_OPTIONAL", name = "_panelOptionalType", class = "panel" },
        ["_KW_PANEL_START_DATE"] = { tag = "_KW_PANEL_START_DATE", name = "_panelStartDate", class = "panel" },
        ["_KW_PANEL_END_DATE"] = { tag = "_KW_PANEL_END_DATE", name = "_panelEndDate", class = "panel" },
        ["_KW_BTN_BILL_SEARCH"] = { tag = "_KW_BTN_BILL_SEARCH", name = "_btnSearch", class = "btn", events = "onSearchClicked" },
        ["_KW_CHECK_CHANGE_STARTDATE"] = { tag = "_KW_CHECK_CHANGE_STARTDATE", name = "_changeStartDate", class = "btn" },
        ["_KW_CHECK_CHANGE_ENDDATE"] = { tag = "_KW_CHECK_CHANGE_ENDDATE", name = "_changeEndDate", class = "btn" },
        ["_KW_IMG_START_DATE_FILTER_BG"] = { tag = "_KW_IMG_START_DATE_FILTER_BG", name = "_startFilterBg", class = "img" },
        ["_KW_IMG_END_DATE_FILTER_BG"] = { tag = "_KW_IMG_END_DATE_FILTER_BG", name = "_endFilterBg", class = "img" },
        ["_KW_TEXT_START_SEARCH_DATE"] = { tag = "_KW_TEXT_START_SEARCH_DATE", name = "_textStartSearchDay", class = "text" },
        ["_KW_TEXT_END_SEARCH_DATE"] = { tag = "_KW_TEXT_END_SEARCH_DATE", name = "_textEndSearchDay", class = "text" },
    }
}

function TeaHouseRankView:ctor()
    TeaHouseRankView.super.ctor(self)

    self._infoList = {}
    self._tvInfoList = nil

    self._tabType = nil
    self._tabNodes = {}

    self._dayType = nil
    self._dayNodes = {}

    self._gameID = 0

    self._rankList = {}

    self._bFirstEnter = true

    self._startDay = 0
    self._endDay = 0

    self:initUI()
    self:adaptUI()

    if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        local dayType = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_RANK_LIST_DAY_TYPE_RECORD, TeaHouseRankView.DAY_TYPE.DAY1)
        self:setDayType(dayType, true)
    end
    self:reqRankInfo()
end

function TeaHouseRankView:initUI()
    self._tabNodes[TeaHouseRankView.TAB_TYPE.COST] = { self._btnCost1, self._btnCost2 }
    self._tabNodes[TeaHouseRankView.TAB_TYPE.PLAY_COUNT] = { self._btnPlayCount1, self._btnPlayCount2 }
    self._tabNodes[TeaHouseRankView.TAB_TYPE.BIG_WINNER] = { self._btnBigWinner1, self._btnBigWinner2 }
    self._tabNodes[TeaHouseRankView.TAB_TYPE.SCORE] = { self._btnScore1, self._btnScore2 }
    self._tabNodes[TeaHouseRankView.TAB_TYPE.WIN_LOSE] = { self._btnWinLose1, self._btnWinLose2 }

    self._dayNodes[TeaHouseRankView.DAY_TYPE.DAY1] = { self._btnDay11, self._btnDay12 }
    self._dayNodes[TeaHouseRankView.DAY_TYPE.DAY2] = { self._btnDay21, self._btnDay22 }
    self._dayNodes[TeaHouseRankView.DAY_TYPE.DAY7] = { self._btnDay71, self._btnDay72 }

    self:updateTab(true)
    if self._panelGameList then
        self._panelGameList:addTouchEventListener(function(send, eventType)
            self:setGameListState(true)
        end)
    end
    if self._panelGameListMask then
        self._panelGameListMask:addTouchEventListener(function(send, eventType)
            self:setGameListState(false)
        end)
    end
    self:initGameList()

    if TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        self._panelFixedType:setVisible(false)
        self._panelOptionalType:setVisible(true)
    else
        self._panelFixedType:setVisible(true)
        self._panelOptionalType:setVisible(false)
    end
end

function TeaHouseRankView:updateTab(isForbidReq)
    local teahouseData = TeaHouse.manager.teahouseData
    local rankIndex = 1
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig and SwitchConfig.CostRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_COST) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelCost and nodeRank then
            self._panelCost:setVisible(true)
            self._panelCost:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.COST] = SwitchConfig.CostRank
    else
        if self._panelCost then
            self._panelCost:setVisible(false)
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.COST] = TeaHouseRankView.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.PlayCountRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_PLAY_COUNT) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelPlayCount and nodeRank then
            self._panelPlayCount:setVisible(true)
            self._panelPlayCount:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.PLAY_COUNT] = SwitchConfig.PlayCountRank
    else
        if self._panelPlayCount then
            self._panelPlayCount:setVisible(false)
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.PLAY_COUNT] = TeaHouseRankView.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.BigWinnerRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_BIG_WINNER) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelBigWinner and nodeRank then
            self._panelBigWinner:setVisible(true)
            self._panelBigWinner:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.BIG_WINNER] = SwitchConfig.BigWinnerRank
    else
        if self._panelBigWinner then
            self._panelBigWinner:setVisible(false)
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.BIG_WINNER] = TeaHouseRankView.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.ScoreRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_SCORE) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelScore and nodeRank then
            self._panelScore:setVisible(true)
            self._panelScore:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.SCORE] = SwitchConfig.ScoreRank
    else
        if self._panelScore then
            self._panelScore:setVisible(false)
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.SCORE] = TeaHouseRankView.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.WinLoseRank ~= 0 and teahouseData:checkSelfPower("ModifyBill") then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelWinLose and nodeRank then
            self._panelWinLose:setVisible(true)
            self._panelWinLose:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.WIN_LOSE] = SwitchConfig.WinLoseRank
    else
        if self._panelWinLose then
            self._panelWinLose:setVisible(false)
        end
        self._rankList[TeaHouseRankView.TAB_TYPE.WIN_LOSE] = TeaHouseRankView.RANK_TYPE.CLOSE
    end
    if self._btnRankSetting then
        self._btnRankSetting:setVisible(SwitchConfig.RankSetting ~= 0 and teahouseData:checkSelfPower("ModifyRankSetting"))
        if teahouseData:isAdmin() then
            self._btnRankSetting:setVisible(SwitchConfig.RankSetting ~= 0 and teahouseData:checkSelfPower("ModifyRankSetting") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.CHECKRANK))
        end
    end
    local tabType = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_RANK_LIST_TAB_TYPE_RECORD, TeaHouseRankView.TAB_TYPE.COST)
    self:setTabType(tabType, isForbidReq)
end

function TeaHouseRankView:adaptUI()
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

function TeaHouseRankView:onEnter()
    self:initEvents()
    if self._bFirstEnter then
        TeaHouse.manager.teahouseRank:reqCurTime()
    end
    self._bFirstEnter = false
end

function TeaHouseRankView:initEvents()
    local teahouseRank = TeaHouse.manager.teahouseRank
    self:createListener(teahouseRank)
    :addEventListener(teahouseRank.EVENT_COST_RANK_UPDATE, handler(self, self.onCostRankUpdate))
    :addEventListener(teahouseRank.EVENT_PLAY_COUNT_RANK_UPDATE, handler(self, self.onPlayCountRankUpdate))
    :addEventListener(teahouseRank.EVENT_BIG_WINNER_RANK_UPDATE, handler(self, self.onBigWinnerRankUpdate))
    :addEventListener(teahouseRank.EVENT_SCORE_RANK_UPDATE, handler(self, self.onScoreRankUpdate))
    :addEventListener(teahouseRank.EVENT_WIN_LOSE_RANK_UPDATE, handler(self, self.onWinLoseRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_COST_RANK_UPDATE, handler(self, self.onSelfCostRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_PLAY_COUNT_RANK_UPDATE, handler(self, self.onSelfPlayCountRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_BIG_WINNER_RANK_UPDATE, handler(self, self.onSelfBigWinnerRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_SCORE_RANK_UPDATE, handler(self, self.onSelfScoreRankUpdate))
    :addEventListener(teahouseRank.EVENT_RANK_VISIBLE_UPDATE, handler(self, self.onRankVisibleUpdate))
    :addEventListener(teahouseRank.EVENT_RANK_CUR_DATE_UPDATE, handler(self, self.onCurDateUpdate))

    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_RANK_VISIBLE_UPDATE, handler(self, self.onRankVisibleUpdate))

    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_POWER_UPDATE, handler(self, self.onRankVisibleUpdate))
    :addEventListener(teahouseMember.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onRankVisibleUpdate))
end

function TeaHouseRankView:refreshTableView(isCleanup)
    if not self._panelListInfo then
        return
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
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvInfoList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tvInfoList ~= nil then
        self._tvInfoList:reloadData()
    end
end

function TeaHouseRankView:onTableCellTouched(tableView, cell)

end

function TeaHouseRankView:onCellSizeForTable(tableView, index)
    if self._panelListItem == nil then
        return 0, 0
    end
    local size = self._panelListItem:getContentSize()
    return size.width, size.height
end

function TeaHouseRankView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local infoItem
        if self._tabType == TeaHouseRankView.TAB_TYPE.WIN_LOSE then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseRankItem.TeaHouseRankListItem2")
        else
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseRankItem.TeaHouseRankListItem")
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
        local rankType = self._rankList[self._tabType]
        if self._tabType == TeaHouseRankView.TAB_TYPE.WIN_LOSE then
            infoItem:updateInfo(self._tabType, self._infoList[index + 1], index + 1)
        else
            if self._infoList[index + 1].bChangeScore == nil then
                self._infoList[index + 1].nScore = self:changeCostCard(self._tabType,self._infoList[index + 1].nScore)
                self._infoList[index + 1].bChangeScore = true
            end
            if rankType == TeaHouseRankView.RANK_TYPE.FILTER then
                infoItem:updateInfoEx(self._tabType, self._infoList[index + 1])
            else
                infoItem:updateInfo(self._tabType, self._infoList[index + 1])
            end
        end
    end
    return cell
end

function TeaHouseRankView:onNumberOfCellsInTableView(tableView)
    return #self._infoList
end

function TeaHouseRankView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseRankView:onCost1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
     
    self:setTabType(TeaHouseRankView.TAB_TYPE.COST)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_63)
end

function TeaHouseRankView:onCost2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_63)
end

function TeaHouseRankView:onPlayCount1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView.TAB_TYPE.PLAY_COUNT)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_64)
end

function TeaHouseRankView:onPlayCount2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_64)
end

function TeaHouseRankView:onBigWinner1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView.TAB_TYPE.BIG_WINNER)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_65)
end

function TeaHouseRankView:onBigWinner2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_65)
end

function TeaHouseRankView:onScore1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView.TAB_TYPE.SCORE)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_66)
end

function TeaHouseRankView:onScore2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_66)
end

function TeaHouseRankView:onWinLose1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView.TAB_TYPE.WIN_LOSE)
end

function TeaHouseRankView:onWinLose2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView:onDay11Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView.DAY_TYPE.DAY1)
end

function TeaHouseRankView:onDay12Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView:onDay21Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView.DAY_TYPE.DAY2)
end

function TeaHouseRankView:onDay22Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView:onDay71Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView.DAY_TYPE.DAY7)
end

function TeaHouseRankView:onDay72Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView:setTabType(tabType, isForbidReq)
    local rankCount = #self._rankList
    if rankCount < 1 then
        return
    end
    for i = 1, rankCount do
        if self._rankList[tabType] ~= TeaHouseRankView.RANK_TYPE.CLOSE then
            break
        else
            tabType = tabType + 1
            if tabType > rankCount then
                tabType = tabType % rankCount
            end
        end
    end
    if self._rankList[tabType] == TeaHouseRankView.RANK_TYPE.CLOSE then
        return
    end
    if self._tabType == tabType then
        return
    end

    for i = 1, #self._tabNodes do
        if i == self._tabType then
            self._tabNodes[i][1]:setVisible(true)
            self._tabNodes[i][2]:setVisible(false)
            break
        end
    end
    self._tabType = tabType
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RANK_LIST_TAB_TYPE_RECORD, self._tabType)
    for i = 1, #self._tabNodes do
        if i == self._tabType then
            self._tabNodes[i][1]:setVisible(false)
            self._tabNodes[i][2]:setVisible(true)
            break
        end
    end

    if self._panelGameList then
        self._panelGameList:setVisible(self._rankList[tabType] == TeaHouseRankView.RANK_TYPE.FILTER)
    end

    self:setGameListState(false)
    local titleIndex = 1
    if self._tabType == TeaHouseRankView.TAB_TYPE.COST then
        if self._textRankDesc then
            self._textRankDesc:setString("消 耗")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的消耗:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.PLAY_COUNT then
        if self._textRankDesc then
            self._textRankDesc:setString("局 数")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的局数:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.BIG_WINNER then
        if self._textRankDesc then
            self._textRankDesc:setString("冠军数")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的冠军数:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.SCORE then
        if self._textRankDesc then
            self._textRankDesc:setString("优胜值")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的优胜值:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.WIN_LOSE then
        titleIndex = 2
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.ScoreRankWithAll == 1 then
            self:setWinLoseTypeName({"优胜值", "局 数", "冠军"})
        else
            self:setWinLoseTypeName({"优胜值", "总胜分", "总负分"})
        end

        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的优胜值:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    end
    if self._panelListTitle then
        self._panelListTitle:setVisible(titleIndex == 1)
    end
    if self._panelListTitle2 then
        self._panelListTitle2:setVisible(titleIndex == 2)
    end
    if not isForbidReq then
        self:reqRankInfo()
    end
end

function TeaHouseRankView:setDayType(dayType,isForbidReq)
    if self._dayType == dayType then
        return
    end

    for i = 1, #self._dayNodes do
        if i == self._dayType then
            self._dayNodes[i][1]:setVisible(true)
            self._dayNodes[i][2]:setVisible(false)
            break
        end
    end
    self._dayType = dayType
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RANK_LIST_DAY_TYPE_RECORD, self._dayType)
    for i = 1, #self._dayNodes do
        if i == self._dayType then
            self._dayNodes[i][1]:setVisible(false)
            self._dayNodes[i][2]:setVisible(true)
            break
        end
    end
    if not isForbidReq then
        self:reqRankInfo()
    end
end

function TeaHouseRankView:reqRankInfo()
    if self._tabType == nil then
        return
    end

    local startDay = 0
    local endDay = 0
    if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        if self._dayType == TeaHouseRankView.DAY_TYPE.DAY2 then
            startDay = 1
            endDay = 1
        elseif self._dayType == TeaHouseRankView.DAY_TYPE.DAY7 then
            startDay = 0
            endDay = 6
        end
    else
        startDay = self._startDay
        endDay = self._endDay
    end
    local rankType = self._rankList[self._tabType]
    local teahouseRank = TeaHouse.manager.teahouseRank
    if self._tabType == TeaHouseRankView.TAB_TYPE.COST then
        if rankType == TeaHouseRankView.RANK_TYPE.FILTER then
            teahouseRank:reqCostRankEx(startDay, endDay, self._gameID)
        else
            teahouseRank:reqCostRank(startDay, endDay)
            teahouseRank:reqSelfCostRank(startDay, endDay)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.PLAY_COUNT then
        if rankType == TeaHouseRankView.RANK_TYPE.FILTER then
            teahouseRank:reqPlayCountRankEx(startDay, endDay, self._gameID)
        else
            teahouseRank:reqPlayCountRank(startDay, endDay)
            teahouseRank:reqSelfPlayCountRank(startDay, endDay)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.BIG_WINNER then
        if rankType == TeaHouseRankView.RANK_TYPE.FILTER then
            teahouseRank:reqBigWinnerRankEx(startDay, endDay, self._gameID)
        else
            teahouseRank:reqBigWinnerRank(startDay, endDay)
            teahouseRank:reqSelfBigWinnerRank(startDay, endDay)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.SCORE then
        if rankType == TeaHouseRankView.RANK_TYPE.FILTER then
            teahouseRank:reqScoreRankEx(startDay, endDay, self._gameID)
        else
            teahouseRank:reqScoreRank(startDay, endDay)
            teahouseRank:reqSelfScoreRank(startDay, endDay)
        end
    elseif self._tabType == TeaHouseRankView.TAB_TYPE.WIN_LOSE then
        if rankType == TeaHouseRankView.RANK_TYPE.FILTER then
            teahouseRank:reqWinLoseRank(startDay, endDay, self._gameID)
        else
            teahouseRank:reqWinLoseRank(startDay, endDay)
        end
    end
end

function TeaHouseRankView:onCostRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.COST then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView:onPlayCountRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.PLAY_COUNT then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView:onBigWinnerRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.BIG_WINNER then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView:onScoreRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.SCORE then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView:onWinLoseRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.WIN_LOSE then
        return
    end

    self._infoList = event.msg.info
    table.sort(self._infoList, function(info1, info2)
        return info1.totalScore > info2.totalScore
    end)
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView:onSelfCostRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.COST then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(self:changeCostCard(self._tabType,event.msg.info.nScore)))
    end
end

function TeaHouseRankView:onSelfPlayCountRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.PLAY_COUNT then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(event.msg.info.nScore))
    end
end

function TeaHouseRankView:onSelfBigWinnerRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.BIG_WINNER then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(event.msg.info.nScore))
    end
end

function TeaHouseRankView:onSelfScoreRankUpdate(event)
    if self._tabType ~= TeaHouseRankView.TAB_TYPE.SCORE then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(event.msg.info.nScore))
    end
end

function TeaHouseRankView:onRankVisibleUpdate(event)
    self:updateTab()
end

function TeaHouseRankView:updateSelfRank()
    if not self._textSelfRank then
        return
    end

    if self._tabType == TeaHouseRankView.TAB_TYPE.WIN_LOSE then
        for index, info in ipairs(self._infoList) do
            if info.numid == TeaHouse.BridgeData.getNumberID() then
                self._textSelfRank:setString(tostring(index))
                self._textSelfDesc:setString(tostring(info.totalScore))
                return
            end
        end
        self._textSelfRank:setString("未上榜")
        self._textSelfDesc:setString("0")
    else
        local rankType = self._rankList[self._tabType]
        if rankType == TeaHouseRankView.RANK_TYPE.FILTER then
            for _, info in ipairs(self._infoList) do
                if info.stUser.nNumId == TeaHouse.BridgeData.getNumberID() then
                    self._textSelfRank:setString(tostring(info.nRank))
                    self._textSelfDesc:setString(tostring(self:changeCostCard(self._tabType,info.nScore)))
                    return
                end
            end
            self._textSelfRank:setString("未上榜")
            self._textSelfDesc:setString("0")
        else
            for _, info in pairs(self._infoList) do
                if info.stUserInfo and info.stUserInfo.numid == TeaHouse.BridgeData.getNumberID() then
                    self._textSelfRank:setString(tostring(info.nRank))
                    return
                end
            end
            self._textSelfRank:setString("未上榜")
        end
    end
end

function TeaHouseRankView:setGameListState(isShow)
    if self._imgGameListBg then
        self._imgGameListBg:setVisible(isShow)
    end
    if self._btnHideGameList then
        self._btnHideGameList:setVisible(isShow)
    end
    if self._btnShowGameList then
        self._btnShowGameList:setVisible(not isShow)
    end
    if self._panelGameListMask then
        if isShow and self._panelRoot and self._panelGameList then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelGameList:convertToNodeSpace(rootPosition)
            self._panelGameListMask:setPosition(rootPosition)
            self._panelGameListMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelGameListMask:setVisible(isShow)
    end
end

function TeaHouseRankView:initGameList()
    if not self._svGameList or not self._btnGame then
        return
    end
    local gameList = TeaHouse.BridgeData.getTeaHouseRoomGameList()
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    if gameList and gameNameList then
        self._gameListSize = self._svGameList:getContentSize()
        self._gameItemSize = self._btnGame:getContentSize()
        local listHeight = self._gameItemSize.height * (#gameList + 1) + 30
        if listHeight < self._gameListSize.height then
            listHeight = self._gameListSize.height
            self._svGameList:setInnerContainerSize(self._gameListSize)
        elseif listHeight > self._gameListSize.height then
            self._svGameList:setInnerContainerSize(cc.size(self._gameListSize.width, listHeight))
        end
        self._gameItemOffset = cc.p(self._gameItemSize.width / 2, listHeight - self._gameItemSize.height / 2)
        self:addGameItem(0, "所有游戏")
        self:setGame(0, "所有游戏")
        for _, gameID in ipairs(gameList) do
            self:addGameItem(gameID, gameNameList[gameID])
        end
    end
end

function TeaHouseRankView:addGameItem(gameID, gameName)
    if not gameID or not gameName then
        return
    end
    if not self._svGameList or not self._btnGame then
        return
    end
    local btnGame = self._btnGame:clone()
    btnGame:setVisible(true)
    btnGame:setPosition(self._gameItemOffset)
    self._gameItemOffset.y = self._gameItemOffset.y - self._gameItemSize.height
    btnGame:addTouchEventListener(function(send, eventType)
        TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
        if eventType ~= ccui.TouchEventType.ended then
            return
        end
        self:setGame(gameID, gameName)
        self:setGameListState(false)
    end)
    local textGame = btnGame:getChildByName("_KW_TEXT_GAME")
    if textGame then
        textGame:setString(gameName)
    end
    self._svGameList:addChild(btnGame)
end

function TeaHouseRankView:setGame(gameID, gameName)
    if self._textGameSelect then
        self._textGameSelect:setString(gameName)
        self._textGameSelect:setFontSize(KW_MAX_NAME_FONT_SIZE)
        TeaHouse.UITool.adaptTextToWidth(self._textGameSelect, KW_MAX_NAME_WIDTH, KW_MAX_NAME_FONT_SIZE, KW_MIN_NAME_FONT_SIZE)
    end
    if self._gameID ~= gameID then
        self._gameID = gameID
        self:reqRankInfo()
    end
end

function TeaHouseRankView:onHideGameListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setGameListState(false)
end

function TeaHouseRankView:onShowGameListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setGameListState(true)
end

function TeaHouseRankView:onRankSettingClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseRankItem.TeaHouseRankSetting")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_56)
end

function TeaHouseRankView:onCurDateUpdate(event)
    local date = event.msg.nTime
    self:initDate(date)
    self._textStartSearchDay:setString(os.date("%Y-%m-%d", date))
    self._textEndSearchDay:setString(os.date("%Y-%m-%d", date))
end

function TeaHouseRankView:initDate(date)
    local nCurTime = date
    for i = 1, KW_SHOW_BILL_DAY do
        local startBtnFilter = ccui.Helper:seekWidgetByName(self._panelStartDate, "_KW_DATE_INFO_" .. i)
        if startBtnFilter then
            startBtnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangeDate(send, eventType, i)
            end)
            startBtnFilter:setTitleText(os.date("%Y-%m-%d", nCurTime - 86400 * (KW_SHOW_BILL_DAY - i)))
            startBtnFilter:setTag(KW_SHOW_BILL_DAY - i)
        end

        local endBtnFilter = ccui.Helper:seekWidgetByName(self._panelEndDate, "_KW_DATE_INFO_" .. i)
        if endBtnFilter then
            endBtnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangeDate(send, eventType, i)
            end)
            endBtnFilter:setTitleText(os.date("%Y-%m-%d", nCurTime - 86400 * (KW_SHOW_BILL_DAY - i)))
            endBtnFilter:setTag(KW_SHOW_BILL_DAY - i)
        end
    end
    self._changeStartDate:addEventListener(handler(self,self.onTouchEventChangeBWCOSTDate))
    self._changeEndDate:addEventListener(handler(self,self.onTouchEventChangeBWCOSTDate))
end

function TeaHouseRankView:onTouchEventChangeBWCOSTDate(send, eventType)
    local bShow = eventType == ccui.CheckBoxEventType.selected

    -- 根据复选框选中状态判定是开始日期还是结束日期
    if send == self._changeStartDate then
        self._startFilterBg:setVisible(bShow)
        self._endFilterBg:setVisible(false)
        self._changeStartDate:setSelected(bShow)
        self._changeEndDate:setSelected(false)
    elseif send == self._changeEndDate then
        self._endFilterBg:setVisible(bShow)
        self._startFilterBg:setVisible(false)
        self._changeStartDate:setSelected(false)
        self._changeEndDate:setSelected(bShow)
    end
end

function TeaHouseRankView:onTouchEventChangeDate(send, eventType, index)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local curBillDate = send:getTitleText()
    if send:getParent() == self._startFilterBg then
        self:onTouchEventChangeBWCOSTDate(self._changeStartDate, ccui.CheckBoxEventType.unselected)
        self._textStartSearchDay:setString(curBillDate)
        self._endDay = send:getTag()
    else
        self:onTouchEventChangeBWCOSTDate(self._changeEndDate, ccui.CheckBoxEventType.unselected)
        self._textEndSearchDay:setString(curBillDate)
        self._startDay = send:getTag()
    end
end

function TeaHouseRankView:onSearchClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._startDay > self._endDay then
        TeaHouse.TipTool.showToast("日期错误")
        return
    end
    self:reqRankInfo()
end

-- 设置胜负分排行榜显示内容
function TeaHouseRankView:setWinLoseTypeName(tValueType)
    if self._textRankDesc21 and tValueType[1] then
        self._textRankDesc21:setString(tValueType[1])
    end
    if self._textRankDesc22 and tValueType[2] then
        self._textRankDesc22:setString(tValueType[2])
    end
    if self._textRankDesc23 and tValueType[3] then
        self._textRankDesc23:setString(tValueType[3])
    end
end

--人人比赛场地区有小卡的,房间配置都是小卡,显示需要转成大卡
function TeaHouseRankView:changeCostCard(tabType,num)
    if tabType == TeaHouseRankView.TAB_TYPE.COST and TeaHouse.BridgeData.isRemodelArea() and num 
    and not (TeaHouse.LOBBY_ID.WENZHOU == TeaHouse.BridgeData.getLobbyID())then--温茶配了小卡但是没用，得加特判
        num = tonumber(num) / (TeaHouse.BridgeData.getSmallRoomCardRatio() or 1)
    end
    return num
end

return TeaHouseRankView