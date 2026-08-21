local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.Player.Module")

function PlayerModule:getSubXYDealList()
    local subXYDealList = PlayerModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgRespondIsPlayerIPLimit),msgClass = CF.GameProtocol.msgRespondIsPlayerIPLimit}
    return subXYDealList
end

-- 玩家进入协议
function PlayerModule:onMsgPlayerEnter(msgData)
    PlayerModule.super.onMsgPlayerEnter(self, msgData)

    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID,msgPlayerEnter.nNumberID)
    local boxRoomMode = CF.roomData:getRoomMode()
    if playerData and playerData:getSeat() == CF.roomData:getSelfSeat() and boxRoomMode == CF.ROOM_MODE.BOXROOM then
        --请求IP限制
        CF.msgManager:sendRequestIsPlayerIPLimit()
    end
end

--是否是IP限制 ANJI DEQING
function PlayerModule:onMsgRespondIsPlayerIPLimit(msgData)
    local isIPLimit = msgData.isIPLimit
    if isIPLimit == true then
        self:dealGPSLimitTip()
    end
end

return PlayerModule