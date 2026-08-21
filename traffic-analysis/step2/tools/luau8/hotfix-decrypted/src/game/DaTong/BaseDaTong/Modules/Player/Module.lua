local PlayerModule = CF.gameClass("PlayerModule", "game.GameBase.Modules.Player.Module")

PlayerModule.EVENT_MOVE_SEAT_END = "EVENT_MOVE_SEAT_END"

function PlayerModule:endMoveSeat(bigOpenCardLocalSeat, smallOpenCardLocalSeat)
    self:dispatchEvent({name = self.EVENT_MOVE_SEAT_END, msg = {
        bigOpenCardLocalSeat = bigOpenCardLocalSeat,
        smallOpenCardLocalSeat = smallOpenCardLocalSeat,
        callBack = function()
            CF.msgManager:sendWaitSwapSeat()
        end
    }})
end

return PlayerModule