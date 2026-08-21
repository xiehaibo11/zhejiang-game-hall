local ShareModule = class("ShareModule", XH.ModuleBase)
local UrlConf = require("app.Config.UrlConf")
local TaskDefine = require("app.Define.TaskDefine")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

ShareModule.EVENT_LOBBY_SHARE_DATA = "EVENT_LOBBY_SHARE_DATA"
ShareModule.EVENT_UPDATE_LUCKY_BAG_ICON = "EVENT_UPDATE_LUCKY_BAG_ICON"
ShareModule.EVENT_SHOW_SHARE_VIEW = "EVENT_SHOW_SHARE_VIEW"

local LuckyBagActID = "ActivityLuckyBag"

local luckyBagIconUrl = "https://bfly.mengyoutech.com/icon/gameShareIcon/lucky_bag.png"

local KW_SHARE_TEXT = {
    {title = "【浙江游戏大厅】2022浙江地道棋牌下载", text = "2000万浙江人都在玩!点击立即下载>>", url = "https://www.hzbianqu.com/download/11.html"},
    {title = "浙江人都在玩的麻将-2022正版浙江游戏大厅", text = "浙江地方麻将/双扣/斗地主/跑得快等浙江棋牌玩法合集，免费下载！", url = "https://www.hzbianqu.com/download/12.html"},
    {title = "[新]2022浙江玩法麻将扑克-免费下载入口", text = "浙江游戏大厅，浙江老乡亲友都在玩！好友约战，点击立即下载>>", url = "https://www.hzbianqu.com/download/13.html"},
    {title = "浙江游戏大厅-免等待真人对战-地方棋牌手游官方版", text = "2022正版麻将双扣手游，新用户领价值6元礼包，安全下载入口>>", url = "https://www.hzbianqu.com/download/14.html"},
    {title = "浙江游戏大厅 - 2022浙江麻将双扣合集", text = "杭/宁/温/舟/台/衢/丽/绍/嘉/湖等老乡聚集地，点击免费下载>>", url = "https://www.hzbianqu.com/download/15.html"}
}

local KW_SHARE_TEXT_LUCKY_BAG = {
    {title = "【浙江游戏大厅】强者胜利，沾沾福气，立刻点击领取福袋!", text = "我的牌技登峰造极，你的奖励随手可及，第一个领取额外奖励!", url = "https://www.hzbianqu.com/download/11.html"},
    {title = "【浙江游戏大厅】神级天胡操作，我的福气分享给你！", text = "今日首胜福袋已生成！不仅我能领奖励，你也能薅羊毛！", url = "https://www.hzbianqu.com/download/12.html"},
    {title = "【浙江游戏大厅】刚赢首胜，福袋新鲜出炉🔥 点链接领奖励", text = "首胜福袋剩 3 席，速抢金币钻石道具，各种奖励拿到爽！", url = "https://www.hzbianqu.com/download/13.html"},
    {title = "【浙江游戏大厅】刚领完首分奖励💰 点我看怎么拿的！", text = "房卡、钻石、记牌器… 开福袋赢随机奖励🎰 点我！", url = "https://www.hzbianqu.com/download/14.html"},
}

function ShareModule:ctor()
    ShareModule.super.ctor(self)
    self._shareRewardDelay = nil -- 断线重连后自动领取
    self._shareScene = nil      --分享的主场景
    self._shareSubScene = nil   --分享的子场景
    self._luckyBagIconShow = false
    self._actTotalTime = 12*3600
    self._shareType = 0
    self._failTime = 0
    self._isLobbyShare = false
    local configJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        self._allcfg = configJsonData
    end
end

function ShareModule:getReqConfig()
    return {
        --
        ReqLobbyShareProtocol = {reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onReqLobbyShareListCallBack},
        ReqLobbyShareAwardProtocol = {reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onReqLobbyShareAwardCallBack},
        ReqLuckyBag = {reqPath = "lobby.Req.Act.ReqLuckyBag", callBack = self.onReqLuckyBagCallBack},
        reqActDetails = { reqPath = "lobby.Req.LuckTask.ReqActDetails", callBack = self.onActDetailResp },
        reqGetShareType = { reqPath = "lobby.Req.Act.ReqGetShareType", callBack = self.onGetShareType },
    }
end

function ShareModule:getProxyEvents()
    return {
        { module = XH.login:getModule("Login"), eventKeyName = "EVENT_RELINK_SUCCESS", callBack = "lobbyRelinkSuccess" },
        { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
    }
end

-- 获取配置中心地址
function ShareModule:onGetConfiguration(data)
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        self._allcfg = configJsonData
        if configJsonData.url_share_transfer then
            UrlConf.URL_SHARE_TRANSFER = configJsonData.url_share_transfer
        end
        if configJsonData.url_share_lucky_bag then
            UrlConf.URL_SHARE_LUCKY_BAG = configJsonData.url_share_lucky_bag
        end
    end
end

function ShareModule:shareLobby(callBack, obj, shareInfo)
    if device.platform == "windows" then
        if callBack and obj then
            callBack(obj)
        end
        return
    end
    math.randomseed(tonumber(tostring(os.time()):reverse():sub(1, 6)))
    local rand = math.random(5)
    local shareText = KW_SHARE_TEXT[rand]
    local url = UrlConf.DOWNLOAD_LOBBY_SHARE
    local shareInfoMode = {
        textTitle = shareText.title or "浙江游戏大厅", -- 分享标题
        textTitleUrl = "", -- 微信不用
        site = "", -- 微信不用
        siteUrl = "", -- 微信不用
        imagePath = "", -- 微信不用
        url = url, -- 微信网页模式分享的链接
        type = "url", -- word是文字分享，url网页模式分享，pic分享图片
        scene = "0", -- 0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", -- 分享图片地址（分享网页模式，需要传安卓包名）
        text = shareText.text or "年度精品推荐，百万浙江玩家下载！", -- 分享内容 
        comment = "download" -- 微信不用, 用以区分直接分享下载地址和游戏内link
    }
    shareInfo = shareInfo or shareInfoMode
    if XH.ChannelTool.checkIsWaishengChannel() then
        shareInfo.textTitle = "游戏大厅"
        shareInfo.text = "年度精品推荐，百万浙江玩家下载！"
    end
    if self._allcfg and self._allcfg.enableNewShareCheck then
        shareInfo.from_user_id = XH.playerData:getNumberID()
    end

    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_SHARE_TEXT, {text = rand})
    XH.sdkManager:startShare(shareInfo, callBack, obj)
end

function ShareModule:share(callBack, obj, shareInfo)
    if device.platform == "windows" then
        if callBack and obj then
            callBack(obj)
        end
        return
    end
    math.randomseed(tonumber(tostring(os.time()):reverse():sub(1, 6)))
    local rand = math.random(5)
    local shareText = KW_SHARE_TEXT[rand]
    local url = UrlConf.DOWNLOAD_ADDRESS_IOS
    if device.platform == "android" then
        local androidUrl = UrlConf.DOWNLOAD_ADDRESS_ANDROID
        if UrlConf.DOWNLOAD_ADDRESS_ANDROID_TEXT then
            androidUrl = UrlConf.DOWNLOAD_ADDRESS_ANDROID_TEXT[math.random(#UrlConf.DOWNLOAD_ADDRESS_ANDROID_TEXT)]
        end
        url = androidUrl or shareText.url
    end

    local shareInfoMode = {
        textTitle = shareText.title or "浙江游戏大厅", -- 分享标题
        textTitleUrl = "", -- 微信不用
        site = "", -- 微信不用
        siteUrl = "", -- 微信不用
        imagePath = "", -- 微信不用
        url = url, -- 微信网页模式分享的链接
        type = "url", -- word是文字分享，url网页模式分享，pic分享图片
        scene = "0", -- 0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", -- 分享图片地址（分享网页模式，需要传安卓包名）
        text = shareText.text or "年度精品推荐，百万浙江玩家下载！", -- 分享内容 
        comment = "download" -- 微信不用, 用以区分直接分享下载地址和游戏内link
    }
    shareInfo = shareInfo or shareInfoMode
    if XH.ChannelTool.checkIsWaishengChannel() then
        shareInfo.textTitle = "游戏大厅"
        shareInfo.text = "年度精品推荐，百万浙江玩家下载！"
    end
    if self._allcfg and self._allcfg.enableNewShareCheck then
        shareInfo.from_user_id = XH.playerData:getNumberID()
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_SHARE_TEXT, {text = rand})
    XH.sdkManager:startShare(shareInfo, callBack, obj)
end

function ShareModule:shareByLuckyBag(callBack, obj, shareInfo)
    if device.platform == "windows" then
        if callBack and obj then
            callBack(obj)
        end
        return
    end
    math.randomseed(tonumber(tostring(os.time()):reverse():sub(1, 6)))
    local rand = math.random(#KW_SHARE_TEXT_LUCKY_BAG)
    local shareText = KW_SHARE_TEXT_LUCKY_BAG[rand]

    local shareInfoMode = {
        textTitle = shareText.title or "浙江游戏大厅", -- 分享标题
        textTitleUrl = "", -- 微信不用
        site = "", -- 微信不用
        siteUrl = "", -- 微信不用
        imagePath = "", -- 微信不用
        url = UrlConf.URL_LUCKY_BAG_SHARE or "", -- 微信网页模式分享的链接
        type = "url", -- word是文字分享，url网页模式分享，pic分享图片
        scene = "0", -- 0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", -- 分享图片地址（分享网页模式，需要传安卓包名）
        text = shareText.text or "年度精品推荐，百万浙江玩家下载！", -- 分享内容 
        comment = "download", -- 微信不用, 用以区分直接分享下载地址和游戏内link
        iconUrl = luckyBagIconUrl,
        actID = self._actID,
        code = self._luckyBagInfo.shareCode,
        shareUID =  XH.playerData:getNumberID(),
        wordsid = rand
    }
    shareInfo = shareInfo or shareInfoMode
    if XH.ChannelTool.checkIsWaishengChannel() then
        shareInfo.textTitle = "游戏大厅"
        shareInfo.text = "年度精品推荐，百万浙江玩家下载！"
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_SHARE_TEXT, {text = rand})
    XH.sdkManager:startShare(shareInfo, callBack, obj)
end

-- 触发分享
function ShareModule:startShareFzbLobby(callFunc, callFail, obj)
    self._lastTime = socket.gettime()
    self._callFunc = callFunc
    self._failFunc = callFail
    self._callObj = obj
    if device.platform == "windows" then
        self:shareFzbFinish()
        return
    end
    self._isLobbyShare = true
    self:shareLobby(self.shareFzbFinish, self)
end

function ShareModule:startShareFzb(callFunc, callFail, obj)
    self._lastTime = socket.gettime()
    self._callFunc = callFunc
    self._failFunc = callFail
    self._callObj = obj
    if device.platform == "windows" then
        self:shareFzbFinish()
        return
    end
    self._isLobbyShare = false
    self:share(self.shareFzbFinish, self)
end

function ShareModule:shareFinish()
    self:clearCallFunc(true)
end

function ShareModule:startShareLuckyBag(callFunc, callFail, obj)
    self._lastTime = os.time()
    self._callFunc = callFunc
    self._failFunc = callFail
    self._callObj = obj
    if device.platform == "windows" then
        self:shareFinish()
        return
    end
    self:shareByLuckyBag(self.shareFinish, self)
end

function ShareModule:clearCallFunc(isSuccess)
    if isSuccess and self._callFunc and self._callObj then
        self._callFunc(self._callObj)
    end
    if not isSuccess and self._failFunc and self._callObj then
        self._failFunc(self._callObj)
    end
    self._callFunc = nil
    self._failFunc = nil
    self._callObj = nil
end

function ShareModule:shareFzbFinishOld()
    if self:getShareInfo() == nil then
        self:clearCallFunc(true)
        return
    end
    local shareFzbData = self:getShareInfo()
    if shareFzbData == nil or shareFzbData.special == nil then
        self:clearCallFunc(true)
        return
    end
    local diffTime = socket.gettime() - self._lastTime
    local random = math.random()
    if random < shareFzbData.special.probability and diffTime < shareFzbData.special.time then
        -- XH.TipTool.showToast("分享失败，请正确完成分享")
        XH.TipTool.showToast("分享失败，请正确分享或分享给不同的好友")
        self:clearCallFunc(false)
        return
    end
    self:clearCallFunc(true)
end

function ShareModule:shareFzbFinish(req, type, data)
    if not self._allcfg or not self._allcfg.enableNewShareCheck then
        self:shareFzbFinishOld()
        return
    end
    if type and type ~= XH.Req.TYPE.SUCCESS then
        return
    end
    local diffTime = (socket.gettime() - self._lastTime) * 1000
    if not self._allcfg or not self._allcfg.WXShareParam then
        self:clearCallFunc(true)
        return
    end
    local param = self._allcfg.WXShareParam
    local k = param.kValue or 100
    local times = param.time or {2000, 5000, 8000}
    local tParam = param.t or {2,1.5,1,0.8}
    local t = tParam[#tParam]
    for i=1,#times do
        if diffTime <= times[i] then
            t = tParam[i]
            break
        end
    end
    print(string.format("ShareJudge diffTime:%d, k:%d n:%.2f failTime:%d", diffTime, k, t, self._failTime))
    local sucP = (diffTime * k * t) / 1000000 + self:getExtraP()
    local failTooMatch = self._failTime + 1 >= (param.maxFailTime or 3)
    local shareCount = self:getTodayShareCount()
    local shareFailStr = self:getShareContextByCount(shareCount)
    self:setTodayShareCount()
    print(string.format("ShareJudge ShareResult SuccP:%d failTooMatch:%s", sucP*100, tostring(failTooMatch)))
    local random = math.random()
    if (random < sucP or failTooMatch) then
        print("ShareJudge ShareSuccess")
        self._failTime = 0
        self:clearCallFunc(true)
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25112809, {page_item_id = "成功"})
    else
        print("ShareJudge ShareFail:" .. shareFailStr)
        self._failTime = self._failTime + 1
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25112809, {page_item_id = "失败"})
        XH.viewManager:openView("ShareFailView", nil, shareFailStr)
    end
end

-- type为1为获取，2为领奖
function ShareModule:reqLobbyShareInfo()
    local dataString = ";type=1;"
    self:startReq("ReqLobbyShareProtocol", TaskDefine.TASK_ID.TASK_TYPE_LOBBY_SHARE, TaskDefine.TASK_ID.TASK_TYPE_LOBBY_SHARE, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, dataString)
end

function ShareModule:reqLobbyShareAward()
    local dataString = ";type=2;"
    self:startReq("ReqLobbyShareAwardProtocol", TaskDefine.TASK_ID.TASK_TYPE_LOBBY_SHARE, TaskDefine.TASK_ID.TASK_TYPE_LOBBY_SHARE, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, dataString)
end

function ShareModule:onReqLobbyShareAwardCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data == nil or data == "" or data.acData == nil or data.acData == "" then
            return
        end
        self:showAwardView(cjson.decode(data.acData))
        self:reqLobbyShareInfo()
    end
end

-- 领奖
function ShareModule:showAwardView(data)
    if not data or type(data.award) ~= "table" then
        return
    end
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    for i, award in ipairs(data.award) do
        if award.propId == XH.areaData:getPropLimitedTimeRoomCardID() then
            if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                award.propCount = award.propCount  / XH.areaData:getPropLimitedTimeRoomCardRatio()
            end
        end
        awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. award.propCount
        awardInfo.image_urls[#awardInfo.image_urls + 1] = award.propImgUrl or ""
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

function ShareModule:onReqLobbyShareListCallBack(cell, type, data)
    if self._lobbyShareData == nil then
        self._lobbyShareData = {}
    end
    if type == XH.Req.TYPE.SUCCESS then
        if data == nil or data == "" or data.acData == nil or data.acData == "" then
            self:dispatchEvent({name = self.EVENT_LOBBY_SHARE_DATA})
            return
        end
        self._lobbyShareData[XH.playerData:getNumberID()] = cjson.decode(data.acData)
        self:dispatchEvent({name = self.EVENT_LOBBY_SHARE_DATA})
    end
end

function ShareModule:getShareInfo()
    -- 杭麻圈写死
    if XH.areaData:getLobbyID() == 900021 then
        return {special = {probability = 0.7, time = 4}}
    end
    if self._lobbyShareData == nil then
        return nil
    end
    return self._lobbyShareData[XH.playerData:getNumberID()]
end

function ShareModule:setShareRewardDelay()
    self._shareRewardDelay = true
end

function ShareModule:lobbyRelinkSuccess(v)
    if self._shareRewardDelay ~= nil then
        self:reqLobbyShareAward()
        self._shareRewardDelay = nil
    end
end

function ShareModule:setShareScene(scene,subScene)
    self._shareScene = scene or ""
    self._shareSubScene = subScene or ""
    if scene and subScene then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fx122301 ,{scene = scene, mini_scene = subScene, room_mode = self:getRoomMode(), game_id = self:getGameID()})
    end
end

function ShareModule:resetShareScene()
    self._shareScene = nil
    self._shareSubScene = nil
end

function ShareModule:getShareScene()
    return self._shareScene, self._shareSubScene
end

-- 判断活动是否在线
function ShareModule:isInActTimeAllTime(info)
    if not info then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time < tonumber(info["end"]) and time > tonumber(info.start) then
        return true
    end
    return false
end

function ShareModule:flushAids(data)
    self._actID = nil
    for _, info in pairs(data.act) do
        if info.type == LuckyBagActID and self:isInActTimeAllTime(info) then
            self._actID = info.aid
        end
    end
    if self._actID then
        if self._reqDetailEnd == nil then
            self:startReq("reqActDetails", { [1] = self._actID})
        end
        if UrlConf.URL_LUCKY_BAG_SHARE == nil or UrlConf.URL_LUCKY_BAG_SHARE == "" then
            XH.lobby:getModule("Lobby"):reqLuckyBagDynamicUrl()
        end
        self:reqLuckyBag()
    end
end

function ShareModule:changePropCnt(reward, keyPropId, keyCount)
    if reward[keyPropId] == XH.areaData:getPropLimitedTimeRoomCardID() then
        if XH.areaData:getPropLimitedTimeRoomCardRatio() then
            reward[keyCount] = reward[keyCount] / XH.areaData:getPropLimitedTimeRoomCardRatio()
        end
    end
end

function ShareModule:reqLuckyBag(isPop)
    if XH.isEmbeddedApp() then
        return
    end
    if self._actID == nil then
        self:dispatchEvent({name = self.EVENT_SHOW_SHARE_VIEW})
        return
    end
    if isPop and self:getRemainTime() > 0 then
        self:popLuckyBagView()
        return
    end
    self:startReq("ReqLuckyBag", {
        act_id = self._actID,
        isPop = isPop
    }, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function ShareModule:onReqLuckyBagCallBack(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._expireTime = tonumber(data.expireTime)
        local time = XH.lobby:getModule("Shop"):getServerTime()
        if self._expireTime and (self._expireTime > time) then
            for i, award in ipairs(data.bases or {}) do
                self:changePropCnt(award, "id", "count")
            end
            for i, award in ipairs(data.extras or {}) do
                self:changePropCnt(award, "id", "count")
            end
            for i, award in ipairs(data.firsts or {}) do
                self:changePropCnt(award, "id", "count")
            end
            self._luckyBagInfo = data
            self._luckyBagIconShow = true
            self:dispatchEvent({name = self.EVENT_UPDATE_LUCKY_BAG_ICON, data = {visible = true}})
            if data.isPop then
                self:popLuckyBagView()
            end
        else
            self._luckyBagIconShow = false
            self:dispatchEvent({name = self.EVENT_UPDATE_LUCKY_BAG_ICON, data = {visible = false}})
            self:dispatchEvent({name = self.EVENT_SHOW_SHARE_VIEW})
        end

        local rewards = data.rewards
        if rewards and #rewards ~= 0 then
            local awardData = {}
            for i = 1, #rewards do
                self:changePropCnt(rewards[i], "id", "count")
                awardData[i] = {}
                awardData[i].url = rewards[i].icon
                awardData[i].desc = (rewards[i].count or "") .. (rewards[i].name  or "")
            end
            XH.viewManager:openView("CommonRewardView", nil, awardData)
        end
    end
end

function ShareModule:onActDetailResp(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._aidDetails = {}
        for i = 1, #data.act do
            local success, actDetail = pcall(
            function()
                return json.decode(data.act[i].special)
            end
            )
            if success then
                self._actTotalTime = actDetail.draw_valid * 3600
                self._reqDetailEnd = true
            end
        end
    end
end

function ShareModule:popLuckyBagView()
    if self._actTotalTime - self:getRemainTime() > 30 then
        self:dispatchEvent({name = self.EVENT_SHOW_SHARE_VIEW})
        return
    end
    XH.viewManager:openView("LuckyBagView", nil, {source = "大结束"})
end

function ShareModule:getRemainTime()
    if self._expireTime == nil then
        return 0
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if self._expireTime < time then
        self._luckyBagIconShow = false
        self:dispatchEvent({name = self.EVENT_UPDATE_LUCKY_BAG_ICON, data = {visible = false}})
        return 0
    end
    return self._expireTime - time
end

function ShareModule:isLuckyBagShow()
    return self._luckyBagIconShow
end

function ShareModule:getLuckyBagInfo()
    return self._luckyBagInfo
end

function ShareModule:checkShowRedPoint()
    local shareInfo = self:getShareInfo()
    local show = not (shareInfo == nil or shareInfo.award == nil or #shareInfo.award == 0)
    return show
end

function ShareModule:getRoomMode()
    if not CF or not CF.roomData then
        return ''
    end
    return CF.roomData:getRoomMode2()
end

function ShareModule:getGameID()
    if not CF or not CF.roomData then
        return ''
    end
    return XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID()
end

function ShareModule:reqGetShareType()
    self:startReq("reqGetShareType")
end

function ShareModule:onGetShareType(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        if data.resp and data.resp.err_code == 0 then
            self._shareType = data.type or 0
        end
    end
end

function ShareModule:getExtraP()
    if not self._allcfg or not self._allcfg.WXShareParam then
        return
    end
    local param = self._allcfg.WXShareParam
    local defaultP1 = param.p1['0'] or -15
    local defaultP2 = param.p2['default'] or 0
    local shareTimes = self:getTodayShareCount()
    local p1 = param.p1[tostring(self._shareType)] or defaultP1
    local p2 = param.p2[tostring(shareTimes)] or defaultP2
    print(string.format("ShareJudge getExtraP shareTimes:%d shareType:%d p1:%d p2:%d result:%d", shareTimes, self._shareType, p1, p2, p1+p2))
    return (p1 + p2) / 100;
end

function ShareModule:getTodayShareCount()
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local todayShow = cc.UserDefault:getInstance():getStringForKey("ShareTextRate_" .. XH.playerData:getNumberID(), "")
    local count = 1
    if todayShow ~= '' then
        local todayStr = os.date("%Y%m%d", serverTime)
        local splits = string.split(todayShow, "_")
        if splits[1] == todayStr then
            count = tonumber(splits[2])
        end
    end
    return count
end

function ShareModule:setTodayShareCount()
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local todayShow = cc.UserDefault:getInstance():getStringForKey("ShareTextRate_" .. XH.playerData:getNumberID(), "")
    local todayStr = os.date("%Y%m%d", serverTime)
    local count = 2
    if todayShow ~= '' then
        local splits = string.split(todayShow, "_")
        if splits[1] == todayStr and tonumber(splits[2]) > 0 then
            count = tonumber(splits[2]) + 1
        end
    end
    cc.UserDefault:getInstance():setStringForKey("ShareTextRate_" .. XH.playerData:getNumberID(), todayStr .. "_" .. count)
end

function ShareModule:getTodayFailCount()
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local todayStr = os.date("%Y%m%d", serverTime)
    local todayShow = cc.UserDefault:getInstance():getStringForKey("ShareFail_" .. XH.playerData:getNumberID(), "")
    local count = 1
    if todayShow ~= '' then
        local splits = string.split(todayShow, "_")
        if splits[1] == todayStr and tonumber(splits[2]) > 0 then
            count = tonumber(splits[2]) + 1
        end
    end
    cc.UserDefault:getInstance():setStringForKey("ShareFail_" .. XH.playerData:getNumberID(), todayStr .. "_" .. count)
    return count
end

function ShareModule:getShareContextByCount(count)
    local contentTextConfig = self._allcfg.WXShareParam and self._allcfg.WXShareParam.contentTextConfig
    local contentText = self._allcfg.WXShareParam and self._allcfg.WXShareParam.contentText 
        or '分享失败，请重新再试|分享失败，请分享给您的好友|分享失败，请分享给不同好友|分享失败，请分享到20人的群|分享失败，请分享到不同的群'
    
    local strs = {}
    for str in string.gmatch(contentText, '([^|]+)') do
        table.insert(strs, str)
    end
    
    if contentTextConfig ~= nil and contentTextConfig.default ~= nil then
        for key, value in pairs(contentTextConfig) do
            if key ~= 'default' and count <= tonumber(key) then
                local cfg = value
                local index = cfg[math.floor(math.random() * #cfg) + 1]
                return strs[index]
            end
        end
        local index = contentTextConfig.default[math.floor(math.random() * #contentTextConfig.default) + 1]
        return strs[index]
    end
    return strs[math.floor(math.random() * #strs) + 1]
end

-- 重试分享
function ShareModule:retryShare(bRetry)
    if not bRetry then
        self:clearCallFunc(false)
        return
    end
    self._lastTime = socket.gettime()
    if self._isLobbyShare then
        self:shareLobby(self.shareFzbFinish, self)
    else
        self:share(self.shareFzbFinish, self)
    end
end

return ShareModule
