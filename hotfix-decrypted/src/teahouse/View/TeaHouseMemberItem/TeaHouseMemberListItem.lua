---@class TeaHouseMemberListItem : View
local TeaHouseMemberListItem = class("TeaHouseMemberListItem", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

local KW_MAX_TEXT_WIDTH = 120
local KW_MAX_TEXT_FONT_SIZE = 40
local KW_MIN_TEXT_FONT_SIZE = 30

TeaHouseMemberListItem.PROP_TYPE = {
    NONE = 0,
    DAILY = 1,
    PLAYER = 3,
}

TeaHouseMemberListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberListItem.csb",
    binding = {
        ["_KW_IMG_LIST_ITEM"] = { tag = "_KW_IMG_LIST_ITEM", name = "_imgListItem", class = "img" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_IMG_ADMIN_TAG"] = { tag = "_KW_IMG_ADMIN_TAG", name = "_imgAdminTag", class = "img" },
        ["_KW_IMG_BLACK_TAG"] = { tag = "_KW_IMG_BLACK_TAG", name = "_imgBlackTag", class = "img" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_JOIN_TIME"] = { tag = "_KW_JOIN_TIME", name = "_textJoinTime", class = "text" },
        ["_KW_ONLINE_TIME"] = { tag = "_KW_ONLINE_TIME", name = "_textOnlineTime", class = "text" },
        ["_KW_TEXT_NEW_COST"] = { tag = "_KW_TEXT_NEW_COST", name = "_textNewCost", class = "text" },
        ["_KW_TEXT_OLD_COST"] = { tag = "_KW_TEXT_OLD_COST", name = "_textOldCost", class = "text" },
        ["_KW_TF_MAX_COST"] = { tag = "_KW_TF_MAX_COST", name = "_tfMaxCost", class = "textfield" },
        ["_KW_TEXT_MAX_COST"] = { tag = "_KW_TEXT_MAX_COST", name = "_textMaxCost", class = "text" },
        ["_KW_TEXT_MAX_COST_TIP"] = { tag = "_KW_TEXT_MAX_COST_TIP", name = "_textMaxCostTip", class = "text" },
        ["_KW_IMG_MAX_COST_BG"] = { tag = "_KW_IMG_MAX_COST_BG", name = "_imgMaxCostBg", class = "text" },
        ["_KW_BTN_MODIFY"] = { tag = "_KW_BTN_MODIFY", name = "_btnModify", class = "btn", events = "onModifyClicked" },
        ["_KW_BTN_MANAGE"] = { tag = "_KW_BTN_MANAGE", name = "_btnManage", class = "btn", events = "onManageClicked" },
        ["_KW_NODE_POP_POSITOIN"] = { tag = "_KW_NODE_POP_POSITOIN", name = "_nodePopPosition", class = "node" },
    }
}

function TeaHouseMemberListItem:ctor()
    TeaHouseMemberListItem.super.ctor(self)

    self._info = nil

    self._propType = TeaHouseMemberListItem.PROP_TYPE.NONE

    self:initUI()
end

function TeaHouseMemberListItem:initUI()
    if self._imgListItem then
        self._imgListItem:removeFromParent()
        self:addChild(self._imgListItem)
    end
    if self._tfMaxCost and self._textMaxCost then
        self._tfMaxCost:setFontColor(cc.c3b(255, 255, 255))
        self._tfMaxCost:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
        self._tfMaxCost:registerScriptEditBoxHandler(function(eventName)
            if eventName == "began" then
                self._textMaxCost:setVisible(false)
            elseif eventName == "changed" then
                self._textMaxCost:setString(self._tfMaxCost:getText())
                self._textMaxCost:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                TeaHouse.UITool.adaptTextToWidth(self._textMaxCost, KW_MAX_TEXT_WIDTH, KW_MAX_TEXT_FONT_SIZE, KW_MIN_TEXT_FONT_SIZE)
            elseif eventName == "ended" or eventName == "return" then
                self._textMaxCost:setVisible(true)
                local teahouseData = TeaHouse.manager.teahouseData
                if teahouseData:isAgentPlayerPayType() then
                    local costString = self._tfMaxCost:getText()
                    costString = string.format("%.2f", tonumber(costString))
                    self._tfMaxCost:setText(costString)
                    self._textMaxCost:setString(costString)
                    self._textMaxCost:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                    TeaHouse.UITool.adaptTextToWidth(self._textMaxCost, KW_MAX_TEXT_WIDTH, KW_MAX_TEXT_FONT_SIZE, KW_MIN_TEXT_FONT_SIZE)
                end
            end
        end)
    end
    if self._btnModify then
        self._btnModify:setSwallowTouches(false)
    end
end

function TeaHouseMemberListItem:getSize()
    if self._imgListItem ~= nil then
        return self._imgListItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseMemberListItem:updateInfo(info)
    self._info = info
    if self._panelHead then
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
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, info.url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    local teahouseData = TeaHouse.manager.teahouseData
    if self._imgAdminTag and not TeaHouse.manager.configManager.SetupConfig.IsCloseAdminIcon  then
        self._imgAdminTag:setVisible(teahouseData:isPlayerAdmin(info))
    end
    if self._imgBlackTag then
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig and SwitchConfig.hasBlack == 0 then
            self._imgBlackTag:setVisible(false)
        else
            self._imgBlackTag:setVisible(teahouseData:isPlayerBlack(info))
        end
    end
    if self._textName then
        self._textName:setString(TeaHouse.StringTool.getTrimName(info.nickName, 12))
    end
    if self._textIndex then
        self._textIndex:setString("序号:" .. info.numid)
    end
    if self._textJoinTime then
        self._textJoinTime:setString("加入时间：" .. os.date("%Y-%m-%d %H:%M", info.nJoinTime))
    end
    if self._textOnlineTime then
        if info.bOffLine then
            local lastTime = info.nLastLeaveTime
            if lastTime < info.nJoinTime then
                lastTime = info.nJoinTime
            end
            local time = os.time() - lastTime
            if time > 0 then
                self._textOnlineTime:setString("离开时间：" .. TeaHouse.StringTool.getTimeDesc(time))
            else
                self._textOnlineTime:setString("离开")
            end
        else
            self._textOnlineTime:setString("在线")
        end
    end
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()
    if self._textNewCost then
        if isAgentPlayer then
            self._textNewCost:setString(string.format("今日消耗:%.2f", info.nDailyCost / 100))
        else
            self._textNewCost:setString("今日消耗:" .. info.nDailyCost / teahouseData:getCardExchangeRate())
        end
    end
    if self._textOldCost then
        if isAgentPlayer then
            self._textOldCost:setString(string.format("历史消耗:%.2f", info.nHistoryCost / 100))
        else
            self._textOldCost:setString("历史消耗:" .. info.nHistoryCost / teahouseData:getCardExchangeRate())
        end
    end
    
    self:updateState()

    if self._btnManage then
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
        if isModifyRemark or isModifyAdmin or isModifyBlack or isKickMember then
            self._btnManage:setVisible(true)
        else
            self._btnManage:setVisible(false)
            TeaHouse.manager.viewManager:closeView("TeaHouseMemberItem.TeaHouseMemberPopMenu")
        end
        if self._info.numid == TeaHouse.BridgeData.getNumberID() and TeaHouse.BridgeData.isRemodelArea() then
            self._btnManage:setVisible(false) -- 不对自己进行权限操作
        end
    end
end

function TeaHouseMemberListItem:updateState()
    local teahouseData = TeaHouse.manager.teahouseData
    local isPlayerOwner = teahouseData:isPlayerOwnerPayType()
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()
    local isLobbyPlayer = teahouseData:isLobbyPlayerPayType()
    if isLobbyPlayer then
        if self._imgMaxCostBg then self._imgMaxCostBg:setVisible(false) end
        return
    elseif not isPlayerOwner then
        local payMode = teahouseData:getTeaHousePayMode()
        if isAgentPlayer or payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
            self._propType = TeaHouseMemberListItem.PROP_TYPE.PLAYER
            if self._imgMaxCostBg then
                self._imgMaxCostBg:setVisible(true)
            end
            if self._textMaxCostTip then
                self._textMaxCostTip:setVisible(true)
                if isAgentPlayer then
                    self._textMaxCostTip:setString("可用比赛场卡")
                else
                    self._textMaxCostTip:setString("可用房卡")
                end
            end
            if self._tfMaxCost and self._textMaxCost then
                self._textMaxCost:setVisible(true)
                self._tfMaxCost:setTouchEnabled(false)
                if isAgentPlayer then
                    self._tfMaxCost:setText(string.format("%.2f", self._info.nAgentShowProps / 100))
                    self._textMaxCost:setString(string.format("%.2f", self._info.nAgentShowProps / 100))
                else
                    local nAgentShowProps = self._info.nAgentShowProps / teahouseData:getPlayerCardExchangeRate(self._info)
                    self._tfMaxCost:setText(tostring(nAgentShowProps))
                    self._textMaxCost:setString(tostring(nAgentShowProps))
                end
                self._textMaxCost:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                TeaHouse.UITool.adaptTextToWidth(self._textMaxCost, KW_MAX_TEXT_WIDTH, KW_MAX_TEXT_FONT_SIZE, KW_MIN_TEXT_FONT_SIZE)
            end
            if teahouseData:checkSelfPower("AddCardTeaHouse") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.CARD) then
                if self._tfMaxCost then
                    self._tfMaxCost:setVisible(true)
                end
                if self._btnModify then
                    self._btnModify:setVisible(true)
                end
            else
                if self._tfMaxCost then
                    self._tfMaxCost:setVisible(false)
                end
                if self._btnModify then
                    self._btnModify:setVisible(false)
                end
            end
            return
        else
            local payTypes = teahouseData:getPayTypeByID()
            for _, payType in pairs(payTypes) do
                if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA  then
                    self._propType = TeaHouseMemberListItem.PROP_TYPE.DAILY
                    if self._imgMaxCostBg then
                        self._imgMaxCostBg:setVisible(true)
                    end
                    if self._textMaxCostTip then
                        self._textMaxCostTip:setVisible(true)
                        self._textMaxCostTip:setString("当日最大消耗")
                    end
                    if self._tfMaxCost and self._textMaxCost then
                        self._textMaxCost:setVisible(true)
                        self._tfMaxCost:setText(tostring(self._info.nPropCnt))
                        self._textMaxCost:setString(tostring(self._info.nPropCnt))
                        self._textMaxCost:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                        TeaHouse.UITool.adaptTextToWidth(self._textMaxCost, KW_MAX_TEXT_WIDTH, KW_MAX_TEXT_FONT_SIZE, KW_MIN_TEXT_FONT_SIZE)
                    end
                    if teahouseData:checkSelfPower("ModifyMemberCost") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.CARD) then
                        if self._tfMaxCost then
                            self._tfMaxCost:setVisible(true)
                        end
                        if self._btnModify then
                            self._btnModify:setVisible(true)
                        end
                    else
                        if self._tfMaxCost then
                            self._tfMaxCost:setVisible(false)
                        end
                        if self._btnModify then
                            self._btnModify:setVisible(false)
                        end
                    end
                    -- -- 暂时加上特判，相同模式下隐藏不必要的界面
                    -- if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
                    --     if self._imgMaxCostBg then
                    --         self._imgMaxCostBg:setVisible(false)
                    --     end
                    -- end
                    return
                end
            end
        end
    end
    self._propType = TeaHouseMemberListItem.PROP_TYPE.NONE
    if self._imgMaxCostBg then
        self._imgMaxCostBg:setVisible(false)
        if self._textMaxCostTip then
            self._textMaxCostTip:setVisible(false)
        end
        if self._tfMaxCost and self._textMaxCost then
            self._tfMaxCost:setVisible(false)
            self._textMaxCost:setVisible(false)
        end
        local payTypes = teahouseData:getPayTypeByID()
        for _, payType in pairs(payTypes) do--已转人人且有领队流通模式的区 显示给玩家划卡界面
            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA and TeaHouse.BridgeData.isRemodelArea() then
                self._propType = TeaHouseMemberListItem.PROP_TYPE.PLAYER
                if self._imgMaxCostBg then
                    self._imgMaxCostBg:setVisible(true)
                end
                if self._textMaxCostTip then
                    self._textMaxCostTip:setVisible(true)
                    self._textMaxCostTip:setString("可用房卡")
                end
                if self._tfMaxCost and self._textMaxCost then
                    self._textMaxCost:setVisible(true)
                    self._tfMaxCost:setTouchEnabled(false)
                    if isAgentPlayer then
                        self._tfMaxCost:setText(string.format("%.2f", self._info.nPlayerOwnerCards / 100))
                        self._textMaxCost:setString(string.format("%.2f", self._info.nPlayerOwnerCards / 100))
                    else
                        local nPlayerOwnerCards = self._info.nPlayerOwnerCards / teahouseData:getPlayerCardExchangeRate(self._info)
                        self._tfMaxCost:setText(tostring(nPlayerOwnerCards))
                        self._textMaxCost:setString(tostring(nPlayerOwnerCards))
                    end
                    self._textMaxCost:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                    TeaHouse.UITool.adaptTextToWidth(self._textMaxCost, KW_MAX_TEXT_WIDTH, KW_MAX_TEXT_FONT_SIZE, KW_MIN_TEXT_FONT_SIZE)
                end
                if teahouseData:checkSelfPower("AddCardTeaHouse") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.CARD) then
                    if self._tfMaxCost then
                        self._tfMaxCost:setVisible(true)
                    end
                    if self._btnModify then
                        self._btnModify:setVisible(true)
                    end
                else
                    if self._tfMaxCost then
                        self._tfMaxCost:setVisible(false)
                    end
                    if self._btnModify then
                        self._btnModify:setVisible(false)
                    end
                end
                return
            end
        end
    end
end

function TeaHouseMemberListItem:onModifyClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not self._textMaxCost then
        return
    end
    if self._propType == TeaHouseMemberListItem.PROP_TYPE.NONE then
        return
    end
    if self._propType == TeaHouseMemberListItem.PROP_TYPE.PLAYER then
        TeaHouse.manager.viewManager:openView("TeaHouseCardEditView", 0, self._info)
        local playerCard = self:getPlayerCard()
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = playerCard})
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local inputString = self._textMaxCost:getString()
    self:updateState()
    if self._propType == TeaHouseMemberListItem.PROP_TYPE.DAILY then
        local propCount = TeaHouse.StringTool.toPositiveIntNumber(inputString)
        if propCount == self._info.nPropCnt then
            TeaHouse.TipTool.showToast("请输入你要修改的数量")
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = propCount})
            return
        end
        if propCount == nil then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您输入的数量不正确")
        else
            if propCount > teahouseData:getMaxDailyPropCount() then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "玩家每日消耗数不能超过每日最大消耗")
                return
            end
            TeaHouse.manager.teahouseMember:setPlayerDailyProp(self._info.areaid, self._info.numid, propCount)
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = propCount})
        end
        return
    end
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()
    if isAgentPlayer then
        local propCount = tonumber(string.format("%.2f", tonumber(inputString)))
        local nAgentShowProps = self._info.nAgentShowProps / 100
        if propCount == nAgentShowProps then
            TeaHouse.TipTool.showToast("请输入你要修改的数量")
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = propCount})
            return
        end
        TeaHouse.manager.teahouseMember:setPlayerProp(self._info.areaid, self._info.numid, (propCount - nAgentShowProps) * 100)
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = (propCount - nAgentShowProps) * 100})
    else
        local propCount = tonumber(inputString)
        local nAgentShowProps = self._info.nAgentShowProps / teahouseData:getPlayerCardExchangeRate(self._info)
        if propCount == nAgentShowProps then
            TeaHouse.TipTool.showToast("请输入你要修改的数量")
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = propCount})
            return
        end
        propCount = TeaHouse.StringTool.toPositiveIntNumber(inputString)
        if propCount == nil then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您输入的数量不正确")
        end
        nAgentShowProps = math.floor(nAgentShowProps)
        if propCount == nAgentShowProps then
            TeaHouse.TipTool.showToast("请输入你要修改的数量")
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = propCount})
            return
        end
        TeaHouse.manager.teahouseMember:setPlayerProp(self._info.areaid, self._info.numid, propCount - nAgentShowProps)
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_13,{PlayerCard = propCount - nAgentShowProps})
    end
    
end

--得到当前玩家可用房卡
function TeaHouseMemberListItem:getPlayerCard()
    if self._info and self._info.nAgentShowProps then
        local Playercard 
        local teahouseData = TeaHouse.manager.teahouseData
        local isAgentPlayer = teahouseData:isAgentPlayerPayType()
        if isAgentPlayer then
            Playercard = string.format("%.2f", self._info.nAgentShowProps / 100)
        else
            local nAgentShowProps = self._info.nAgentShowProps / teahouseData:getPlayerCardExchangeRate(self._info)
            Playercard = tostring(nAgentShowProps)
        end
        return Playercard
    else
        return 0
    end
end

function TeaHouseMemberListItem:onManageClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    if self._imgListItem and self._nodePopPosition then
        local position = cc.p(self._nodePopPosition:getPosition())
        position = self._imgListItem:convertToWorldSpace(position)
        TeaHouse.manager.viewManager:openView("TeaHouseMemberItem.TeaHouseMemberPopMenu", 0, self._info, position)
    end

    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_16)
end

function TeaHouseMemberListItem:getGuideTipNode()
    return {self._imgMaxCostBg,self._btnManage,}
end

function TeaHouseMemberListItem:getGuideTipItemNode()
    return self._imgListItem
end

return TeaHouseMemberListItem�V  