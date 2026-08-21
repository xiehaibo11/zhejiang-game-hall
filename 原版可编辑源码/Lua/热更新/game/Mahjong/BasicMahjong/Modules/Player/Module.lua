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

function PlayerModule:onMsgAvatarUrl(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
    if player then
        -- 头像url地址更新
        if msgData.avatarUrl == nil or msgData.avatarUrl == "" then
            return
        end
        player:updataAvatarUrl(msgData.avatarUrl)
    end  
end

return PlayerModule