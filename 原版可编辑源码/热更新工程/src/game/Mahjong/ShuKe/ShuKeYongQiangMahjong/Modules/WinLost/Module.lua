local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFlowerName), msgClass = CF.GameProtocol.msgFlowerName}
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgBPFlowerName), msgClass = CF.GameProtocol.msgBPFlowerName }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgTaiName), msgClass = CF.GameProtocol.msgTaiName }
    return subXYDealList
end

--小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huMahID = msgData.danfang or 0

    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        if gameData:isHuSeat(i) then
            for j = 1, #mahIDs do
                if mahIDs[j] == huMahID then
                    table.remove(mahIDs, j)
                    break
                end
            end
            gameData:setHuMahsData(i, mahIDs, huMahID)
        else
            gameData:setHuMahsData(i, mahIDs, 0)
        end
    end
    
    self:getWinLostData():onMsgResult(msgData)
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                if gameData:isHuSeat(i) then
                    self:getWinLostData():setHuMahData(i, huMahID)
                end
            end
        end,time)
    end
    self:doAfterMsgResult()
end

function WinLostModule:onMsgTaiName(msgData)
    self:getWinLostData():onMsgTaiName(msgData)
end

function WinLostModule:onMsgFlowerName(msgData)
    self:getWinLostData():onMsgFlowerName(msgData)
end

function WinLostModule:onMsgBPFlowerName(msgData)
    self:getWinLostData():onMsgBPFlowerName(msgData)
end

-- 番数
function WinLostModule:onMsgFanCnt(msgData)
    
end

return WinLostModule