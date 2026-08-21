local TableClockView = NG.GAME.gameClass("TableClockView", NG.ViewBase)

function TableClockView:ctor(param)
    TableClockView.super.ctor(self)
    self:initUI()
end

function TableClockView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TableClockLayer.csb"
end

function TableClockView:getBindingInfo()
    return {
        ["_KW_PANAEL_CLOCK"] = {varName = "_clockRoot"},
        ["_KW_FNT_CLOCK_TIME"] = {varName = "_clockTimeFnt"},
        ["_KW_IMG_DIR_SOUTH"] = {varName = "_southLightNode"},
        ["_KW_IMG_DIR_NORTH"] = {varName = "_northLightNode"},
        ["_KW_IMG_DIR_WEST"] = {varName = "_westLightNode"},
        ["_KW_IMG_DIR_EAST"] = {varName = "_eastLightNode"},
        ["_KW_IMG_NORTH"] = {varName = "_imgNorth"},
        ["_KW_IMG_SOUTH"] = {varName = "_imgSouth"},
        ["_KW_IMG_WEST"] = {varName = "_imgWest"},
        ["_KW_IMG_EAST"] = {varName = "_imgEast"},
        ["_KW_IMG_NORTH_LIGHT"] = {varName = "_imgLightNorth"},
        ["_KW_IMG_SOUTH_LIGHT"] = {varName = "_imgLightSouth"},
        ["_KW_IMG_WEST_LIGHT"] = {varName = "_imgLightWest"},
        ["_KW_IMG_EAST_LIGHT"] = {varName = "_imgLightEast"},
    }
end

function TableClockView:getProxyEvents()
    return {
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_UPDATE_CLOCK", callBack = "onUpdateClock"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_ROTATE_WIND_POS", callBack = "onRotateWindSeat"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_SHOW_CHIPS_FINISHED", callBack = "onChipsAniFinshed"},
        {module = NG.GAME.roomTableData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"},
        {module = NG.GAME.roomTableData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_UPDATE_CLOCK_EX", callBack = "onUpdateClockEx" },
    }
end

function TableClockView:initUI()
    self:initRootNode()
    self:initClockUI()
end

function TableClockView:initRootNode()
    self._clockRoot:setVisible(false)
end

function TableClockView:initClockUI()
    if NG.goldGame:getModule("GameMain.MahLayer"):getClockWindSeatType() == NG.goldGame:getModule("GameMain.MahLayer").ClockWindSeatType.noWind then
        self._imgNorth:setVisible(false)
        self._imgSouth:setVisible(false)
        self._imgWest:setVisible(false)
        self._imgEast:setVisible(false)
        self._imgLightNorth:setVisible(false)
        self._imgLightSouth:setVisible(false)
        self._imgLightWest:setVisible(false)
        self._imgLightEast:setVisible(false)
    end
end

function TableClockView:getSeatByBanker(index)
    local gameData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    local bankSeat = gameData:getBankerSeat()
    local localBankerSeat = gameData:getDefaultEastWindPos()
    if bankSeat ~= NG.GAME.roomTableData:getMaxPlayer() then
        localBankerSeat = NG.GAME.roomTableData:seatToLocal(bankSeat)
    end
    return (localBankerSeat + index + 3) % 4 + 1
end

--显示时钟
function TableClockView:onUpdateClock(event)
    local seat = event.msg.seat
    local tm = event.msg.time
    local windType = event.msg.windType
    if not seat or not self._clockRoot then
        return
    end

    if event.msg.show and event.msg.show == true then
        self._clockRoot:setVisible(true)
    end

    --闪烁动画,名字列表需要和UI一一对应
    local dirNodeName = {"_southLightNode", "_westLightNode", "_northLightNode", "_eastLightNode"}
    for i = 1, NG.GAME.roomTableData:getMaxPlayer() do
        local dir = self[dirNodeName[i]]
        if dir then
            local convertSeat = i
            if windType == NG.goldGame:getModule("GameMain.MahLayer").ClockWindSeatType.rotateByBanker then
                convertSeat = self:getSeatByBanker(i)
            elseif windType == NG.goldGame:getModule("GameMain.MahLayer").ClockWindSeatType.other then
                convertSeat = self:getSeatBySpecialRule(i)
            end
            dir:setVisible(seat == convertSeat)
            if dir:getNumberOfRunningActions() == 0 then
                local actionFadeOut = cc.FadeTo:create(0.5, 100)
                local actionFadeIn = cc.FadeTo:create(0.5, 255)
                dir:runAction(cc.RepeatForever:create(cc.Sequence:create(actionFadeOut, actionFadeIn)))
            end
        end
    end

    --倒计时
    local clockTime = self._clockTimeFnt
    if clockTime then
        clockTime:setString(tonumber(string.format("%02d", tm)))
        clockTime:stopAllActions()
        
        NG.UITool.createRepeateAction(clockTime, 1, function()
            tm = tm - 1
            if tm >= 0 then
                clockTime:setString(tonumber(string.format("%02d", tm)))
                 if tm <= 2 and NG.soundManager then
                     NG.soundManager:playSoundClock()
                 end
            else
                clockTime:stopAllActions()
            end     
        end )
    end
end

function TableClockView:onRotateWindSeat(event)
    self._clockRoot:setRotation(event.msg)
    self._clockTimeFnt:setRotation(-event.msg)
end

function TableClockView:onClearTable()
    self._clockRoot:setVisible(false)
end

function TableClockView:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if not event.msg.nowState then
        self._clockRoot:setVisible(false)
    end
end

function TableClockView:onChipsAniFinshed(event)
    self._clockRoot:setVisible(true)
end

function TableClockView:onUpdateClockEx(event)
    local seat = event.msg.seat
    local tm = event.msg.time
    if not seat or not self._clockRoot then
        return
    end
    self._clockRoot:setVisible(true)
    local gameData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    local bankSeat = gameData:getBankerSeat()
    local localBankerSeat = gameData:getDefaultEastWindPos()
    if bankSeat ~=  NG.GAME.roomTableData:getMaxPlayer() then
        localBankerSeat = NG.GAME.roomTableData:seatToLocal(bankSeat)
    end

    local dirNodeName = {"_southLightNode", "_westLightNode", "_northLightNode", "_eastLightNode"}
    for i = 1, NG.GAME.roomTableData:getMaxPlayer() do
        local dir = self[dirNodeName[i]]
        if dir then
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

    if seat == NG.GAME.roomTableData:getSelfSeat() then
        return
    end

    local clockTime = self._clockTimeFnt
    if clockTime then
        clockTime:setString(tonumber(string.format("%02d", tm)))
        clockTime:stopAllActions()

        NG.UITool.createRepeateAction(clockTime, 1, function()
            tm = tm - 1
            if tm >= 0 then
                clockTime:setString(tonumber(string.format("%02d", tm)))
                if tm <= 2 then
                    NG.soundManager:playSoundClock()
                end
            else
                clockTime:stopAllActions()
            end
        end )
    end
end

return TableClockView
