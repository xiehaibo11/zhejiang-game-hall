---@class TeaHouseMemberPowerMenu : View
local TeaHouseMemberPowerMenu = class("TeaHouseMemberPowerMenu", TeaHouse.View)

local MemberPowerType = {
    POWER_MEMBER = "POWER_MEMBER",
    DISMISS_TABLE = "DISMISS_TABLE",
    EDIT_MEMBER_CARD = "EDIT_MEMBER_CARD",
    EDIT_RECORD = "EDIT_RECORD",
    RANK_SETTING = "RANK_SETTING",
    EDIT_INVENTORY_CARD = "EDIT_INVENTORY_CARD"
}

local KW_BTN_STATE = "KW_BTN_STATE"
local KW_TEXT_TIP = "KW_TEXT_TIP"

TeaHouseMemberPowerMenu.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberPowerMenu.csb",
    binding = {
        ["_KW_PANEL_MASK"] = { tag = "_KW_PANEL_MASK", name = "_panelMask", class = "panel", events = "onMaskClicked" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_OK"] = { tag = "_KW_BTN_OK", name = "_btnOK", class = "btn", events = "onOKClicked" },
        ["_KW_PANEL_DEFAULT_ITEM"] = { tag = "_KW_PANEL_DEFAULT_ITEM", name = "_panelDefaultItem", class = "panel" },
        ["_KW_NODE_ITEM_1"] = { tag = "_KW_NODE_ITEM_1", name = "_nodeItem1", class = "node" },
        ["_KW_NODE_ITEM_2"] = { tag = "_KW_NODE_ITEM_2", name = "_nodeItem2", class = "node" },
        ["_KW_NODE_ITEM_3"] = { tag = "_KW_NODE_ITEM_3", name = "_nodeItem3", class = "node" },
        ["_KW_NODE_ITEM_4"] = { tag = "_KW_NODE_ITEM_4", name = "_nodeItem4", class = "node" },
        ["_KW_NODE_ITEM_5"] = { tag = "_KW_NODE_ITEM_5", name = "_nodeItem5", class = "node" },
        ["_KW_NODE_ITEM_6"] = { tag = "_KW_NODE_ITEM_6", name = "_nodeItem6", class = "node" },
        ["_KW_POWER_PANEL"] = { tag = "_KW_POWER_PANEL", name = "_panelPowerDetail", class = "panel", events = "onShowDetailClicked" },
        ["_KW_IMG_TITLE"] = { tag = "_KW_IMG_TITLE", name = "_imgTitle", class = "img" },
    }
}

function TeaHouseMemberPowerMenu:ctor(info)
    TeaHouseMemberPowerMenu.super.ctor(self)

    self._info = info

    self._itemIndex = 1

    self._rightBtns = {}

    self._rightList = {}

    self:initUI()
end

function TeaHouseMemberPowerMenu:initUI()
    local teahouseData = TeaHouse.manager.teahouseData
    local powerConfig = TeaHouse.manager.configManager.powerConfig
    if powerConfig == nil then
        return
    end
    local powerValue = teahouseData.POWER_VALUE.ALLOW_LOW
    if powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "ModifyMember", powerValue) then
        self:addMemberItem()
    end
    if powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "ModifyPlayMode", powerValue) or
    powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "DismissTable", powerValue) or
    powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "DismissGameTable", powerValue) then
        self:addGameItem()
    end
    if powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "AddCardTeaHouse", powerValue) or
    powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "ModifyMemberCost", powerValue) then
        self:addCostItem()
    end
    if powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "ModifyBill", powerValue) then
        self:addBillItem()
    end  
    if powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "QueryRank", powerValue) then
        self:addRankItem()
    end
    --副领队是否允许把自己的大厅房卡转到领队的比赛场里
    if powerConfig:checkPower(teahouseData.POWER_LEVEL.ADMIN, "ModifyInventory", powerValue) then
        self:addInventoryItem()
    end
end

function TeaHouseMemberPowerMenu:onMaskClicked(send, eventType)
    TeaHouse.UITool.onNoActionButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseMemberPowerMenu:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseMemberPowerMenu:onOKClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local right = 0
    for _, info in pairs(self._rightBtns) do
        if info.rightBtn:isSelected() then
            right = TeaHouse.StringTool.bitOr(right, info.addRight)
        end
    end

    if TeaHouse.manager.teahouseMain:isShowPhoneBindTip("绑定手机后可以升级至高级比赛场，解锁该功能，是否绑定？", TeaHouse.manager.teahouseData:getTeaNumber()) then
        return 
    end

    TeaHouse.manager.teahouseMember:setPlayerRight(self._info.areaid, self._info.numid, right)
    self:close()
end

function TeaHouseMemberPowerMenu:addItem(itemAllRight, itemDelRight, itemState, itemName)
    if not self._panelDefaultItem then
        return
    end
    local itemNode = self["_nodeItem" .. self._itemIndex]
    if not itemNode then
        return
    end
    self._itemIndex = self._itemIndex + 1
    local item = self._panelDefaultItem:clone()
    item:setVisible(true)
    item:setPosition(cc.p(0, 0))
    itemNode:addChild(item)
    local btnState = ccui.Helper:seekWidgetByName(item, KW_BTN_STATE)
    if btnState then
        btnState:setSelected(itemState)
        self._rightBtns[#self._rightBtns + 1] = {
            addRight = itemAllRight,
            delRight = itemDelRight,
            rightBtn = btnState
        }
        item:addTouchEventListener(function(send, eventType)
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            local right = 0
            for _, info in pairs(self._rightBtns) do
                if info.rightBtn:isSelected() then
                    right = TeaHouse.StringTool.bitOr(right, info.addRight)
                end
            end
            if btnState:isSelected() then
                right = TeaHouse.StringTool.bitXor(right, itemDelRight)
            else
                right = TeaHouse.StringTool.bitOr(right, itemAllRight)
                --转型地区的业务需求ModifyInventory和ModifyMemberCost是互斥的
                if TeaHouse.BridgeData.isRemodelArea() then
                    if itemAllRight == TeaHouse.manager.configManager.SwitchConfig.InventoryMangeAddPower then
                        if self:isContainPower(right,TeaHouse.manager.configManager.SwitchConfig.FeeMangeAddPower) then
                            right = TeaHouse.StringTool.bitXor(right, TeaHouse.manager.configManager.SwitchConfig.FeeMangeAddPower)
                        end
                    elseif itemAllRight == TeaHouse.manager.configManager.SwitchConfig.FeeMangeAddPower then
                        if self:isContainPower(right,TeaHouse.manager.configManager.SwitchConfig.InventoryMangeAddPower) then
                            right = TeaHouse.StringTool.bitXor(right, TeaHouse.manager.configManager.SwitchConfig.InventoryMangeAddPower)
                        end
                    end
                end
            end
            self:updateItems(right)
        end)
    end
    local textTip = ccui.Helper:seekWidgetByName(item, KW_TEXT_TIP)
    if textTip then
        textTip:setString(TeaHouse.StringTool.replaceMatchStr(itemName))
    end
end

function TeaHouseMemberPowerMenu:addMemberItem()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local memberInfo = teahouseData:getMemberInfoEx(self._info.areaid, self._info.numid)
    local itemState = teahouseData:checkMemberAdminRight(memberInfo, SwitchConfig.MemberMangeDelPower)
    table.insert(self._rightList,MemberPowerType.POWER_MEMBER)
    self:addItem(SwitchConfig.MemberMangeAddPower, SwitchConfig.MemberMangeDelPower, itemState, "成员审批")
end

function TeaHouseMemberPowerMenu:addGameItem()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local memberInfo = teahouseData:getMemberInfoEx(self._info.areaid, self._info.numid)
    local itemState = teahouseData:checkMemberAdminRight(memberInfo, SwitchConfig.GameManageDelPower)
    table.insert(self._rightList,MemberPowerType.DISMISS_TABLE)
    self:addItem(SwitchConfig.GameManageAddPower, SwitchConfig.GameManageDelPower, itemState, "解散桌子")
end

function TeaHouseMemberPowerMenu:addCostItem()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local memberInfo = teahouseData:getMemberInfoEx(self._info.areaid, self._info.numid)
    local itemState = teahouseData:checkMemberAdminRight(memberInfo, SwitchConfig.FeeMangeDelPower)
    table.insert(self._rightList,MemberPowerType.EDIT_MEMBER_CARD)
    self:addItem(SwitchConfig.FeeMangeAddPower, SwitchConfig.FeeMangeDelPower, itemState, "消耗设置")
end

function TeaHouseMemberPowerMenu:addBillItem()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local memberInfo = teahouseData:getMemberInfoEx(self._info.areaid, self._info.numid)
    local itemState = teahouseData:checkMemberAdminRight(memberInfo, SwitchConfig.BillManageDelPower)
    table.insert(self._rightList,MemberPowerType.EDIT_RECORD)
    self:addItem(SwitchConfig.BillManageAddPower, SwitchConfig.BillManageDelPower, itemState, "战绩管理")
end

function TeaHouseMemberPowerMenu:addRankItem()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local memberInfo = teahouseData:getMemberInfoEx(self._info.areaid, self._info.numid)
    local itemState = teahouseData:checkMemberAdminRight(memberInfo, SwitchConfig.CheckRankDelPower)
    table.insert(self._rightList,MemberPowerType.RANK_SETTING)
    self:addItem(SwitchConfig.CheckRankAddPower, SwitchConfig.CheckRankDelPower, itemState, "排行榜设置")
end

function TeaHouseMemberPowerMenu:addInventoryItem()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    local memberInfo = teahouseData:getMemberInfoEx(self._info.areaid, self._info.numid)
    local itemState = teahouseData:checkMemberAdminRight(memberInfo, SwitchConfig.InventoryMangeDelPower)
    table.insert(self._rightList,MemberPowerType.EDIT_INVENTORY_CARD)
    self:addItem(SwitchConfig.InventoryMangeAddPower, SwitchConfig.InventoryMangeDelPower, itemState, "库存划卡")
end

function TeaHouseMemberPowerMenu:onShowDetailClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseMemberItem.TeaHouseMemberPowerDetail", nil, self._rightList)
end

function TeaHouseMemberPowerMenu:updateItems(right)
    for _, info in pairs(self._rightBtns) do
        info.rightBtn:setSelected(TeaHouse.StringTool.bitAnd(right, info.addRight) == info.addRight)
    end
end

function TeaHouseMemberPowerMenu:isContainPower(right,power)
    if right and power then
        return TeaHouse.StringTool.bitAnd(right, power) == power
    end
    return false
end

return TeaHouseMemberPowerMenu