local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._isHaveMDDi = false
end

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)

    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTaiName), msgClass = CF.GameProtocol.msgTaiName}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgResult}
    return subXYDealList
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
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
    self:getWinLostData():setDelayTime(1)
    self:getWinLostData():onMsgResult(msgData)
    self:getWinLostData():setIsShowFan(false)
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
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgTaiName(msgData)
    self:getWinLostData():onMsgTaiName(msgData)
end

return WinLostModule