local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

local KW_MIN_PLAYER_CNT = 2
local KW_DISCARD_DIFF = 2
local KW_MAX_PLAYER_CNT = 4

function WinLostData:ctor()
    WinLostData.super.ctor(self)
    self._qzGameType = WinLostFanConfig.GAME_TYPE.COUNT
    self._bMinusFan = false
    self._bAddFan = false
    self._fixFanSeat = KW_MAX_PLAYER_CNT
end

function WinLostData:onQZMsgFanCnt(msgData)
    local fanNames = ""
    local tmpFan = msgData.Fans
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if self._qzGameType == WinLostFanConfig.GAME_TYPE.LA_TA then
            fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID].." "
        else
            local fanNum = tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID]
            if (self._sEndType == CF.GameDefine.END_TYPE.ET_ROBKONG or
               self._sEndType == CF.GameDefine.END_TYPE.ET_DISCARD) then
               local bExtFan = false
               for i = 1, #WinLostFanConfig.KW_WINLOST_EXT_FAN_ID do
                    if tmpFan[j].nFanID == WinLostFanConfig.KW_WINLOST_EXT_FAN_ID[i] then
                        bExtFan = true
                        break
                    end
               end
               if not bExtFan and CF.roomData:getChairs() ~= KW_MIN_PLAYER_CNT then
                    fanNum = fanNum * (CF.roomData:getMaxPlayer() - 1) - KW_DISCARD_DIFF
               end
            end
            fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] ..fanNum.. "番 "
        end
    end
    if msgData.nSeat == self._fixFanSeat and self._qzGameType == WinLostFanConfig.GAME_TYPE.DUAN_ZI then
        local exInfoName = ""
        if self._bMinusFan then
            exInfoName = "有财神-1番 "
        end
        if self._bAddFan then
            exInfoName = exInfoName .. "三财神+1番 "
        end
        if #exInfoName > 0 then
            self._extInfo[msgData.nSeat] = exInfoName
        end
    end
    self._fanNames[msgData.nSeat] = fanNames
    self._qzFanNames[msgData.nSeat] = fanNames
end

function WinLostData:setGameType(gameType)
    if gameType then
        self._qzGameType = gameType
    end
end

function WinLostData:setMinusFan(bMinusFan)
    if bMinusFan then
        self._bMinusFan = bMinusFan
    end
end

function WinLostData:setAddFan(bAddFan)
    if bAddFan then
        self._bAddFan = bAddFan
    end
end

function WinLostData:setFixFanSeat(seat)
    if seat then
        self.fixFanSeat = seat
    end
end

return WinLostData