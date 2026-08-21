local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._isHaveMDDi = false
end

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)

    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFanBeiResult), msgClass = CF.GameProtocol.msgFanBeiResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgThreeBack), msgClass = CF.GameProtocol.msgThreeBack}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.msgFollowMahScore), msgClass = CF.GameProtocol.msgFollowMahScore}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTuiGang), msgClass = CF.GameProtocol.msgTuiGang}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgEndResult), msgClass = CF.GameProtocol.msgEndResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult), msgClass = CF.GameProtocol.msgResult}
    return subXYDealList
end

function WinLostModule:getProxyEvents()
    local proxyEvents = WinLostModule.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAVE_DINGDI", callBack = "onMsgHaveDingDi" }
    return proxyEvents
end

function WinLostModule:onMsgFanBeiResult(msgData)
    CF.SysTool.performWithDelayGlobal(function()
        for seat = 0, CF.roomData:getChairs() - 1 do
            self:getWinLostData():setWinLost(seat, msgData.nAddFanScore[seat])
        end
    end, 0.8)
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

function WinLostModule:onMsgHaveDingDi(event)
    self._isHaveMDDi = true
end

-- 结果
function WinLostModule:onMsgEndResult(msgData)
    local result = msgData.szResult
    local strCSQ = CF.StringTool.getBackStringByFlag(result,";")
    local strCSQNum = CF.StringTool.getBackStringByFlag(strCSQ,",")
    local tableCSQ
    tableCSQ =  string.split(strCSQNum, "'")

    for seat = 0, CF.roomData:getChairs() - 1 do
        self:getWinLostData():setJokerMoneyData(seat, tableCSQ[seat+1])
    end
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    msgData.bankerSeat = gameData:getBankerSeat()
    msgData.haveMDD = self._isHaveMDDi

    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    local huMahID = msgData.df or 0
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
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            self:getWinLostData():onMsgResult(msgData)
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


return WinLostModule