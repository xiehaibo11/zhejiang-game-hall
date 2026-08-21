local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")
local JudgeMingPaiType = CF.gameRequire("Modules.GameLayer.JudgeMingPaiType")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")


GameModule.EVENT_REPLAYCE_SHOW_ANI = "EVENT_REPLAYCE_SHOW_ANI"
GameModule.EVENT_BAIBANGANG_SHOW_ANI = "EVENT_BAIBANGANG_SHOW_ANI"

local isFirstReplace = false

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFlowerType),msgClass = CF.GameProtocol.msgFlowerType}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTiaoCount),msgClass = CF.GameProtocol.msgTiaoCount}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTaiCount),msgClass = CF.GameProtocol.msgTaiCount}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgHuDanFang),msgClass = CF.GameProtocol.msgHuDanFang}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgWaitingData),msgClass = CF.GameProtocol.msgWaitingData}
    return subXYDealList
end

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
    self._tmpPlayerData = {}
end

function GameModule:onMsgFlowerType(msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        winLostData:setFlowerCount(i, msgData.sFlowerCount[i] or 0)
    end
end

function GameModule:onMsgTiaoCount(msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        winLostData:setTiaoCount(seat,msgData.sTiaoCount[seat])
    end
end

function GameModule:onMsgTaiCount(msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    winLostData:setTaiCount(msgData.sTaiCount)
end

function GameModule:onMsgHuDanFang(msgData)
    self:getGameData():setHuDanFang(0, msgData.tDanFang or 0)
end

function GameModule:onMsgJoker(msgData)
    GameModule.super.onMsgJoker(self, msgData)
    self:getGameData():addOpenData(msgData.nJokers[1])
end

function GameModule:onMsgOpenWall(msgData)
    local mah = msgData.nMah or {}

    self:getGameData():addOpenData(mah)
    self:getGameData():setMingMah(mah)
    self:dispatchEvent( { name = self.EVENT_OPEN_WALL_MAH , msg = msgData})
end

function GameModule:onMsgAction(msgData)
    GameModule.super.onMsgAction(self, msgData)
    self:playMingPaiAni(msgData.nSeat)
end

-- 播放明牌动画
function GameModule:playMingPaiAni(seat)
    local playerCount = CF.roomData:getCurPlayerCount()
    if playerCount ~= 4 then
        return
    else
        local bankerSeat = self:getGameData():getBankerSeat()
        local localSeat = CF.roomData:seatToLocal(seat)
        local allcombs = self:getGameData():getAllCombMahData(seat)
        local flowerMahs = self:getGameData():getFlowerMahData(seat)
        local fengSeat = CF.GameDefine.MAH_VALUE.FENG_DONG + (seat + 4 - bankerSeat + 4 ) % 4

        local judgeMingPai = JudgeMingPaiType.judgeMingPai(allcombs, flowerMahs, fengSeat, self:getGameData():getJokerData(), self:getGameData():getMingMah())
        CF.game:getModule("WinLost"):getWinLostData():setMingPaiType(seat, judgeMingPai)
        if self:getGameData()._isPlayMingPaiAni[seat + 1] ~= judgeMingPai then
            self:getGameData()._isPlayMingPaiAni[seat + 1] = judgeMingPai
            self:dispatchEvent( { name = self.EVENT_MINGPAI_SHOW_ANI, msg = {localSeat = localSeat, ntype = judgeMingPai}})
            local bMan = false
            local playerData = CF.roomData:getPlayerDataBySeatId(seat)
            if playerData then
                bMan = playerData:getSex() == 1
            end
            local bFangYan = not CF.settingData:getIsNormalVoice()
            local gameid = CF.roomData:getGameID()
            CF.soundManager:playSoundMingPai(judgeMingPai, bMan, gameid, bFangYan)
        end
    end
end

function GameModule:onMsgWaitingData(msgData)
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    local seat = CF.roomData:getSelfSeat()
    local tingMahs = {}
    local index = 1
    local data = {}
    for _, var in ipairs(msgData.tingMsgInfo) do
        tingMahs[index] = var[1]
        data[tingMahs[index]] = {}
        for i = 1, var[2] do
	        local tempInfo = {}
            tempInfo.huMahID = var[i + 2]
            tempInfo.huInfoNum = var[i + 2 + 1*var[2]] .. "," .. var[i + 2 + 2*var[2]] .. "," .. var[i + 2 + 3*var[2]]
            tempInfo.huInfo = "台,花,张"
            table.insert(data[tingMahs[index]], tempInfo)
        end
        index = index + 1
    end
    if #tingMahs == 0 then
        self:getGameData():clearTingMahs(seat)
    else
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, data)
    end
end

-- 补花
function GameModule:onMsgReplace(msgData)
    local seat = msgData.nSeat
    local mah = msgData.nMah

    -- 补花动画
    local flowerMahs = {}
    table.insert(flowerMahs, mah)
    self:getGameData():addFlowerMahData(seat, flowerMahs, false)
    self:getGameData():deleteHandMahData(seat, flowerMahs)
    --播放补花动画
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    if mah == CF.GameDefine.MAH_VALUE.JIAN_BAI then
        local buhuaType = WinLostFanConfig.BUHUA_TYPE.BH_BAIBANGANG
        self:dispatchEvent({ name = self.EVENT_BAIBANGANG_SHOW_ANI, msg = { seat = localSeat ,ntype = buhuaType } })
    elseif mah >= CF.GameDefine.MAH_VALUE.HUA_MEI and mah <= CF.GameDefine.MAH_VALUE.HUA_DONG  then
        self:dispatchEvent({ name = self.EVENT_REPLAYCE_SHOW_ANI, msg = { seat = localSeat } })
    else 
        local buhuaType = WinLostFanConfig.BUHUA_TYPE.BH_GANGTOU
        self:dispatchEvent({ name = self.EVENT_BAIBANGANG_SHOW_ANI, msg = { seat = localSeat ,ntype = buhuaType } })
    end

    --加入单放进入手牌
    self:getGameData():addDfDataIntoHandMah(seat)
    -- TODO 0721 补花音效
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = "flower"
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
end

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    isFirstReplace = true
    self._tmpPlayerData = clone(CF.roomData:getPlayerDatas() )
end

function GameModule:onServerToClientMessage(event)
    local sToClientData =  CF.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(event.msg.buff, event.msg.len)

    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen

    local record = self._subXYDealList[subXYID]
    if record then
        local msgData = record.msgClass:new()
        msgData:bistream(subBuff, subLen)
        -- 洗牌协议缓存
        local propUseModule = CF.game:getModule("PropUse")
        local isNeedDelay = false 
        if propUseModule and propUseModule.needDelayCmd then
            isNeedDelay = propUseModule:needDelayCmd() or false
        end
        if (CF.GameProtocol.msgPlayCount and subXYID == CF.GameProtocol.msgPlayCount.XY_ID)
        or (CF.GameProtocol.msgCurPanShu and subXYID == CF.GameProtocol.msgCurPanShu.XY_ID)
        or (CF.GameProtocol.msgQuanCount and subXYID == CF.GameProtocol.msgQuanCount.XY_ID) then
            isNeedDelay = false
        end
        if isNeedDelay then
            propUseModule:delayCmd(self, self.doServerToClientMessage, record, msgData, subXYID)
        else
            self:doServerToClientMessage(record, msgData, subXYID)
        end
    end
end

function GameModule:doServerToClientMessage(record, msgData, subXYID)
    local isNeedDelay, delayTime, isIncludeSelf = self:needDelay(subXYID, msgData)
    if not CF.roomData:isInitTaleData() then
        return
    end
    if subXYID == CF.GameProtocol.msgReplace.XY_ID then
        if self:getGameData():getCurGameStep() >= CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_MAH then
            self:addProtocolToDelayQueue(record.callback, clone(msgData), 0.5, true, subXYID)
        else
            if isFirstReplace then
                isFirstReplace = false
                self:addProtocolToDelayQueue(record.callback, clone(msgData), 1.5, true, subXYID)
            else
                self:addProtocolToDelayQueue(record.callback, clone(msgData), 0.83, true, subXYID)
            end
        end
    elseif isNeedDelay then
        self:addProtocolToDelayQueue(record.callback, clone(msgData), delayTime, isIncludeSelf, subXYID)
    else
        if #self._delayProtocolQueue > 0 then
            self:addProtocolToDelayQueue(record.callback, clone(msgData), 0, true, subXYID)
        else
            record.callback(msgData)
        end
    end
end

function GameModule:getTmpPlayerDataBySeatId(seatId)
    for _, playerData in pairs(self._tmpPlayerData) do
        if playerData:getSeat() == seatId then
            return playerData
        end
    end
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    --小结束风位
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local playerCount = CF.roomData:getChairs()
    if playerCount == 2 then
        for seat = 0, playerCount - 1 do
            local fengSeat = 0
            if seat ~= msgData.nBanker then
                fengSeat = 2
            end
            winLostData:setSeatWind(seat, fengSeat)
        end
    else
        for seat = 0, 3 do
            local fengSeat = (( seat - msgData.nBanker )+ 4 ) % 4
            winLostData:setSeatWind(seat, fengSeat)
        end
    end
end

return GameModule�(  