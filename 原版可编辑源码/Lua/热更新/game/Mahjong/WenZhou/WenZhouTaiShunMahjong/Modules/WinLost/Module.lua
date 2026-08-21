local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgGangNums), msgClass = CF.GameProtocol.msgGangNums }
    return subXYDealList
end

--小结束
function WinLostModule:onMsgResult(msgData)
    self:getWinLostData():setIsShowFan(false)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    self:getWinLostData():setDelayTime(1)
    local gameData = CF.game:getModule("GameLayer"):getGameData()

    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        local huMahID = gameData:getHuDanFang(i)
        gameData:setHuMahsData(i, mahIDs, huMahID)
    end
    
    self:getWinLostData():dealFanInfo(msgData)
    self:getWinLostData():onMsgResult(msgData)
    
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            CF.game:getModule("GameLayer"):hideZhaMah()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
    
    self:doAfterMsgResult()
end

function WinLostModule:onMsgGangNums(msgData)
    self:getWinLostData():onMsgGangNums(msgData)
end

function WinLostModule:onMsgEndType(msgData)
    WinLostModule.super.onMsgEndType(self, msgData)
    self:getWinLostData():setLostEndType(msgData.sSeat,msgData.sEndType)
end

return WinLostModule