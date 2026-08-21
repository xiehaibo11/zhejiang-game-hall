local PlayerModule = CF.gameClass("PlayerModule", "game.GameBase.Modules.Player.Module")

function PlayerModule:getSubXYDealList()
    local subXYDealList = PlayerModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgLocation),msgClass = CF.GameProtocol.msgLocation}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgAvatarUrl),msgClass = CF.GameProtocol.msgAvatarUrl}
    return subXYDealList
end

function PlayerModule:getLimitXYIDs()
    -- 嘉兴区协议号与基类冲突，将原先协议对应监听置空
    return {1042, 1043}
end

function PlayerModule:onMsgPlayerStart(msgData)
    PlayerModule.super.onMsgPlayerStart(self, msgData)
    CF.game:getModule("GameLayer"):initJXData()
end

function PlayerModule:onMsgClientForwardBase(msgData)
    if msgData.sID == msgData.CF_ID.GPS_MSG then
        self:onMsgClientForwardAMap(msgData)
    else
        PlayerModule.super.onMsgClientForwardBase(self, msgData)
    end
end

--gps
function PlayerModule:onMsgLocation(msgData)
    --玩家gps地理位置
    local gps = {}
    gps.sSeat = msgData.nSeat
    gps.strData = string.format("latitude=%.3f;longitude=%.3f",msgData.lat, msgData.lon)
    self:onMsgClientForwardGPSMsg(gps)
end

function PlayerModule:onMsgPlayerLeave(msgData)
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID, msgData.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    if playerData:getSeat() == 0 and playerData:getSeat() ~= CF.roomData:getSelfSeat() 
    and CF.roomData:getPlayCount() == 0 and not CF.teaHouseManager:isInTeaHouse() then
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText("房主已解散包厢，请离开包厢。")
            local leaveFunc = function()
                CF.game:leaveGame()
            end
            if leaveFunc then
                tipPlayer:setButtonMoreEvent(CF.TipLayer.ENUM_BUTTON_TYPE.OK, leaveFunc)
                tipPlayer:setButtonMoreEvent(CF.TipLayer.ENUM_BUTTON_TYPE.CLOSE, leaveFunc)
            end
            return
    end
    PlayerModule.super.onMsgPlayerLeave(self, msgData)
end

return PlayerModule