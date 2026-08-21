local PlayerModule = CF.gameClass("PlayerModule", "game.GameBase.Modules.Player.Module")

function PlayerModule:onMsgPlayerData(msgData)
    local msgPlayerData = msgData
    local playerData = CF.roomData:getPlayerDataByNumberID(msgData.nNumberID)
    if not playerData or CF.roomData:isPlayBack() then
        playerData = CF.gameRequire("Data.PlayerData").new()
    end
    playerData:initFromServerData(msgPlayerData)
    CF.roomData:addPlayerData(playerData)
    if CF.selfPlayerData:getBrandID() == playerData:getBrandID() 
        and CF.selfPlayerData:getNumberID() == playerData:getNumberID() then
        if CF.roomData:isGoldRoom() and CF.selfPlayerData:getSR() ~= playerData:getPlayTypeScore() then 
            CF.getLobbyModule("Guide"):flushGoldCoin()
        end 
        CF.msgManager:setSelfSeat(playerData:getSeat())
        -- 获取财运信息
        CF.game:getModule("CaiYunPropNew"):initCaiYunInfo(true)
    end
    CF.game:getModule("CaiYunProp"):reloadGetPropsCount({playerData:getNumberID()})
end

return PlayerModule