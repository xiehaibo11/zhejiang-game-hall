local WinLostModule = CF.gameClass("WinLostModule", CF.ModuleBase)

function WinLostModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgWinLost), msgClass = CF.GameProtocol.msgWinLost}
    }
end

function WinLostModule:onMsgWinLost(msgData)
end

return WinLostModule
6