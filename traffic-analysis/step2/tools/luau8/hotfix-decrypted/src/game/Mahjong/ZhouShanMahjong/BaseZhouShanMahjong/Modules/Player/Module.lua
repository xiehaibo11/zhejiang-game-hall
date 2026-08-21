local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")
local KW_ROBOT_HEAD_URL = "https://palmstatic.hzxuanming.com/Download/avatar/robot/bfzs/%d.jpg"
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

-- 玩家数据更新协议
function PlayerModule:onMsgPlayerData(msgData)
    local msgPlayerData = msgData
    local playerData = CF.gameRequire("Data.PlayerData").new()
    playerData:initFromServerData(msgPlayerData)
    if playerData._nRight == 512 then
        playerData._szAvatarUrl = string.format(KW_ROBOT_HEAD_URL, playerData._nNumberID)
    end
    CF.roomData:addPlayerData(playerData)
    if CF.selfPlayerData:getBrandID() == playerData:getBrandID() 
        and CF.selfPlayerData:getNumberID() == playerData:getNumberID() then
        CF.msgManager:setSelfSeat(playerData:getSeat())
        -- 获取财运信息
        CF.game:getModule("CaiYunPropNew"):initCaiYunInfo(true)
    end

    CF.game:getModule("CaiYunProp"):reloadGetPropsCount({playerData:getNumberID()})
end

-- 玩家头像URL接收协议
function PlayerModule:onMsgAvatarUrl(msgData)
    local msgAvatarUrl = msgData

    local url = msgAvatarUrl.avatarUrl
    if url == "" then
        return
    end
    local playerData = CF.roomData:getPlayerDataBySeatId(msgAvatarUrl.seat)
    if playerData then
        if playerData._nRight == 512 then
            url = string.format(KW_ROBOT_HEAD_URL, playerData._nNumberID)
        end
        playerData:updataAvatarUrl(url)
    end
end

-- 新玩家进入协议
function PlayerModule:onMsgPlayerEnter(msgData)
    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID,msgPlayerEnter.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    if playerData:getSeat() ~= CF.roomData:getSelfSeat() then
        playerData:setPlayerHeartTime(socket.gettime())
    end

    if playerData:getSeat() == CF.roomData:getSelfSeat() then
        CF.sdkManager:startLocationByAmap(CF.sdkManager.AmapAccuracy.LOW)
        if CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.NETWORK_FIRST) and not CF.getLobbyModule("Sxvip"):isExpire() then
            CF.TipTool.showToast("已为您开启会员网络专线，游戏更稳定！", 3)
        end
    end

    self:onAutoReadyEnter(playerData)

    self:dispatchEvent( { name = self.EVENT_PLAYER_ENTER , msg = {numid = playerData:getNumberID()}})
    if CF.roomData and not CF.roomData:getIsSeer() then
        CF.getLobbyModule("Im"):reqTargetFriend(msgPlayerEnter.nNumberID)
    end
end

return PlayerModule�
