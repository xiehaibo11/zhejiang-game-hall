local WinLostData = CF.gameClass("WinLostData", CF.ModuleBase)

WinLostData.EVENT_RESULT_CHANGED = "EVENT_RESULT_CHANGED"
WinLostData.EVENT_RESULT_EXINFO_CHANGED = "EVENT_RESULT_EXINFO_CHANGED"
WinLostData.EVENT_END_TYPE_CHANGED = "EVENT_END_TYPE_CHANGED"
WinLostData.EVENT_CHANGED = "EVENT_CHANGED"
WinLostData.EVENT_RESULT_SHOW_HUANI = "EVENT_RESULT_SHOW_HUANI"
WinLostData.EVENT_RESULT_SET_GAMERULE = "EVENT_RESULT_SET_GAMERULE"

function WinLostData:ctor()
    WinLostData.super.ctor(self)
    self:initDatas()
end

function WinLostData:initDatas()
    self._nWinLost = {}
    self._score = {}
    self._desc = {}
    self._maxFan = 1
    self._sEndType = 2
    self._endSeat = 0
    self._fans = {}
    self._fanNums = {}
    self._fanNames = {}
    self._gameRule = ""
    --买马相关
    self._buyMah = {}
    self._buyMahList = {}
    self._buyMahDirection = {}  -- 每匹马风位(数值 0-3)
    self._isHuSeat = {}        -- 胡牌玩家 seat 标记
    self._delayTime = 0
    
    self._mahDataList = {}
    self._huMahID = {}
    --默认显示番
    self._isShowFan = true

    self._lostEndType = {}

    --是否承包
    self._isContract = {}
    --是否反承包
    self._isDeContract = {}

    --风位
    self._seatWind = {}
    --封顶
    self._fengDingFlags = {}
    self._selfSeat = CF.roomData:getSelfSeat()
end

---------------------------------------------------------
-- @seat 服务端座位号
-- @mahData {handData = handData,combData = combData, handDfData = handDfData, flowerData = flowerData}
---------------------------------------------------------
function WinLostData:setMahData(seat,mahData)
    self._mahDataList[seat] = mahData
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:getMahData(seat)
   return self._mahDataList[seat]
end

function WinLostData:setHuMahData(seat, mahID)
    self._huMahID[seat] = mahID or 0
    local data = {}
    data.seat = seat
    self:dispatchEvent( { name = self.EVENT_RESULT_SHOW_HUANI, data = data})
end

function WinLostData:getHuMahData(seat)
    return self._huMahID[seat]
end

function WinLostData:onMsgResult(msgData)
    self._nWinLost = msgData.nWinLost
    --self:dispatchEvent( { name = self.EVENT_RESULT_CHANGED })
end

function WinLostData:onMsgResultExtInfo(msgData)
    self._score = msgData.score
    self._desc = msgData.desc
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

--UI上没有看到体现,暂不处理
function WinLostData:onMsgGameMaxFan(msgData)
    self._maxFan = msgData.maxFan
    self:dispatch()
end

function WinLostData:onMsgEndType(msgData)
    self._sEndType = msgData.sEndType
    self._endSeat = msgData.sSeat
    self:dispatchEvent( { name = self.EVENT_END_TYPE_CHANGED })
end

function WinLostData:onMsgFanCnt(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        local gameId = CF.roomData:getGameID()
        if gameId == 30304 or gameId == 30300 then
            if fanNums == 0 then
                fanNums = 1
            end
            WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 1
            fanNums = fanNums * (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
        else
            WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
            fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
        end

        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. " "
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:setBuyMah(seat, buyMah)
    buyMah = buyMah or {}
    self._buyMah[seat] = buyMah
end

function WinLostData:getBuyMah(seat)
    return self._buyMah[seat]
end

function WinLostData:setBuyMahList(buyMahList)
    self._buyMahList = buyMahList or {}
end

function WinLostData:getBuyMahList()
    return self._buyMahList or {}
end

function WinLostData:setBuyMahDirection(buyMahDirection)
    self._buyMahDirection = buyMahDirection or {}
end

function WinLostData:getBuyMahDirection()
    return self._buyMahDirection or {}
end

function WinLostData:setIsHuSeat(seat, isHu)
    self._isHuSeat[seat] = isHu
end

function WinLostData:getIsHuSeat(seat)
    return self._isHuSeat[seat] == true
end

function WinLostData:setDelayTime(delayTime)
    delayTime = delayTime or 0
    self._delayTime = delayTime
end

function WinLostData:getDelayTime()
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return 0
    end
    return self._delayTime or 0
end

function WinLostData:getWinLost(seat)
    return self._nWinLost[seat]
end

function WinLostData:getScore(seat)
    return self._score[seat]
end

function WinLostData:getDesc()
    return self._desc
end

function WinLostData:getMaxFan()
    return self._maxFan
end

function WinLostData:getFanNameBySeat(seat)
    return self._fanNames[seat] or ""
end

function WinLostData:getFanNumBySeat(seat)
    return self._fanNums[seat] or ""
end

function WinLostData:dispatch()
    self:dispatchEvent( { name = self.EVENT_CHANGED })
end

function WinLostData:setIsShowFan(isShowFan)
    self._isShowFan = isShowFan
end

function WinLostData:getIsShowFan()
    return self._isShowFan
end

function WinLostData:setLostEndType(seat, num)
    if not seat then return end
    self._lostEndType[seat] = num
end

function WinLostData:getLostEndType(seat)
    return self._lostEndType[seat]
end

function WinLostData:setIsContract(seat,isContract)
    self._isContract[seat] = isContract
end

function WinLostData:getIsContract(seat)
    return self._isContract[seat] or false
end

function WinLostData:setIsDeContract(seat,isDeContract)
    self._isDeContract[seat] = isDeContract
end

function WinLostData:getIsDeContract(seat)
    return self._isDeContract[seat] or false
end

function WinLostData:setGameRule(gameRule)
    self._gameRule = gameRule
    self:dispatchEvent( { name = self.EVENT_RESULT_SET_GAMERULE })
end

function WinLostData:getGameRule()
    return self._gameRule
end

function WinLostData:setSeatWind(seat, wind)
    self._seatWind[seat] = wind
end

function WinLostData:getSeatWind(seat)
    return self._seatWind[seat] or -1
end

function WinLostData:getEndType()
    return self._sEndType
end

function WinLostData:setEndType(sEndType)
    self._sEndType = sEndType
end

function WinLostData:getFanNames()
    return self._fanNames
end

function WinLostData:setFanNames(fans)
    self._fanNames = fans
end

function WinLostData:getFengDingFlag()
    return self._fengDingFlags
end

function WinLostData:setFengDingFlag(flags)
    self._fengDingFlags = flags
end

function WinLostData:getSelfSeat()
    return self._selfSeat
end

return WinLostDatac