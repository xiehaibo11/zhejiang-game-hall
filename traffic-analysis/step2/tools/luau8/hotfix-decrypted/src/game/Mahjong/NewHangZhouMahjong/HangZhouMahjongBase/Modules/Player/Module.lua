local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

function PlayerModule:getSubXYDealList()
    local subXYDealList = PlayerModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgClientForward), msgClass = CF.GameProtocol.msgClientForwardEx }
    
    return subXYDealList
end

--转发协议
function PlayerModule:onMsgClientForward(msgData)
    if msgData.sID == CF.GameProtocol.msgClientForwardEx.CF_ID.Location then
        self:onMsgClientForwardLocation(msgData)
    elseif msgData.sID == CF.GameProtocol.msgClientForwardEx.CF_ID.GPS_MSG then
        self:onMsgClientForwardGPSMsg(msgData)
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

function PlayerModule:onMsgClientForwardGPSMsg(msgData)
    local gpsInfo = CF.StringTool.getTableByString(msgData.strData,";","=")
    local mapInfoDataTable = CF.roomData:getGpsInfoDataBySeat(msgData.sSeat) or {}
    mapInfoDataTable["address"] = mapInfoDataTable["address"] or ""
    mapInfoDataTable["latitude"] = tonumber(gpsInfo["latitude"] or -1)
    mapInfoDataTable["longitude"] = tonumber(gpsInfo["longitude"] or -1)
    CF.roomData:setGpsInfoDataBySeat(msgData.sSeat, mapInfoDataTable)
    self:dispatchEvent( { name = self.EVENT_UPDATE_GPS_UI, msg = {seat = msgData.sSeat}})
end

-- 玩家进入协议
function PlayerModule:onMsgPlayerEnter(msgData)
    PlayerModule.super.onMsgPlayerEnter(self, msgData)
    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID,msgPlayerEnter.nNumberID)
    if not playerData then
        return
    end
    
    if playerData:getSeat() ~= CF.roomData:getSelfSeat() then
        local gpsInfo = CF.game:getModule("GameLayer"):getGameData():getSelfGPSInfo()
        local localInfo = CF.game:getModule("GameLayer"):getGameData():getSelfLocalInfo()
        if gpsInfo ~= "" then
            CF.msgManager:sendAMapMsg(gpsInfo)
            CF.msgManager:sendGPSMsg(gpsInfo)
        end
        if localInfo ~= "" then
            CF.msgManager:sendLocationMsg(localInfo)
        end
    end

end

return PlayerModule�