local WebVideoView = class("WebVideoView", XH.ViewBase)
local DEBUG = require("app.Config.GlobalConfig").IsDebug -- 灰度

function WebVideoView:getCSBPath()
    return "cocosStudio/hall/CSB/GameCenter/WebVideoView.csb"
end

function WebVideoView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        ["_KW_BTN_UNMUTED"] = {varName = "_unmuteBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "_toggleMute"},
        ["_KW_BTN_UNMUTED_ANI"] = {varName = "_unmuteBtnAni"},
        ["_KW_BTN_MUTED"] = {varName = "_mutedBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "_toggleMute"},
        ["_KW_WEBVIEW_PANEL"] = {varName = "_webViewPanel"}
    }
end

function WebVideoView:ctor(params)
    WebVideoView.super.ctor(self)
    self._orgMusicVolume = XH.audioManager:GetMusicVolume()
    XH.audioManager:SetMusicVolume(self._orgMusicVolume * 0.3)
    self._webView = nil
    self._isClosing = false
    self:initUI(params)
end

function WebVideoView:onEnterTransitionFinish()
    self:playEnterAni()
end

function WebVideoView:playEnterAni()
    if not self._csbRoot then
        return
    end
    local width = self:getContentSize().width
    self._csbRoot:setPositionX(width)
    self._csbRoot:runAction(cc.EaseOut:create(cc.MoveTo:create(0.3, cc.p(0, 0)), 2))
end

function WebVideoView:playExitAni(callback)
    if not self._csbRoot or self._isClosing then
        if callback then
            callback()
        end
        return
    end
    self._isClosing = true
    local width = self:getContentSize().width
    self._csbRoot:runAction(
        cc.Sequence:create(
            cc.EaseIn:create(cc.MoveTo:create(0.25, cc.p(width, 0)), 2),
            cc.CallFunc:create(
                function()
                    if callback then
                        callback()
                    end
                end
            )
        )
    )
end

function WebVideoView:close(withAni)
    if self._isClosing then
        return
    end
    if withAni then
        self:playExitAni(
            function()
                WebVideoView.super.close(self)
            end
        )
    else
        WebVideoView.super.close(self)
    end
end

-- 刷新视频内容（界面已打开时调用）
function WebVideoView:refreshVideo(url, gameId, onClose, fromAutoAd)
    self._onCloseCallback = onClose
    self._fromAutoAd = fromAutoAd
    self._gameId = gameId
    if not url then
        return
    end
    self._videoUrl = url
    self._isMuted = true
    self:_updateMuteBtnImage()
    print("playVideo: " .. self._videoUrl)
    if self._webView and not tolua.isnull(self._webView) then
        self._webView:loadHTMLString(self:buildHTML(), "")
    end
end

function WebVideoView:initUI(params)
    self._videoUrl = (params and params.url)
    self._gameId = params and params.gameId
    self._onCloseCallback = params and params.onClose
    self._fromAutoAd = params and params.fromAutoAd
    self._isMuted = true

    self._unmuteImage = params and params.unmuteImage
    print("playVideo: " .. self._videoUrl)

    self:initWebVideoPlayer()
    self:_initMuteBtn()

    if self._webView and not tolua.isnull(self._webView) then
        self._webView:loadHTMLString(self:buildHTML(), "")
    end
end

function WebVideoView:buildHTML()
    return string.format(
        [[
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width,initial-scale=1.0,maximum-scale=1.0,user-scalable=no">
<style>
* { margin:0; padding:0; box-sizing:border-box; }
html, body { width:100%%; height:100%%; overflow:hidden; background:#000; }
.video-container {
    position:relative; width:100%%; height:100%%;
    display:flex; align-items:center; justify-content:center;
}
video {
    width:100%%; height:100%%; object-fit:contain; background:#000;
}
</style>
</head>
<body>
<div class="video-container">
    <video id="vid" playsinline webkit-playsinline x5-playsinline
           preload="auto" autoplay muted
           style="cursor:pointer;"
           onclick="doAction('videoclick')"
           src="%s">
    </video>
</div>
<script>
var vid = document.getElementById('vid');
function doAction(action) {
    window.location = 'app://' + action;
}
function setMuted(m) {
    vid.muted = m;
}
vid.addEventListener('ended', function() {
    doAction('completed');
});
vid.addEventListener('error', function() {
    var c = 0;
    if (vid.error) { c = vid.error.code; }
    window.location = 'app://error?code=' + c;
});
</script>
</body>
</html>
]],
        self._videoUrl
    )
end

function WebVideoView:initWebVideoPlayer()
    if device.platform == "windows" then
        XH.TipTool.showToast("WebView 视频播放仅支持 Android/iOS 真机\n请在真机上测试此功能", 3)
        return
    end

    local panelSize = self._webViewPanel:getContentSize()
    local webView = ccexp.WebView:create()
    webView:setContentSize(cc.size(panelSize.width, panelSize.height))
    webView:setAnchorPoint(cc.p(0, 0))
    webView:setPosition(cc.p(0, 0))
    webView:setBounces(false)

    webView:setOnShouldStartLoading(
        function(sender, url)
            if string.find(url, "app://close") then
                self:close()
                return false
            elseif string.find(url, "app://videoclick") then
                self:onVideoClick()
                return false
            elseif string.find(url, "app://completed") then
                self:onVideoCompleted()
                return false
            elseif string.find(url, "app://error") then
                local code = tonumber(string.match(url, "code=(%d+)"))
                self:onVideoError(code)
                return false
            end
            return true
        end
    )

    self._webViewPanel:addChild(webView)
    self._webView = webView
end

function WebVideoView:_initMuteBtn()
    XH.SpineManager:playAni(self._unmuteBtnAni, "animation/Lobby/GameCenter/", "zzb_yxzx_laba", "animation", true)
    self:_updateMuteBtnImage()
end

function WebVideoView:_toggleMute()
    self._isMuted = not self._isMuted
    self:_updateMuteBtnImage()
    if self._webView and not tolua.isnull(self._webView) then
        self._webView:evaluateJS(string.format("setMuted(%s)", self._isMuted and "true" or "false"))
    end
end

function WebVideoView:_updateMuteBtnImage()
    if self._isMuted then
        self._unmuteBtn:setVisible(false)
        self._unmuteBtnAni:setVisible(false)
        self._mutedBtn:setVisible(true)
    else
        self._unmuteBtn:setVisible(true)
        self._unmuteBtnAni:setVisible(true)
        self._mutedBtn:setVisible(false)
    end
end

function WebVideoView:onVideoClick()
    if self._gameId then
        if self._fromAutoAd then
            XH.lobby:getModule("GameCenter"):recordGameEnteredFromAd(self._gameId)
        end
        self:close(true)
        XH.lobby:getModule("GameCenter"):startGame(self._gameId)
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031010, {page_item_id = self._gameId})
    end
end

function WebVideoView:onVideoCompleted()
    self:close(true)
end

function WebVideoView:_mediaErrorCodeToHint(code)
    if not code or code == 0 then
        return "未知错误(可能网络超时/无法连接)"
    end
    local t = {
        [1] = "用户中止加载(MEDIA_ERR_ABORTED)",
        [2] = "网络错误(MEDIA_ERR_NETWORK)",
        [3] = "解码失败(MEDIA_ERR_DECODE)",
        [4] = "格式不支持或地址无效(MEDIA_ERR_SRC_NOT_SUPPORTED)"
    }
    return t[code] or ("错误码 " .. tostring(code))
end

function WebVideoView:onVideoError(mediaErrorCode)
    local hint = self:_mediaErrorCodeToHint(mediaErrorCode)
    local vurl = self._videoUrl or ""
    print(string.format("[WebVideoView] video error mediaErrorCode=%s hint=%s url=%s", tostring(mediaErrorCode), hint, vurl))
    if DEBUG and XH.TipTool then
        XH.TipTool.showToast("视频加载失败: " .. hint, 4)
    end
    self:close()
end

function WebVideoView:onBeforeClose()
    XH.audioManager:SetMusicVolume(self._orgMusicVolume)
    if self._onCloseCallback then
        self._onCloseCallback()
        self._onCloseCallback = nil
    end
    print("playVideo: remove")
    if self._webView and not tolua.isnull(self._webView) then
        self._webView:loadHTMLString("<html><body></body></html>", "")
        self._webView:removeFromParent()
        self._webView = nil
    end
end

function WebVideoView:onTouchClose(send, eventType)
    self:close(true)
end

return WebVideoView
