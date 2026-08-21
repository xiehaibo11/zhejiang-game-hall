local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.NewHangZhouMahjong.HZLinAnMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:_getCKongShowBackIndexs(combData)
    if not combData.mahValues or #combData.mahValues > 4 then
        return {}
    end
    return {4}
end

function UIMahLayer:onTouchEventActionButton(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end

    if send == self._actionButton1 then
        self._actionButton1:setEnabled(false)
        if self:getGameData():getPlayPower() 
            and self._actionButton5 and self._actionButton5:isVisible()
            and self._actionRegret then
                self._actionRegret:setVisible(true)
                self._actionRegret:setEnabled(true)
                self._actionButton1:setVisible(false)
                self._actionButton5:setEnabled(false)
                local x = self._actionButton5:getPositionX() + 120
                local y = self._actionButton5:getPositionY() + 160
                self._actionRegret:setPosition(x, y)
                return
        else
            CF.SysTool.performWithDelayGlobal(function()
                self._actionButton1:setEnabled(true)
            end,1)
            CF.game:getModule("GameLayer"):doActionCancel()
        end
    elseif send == self._actionRegret then
        self._actionRegret:setVisible(false)
        self._actionRegret:setEnabled(false)
        self._actionButton1:setVisible(true)
        self._actionButton1:setEnabled(true)
        self._actionButton5:setEnabled(true)
        return
    elseif send == self._actionButton2 then
        CF.game:getModule("GameLayer"):doActionChow()
    elseif send == self._actionButton3 then
        CF.game:getModule("GameLayer"):doActionPong()
    elseif send == self._actionButton4 then
        CF.game:getModule("GameLayer"):doActionKong()
    elseif send == self._actionButton5 then
        CF.game:getModule("GameLayer"):doActionHu()
    end
    self:showAction({}, false)
end

return UIMahLayer2