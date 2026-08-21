local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.Player.Module")

-- 玩家数据更新协议
function PlayerModule:onMsgPlayerData(msgData)
    PlayerModule.super.onMsgPlayerData(self, msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local tAllPlayerScore = {}
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getPlayerDataBySeatId(seat)
        if playerData then
            local score = playerData:getPlayTypeScore()
            tAllPlayerScore[seat] = score + gameData:getTablets()
        end
    end
    CF.game:getModule("RoomInfo"):updatePlayerScore(tAllPlayerScore)
end

-- 玩家进入协议
function PlayerModule:onMsgPlayerEnter(msgData)
    PlayerModule.super.onMsgPlayerEnter(self, msgData)
    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID,msgPlayerEnter.nNumberID)
    if not playerData then
        return
    end
    if CF.roomData:getSelfPlayerData() == playerData then
        CF.msgManager:sendSelfHeadUrl()
    end
    if playerData:getSeat() ~= CF.roomData:getSelfSeat() then
        local gpsInfo = CF.game:getModule("GameLayer"):getGameData():getSelfGPSInfo()
        if gpsInfo ~= "" then
            CF.msgManager:sendAMapMsg(gpsInfo)
            CF.msgManager:sendGPSMsg(gpsInfo)
            CF.msgManager:sendLocationMsg(gpsInfo)
        end
    end
end

return PlayerModule