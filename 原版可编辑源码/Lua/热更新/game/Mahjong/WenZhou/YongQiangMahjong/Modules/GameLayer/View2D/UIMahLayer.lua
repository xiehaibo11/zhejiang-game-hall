local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:getProxyEvents()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SI_HUA_HU", callBack = "onEventSiHuaHu"}
    return proxyEvents
end

function UIMahLayer:onEventSiHuaHu(event)
	self:showActionSiHua(true)
end

function UIMahLayer:showActionSiHua(isSiHua)
    if self._actionButton5 then
        if isSiHua then
            self._actionButton5:loadTextures("action_hua_hu.png","action_hua_hu.png","",ccui.TextureResType.plistType)
        else
            self._actionButton5:loadTextures("action_hu.png","action_hu.png","",ccui.TextureResType.plistType)
        end
    end
end

function UIMahLayer:onTouchEventActionButton(send,eventType)    
    UIMahLayer.super.onTouchEventActionButton(self,send,eventType)
    CF.SysTool.performWithDelayGlobal(function ()
        self:showActionSiHua(false)
    end,0.8)
end

return UIMahLayer