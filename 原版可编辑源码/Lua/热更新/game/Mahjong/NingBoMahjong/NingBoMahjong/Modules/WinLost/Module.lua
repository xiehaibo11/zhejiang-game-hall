local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local xyTable = WinLostModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = { callback = handler(self, self.onMsgFanCntNew), msgClass = CF.GameProtocol.msgFanCntNew }
    return xyTable
end

function WinLostModule:onMsgFanCntNew(msgData)
    -- 番数
    self:onMsgFanCnt(msgData)
end

return WinLostModule