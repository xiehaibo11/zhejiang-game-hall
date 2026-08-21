local ShareWinModule = CF.gameClass("ShareWinModule", CF.ModuleBase)
local ShareWinConfig = CF.gameRequire("Modules.ShareWin.Config")

ShareWinModule.EVENT_SHOW_SHARE_AWARD = "EVENT_SHOW_SHARE_AWARD"
ShareWinModule.EVENT_CLOSE_WIN = "EVENT_CLOSE_WIN"

function ShareWinModule:ctor()
    ShareWinModule.super.ctor(self)
    self:initData()
end

function ShareWinModule:getProxyEvents()
    return {
        { module = CF.getLobbyModule("Share"), eventKeyName = "EVENT_SHOW_SHARE_VIEW", callBack = "onShowShareWinView" },
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
    }
end

function ShareWinModule:getReqConfig()
    return {
        ReqActInfo = {reqPath = "lobby.Req.ShareWin.ReqShareWinInfo", callBack = self.onRespActInfo},
        ReqGetAward = {reqPath = "lobby.Req.ShareWin.ReqGetShareWinAward", callBack = self.onRespGetAward},
    }
end

function ShareWinModule:initData()
    self._bShow = false
    self._score = 0
    self._avalible = 0
    self._mahData = {}
    self._randContent = 0
    self._respLuckyBag = false
end

function ShareWinModule:getShowType()
    local showType = ShareWinConfig.ShowType.Value
    local gameID = CF.roomData:getGameID()
    if CF.gameSub:isMahjong(gameID) then
        if CF.roomData:isGoldRoom() or not CF.roomData:getIsGameOver() then
            showType = ShareWinConfig.ShowType.Face
        end
    end
    return showType
end

function ShareWinModule:checkNeedShow()
    do return false end
    if not CF or not CF.roomData then
        return false
    end
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    local showDate = cc.UserDefault:getInstance():getStringForKey("SHOW_SHAREWIN_DATE", "")
    if showDate == os.date("%Y%m%d") then
        return false
    end 
    local showStr = cc.UserDefault:getInstance():getStringForKey("SHOW_SHAREWIN_GAMEID_ROOMID", "")
    if showStr == CF.roomData:getGameID() .. "_" .. CF.roomData:getRoomID() and not CF.roomData:getIsGameOver() then
        return false
    end
    -- 增加支持的游戏判断
    return true
end

function ShareWinModule:setShowShareWinView(bShow, score)
    self._bShow = bShow
    self._score = score
end

function ShareWinModule:onShowShareWinView(event)
    self._respLuckyBag = true
    if self._bShow then
        -- 请求是否有奖励
        -- 一期先不要奖励，没有效果图，产运要求一个活动不同场景分享支持不同奖励，目前不支持
        -- self:reqActInfo()
        local showType = self:getShowType()
        CF.gameRequire("Modules.ShareWin.View").new({showType = showType}):showSelf()
        cc.UserDefault:getInstance():setStringForKey("SHOW_SHAREWIN_DATE", os.date("%Y%m%d"))
        cc.UserDefault:getInstance():setStringForKey("SHOW_SHAREWIN_GAMEID_ROOMID", CF.roomData:getGameID() .. "_" .. CF.roomData:getRoomID())
        self._bShow = false
        self._respLuckyBag = false
    end
end

function ShareWinModule:reqActInfo()
    local aid = self:getActivityID()
    if aid then
        self:startReq("ReqActInfo", aid, 10)
    end
end

function ShareWinModule:onRespActInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.infos and #data.infos > 0 and data.infos[1] then
            local info = data.infos[1]
            self._avalible = info.avalible
            if info.avalible > 0 then
                -- 需要隐藏奖励展示
                self:dispatchEvent({name = self.EVENT_SHOW_SHARE_AWARD, awards = info.rewards})
                self:showAwardView(info.rewards)
            end
        end
    end
end

function ShareWinModule:reqGetAward()
    local aid = self:getActivityID()
    if aid then
        self:startReq("ReqGetAward", aid, 10)
    end
end

function ShareWinModule:onRespGetAward(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        CF.msgManager:sendFlushGameSR()
        CF.msgManager:sendRequestPlayerProps()
        self:showAwardView(data.cur_rewards)
        -- todo, 再次请求数据
    end
end

function ShareWinModule:shareFzbFinish()
    do return end
    local probability = 0.7
    local time = 3
    local diffTime = os.time() - self._lastTime
    local random = math.random()
    if random < probability and diffTime < time then
        XH.TipTool.showToast("分享失败，请正确分享或分享给不同的好友")
        return
    end
    if self._avalible > 0 then
        self:reqGetAward()
    end
end

function ShareWinModule:startShareFzbLobby(shareType, jsonStr, capNode)
    self._lastTime = os.time()
    if device.platform == "windows" then
        self:shareFzbFinish()
        return
    end
    if shareType == ShareWinConfig.ShareType.Url then
        self:startShareUrl(jsonStr, self.shareFzbFinish)
    else
        self:startShareImg(self.shareFzbFinish, capNode)
    end
end

function ShareWinModule:startShareUrl(shareStr, callBack)
    if device.platform == "windows" then
        if callBack and obj then
            callBack(obj)
        end
        return
    end
    math.randomseed(tonumber(tostring(os.time()):reverse():sub(1, 6)))
    local rand = math.random(#ShareWinConfig.Content)
    self._randContent = rand
    local shareText = ShareWinConfig.Content[rand]
    -- local strURL = string.format("%s?winShareData=%s", ShareWinConfig.ShareUrl, shareStr)
    -- local strURL = string.format("%s?areaid=%d&t=%s", ShareWinConfig.ShareUrl, CF.areaData:getAreaID(), tostring(os.time()))

    local shareInfoMode = {
        textTitle = shareText.title or "浙江游戏大厅", -- 分享标题
        textTitleUrl = "", -- 微信不用
        site = "", -- 微信不用
        siteUrl = "", -- 微信不用
        imagePath = "", -- 微信不用
        url = ShareWinConfig.ShareUrl or "", -- 微信网页模式分享的链接
        type = "url", -- word是文字分享，url网页模式分享，pic分享图片
        scene = "0", -- 0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", -- 分享图片地址（分享网页模式，需要传安卓包名）
        text = shareText.text or "年度精品推荐，百万浙江玩家下载！", -- 分享内容 
        comment = "download", -- 微信不用, 用以区分直接分享下载地址和游戏内link
        iconUrl = ShareWinConfig.IconUrl,
    }
    if XH.ChannelTool.checkIsWaishengChannel() then
        shareInfoMode.textTitle = "游戏大厅"
    end
    XH.sdkManager:startShare(shareInfoMode, callBack)
end

function ShareWinModule:startShareImg(callBack, capNode)
    local savePicName = os.time() .. ".jpg"
    local shareToWeChat = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            print("captureScreen failed")
            return
        end
        print("captureScreen: " .. outputFile)
        local shareInfo = {
            textTitle = CF.SysTool:getAppName() .. os.date("%Y%m%d %H%M%S") or "", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 0, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = "", --分享内容
            sharePath = ""
        }
        CF.sdkManager:startShare(shareInfo, callBack)
    end
    local pos = capNode:convertToWorldSpace(cc.p(0, 0))
    local contentSize = capNode:getContentSize()
    local rect = cc.rect(pos.x, pos.y, contentSize.width, contentSize.height)
    XH.SysTool.captureScreenshotArea(shareToWeChat, savePicName, rect)
end

function ShareWinModule:getActivityID()
    if self._aid then
        return self._aid
    end
    local actList = CF.getLobbyModule("LuckyTask"):getActList()
    for _,info in pairs(actList) do
        if info.type == ShareWinConfig.ACTLIST then
            if self:isInActTime(info) then
                self._aid = info.aid
            end
            break
        end
    end
    return self._aid
end

-- 判断活动是否在线
function ShareWinModule:isInActTime(info)
    if not info then
        return false
    end
    local time = CF.getLobbyModule("Shop"):getServerTime()
    if time < tonumber(info["end"]) and time > tonumber(info.start) and time > tonumber(info.online) and time < tonumber(info.offline) then
        return true
    end
    return false
end

function ShareWinModule:showAwardView(data)
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    for _, award in pairs(data) do
        awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. award.count
        awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    CF.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

function ShareWinModule:getShowScore()
    return self._score
end

function ShareWinModule:getMahData()
    return self._mahData
end

function ShareWinModule:closeWin()
    self:dispatchEvent({name = self.EVENT_CLOSE_WIN})
end

-- 小结束判断是否显示分享UI
function ShareWinModule:updateShowShareWinView(selfScore, selfSeat)
    if not self:checkNeedShow() or (CF.roomData:getIsGameOver() and CF.roomData:getGameID() ~= 30579) then
        return
    end
    local lobbyID = CF.areaData:getLobbyID()
    local gameID = CF.roomData:getGameID()
    if not ShareWinConfig.SmallResult[lobbyID] or not ShareWinConfig.SmallResult[lobbyID][gameID] then
        return
    end
    local minScore = ShareWinConfig.SmallResult[lobbyID][gameID]
    if selfScore > minScore then
        self:setShowShareWinView(true, selfScore)
        if CF.gameSub:isMahjong(gameID) then
            local winlostData = CF.game:getModule("WinLost"):getWinLostData()
            local mahData = winlostData:getMahData(selfSeat)
            self._mahData = clone(mahData)
        end
        if CF.roomData:isBoxRoom() or self._respLuckyBag then
            self:onShowShareWinView()
        end
    end
end

function ShareWinModule:updateShowShareWinViewBigWinlost(score)
    if not self:checkNeedShow() then
        return
    end
    local lobbyID = CF.areaData:getLobbyID()
    local gameID = CF.roomData:getGameID()
    if not ShareWinConfig.BigWinLost[lobbyID] or not ShareWinConfig.BigWinLost[lobbyID][gameID] then
        return
    end
    local minScore = ShareWinConfig.BigWinLost[lobbyID][gameID]
    if score > 0 and score > minScore then
        self:setShowShareWinView(true, score)
        if self._respLuckyBag then
            self:onShowShareWinView()
        end
    end
end

function ShareWinModule:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if event.msg.nowState and not event.msg.oldState then
        self:initData()
    end
end

function ShareWinModule:getRandContent()
    return self._randContent
end

return ShareWinModule
�,  