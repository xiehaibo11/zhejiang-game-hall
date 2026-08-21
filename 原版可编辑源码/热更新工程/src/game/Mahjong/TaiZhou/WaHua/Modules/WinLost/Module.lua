local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

WinLostModule.EVENT_WINLOST_RESULT = "EVENT_WINLOST_RESULT"
-- 小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huMahID = msgData.nDanFang or 0
    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        local huDanFang = gameData:getHuDanFang(i)
        if mahIDs and huDanFang then
            gameData:setHuMahsData(i, mahIDs, huDanFang)
        end
        if msgData.nPlayerState[i] ~= CF.GameDefine.endPlayerState.EPS_NULL then
            self:getWinLostData():setLostEndType(i, msgData.nPlayerState[i])
        end
        if msgData.nPlayerState[i] == CF.GameDefine.endPlayerState.EPS_HU or msgData.nPlayerState[i] == CF.GameDefine.endPlayerState.EPS_GANGSHANGKAIHUA then
            gameData:setHuDanFang(i, huMahID)
        end
    end
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():setDelayTime(1)
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():onMsgResult(msgData)
        end, time)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:showSettleWindow(isCenter)
    WinLostModule.super.showSettleWindow(self,isCenter)
    self:dispatchEvent({name = self.EVENT_WINLOST_RESULT})
end

return WinLostModule