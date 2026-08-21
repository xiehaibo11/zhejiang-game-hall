local VipTipNode = class("VipTipNode", CF.ViewBase)

function VipTipNode:ctor(param)
    self._seatId = param.seatId or 0
    VipTipNode.super.ctor(self)

    local aniPath = "animation/Lobby/Base/shoudianji/"
    local params = {path = aniPath, tex = "ShouDianJi.json", ske = "ShouDianJi.atlas", armatureName = "ShouDianJi", scale = 1}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        spineNode:setPosition(0, 0)
        self._ani:addChild(spineNode)
    end
end

function VipTipNode:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PlayerHeadVipTip.csb"
end

function VipTipNode:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName = "_bg", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClick"},
        ["_KW_ANI"] = {varName = "_ani"}
    }
end

function VipTipNode:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onMsgGameStart"},
        {module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged"},
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REMAINDER", callBack = "onRemainder"}
    }
end

function VipTipNode:onEnter()
    self:updateLayoutPosition()
end
function VipTipNode:onRemainder()
    if not CF.getLobbyModule("Sxvip"):isExpire() then
        self:removeFromParent()
    end
end

function VipTipNode:onBtnClick(send, eventType)
    CF.gameRequire("Modules.PlayerInfo.View").new({seatId = self._seatId}):showSelf()
    CF.game:getModule("SxVipGuide"):clicked()
    self:removeFromParent()
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090617)
end

function VipTipNode:onMsgGameStart()
    self:removeFromParent()
end
function VipTipNode:onPlayCountChanged()
    if CF.roomData:getPlayCount() > 0 then
        self:removeFromParent()
    end
end

function VipTipNode:updateLayoutPosition()
    local screenSize = cc.Director:getInstance():getWinSize()
    local pos = self:getParent():convertToWorldSpace(cc.p(0, 0))
    if pos.x > screenSize.width / 2 then
        self:setPositionX(-250)
    else
        self:setPositionX(250)
    end
end

return VipTipNode
