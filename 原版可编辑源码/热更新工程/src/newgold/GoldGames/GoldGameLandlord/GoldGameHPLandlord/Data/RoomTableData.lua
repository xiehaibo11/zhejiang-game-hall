local RoomTableData = NG.GAME.gameClass("RoomTableData", NG.ModuleBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local RoomPlayerData = NG.GAME.gameRequire("Data.RoomPlayerData")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function RoomTableData:getInstance()
    if RoomTableData._instance == nil then
        RoomTableData._instance = RoomTableData.new()
    end
    return RoomTableData._instance
end

function RoomTableData:ctor()
    RoomTableData.super.ctor(self)

    self:initData()
end

function RoomTableData:initData()
    self._selfSeat = 0

    self._playerData = {} -- 用户数据

    self._gameID = 0
    self._roomID = 0
    self._tableID = 0
    self._roomMode = 0
    self._playType = 0
    self._matchMode = 0
    self._playerDataCopy = {}
end

function RoomTableData:addPlayer(data)
    if data.nNumberID == GoldPlayerData.NumId and data.nBrandID == GoldPlayerData.AreaId then
        self._selfSeat = data.nSeat
    end
    self._playerData[data.nSeat] = RoomPlayerData.new()
    self._playerData[data.nSeat]:setData(data)
    self._playerData[data.nSeat]:setLocalSeat(self:seatToLocal(data.nSeat))
end

function RoomTableData:removePlayer(areaid, numid)
    local seat = self:getSeatByNumid(areaid, numid)
    self._playerData[seat] = nil
end

function RoomTableData:removePlayerBySeat(seat)
    self._playerData[seat] = nil
end

function RoomTableData:clearAllPlayers()
    self._playerData = {}
end

function RoomTableData:setPlayerDataEx(data)
    local player = self:getPlayerByNumid(data.nBrandID, data.nNumberID)
    if player then
        player:setDataEx(data)
    end
end

function RoomTableData:setPlayerEnter(data)
    local player = self:getPlayerByNumid(data.nBrandID, data.nNumberID)
    if player then
        player:setInitExp(player:getExp())
    end
end

function RoomTableData:getPlayerBySeat(seat)
    return self._playerData[seat]
end

function RoomTableData:getPlayerByLocalSeat(localSeat)
    for k, v in pairs(self._playerData) do
        if v:getLocalSeat() == localSeat then
            return v
        end
    end
    return nil
end

function RoomTableData:getSelf()
    return self:getPlayerBySeat(self._selfSeat)
end

function RoomTableData:getPlayerByNumid(areaid, numid)
    for k, v in pairs(self._playerData) do
        if v:getNumId() == numid and v:getAreaID() == areaid then
            return v
        end
    end
    return nil
end

function RoomTableData:getSeatByNumid(areaid, numid)
    for seat, v in pairs(self._playerData) do
        if v:getNumId() == numid and v:getAreaID() == areaid then
            return seat
        end
    end
    return -1
end

function RoomTableData:seatToLocal(seat)
    local localSeat = GameMainDefine.SELF_LOCAL_SEAT
    local dif = 0
    if (seat == self._selfSeat) then
        return localSeat
    else
        dif = (seat - self._selfSeat + GameMainDefine.MAX_PLAYER) % GameMainDefine.MAX_PLAYER
        localSeat = (dif + localSeat) % GameMainDefine.MAX_PLAYER
    end
    if localSeat == 0 then
        localSeat = GameMainDefine.MAX_PLAYER
    end
    return localSeat
end

function RoomTableData:getSelfSeat()
    return self._selfSeat
end

function RoomTableData:getNextSeat(localSeat)
    local next = localSeat + 1
    if next >= GameMainDefine.MAX_PLAYER then
        next = 0
    end
    return next
end

-- 复制该局玩家信息，防止结算玩家踢出数据消失
function RoomTableData:getPlayerBySeatCopy(seat)
    return self._playerDataCopy[seat]
end

-- 刷新信息，游戏开局后刷新
function RoomTableData:flushPlayerBySeatCopy()
    self._playerDataCopy = clone(self._playerData)
end

-- 判断该桌子玩家信息是否满员
function RoomTableData:isPlayerFull()
    local count = 0
    for k, v in pairs(self._playerData) do
        if v ~= nil then
            count = count +1
        end
    end
    return count == GameMainDefine.MAX_PLAYER
end

return RoomTableData
