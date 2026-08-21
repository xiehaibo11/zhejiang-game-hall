local GameData = CF.gameClass("GameData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.GameData")

GameData.EVENT_CAITI_STATE_CHANGED = "EVENT_CAITI_STATE_CHANGED"

function GameData:ctor()
    GameData.super.ctor(self)
    self._caiTi = true
    self._tPowerData = {}
    self._caiPiaoSeat = -1
    self._isCaiPiaoZhong = false
    self._caiTiNext = true
end

function GameData:setLaoZhuangNum(num)
    GameData.super.setLaoZhuangNum(self, num)
    self:dispatchEvent( { name = self.EVENT_BANKER_CHANGED })
end

-- 设置财替状态
function GameData:setCaiTiState(bState)
    self._caiTi = bState or false
    self:dispatchEvent( { name = self.EVENT_CAITI_STATE_CHANGED })
end

-- 获取财替状态
function GameData:getCaiTiState()
    return self._caiTi
end

function GameData:setCaiTiNextState(bState)
    self._caiTiNext = bState or false
end

function GameData:getCaiTiNextState()
    return self._caiTiNext
end

-- 保存权限值
function GameData:setPowerData(tPowerData)
    self._tPowerData = tPowerData or {}
end

-- 获取权限值
function GameData:getPowerData()
    return self._tPowerData
end

function GameData:getCaiPiaoSeat()
    return self._caiPiaoSeat
end

function GameData:setCaiPiaoSeat(seat)
    self._caiPiaoSeat = seat
end

function GameData:setCaiPiaoState(iscaipiao)
    self._isCaiPiaoZhong = iscaipiao
end

function GameData:getCaiPiaoState()
    return self._isCaiPiaoZhong
end

function GameData:getZuoFeng()
    local tZuofeng = {  CF.GameDefine.MAH_VALUE.FENG_NAN,
                        CF.GameDefine.MAH_VALUE.FENG_DONG,
                        CF.GameDefine.MAH_VALUE.FENG_BEI,
                        CF.GameDefine.MAH_VALUE.FENG_XI,}
    local bankSeat = self:getBankerSeat()
    local bankerLocalSeat = CF.roomData:seatToLocal(bankSeat)
    return tZuofeng[bankerLocalSeat]
end

function GameData:checkPureComb(comb, mahs)
    local result = false
    for i = 1, #comb do
        for j = 1, #mahs do
            if comb[i] == mahs[j] then
                result = true
                break
            end
        end
        if result then
            break
        end
    end
    return result
end

function GameData:judgeMahInstead(combs, specialMahs)
    local flag = true
    for i = 1 , #combs do
        flag = self:checkPureComb(combs[i], {self:getJokerData()[1]})
        if not flag then
            return flag
        end

        for j = 1, #specialMahs do
            if self:getJokerData()[1] == specialMahs[j] then
                local tmpMahs = clone(specialMahs)
                for k = #tmpMahs, 1, -1 do
                    if tmpMahs[k] == self:getJokerData()[1] and tmpMahs[k] ~= self:getZuoFeng() then
                        table.remove(tmpMahs, k)
                        flag = self:checkPureComb(combs[i], tmpMahs)
                        if not flag then
                            return flag
                        end
                    end
                end
                if not flag then
                    return flag
                end
            end
        end

        flag = self:judgeOnlyAction(combs[i], specialMahs)
        if not flag then
            return flag
        end
    end
    return flag
end

function GameData:judgeOnlyAction(comb, specialMahs)
    local tmp = true
    for i = 1, #specialMahs do
        for j = 1, #comb do
            if comb[j] == specialMahs[i] then
                tmp = false
                for k = 1, #specialMahs do
                    if self:getJokerData()[1] == specialMahs[k] then
                        tmp = true
                        break
                    end
                end
                if not tmp then
                    return false
                end
            end
        end
    end
    return tmp
end

function GameData:setMsgPowerData(data)
    self._msgPowerData = data
end

function GameData:getMsgPowerData()
    return self._msgPowerData
end

return GameData