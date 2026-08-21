--比赛场转型后的比赛场列表
local TeaHouseListViewBase = require("teahouse.View.TeaHouseListView")
local TeaHouseRemodelListView = class("TeaHouseRemodelListView", TeaHouseListViewBase)

local KW_MAX_UPDATE_COUNT = 4

TeaHouseRemodelListView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRemodelListView.csb",
    binding = {
        ["_KW_NODE_LIST_OFFSET"] = {tag = "_KW_NODE_LIST_OFFSET", name = "_nodeListOffset", class = "node"},
        ["_KW_SV_INFO_LIST"] = {tag = "_KW_SV_INFO_LIST", name = "_svInfoList", class = "scrollview"},
        ["_KW_BTN_BACK"] = {tag = "_KW_BTN_BACK", name = "_btnBack", class = "btn", events = "onBackClicked"},
        ["_KW_BTN_CREATE"] = {tag = "_KW_BTN_CREATE", name = "_btnCreate", class = "btn", events = "onCreateClicked"},
    }
}

function TeaHouseRemodelListView:ctor()
    TeaHouseRemodelListView.super.ctor(self)
end

function TeaHouseRemodelListView:initEvents()
    TeaHouseRemodelListView.super.initEvents(self)
    local teahouseList = TeaHouse.manager.teahouseList
    self:createListener(teahouseList)
    :addEventListener(teahouseList.EVENT_REMODEL_TEA_HOUSE_REGISTER_AGENT,handler(self, self.onTeaHouseRegisterAgent))
end

function TeaHouseRemodelListView:addInfoItem(info, isFront)
    if self._svInfoList == nil or self._itemOffsetPos == nil then
        return
    end
    isFront = isFront or false
    local extra = info.acExtraData or ""
    local ex_data = json.decode(extra)
    local TeaHouseRemodelConfig = TeaHouse.manager.configManager.remodelConfig
    if ex_data and ex_data.level > TeaHouseRemodelConfig.TEAHOUSELEVEL.SENIOR then
        return
    end
    local teaHouseListInfoItem = TeaHouse.manager.viewManager:createView("TeaHouseListItem.TeaHouseRemodelListInfoItem", info)
    if isFront then
        for i = 1, #self._itemInfos do
            local itemInfo = self._itemInfos[i]
            itemInfo.item:setPosition(cc.p(itemInfo.item:getPositionX() + itemInfo.item:getWidth(), itemInfo.item:getPositionY()))
        end
        table.insert(self._itemInfos, 1, {isInfo = true, item = teaHouseListInfoItem})
    else
        self._itemInfos[#self._itemInfos + 1] = {isInfo = true, item = teaHouseListInfoItem}
    end
    self._svInfoList:addChild(teaHouseListInfoItem)
    teaHouseListInfoItem:setPosition(isFront and self._itemOriginPos or self._itemOffsetPos)
    self._itemOffsetPos.x = self._itemOffsetPos.x + teaHouseListInfoItem:getWidth()
    self:updateListSize()
end

function TeaHouseRemodelListView:onCreateClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25041501)
    if self._isUpdate then
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "IS_GETING_TEAHOUSELIST")
        return
    end
    self:createLevelMoments()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_68,{TeaHouseModel = "人人比赛场"})
end

function TeaHouseRemodelListView:createLevelMoments()
    self:onCountEveryLevelTeaNumber()
    TeaHouse.manager.teaHouseRemodeCreate:createRemodelTeaHouse(1)
end

function TeaHouseRemodelListView:onTeaHouseRegisterAgent(event)

end

function TeaHouseRemodelListView:onCountEveryLevelTeaNumber()
    local countTable = {}
    for i = 1, #self._itemInfos do
        local itemInfo = self._itemInfos[i]
        if itemInfo.isInfo then
            local info = itemInfo.item:getInfo()
            if info.acExtraData then
                local acExtraData = json.decode(info.acExtraData)
                if next(acExtraData) and info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID() then
                    local level  = acExtraData.level or 0
                    if countTable[level] then
                        countTable[level] = countTable[level] + 1
                    else
                        countTable[level] = 1
                    end
                end
            end
        end
    end
    return TeaHouse.manager.teahouseList:setEveryLevelTeaNumberResult(countTable)
end

return TeaHouseRemodelListView
