---@class TeaHouseMutexView : View
local TeaHouseMutexView = class("TeaHouseMutexView", TeaHouse.View)
local TeaHouseMemberMutexHeadListItem = require("src.teahouse.View.TeaHouseMemberItem.TeaHouseMemberMutexHeadListItem")

TeaHouseMutexView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMutexView.csb",
    binding = {
        ["_KW_PANEL_HEAD_LIST"] = { tag = "_KW_PANEL_HEAD_LIST", name = "_panelList", class = "panel" },
        ["_KW_PANEL_HEAD_LIST_ITEM"] = { tag = "_KW_PANEL_HEAD_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_BTN_SEARCH"] = { tag = "_KW_BTN_SEARCH", name = "_btnSearch", class = "btn", events = "onBtnEventSearch" },
        ["_KW_BTN_CANCEL"] = { tag = "_KW_BTN_CANCEL", name = "_btnCancel", class = "btn", events = "onBtnEventCancel" },
        ["_KW_BTN_SURE"] = { tag = "_KW_BTN_SURE", name = "_btnSure", class = "btn", events = "onBtnEventSure" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onBtnEventClose" },
        ["_KW_TEXTFIELD_SEARCH"] = { tag = "_KW_TEXTFIELD_SEARCH", name = "_textFieldSearch", class = "textField" },
        ["_KW_TEXT_SEARCH_NOTICE"] = { tag = "_KW_TEXT_SEARCH_NOTICE", name = "_textSearchNotice", class = "text" },
        ["_KW_TEXT_SEARCH"] = { tag = "_KW_TEXT_SEARCH", name = "_textSearch", class = "text" },
        ["_KW_TEXT_NOTICE"] = { tag = "_KW_TEXT_NOTICE", name = "_textNotice", class = "text" },
    }
}

TeaHouseMutexView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT = "KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT"

function TeaHouseMutexView:ctor(param)
    TeaHouseMutexView.super.ctor(self)

    self:initData()
    self:initView()
end

function TeaHouseMutexView:initData()
    self._searchStr = ""
    self._selectInfoList = {}
    self._infoList = {}
    self._showInfoList = {}
end

function TeaHouseMutexView:initView()
    self._textNotice:setString(TeaHouse.StringTool.replaceMatchStr(self._textNotice:getString()))
    self:initSearchTextField()
end

function TeaHouseMutexView:onEnter()
    self:initEvents()

    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfos = teahouseData:getMemberInfos()
    for _, member in pairs(memberInfos) do
        local tempMember = clone(member)
        table.insert(self._infoList, tempMember)
        table.insert(self._showInfoList, tempMember)
    end

    self:refreshTableView()
end

function TeaHouseMutexView:updateShowInfoList()
    self._showInfoList = {}
    for _, tempInfo in ipairs(self._infoList) do
        if self:isInMemberFilter(tempInfo.nickName, tempInfo.numid) then
            table.insert(self._showInfoList, tempInfo)
        end
    end
    self:refreshTableView()
end

function TeaHouseMutexView:initEvents()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    self._headSelectListener = cc.EventListenerCustom:create(TeaHouseMutexView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT,handler(self, self.onHeadSelect))
    eventDispatcher:addEventListenerWithSceneGraphPriority(self._headSelectListener,self.resourceNode_)
end

function TeaHouseMutexView:removeAllEvents()
    if self._headSelectListener then
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        eventDispatcher:removeEventListener(self._headSelectListener)
    end
end

function TeaHouseMutexView:initSearchTextField()
    self._textFieldSearch:registerScriptEditBoxHandler(function(eventName)
        if eventName == "changed" then
            local searchStr = self._textFieldSearch:getText()
            self._textSearch:setString(searchStr)
            self._textSearchNotice:setVisible(#searchStr == 0)
        elseif eventName == "began" then
            self._textSearch:setVisible(false)
        elseif eventName == "ended" or eventName == "return" then
            self._textSearch:setVisible(true)
            local tempSearchStr = self._textFieldSearch:getText()
            if #self._searchStr > 0 and #tempSearchStr == 0 then
                self._searchStr = ""
                self:updateShowInfoList()
            end
        end
    end)
end

function TeaHouseMutexView:onHeadSelect(event)
    if event.playerID == nil or event.bSelected == nil then
        return 
    end
    if not event.bSelected then
        self._selectInfoList[event.playerID] = nil
    else
        self._selectInfoList[event.playerID] = true
    end
end

function TeaHouseMutexView:onBtnEventSearch(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    if self._textFieldSearch then
        self._searchStr = self._textFieldSearch:getText()
    end
    self:updateShowInfoList()
end

function TeaHouseMutexView:onBtnEventCancel(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseMutexView:onBtnEventSure(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if table.nums(self._selectInfoList) < 2 then
        TeaHouse.TipTool.showToast("至少选择2个玩家")
        return
    end

    if table.nums(self._selectInfoList) > 4 then
        TeaHouse.TipTool.showToast("最多只能选择4个玩家")
        return
    end

    local selectPlayerIDs = {}
    for playerId, bSelect in pairs(self._selectInfoList) do
        if bSelect then
            table.insert(selectPlayerIDs, playerId)
        end
    end
    TeaHouse.manager.teahouseMember:reqSetForbidPlayInSameTable(selectPlayerIDs)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_24)
end

function TeaHouseMutexView:onBtnEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseMutexView:isInMemberFilter(nickName, numid)
    local searchString = self._searchStr
    if string.find(nickName, searchString, 1, true) then
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
        local numID = tostring(numid)
        if #numID >= 2 then
            return string.find(numID, searchString, 1, true)
        end
    end
    return false
end

function TeaHouseMutexView:refreshTableView(isCleanup)
    if not self._panelList then
        return
    end
    if self._tvOnlineList ~= nil and isCleanup then
        self._tvOnlineList:removeFromParent()
        self._tvOnlineList = nil
    end
    if self._tvOnlineList == nil then
        self._tvOnlineList = cc.TableView:create(self._panelList:getContentSize())
        self._tvOnlineList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvOnlineList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvOnlineList:setIgnoreAnchorPointForPosition(false)
        self._tvOnlineList:setAnchorPoint(cc.p(0, 0))
        self._tvOnlineList:setPosition(cc.p(0, 0))
        self._panelList:addChild(self._tvOnlineList)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tvOnlineList ~= nil then
        self._tvOnlineList:reloadData()
    end
end

function TeaHouseMutexView:onTableCellTouched(tableView, cell)

end

function TeaHouseMutexView:onCellSizeForTable(tableView, index)
    if self._panelListItem then
        local size = self._panelListItem:getContentSize()
        return size.width, size.height
    end
    return 1246, 270
end

function TeaHouseMutexView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local listItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberMutexHeadListItem")
        if listItem ~= nil then
            listItem:setAnchorPoint(cc.p(0, 0))
            listItem:setPosition(0, 0)
            listItem:setName("MutexListItem")
            if self._panelListItem then
                listItem:setContentSize(self._panelListItem:getContentSize())
                ccui.Helper:doLayout(listItem)
            end
            cell:addChild(listItem)
        end
    end
    local listItem = cell:getChildByName("MutexListItem")
    if listItem ~= nil then
        local singleLineHeadCount = TeaHouseMemberMutexHeadListItem.KW_PLAYER_MAX_COUNT
        local tempPlayerInfos = {}
        for i = index*singleLineHeadCount + 1, index*singleLineHeadCount + singleLineHeadCount do
            local tempInfo = self._showInfoList[i]
            if not tempInfo then
                break
            end
            tempInfo.bSelected = false
            if self._selectInfoList[tempInfo.numid] then
                tempInfo.bSelected = true
            end
            table.insert(tempPlayerInfos, tempInfo)
        end
        listItem:updateInfo(tempPlayerInfos, TeaHouseMutexView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT)
    end
    return cell
end

function TeaHouseMutexView:onNumberOfCellsInTableView(tableView)
    local singleLineHeadCount = TeaHouseMemberMutexHeadListItem.KW_PLAYER_MAX_COUNT
    return math.ceil( #self._showInfoList / singleLineHeadCount )
end

return TeaHouseMutexView6(