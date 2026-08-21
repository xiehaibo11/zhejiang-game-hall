local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._nseat = 0
    self._HuKongState = false
end

-- 保留自己玩家位置，防止最后一局数据清空获取不到
function WinLostData:setSelfSeat(nSeat)
    self._nseat = nSeat
end

-- 保留自己玩家位置，防止最后一局数据清空获取不到
function WinLostData:getSelfSeat()
    return self._nseat
end

-- 胡前是否杠过
function WinLostData:setHuKongState(state)
    self._HuKongState = state
end

function WinLostData:isHuKongState()
    return self._HuKongState 
end

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        if fanNums == 0 then
            fanNums = fanNums + WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount
        else
            fanNums = fanNums * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount
        end

        local winFan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. winFan .. " "
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:onMsgContractRelationships(msgData)
    local cbSeatFlag = msgData.bContractStatus
    local fcbSeatFlag = msgData.bFContractStatus
    for i = 1, CF.roomData:getMaxPlayer() do
        if cbSeatFlag[i] and fcbSeatFlag[i] then
            self:setIsDeContract(i - 1, fcbSeatFlag[i])
        elseif cbSeatFlag[i] then
            self:setIsContract(i - 1, cbSeatFlag[i])
        elseif fcbSeatFlag[i] then
            self:setIsDeContract(i - 1, fcbSeatFlag[i])
        end 
    end
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData