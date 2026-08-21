local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initDatas()
    GameData.super.initDatas(self)
    self._qiaoxiang = false
    self._gpsInfo = {}
    self._isLmtMahs = false
    self._powerByteTable = {}
end

function GameData:clearQiaoxiangData()
    self._qiaoxiang = false
end
function GameData:setqiaoxiang(bQiaoXiang)
    self._qiaoxiang = bQiaoXiang
end

function GameData:getqiaoxiang()
    return self._qiaoxiang
end
function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self:clearQiaoxiangData()
end

function GameData:setGpsInfoDataBySeat(seat, tData) --用于兼容金华 发送 address 会不发经纬度
    local newGpsInfo =  self._gpsInfo[seat] or {}
    newGpsInfo.address = tData["address"] or ""
    if tonumber(tData["latitude"] or -1) ~= -1 then
        newGpsInfo["latitude"] = tonumber(tData["latitude"])
    else
        newGpsInfo["latitude"] =  newGpsInfo["latitude"] or -1
    end
    if tonumber(tData["longitude"] or -1) ~= -1 then
        newGpsInfo["longitude"] = tonumber(tData["longitude"])
    else
        newGpsInfo["longitude"] =  newGpsInfo["longitude"] or -1
    end
    self._gpsInfo[seat] = newGpsInfo
end

function GameData:getLimitMahs()
    return self._isLmtMahs
end

function GameData:setLimitMahs(bLimitMahs)
    self._isLmtMahs = bLimitMahs
end

function GameData:setPowerByte(powerByte)
    self._powerByteTable = powerByte or {}
end

function GameData:getPowerByte()
    return self._powerByteTable
end

return GameData