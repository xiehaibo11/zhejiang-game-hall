local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._isHaveMDDi = false
end

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgResult}
    return subXYDealList
end

--小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    self:getWinLostData():setDelayTime(1)
    local gameData = CF.game:getModule("GameLayer"):getGameData()

    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        local huMahID = msgData.df[i] or 0
        for j = 1, #mahIDs do
            if mahIDs[j] == huMahID then
                table.remove(mahIDs, j)
                break
            end
        end
        gameData:setHuMahsData(i, mahIDs, huMahID)
    end
    local time = self:getWinLostData():getDelayTime()
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            self:getWinLostData():onMsgResultExtInfo(msgData)
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                self:getWinLostData():setHuMahData(i, msgData.df[i] or 0)
            end
        end,time)
    end
    self:doAfterMsgResult()
end

function WinLostModule:onMsgEndType(msgData)
    WinLostModule.super.onMsgEndType(self, msgData)
    self:getWinLostData():setLostEndType(msgData.sSeat,msgData.sEndType)
end

return WinLostModule"