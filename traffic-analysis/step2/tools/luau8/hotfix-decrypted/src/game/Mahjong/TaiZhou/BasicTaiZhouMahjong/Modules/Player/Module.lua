local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

function PlayerModule:onMsgPlayerData(msgData)
    local msgPlayerData = msgData
    local playerData = CF.gameRequire("Data.PlayerData").new()
    playerData:initFromServerData(msgPlayerData)
    if playerData._nRight == 512 then
        local KW_ROBOT_HEAD_URL = "http://palmstatic.hzxuanming.com/Download/avatar/robot/tz/%d.jpg"
        playerData._szAvatarUrl = string.format(KW_ROBOT_HEAD_URL, playerData._nNumberID)
    end
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

-- 玩家开始协议
function PlayerModule:onMsgPlayerStart(msgData)
    PlayerModule.super.onMsgPlayerStart(self, msgData)
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID,msgData.nNumberID)
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if playerData and playerData == selfPlayerData then
        --清理生牌阶段UI
        CF.game:getModule("GameLayer"):showShengPaiCount(false)
    end
end

return PlayerModulel