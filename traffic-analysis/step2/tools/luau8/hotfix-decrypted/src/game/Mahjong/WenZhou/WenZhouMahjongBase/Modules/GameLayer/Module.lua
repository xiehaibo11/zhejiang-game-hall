local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    --小结束风位
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local playerCount = CF.roomData:getChairs()
    if playerCount == 2 then
        for seat = 0, playerCount - 1 do
            local fengSeat = 0
            if seat ~= msgData.nBanker then
                fengSeat = 2
            end
            winLostData:setSeatWind(seat, fengSeat)
        end
    else
        for seat = 0, 3 do
            local fengSeat = (( seat - msgData.nBanker )+ 4 ) % 4
            winLostData:setSeatWind(seat, fengSeat)
        end
    end
end

function GameModule:needDelay(xyid, protocol)
    if xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true,3.75,false
    end
    return false,0,true
end

function GameModule:onMsgClientForwardBase(msgData)
end

-- function GameModule:onMsgClientForwardOperatePass(msgData)
--     local actionType = msgData.strData
--     if CF.GameDefine.ACTION.PASS == tonumber(actionType) and CF.roomData:isPlayBack()  then
--         local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
--         self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_OPERATE_PASS, localSeat = localSeat })
--     end
-- end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

return GameModule�