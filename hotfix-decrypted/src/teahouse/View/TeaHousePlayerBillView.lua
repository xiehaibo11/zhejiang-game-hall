---@class TeaHousePlayerBillView : View
local TeaHousePlayerBillView = class("TeaHousePlayerBillView", TeaHouse.View)

TeaHousePlayerBillView.ColorDetailText = cc.c3b(163,111,72)
TeaHousePlayerBillView.ColorDetailTextSelf = cc.c3b(30,145,141)
TeaHousePlayerBillView.MaxDateSelectCount = 7

TeaHousePlayerBillView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHousePlayerBillView.csb",
    binding = {
        ["_KW_PANEL_ADAPT"] = { tag = "_KW_PANEL_ADAPT", name = "_panelAdapt", class = "panel" },
        ["_KW_PANEL_BILL_LIST"] = { tag = "_KW_PANEL_BILL_LIST", name = "_panelBillList", class = "panel" },
        ["_KW_TEXT_DATE"] = { tag = "_KW_TEXT_DATE", name = "_textDate", class = "text" },
        ["_KW_TEXT_BIG_WIN_COUNT"] = { tag = "_KW_TEXT_BIG_WIN_COUNT", name = "_textBigWinCount", class = "text" },
        ["_KW_TEXT_TODAY_SCORE"] = { tag = "_KW_TEXT_TODAY_SCORE", name = "_textTodayScore", class = "text" },
        ["_KW_TEXT_TODAY_PLAYCOUNT"] = { tag = "_KW_TEXT_TODAY_PLAYCOUNT", name = "_textTodayPlayCount", class = "text" },
        ["_KW_PANEL_LIST"] = { tag = "_KW_PANEL_LIST", name = "_panelListInfo", class = "panel" },
        ["_KW_BTN_SEE_PLAYBACK"] = { tag = "_KW_BTN_SEE_PLAYBACK", name = "_btnSeePlayback", class = "btn", events = "onBtnEventSeePlayback" },
        ["_KW_BTN_LIST_FRESH"] = { tag = "_KW_BTN_LIST_FRESH", name = "_btnFresh", class = "btn", events = "onBtnEventFresh" },
        ["_KW_BTN_BACK"] = { tag = "_KW_BTN_BACK", name = "_btnBack", class = "btn", events = "onBtnEventBack" },
        ["_KW_BTN_SHOW_DATE"] = { tag = "_KW_BTN_SHOW_DATE", name = "_btnShowDate", class = "btn", events = "onBtnEventShowDate" },
        ["_KW_BTN_HIDE_DATE"] = { tag = "_KW_BTN_HIDE_DATE", name = "_btnHideDate", class = "btn", events = "onBtnEventHideDate" },
        ["_KW_IMG_DATE_SELECT"] = { tag = "_KW_IMG_DATE_SELECT", name = "_imgDateSelect", class = "img" },
        ["_KW_TEXT_NOTICE_NO_BILL"] = { tag = "_KW_TEXT_NOTICE_NO_BILL", name = "_textNoticeNoBill", class = "text" },
        
        ["_KW_PANEL_BILL_DETAIL"] = { tag = "_KW_PANEL_BILL_DETAIL", name = "_panelDetail", class = "panel" },
        ["_KW_TEXT_GAMENAME"] = { tag = "_KW_TEXT_GAMENAME", name = "_textDetailGameName", class = "text" },
        ["_KW_TEXT_DETAIL_ROOMID"] = { tag = "_KW_TEXT_DETAIL_ROOMID", name = "_textDetailRoomId", class = "text" },
        ["_KW_TEXT_DETAIL_DATE_TIME"] = { tag = "_KW_TEXT_DETAIL_DATE_TIME", name = "_textDetailDateTime", class = "text" },
        ["_KW_TEXT_DETAIL_PLAYCOUNT"] = { tag = "_KW_TEXT_DETAIL_PLAYCOUNT", name = "_textDetailPlayCount", class = "text" },
        ["_KW_TEXT_DETAIL_INDEX"] = { tag = "_KW_TEXT_DETAIL_INDEX", name = "_textDetailIndex", class = "text" },
        
        ["_KW_PANEL_DETAIL_PLAYER_NAME"] = { tag = "_KW_PANEL_DETAIL_PLAYER_NAME", name = "_panelDetailPlayerName", class = "panel" },
        ["_KW_PANEL_SINGLE_NAME_ID"] = { tag = "_KW_PANEL_SINGLE_NAME_ID", name = "_panelDetailNameId", class = "panel" },
        ["_KW_PANEL_PLAYER_TOTAL_SCORE"] = { tag = "_KW_PANEL_PLAYER_TOTAL_SCORE", name = "_panelDetailTotalScores", class = "panel" },
        ["_KW_TEXT_PLAYER_TOTAL_SCORE"] = { tag = "_KW_TEXT_PLAYER_TOTAL_SCORE", name = "_textTotalScore", class = "text" },
        ["_KW_BTN_DETAIL_RETURN_LIST"] = { tag = "_KW_BTN_DETAIL_RETURN_LIST", name = "_btnReturnToList", class = "btn", events = "onBtnEventReturnToList" },
        ["_KW_BTN_DETAIL_SHARE"] = { tag = "_KW_BTN_DETAIL_SHARE", name = "_btnSwitchShare", class = "btn", events = "onBtnEventSwitchShare" },
        ["_KW_BTN_DETAIL_PLAYBACK"] = { tag = "_KW_BTN_DETAIL_PLAYBACK", name = "_btnSwitchPlayback", class = "btn", events = "onBtnEventSwitchPlayback" },
        ["_KW_PANEL_DETAIL_LIST"] = { tag = "_KW_PANEL_DETAIL_LIST", name = "_panelDetailListInfo", class = "panel" },
        ["_KW_PANEL_DETAIL_ITEM"] = { tag = "_KW_PANEL_DETAIL_ITEM", name = "_panelDetailItem", class = "panel" },
        ["_KW_BTN_ALLWIN"] = { name = "_btnAllWin",  events = "onBtnEventAllWin" },
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHousePlayerBillView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_DATE_SELECT_", startNum = 1, endNum = TeaHousePlayerBillView.MaxDateSelectCount, preName = "_btnDateSelect_", class = "btn", events = "onBtnEventDateSelect"
})

function TeaHousePlayerBillView:ctor()
    TeaHousePlayerBillView.super.ctor(self)
    self._bFirstEnter = true
    self:initData()
    self:initView()
end

function TeaHousePlayerBillView:initData()
    self._billInfoList = {}

    self._detailInfoList = {}
    self._bShowShare = true
end

function TeaHousePlayerBillView:initView()
    self:initDateSelect()
    self._panelBillList:setVisible(true)
    self._panelDetail:setVisible(false)
    self:adaptForLiuHai()
    self:showSxvipFinger()
end

function TeaHousePlayerBillView:adaptForLiuHai()
    if not TeaHouse.UITool.isLiuHaiScreen() or not self._panelAdapt then
        return 
    end
    local notchWidth = TeaHouse.UITool.getNotchWidth()
    local nowSize = self._panelAdapt:getContentSize()
    self._panelAdapt:setContentSize(cc.size(nowSize.width - notchWidth*2, nowSize.height))
    ccui.Helper:doLayout(self._panelAdapt)
end

function TeaHousePlayerBillView:onEnter()
    self:initEvents()
    if self._bFirstEnter then
        TeaHouse.manager.playerBill:reqCurTime()
    end
    self._bFirstEnter = false
end

function TeaHousePlayerBillView:initEvents()
    local playerBill = TeaHouse.manager.playerBill
    self:createListener(playerBill)
    :addEventListener(playerBill.EVENT_BILL_UPDATE_TOTALLIST, handler(self, self.onUpdateTotalList))
    :addEventListener(playerBill.EVENT_BILL_UPDATE_BILLDETAIL, handler(self, self.onUpdateBillDetail))
    :addEventListener(playerBill.EVENT_BILL_UPDATE_CURTIME, handler(self, self.onUpdateCurTime))
    
end

function TeaHousePlayerBillView:initDateSelect()
    self:closeDateSelect()

    local imgSize = self._imgDateSelect:getContentSize()
    local totalHeight = 60 * TeaHouse.manager.playerBill.SHOW_BILL_DAY + 20
    self._imgDateSelect:setContentSize(cc.size(imgSize.width, totalHeight))

    local showCount = TeaHouse.manager.playerBill.SHOW_BILL_DAY
    for i = 1, self.MaxDateSelectCount do
        if self["_btnDateSelect_"..i] then
            self["_btnDateSelect_"..i]:setTag(i)
            self["_btnDateSelect_"..i]:setPositionY(20*(showCount-i+1)+40*(showCount-i+1/2))
            if i > showCount then
                self["_btnDateSelect_"..i]:setVisible(false)
            end
        end
    end
end

function TeaHousePlayerBillView:onUpdateCurTime(event)
    local curBillDateStr = TeaHouse.manager.playerBill:getCurBillDateStr()
    self._textDate:setString(curBillDateStr)

    self._curBillTimeIndex = 0
    
    local curTime = TeaHouse.manager.playerBill:getCurTime()
    local showCount = TeaHouse.manager.playerBill.SHOW_BILL_DAY
    for i = 1, showCount do
        if self["_btnDateSelect_"..i] then
            self["_btnDateSelect_"..i]:setTitleText(os.date("%Y-%m-%d", curTime - 86400 * (showCount - i)))
        end
    end
end

function TeaHousePlayerBillView:onUpdateTotalList(event)
    local billInfoList = TeaHouse.manager.playerBill:getCurBillInfo()
    self._billInfoList = billInfoList
    --屏蔽浙江包没有的游戏
    local finalResults = {}
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    local isCard13 = function(gameid)
        if TeaHouse.ReadGameListAndRuleConfig.judgeIsCard13ByGameId(gameid) and TeaHouse.manager.playerBill._curTime > 1590166800 then
            return true
        else
            return false
        end
    end
    for _, result in ipairs(self._billInfoList) do
        if result.gameID and gameNameList[result.gameID] and not isCard13(result.gameID)  then
            table.insert(finalResults, result)
        end
    end

    self._billInfoList = finalResults
    self:refreshTableView()

    local displayUserId = TeaHouse.manager.playerBill:getDisplayUserId()
    local nTodayScore = 0
    local nTodayPlayCount = #billInfoList
    local nBigWinCount = 0
    for _, billInfo in ipairs(billInfoList) do
        local selfScore = 0
        local bigScore = 0
        for _, tPlayerInfo in ipairs(billInfo.playerInfos) do
            if tPlayerInfo.totalscore > bigScore then
                bigScore = tPlayerInfo.totalscore
            end
            --统计玩家今日优胜值
            if tPlayerInfo.numid == displayUserId then
                selfScore = tPlayerInfo.totalscore
            end
        end
        nTodayScore = nTodayScore + selfScore
        if bigScore == selfScore then
            nBigWinCount = nBigWinCount + 1
        end
    end
    self:setBigWinCount(nBigWinCount)
    self:setTodayPlayCount(nTodayPlayCount)
    self:setTodayScore(nTodayScore)
    self._textNoticeNoBill:setVisible(#self._billInfoList == 0)
end

function TeaHousePlayerBillView:onBtnEventDateSelect(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:closeDateSelect()
    local index = send:getTag()
    self:selectDate(index)
end

function TeaHousePlayerBillView:closeDateSelect()
    self._imgDateSelect:setVisible(false)
    self._btnShowDate:setVisible(true)
    self._btnHideDate:setVisible(false)
end

function TeaHousePlayerBillView:showDateSelect()
    self._imgDateSelect:setVisible(true)
    self._btnShowDate:setVisible(false)
    self._btnHideDate:setVisible(true)
end

--日期
function TeaHousePlayerBillView:selectDate(index)
    if index == self._curBillTimeIndex then
        return
    end    
    local dateStr = self["_btnDateSelect_"..index]:getTitleText()
    self._textDate:setString(dateStr)
    TeaHouse.manager.playerBill:setCurBillDateStr(dateStr)
    self._curBillTimeIndex = index
    TeaHouse.manager.playerBill:readPlayerBillInfo(self._curBillTimeIndex)
end

function TeaHousePlayerBillView:setBigWinCount(count)
    if not self._textBigWinCount then
        return 
    end
    self._textBigWinCount:setString(count)
end

--今日优胜值
function TeaHousePlayerBillView:setTodayScore(score)
    if not self._textTodayScore then
        return 
    end
    self._textTodayScore:setString(score)
end

--今日场数
function TeaHousePlayerBillView:setTodayPlayCount(count)
    if not self._textTodayPlayCount then
        return 
    end
    self._textTodayPlayCount:setString(count)
end

function TeaHousePlayerBillView:refreshTableView(isCleanup)
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

function TeaHousePlayerBillView:onTableCellTouched(tableView, cell)

end

function TeaHousePlayerBillView:onCellSizeForTable(tableView, index)
    local size = self._panelListInfo:getContentSize()
    return size.width, 220
end

function TeaHousePlayerBillView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local infoItem = TeaHouse.manager.viewManager:createView("TeaHousePlayerBillItem.TeaHousePlayerBillListItem")
        if infoItem ~= nil then
            infoItem:setAnchorPoint(cc.p(0, 0))
            infoItem:setPosition(0, 0)
            infoItem:setName("InfoItem")
            if self._panelListInfo then
                local itemSize = infoItem:getContentSize()
                local listSize = self._panelListInfo:getContentSize()
                infoItem:setContentSize(cc.size(listSize.width, itemSize.height))
                ccui.Helper:doLayout(infoItem)
            end
            infoItem:setDetailBtnFunc(handler(self, self.onDetailBtnClick))
            cell:addChild(infoItem)
        end
    end
    local infoItem = cell:getChildByName("InfoItem")
    if infoItem ~= nil then
        infoItem:updateInfo(self._billInfoList[index + 1], index + 1)
    end
    return cell
end

function TeaHousePlayerBillView:onNumberOfCellsInTableView(tableView)
    return #self._billInfoList
end

function TeaHousePlayerBillView:onDetailBtnClick(index)
    self._curShowRoomIndex = index

	local tCurRoomInfo, detailData = TeaHouse.manager.playerBill:fetchDetailDataByIdx(index)
	if detailData then
		self:showDetailView(tCurRoomInfo, detailData)
	end
end

function TeaHousePlayerBillView:onBtnEventBack(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

--刷新按钮回调
function TeaHousePlayerBillView:onBtnEventFresh(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.playerBill:clearLocalBillData()
    TeaHouse.manager.playerBill:reqCurTime()
end

--查看回放按钮回调
function TeaHousePlayerBillView:onBtnEventSeePlayback(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.manager.viewManager:openView("TeaHouseRecordView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041701, {block_label='比赛场战绩一级页'})
end

function TeaHousePlayerBillView:onBtnEventShowDate(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:showDateSelect()
end

function TeaHousePlayerBillView:onBtnEventHideDate(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:closeDateSelect()
end

---------------------------------详情界面--------------------------------------

function TeaHousePlayerBillView:onUpdateBillDetail(event)
    self:showDetailView(event.msg.tCurRoomInfo, event.msg.tBillDetail)
end

function TeaHousePlayerBillView:showDetailView(tCurRoomInfo, detailData)
    self._tCurRoomInfo = tCurRoomInfo
    self._panelBillList:setVisible(false)

    local topData = {}
    topData.gameID = tCurRoomInfo.gameID
    topData.roomID = tCurRoomInfo.config
    topData.totalgames = tCurRoomInfo.totalgames
    topData.finishgames = tCurRoomInfo.finishgames
    topData.time = tCurRoomInfo.starttime
    self:updateDetailTopView(topData)

    self:updateDetailSwitchBtns()
    self._detailInfoList = detailData.detailInfo.gameDetail
    self:refreshDetailTableView()
    self:updateDetailPlayerNames(tCurRoomInfo.playerInfos)
    self:updateDetailTotalScores(tCurRoomInfo.playerInfos, tCurRoomInfo.endInfoEx)
    self._panelDetail:setVisible(true)
end

function TeaHousePlayerBillView:updateDetailTopView(data)
    self:setDetailIndex(self._curShowRoomIndex)
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    self:setDetailGameName(gameNameList[data.gameID] or "")
    self:setDetailRoomId(tostring(data.roomID or ""))
    self:setDetailPlayCount(data.finishgames, data.totalgames)
    self:setDetailDateTime(os.date("%Y-%m-%d %H:%M", data.time))
end

function TeaHousePlayerBillView:setDetailIndex(index)
    if not self._textDetailIndex then
        return 
    end
    self._textDetailIndex:setString(index)
end

function TeaHousePlayerBillView:setDetailGameName(nameStr)
    if not self._textDetailGameName then
        return 
    end
    self._textDetailGameName:setString(nameStr)
end

--房间号
function TeaHousePlayerBillView:setDetailRoomId(roomId)
    if not self._textDetailRoomId then
        return 
    end
    self._textDetailRoomId:setString(roomId)
end

--局数
function TeaHousePlayerBillView:setDetailPlayCount(count, countTotal)
    if not self._textDetailPlayCount then
        return 
    end
    self._textDetailPlayCount:setString(count.."/"..countTotal)
end

--时间
function TeaHousePlayerBillView:setDetailDateTime(time)
    if not self._textDetailDateTime then
        return 
    end
    self._textDetailDateTime:setString(time)
end

function TeaHousePlayerBillView:updateDetailPlayerNames(playerInfos)
    if not self._panelDetailPlayerName or not self._panelDetailNameId then
        return 
    end

    if self._tbDetailPlayerNameTexts then
        for _, v in pairs(self._tbDetailPlayerNameTexts) do
            v:removeFromParent()
        end
    end
    self._tbDetailPlayerNameTexts = {}

    local displayUserId = TeaHouse.manager.playerBill:getDisplayUserId()
    local panelSize = self._panelDetailPlayerName:getContentSize()
    local playerCount = #playerInfos
    local singleWidth = panelSize.width/playerCount
    for i = 1, playerCount do
        local nameScoreLayout = self._panelDetailNameId:clone()

        local textName = ccui.Helper:seekWidgetByName(nameScoreLayout, "KW_TEXT_PLAYER_NAME")
        textName:setString(TeaHouse.StringTool.getTrimName(playerInfos[i].nickname) or "")
        textName:setTextColor(displayUserId == playerInfos[i].numid and self.ColorDetailTextSelf or self.ColorDetailText)

        local textId = ccui.Helper:seekWidgetByName(nameScoreLayout, "KW_TEXT_PLAYER_ID")
        textId:setString(playerInfos[i].numid or "")
        textId:setTextColor(displayUserId == playerInfos[i].numid and self.ColorDetailTextSelf or self.ColorDetailText)

        nameScoreLayout:setPositionX(singleWidth*(i-1/2))
        self._panelDetailPlayerName:addChild(nameScoreLayout)
        self._tbDetailPlayerNameTexts[i] = nameScoreLayout
    end
end

function TeaHousePlayerBillView:updateDetailTotalScores(playerInfos, endInfoEx)
    if not self._panelDetailTotalScores or not self._textTotalScore then
        return 
    end

    if self._tbDetailTotalScoreTexts then
        for _, v in pairs(self._tbDetailTotalScoreTexts) do
            v:removeFromParent()
        end
    end
    self._tbDetailTotalScoreTexts = {}

    local displayUserId = TeaHouse.manager.playerBill:getDisplayUserId()
    local panelSize = self._panelDetailTotalScores:getContentSize()
    local playerCount = #playerInfos
    local singleWidth = panelSize.width/playerCount
    for i = 1, playerCount do
        local textScore = self._textTotalScore:clone()
        local totalScore = playerInfos[i].totalscore
        if totalScore >= 0 then
            totalScore = "+"..totalScore
        end
        if endInfoEx then
            local endInfoExItem = endInfoEx[tostring(playerInfos[i].numid)]
            if endInfoExItem then
                local kongsr = endInfoExItem["KONGSC"]
                local isSuanGangScore = endInfoExItem["ISSGF"] or 0
                if kongsr and isSuanGangScore == 0 then
                    totalScore = totalScore .. "("..kongsr..")"
                end
            end  
        end
        textScore:setString(totalScore)
        textScore:setTextColor(displayUserId == playerInfos[i].numid and self.ColorDetailTextSelf or self.ColorDetailText)
        textScore:setPositionX(singleWidth*(i-1/2))
        self._panelDetailTotalScores:addChild(textScore)
        self._tbDetailTotalScoreTexts[i] = textScore
    end
end

function TeaHousePlayerBillView:updateDetailSwitchBtns()
    self._btnSwitchShare:setVisible(self._bShowShare)
    self._btnSwitchPlayback:setVisible(not self._bShowShare)
end

function TeaHousePlayerBillView:refreshDetailTableView(isCleanup)
    if not self._panelDetailListInfo then
        return
    end
    if self._tvDetailList ~= nil and isCleanup then
        self._tvDetailList:removeFromParent()
        self._tvDetailList = nil
    end
    if self._tvDetailList == nil then
        self._tvDetailList = cc.TableView:create(self._panelDetailListInfo:getContentSize())
        self._tvDetailList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvDetailList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvDetailList:setIgnoreAnchorPointForPosition(false)
        self._tvDetailList:setAnchorPoint(cc.p(0, 0))
        self._tvDetailList:setPosition(cc.p(0, 0))
        self._panelDetailListInfo:addChild(self._tvDetailList)
        self._tvDetailList:registerScriptHandler(handler(self, self.onDetailTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvDetailList:registerScriptHandler(handler(self, self.onDetailCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvDetailList:registerScriptHandler(handler(self, self.onDetailTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvDetailList:registerScriptHandler(handler(self, self.onDetailNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tvDetailList ~= nil then
        self._tvDetailList:reloadData()
    end
end

function TeaHousePlayerBillView:onDetailTableCellTouched(tableView, cell)

end

function TeaHousePlayerBillView:onDetailCellSizeForTable(tableView, index)
    local size = self._panelDetailItem:getContentSize()
    return size.width, size.height
end

function TeaHousePlayerBillView:onDetailTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local detailItem = TeaHouse.manager.viewManager:createView("TeaHousePlayerBillItem.TeaHousePlayerBillDetailItem")
        if detailItem ~= nil then
            detailItem:setAnchorPoint(cc.p(0, 0))
            detailItem:setPosition(0, 0)
            detailItem:setName("DetailItem")
            if self._panelDetailItem then
                detailItem:setContentSize(self._panelDetailItem:getContentSize())
                ccui.Helper:doLayout(detailItem)
            end
            cell:addChild(detailItem)
        end
    end
    local detailItem = cell:getChildByName("DetailItem")
    if detailItem ~= nil then
        detailItem:updateInfo(self._detailInfoList[index + 1], index + 1, self._tCurRoomInfo.gameID, self._tCurRoomInfo.playerInfos)
        detailItem:setShowShareBtnBool(self._bShowShare)
    end
    return cell
end

function TeaHousePlayerBillView:onDetailNumberOfCellsInTableView(tableView)
    return #self._detailInfoList
end

--返回列表
function TeaHousePlayerBillView:onBtnEventReturnToList(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    self._panelBillList:setVisible(true)
    self._panelDetail:setVisible(false)
end

function TeaHousePlayerBillView:onBtnEventSwitchShare(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self._bShowShare = false
    self:updateDetailSwitchBtns()
    self:refreshDetailTableView()
end

function TeaHousePlayerBillView:onBtnEventSwitchPlayback(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    self._bShowShare = true
    self:updateDetailSwitchBtns()
    self:refreshDetailTableView()
end

-- 总优胜值回调
function TeaHousePlayerBillView:onBtnEventAllWin(send, eventType)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052602, {block_item_id = self.hasFinger and "有特效" or "无特效", page_item_id = "比赛场战绩"})
    local SxvipConfig = require("lobby.Modules.Sxvip.Config")
    XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxvipConfig.MENU_DEFINE.STAITISTICS})
    self:close()
end

 -- 展示手指动画
function TeaHousePlayerBillView:showSxvipFinger()
    local date = tonumber(os.date("%Y%m%d"))
    if XH.lobby:getModule("Sxvip"):isExpire() and date ~= XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_SXVIPS_SHOW_FINNER_DATE, 0) then
        local aniNode = self:createFingerAniNode()
        if aniNode then
            aniNode:setPosition(100, 10)
            self._btnAllWin:addChild(aniNode)
        end
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_SXVIPS_SHOW_FINNER_DATE, date)
        
        self.hasFinger = true
    end
end

function TeaHousePlayerBillView:createFingerAniNode()
    local aniPath = "animation/Lobby/Base/shoudianji/"
    local params = {path = aniPath, tex = "ShouDianJi.json", ske = "ShouDianJi.atlas", armatureName = "ShouDianJi", scale=1}
    local spineNode = display.playDargonBonesSpine(params)
    return spineNode
end

return TeaHousePlayerBillView   f  