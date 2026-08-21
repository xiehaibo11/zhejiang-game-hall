local GameModule = CF.gameClass("GameModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.GameLayer.Module")


function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    --小结束风位
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local playerCount = CF.roomData:getChairs()
    if playerCount == 2 then
        for seat = 0, playerCount - 1 do
            local fengSeat = 0
            if seat ~= msgData.nBanker then
                fengSeat = 2
            end
            winLostData:setSeatWind(seat, fengSeat)
        end
    elseif playerCount == 3 then
        for seat = 0, playerCount - 1 do
            local fengSeat = (( seat - msgData.nBanker ) + playerCount ) % playerCount
            winLostData:setSeatWind(seat, fengSeat)
        end
    end
end

return GameModule