local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._detail = {}
    self._huShowType = {}
    self._playerEndState = {}
    self._huaNums = {}
    self._bIsHuaShow = false
    self._chengBaoState = {}
end

function WinLostData:isInChengBaoState()
    for _, value in pairs(self._chengBaoState) do
        if value then
            return true
        end
    end
end

function WinLostData:getIsChengBaoState(seat)
    return self._chengBaoState[seat] or nil
end

function WinLostData:setIsChengBaoState(seat, data)
    self._chengBaoState[seat] = data
end

function WinLostData:getIsShowHua()
    return self._bIsHuaShow
end

function WinLostData:setIsShowHua(data)
    self._bIsHuaShow = data
end

function WinLostData:setFanTotalNums(seat, tFanNums)
	self._fanNums[seat] = tFanNums
end

function WinLostData:setHuaTotalNums(seat, tHuaNums)
	self._huaNums[seat] = tHuaNums
end

function WinLostData:getHuaTotalNums(seat)
	return self._huaNums[seat] or 0
end

function WinLostData:setPlayerEndState(tEndState)
    self._playerEndState = tEndState
end

function WinLostData:getPlayerEndState(seat)
    return self._playerEndState[seat + 1]
end

function WinLostData:setDetail(tDetail)
	self._detail = tDetail
end

function WinLostData:getDetail(seat)
	return self._detail[seat]
end

function WinLostData:setHuShowType(tHuType)
	self._huShowType = tHuType
end

function WinLostData:getHuShowType(seat)
	return self._huShowType[seat]
end

function WinLostData:onMsgFanCnt(msgData)
end

function WinLostData:onMsgResultInfo(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.game:getModule("WinLost"):setHideWinlostUI(false)
    CF.soundManager:playSoundEnd()
    CF.roomData:setIsHaveResult(true)
    -- 延迟时间
    self:setDelayTime(1)
    for i = 0, CF.roomData:getChairs() -1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        local huMahID = gameData:getHuDanFang(i)
        if mahIDs and huMahID then
            gameData:setHuMahsData(i, mahIDs, huMahID)
        end
    end

    -- 胜负分
    local tWinlost = { }
    tWinlost.nWinLost = { }
    local huSeat = -1
    -- 详情
    local tDetail = { }
    for i = 1, msgData.playerCnt do
        local tempFanHuaIds = ""
        tWinlost.nWinLost[i - 1] = msgData.winLostScore[i]
        if msgData.playerEndState[i] == 1 or msgData.playerEndState[i] == 2 then
            for key, fanIds in pairs(msgData.fanIDs) do
                tempFanHuaIds = tempFanHuaIds .. WinLostFanConfig.WINLOST_FAN_TYPE[fanIds] .. "(" .. msgData.fanNum[key] .. "番) "
            end
            for key, huaIds in pairs(msgData.huaIDs) do
                tempFanHuaIds = tempFanHuaIds .. WinLostFanConfig.WINLOST_HUA_TYPE[huaIds] .. "(" .. msgData.huaNum[key] .. "花) "
            end
            tDetail[i - 1] = tempFanHuaIds
            self:setHuaTotalNums(i - 1, msgData.totalHua)
            self:setFanTotalNums(i - 1, msgData.totalFan)
            huSeat = i
        end
        self:setLostEndType(i - 1, msgData.playerEndState[i])
    end

    local chengBaoStr = {"承包", "反承包"}
    for i = 1, msgData.playerCnt do
        if i ~= huSeat then
            local chengBaoMsg = ""
            if msgData.chengBao[i] and msgData.fanChengBao[i] then
                chengBaoMsg = chengBaoStr[1] .. "/" .. chengBaoStr[2]
                self:setIsChengBaoState(i, CF.GameDefine.ChengBaoState.HUXIANGCHENGBAO)
            elseif msgData.chengBao[i] then
                chengBaoMsg = chengBaoStr[1]
                self:setIsChengBaoState(i, CF.GameDefine.ChengBaoState.CHENGBAO)
            elseif msgData.fanChengBao[i] then
                chengBaoMsg = chengBaoStr[2]
                self:setIsChengBaoState(i, CF.GameDefine.ChengBaoState.FANCHENGBAO)
            end
            tDetail[i - 1] = chengBaoMsg
        end
    end

    self:setPlayerEndState(msgData.playerEndState)
    self:onMsgResult(tWinlost)
    self:setIsShowFan(true)
    self:setIsShowHua(true)
    self:setDetail(tDetail)
    local time = self:getDelayTime()
    if time then
        self:performWithDelay(function()
            if not CF.game or not CF.roomData then
                return
            end
            CF.game:getModule("WinLost"):showSettleWindow()
            local strRule = "上虞花麻将  "
            if CF.roomData:getGameID() == 30415 then
                strRule = "硬爆头玩法  "
            end
            strRule = strRule .. CF.roomData:getGameRule()
            self:setGameRule(strRule)
            for i = 0, CF.roomData:getChairs() -1 do
                if gameData:isHuSeat(i) then
                    local huMahID = gameData:getHuDanFang(i)
                    self:setHuMahData(i, huMahID)
                end
            end
        end, time)
    end
end

return WinLostData