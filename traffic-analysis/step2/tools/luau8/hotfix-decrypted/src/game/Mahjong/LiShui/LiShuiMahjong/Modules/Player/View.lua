local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")

function PlayerView:onPlayerListChanged(event)
    PlayerView.super.onPlayerListChanged(self, event)

    local players = CF.roomData:getPlayerDatas()
    for i = 1, CF.roomData:getMaxPlayer() do
        local seat = CF.roomData:localToSeat(i)
        local bFind = false
        for _, v in pairs(players) do
            if seat == v:getSeat() then
                bFind = true
                break
            end
        end
        if not bFind then
            self:removePlayerHeadByLocalSeat(i)
        end
    end
end

return PlayerView�