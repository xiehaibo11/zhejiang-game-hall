local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

-- 玩家开始协议
-- function PlayerModule:onMsgPlayerStart(msgData)
--     local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID, msgData.nNumberID)

--     local selfPlayerData = CF.roomData:getSelfPlayerData()

--     if playerData and playerData == selfPlayerData then
--         CF.game:getModule("GameLayer"):getGameData():initEveryTimesDatas()
--         CF.game:getModule("WinLost"):getWinLostData():initDatas()
--     end
-- end

function PlayerModule:onMsgAvatarUrl(msgData)

end


return PlayerModule�