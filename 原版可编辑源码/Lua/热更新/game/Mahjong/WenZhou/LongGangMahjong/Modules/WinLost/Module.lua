local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._isHaveMDDi = false
end

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTaiName), msgClass = CF.GameProtocol.msgTaiName}
    return subXYDealList
end

--小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    local huMahID = msgData.danfang or 0
    local gameData = CF.game:getModule("GameLayer"):getGameData()

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
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():onMsgResult(msgData)
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                if gameData:isHuSeat(i) then
                    self:getWinLostData():setHuMahData(i, huMahID)
                end
            end
        end,time)
        local selfWinLost = msgData.nWinLost[CF.roomData:getSelfSeat()]
        local winLostWithServicePay = selfWinLost 
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        if gameData.getServicePay then 
            winLostWithServicePay = winLostWithServicePay - gameData:getServicePay()
        end
        CF.SysTool.performWithDelayGlobal(function()
            if not self or not CF.roomData then
                return
            end
            CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, CF.roomData:is50())--hjq todo
        end,time + 1)
    end
    CF.msgManager:sendReqPlayerGold()
    self:doAfterMsgResult()
end

--龙港特有
function WinLostModule:onMsgTaiName(msgData)
    self:getWinLostData():onMsgTaiName(msgData)
end



return WinLostModule