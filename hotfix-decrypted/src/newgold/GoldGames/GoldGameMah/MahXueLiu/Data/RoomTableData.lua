local RoomTableData = NG.GAME.gameClass("RoomTableData", NG.ModuleBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local RoomPlayerData = NG.GAME.gameRequire("Data.RoomPlayerData")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
RoomTableData.EVENT_GAME_PLAYCOUNT_CHANGED = "EVENT_GAME_PLAYCOUNT_CHANGED"
RoomTableData.EVENT_HOST_CHANGED = "EVENT_HOST_CHANGED"
RoomTableData.EVENT_PLAYERLIST_CHANGED = "EVENT_PLAYERLIST_CHANGED"
RoomTableData.EVENT_PLAYER_STATE_CHANGED = "EVENT_PLAYER_STATE_CHANGED"
RoomTableData.EVENT_CLEAR_TABLE = "EVENT_CLEAR_TABLE"
RoomTableData.EVENT_GAMERULE_CHANGED = "EVENT_GAMERULE_CHANGED"
RoomTableData.EVENT_BASESCORE_CHANGED = "EVENT_BASESCORE_CHANGED"
RoomTableData.EVENT_GPSINFO_CHANGED = "EVENT_GPSINFO_CHANGED"
RoomTableData.EVENT_HEAD_FRAME_CHANGED = "EVENT_HEAD_FRAME_CHANGED"
RoomTableData.EVENT_CARD_HOLDER_CHANGED = "EVENT_CARD_HOLDER_CHANGED"
RoomTableData.EVENT_MAH_BACK_CHANGED = "EVENT_MAH_BACK_CHANGED"
RoomTableData.EVENT_TABLE_BG_PROP_CHANGED = "EVENT_TABLE_BG_PROP_CHANGED"
RoomTableData.EVENT_ENTER_ANI_PROP_CHANGED = "EVENT_ENTER_ANI_PROP_CHANGED"
RoomTableData.EVENT_PLAYER_START = "EVENT_PLAYER_START"
RoomTableData.EVENT_GAMESTART_CHANGED = "EVENT_GAMESTART_CHANGED"
RoomTableData.EVENT_MATCH_STATE_CHANGED = "EVENT_MATCH_STATE_CHANGED"
RoomTableData.EVENT_GAME_UPDATE_SEER = "EVENT_GAME_UPDATE_SEER"

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
    if data.nNumberID == XH.playerData:getNumberID() and data.nBrandID == XH.playerData:getBrandID() then
        self._selfSeat = data.nSeat
    elseif data.nNumberID == GoldPlayerData.NumId and data.nBrandID == GoldPlayerData.AreaId then
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

-- function RoomTableData:seatToLocal(seat)
--     local localSeat = GameMainDefine.SELF_LOCAL_SEAT
--     local dif = 0
--     if (seat == self._selfSeat) then
--         return localSeat
--     else
--         dif = (seat - self._selfSeat + GameMainDefine.MAX_PLAYER) % GameMainDefine.MAX_PLAYER
--         localSeat = (dif + localSeat) % GameMainDefine.MAX_PLAYER
--     end
--     if localSeat == 0 then
--         localSeat = GameMainDefine.MAX_PLAYER
--     end
--     return localSeat
-- end

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

function RoomTableData:isGoldRoom()
    return true
end

function RoomTableData:getRoomMode()
    return self._roomMode
end

function RoomTableData:getGameID()
    return self._gameID
end


function RoomTableData:getChairs()
    return self._chairs or self:getMaxPlayer()
end

function RoomTableData:getSelfLocalSeat()
    return GameMainDefine.SELF_LOCAL_SEAT
end

function RoomTableData:seatToLocal(seat)
    local localSeat = -1
    local chairCount = self:getChairs()
    if seat >= 0 and seat <= chairCount - 1 then
        localSeat = ((seat - self:getSelfSeat() + chairCount) % chairCount + 1) % chairCount + self:getSelfLocalSeat() - 1
        if chairCount == 2 and localSeat == NG.GAME.GameDefine.LOCAL_SEAT.LEFT then
            localSeat = NG.GAME.GameDefine.LOCAL_SEAT.TOP
        end
    end
    return localSeat
end

function RoomTableData:localToSeat(localSeat)
    local seat = -1
    local chairCount = self:getChairs()
    if localSeat >= 0 and (localSeat <= chairCount or chairCount == 2) then
        if chairCount == 2 then
            if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.TOP then
                localSeat = NG.GAME.GameDefine.LOCAL_SEAT.LEFT
            end
        end
        seat = ((localSeat - self:getSelfLocalSeat() + chairCount) % chairCount + self:getSelfSeat()) % chairCount
    end
    return seat
end


function RoomTableData:getPlayerDataBySeatId(seatID)
    return self:getPlayerBySeat(seatID)
end


function RoomTableData:getSelfSeat()
    return self._selfSeat
end


function RoomTableData:getMaxPlayer()
    return 4
end

function RoomTableData:getMinPlayer()
    return 2
end

--设置房主座位
function RoomTableData:setHostSeat(seatId)
    if not seatId then
        return
    end
    self._hostSeatId = seatId

    self:dispatchEvent({name = self.EVENT_HOST_CHANGED})
end

function RoomTableData:getHostSeat()
    return self._hostSeatId
end


function RoomTableData:clearTable()
    self:dispatchEvent({name = self.EVENT_CLEAR_TABLE})
end


function RoomTableData:setBaseScore(baseScore)
    self._baseScore = baseScore

    self:dispatchEvent({name = self.EVENT_BASESCORE_CHANGED})
end

function RoomTableData:getBaseScore()
    return self._baseScore
end


function RoomTableData:setCardHolderData(numberID, data)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        playerData:setCardHolderData(data)
        self:dispatchEvent({name = self.EVENT_CARD_HOLDER_CHANGED, msg = {numberID = numberID, data = data}})
    end
end

function RoomTableData:getSelfCardHolderData()
    local playerData = self:getSelfPlayerData()
    if playerData then
        return playerData:getCardHolderData()
    end
    return nil
end

function RoomTableData:getCardHolderData(numberID)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        return playerData:getCardHolderData()
    end
    return nil
end


--每小局游戏需要更新的数据
function RoomTableData:initEveryTimesDatas()
    --
end

function RoomTableData:onPlayerStart(seat)
    if not seat then
        return
    end
    self:dispatchEvent({ name = self.EVENT_PLAYER_START,  msg = {seatID = seat}})
end

function RoomTableData:setIsGameStart(bStart)
    local oldState = self._isGameStart
    self._isGameStart = bStart
    self:dispatchEvent({name = self.EVENT_GAMESTART_CHANGED, msg = {oldState = oldState, nowState = self._isGameStart}})
    if bStart then
        self._isGameStarted = bStart
    end 
end

function RoomTableData:getIsGameStart()
    return self._isGameStart
end




function RoomTableData:getIsSeer()
    return false
end

function RoomTableData:setMahBackData(data)
    self._mahBackData = data
    self:dispatchEvent({name = self.EVENT_MAH_BACK_CHANGED})
end

function RoomTableData:getMahBackData()
    return self._mahBackData
end

return RoomTableData
%  