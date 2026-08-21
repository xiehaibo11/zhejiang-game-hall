local ShareModule = class("ShareModule", XH.ModuleBase)
local UrlConf = require("app.Config.UrlConf")
local TaskDefine = require("app.Define.TaskDefine")

ShareModule.EVENT_LOBBY_SHARE_DATA = "EVENT_LOBBY_SHARE_DATA"

local KW_SHARE_TEXT = {
    {title = "【浙江游戏大厅】2022浙江地道棋牌下载", text = "2000万浙江人都在玩!点击立即下载>>", url = "https://www.hzbianqu.com/download/11.html"},
    {title = "浙江人都在玩的麻将-2022正版浙江游戏大厅", text = "浙江地方麻将/双扣/斗地主/跑得快等浙江棋牌玩法合集，免费下载！", url = "https://www.hzbianqu.com/download/12.html"},
    {title = "[新]2022浙江玩法麻将扑克-免费下载入口", text = "浙江游戏大厅，浙江老乡亲友都在玩！好友约战，点击立即下载>>", url = "https://www.hzbianqu.com/download/13.html"},
    {title = "浙江游戏大厅-免等待真人对战-地方棋牌手游官方版", text = "2022正版麻将双扣手游，新用户领价值6元礼包，安全下载入口>>", url = "https://www.hzbianqu.com/download/14.html"},
    {title = "浙江游戏大厅 - 2022浙江麻将双扣合集", text = "杭/宁/温/舟/台/衢/丽/绍/嘉/湖等老乡聚集地，点击免费下载>>", url = "https://www.hzbianqu.com/download/15.html"}
}

function ShareModule:ctor()
    ShareModule.super.ctor(self)
    self._shareRewardDelay = nil -- 断线重连后自动领取
end

function ShareModule:getReqConfig()
    return {
        --
        ReqLobbyShareProtocol = {reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onReqLobbyShareListCallBack},
        ReqLobbyShareAwardProtocol = {reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onReqLobbyShareAwardCallBack}
    }
end

function ShareModule:getProxyEvents()
    return {
        { module = XH.login:getModule("Login"), eventKeyName = "EVENT_RELINK_SUCCESS", callBack = "lobbyRelinkSuccess" },
    }
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
            androidUrl = UrlConf.DOWNLOAD_ADDRESS_ANDROID_TEXT[rand]
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
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_SHARE_TEXT, {text = rand})
    XH.sdkManager:startShare(shareInfo, callBack, obj)
end

-- 触发分享
function ShareModule:startShareFzb(callFunc, callFail, obj)
    self._lastTime = os.time()
    self._callFunc = callFunc
    self._failFunc = callFail
    self._callObj = obj
    if device.platform == "windows" then
        self:shareFzbFinish()
        return
    end
    self:share(self.shareFzbFinish, self)
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

function ShareModule:shareFzbFinish()
    if self:getShareInfo() == nil then
        self:clearCallFunc(true)
        return
    end
    local shareFzbData = self:getShareInfo()
    if shareFzbData == nil or shareFzbData.special == nil then
        self:clearCallFunc(true)
        return
    end
    local diffTime = os.time() - self._lastTime
    local random = math.random()
    if random < shareFzbData.special.probability and diffTime < shareFzbData.special.time then
        -- XH.TipTool.showToast("分享失败，请正确完成分享")
        XH.TipTool.showToast("分享失败，请正确分享或分享给不同的好友")
        self:clearCallFunc(false)
        return
    end
    self:clearCallFunc(true)
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
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    for _, award in pairs(data.award) do
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

return ShareModule
