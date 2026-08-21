local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.WinLost.Module")

function WinLostModule:ctor()
    WinLostModule.super.ctor(self)
    self._isHaveMDDi = false
end

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)

    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgEndResult), msgClass = CF.GameProtocol.msgEndResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTuiGang), msgClass = CF.GameProtocol.msgTuiGang}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFollowMahScore), msgClass = CF.GameProtocol.msgFollowMahScore}
    return subXYDealList
end

function WinLostModule:getProxyEvents()
    local proxyEvents = WinLostModule.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAVE_DINGDI", callBack = "onMsgHaveDingDi" }
    return proxyEvents
end

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
    local time = self:getWinLostData():getDelayTime()
    local endType = self:getWinLostData()._sEndType
    local huMahID = msgData.df or 0
    if endType ~= CF.GameDefine.HU_TYPE.ET_NONE then
        for i = 0 , CF.roomData:getChairs() - 1 do
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            if gameData:isHuSeat(i) then
                for k = #mahIDs, 1, -1 do
                    if mahIDs[k] == huMahID then
                        table.remove(mahIDs, k)
                        break
                    end
                end
                gameData:setHuMahsData(i, mahIDs, huMahID)
            else
                gameData:setHuMahsData(i, mahIDs, 0)
            end
        end
    end
    self:getWinLostData():onMsgResult(msgData)
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                self:getWinLostData():setHuMahData(i, gameData:isHuSeat(i) and huMahID or 0)
            end
        end,time)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgHaveDingDi(event)
    self._isHaveMDDi = true
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

-- 跟风的分数
function WinLostModule:onMsgFollowMahScore(msgData)
    for seat = 0, CF.roomData:getChairs() - 1 do
        self:getWinLostData():setFollowMahData(seat, msgData.nScore[seat])
    end
end

return WinLostModule