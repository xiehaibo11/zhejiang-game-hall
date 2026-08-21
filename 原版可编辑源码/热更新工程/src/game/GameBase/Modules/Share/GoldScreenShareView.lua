local GoldScreenShareView = CF.gameClass("GoldScreenShareView", CF.ViewBase)

function GoldScreenShareView:ctor(filePath, isAward)
    GoldScreenShareView.super.ctor(self, filePath, isAward)
    self._KW_GAME_IMG:loadTexture(filePath, ccui.TextureResType.localType)
    self._isAward = isAward
    XH.SysTool.performWithDelayGlobal(function()
        self:startCapure()
    end, 0.2)
end

function GoldScreenShareView:startCapure()
    local savePicName = os.time() .. ".jpg"
    local shareToWeChat = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            print("captureScreen failed")
            self:closeView()
            return
        end
        CF.game:getModule("Share"):shareScreenPicToFriends(outputFile, self._isAward)
        self:closeView()
    end
    CF.SysTool.captureScreenshot(shareToWeChat, savePicName)
end

function GoldScreenShareView:closeView()
    CF.game:getModule("Share"):captureGoldScreenShareFinish()
    self:close()
end

function GoldScreenShareView:getBindingInfo()
    return {
        -- 节点
        ["_KW_GAME_IMG"] = {varName = "_KW_GAME_IMG"}
    }
end

function GoldScreenShareView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/GoldScreenShareLayer.csb"
end

function GoldScreenShareView:getProxyEvents()
    return {}
    -- return {{module = CF.game:getModule("Share"), eventKeyName = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW", callBack = "closeView"}}
end

-- 将窗体显示到屏幕
function GoldScreenShareView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.DIALOG
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zorder)
    end
    return self
end

return GoldScreenShareView
