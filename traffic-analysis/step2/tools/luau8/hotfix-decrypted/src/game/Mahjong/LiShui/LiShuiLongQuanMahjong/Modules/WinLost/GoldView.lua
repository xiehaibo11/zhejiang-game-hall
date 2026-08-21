local GoldView = CF.gameClass("GoldView", "game.Mahjong.BasicMahjong.Modules.WinLost.GoldView")

function GoldView:updateResultInfoUI()
    GoldView.super.updateResultInfoUI(self)
    local showSeat = self:getResutInfoSeat()
    local strFanName = self:getWinLostData():getFanNameBySeat(showSeat)
    local strGameStateInfo = self:getWinLostData():getGameStateInfo(showSeat)
    self._txtFanDetail:setString(strFanName .. strGameStateInfo)
end

return GoldView�