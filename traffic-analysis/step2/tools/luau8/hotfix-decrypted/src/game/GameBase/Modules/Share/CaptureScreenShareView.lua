local CaptureScreenShareView = CF.gameClass("CaptureScreenShareView", CF.ViewBase)

function CaptureScreenShareView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CaptureScreenShare.csb"
end

function CaptureScreenShareView:getProxyEvents()
    return {
        { module = CF.game:getModule("Share"), eventKeyName = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW", callBack = "close" },
    }

end

function CaptureScreenShareView:getBindingInfo()
    return {
    }
end

function CaptureScreenShareView:ctor()
    CaptureScreenShareView.super.ctor(self)
end

--将窗体显示到屏幕
function CaptureScreenShareView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.DIALOG
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zorder)
    end
    return self
end

return CaptureScreenShareViewr