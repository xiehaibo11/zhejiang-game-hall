---@class TeaHouseTableCreateItem : View
local TeaHouseTableCreateItem = class("TeaHouseTableCreateItem", TeaHouse.View)

TeaHouseTableCreateItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseTableItem/TeaHouseTableCreateItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_BTN_CREATE"] = { tag = "_KW_BTN_CREATE", name = "_btnCreate", class = "btn", events = "onCreateClicked" },
        ["_KW_IMG_CREATE_ALLOW"] = { tag = "_KW_IMG_CREATE_ALLOW", name = "_imgCreateAllow", class = "img" },
        ["_KW_TEXT_CREATE_ALLOW"] = { tag = "_KW_TEXT_CREATE_ALLOW", name = "_textCreateAllow", class = "text" },
        ["_KW_IMG_CREATE_FORBID"] = { tag = "_KW_IMG_CREATE_FORBID", name = "_imgCreateForbid", class = "img" },
        ["_KW_TEXT_CREATE_FORBID"] = { tag = "_KW_TEXT_CREATE_FORBID", name = "_textCreateForbid", class = "text" },
    }
}

function TeaHouseTableCreateItem:ctor()
    TeaHouseTableCreateItem.super.ctor(self)

    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
    end
end

function TeaHouseTableCreateItem:getSize()
    if self._panelRoot ~= nil then
        return self._panelRoot:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseTableCreateItem:updateState()
    if self._btnCreate then
        local teahouseData = TeaHouse.manager.teahouseData
        self:setCreateState(teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES)
    end
end

function TeaHouseTableCreateItem:setCreateState(isAllow)
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:checkSelfPower("CreateTable") then
        if self._btnCreate then
            self._btnCreate:setEnabled(isAllow)
        end
        if self._imgCreateAllow then
            self._imgCreateAllow:setVisible(isAllow)
        end
        if self._textCreateAllow then
            self._textCreateAllow:setVisible(isAllow)
        end
        if self._imgCreateForbid then
            self._imgCreateForbid:setVisible(not isAllow)
        end
        if self._textCreateForbid then
            self._textCreateForbid:setVisible(not isAllow)
            if teahouseData:isAdmin() then
                self._textCreateForbid:setString("副领队不允许创建桌子")
            end
            if teahouseData:isOwner() then
                self._textCreateForbid:setString("领队不允许创建桌子")
            end
        end
    else
        if self._btnCreate then
            self._btnCreate:setEnabled(false)
        end
        if self._imgCreateAllow then
            self._imgCreateAllow:setVisible(false)
        end
        if self._textCreateAllow then
            self._textCreateAllow:setVisible(false)
        end
        if self._imgCreateForbid then
            self._imgCreateForbid:setVisible(true)
        end
        if self._textCreateForbid then
            self._textCreateForbid:setVisible(true)
            if teahouseData:isAdmin() then
                self._textCreateForbid:setString("副领队不允许创建桌子")
            end
            if teahouseData:isOwner() then
                self._textCreateForbid:setString("领队不允许创建桌子")
            end
        end
    end
end

function TeaHouseTableCreateItem:onCreateClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if TeaHouse.manager.teahouseGeneral:checkIsInGame() then
        return
    end
    if cc.UserDefault:getInstance():getBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID()) then
        TeaHouse.TipTool.showTip({
            type = TeaHouse.TipTool.TIP_TYPE.OK
        }, "您已被封禁对局，无法进入房间，如有疑问请联系客服。")
    else
        local teahouseData = TeaHouse.manager.teahouseData
        if TeaHouse.LOBBY_ID.NINGBO == TeaHouse.BridgeData.getLobbyID() or TeaHouse.LOBBY_ID.YUYAO == TeaHouse.BridgeData.getLobbyID() then
            local payTypes = teahouseData:getPayTypeByID()
            if payTypes then
                for _, payType in pairs(payTypes) do
                    if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
                        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "当前模式无法创建房间，请选择其他模式，如有疑问请联系客服")
                        return
                    end
                end
            end
        end
        TeaHouse.manager.viewManager:openView("TeaHouseCreateBoxRoomView", 0, {
            payModeType = teahouseData:getTeaHousePayMode(),
            payTypeTable = teahouseData:getPayTypeByID()
        } )
    end
    XH.throwDataManager:throwData(XH.ThrowDataDefine.TeaCreateSelected, { time1 = os.time(), userid = XH.playerData:getNumberID() })
end

return TeaHouseTableCreateItem