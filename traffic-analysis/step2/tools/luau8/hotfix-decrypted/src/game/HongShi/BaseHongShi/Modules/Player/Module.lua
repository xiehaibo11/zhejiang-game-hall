local PlayerModule = CF.gameClass("PlayerModule", "game.GameBase.Modules.Player.Module")

PlayerModule.EVENT_MOVE_SEAT_END = "EVENT_MOVE_SEAT_END"
PlayerModule.EVENT_UPDATE_LIGHT_TEN = "EVENT_UPDATE_LIGHT_TEN"

function PlayerModule:getSubXYDealList()
    local xyTable = PlayerModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgOpenRedTen), msgClass = CF.GameProtocol.msgOpenRedTen}
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgClientForwardBase), msgClass = CF.GameProtocol.msgBaseClientForward}
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgAvatarUrl), msgClass = CF.GameProtocol.msgAvatarUrl}
    return xyTable
end

function PlayerModule:endMoveSeat(bigOpenCardLocalSeat, smallOpenCardLocalSeat)
    self:dispatchEvent({name = self.EVENT_MOVE_SEAT_END, msg = {
        bigOpenCardLocalSeat = bigOpenCardLocalSeat,
        smallOpenCardLocalSeat = smallOpenCardLocalSeat,
        -- callBack = function()
        --     CF.msgManager:sendWaitSwapSeat()
        -- end
    }})
end

function PlayerModule:onMsgOpenRedTen(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.seat)
    if localSeat == -1 then
        return
    end
    if msgData.openType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_DOUBLE or
        msgData.openType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_FANG or
        msgData.openType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_TAO then
        self:dispatchEvent( { name = self.EVENT_UPDATE_LIGHT_TEN, msg = {localSeat = localSeat, bFlag = true, nType = msgData.openType}})
    end
end

function PlayerModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForward.CF_ID.AMap then
        self:onMsgClientForwardAMap(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForward.CF_ID.WireBreak_Signal then
        self:onMsgClientForwardWireBreakSignal(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForward.CF_ID.Mobile_Signal then
        self:onMsgClientForwardMobileSignalMsg(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForward.CF_ID.GPS_MSG then
        self:onMsgClientForwardGPSMsg(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.PropAni then
       self:onMsgClientForwardPropAni(msgData)
    elseif msgData.sID == CF.GameDefine.QING_SHEN_BROADCAST_ID then
        if self.onMsgClientForwardQingShen then
            self:onMsgClientForwardQingShen(msgData)
        end
    end
end

function PlayerModule:onMsgClientForwardGPSMsg(msgData)
    self:onMsgClientForwardAMap(msgData)
end

-- 新玩家进入协议
function PlayerModule:onMsgPlayerEnter(msgData)
    PlayerModule.super.onMsgPlayerEnter(self,msgData)
    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID,msgPlayerEnter.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    if playerData:getSeat() == 0 then
        CF.roomData:setHostSeat(playerData:getSeat())
    end
end

-- 玩家离开协议
function PlayerModule:onMsgPlayerLeave(msgData)
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID, msgData.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    if playerData:getSeat() == 0 and CF.roomData:getPlayCount() == 0 and CF.roomData:isBoxRoom() then
        if playerData:getSeat() ~= CF.roomData:getSelfSeat() then
            local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK})
            tipLayer:setTouchBackGround(false)
            tipLayer:setText("房主已解散包厢，请离开包厢。")
            tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK,function()
                CF.game:leaveGame()
            end)
            tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE,function()
                CF.game:leaveGame()
            end)
            return
        else
            CF.game:leaveGame()
            return
        end
    end
    PlayerModule.super.onMsgPlayerLeave(self, msgData)
end

function PlayerModule:onMsgAvatarUrl(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.nSeat)
    if player then
        player:updataAvatarUrl(player:getAvatarUrl())
    end  
end

return PlayerModule�