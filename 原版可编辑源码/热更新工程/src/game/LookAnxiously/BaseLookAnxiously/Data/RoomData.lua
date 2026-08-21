local RoomData = CF.gameClass("RoomData", "game.GameBase.Data.RoomData")

RoomData.EVENT_MULTIPLE_CHANGED = "EVENT_MULTIPLE_CHANGED"

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._iMultiple = 0
    self._bMustOut = false
    self._bAutoReady = false
    self._bRemove = {}
end

function RoomData:setMultiple(iMultiple)
    self._iMultiple = iMultiple
    self:dispatchEvent({name = self.EVENT_MULTIPLE_CHANGED})
end

function RoomData:getMultiple()
    return self._iMultiple
end

function RoomData:setIsMustOut(bMustOut)
    self._bMustOut = bMustOut or false
end

function RoomData:isMustOut()
    return self._bMustOut
end

function RoomData:setIsAutoReady(bAutoReady)
    self._bAutoReady = bAutoReady or false
end

function RoomData:isAutoReady()
    return self._bAutoReady
end

function RoomData:getMaxPlayer()
    return 5
end

-- 是否是五人场
function RoomData:isFivePlayer()
    return self:isRealChair() and self:getChairs() == self:getMaxPlayer()
end

function RoomData:isRealChair()
    if self:isPlayBack() then
        return true
    end
    local selfData = self:getSelfPlayerData()
    if not self._chairs or self._chairs == 0 or selfData == nil then
        return false
    end
    return true
end

-- table信息刷新了之后，再创建头像信息
function RoomData:initTableData(tableDataMsg)
    local isReal = self:isRealChair()
    RoomData.super.initTableData(self, tableDataMsg)
    if not isReal and self:isRealChair() then
        local playerDataList = self:getPlayerDatas()
        for index, player in pairs(playerDataList) do
            self:dispatchEvent({ name = self.EVENT_PLAYERLIST_CHANGED, msg = { seatId = player:getSeat(), remove = true } })
        end
    end
end

function RoomData:isSupportGps()
    return not self:isFivePlayer()
end

function RoomData:addPlayerData(playerData)
    if not playerData then
        return
    end
    local remove = true
    if playerData:isSeeing() then
        if playerData:getNumberID() == XH.playerData:getNumberID() then
            self:setIsSeer(true)
        end
        return
    end
    for index, player in pairs(self._playerDataList) do
        if player:getBrandID() == playerData:getBrandID() and player:getNumberID() == playerData:getNumberID() then
            playerData:cloneDataEx(player)
            remove = false
            table.remove(self._playerDataList, index)
            break
        end
    end

    self._playerDataList[#self._playerDataList + 1] = playerData
    local seatId = playerData:getSeat()
    self:dispatchEvent({ name = self.EVENT_PLAYERLIST_CHANGED, msg = {seatId = seatId, remove = remove or self._bRemove[seatId] } })
end

function RoomData:setRemove(seat, bRemove)
    self._bRemove = self._bRemove or {}
    self._bRemove[seat] = bRemove
end

local MIN_LOGIC_XYID = 512
-- 判断是否能接受逻辑协议
function RoomData:isReceiveLogicMsg(subXYID)
    if self:getSelfPlayerData() == nil and subXYID >= MIN_LOGIC_XYID then
        return false
    end
    return true
end

-- 是否支持多货币洗牌
function RoomData:isSupportMultiPropShuffle()
    -- 金币场不支持多货币洗牌，只支持金币洗牌
    if self:isGoldRoom() or self:isNewGoldRoom() then
        return false
    end
    local gameID = self:getGameID()
    -- 未开启洗牌不支持
    if not CF.gameSub:getIsOpenShuffle(gameID) then
        return false
    end
    return true
end

return RoomData
