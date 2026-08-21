local BasicSysInfoLayer = NG.GAME.gameClass("BasicSysInfoLayer", NG.ViewBase)

function BasicSysInfoLayer:ctor()
    BasicSysInfoLayer.super.ctor(self)

    self:initView()
end

function BasicSysInfoLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/Basic/BasicSysInfoLayer.csb"
end

function BasicSysInfoLayer:getBindingInfo()
    return {
        ["_KW_TEXT_TIME"] = {varName = "_timeText"},
        ["_KW_IMG_POWER_VALUE"] = {varName = "_batteryValue"},
        ["_KW_IMG_NET"] = {varName = "_netIcon"},
    }
end

function BasicSysInfoLayer:onExit()
    BasicSysInfoLayer.super.onExit(self)
    --退出游戏后清理计时器，避免报错
    self._batteryValue:stopAllActions()
    self._timeText:stopAllActions()
end

function BasicSysInfoLayer:initView()
    self:initTimeNode()
    self:initBatteryNode()
    self:initNetWork()
end

function BasicSysInfoLayer:initTimeNode()
    local function getTimeFunc()
        local date = os.date("%H:%M", socket.gettime())
        self._timeText:setString(date)
        self:initNetWork()
    end
    getTimeFunc()
    NG.UITool.createRepeateAction(self._timeText, 10, getTimeFunc)
end

function BasicSysInfoLayer:initBatteryNode()
    local function getBatteryFunc()
        local batteryLevel = NG.SysTool:GetCurBattery()
        -- if batteryLevel >= 60 then
        --     self._batteryValue:setColor(cc.c3b(212, 152, 28))
        -- elseif batteryLevel >= 20 then
        --     self._batteryValue:setColor(cc.c3b(212, 152, 28))
        -- else
        --     self._batteryValue:setColor(cc.c3b(212, 28, 34))
        -- end
        self._batteryValue:setPercent(batteryLevel)
    end
    getBatteryFunc()
    NG.UITool.createRepeateAction(self._batteryValue, 300, getBatteryFunc)
end

function BasicSysInfoLayer:initNetWork()
    local netState = un.Device.getNetEnvName()
    if netState == "wifi" then
        self._netIcon:loadTexture("newgold_gamebasicwifi.png", ccui.TextureResType.plistType) 
    else
        self._netIcon:loadTexture("newgold_gamebasicyidong.png", ccui.TextureResType.plistType) 
    end
end

return BasicSysInfoLayer