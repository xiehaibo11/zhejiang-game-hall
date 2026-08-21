local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:onTouchEventActionButton(send,eventType)
    UIMahLayer.super.onTouchEventActionButton(self,send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end
    
    if send == self._actionButton7 then
        self:showAction({CF.GameDefine.ACTION.PASS}, true)
    end
end

return UIMahLayer