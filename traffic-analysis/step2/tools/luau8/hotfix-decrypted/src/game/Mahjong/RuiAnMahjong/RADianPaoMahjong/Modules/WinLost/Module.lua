local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgSurplusMah),msgClass = CF.GameProtocol.msgSurplusMah}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGangNums),msgClass = CF.GameProtocol.msgGangNums}
    return subXYDealList
end

-- 剩余牌
function WinLostModule:onMsgSurplusMah(msgData)
    self:getWinLostData():setSurplusMahs(msgData.nMah)
end

-- 补牌
function WinLostModule:onMsgGangNums(msgData)
    self:getWinLostData():onMsgGangNames(msgData)
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    self:getWinLostData():setIsShowFan(false)
    WinLostModule.super.onMsgResult(self, msgData)
end

return WinLostModule�