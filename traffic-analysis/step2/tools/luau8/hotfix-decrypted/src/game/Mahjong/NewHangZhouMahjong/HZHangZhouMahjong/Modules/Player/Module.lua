local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.Player.Module")

-- 玩家数据更新协议
function PlayerModule:onMsgPlayerData(msgData)
    PlayerModule.super.onMsgPlayerData(self, msgData)
    local tAllPlayerScore = { }
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    for seat = 0, CF.roomData:getMaxPlayer() -1 do
        local playerData = CF.roomData:getPlayerDataBySeatId(seat)
        if playerData then
            local score = playerData:getPlayTypeScore()
            tAllPlayerScore[seat] = score
            if gameData:getFortyTablets() == true then
                tAllPlayerScore[seat] = tAllPlayerScore[seat] + gameData:getTablets()
            end
        end
    end
    CF.game:getModule("RoomInfo"):updatePlayerScore(tAllPlayerScore)
end

return PlayerModulex