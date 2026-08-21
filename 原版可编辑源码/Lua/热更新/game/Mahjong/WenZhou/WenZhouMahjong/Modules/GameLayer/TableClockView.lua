local TableClockView = CF.gameClass("TableClockView", "game.Mahjong.BasicMahjong.Modules.GameLayer.TableClockView")

function TableClockView:getProxyEvents()
    local proxyEvents = TableClockView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_CLOCK_EX", callBack = "onUpdateClockEx" }
    return proxyEvents
end

function TableClockView:onUpdateClockEx(event)
    local seat = event.msg.seat
    local tm = event.msg.time
    if not seat or not self._clockRoot then
        return
    end
    self._clockRoot:setVisible(true)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local bankSeat = gameData:getBankerSeat()
    local localBankerSeat = gameData:getDefaultEastWindPos()
    if bankSeat ~=  CF.roomData:getMaxPlayer() then
        localBankerSeat = CF.roomData:seatToLocal(bankSeat)
    end

    local dirNodeName = {"_southLightNode", "_westLightNode", "_northLightNode", "_eastLightNode"}
    for i = 1, CF.roomData:getMaxPlayer() do
        local dir = self[dirNodeName[i]]
        if dir then
            if dir:getChildByName("Image_1") then
                dir:getChildByName("Image_1"):setVisible(self._curSkin == 0)
            end
            if seat == (( localBankerSeat + i + 3) % 4 + 1) then
                dir:setVisible(event.msg.show)
                if dir:getNumberOfRunningActions() == 0 then
                    local actionFadeOut = cc.FadeTo:create(0.5, 100)
                    local actionFadeIn = cc.FadeTo:create(0.5, 255)
                    dir:runAction(cc.RepeatForever:create(cc.Sequence:create(actionFadeOut, actionFadeIn)))
                end
            end
        end
    end

    if seat == CF.roomData:getSelfSeat() then
        return
    end

    local clockTime = self._clockTimeFnt
    if clockTime then
        clockTime:setString(tonumber(string.format("%02d", tm)))
        clockTime:stopAllActions()

        CF.UITool.createRepeateAction(clockTime, 1, function()
            tm = tm - 1
            if tm >= 0 then
                clockTime:setString(tonumber(string.format("%02d", tm)))
                if tm <= 2 then
                    CF.soundManager:playSoundClock()
                end
                clockTime:setVisible(true)
                local clockTime2 = self._clockTimeFnt2
                if clockTime2 then
                    clockTime2:setString(tonumber(string.format("%02d", tm)))
                    clockTime:setVisible(tm > 2)
                    clockTime2:setVisible(tm <= 2)
                end
            else
                clockTime:stopAllActions()
            end
        end )
    end
end

return TableClockView
