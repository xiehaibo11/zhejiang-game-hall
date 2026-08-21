local VideoManager = class("VideoManager")

-- 追踪所有正在使用的 VideoPlayer，场景切换前需先停止并移除，避免 iOS 崩溃
function VideoManager:stopAllVideos()
    self._activePlayers = self._activePlayers or {}
    for i = #self._activePlayers, 1, -1 do
        local player = self._activePlayers[i]
        pcall(function()
            if not player then return end
            if tolua and tolua.isnull and tolua.isnull(player) then return end
            -- iOS 上原生层挂在 EAGLView 上，先隐藏再 stop，延后 remove，避免与 onPlayEvent 同栈拆视图导致卡死
            if player.setVisible then
                player:setVisible(false)
            end
            if player.stop then
                player:stop()
            end
            if player.pause then
                player:pause()
            end
            if player:getParent() then
                if player.delayRemoveFromParent then
                    player:delayRemoveFromParent()
                else
                    player:removeFromParent()
                end
            end
        end)
        self._activePlayers[i] = nil
    end
    self._activePlayers = {}
end

-- 登记播放器，便于场景切换时统一停止
local function registerPlayer(self, player)
    self._activePlayers = self._activePlayers or {}
    table.insert(self._activePlayers, player)
end

-- iOS：原生 AVPlayer 视图在 VideoPlayer::draw 里才同步 frame；冷启动后第一次进界面若未入场景就 play，或首帧未 draw，易整屏卡死（再启一次应用往往正常）
local function schedulePlayVideoPlayer(videoPlayer)
    if not videoPlayer or (tolua and tolua.isnull and tolua.isnull(videoPlayer)) then
        return
    end
    if device.platform == "ios" then
        videoPlayer:runAction(cc.Sequence:create(
            cc.DelayTime:create(0.06),
            cc.CallFunc:create(function()
                if videoPlayer and not (tolua and tolua.isnull and tolua.isnull(videoPlayer)) and videoPlayer.play then
                    videoPlayer:play()
                end
            end)
        ))
    else
        videoPlayer:play()
    end
end

local function getSuitableSize(panelSize, videoSize)
    local videoAspectRatio = videoSize.width / videoSize.height
    local containerAspectRatio = panelSize.width / panelSize.height

    local scale
    if videoAspectRatio > containerAspectRatio then
        -- 视频比容器宽。填满容器的高度。
        scale = panelSize.height / videoSize.height
    else
        -- 视频比容器窄。填满容器的宽度。
        scale = panelSize.width / videoSize.width
    end
    -- 计算缩放后的视频尺寸
    return cc.size(videoSize.width * scale, videoSize.height * scale)
end

function VideoManager:isSupportVideo(filePath)
    if not cc.FileUtils:getInstance():isFileExist(filePath) then
        return false
    end
    if ccexp.VideoPlayer == nil then
        return false
    end
    if device.platform == "ios" and not XH.SysTool:CompareToBundleVersion("1.3.43") then
        return false
    end
    if device.platform == "android" then
        -- 预加载一下
        local videoPlayer = ccexp.VideoPlayer:create()
        videoPlayer:setLooping(false)
        videoPlayer:setFileName(filePath)
        videoPlayer:play()

        print("prelaod video player")
        local runningScene = display.getRunningScene()
        runningScene:addChild(videoPlayer)
        videoPlayer:runAction(cc.Sequence:create(cc.DelayTime:create(0.1), cc.RemoveSelf:create()))
    end
    return true
end

function VideoManager:checkVideo(filePath)
    local failCallback = function(msg, attachFileName)
        local fileNames = string.split(filePath, "/")
        if attachFileName then
            msg = msg .. fileNames[#fileNames]
        end
        print(msg)
        -- callback()
    end
    if ccexp.VideoPlayer == nil then
        failCallback("不支持播放视频", true)
        return false
    end
    if filePath and not cc.FileUtils:getInstance():isFileExist(filePath) then
        failCallback("视频文件不存在", true)
        return false
    end
    if device.platform == "ios" and not XH.SysTool:CompareToBundleVersion("1.3.43") then
        return false
    end
    return true
end

function VideoManager:playVideo(panel, filePath, size, callback)
    local success = self:checkVideo(filePath)
    if not success then
        return false
    end
    local panelSize = panel:getContentSize()
    local suitableSize = getSuitableSize(panelSize, size)

    local videoPlayer = ccexp.VideoPlayer:create()
    local x, y = panel:getPosition()
    videoPlayer:setPosition(cc.p(x, y))
    videoPlayer:setAnchorPoint(0.5, 0.5)
    videoPlayer:setContentSize(cc.size(suitableSize.width, suitableSize.height)) -- 设置视频播放器大小
    videoPlayer:setUserInputEnabled(false)
    -- C++
    -- enum class StyleType
    -- {
    --     DEFAULT = 0, -- 对应iOS MPMovieControlStyleEmbedded, // 显示嵌入式控件（如播放/暂停、进度条）
    --     NONE, -- 对应iOS MPMovieControlStyleNone, // 不显示任何控件
    -- };
    videoPlayer:setStyle(1)
    -- 全屏（直接拉满，上面的setContentSize不生效）
    -- videoPlayer:setFullScreenEnabled(true)
    -- 保持宽高比，上面的setContentSize不生效）
    -- videoPlayer:setKeepAspectRatioEnabled(true)
    videoPlayer:setFileName(filePath) -- 设置要播放的视频文件名

    -- 监听视频播放完成事件（iOS 必须先 stop 再 remove，否则场景切换易崩溃）
    local function videoEventCallback(sender, eventType)
        -- Android 曾用 PAUSED 后立刻 play 规避控件暂停；iOS 上易与系统中断/用户暂停及业务回调冲突，引发界面卡住
        if eventType == ccexp.VideoPlayerEvent.PAUSED then
            sender:play()
        elseif eventType == ccexp.VideoPlayerEvent.COMPLETED then
            pcall(function() if sender.stop then sender:stop() end end)
            sender:delayRemoveFromParent()
        end
        if callback then
            callback(eventType)
        end
    end
    videoPlayer:addEventListener(videoEventCallback)

    local runningScene = display.getRunningScene()
    runningScene:addChild(videoPlayer)
    registerPlayer(self, videoPlayer)
    schedulePlayVideoPlayer(videoPlayer)

    return true, videoPlayer
end

function VideoManager:playVideoAsGif(panel, filePath, clickCallback)
    local success = self:checkVideo(filePath)
    if not success then
        return false
    end
    local panelSize = panel:getContentSize()
    local videoPlayer = ccexp.VideoPlayer:create()
    videoPlayer:setPosition(cc.p(panelSize.width / 2, panelSize.height / 2))
    videoPlayer:setAnchorPoint(0.5, 0.5)
    videoPlayer:setContentSize(cc.size(panelSize.width, panelSize.height))
    videoPlayer:setLooping(true)
    videoPlayer:setStyle(1)
    videoPlayer:setFileName(filePath)
    if device.platform == "ios" then
        videoPlayer:setUserInputEnabled(false)
    else
        local function videoEventCallback(sender, eventType)
            if eventType == ccexp.VideoPlayerEvent.PAUSED then
                sender:play()
                if clickCallback then
                    clickCallback()
                end
            elseif eventType == ccexp.VideoPlayerEvent.COMPLETED then
                pcall(function() if sender.stop then sender:stop() end end)
                sender:delayRemoveFromParent()
            end
        end
        videoPlayer:addEventListener(videoEventCallback)
    end

    panel:addChild(videoPlayer)
    registerPlayer(self, videoPlayer)
    schedulePlayVideoPlayer(videoPlayer)
    return true, videoPlayer
end


function VideoManager:playVideoRemote(panel, url, clickCallback)
    local success = self:checkVideo()
    if not success then
        return nil
    end
    local panelSize = panel:getContentSize()
    local videoPlayer = ccexp.VideoPlayer:create()
    videoPlayer:setPosition(cc.p(panelSize.width / 2, panelSize.height / 2))
    videoPlayer:setAnchorPoint(0.5, 0.5)
    videoPlayer:setContentSize(cc.size(panelSize.width, panelSize.height))
    if videoPlayer.setLooping then
        videoPlayer:setLooping(true)
    end
    if videoPlayer.setUserInputEnabled then
        videoPlayer:setUserInputEnabled(true)
    end
    if videoPlayer.setStyle then
        videoPlayer:setStyle(1)
    end
    videoPlayer:setURL(url)
    if videoPlayer.addEventListener then
        videoPlayer:addEventListener(function(sender, eventType)
            if clickCallback then
                clickCallback(sender, eventType)
            end
        end)
    end

    panel:addChild(videoPlayer)
    registerPlayer(self, videoPlayer)
    schedulePlayVideoPlayer(videoPlayer)
    return videoPlayer
end
return VideoManager
�#