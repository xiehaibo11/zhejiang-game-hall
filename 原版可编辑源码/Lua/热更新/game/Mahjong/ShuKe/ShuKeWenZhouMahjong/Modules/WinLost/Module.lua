local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._isHaveMDDi = false
end

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)

    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgThreeBack), msgClass = CF.GameProtocol.msgThreeBack}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.msgFollowMahScore), msgClass = CF.GameProtocol.msgFollowMahScore}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTuiGang), msgClass = CF.GameProtocol.msgTuiGang}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgResult}
    return subXYDealList
end

-- 是否三背座位
function WinLostModule:onMsgThreeBack(msgData)
    if msgData.bThreeBack then
        self:getWinLostData():setLostEndType(msgData.seat, CF.GameDefine.LOST_END_TYPE.THREEBACK)
    end
end

-- 跟风的分数
function WinLostModule:msgFollowMahScore(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        self:getWinLostData():setFollowMahData(seat, msgData.nScore[seat])
    end
end

-- 退杠信息
function WinLostModule:onMsgTuiGang(msgData)
    local KungType = {
        [0] = "明杠",
        [1] = "暗杠",
        [2] = "补杠",
    }
    for seat = 0, CF.roomData:getChairs() - 1 do
        local kungNames = ""
        for j = 0 , 2 do
            local nKungNum = msgData.nKongType[seat][j]
            if nKungNum > 0  then
                kungNames = kungNames .. nKungNum .. KungType[j] .. " "
            end
        end
        self:getWinLostData():setKungInfoData(seat, kungNames)
    end
end

function WinLostModule:setHaveDingDi(bHave)
    self._isHaveMDDi = bHave
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    msgData.bankerSeat = gameData:getBankerSeat()
    msgData.haveMDD = self._isHaveMDDi

    CF.game:getModule("WinLost"):getWinLostData():setFengDingFlag(msgData.bFengDing)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()

    local endType = self:getWinLostData():getEndType()

    if endType ~= CF.GameDefine.HU_TYPE.ET_NONE then
        for i = 0 , CF.roomData:getChairs() - 1 do
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            local huMahID = gameData:getHuDanFang(i)
            gameData:setHuMahsData(i, mahIDs, huMahID)
        end
    end
    self:getWinLostData():onMsgResult(msgData)
    local selfWinLost = msgData.nWinLost[CF.roomData:getSelfSeat()]
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
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
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end


return WinLostModule