local PlayerModule = CF.gameClass("PlayerModule", CF.gameScriptRootPath .. ".GameBase.Modules.Player.Module")
local SxVipConfig = require("lobby.Modules.Sxvip.Config")

-- 新玩家进入协议 -- 继承，不调用 startLocationByAmap
function PlayerModule:onMsgPlayerEnter(msgData)
    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID, msgPlayerEnter.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    if playerData:getSeat() == CF.roomData:getSelfSeat() then
        CF.msgManager:sendSelfHeadUrl()
        if CF.isSupport.Sxvip then
            if
                CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.NETWORK_FIRST) and not CF.getLobbyModule("Sxvip"):isExpire() and not CF.roomData:isPlayBack() and
                    not CF.roomData:getIsSeer()
             then
                CF.TipTool.showToast("已为您开启会员网络专线，游戏更稳定！", 3)
            end
        end
    else
        playerData:setPlayerHeartTime(socket.gettime())
    end

    self:onAutoReadyEnter(playerData)

    self:dispatchEvent({name = self.EVENT_PLAYER_ENTER, msg = {numid = playerData:getNumberID()}})
    if CF.roomData and not CF.roomData:getIsSeer() then
        if CF.isSupport.Im then
            CF.getLobbyModule("Im"):reqTargetFriend(msgPlayerEnter.nNumberID)
        end
    end
end

-- 玩家离开协议
function PlayerModule:onMsgPlayerLeave(msgData)
    self._lastSignalTime = nil
end

function PlayerModule:updatePlayerScore(seat, score)
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        playerData:setPlayTypeScore(score)
    end
end

function PlayerModule:onMsgClientForwardMobileSignalMsg(msgData)
    PlayerModule.super.onMsgClientForwardMobileSignalMsg(self, msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        if self._lastSignalTime ~= nil and socket.gettime() - self._lastSignalTime > 40 then
            local srsList = XH.netEngine:getAllSRS()
            for k, _ in pairs(srsList) do
                XH.netEngine:testReconnect(k)
            end
            self._lastSignalTime = nil
            return
        end
        self._lastSignalTime = socket.gettime()
    end
end

return PlayerModule
