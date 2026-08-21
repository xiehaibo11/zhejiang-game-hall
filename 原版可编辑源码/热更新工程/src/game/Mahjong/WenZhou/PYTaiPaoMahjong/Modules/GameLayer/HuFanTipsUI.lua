
local HuFanTips = class("HuFanTips",CF.ViewBase)

function HuFanTips:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/WenZhou/HuFanTypeTips.csb"
end

function HuFanTips:getBindingInfo()
    return  {
        ["_KW_IMG_HU_FAN_TIP_BG"] = {varName="_huFanBg"},
        ["_KW_TEXT_HU_FAN"] = {varName="_huFan"}
    }
end


function HuFanTips:ctor(param)
    param = param or {}
	HuFanTips.super.ctor(self,param)
    self:initUI(param)
end

function HuFanTips:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer") , eventKeyName = "EVENT_HIDE_HU_FAN_TIPS", callBack = "close"},
    }
end

function HuFanTips:initUI(str)
    self._huFan:setText(str)
    self._huFanBg:setContentSize(cc.size(self._huFan:getContentSize().width + 140, 50))
    self._huFan:setPosition(self._huFanBg:getContentSize().width/2, self._huFanBg:getContentSize().height/2)
end

--将窗体显示到屏幕
function HuFanTips:showSelf(zOrder)
    zOrder = zOrder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    runningScene:addChild(self, zOrder + 2)
    return self
end

--移除窗口
function HuFanTips:close()
	self:removeSelf()
end

return HuFanTips