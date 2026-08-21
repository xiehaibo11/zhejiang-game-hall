local RecallTeamModule = class("RecallTeamModule", XH.ModuleBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

RecallTeamModule.EVENT_FLUSH_ACT_INFO = "EVENT_FLUSH_ACT_INFO"
RecallTeamModule.EVENT_FLUSH_ACT_INFO_SINGLE = "EVENT_FLUSH_ACT_INFO_SINGLE"

-- 这边数据要和比赛场绑定上
function RecallTeamModule:ctor()
    RecallTeamModule.super.ctor(self)
    self._info = {}
    self._firstInfo = {} -- 第一页用户
    self._playerLists = {} -- 回归用户
end

function RecallTeamModule:getReqConfig()
    return {
        ListClubReBackPlayersRequest = { reqPath = "lobby.Req.RecallNew.ListClubReBackPlayersRequest", callBack = self.respListClubReBackPlayers },
        QueryReBackPlayersRequest = { reqPath = "lobby.Req.RecallNew.QueryReBackPlayersRequest", callBack = self.respQueryReBackPlayers },
        RewardClubReBackRequest = { reqPath = "lobby.Req.RecallNew.RewardClubReBackRequest", callBack = self.respRewardClubReBack },
        NotifyClubReBackPlayerInviteRequest = { reqPath = "lobby.Req.RecallNew.NotifyClubReBackPlayerInviteRequest", callBack = self.respNotifyClubReBackPlayerInvite },
    }
end

function RecallTeamModule:getActId()
    return XH.lobby:getModule("RecallNew"):getActId()
end

-- 是否在活动内，且满足条件
function RecallTeamModule:isInAct()
    return false
end

function RecallTeamModule:getDefPageSize()
    return 20
end

-- 回归牌友列表
function RecallTeamModule:listClubReBackPlayersRequest(club_id, page, isClear, isShowQiPao)
    self._isShowQiPao = isShowQiPao
    if isClear then
        self._info = {}
        self._firstInfo = {}
        self._playerLists = {}
    end
    self:startReq("ListClubReBackPlayersRequest", self:getActId(), club_id, page, self:getDefPageSize(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallTeamModule:respListClubReBackPlayers(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.curPage == 1 then
            self._firstInfo = data
        end
        self._info = data
        if self._isShowQiPao then
            self:isShowQiPao()
            self._isShowQiPao = false
        end
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_INFO, msg = data })
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain then
            TeaHouse.manager.teahouseMain:flushRecallTeamState()
        end
    else
        print("ListClubReBackPlayersRequest 请求失败")
    end
end

-- 查询玩家是否是回归用户
function RecallTeamModule:queryReBackPlayersRequest(memberListInfo)
    if not self:isInAct() then
        return
    end
    -- 如果重复的就不重新请求了
    local user_ids = {}
    for i = 1, #memberListInfo do
        if self._playerLists[memberListInfo[i].stUserInfo.nNumId] == nil then
            user_ids[#user_ids + 1] = memberListInfo[i].stUserInfo.nNumId
        end
    end
    if #user_ids == 0 then
        return
    end
    self:startReq("QueryReBackPlayersRequest", self:getActId(), user_ids, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallTeamModule:respQueryReBackPlayers(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        for j = 1, #data.reqUsers do
            self._playerLists[data.reqUsers[j]] = false
            for i = 1, #data.rebackUserIds do
                if data.reqUsers[j] == data.rebackUserIds[i] then
                    self._playerLists[data.reqUsers[j]] = true
                    break
                end
            end
        end
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain then
            TeaHouse.manager.teahouseMain:flushRecallTeamTag()
        end
    else
        print("QueryReBackPlayersRequest 请求失败")
    end
end

-- 领取回归牌友奖励
function RecallTeamModule:rewardClubReBackRequest(user_id)
    XH.TipTool.showLoading()
    self:startReq("RewardClubReBackRequest", self:getActId(), user_id, TeaHouse.manager.teahouseData:getTeaNumber(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallTeamModule:respRewardClubReBack(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.image_urls = {}
        awardInfo.isPromote = true
        for _, award in pairs(data.props) do
            awardInfo.prize_names[#awardInfo.prize_names + 1] = award.count .. award.name
            awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
        end
        XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
        -- 刷新单个玩家领奖状态
        if self._info and self._info.players and #self._info.players > 0 then
            for i = 1, #self._info.players do
                if self._info.players[i].userId == data.userID then
                    self._info.players[i].rewardStatus = RecallNewConfig.ReBackStatus.ReStatus_Rewarded
                    break
                end
            end
        end
        if self._firstInfo and self._firstInfo.players and #self._firstInfo.players > 0 then
            for i = 1, #self._firstInfo.players do
                if self._firstInfo.players[i].userId == data.userID then
                    self._firstInfo.players[i].rewardStatus = RecallNewConfig.ReBackStatus.ReStatus_Rewarded
                    break
                end
            end
        end
        self:dispatchEvent({ name = self.EVENT_FLUSH_ACT_INFO_SINGLE, msg = data.userID })
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain then
            TeaHouse.manager.teahouseMain:flushRecallTeamState()
        end
    elseif data == 10014 then
        XH.TipTool.showToast("奖励已被他人领取，请刷新页面重试")
    else
        XH.TipTool.showToast("奖励领取失败，请刷新页面重试")
    end
end

-- 通知发起邀请
function RecallTeamModule:notifyClubReBackPlayerInviteRequest(invite_user_id)
    local teainfo = TeaHouse.manager.teahouseData:getTeaHouseInfoByID(TeaHouse.manager.teahouseData:getTeaNumber())
    if teainfo == nil then
        return
    end
    local msg = {}
    msg.teaid = teainfo.nTeaNumber
    msg.teaName = teainfo.szData or ""
    msg.nick = XH.playerData:getNickName()
    msg.nPasswd = teainfo.nPasswd
    XH.teaHouseManager:reqNotice(XH.playerData:getNumberID(), invite_user_id, json.encode(msg), XH.MatchLinkProtocol.RespInvite.TYPE.TYPE_RECALL_NEW)
    self:startReq("NotifyClubReBackPlayerInviteRequest", self:getActId(), TeaHouse.manager.teahouseData:getTeaNumber(), invite_user_id, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function RecallTeamModule:respNotifyClubReBackPlayerInvite(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        -- 不处理
    else
        print("NotifyClubReBackPlayerInviteRequest 请求失败")
    end
end

-- 是否显示入口
function RecallTeamModule:isShowIcon()
    if self._info.players and #self._info.players > 0 then
        return true
    end
    return false
end

-- 是否存在红点
function RecallTeamModule:isExistRedPoint()
    if self._firstInfo.players then
        for i = 1, #self._firstInfo.players do
            if self._firstInfo.players[i].rewardStatus == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
                return true
            end
        end
    end
    return false
end

function RecallTeamModule:getMaxNum()
    return self._info.total or 0
end

function RecallTeamModule:getPropsInfo()
    return self._info.props or {}
end

function RecallTeamModule:getTargetGame()
    return self._info.targetGame or 0
end

function RecallTeamModule:getInfo()
    return self._info.players or {}
end

-- 是否显示气泡
function RecallTeamModule:isShowQiPao()
    local isShow = false
    local teaNumber = TeaHouse.manager.teahouseData:getTeaNumber()
    local key = XH.userDefault.KEY_ID.KW_RECALL_NEW_MATCH_POP_LIST
    local data = XH.userDefault:getValue(key, {})
    teaNumber = tostring(teaNumber)
    if data[teaNumber] == nil then
        data[teaNumber] = {}
    end
    if self._firstInfo.players then
        for i = 1, #self._firstInfo.players do
            if self._firstInfo.players[i].status == RecallNewConfig.ClubReBackPlayerStatus.Re_Online then
                if data[teaNumber][tostring(self._firstInfo.players[i].userId)] == nil then
                    isShow = true
                    data[teaNumber][tostring(self._firstInfo.players[i].userId)] = 1
                end
            end
        end
    end
    if isShow then
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain then
            TeaHouse.manager.teahouseMain:flushRecallTeamQiPao()
        end
    end
    XH.userDefault:setValue(key, data)
end

-- 是否为回归玩家
function RecallTeamModule:isBackPlayer(numID)
    for k, v in pairs(self._playerLists) do
        if numID == k then
            return v
        end
    end
    return false
end

return RecallTeamModule�#