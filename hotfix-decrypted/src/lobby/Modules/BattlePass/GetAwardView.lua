local BattlePassGetAwardView = class("BattlePassGetAwardView", XH.ViewBase)

function BattlePassGetAwardView:getCSBPath()
    return "hall/CSB/BattlePass/GetAward.csb"
end

function BattlePassGetAwardView:getBindingInfo()
    return {
        ["_KW_LISTVIEW_AWARD"] = {varName = "_awardListView"},
        ["_KW_BTN_CLOSE"] = {varName = "KW_BTN_CLOSE", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BG"] = {varName = "KW_BG", onTouchEnded = "onTouchEventClose"},
        ["_KW_BGANI_NODE"] = {varName = "_aniNode"},
        ["_KW_TOPANI_NODE"] = {varName = "_aniTopNode"},
        ["_KW_TITLEANI_NODE"] = {varName = "_aniTitleNode"},
        ["_KW_TEXT_TIPS"] = {varName = "_textTip"},
        ["_KW_STEN"] = {varName = "_spSten"},
        ["_KW_BATTLEPASS_LISTVIEW"] = {varName = "_battlePassAwardList"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
        ["_KW_TEXT_CHARGE"] = {varName = "_textCharge"},
        ["_KW_BTN_CHARGE"] = {varName = "_btnCharge", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventCharge"},
        ["_KW_BTN_PROMOTE_DOUBLE"] = {varName = "_promoteDoubleBtn", onTouchEnded = "onTouchEventPromoteDouble"}
    }
end

function BattlePassGetAwardView:ctor(param, data)
    self._data = data
    param = param or {}
    BattlePassGetAwardView.super.ctor(self, param)
    self._closeFunc = param.closeFunc

    
    XH.playerData:flushGoldCoin()
    XH.playerData:flushPlayerDrop()

    self:init(data)
    XH.audioManager:play("ACT_GET_AWARD")
end

function BattlePassGetAwardView:getProxyEvents()
    return {
        {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyProp"}
    }
end

function BattlePassGetAwardView:initAni()
    XH.SpineManager:playAniWithComplete(self._aniNode, "animation/Lobby/Base/zzb_jbdt_gxhd/", "zzb_jbdt_gxhd", "gx_cx", false, "gx_loop", true)
    XH.SpineManager:playAni(self._aniTopNode, "animation/Lobby/Base/zzb_jbdt_gxhd/", "zzb_ty_jbdl", "animation", false)
    XH.SpineManager:playAniWithComplete(self._aniTitleNode, "animation/Lobby/Base/zzb_jbdt_gxhd/", "zzb_ty_btgx", "cx", false, "loop", true)

    self._imgTitle:setPositionX(250)
    self._imgTitle:setVisible(false)
    self._imgTitle:runAction(cc.Sequence:create(cc.DelayTime:create(0.2), cc.Show:create(), cc.EaseBackOut:create(cc.MoveBy:create(0.5, cc.p(-250, 0)))))
end

function BattlePassGetAwardView:delayShow(node, delay)
    node:setScale(0)
    node:setOpacity(0)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay), cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(0.2, 1)), cc.FadeIn:create(0.2))))
end

function BattlePassGetAwardView:init(data)
    if not data then
        return
    end
    self:initAni()

    self._awardListView:removeAllChildren()
    for i = 1, #data.awardList do
        local extInfo = {scale = 1.4}
        local item = require("lobby.Modules.BattlePass.AwardItemView").new()
        item:init({image = data.awardList[i].img, propValue = data.awardList[i].propNum, propId = data.awardList[i].propId}, extInfo)
        self._awardListView:pushBackCustomItem(item)
        item:setOpacity(0)

        item:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(0.01),
                cc.CallFunc:create(
                    function()
                        self:delayShow(item, 0.1 * i)
                    end
                )
            )
        )
    end
    local items = self._awardListView:getItems()
    if items and #items > 0 then
        local ItemSize = math.min(items[1]:getContentSize().width * #items + 20 * (#items - 1), display.width - 50)
        self._awardListView:setContentSize(ItemSize, items[1]:getContentSize().height)
    end

    self._textTip:setString("")
    self._battlePassAwardList:removeAllChildren()
    if data.battlePassAward and next(data.battlePassAward) then
        self._awardListView:setPositionY(119)
        if data.propInfo then
            self._btnCharge:setVisible(true)
            self._textCharge:setString(string.format("%d元", data.propInfo.price))
        else
            self._btnCharge:setVisible(false)
        end

        if data.text and data.text ~= "" then
            self._textTip:setString(data.text)
        end
        self:delayShow(self._textTip, 0.2)

        for i = 1, #data.battlePassAward do
            local item = require("lobby.Modules.BattlePass.AwardItemView").new()
            item:init(data.battlePassAward[i], {})
            self._battlePassAwardList:pushBackCustomItem(item)
            item:setOpacity(0)

            item:runAction(
                cc.Sequence:create(
                    cc.DelayTime:create(0.01),
                    cc.CallFunc:create(
                        function()
                            self:delayShow(item, 0.2 + 0.1 * i)
                        end
                    )
                )
            )
        end

        local items2 = self._battlePassAwardList:getItems()
        if items2 and #items2 > 0 then
            local ItemSize = math.min(items2[1]:getContentSize().width * #items2 + 20 * (#items2 - 1), display.width - 50)
            self._battlePassAwardList:setContentSize(ItemSize, items2[1]:getContentSize().height)
        end
    elseif data.willAwardList and next(data.willAwardList) then
        self._awardListView:setPositionY(119)
        self._btnCharge:setVisible(true)
        self._isLobby = true
        self._textCharge:setString(string.format("解锁雀神令"))
        if data.text and data.text ~= "" then
            self._textTip:setString(data.text)
        end
        self:delayShow(self._textTip, 0.2)
        for i = 1, #data.willAwardList do
            local item = require("lobby.Modules.BattlePass.AwardItemView").new()
            item:init(data.willAwardList[i], {})
            self._battlePassAwardList:pushBackCustomItem(item)
            item:setOpacity(0)
            item:runAction(
                cc.Sequence:create(
                    cc.DelayTime:create(0.01),
                    cc.CallFunc:create(
                        function()
                            self:delayShow(item, 0.2 + 0.1 * i)
                        end
                    )
                )
            )
            local items2 = self._battlePassAwardList:getItems()
            if items2 and #items2 > 0 then
                local ItemSize = math.min(items2[1]:getContentSize().width * #items2 + 20 * (#items2 - 1), display.width - 50)
                self._battlePassAwardList:setContentSize(ItemSize, items2[1]:getContentSize().height)
            end
        end
    else
        self._awardListView:setPositionY(69)
        self._btnCharge:setVisible(false)
    end
end

function BattlePassGetAwardView:onTouchEventClose(send, eventType)
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self:close()
end

function BattlePassGetAwardView:close()
    if self._closeFunc then
        self._closeFunc()
    end
    BattlePassGetAwardView.super.close(self)
end

function BattlePassGetAwardView:setText(node, name, text)
    local childNode = ccui.Helper:seekWidgetByName(node, name)
    if childNode then
        childNode:setString(text)
    end
end

function BattlePassGetAwardView:loadTexture(node, name, image, Ttype)
    local childNode = ccui.Helper:seekWidgetByName(node, name)
    if childNode then
        childNode:loadTexture(image, Ttype)
    end
end

function BattlePassGetAwardView:onTouchEventCharge()
    if self._isLobby then
        local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
        local page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042708, {page = page})
    end
    if self._data.callback then
        self._data.callback()
    else
        self:close()
    end
end

function BattlePassGetAwardView:respBuyProp(event)
    local code = event.data.code
    XH.TipTool.hideLoading()
    if code == 200 then
        self:close()
    end
end

return BattlePassGetAwardView
   �   