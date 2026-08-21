local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.Player.Module")

-- 玩家数据更新协议
function PlayerModule:onMsgPlayerData(msgData)
    PlayerModule.super.onMsgPlayerData(self, msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local tAllPlayerScore = clone(gameData:getAllPlayerScore())
    if gameData:getFortyTablets() == true then
        for seat = 0, CF.roomData:getMaxPlayer() - 1 do
            tAllPlayerScore[seat] = tAllPlayerScore[seat] + gameData:getTuoDiScore()
        end
    end

    CF.game:getModule("RoomInfo"):updatePlayerScore(tAllPlayerScore)
end

return PlayerModule