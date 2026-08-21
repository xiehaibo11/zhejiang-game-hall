local RecallModule = class("RecallModule", XH.ModuleBase)
RecallModule.EVENT_PLAYERLIST_CHANGE = "EVENT_PLAYERLIST_CHANGE"

function RecallModule:ctor()
    RecallModule.super.ctor(self)
    self._nowPage = 0
    self._reqingPage = 0
    self._teaNumber = 0
    self._isOwnerOrAdmin = false
    self._isLastPage = false
    self._playerList = {}
    self._is_club_manager = false
    self:initLeftTimeDelay()
end

function RecallModule:getReqConfig()
    return {
        ReqRecallPlayerList = { reqPath = "lobby.Req.Recall.ReqRecallPlayerListEx", callBack = self.onRespRecallPlayerList },
        ReqAcceptRecallRewards = { reqPath = "lobby.Req.Recall.ReqAcceptRecallRewards", callBack = self.onAcceptRecallRewards },
    }
end

function RecallModule:reloadRecallPlayerList(teaNumber, isOwnerOrAdmin)
    self._teaNumber = teaNumber or 0
    self._isOwnerOrAdmin = isOwnerOrAdmin or false
    self._reqingPage = 0
    self._nowPage = 0
    self._isLastPage = false
    self:setPlayerList()
    self:reqNextRecallPlayerList()
end

function RecallModule:onDestroy()
    RecallModule.super.onDestroy(self)
    self:initLeftTimeDelay()
end

function RecallModule:initLeftTimeDelay()
    if self._leftTimeDelayID then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._leftTimeDelayID)
    end
    self._leftTimeDelayID = nil
end

function RecallModule:startLeftTimeDelay()
    self._leftTimeDelayID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        for _, v in pairs(self._playerList) do
            v.expire_at = tonumber(v.expire_at) - 1
        end
    end, 1, false)
end

function RecallModule:setPlayerList(listData)
    self._playerList = listData or {}
    self:dispatchEvent({name = self.EVENT_PLAYERLIST_CHANGE})
end

function RecallModule:addPlayerList(listData)
    local isFirst = #self._playerList == 0
    table.insertto(self._playerList, listData)
    self:dispatchEvent({name = self.EVENT_PLAYERLIST_CHANGE, isFirst = isFirst})
end

local SingleReqCount = 4
function RecallModule:reqNextRecallPlayerList()
    --防止重复请求
    if self._reqingPage >= self._nowPage + 1 or self._isLastPage then
        return
    end
    self._reqingPage = self._nowPage + 1
    self:startReq("ReqRecallPlayerList", 10, self._reqingPage, SingleReqCount, self._teaNumber)
end

function RecallModule:isTeahouseOwnerOrAdmin()
    return self._is_club_manager
end

function RecallModule:setIsClubManager(value)
    self._is_club_manager = value;
end

function RecallModule:getAward(userID, propID)
    self:startReq("ReqAcceptRecallRewards", 10, userID, propID, self._teaNumber)
end

function RecallModule:onAcceptRecallRewards()
    self:reloadRecallPlayerList(self._teaNumber)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("RecallModule.ReGetAwardData")
    eventDispatcher:dispatchEvent(event)
end

function RecallModule:getPlayerList()
    return self._playerList
end

function RecallModule:onRespRecallPlayerList(req, nType, vData)
    if nType == XH.Req.TYPE.SUCCESS then
        if not vData or not vData.nXYData or vData.nXYData.totalPage <= self._nowPage or vData.nXYData.curPage <= self._nowPage then
            return
        end
        if self._reqingPage == vData.nXYData.curPage then
            self._reqingPage = 0
        end
        self._isLastPage = vData.nXYData.curPage == vData.nXYData.totalPage
        self._nowPage = vData.nXYData.curPage
        if vData.nXYData.player then
            self:addPlayerList(vData.nXYData.player)
        end
    elseif req:getReqPage() == self._reqingPage then
        --请求失败则去除重复请求限制
        self._reqingPage = 0
    end
end

local KW_SHARE_TEXT = {
    {
        title = "大赠送！点击领奖！",
        text = "马上对局，100%获奖！仅限此入口 >>"
    },
    {
        title = "大赠送！点击领奖！",
        text = "马上对局，100%获奖！仅限此入口 >>"
    },
    {
        title = "大赠送！点击领奖！",
        text = "马上对局，100%获奖！仅限此入口 >>"
    },
}
function RecallModule:shareWX(extParam)
    math.randomseed(tonumber(tostring(os.time()):reverse():sub(1,6)))
    local rand = math.random(3)
    local shareText = KW_SHARE_TEXT[rand] or {}
    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    local url = DEBUG and "http://appstore.racyqp.com:8009/friend_recall/share?" or "http://act.anquanqipai.com/friend_recall/share?"
    local shareUrl = url.."tenant_id=".. XH.areaData:getTenantid() .. "&area_id=" .. XH.areaData:getAreaID() .."&club_id=" .. self._teaNumber .."&source=app&activity_type=3&from_user_id=" .. XH.playerData:getNumberID()
    if extParam then
        shareText = {}
        shareUrl = shareUrl .. extParam
    end
    local shareInfoMode = {
        textTitle = shareText.title or "浙江游戏大厅", --分享标题
        url = shareUrl, --微信网页模式分享的链接
        type = "url", --word是文字分享，url网页模式分享，pic分享图片
        scene = "0", --0是分享到好友会话，1是分享到朋友圈
        imageUrl = "com.xm.zjgamecenter", --分享图片地址（分享网页模式，需要传安卓包名）
        text = shareText.text or "年度精品推荐，百万浙江玩家下载！", --分享内容 
    }
    XH.sdkManager:startShare(shareInfoMode, self.shareCallback, self)
end

function RecallModule:shareWXCallback(data)
    
end

return RecallModule+