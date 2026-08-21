local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)

    self._listView:removeAllChildren()
    local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
    for i = 0, CF.roomData:getChairs() - 1 do
        local item = SettleItemNode.new({seatId = i})
        self._listView:addChild(item)
    end
end

function WinLostView:onTimeClose()
    local isLastCoutn = CF.roomData:getIsGameOver()
    self._uContinueTime:setVisible(isLastCoutn)

    if isLastCoutn then
        self._curTime = 3

        self._uContinueTime:stopAllActions()
        self._uContinueTime:setString(self._curTime .. "s")

        CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
            self._curTime = self._curTime - 1
            if self._curTime >= 0 then
                self._uContinueTime:setString(self._curTime .. "s")
            else
                self._uContinueTime:stopAllActions()
                if CF.roomData:isGoldRoom() then
                    self._uContinueTime:setVisible(false)
                else
                    self:onNextGameClicked(nil, ccui.TouchEventType.ended)
                end
            end
        end)
    end
end

return WinLostView