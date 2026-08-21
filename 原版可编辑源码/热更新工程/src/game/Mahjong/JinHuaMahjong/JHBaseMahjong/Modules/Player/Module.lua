local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")


function PlayerModule:onMsgClientForward(msgData)
    msgData.sID = msgData.id
    msgData.sSeat = msgData.seat
    if msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.GPS_MSG then
         self:onMsgClientForwardAMap(msgData)
    else
        PlayerModule.super.onMsgClientForward(self, msgData)
    end
end

function PlayerModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.GPS_MSG then --金华老包 占用了 XYID 12 作为Location
        if msgData and msgData.strData and string.match( msgData.strData,"address") then
            self:onMsgClientForwardAMap(msgData)
            return
        end
    elseif  msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.HeadUrl then
         self:onMsgClientForwardLocation(msgData)
    else
        PlayerModule.super.onMsgClientForwardBase(self, msgData)
    end
end

function PlayerModule:onMsgClientForwardLocation(msgData)
    local gpsInfo = CF.StringTool.getTableByString(msgData.strData,";","=")
    local addressInfo = gpsInfo["address"] or "获取中..."
    local totalLen =  CF.StringTool.subStringGetTotalIndex(addressInfo)
    local nLimitWidth = 40
    if totalLen > nLimitWidth then
        addressInfo = CF.StringTool.subStringUTF8(addressInfo, 1, nLimitWidth)
        addressInfo = addressInfo .."..."
    end

    local mapInfoDataTable = CF.roomData:getGpsInfoDataBySeat(msgData.sSeat) or {}
    mapInfoDataTable["address"] = addressInfo
    CF.roomData:setGpsInfoDataBySeat(msgData.sSeat, mapInfoDataTable)
    self:dispatchEvent( { name = self.EVENT_UPDATE_GPS_UI, msg = {seat = msgData.sSeat}})
end

return PlayerModule