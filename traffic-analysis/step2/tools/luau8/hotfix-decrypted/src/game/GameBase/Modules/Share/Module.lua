local ShareModule = CF.gameClass("ShareModule", CF.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

ShareModule.EVENT_CLOSE_CAPTURE_SCREEN_VIEW = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW"
ShareModule.EVENT_SHARE_AWARD_GOT = "EVENT_SHARE_AWARD_GOT"
ShareModule.EVENT_SHARE_HIDE_UNUSE_BTNS = "EVENT_SHARE_HIDE_UNUSE_BTNS"
ShareModule.EVENT_FLUSH_SHARE_AWARD_COUNT = "EVENT_FLUSH_SHARE_AWARD_COUNT"
ShareModule.EVENT_GET_SHARE_AWARD_SUCCESS = "EVENT_GET_SHARE_AWARD_SUCCESS"

ShareModule.GoldRoomShareResp = {
    SUCCESS = 0, -- 成功
    COUNT_LIMIT = 1, -- 领取次数上限
    GAME_INVALID = 2, -- 对局校验失败
    ERROR = 3 -- 其他错误
}

ShareModule.GoldRoomShareType = {
    DOUBLE_WIN = 0, -- 双倍胜利
    AVOID_DEFEAT = 1 -- 免败
}

function ShareModule:getReqConfig()
    return {
        --
        ReqShareAwardGot = {reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onResqShareAwardGot},
        ReqGoldShareReward = {reqPath = "app.Req.ReqGoldShareReward", callBack = self.onReqGoldShareReward},
        ReqGoldShareRewardCount = {reqPath = "app.Req.ReqGoldShareRewardCount", callBack = self.onReqGoldShareRewardCount}
    }
end

function ShareModule:startShare(shareType, totalResultData, needKongCount)
    self._shareType = shareType
    self._totalResultData = totalResultData
    self._needKongCount = needKongCount
    if not CF.sdkManager:isInstallWeChat() then
        self:doShareCopy()
        return
    end
    if CF.configerManager.getIsOnlyWXShare and CF.configerManager:getIsOnlyWXShare() then
        self:doShareWX(shareType)
        return
    end
    self:justDoCopyShare(shareType)
    CF.gameRequire("Modules.Share.View").new({shareType = shareType}):showSelf()
end

function ShareModule:resetShareData()
    self._shareType = nil
    self._totalResultData = nil
    self._needKongCount = false
end

function ShareModule:doShareWX(shareType)
    shareType = shareType or self._shareType
    if not shareType then
        return
    end
    if shareType == CF.GameDefine.SHARE_SELECT.URL then
        CF.shareManager:startUrlShare()
    elseif shareType == CF.GameDefine.SHARE_SELECT.TEXT then
        CF.shareManager:startCopyShare()
    elseif shareType == CF.GameDefine.SHARE_SELECT.PIC then
        self:captureScreenAndShareToWeChat()
    end
    self:resetShareData()
end

function ShareModule:justDoCopyShare(shareType)
    CF.getLobbyModule("Share"):setShareScene(CF.teaHouseManager:isInTeaHouse() and "比赛场" or "包厢", "房间复制房间号")
    local str = ""
    if shareType == CF.GameDefine.SHARE_SELECT.TEXT then
        str = CF.shareManager:createNormalCopyInfo()
    elseif shareType == CF.GameDefine.SHARE_SELECT.PIC then
        if self._needKongCount then
            str = CF.shareManager:createTotoalResultCopyInfo(self._totalResultData, self._needKongCount)
        else
            str = CF.shareManager:createTotoalResultCopyInfo(self._totalResultData)
        end
    end
    -- 加入中转URL
    local UrlConf = require("app.Config.UrlConf")
    local scene, mini_scene =  CF.getLobbyModule("Share"):getShareScene()
    local strURL = CF.areaData.getXHLinkURL()
    if strURL and UrlConf.URL_SHARE_TRANSFER and scene and mini_scene and not string.find(strURL,UrlConf.URL_SHARE_TRANSFER) then
        strURL = string.format("%s?url=%s&areaid=%d&scene=%s&subscene=%s", UrlConf.URL_SHARE_TRANSFER, string.urlencode(strURL), XH.areaData:getAreaID(), string.urlencode(scene), string.urlencode(mini_scene))
        CF.getLobbyModule("Share"):resetShareScene()
    end
    local shareInfo = {
        copyTextWhenNoWX = str,
        text = "",
        url = strURL,
    }
    XH.sdkManager:setLastShareInfo(shareInfo)
end

function ShareModule:doShareCopy(shareType)
    shareType = shareType or self._shareType
    if not shareType then
        return
    end
    local str = ""
    if shareType == CF.GameDefine.SHARE_SELECT.TEXT then
        str = CF.shareManager:createNormalCopyInfo()
    elseif shareType == CF.GameDefine.SHARE_SELECT.PIC then
        if self._needKongCount then
            str = CF.shareManager:createTotoalResultCopyInfo(self._totalResultData, self._needKongCount)
        else
            str = CF.shareManager:createTotoalResultCopyInfo(self._totalResultData)
        end
    end
    CF.SysTool.copyString(str)
    CF.TipTool.showToast("复制成功，快去分享给您的好友吧", 2)
    self:resetShareData()
end

function ShareModule:captureScreenAndShareToFirend()
    local callback = function()
        self:dispatchEvent({name = self.EVENT_CLOSE_CAPTURE_SCREEN_VIEW})
        CF.taskManager:reqShareGiveRoomCard()
    end
    CF.gameRequire("Modules.Share.CaptureScreenShareView").new():showSelf()
    CF.shareManager:captureScreenAndShareToFirend(callback, self)
end

function ShareModule:captureScreenLocal()
    local picName = os.time() .. "_local.jpg"
    local callback = function()
        local fileFullPath = cc.FileUtils:getInstance():getWritablePath() .. "tmp/" .. picName
        XH.sdkManager:saveImageToGallery(fileFullPath)
        XH.TipTool.showToast("截屏保存成功，快去分享给好友吧~")
        self:dispatchEvent({name = self.EVENT_CLOSE_CAPTURE_SCREEN_VIEW})
    end
    CF.gameRequire("Modules.Share.CaptureScreenShareView").new():showSelf()
    CF.shareManager:captureScreenLocal(callback, self, picName)
end

function ShareModule:captureScreenAndShareToWeChat()
    local callback = function()
        self:dispatchEvent({name = self.EVENT_CLOSE_CAPTURE_SCREEN_VIEW})
    end
    CF.gameRequire("Modules.Share.CaptureScreenShareView").new():showSelf()
    CF.shareManager:captureScreenAndShareToWeChat(nil, callback, self)
end

function ShareModule:reqShareAwardGot()
    self:startReq("ReqShareAwardGot", TaskDefine.TASK_ID.SHARE_GIVE_CARD, 0, 0, CF.areaData:getSrsGroupID(), CF.KW_CONFIG_LOGIC_TIME_OUT, "")
end

function ShareModule:onResqShareAwardGot(cell, ntype, data)
    if data and data.acData and data.acData ~= "" then
        local jsonData
        local ok, _ = pcall(function()
            jsonData = cjson.decode(data.acData)
        end)
        if ok then
            self:dispatchEvent({name = self.EVENT_SHARE_AWARD_GOT, isGot = jsonData.isGot and 0 or 1})
        end
    end
end

-- 分享，通知隐藏部分按钮
function ShareModule:captureGoldScreenShare(isAward)
    self:dispatchEvent({name = self.EVENT_SHARE_HIDE_UNUSE_BTNS})
    local captureGame = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            return
        end
        CF.gameRequire("Modules.Share.GoldScreenShareView").new(outputFile, isAward):showSelf()
    end
    local fileName = "share_" .. os.time() .. ".jpg"
    CF.SysTool.captureScreenshot(captureGame, fileName)
end

-- 通知分享结束
function ShareModule:captureGoldScreenShareFinish()
    self:dispatchEvent({name = self.EVENT_CLOSE_CAPTURE_SCREEN_VIEW})
end

-- 隐藏按钮通用状态
function ShareModule:setShareHideIcons(obj)
    if not CF.roomData:isGoldRoom() then
        return
    end
    local hideBtns = {}
    local iconLists = {"_panelBtns", "_panelBtnNext", "_panelLevelChange", "_panelGoldChange", "_panelBottomCenter"}
    if obj["_lastShowBtns"] ~= nil then
        hideBtns = obj["_lastShowBtns"]
        for name, _ in pairs(hideBtns) do
            if obj[name] ~= nil and obj[name].setVisible ~= nil then
                obj[name]:setVisible(false)
            end
        end
    else
        for _, name in pairs(iconLists) do
            if obj[name] ~= nil and obj[name].setVisible ~= nil then
                hideBtns[name] = obj[name]:isVisible()
                obj[name]:setVisible(false)
            end
        end
    end
    if obj["_hasH5GameWidget"] ~= nil then
        CF.getLobbyModule("H5GameWidget"):close5GameWidget("all", CF.roomData._gameID)
    end
    CF.game:getModule("ChangeLevel"):hide()
    return hideBtns
end

-- 显示按钮通用状态
function ShareModule:setShareShowIcons(obj, names)
    if not CF.roomData:isGoldRoom() then
        return
    end
    if obj == nil or names == nil then
        return
    end
    for name, visible in pairs(names) do
        if obj[name] ~= nil and obj[name].setVisible ~= nil then
            obj[name]:setVisible(visible)
        end
    end
    if obj["_hasH5GameWidget"] ~= nil then
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_end", CF.roomData._gameID)
    end
end

-- 请求次数
function ShareModule:reqGoldShareRewardCount(type)
    self:startReq("ReqGoldShareRewardCount", 10, type)
end

function ShareModule:onReqGoldShareRewardCount(req, nType, data)
    if nType == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent({name = self.EVENT_FLUSH_SHARE_AWARD_COUNT, data = data})
    end
end

-- 请求奖励
function ShareModule:reqGoldShareReward()
    if not CF.roomData:isGoldRoom() then
        return
    end
    local score = self:getGoldScore()
    if score == nil or score == 0 then
        return
    end
    local type = ShareModule.GoldRoomShareType.AVOID_DEFEAT
    if score > 0 then
        type = ShareModule.GoldRoomShareType.DOUBLE_WIN
    end
    self:startReq("ReqGoldShareReward", 10, 0, os.time(), score, type, CF.roomData:getAppID(), 0)
end

function ShareModule:onReqGoldShareReward(req, nType, data)
    if nType == XH.Req.TYPE.SUCCESS then
        if data then
            if ShareModule.GoldRoomShareResp[data.resp] == ShareModule.GoldRoomShareResp.SUCCESS then
                if data.num > 0 then
                    local awardInfo = {}
                    awardInfo.prize_names = {}
                    awardInfo.image_urls = {}
                    awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. data.num
                    awardInfo.image_urls[#awardInfo.image_urls + 1] = "https://img1-cdn.bianfeng.com/uploads/materials/images/202011/6B265713081171Y2.png"
                    awardInfo.text = " "
                    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
                    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_GOLD_SHARE_SUCCESS, nil, {area_id = XH.areaData:getAreaID()})
                    self:dispatchEvent({name = self.EVENT_GET_SHARE_AWARD_SUCCESS})
                    XH.playerData:flushGoldCoin()
                    return
                end
            elseif ShareModule.GoldRoomShareResp[data.resp] == ShareModule.GoldRoomShareResp.COUNT_LIMIT then
                XH.TipTool.showToast("领奖失败，次数限制")
                return
            elseif ShareModule.GoldRoomShareResp[data.resp] == ShareModule.GoldRoomShareResp.GAME_INVALID then
                XH.TipTool.showToast("领奖失败，对局校验失败")
                return
            elseif ShareModule.GoldRoomShareResp[data.resp] == ShareModule.GoldRoomShareResp.ERROR then
                XH.TipTool.showToast("领奖失败，其他异常")
                return
            end
        end
    end
    XH.TipTool.showToast("领奖失败，其他错误")
end

-- 设置本轮金币场分数
function ShareModule:setGoldScore(score)
    if not CF.roomData:isGoldRoom() then
        return
    end
    self._score = score
    if self._score ~= nil then
        if self._score > 0 then
            self:reqGoldShareRewardCount(ShareModule.GoldRoomShareType.DOUBLE_WIN)
        elseif self._score < 0 then
            self:reqGoldShareRewardCount(ShareModule.GoldRoomShareType.AVOID_DEFEAT)
        end
    end
end

function ShareModule:getGoldScore()
    return self._score or 0
end

function ShareModule:shareScreenPicToFriends(outputFile, canAward)
    local callback = function()
        local shareModule = CF.getLobbyModule("Share")
        if shareModule ~= nil and shareModule.getShareInfo ~= nil then
            local shareFzbData = shareModule:getShareInfo()
            if shareFzbData == nil or shareFzbData.special == nil then
                self:reqAward(canAward)
                return
            end
            local lastTime = self._lastShareTime or 0
            local diffTime = os.time() - lastTime
            local random = math.random()
            if random < shareFzbData.special.probability and diffTime < shareFzbData.special.time then
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_GOLD_SHARE_FAILED, nil, {area_id = XH.areaData:getAreaID()})
                XH.TipTool.showToast("分享失败，请正确完成分享")
                return
            end
            self:reqAward(canAward)
        else
            self:reqAward(canAward)
        end
    end
    local shareInfo = {
        textTitle = CF.SysTool:getAppName() .. os.date("%Y%m%d %H%M%S") or "", -- 分享标题
        imagePath = outputFile, -- 微信不用
        type = "pic", -- word是文字分享，url网页模式分享，pic分享图片
        scene = 1, -- 0是分享到好友会话，1是分享到朋友圈
        imageUrl = "", -- 分享图片地址（分享网页模式，需要传安卓包名）
        text = "扫二维码 一起玩", -- 分享内容
        sharePath = ""
    }
    self._lastShareTime = os.time()
    if device.platform == "windows" then
        callback()
        return
    end
    CF.sdkManager:startShare(shareInfo, callback, self)
end

function ShareModule:reqAward(canAward)
    if canAward then
        CF.game:getModule("Share"):reqGoldShareReward()
    end
end

return ShareModule
6