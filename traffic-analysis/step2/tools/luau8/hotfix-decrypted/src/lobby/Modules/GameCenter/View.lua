local GameCenterView = class("GameCenterView", XH.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")

local MAX_DAILY_VIDEO_AD_COUNT = 2
local VIDEO_AD_TRIGGER_DELAY = 7

function GameCenterView:getCSBPath()
    return "cocosStudio/hall/CSB/GameCenter/View.csb"
end

function GameCenterView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        ["_KW_BTN_TASK"] = {varName = "_taskBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchTaskBtn"},
        ["_KW_BTN_TASK_ANI"] = {varName = "_taskBtnAni"},
        ["_KW_BTN_GIFT"] = {varName = "_giftBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchGiftBtn"},
        ["_KW_BTN_GIFT_ANI"] = {varName = "_giftBtnAni"},
        ["_KW_GAME_LIST_TOTAL"] = {varName = "_gameListTotal"},
        ["_KW_GAME_LIST_BIG"] = {varName = "_gameListBig"},
        ["_KW_GAME_LIST_MID"] = {varName = "_gameListMid"},
        ["_KW_GAME_LIST_SMALL"] = {varName = "_gameListSmall", type = XH.UI_TYPE.PACKAGEVIEW},
        ["_KW_GAME_LIST"] = {varName = "_gameListView"},
        ["_KW_GAME_NODE_MODEL"] = {varName = "_gameItemModel"},
        ["_KW_GAME_NODE_MODEL_BIG"] = {varName = "_gameItemModelBig"},
        ["_KW_GAME_NODE_MODEL_MID"] = {varName = "_gameItemModelMid"},
        ["_KW_GAME_NODE_MODEL_SMALL"] = {varName = "_gameItemModelSmall"},
        ["_KW_SCALE_PANEL"] = {varName = "_scalePanel"},
        ["_KW_RED_POINT"] = {varName = "_btnDailyAwardRed"},
        ["_KW_ROOT_LAYER"] = {varName = "_KW_ROOT_LAYER"}
    }
end

function GameCenterView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("GameCenter"), eventKeyName = "EVENT_GAME_LIST_UPDATED", callBack = "onGameListUpdated"},
        {module = XH.lobby:getModule("GameCenter"), eventKeyName = "EVENT_RED_POINT_CHANGED", callBack = "updateRedPoint"}
    }
end

function GameCenterView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, rootNode = nil, popNode = self._KW_ROOT_LAYER, btnList = {}}
end

function GameCenterView:ctor()
    GameCenterView.super.ctor(self)
    self._videoAdTriggeredThisSession = false -- 本次会话是否已经触发过视频广告
    self._videoAdTimerScheduleID = nil -- 视频广告定时器ID
    self:initUI()
end

function GameCenterView:initUI()
    XH.lobby:getModule("GameCenter"):requestData()
    self:adaptUI()
    self:initGameList()
    self:updateRedPoint()
    self:initAnimation()
end

function GameCenterView:adaptUI()
    if display.width / display.height <= 16 / 9 then
        self._scalePanel:setScale(0.86)
    end
end

function GameCenterView:initAnimation()
    XH.SpineManager:playAni(self._giftBtnAni, "animation/Lobby/GameCenter/", "zzb_yxzx_lbzx", "animation", true)
    XH.SpineManager:playAni(self._taskBtnAni, "animation/Lobby/GameCenter/", "zzb_yxzx_mrrw", "animation", true)
end

function GameCenterView:initGameList()
    local gameList = XH.lobby:getModule("GameCenter"):getGameList()
    if not gameList or #gameList == 0 then
        return
    end

    local gameListConfig = {
        [1] = {list = self._gameListBig, model = self._gameItemModelBig},
        [2] = {list = self._gameListMid, model = self._gameItemModelMid},
        [3] = {list = self._gameListMid, model = self._gameItemModelMid},
        [4] = {list = self._gameListMid, model = self._gameItemModelMid}
    }

    self._gameItemModelBig:setVisible(false)
    self._gameItemModelMid:setVisible(false)
    self._gameItemModelSmall:setVisible(false)
    self._gameListBig:removeAllChildren()
    self._gameListMid:removeAllChildren()

    for i, game in ipairs(gameList) do
        if gameListConfig[i] == nil then
            break
        end
        local model = gameListConfig[i].model
        local list = gameListConfig[i].list
        local node = model:clone()
        node:setVisible(true)
        list:addChild(node)
        self:_onGameItemUpdate(node, game)
        node:addClickEventListener(
            function()
                self:_onGameItemClick(game)
            end
        )
    end

    local gameListNew = clone(gameList)
    for _ = 1, math.min(4, #gameListNew) do
        table.remove(gameListNew, 1)
    end
    local totalHeight = self._gameListTotal:getContentSize().height
    local bigRow = math.ceil(1)
    local bigWidth = bigRow * self._gameItemModelBig:getContentSize().width
    local midRow = math.max(0, math.ceil(math.min(4, #gameList)) - 1)
    local midWidth = midRow * self._gameItemModelMid:getContentSize().width
    self._gameListMid:setContentSize(cc.size(midWidth, totalHeight))
    local smallRow = math.ceil(#gameListNew / 2)
    local smallSize = cc.size(smallRow * self._gameItemModelSmall:getContentSize().width, totalHeight)
    local totalWidth = bigWidth + midWidth + self._gameItemModelSmall:getContentSize().width / 2
    local scale = math.min(1, display.width / totalWidth)
    self._gameListTotal:setInnerContainerSize(cc.size((smallSize.width + midWidth + bigWidth + 80) * scale, totalHeight))
    self._gameListTotal:setScrollBarEnabled(false)

    -- 先设置尺寸，以免后面还需要刷新一次界面
    self._gameListSmall:setContentSize(smallSize)
    self._gameListSmall:setContentSizeNew(smallSize)
    self._gameListSmall:setPreciseClick(true)
    self._gameListSmall:setItemModel(self._gameItemModelSmall)
    self._gameListSmall:setItemUpdateEvent(handler(self, self.onGameItemUpdate))
    self._gameListSmall:setItemClickEvent(handler(self, self.onGameItemClick))
    self._gameListSmall:setDirection(cc.SCROLLVIEW_DIRECTION_HORIZONTAL)
    self._gameListSmall:setData(gameListNew)
    self._gameListSmall:setTouchEnabled(false)

    self._gameListTotal:setScale(scale)
end

function GameCenterView:onGameListUpdated()
    self:initGameList()
    self:_startVideoAdTimer()
end

function GameCenterView:updateRedPoint()
    local redPointStatus = XH.lobby:getModule("GameCenter"):getRedPointStatus()
    if redPointStatus then
        self._btnDailyAwardRed:setVisible(true)
    else
        self._btnDailyAwardRed:setVisible(false)
    end
end

function GameCenterView:onGameItemUpdate(item, data, index)
    if not item or not data or not data[index] then
        return
    end
    local gameData = data[index]
    self:_onGameItemUpdate(item, gameData)
end

function GameCenterView:_onGameItemUpdate(item, gameData)
    item:setVisible(true)
    local icon = item:getChildByName("Icon")
    if icon then
        if not icon.__remoteImage then
            local size = icon:getContentSize()
            icon.__remoteImage = XH.RemoteImage.new()
            icon.__remoteImage:setTouchEnabled(false)
            icon.__remoteImage:setPosition(size.width / 2, size.height / 2)
            icon.__remoteImage:ignoreContentAdaptWithSize(false)
            icon.__remoteImage:setContentSize(size.width, size.height)
            icon.__remoteImage:addTo(icon)
        end
        icon.__remoteImage:setUrl(gameData.image or "", true)
    end
    local tagBg = item:getChildByName("TagBg")
    if tagBg then
        local tagBgAni = tagBg:getChildByName("TagBgAni")
        if tagBgAni then
            XH.SpineManager:playAni(tagBgAni, "animation/Lobby/GameCenter/", "zzb_yxzx_remen", "animation", true)
        end
        tagBg:setVisible(gameData.tag and gameData.tag ~= "")
        local tagLabel = tagBg:getChildByName("Tag")
        if tagLabel then
            tagLabel:setString(gameData.tag or "")
        end
    end
    local playVideoBtn = item:getChildByName("PlayVideo")
    if playVideoBtn then
        local playVideoBtnAni = playVideoBtn:getChildByName("PlayVideoAni")
        if playVideoBtnAni then
            XH.SpineManager:playAni(playVideoBtnAni, "animation/Lobby/GameCenter/", "zzb_yxzx_shipin", "animation", true)
        end
        local videoUrl = gameData.videoUrl
        if videoUrl and videoUrl ~= "" then
            playVideoBtn:setVisible(true)
            playVideoBtn:addClickEventListener(
                function()
                    self:openVideoView(videoUrl, gameData.gameId, false)
                    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031005, {page_item_id = "播放视频", block_label = "游戏区入口"})
                end
            )
        else
            playVideoBtn:setVisible(false)
        end
    end
end

function GameCenterView:onGameItemClick(item, data, index)
    local gameData = data and data[index]
    if not gameData then
        return
    end
    self:_onGameItemClick(gameData)
end

function GameCenterView:_onGameItemClick(gameData)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031005, {page_item_id = gameData.gameId, block_label = "游戏区入口"})
    self:onStartGame(gameData.gameId)
end

function GameCenterView:openVideoView(videoUrl, gameId, fromAutoAd)
    self:_stopVideoAdTimer()
    local onClose = function()
        self:_onVideoViewClosed()
    end
    local sceneTag = XH.SceneManager:getInstance():getTopSceneTag()
    local videoView = XH.viewManager:getView(sceneTag, "GameCenterWebVideoView")
    if not videoView then
        XH.viewManager:openView(
            "GameCenterWebVideoView",
            nil,
            {
                url = videoUrl,
                gameId = gameId,
                onClose = onClose,
                fromAutoAd = fromAutoAd,
                muteImage = "cocosStudio/hall/CSB/GameCenter/Image/GameCenter_Btn_jybf.png",
                unmuteImage = "cocosStudio/hall/CSB/GameCenter/Image/GameCenter_Btn_gbsy.png"
            }
        )
    else
        videoView:refreshVideo(videoUrl, gameId, onClose, fromAutoAd)
    end
end

function GameCenterView:_onVideoViewClosed()
    self:_startVideoAdTimer()
end

function GameCenterView:onStartGame(gameId)
    if not gameId then
        return
    end
    self:onCloseVideoView()
    XH.lobby:getModule("GameCenter"):startGame(gameId)
end

function GameCenterView:onCloseVideoView()
    local sceneTag = XH.SceneManager:getInstance():getTopSceneTag()
    local videoView = XH.viewManager:getView(sceneTag, "GameCenterWebVideoView")
    if videoView then
        videoView:close()
    end
end

function GameCenterView:onEnterTransitionFinish()
    GameCenterView.super.onEnterTransitionFinish(self)
    self:_initVideoAdTouchListener()
    self:_startVideoAdTimer()
end

function GameCenterView:onBeforeClose()
    self:onCloseVideoView()
end

function GameCenterView:onExit()
    GameCenterView.super.onExit(self)
    self:_removeVideoAdTouchListener()
    self:_stopVideoAdTimer()
end

function GameCenterView:_initVideoAdTouchListener()
    if self._videoAdTouchListener then
        return
    end
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(false)
    listener:registerScriptHandler(
        function(touch, event)
            if self and self._resetVideoAdTimer then
                self:_resetVideoAdTimer()
            end
            return false
        end,
        cc.Handler.EVENT_TOUCH_BEGAN
    )
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(listener, -1)
    self._videoAdTouchListener = listener
end

function GameCenterView:_removeVideoAdTouchListener()
    if self._videoAdTouchListener then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._videoAdTouchListener)
        self._videoAdTouchListener = nil
    end
end

function GameCenterView:_hasVideoAd()
    local config = XH.lobby:getModule("GameCenter"):getVideoAdConfig()
    if not config then
        return false
    end
    return (config.tagged and #config.tagged > 0) or (config.untagged and #config.untagged > 0)
end

function GameCenterView:_startVideoAdTimer()
    self:_stopVideoAdTimer()
    if not self:_hasVideoAd() then
        return
    end
    local delay = VIDEO_AD_TRIGGER_DELAY
    self._videoAdTimerScheduleID =
        self:performWithDelay(
        function()
            self._videoAdTimerScheduleID = nil
            self:_tryShowVideoAd()
        end,
        delay
    )
end

function GameCenterView:_stopVideoAdTimer()
    if self._videoAdTimerScheduleID then
        self:_removeAllScheduleID(self._videoAdTimerScheduleID)
        self._videoAdTimerScheduleID = nil
    end
end

function GameCenterView:_resetVideoAdTimer()
    if self._videoAdTriggeredThisSession then
        return
    end
    self:_startVideoAdTimer()
end

local VIDEO_AD_STORAGE_DATE_KEY = "GameCenter_VideoAd_Date"
local VIDEO_AD_STORAGE_COUNT_KEY = "GameCenter_VideoAd_Count"

function GameCenterView:_canShowVideoAd()
    if self._videoAdTriggeredThisSession then
        return false
    end
    if not self:_hasVideoAd() then
        return false
    end
    local maxDaily = MAX_DAILY_VIDEO_AD_COUNT
    local today = os.date("%Y-%m-%d", os.time())
    local storedDate = cc.UserDefault:getInstance():getStringForKey(VIDEO_AD_STORAGE_DATE_KEY .. XH.playerData:getNumberID(), "")
    local storedCount = cc.UserDefault:getInstance():getIntegerForKey(VIDEO_AD_STORAGE_COUNT_KEY .. XH.playerData:getNumberID(), 0)
    if storedDate ~= today then
        return true
    end
    return storedCount < maxDaily
end

function GameCenterView:_recordVideoAdShown()
    self._videoAdTriggeredThisSession = true
    local today = os.date("%Y-%m-%d", os.time())
    local storedDate = cc.UserDefault:getInstance():getStringForKey(VIDEO_AD_STORAGE_DATE_KEY .. XH.playerData:getNumberID(), "")
    local storedCount = cc.UserDefault:getInstance():getIntegerForKey(VIDEO_AD_STORAGE_COUNT_KEY .. XH.playerData:getNumberID(), 0)
    if storedDate ~= today then
        storedDate = today
        storedCount = 0
    end
    storedCount = storedCount + 1
    cc.UserDefault:getInstance():setStringForKey(VIDEO_AD_STORAGE_DATE_KEY .. XH.playerData:getNumberID(), storedDate)
    cc.UserDefault:getInstance():setIntegerForKey(VIDEO_AD_STORAGE_COUNT_KEY .. XH.playerData:getNumberID(), storedCount)
end

function GameCenterView:_filterCandidates(group, enteredSet)
    local candidates = {}
    if not group then
        return candidates
    end
    for _, item in ipairs(group) do
        if item.videoUrl ~= nil and item.videoUrl ~= "" and not enteredSet[tostring(item.gameId or "")] then
            table.insert(candidates, item)
        end
    end
    return candidates
end

function GameCenterView:_pickVideoAdItem()
    local config = XH.lobby:getModule("GameCenter"):getVideoAdConfig()
    if not config then
        return nil
    end
    local enteredSet = XH.lobby:getModule("GameCenter"):getEnteredGameIdsToday()
    local candidates = self:_filterCandidates(config.tagged, enteredSet)
    if #candidates == 0 then
        candidates = self:_filterCandidates(config.untagged, enteredSet)
    end
    if #candidates == 0 then
        return nil
    end
    local idx = math.random(1, #candidates)
    return candidates[idx]
end

function GameCenterView:_tryShowVideoAd()
    if not self:_canShowVideoAd() then
        return
    end
    local item = self:_pickVideoAdItem()
    if not item or not item.videoUrl then
        return
    end
    self:_recordVideoAdShown()
    self:openVideoView(item.videoUrl, item.gameId, true)
end

function GameCenterView:onTouchClose(send, eventType)
    self:close()
end

function GameCenterView:onTouchTaskBtn(send, eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cy26031005, {page_item_id = "每日任务", block_label = "每日任务"})
    XH.viewManager:openView("GameCenterTaskView")
end

function GameCenterView:onTouchGiftBtn(send, eventType)
    XH.lobby:getModule("Lobby"):showH5room()
end

return GameCenterView
�>