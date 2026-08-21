local PlayerModule = CF.gameClass("PlayerModule", "game.HongShi.BaseHongShi.Modules.Player.Module")
local PlayerData = CF.gameRequire("Data.PlayerData")

function PlayerModule:onMsgAvatarUrl(msgData)
    local url = msgData.url
    if url == "" then
        return
    end
    local player = CF.roomData:getPlayerDataBySeatId(msgData.nSeat)
    if player then
        player:updataAvatarUrl(url)
    end  
end

function PlayerModule:onMsgPlayerData(msgData)
    if msgData.nState == PlayerData.USER_STATE.US_SEEING then
        return
    end

    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.nSeat)
    if not playerData then
        playerData =  PlayerData.new()
    end
    playerData:initFromServerData(msgData)
    --湖州 _szNickname2 没有，用 _szNickname填充
    playerData._szNickname2 = playerData._szNickname
    CF.roomData:addPlayerData(playerData)
    if CF.selfPlayerData:getBrandID() == playerData:getBrandID() 
        and CF.selfPlayerData:getNumberID() == playerData:getNumberID() then
        CF.msgManager:setSelfSeat(playerData:getSeat())
        -- 获取财运信息
        CF.game:getModule("CaiYunPropNew"):initCaiYunInfo(true)
    end
end

return PlayerModule