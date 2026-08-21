local DebugTipLayer = class("DebugTipLayer", XH.ViewBase)

function DebugTipLayer:getCSBPath()
    return "cocosStudio/Common/CSB/Debug/DebugTipLayer.csb"
end

function DebugTipLayer:getBindingInfo()
    return {
        ["_KW_TEXT_NOTICE"] = { varName = "_textNotice" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
    }
end

function DebugTipLayer:onTouchEventClose()
    self:close()
end

function DebugTipLayer:setText(noticeStr)
    self._textNotice:setText(noticeStr)
end

--显示窗口
function DebugTipLayer:showSelf(zOrder)
    local zorder = zOrder or XH.ZORDER.TIPLAYER
	local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)
	end
end

return DebugTipLayer=