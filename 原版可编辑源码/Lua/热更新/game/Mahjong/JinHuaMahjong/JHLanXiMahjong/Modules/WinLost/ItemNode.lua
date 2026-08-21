local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)

    local strFanName = self:getWinLostData():getFanNameBySeat(self._seatId)
    local strMaiZi = self:getWinLostData():getGameMaiZiInfo(self._seatId)
    local strLaoZhuang = ""
    if isBanker then
        local laoZhuang = CF.roomData:getLaoZhuangNum()
        strLaoZhuang= " 老庄:"..laoZhuang
    end
    self._detailLabel:setString(strMaiZi .. strLaoZhuang .." ".. strFanName)
end

return WinLostItemNode