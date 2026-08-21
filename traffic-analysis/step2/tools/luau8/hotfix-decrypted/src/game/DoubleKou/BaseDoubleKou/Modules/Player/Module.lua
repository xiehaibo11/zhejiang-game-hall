local PlayerModule = CF.gameClass("PlayerModule", "game.GameBase.Modules.Player.Module")

PlayerModule.EVENT_MOVE_SEAT_END = "EVENT_MOVE_SEAT_END"
PlayerModule.EVENT_SHOW_LEFTTIME_TIP = "EVENT_SHOW_LEFTTIME_TIP"
PlayerModule.EVENT_CLEAR_LEFTTIME_TIP = "EVENT_CLEAR_LEFTTIME_TIP"

function PlayerModule:getSubXYDealList()
    local xyTable = PlayerModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower}

    return xyTable
end

function PlayerModule:endMoveSeat(bigOpenCardLocalSeat, smallOpenCardLocalSeat)
    self:dispatchEvent({name = self.EVENT_MOVE_SEAT_END, msg = {
        bigOpenCardLocalSeat = bigOpenCardLocalSeat,
        smallOpenCardLocalSeat = smallOpenCardLocalSeat,
        callBack = function()
            CF.msgManager:sendWaitSwapSeat()
        end
    }})
end

function PlayerModule:onMsgPower(msgData)
    self:dispatchEvent({name = self.EVENT_CLEAR_LEFTTIME_TIP})
end

return PlayerModule