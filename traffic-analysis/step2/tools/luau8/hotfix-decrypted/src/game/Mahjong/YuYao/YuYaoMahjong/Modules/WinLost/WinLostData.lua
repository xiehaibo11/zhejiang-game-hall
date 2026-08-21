local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._resultNewData = {}
    self._gangFens = {}
    self._bIsJiGangFen = false
    self.__msgFanCnt = nil
end

function WinLostData:onMsgFanCnt(msgData)
    if not msgData then return end
    self._fans[msgData.nSeat] = msgData.Fans
    local resultNew = self:getResultNewData()
    --local infoData = CF.game:getModule("GameLayer"):getGameData()
    --local lianLao = infoData:getLaoZhuangNum()
    local ischongjimode = resultNew["ischongjimode"] or 1
    local huInfo = {}
    if resultNew and resultNew.szPlayerLua and resultNew.szPlayerLua[msgData.nSeat+1] then
        huInfo = loadstring("return {" .. resultNew.szPlayerLua[msgData.nSeat+1] .. "}")()
    end
    local tmpFan = msgData.Fans
    local quanjiao = false
    local ispaohua = false
    for j = 1, #tmpFan do
        local fanobj = tmpFan[j]
        --local fancount = fanobj["nCount"]
        local fanid = fanobj["nFanID"]

        if fanid == 1001 then
            ispaohua = true
        end
    end
    local fanNums = 0
    local fanNames = ""
    for j = 1, #tmpFan do
        local fanobj = tmpFan[j]
        --local fancount = fanobj["nCount"]
        local fanid = fanobj["nFanID"]
        
        if ischongjimode == 0 then
            if fanid == 1012 or fanid == 1018 or fanid == 1019 then
                fanNums = 50
            end
        end

        WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] or 0
        fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""

        if tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] >= 100 then
            fanNames = fanNames .. " ".. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. " ".." 全缴"
            quanjiao = true
        else
            if fanid ~= 1001 then
                fanNames = fanNames .. " ".. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. "×" .. tostring(tmpFan[j].nCount * WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID]) .. " "            
            end
        end     
    end
    local longpaolong = false
    if huInfo["longpaolong"] == 1 then
        longpaolong = true
        ispaohua = false
    end
    if quanjiao == false then
        if longpaolong then
            fanNames = fanNames .. " 龙抛龙×20"
        elseif ispaohua then
            fanNames = fanNames .. " 抛龙×10"
        end
    end
    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:setResultNewData(data)
    data = data or 0
    self._resultNewData = data
end

function WinLostData:getResultNewData()
    return self._resultNewData or 0
end

function WinLostData:setGangFens(data)
    self._gangFens = data
end

function WinLostData:getGangFens()
    return self._gangFens
end

function WinLostData:setIsJiGangFen(data)
    self._bIsJiGangFen = data
end

function WinLostData:getIsJiGangFen()
    return self._bIsJiGangFen
end

function WinLostData:setFanCnt(data)
    self.__msgFanCnt = data
end

function WinLostData:getFanCnt()
    return self.__msgFanCnt
end
return WinLostData
~