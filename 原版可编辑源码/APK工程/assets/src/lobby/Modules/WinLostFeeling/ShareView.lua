local WinLostFeelingShareView = class("WinLostFeelingShareView", XH.ViewBase)

function WinLostFeelingShareView:getCSBPath()
    return "cocosStudio/hall/CSB/window/WinLostFeeling/WinLostFeelingShare.csb"
end

function WinLostFeelingShareView:getBindingInfo()
    return {
        ["_KW_UI_REWARD_ROOT"] = { varName = "_rootNode", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCloseBtn" },
        ["_KW_IMG_SHARE_BG"] = { varName = "_shareBg" },
        ["_KW_IMG_HEAD"] = { varName = "_headBg" },
        ["_KW_IMG_NAME"] = { varName = "_nameText" },
        ["_KW_IMG_WIN_COUNT"] = { varName = "_countText" },
    }
end

function WinLostFeelingShareView:ctor(gameData) 
    WinLostFeelingShareView.super.ctor(self)

    self:showUI(gameData)
    XH.SysTool.performDelayOnce(function()
        self:captureScreenAndShareToWeChat()
        self:setVisible(false)
    end, 0.5)
end

function WinLostFeelingShareView:showUI(gameData)
    if self._nameText then
        self._nameText:setString(tostring(gameData.playerName))
    end
    if self._countText then
        self._countText:setString(tostring(gameData.winCount) .. "场")
    end
    self:updateHeadImg(gameData.headUrl)
end

function WinLostFeelingShareView:updateHeadImg(url)
    if not url then return end
    if not self._headBg then return end
    if not self._headImg then
        local size = self._headBg:getContentSize()
        self._headImg = XH.RemoteImage.new()
            :setTouchEnabled(true)
            :setPosition(size.width/2, size.height/2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width, size.height)
            :addTo(self._headBg)
    end
    self._headImg:setUrl(url, false)
end

function WinLostFeelingShareView:onTouchEventCloseBtn(send, eventType)
    if eventType == ccui.TouchEventType.began then
        XH.audioManager:play("BUTTON_CLICK")
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function WinLostFeelingShareView:captureScreenAndShareToWeChat(savePicName)
    local year = os.date("%Y")
    local mouth = os.date("%m")
    local day = os.date("%d")
    local hour = os.date("%H")
    local min = os.date("%M")
    local second = os.date("%S")
    local strTime = year .. mouth .. day .. hour .. min .. second

    savePicName = savePicName or strTime ..".jpg"
    local shareToWeChat = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            return
        end
        local shareInfo = {
            textTitle = "", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 0, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = "", --分享内容 
            sharePath = "",
        }
        XH.sdkManager:startShare(shareInfo)
        self:close()
    end
    if device.platform == "ios" then
        self:captureScreenshot(shareToWeChat, savePicName)
    else
        self:captureScreenshot(shareToWeChat, savePicName)
    end
end

function WinLostFeelingShareView:captureScreenshot(callback, fileName)
    local fileFullPath = cc.FileUtils:getInstance():getWritablePath() .. "tmp/" .. fileName
    local directoryFullPath = cc.FileUtils:getInstance():getWritablePath() .. "tmp"
    if cc.FileUtils:getInstance():isDirectoryExist(directoryFullPath) then
        cc.FileUtils:getInstance():removeDirectory(directoryFullPath)
        cc.FileUtils:getInstance():createDirectory(directoryFullPath)
    else
        cc.FileUtils:getInstance():createDirectory(directoryFullPath)
    end

    local scale = 0.5
    local screenSize = cc.Director:getInstance():getWinSize()
    local render = cc.RenderTexture:create(screenSize.width * scale, screenSize.height * scale, _G.kCCTexture2DPixelFormat_RGBA8888, gl.DEPTH24_STENCIL8_OES)
    render:setKeepMatrix(true)
    render:begin()
    cc.Director:getInstance():getRunningScene():visit()
    render:endToLua()
    render:saveToFile("tmp/" .. fileName, cc.IMAGE_FORMAT_JPEG, false)
    local retry = 6
    local callbackHanlder
    callbackHanlder = function()
        local exist = cc.FileUtils:getInstance():isFileExist(fileFullPath)
        if exist then
            callback(true, fileFullPath)
        elseif retry >= 0 then
            XH.SysTool.performDelayOnce(callbackHanlder, 0.5)
            retry = retry - 1
        else
            callback(false, nil)
        end
    end
    XH.SysTool.performDelayOnce(callbackHanlder,0.5)
end

return WinLostFeelingShareView