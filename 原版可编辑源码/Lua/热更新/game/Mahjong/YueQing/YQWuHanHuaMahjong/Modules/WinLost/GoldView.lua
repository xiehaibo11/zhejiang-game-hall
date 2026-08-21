local WinLostGoldView = CF.gameClass("GoldView", "game.Mahjong.BasicMahjong.Modules.WinLost.GoldView")

function WinLostGoldView:updateResultInfoUI()
    WinLostGoldView.super.updateResultInfoUI(self)
    local showSeat = self:getResutInfoSeat()
    local strFanName = self:getWinLostData():getFanNameBySeat(showSeat)
    local strOtherInfo = ""
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData:isHuSeat(showSeat) then
        strOtherInfo = strOtherInfo .. "台:" .. self:getWinLostData():getTaiCount() .. " "
    else
        strOtherInfo = strOtherInfo .. "台:--" .. " "
    end
    strOtherInfo = strOtherInfo .. "花:" .. self:getWinLostData():getFlowerCount(showSeat) .. " "
    strOtherInfo = strOtherInfo .. "条:" .. self:getWinLostData():getTiaoCount(showSeat) .. " "
    self._txtFanDetail:setString(strFanName .. strOtherInfo)
end

return WinLostGoldView