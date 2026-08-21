local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local strFanName = self:getWinLostData():getFanNameBySeat(self._seatId)
    local strGameStateInfo = self:getWinLostData():getGameStateInfo(self._seatId)
    local score = tonumber(self:getWinLostData():getCaiShenJiangData(self._seatId))
    local strCaiShenJiang = ""
    if score and score ~= 0 then
        strCaiShenJiang = (score > 0) and ("财神分+" .. score) or ("财神分" .. score)
    end
    self._detailLabel:setString(strFanName .. strGameStateInfo .. strCaiShenJiang)

    self._fanLabel:setVisible(false)     -- 不显示番信息
end

return WinLostItemNode