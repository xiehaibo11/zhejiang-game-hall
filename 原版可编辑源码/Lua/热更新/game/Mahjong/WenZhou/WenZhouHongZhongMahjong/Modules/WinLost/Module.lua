local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    --self._isHaveMDDi = false
end

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgResult}
    
    return subXYDealList
end

--小结束
function WinLostModule:onMsgResult(msgData)
    self:getWinLostData():setIsShowFan(false)
    CF.roomData:setIsHaveResult(true)
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


return WinLostModule