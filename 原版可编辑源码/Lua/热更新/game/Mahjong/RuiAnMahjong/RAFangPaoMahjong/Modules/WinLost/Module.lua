local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.WinLost.Module")

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i) or {}
        local huMahID = msgData.df[i] or 0
        for k = #mahIDs, 1, -1 do
            if mahIDs[k] == huMahID then
                table.remove(mahIDs, k)
                break
            end
        end
    end
    local time = 0
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            self:getWinLostData():onMsgResultExtInfo(msgData)
            for i = 0 , CF.roomData:getChairs() - 1 do
                self:getWinLostData():setHuMahData(i, msgData.df[i] or 0)
            end
        end,time)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgFanCnt(msgData)
end

return WinLostModule