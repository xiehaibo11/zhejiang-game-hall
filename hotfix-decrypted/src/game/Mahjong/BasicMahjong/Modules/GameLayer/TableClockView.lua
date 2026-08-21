local TableClockView = CF.gameClass("TableClockView", CF.ViewBase)

-- 显示缩放
local TableScale = {
    [0] = 1,
    [XH.XGSJ_PROP_ID.TABLE] = 0.9,
}

-- 风位资源刷新
local TableConfig = {
    [0] = {
        ["_tableBg"] = {
            pngPath = "mah_clock_bg.png"
        },
        ["_clockTimeFnt"] = {
            fntPath = "cocosStudio/MahjongNew/GameLayer/Font/time_number-export.fnt"
        },
        ["_clockTimeFnt2"] = {
            fntPath = "cocosStudio/MahjongNew/GameLayer/Font/time_number-export.fnt"
        },
        ["_southLightNode"] = {
            pngPath = "mah_clock_north_2.png",
            pos = cc.p(103.91, 170.51)
        },
        ["_northLightNode"] = {
            pngPath = "mah_clock_south_2.png",
            pos = cc.p(102.27, 38)
        },
        ["_westLightNode"] = {
            pngPath = "mah_clock_west_2.png",
            pos = cc.p(34.59, 104.7)
        },
        ["_eastLightNode"] = {
            pngPath = "mah_clock_east_2.png",
            pos = cc.p(169.83, 104.65)
        },
        ["_imgNorth"] = {
            pngPath = "mah_clock_north_1.png",
            pos = cc.p(101, 36)
        },
        ["_imgSouth"] = {
            pngPath = "mah_clock_south_1.png",
            pos = cc.p(102, 171)
        },
        ["_imgWest"] = {
            pngPath = "mah_clock_west_1.png",
            pos = cc.p(34, 103)
        },
        ["_imgEast"] = {
            pngPath = "mah_clock_east_1.png",
            pos = cc.p(170, 103)
        },
        ["_imgLightNorth"] = {
            pngPath = "mah_clock_north.png",
            pos = cc.p(119, 60)
        },
        ["_imgLightSouth"] = {
            pngPath = "mah_clock_south.png",
            pos = cc.p(119, 60)
        },
        ["_imgLightWest"] = {
            pngPath = "mah_clock_west.png",
            pos = cc.p(59, 120)
        },
        ["_imgLightEast"] = {
            pngPath = "mah_clock_east.png",
            pos = cc.p(59, 120)
        },
    },
    [XH.XGSJ_PROP_ID.TABLE] = {
        ["_tableBg"] = {
            pngPath = "xgsj_Img_di.png"
        },
        ["_clockTimeFnt"] = {
            fntPath = "cocosStudio/MahjongNew/GameLayer/Image/CenterDis/Fnt_maj-export.fnt",
        },
        ["_clockTimeFnt2"] = {
            fntPath = "cocosStudio/MahjongNew/GameLayer/Image/CenterDis/Fnt_maj2-export.fnt",
        },
        ["_southLightNode"] = {
            pngPath = "xgsj_Img_lb.png",
            pos = cc.p(103, 173)
        },
        ["_northLightNode"] = {
            pngPath = "xgsj_iMG_ln.png",
            pos = cc.p(102, 30)
        },
        ["_westLightNode"] = {
            pngPath = "xgsj_Img_lx.png",
            pos = cc.p(31, 102.5)
        },
        ["_eastLightNode"] = {
            pngPath = "xgsj_Img_ld.png",
            pos = cc.p(174, 102.5)
        },
        ["_imgNorth"] = {
            pngPath = "xgsj_Iimg_B.png",
            pos = cc.p(101, 30)
        },
        ["_imgSouth"] = {
            pngPath = "xgsj_Iimg_n.png",
            pos = cc.p(102, 176)
        },
        ["_imgWest"] = {
            pngPath = "xgsj_Iimg_X.png",
            pos = cc.p(29, 103)
        },
        ["_imgEast"] = {
            pngPath = "xgsj_Iimg_D.png",
            pos = cc.p(175, 103)
        },
        ["_imgLightNorth"] = {
            pngPath = "xgsj_Iimg_B2.png",
            pos = cc.p(38, 39)
        },
        ["_imgLightSouth"] = {
            pngPath = "xgsj_Iimg_n2.png",
            pos = cc.p(38, 42)
        },
        ["_imgLightWest"] = {
            pngPath = "xgsj_Iimg_X2.png",
            pos = cc.p(38, 40)
        },
        ["_imgLightEast"] = {
            pngPath = "xgsj_Iimg_D2.png",
            pos = cc.p(40, 40)
        },
    }
}

function TableClockView:ctor(param)
    TableClockView.super.ctor(self)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/CenterDis/CenterDisXGSJ.plist")
    self:flushCenterDis()
    self:initUI()
end

function TableClockView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TableClockLayer.csb"
end

function TableClockView:getBindingInfo()
    return {
        ["_KW_IMG_TABLEBG"] = { varName = "_tableBg" },
        ["_KW_PANAEL_CLOCK"] = { varName = "_clockRoot" },
        ["_KW_FNT_CLOCK_TIME"] = { varName = "_clockTimeFnt" },
        ["_KW_FNT_CLOCK_TIME_2"] = { varName = "_clockTimeFnt2" },
        ["_KW_IMG_DIR_SOUTH"] = { varName = "_southLightNode" },
        ["_KW_IMG_DIR_NORTH"] = { varName = "_northLightNode" },
        ["_KW_IMG_DIR_WEST"] = { varName = "_westLightNode" },
        ["_KW_IMG_DIR_EAST"] = { varName = "_eastLightNode" },
        ["_KW_IMG_NORTH"] = { varName = "_imgNorth" },
        ["_KW_IMG_SOUTH"] = { varName = "_imgSouth" },
        ["_KW_IMG_WEST"] = { varName = "_imgWest" },
        ["_KW_IMG_EAST"] = { varName = "_imgEast" },
        ["_KW_IMG_NORTH_LIGHT"] = { varName = "_imgLightNorth" },
        ["_KW_IMG_SOUTH_LIGHT"] = { varName = "_imgLightSouth" },
        ["_KW_IMG_WEST_LIGHT"] = { varName = "_imgLightWest" },
        ["_KW_IMG_EAST_LIGHT"] = { varName = "_imgLightEast" },
    }
end

function TableClockView:getProxyEvents()
    return {
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_CLOCK", callBack = "onUpdateClock" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ROTATE_WIND_POS", callBack = "onRotateWindSeat" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHIPS_FINISHED", callBack = "onChipsAniFinshed" },
        { module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable" },
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_CLOCK_EX", callBack = "onUpdateClockEx" },
        { module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE", callBack = "onEventTableStyle" },
    }
end

function TableClockView:initUI()
    self:initRootNode()
    self:initClockUI()
end

function TableClockView:initRootNode()
    self:flushBgVisible(false)
end

function TableClockView:flushBgVisible(isShow)
    self._clockRoot:setVisible(isShow)
    self._tableBg:setVisible(isShow)
end

function TableClockView:initClockUI()
    if CF.game:getModule("GameLayer"):getClockWindSeatType() == CF.game:getModule("GameLayer").ClockWindSeatType.noWind then
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
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local bankSeat = gameData:getBankerSeat()
    local localBankerSeat = gameData:getDefaultEastWindPos()
    if bankSeat ~= CF.roomData:getMaxPlayer() then
        localBankerSeat = CF.roomData:seatToLocal(bankSeat)
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
        self:flushBgVisible(true)
    end

    --闪烁动画,名字列表需要和UI一一对应
    local dirNodeName = { "_southLightNode", "_westLightNode", "_northLightNode", "_eastLightNode" }
    for i = 1, CF.roomData:getMaxPlayer() do
        local dir = self[dirNodeName[i]]
        if dir then
            if dir:getChildByName("Image_1") then
                dir:getChildByName("Image_1"):setVisible(self._curSkin == 0)
            end
            local convertSeat = i
            if windType == CF.game:getModule("GameLayer").ClockWindSeatType.rotateByBanker then
                convertSeat = self:getSeatByBanker(i)
            elseif windType == CF.game:getModule("GameLayer").ClockWindSeatType.other then
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

        CF.UITool.createRepeateAction(clockTime, 1, function()
            tm = tm - 1
            if tm >= 0 then
                clockTime:setString(tonumber(string.format("%02d", tm)))
                if tm <= 2 and CF.soundManager then
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
        end)
    end
end

function TableClockView:flushDirNodeVisible()
    local dirNodeName = { "_southLightNode", "_westLightNode", "_northLightNode", "_eastLightNode" }
    for i = 1, CF.roomData:getMaxPlayer() do
        local dir = self[dirNodeName[i]]
        if dir then
            if dir:getChildByName("Image_1") then
                dir:getChildByName("Image_1"):setVisible(self._curSkin == 0)
            end
        end
    end
end

function TableClockView:onRotateWindSeat(event)
    self._clockRoot:setRotation(event.msg)
end

function TableClockView:onClearTable()
    self:flushBgVisible(false)
end

function TableClockView:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if not event.msg.nowState then
        self:flushBgVisible(false)
    end
end

function TableClockView:onChipsAniFinshed(event)
    self:flushBgVisible(true)
end

function TableClockView:onUpdateClockEx(event)
    local seat = event.msg.seat
    local tm = event.msg.time
    if not seat or not self._clockRoot then
        return
    end
    self:flushBgVisible(true)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local bankSeat = gameData:getBankerSeat()
    local localBankerSeat = gameData:getDefaultEastWindPos()
    if bankSeat ~= CF.roomData:getMaxPlayer() then
        localBankerSeat = CF.roomData:seatToLocal(bankSeat)
    end

    local dirNodeName = { "_southLightNode", "_westLightNode", "_northLightNode", "_eastLightNode" }
    for i = 1, CF.roomData:getMaxPlayer() do
        local dir = self[dirNodeName[i]]
        if dir then
            if dir:getChildByName("Image_1") then
                dir:getChildByName("Image_1"):setVisible(self._curSkin == 0)
            end
            if seat == ((localBankerSeat + i + 3) % 4 + 1) then
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
        end)
    end
end

function TableClockView:onEventTableStyle()
    self:flushCenterDis()
end

function TableClockView:flushCenterDis()
    self._curSkin = 0
    local config = TableConfig[0]
    if XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE) then
        config = TableConfig[XH.XGSJ_PROP_ID.TABLE]
        self._curSkin = XH.XGSJ_PROP_ID.TABLE
    end
    for k, v in pairs(config) do
        if v.fntPath and self[k] then
            self[k]:setFntFile(v.fntPath)
        elseif v.pngPath and self[k] then
            self[k]:loadTexture(v.pngPath, 1)
            self[k]:ignoreContentAdaptWithSize(true)
        end
        if v.pos and self[k] then
            self[k]:setPosition(v.pos)
        end
    end
    local size = self._tableBg:getContentSize()
    self._clockTimeFnt:setPosition(cc.p(size.width / 2, size.height / 2))
    self._clockTimeFnt2:setPosition(cc.p(size.width / 2, size.height / 2))
    self:flushDirNodeVisible()
    if TableScale[self._curSkin] then
        self._tableBg:setScale(TableScale[self._curSkin])
        self._clockRoot:setScale(TableScale[self._curSkin])
    end
end

function TableClockView:getCurSkin()
    return self._curSkin
end

return TableClockView 8  