local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)
    self._playerTingState = {}
    self._tSeattLocal = {}
    self._tLocaltSeat = {}
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._playerTingState = {}
end

function GameData:setPlayerTingState(seat, bTing)
    self._playerTingState[seat] = bTing
end

function GameData:getPlayerTingState(seat)
    return self._playerTingState[seat] or ""
end

-- 获取提前开局椅子数
function GameData:getAheadChairs()
    return 2
end

-- 提前开始以后处理
function GameData:onAheadStartEnd()
    self:changePlayerSeat()
    CF.roomData.getChairs = function (selfEx)
        return self:getAheadChairs()
    end

    CF.roomData:dispatchEvent( { name = "EVENT_PLAYERLIST_CHANGED" })
end

-- 根据服务端位置重新调整提前开局玩家的位置保持与服务端统一
function GameData:changePlayerSeat()
    local bZeroSeatEmpty = false
    for seat = 0, CF.roomData:getMaxPlayer() do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if not player then
            if seat == 0 then
                bZeroSeatEmpty = true
            end
        else
            if bZeroSeatEmpty and seat > 1 then
                if seat == CF.roomData:getSelfSeat() then
                    CF.msgManager:setSelfSeat(0)
                end
                player:setSeat(0)
                bZeroSeatEmpty = false
            elseif not bZeroSeatEmpty and seat > 1 then
                if seat == CF.roomData:getSelfSeat() then
                    CF.msgManager:setSelfSeat(1)
                end
                player:setSeat(1)
            end
        end
    end
end

return GameData