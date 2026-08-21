local PeakRaceModule = class("PeakRaceModule", NG.ModuleBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local PeakRaceConfig = require("newgold.GoldLobby.Modules.PeakRace.Define")

PeakRaceModule.flushSelectId = "flushSelectId"
PeakRaceModule.flushTeamId = "flushTeamId"
PeakRaceModule.flushRule = "flushRule"
PeakRaceModule.finishEnrollMatch = "finishEnrollMatch"
PeakRaceModule.flushEnrollMatch = "flushEnrollMatch"
PeakRaceModule.flushTeamList = "flushTeamList"
PeakRaceModule.flushTeamScore = "flushTeamScore"
PeakRaceModule.flushTeamInfo = "flushTeamInfo"
PeakRaceModule.flushPeakRaceInfo = "flushPeakRaceInfo"
PeakRaceModule.flushPeakRank = "flushPeakRank"

function PeakRaceModule:ctor()
    PeakRaceModule.super.ctor(self)
    self._rule = nil
    self._rankLeaderInfo = nil
    self._maxShowTime = 5 -- 单播报展示时间
    self.teamList = {} -- 团队列表
    self.detailList = {} -- 玩家详情
    self.applyList = {} -- 报名列表
    self.peakRaceInfo = nil
    self.peakRank = {}
    self._matchCount = 0
end

function PeakRaceModule:getTeamList()
    return self.teamList
end

function PeakRaceModule:getDetailList()
    return self.detailList
end

function PeakRaceModule:getApplyList()
    return self.applyList
end

function PeakRaceModule:getPeakRaceInfo()
    return self.peakRaceInfo
end

function PeakRaceModule:getPeakRank()
    return self.peakRank
end

function PeakRaceModule:getReqConfig()
    return {
        --
        CellMatchGamesRequest = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellMatchGamesRequest", callBack = self.onPeakCountReply },
        CellEnrollMatchRequest = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellEnrollMatchRequest", callBack = self.onEnrollMatchReply },
        CellTeamInfoRequest = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellTeamInfoRequest", callBack = self.onTeamInfoReply },
        CellTeamListRequest = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellTeamListRequest", callBack = self.onTeamListReply },
        CellPeakRankRequest = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellPeakRankRequest", callBack = self.onPeakRankReply },
        CellPeakInfoRequest = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellPeakInfoRequest", callBack = self.onActivityDetailReply },
        CellMatchPosition = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellMatchPosition", callBack = self.onMatchPositionReply },
        CellGetCompetitionRankedLeader = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellGetCompetitionRankedLeader", callBack = self.onCompetitionRankedLeaderReply },
    }
end

function PeakRaceModule:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "getConfigurationData" },
    }
end

function PeakRaceModule:getPeakCount()
    return self._matchCount
end

function PeakRaceModule:reqPeakCount(node, obj)
    self._node = node
    self._obj = obj
    self:startReq("CellMatchGamesRequest", 10)
end

function PeakRaceModule:onPeakCountReply(cell, flag, data)
    if flag == NG.Req.TYPE.SUCCESS then
        self._matchCount = data.count or 0
        if self._node and self._obj and not tolua.isnull(self._obj) then
            self._node:setString("已参赛" .. self._matchCount .. "场")
        end
    end
end

-- 请求播报信息
function PeakRaceModule:reqCompetitionRankedLeader()
    self:startReq("CellGetCompetitionRankedLeader", 10)
end

function PeakRaceModule:onCompetitionRankedLeaderReply(cell, flag, data)
    if flag == NG.Req.TYPE.SUCCESS then
        self._rankLeaderInfo = data
        self:judgeShowRankedLeader()
    end
end

function PeakRaceModule:judgeShowRankedLeader()
    --     if (!this.getPlugin(qg.Frame.ViewPlugin).isExistView(LobbyFguiBundle.Lobby.LobbyMainView)) {
    --         return
    --     }
    --     const showLeaders = this.getShowRankedLeader()
    --     if (showLeaders.length <= 0) {
    --         return
    --     }
    --     this.getPlugin(qg.Frame.ViewPlugin).openView(LobbyFguiBundle.PeakRace.PeakRaceHorseView)
end

function PeakRaceModule:getShowRankedLeader()
    --     if (!this._rankLeaderInfo) {
    --         return []
    --     }
    --     const date = StringFunction.staticInstance.formatDate('yyyy-MM-dd', math.floor(new Date().getTime() / 1000))
    --     const key = `RANKED_LEADER_INFOS_${g.subLobbyId}_${UserManager.staticInstance.numid}`
    --     const data = LocalStorage.staticInstance.get(key, '')
    --     let info: { [key: string]: { [key: string]: number } } = {}
    --     if (data) {
    --         info = StringFunction.staticInstance.parseJson(data)
    --     }
    --     if (!info) {
    --         info = {}
    --     }
    --     if (!info[date]) {
    --         info = {}
    --         info[date] = {}
    --     }
    --     const showData = []
    --     for (let i = 0 i < this._rankLeaderInfo.leaders.length i++) {
    --         const userInfo: RankedLeaderInfo = this._rankLeaderInfo.leaders[i]
    --         const userKey = `${userInfo.area_id}_${userInfo.user_id}`
    --         if (info[date][userKey] && Number(info[date][userKey]) >= this._maxShowTime) {
    --             --
    --         } else if (this._rankLeaderInfo.leaders[i].is_broadCast) {
    --             showData.push(userInfo)
    --         }
    --     }
    --     return showData
end

function PeakRaceModule:getRankedLeaderInfo()
    return self._rankLeaderInfo
end

-- 获取比赛场位置信息(北方地区需要) todo
function PeakRaceModule:reqMatchPosition()
    -- self:startReq("CellMatchPosition", 10)
end

function PeakRaceModule:onMatchPositionReply(cell, flag, data)
    if flag == NG.Req.TYPE.SUCCESS then
        self.teamList = data.teams
        --         const gameID = data.gameid
        --         if (gameID == 0) {
        --             Object.assign(g.playerPosition, { _gameID: 0, _gameAppID: 0, _roomID: 0, _teaID: 0, _srsGroupID: 0, _roomMode: 0 })
        --         } else {
        --             if (data.roommode == BaseDefine.ROOM_MODE.BOX_ROOM || data.roommode == BaseDefine.ROOM_MODE.TEAHOUSE_ROOM || data.roommode == BaseDefine.ROOM_MODE.GOLD_DISPATCH_QUEUE) {
        --                 Object.assign(g.playerPosition, {
        --                     _gameID: data.gameid,
        --                     _gameAppID: data.gameappid,
        --                     _roomID: data.roomid,
        --                     _teaID: data.teaid,
        --                     _srsGroupID: data.srsgroupid,
        --                     _roomMode: data.roommode,
        --                     _sessionId: data.session_id,
        --                 })
        --                 -- todo 这里先连接南方srs（增加转圈限制）
        --                 this.getImpl(ISceneSwitch).dealReturnRoom(true)
        --             }
        --         }
    end
end

function PeakRaceModule:getConfigurationData(event)
    local key = event.data.key
    if key == ConfigurationDefine.Config.NOCACHE then
        local data = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.NOCACHE, "Config")
        if data and data.match then
            self._rule = data.match
            self:dispatchEvent({ name = self.flushRule })
        end
    end
end

function PeakRaceModule:getRuleDetail()
    return self._rule
end

function PeakRaceModule:getSeason()
    local data = self.peakRaceInfo
    if data == nil then
        return 0
    end
    return data.cur_season
end

-- 请求报名
function PeakRaceModule:reqApply(club_id)
    club_id = club_id or 0
    NG.TipTool.showLoading()
    self.applyList = {}
    local season = self:getSeason()
    self:startReq("CellEnrollMatchRequest", club_id, season, 10)
end

function PeakRaceModule:SActNyx_onGetActINfo()
    self:reqPeakDetailList(false, true)
end

function PeakRaceModule:onEnrollMatchReply(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS then
        if #data.teams == 0 then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020210, nil, { state = PeakRaceConfig.MatchStatus.UnBaoMing, type = "报名成功", info = "" })
            NG.TipTool.showToast('报名成功，快去参与比赛吧')
            self:reqPeakDetailList(true)
            self:dispatchEvent({ name = self.finishEnrollMatch })
        else
            self.applyList = data.teams
            NG.viewManager:openView("PeakRaceApplyView")
            self:dispatchEvent({ name = self.flushEnrollMatch })
        end
    elseif flag == NG.Req.TYPE.FAIL then
        if data == nil or data.resp == nil then
            NG.TipTool.showToast('报名失败，没有对应的巅峰赛门票(3)')
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020210, nil, { state = PeakRaceConfig.MatchStatus.UnBaoMing, type = "报名失败", info = "" })
            return
        end
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020210, nil, { state = PeakRaceConfig.MatchStatus.UnBaoMing, type = "报名失败", info = data.resp.err_code })
        if data.resp.err_code == PeakRaceConfig.MATCH_APPLY_ERRCODE.MatchAlreadyApply then
            NG.TipTool.showToast('报名失败，玩家已报名')
        elseif data.resp.err_code == PeakRaceConfig.MATCH_APPLY_ERRCODE.MatchNotTicket then
            NG.TipTool.showToast('报名失败，没有对应的巅峰赛门票')
        elseif data.resp.err_code == PeakRaceConfig.MATCH_APPLY_ERRCODE.MatchLeaderFailed then
            NG.TipTool.showToast('报名失败，领队仅能代表自己的团队进行参赛')
        elseif data.resp.err_code == PeakRaceConfig.MATCH_APPLY_ERRCODE.MatchNotStart then
            NG.TipTool.showToast('报名失败，比赛还未开始')
        else
            NG.TipTool.showToast('报名失败，没有对应的巅峰赛门票(2)')
        end
    end
end

-- 获取领队列表
function PeakRaceModule:reqTeamList(isShow)
    if isShow == nil then
        isShow = true
    end
    NG.TipTool.showLoading()
    self.teamList = {}
    local season = self:getSeason()
    self:startReq("CellTeamListRequest", isShow, season, 10)
end

function PeakRaceModule:onTeamListReply(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS then
        self.teamList = data.teams
        if data.isShow then
            self:dispatchEvent({ name = self.flushTeamList })
        else
            self:dispatchEvent({ name = self.flushTeamScore })
        end
    end
end

-- 获取详情列表
function PeakRaceModule:reqDetailList(club_id)
    NG.TipTool.showLoading()
    self.detailList = {}
    local season = self:getSeason()
    self:startReq("CellTeamInfoRequest", club_id, season, 10)
end

function PeakRaceModule:onTeamInfoReply(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS then
        self.detailList = data.users
        self:dispatchEvent({ name = self.flushTeamInfo })
    end
end

-- 获取巅峰赛信息
function PeakRaceModule:reqPeakDetailList(show, base)
    base = base or false
    self.peakRaceInfo = nil
    if show then
        NG.TipTool.showLoading()
    end
    self:startReq("CellPeakInfoRequest", base, 10)
end

function PeakRaceModule:onActivityDetailReply(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS then
        self.peakRaceInfo = data.info
        self:dispatchEvent({ name = self.flushPeakRaceInfo, msg = { info = data.info } })
    else
        NG.TipTool.showToast('请求活动信息失败')
    end
end

-- 获取巅峰赛排行榜
function PeakRaceModule:reqPeakRank(rank_type, season_type, index, count)
    NG.TipTool.showLoading()
    self.peakRank = {}
    local info = self.peakRaceInfo
    local data = {
        club_id = 0,
        Season = 0,
        season_type = season_type,
        rank_type = PeakRaceConfig.RankType_Enum[rank_type],
        index = index,
        count = count
    }
    if info then
        local Season = info.cur_season
        if season_type == PeakRaceConfig.SeasonType.PEAK_SEASON_NOW_SEASON_TYPE then
            Season = info.cur_season
        elseif season_type == PeakRaceConfig.SeasonType.PEAK_SEASON_LAST_SEASON_TYPE then
            Season = info.cur_season - 1
        end
        if info.status == PeakRaceConfig.MatchStatus.UnMatch then
            Season = Season - 1
        end
        data.Season = Season
        data.club_id = info.club_id
    end
    self:startReq("CellPeakRankRequest", data, 10)
end

-- todo
function PeakRaceModule:onPeakRankReply(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS then
        local rankType
        local peakRank
        if data then
            rankType = data.rank_type
            peakRank = data.rank_info
        end
        self.peakRank = peakRank
        self:dispatchEvent({ name = self.flushPeakRank, msg = { rankType = rankType, peakRank = peakRank, index = data.index, total_count = data.total_count } })
    else
        NG.TipTool.showToast('请求活动信息失败')
    end
end

function PeakRaceModule:getKey()
    return "MATCH_LOCAL_KEY_" .. XH.areaData:getLobbyID() .. '_' .. XH.playerData:getNumberID()
end

-- 设置最后的ID
function PeakRaceModule:setLastLocalId(id)
    cc.UserDefault:getInstance():setIntegerForKey(self:getKey(), id)
end

function PeakRaceModule:getLastLocalId()
    local id = cc.UserDefault:getInstance():getIntegerForKey(self:getKey(), 0)
    local list = {}
    local list = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    local data = self.peakRaceInfo
    if id == 0 and data and data.club_id and data.club_id ~= 0 then
        return data.club_id
    end
    local raceList = self.teamList
    if raceList and #raceList > 0 and id == 0 then
        id = raceList[1].club_id
    end
    -- if #list > 0 and id == 0 then
    --     for i = 1, #list do
    --         if list[i].nTeaOwnerNumid == XH.playerData:getNumberID() then
    --             self:setLastLocalId(list[i].nTeaNumber)
    --             id = list[i].nTeaNumber
    --             break
    --         end
    --     end
    -- end
    return id
end

function PeakRaceModule:flushSelectId(id)
    self:dispatchEvent({ name = self.flushSelectId, msg = id })
end

function PeakRaceModule:flushTeamId(id)
    self:dispatchEvent({ name = self.flushTeamId, msg = id })
end

function PeakRaceModule:isLeader()
    local list = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    local ownTeamCount = 0
    if #list > 0 then
        for i = 1, #list do
            if list[i].nTeaOwnerNumid == XH.playerData:getNumberID() then
                return true
            end
        end
    end
    return false
end

return PeakRaceModule|;  