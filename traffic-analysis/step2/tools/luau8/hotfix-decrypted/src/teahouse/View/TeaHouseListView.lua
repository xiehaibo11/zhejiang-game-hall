---@class TeaHouseListView : View
local TeaHouseListView = class("TeaHouseListView", TeaHouse.View)

local KW_MAX_UPDATE_COUNT = 4

TeaHouseListView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseListView.csb",
    binding = {
        ["_KW_NODE_LIST_OFFSET"] = { tag = "_KW_NODE_LIST_OFFSET", name = "_nodeListOffset", class = "node" },
        ["_KW_SV_INFO_LIST"] = { tag = "_KW_SV_INFO_LIST", name = "_svInfoList", class = "scrollview" },
        ["_KW_BTN_BACK"] = { tag = "_KW_BTN_BACK", name = "_btnBack", class = "btn", events = "onBackClicked" },
        ["_KW_BTN_CREATE"] = { tag = "_KW_BTN_CREATE", name = "_btnCreate", class = "btn", events = "onCreateClicked" },
    }
}

function TeaHouseListView:ctor()
    TeaHouseListView.super.ctor(self)

    self._infoListSize = nil
    self._itemOriginPos = nil
    self._itemOffsetPos = nil

    self._isUpdate = false
    self._isLastUpdate = false
    self._updateCount = 0
    self._updateCoroutine = nil

    self._itemInfos = {}

    self:initUI()
end

function TeaHouseListView:initUI()
    if self._svInfoList ~= nil then
        self._infoListSize = self._svInfoList:getContentSize()
    end
    if self._nodeListOffset then
        self._itemOriginPos = cc.p(self._nodeListOffset:getPosition())
    else
        self._itemOriginPos = cc.p(0, 0)
    end
    self._itemOffsetPos = cc.p(self._itemOriginPos.x, self._itemOriginPos.y)
end

function TeaHouseListView:onEnter()
    self:initEvents()
    self:customEventInit()
    TeaHouse.manager.teahouseList:reqInit()
end

function TeaHouseListView:onExit()
    TeaHouseListView.super.onExit(self)
    if self._listenerEventWinSizeChange then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerEventWinSizeChange)
        self._listenerEventWinSizeChange = nil
    end
end

function TeaHouseListView:initEvents()
    local teahouseList = TeaHouse.manager.teahouseList
    self:createListener(teahouseList)
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_ADD, handler(self, self.onTeaHouseListAdd))
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_CHANGED, handler(self, self.onTeaHouseListChanged))
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_REMOVE, handler(self, self.onTeaHouseListRemove))
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_RELOAD, handler(self, self.onTeaHouseListReload))
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_INFO_UPDATE, handler(self, self.onTeaHouseListInfoUpdate))
    :addEventListener(teahouseList.EVENT_REMODEL_TEA_HOUSE_REGISTER_AGENT,handler(self, self.onTeaHouseRegisterAgent))

    local teahouseSetup = TeaHouse.manager.teahouseSetup
    self:createListener(teahouseSetup)
    :addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_NOTIFY, handler(self, self.onSetupUpdateNotify))

    local teahouseGeneral = TeaHouse.manager.teahouseGeneral
    self:createListener(teahouseGeneral)
    :addEventListener(teahouseGeneral.EVENT_TEA_HOUSE_LIST_CHANGE, handler(self, self.onUpdateTeaHouseList))

    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_CLOSE_TEAHOUSE_LIST, handler(self, self.onCloseSelf))
end

function TeaHouseListView:customEventInit()
    self._listenerEventWinSizeChange = cc.EventListenerCustom:create("event_do_screen_size_changed", handler(self, self.onWinSizeChange))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventWinSizeChange, 1)
end

function TeaHouseListView:onTeaHouseListAdd(event)
    self:addInfoItem(event.msg.info, true)
end

function TeaHouseListView:onTeaHouseListChanged(event)
    if event.msg.isFirst then
        self:cleanupList()
    end
    self._isLastUpdate = event.msg.isLast
    local teaHousePendingList = TeaHouse.manager.teahouseList:getTeaHousePendingList()
    if #teaHousePendingList >= KW_MAX_UPDATE_COUNT or self._isLastUpdate then
        self:updateList()
    end
end

function TeaHouseListView:onTeaHouseListRemove(event)
    local removeIndex = nil
    for i = 1, #self._itemInfos do
        local itemInfo = self._itemInfos[i]
        if itemInfo.isInfo and itemInfo.item:getInfo().nTeaNumber == event.msg.teaHouseID then
            removeIndex = i
        elseif removeIndex ~= nil then
            itemInfo.item:setPosition(cc.p(itemInfo.item:getPositionX() - itemInfo.item:getWidth(), itemInfo.item:getPositionY()))
        end
    end
    if removeIndex == nil then
        return
    end
    local itemInfo = self._itemInfos[removeIndex]
    itemInfo.item:removeSelf()
    table.remove(self._itemInfos, removeIndex)
end

function TeaHouseListView:onTeaHouseListReload(event)
    TeaHouse.manager.teahouseList:reqInit()
end

function TeaHouseListView:onTeaHouseListInfoUpdate(event)
    for i = 1, #self._itemInfos do
        local itemInfo = self._itemInfos[i]
        if itemInfo.isInfo and itemInfo.item:getInfo().nTeaNumber == event.msg.teaHouseID then
            itemInfo.item:updateInfo()
            break
        end
    end
end

function TeaHouseListView:onSetupUpdateNotify(event)
    for i = 1, #self._itemInfos do
        local itemInfo = self._itemInfos[i]
        if itemInfo.isInfo and itemInfo.item:getInfo().nTeaNumber == event.msg.teaNumber then
            itemInfo.item:updateInfo()
            break
        end
    end
end

function TeaHouseListView:updateListSize()
    if self._svInfoList == nil or self._infoListSize == nil or self._itemOffsetPos == nil then
        return
    end

    local innerPos = self._svInfoList:getInnerContainerPosition()
    if self._itemOffsetPos.x < self._infoListSize.width then
        self._svInfoList:setInnerContainerSize(self._infoListSize)
    else
        self._svInfoList:setInnerContainerSize(cc.size(self._itemOffsetPos.x, self._infoListSize.height))
    end
    self._svInfoList:setInnerContainerPosition(innerPos)
end

function TeaHouseListView:addJoinItem()
    if self._svInfoList == nil or self._itemOffsetPos == nil then
        return
    end

    local teaHouseListJoinItem = TeaHouse.manager.viewManager:createView("TeaHouseListItem.TeaHouseListJoinItem")
    self._itemInfos[#self._itemInfos + 1] = { isInfo = false, item = teaHouseListJoinItem }
    self._svInfoList:addChild(teaHouseListJoinItem)
    teaHouseListJoinItem:setPosition(self._itemOffsetPos)
    self._itemOffsetPos.x = self._itemOffsetPos.x + teaHouseListJoinItem:getWidth()

    self:updateListSize()
end

function TeaHouseListView:addInfoItem(info, isFront)
    if self._svInfoList == nil or self._itemOffsetPos == nil then
        return
    end
    isFront = isFront or false

    local teaHouseListInfoItem = TeaHouse.manager.viewManager:createView("TeaHouseListItem.TeaHouseListInfoItem", info)
    if isFront then
        for i = 1, #self._itemInfos do
            local itemInfo = self._itemInfos[i]
            itemInfo.item:setPosition(cc.p(itemInfo.item:getPositionX() + itemInfo.item:getWidth(), itemInfo.item:getPositionY()))
        end
        table.insert(self._itemInfos, 1, { isInfo = true, item = teaHouseListInfoItem })
    else
        self._itemInfos[#self._itemInfos + 1] = { isInfo = true, item = teaHouseListInfoItem }
    end
    self._svInfoList:addChild(teaHouseListInfoItem)
    teaHouseListInfoItem:setPosition(isFront and self._itemOriginPos or self._itemOffsetPos)
    self._itemOffsetPos.x = self._itemOffsetPos.x + teaHouseListInfoItem:getWidth()

    self:updateListSize()
end

function TeaHouseListView:updateList()
    if self._isUpdate then
        return
    end
    self._isUpdate = true
    self._updateCount = 0
    local updateCoroutine = coroutine.create(function()
        while true do
            local teaHousePendingList = TeaHouse.manager.teahouseList:getTeaHousePendingList()
            if #teaHousePendingList > 0 then
                if teaHousePendingList[1].nTeaOwnerNumid ~= 0 then
                    self:addInfoItem(teaHousePendingList[1])
                end
                table.remove(teaHousePendingList, 1)
                self._updateCount = self._updateCount + 1
            else
                if self._isLastUpdate then
                    self:addJoinItem()
                    break
                end
                coroutine.yield()
            end
            if self._updateCount >= KW_MAX_UPDATE_COUNT then
                self._updateCount = 0
                coroutine.yield()
            end
        end
    end)
    self:startCheckCoroutine(updateCoroutine, function()
        self._isUpdate = false
        self:stopCheckCoroutine(updateCoroutine)
    end)
end

function TeaHouseListView:cleanupList()
    if self._svInfoList == nil then
        return
    end

    self._svInfoList:removeAllChildren()
    self._itemOffsetPos = cc.p(self._itemOriginPos.x, self._itemOriginPos.y)
    self._itemInfos = {}
end

function TeaHouseListView:onCloseSelf()
    self:onBackClicked(self._btnBack, ccui.TouchEventType.ended)
end

function TeaHouseListView:onBackClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    XH.bugly.buglyLog("onTeaHouseLeave", "onTeaHouseLeave")
    XH.lobby:getModule("AutoPop"):onBackToLobby("tealist")
    XH.lobby:getModule("AutoPop"):whenBackLobbyCheckPop()
    XH.lobby:getModule("LuckyTask"):reqTaskList(true)
    self:close()
end

function TeaHouseListView:onCreateClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._isUpdate then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "IS_GETING_TEAHOUSELIST")
        return
    end

    if TeaHouse.manager.configManager.SetupConfig.IsOpenTeaHouseByPhone then
        if XH.playerData:getPlayerPhone() ~= "" or TeaHouse.BridgeData.IsAgent() or TeaHouse.BridgeData.IsVirtualAgent() then
            TeaHouse.manager.viewManager:openView("TeaHouseCreateView")
        else
            TeaHouse.showPhoneBind()
        end
    else
        if TeaHouse.BridgeData.IsAgent() then
            TeaHouse.manager.viewManager:openView("TeaHouseCreateView")
        else
            if TeaHouse.manager.teahouseList:isUsedSimpleRemodelTeaHouse() then
                TeaHouse.manager.teahouseList:reqRegisterAgent()
            else
                TeaHouse.teaPlayerguide()
            end
        end
    end
    self:RecordData(os.time(),"BTN_CREATE")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_68,{TeaHouseModel = "老比赛场模式"})
end


function TeaHouseListView:onUpdateTeaHouseList(event)
    print("TeaHouseListView...onUpdateTeaHouseList")
    TeaHouse.manager.teahouseList:initReq()
    TeaHouse.manager.teahouseList:reqInit()
end

function TeaHouseListView:RecordData(time,name)
    --数据统计
    local data = {}
    data.userid = XH.playerData:getNumberID()
    data.time1 = time
    data.button = name
    XH.throwDataManager:throwData(XH.ThrowDataDefine.TeaHouseSelected,data)
end

function TeaHouseListView:onTeaHouseRegisterAgent(event)
    TeaHouse.manager.viewManager:openView("TeaHouseCreateView")
end

function TeaHouseListView:onWinSizeChange(event)
    self:close()
    XH.teaHouseManager:openTeaHouseList()
end
return TeaHouseListView�-