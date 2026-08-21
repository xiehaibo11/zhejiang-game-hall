local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")
--小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()

    local gameData = CF.game:getModule("GameLayer"):getGameData()

    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        local huMahID = msgData.df[i]
        for j = 1, #mahIDs do
            if mahIDs[j] == huMahID then
                table.remove(mahIDs, j)
                break
            end
        end
        gameData:setHuMahsData(i, mahIDs, huMahID)
    end

    self:getWinLostData():onMsgResultExtInfo(msgData)
    
    local time = 0
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = msgData.df[i]
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

return WinLostModule�