local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

function PlayerModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.GPS_MSG then
        self:onMsgClientForwardGPSMsg(msgData)
    else
        PlayerModule.super.onMsgClientForwardBase(self, msgData)
    end
end

function PlayerModule:onMsgClientForwardGPSMsg(msgData)
    local gpsInfo = CF.StringTool.getTableByString(msgData.strData,";","=")
    local mapInfoDataTable = CF.roomData:getGpsInfoDataBySeat(msgData.sSeat) or {}
    mapInfoDataTable["address"] = mapInfoDataTable["address"] or ""
    mapInfoDataTable["latitude"] = tonumber(gpsInfo["latitude"] or -1)
    mapInfoDataTable["longitude"] = tonumber(gpsInfo["longitude"] or -1)
    CF.roomData:setGpsInfoDataBySeat(msgData.sSeat, mapInfoDataTable)
    self:dispatchEvent( { name = self.EVENT_UPDATE_GPS_UI, msg = {seat = msgData.sSeat}})
end

function PlayerModule:onMsgPlayerData(msgData)
    if msgData.szNickname2 == "" then
        msgData.szNickname2 = msgData.szNickname
    end
    PlayerModule.super.onMsgPlayerData(self, msgData)
end

return PlayerModule�