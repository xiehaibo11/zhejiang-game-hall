local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

function PlayerModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.GPS_MSG then
        -- self:onMsgClientForwardGPSMsg(msgData)
    else
        PlayerModule.super.onMsgClientForwardBase(self, msgData)
    end
end

function PlayerModule:onMsgClientForward(msgData)
    msgData.sID = msgData.id
    msgData.sSeat = msgData.seat
    self:onMsgClientForwardBase(msgData)
end

function PlayerModule:onMsgClientForwardGPSMsg(msgData)
    local gpsInfo = CF.StringTool.getTableByString(msgData.strData,";","=")
    local mapInfoDataTable = {}
    mapInfoDataTable["address"] = ""
    local lat = tonumber(gpsInfo["latitude"] or -1)
    if lat == 1000 then
        lat = -1
    end
    local long = tonumber(gpsInfo["longitude"] or -1)
    if long == 1000 then
        long = -1
    end
    mapInfoDataTable["latitude"] = lat
    mapInfoDataTable["longitude"] = long
    CF.roomData:setGpsInfoDataBySeat(msgData.sSeat, mapInfoDataTable)
    self:dispatchEvent( { name = self.EVENT_UPDATE_GPS_UI, msg = {seat = msgData.sSeat}})
end

--GPS 过近提示
function PlayerModule:dealGPSLimitTip()
    if CF.roomData:getHostSeat() == CF.roomData:getSelfSeat() then
        return
    end
    local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
    tipLayer:setText("当前游戏内存在实地距离很相近且网址相同的玩家,无法加入游戏！")
    tipLayer:setTouchBackGround(false)
    tipLayer:setButtonMoreEvent(
        tipLayer.ENUM_BUTTON_TYPE.OK,
        function()
            CF.game:leaveGame()
        end
    )
    tipLayer:setButtonMoreEvent(
        tipLayer.ENUM_BUTTON_TYPE.CLOSE,
        function()
            CF.game:leaveGame()
        end
    )
end

return PlayerModule