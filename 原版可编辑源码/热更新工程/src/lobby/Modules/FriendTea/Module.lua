local FriendTeaModule = class("FriendTeaModule", XH.ModuleBase)

FriendTeaModule.EVENT_UPDATE_HALLFRIENDS = "EVENT_UPDATE_HALLFRIENDS"
FriendTeaModule.EVENT_RESP_JOIN_TEA = "EVENT_RESP_JOIN_TEA" -- 老-申请返回
FriendTeaModule.EVENT_RESP_CLUB_SET = "EVENT_RESP_CLUB_SET" -- 设置刷新
FriendTeaModule.EVENT_RESP_APPLY_FRIENDS = "EVENT_RESP_APPLY_FRIENDS"

function FriendTeaModule:ctor()
    FriendTeaModule.super.ctor(self)
    self._listHallFriends = {}
    self._clubApplyFriends = {} -- 比赛场内申请、日志对应的牌友数据
end

function FriendTeaModule:getReqConfig()
    return {
        ReqListHallFriends = {reqPath = "lobby.Req.ReqListHallFriends", callBack = self.respListHallFriends}, -- (牌友列表获取)
        ReqBBClubSet = {reqPath = "lobby.Req.ReqBBClubSet", callBack = self.respBBClubSet}, -- (宝宝比赛场设置)
        ReqBBClubApplyFriends = {reqPath = "lobby.Req.ReqBBClubApplyFriends", callBack = self.respBBClubApplyFriends}, -- (宝宝比赛场申请列表/日志记录 牌友数据获取)
        ReqBBApplyJoinClub = {reqPath = "lobby.Req.ReqBBApplyJoinClub", callBack = self.respBBApplyJoinClub}, -- (宝宝申请加入比赛场)
        ReqBBDealJoinClub = {reqPath = "lobby.Req.ReqBBDealJoinClub", callBack = self.respBBDealJoinClub} -- (宝宝处理加入比赛场 同意/拒绝)
    }
end

function FriendTeaModule:setActivityId(aid)
    self._activityId = aid
end
function FriendTeaModule:isValid()
    return self._activityId and self._activityId > 0
end

function FriendTeaModule:reqListHallFriends()
    self:startReq("ReqListHallFriends")
end

function FriendTeaModule:onChangeArea()
    if self:isValid() then
        self._listHallFriends = {}
        local sid = nil
        sid = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(sid)
            self:reqListHallFriends()
        end, 1, false)
    end
end

function FriendTeaModule:respListHallFriends(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._listHallFriends = data
    elseif type == XH.Req.TYPE.FAIL then
        XH.TipTool.showToast("请求推荐比赛场错误")
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("请求推荐比赛场超时")
    end
    self:dispatchUpdateFriendData()
end

function FriendTeaModule:dispatchUpdateFriendData()
    self:dispatchEvent({name = self.EVENT_UPDATE_HALLFRIENDS, data = self._listHallFriends})
end

function FriendTeaModule:reqBBClubSet(data)
    self:startReq("ReqBBClubSet", data)
end

function FriendTeaModule:respBBClubSet(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.reqData and data.reqData.callback then
            data.reqData.callback(data)
        end
        self:dispatchEvent({name = self.EVENT_RESP_CLUB_SET, data = data})
        -- elseif type == XH.Req.TYPE.FAIL then
        --     XH.TipTool.showToast("设置错误")
        -- elseif type == XH.Req.TYPE.TIMEOUT then
        --     XH.TipTool.showToast("设置超时")
    end
end
function FriendTeaModule:clearApplyFriends()
    self._clubApplyFriends = {}
end
function FriendTeaModule:reqBBClubApplyFriends(data)
    local seen = {}
    local result = {}
    self._clubApplyFriends[data.clubId .. ""] = self._clubApplyFriends[data.clubId .. ""] or {}
    for i, v in ipairs(data.userIds) do
        if self._clubApplyFriends[data.clubId .. ""][v .. ""] == nil and not seen[v] then
            seen[v] = true
            table.insert(result, v)
            -- self._clubApplyFriends[data.clubId][v .. ""] = nil
        end
    end
    if #result > 0 then
        self:startReq("ReqBBClubApplyFriends", {clubId = data.clubId, userIds = result})
    end
end

function FriendTeaModule:respBBClubApplyFriends(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._clubApplyFriends[data.clubId .. ""] = self._clubApplyFriends[data.clubId .. ""] or {}
        -- for i, v in pairs(data.userInfos) do
        --     self._clubApplyFriends[data.clubId][i .. ""] = v
        -- end
        for i, v in pairs(data.userIds) do
            self._clubApplyFriends[data.clubId .. ""][v .. ""] = data.userInfos[v .. ""] or {}
        end
        self:dispatchEvent({name = self.EVENT_RESP_APPLY_FRIENDS, data = data})
        if TeaHouse and TeaHouse.manager.teahouseMember then
            TeaHouse.manager.teahouseMember:sendEvent("EVENT_MEMBER_FRIEND_LIST_UPDATE", data)
        end
    end
end
function FriendTeaModule:reqBBApplyJoinClub(data)
    if not self:isValid() then
        return
    end
    self:startReq("ReqBBApplyJoinClub", data)
end

function FriendTeaModule:respBBApplyJoinClub(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
    end
end
function FriendTeaModule:reqBBDealJoinClub(data)
    -- if not self:isValid() then
    --     return
    -- end
    self:startReq("ReqBBDealJoinClub", data)
end

function FriendTeaModule:respBBDealJoinClub(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
    end
end

function FriendTeaModule:getClubLists()
    if not self._listHallFriends or not self._listHallFriends.clubs then
        return {
            --     {clubApplyStatus=0, clubInfo={clubId=1, name="name1", ownerNick="ownerNick", head=""},friendInfo={{state="Online",lastOfflineTime=os.time()-8600, nick="nick",head=""}}},
            --     {clubApplyStatus=0, clubInfo={clubId=1, name="name2", ownerNick="ownerNick2", head=""},friendInfo={}},
        }
    end
    return self._listHallFriends.clubs
end

function FriendTeaModule:getActiveClub()
    return self._listHallFriends.activeClub
end
function FriendTeaModule:getMyMaxOnLineNum()
    return self._listHallFriends.maxClubCnt
end

function FriendTeaModule:isHaveCanJoinClub()
    local clubLists = self:getClubLists()
    for _, v in pairs(clubLists) do
        if v.clubApplyStatus == 0 then
            return true
        end
    end
    return false
end

function FriendTeaModule:updateApplyStatus(clubId)
    local clubLists = self:getClubLists()
    for _, v in pairs(clubLists) do
        if v.clubInfo and v.clubInfo.clubId == clubId then
            v.clubApplyStatus = 1
        end
    end
    self:dispatchUpdateFriendData()
end

function FriendTeaModule:onLoginSuccessCallBack()
    self._listHallFriends = {}
end

function FriendTeaModule:onTeaPlayerRequestJoinIn(data)
    self:dispatchEvent({name = self.EVENT_RESP_JOIN_TEA, data = data})
end

function FriendTeaModule:getApplyFriendsInfo(clubId, userId)
    local info = self._clubApplyFriends[clubId .. ""] or {}
    if userId == nil then
        return info
    end
    -- local friendInfos = {}
    -- for i, v in ipairs(userIds) do
    --     friendInfos[i] = info[tostring(v)] -- {{state="Online",lastOfflineTime=os.time()-8600, nick="nick",head=""}} --
    -- end
    return info[tostring(userId)] or {}
end

function FriendTeaModule:isCurAreaShowAllApproveDeny(data)
    local showAllApproveDeny = XH.lobby:getModule("Configuration"):getAllConfigData("ShowAllApproveDeny") or false
    if showAllApproveDeny == true then
        return true
    elseif showAllApproveDeny == false then
        return false
    end
    return showAllApproveDeny[XH.areaData:getAreaID()..""] == true
end

return FriendTeaModule
