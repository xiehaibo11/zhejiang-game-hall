local PeakRaceModule = class("PeakRaceModule", XH.ModuleBase)
local MatchContributeConfig = require("lobby.Modules.PeakRace.Config")

PeakRaceModule.sContribute = "sContribute"

-- 团队贡献请求类型
local ContributeOpt = {
    CONTRIBUTE_OPT_RANK = 0,
    CONTRIBUTE_OPT_LIST = 1,
}

function PeakRaceModule:ctor()
    PeakRaceModule.super.ctor(self)
    self._contributeRankData = nil
    self._lastMatch = nil
end

function PeakRaceModule:getReqConfig()
    return {
        ["CellRankRecordRequest"] = { reqPath = "app.Req.PeakRace.CellClubRankRequest", callBack = self.respRankRecord },
        ["CellContributeRequest"] = { reqPath = "app.Req.PeakRace.CellContributeRequest", callBack = self.respContributeRank },
        ["CellContributeRequest2"] = { reqPath = "app.Req.PeakRace.CellContributeRequest", callBack = self.respContributeRankList },
        ["CellChooseRankRequest"] = { reqPath = "app.Req.PeakRace.CellChooseRankRequest", callBack = self.respChooseRank },
        ["CellChooseRankRequest2"] = { reqPath = "app.Req.PeakRace.CellChooseRankRequest", callBack = self.respGetChooseRank },
    }
end

function PeakRaceModule:getContributeRankData()
    return self._contributeRankData
end

-- 月榜/胜率榜
function PeakRaceModule:getRecordRankList(beginTime, endTime, rankType, curIndex, pageSize, gameID, club_id)
    self:startReq("CellRankRecordRequest", beginTime, endTime, rankType, curIndex, pageSize, gameID, club_id)
end

function PeakRaceModule:respRankRecord(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain and TeaHouse.manager.teahouseMain.updateRankRecord then
            TeaHouse.manager.teahouseMain:updateRankRecord(data)
        end
    end
end

-- 请求贡献榜
function PeakRaceModule:getTeamRankList(start, length, start_time, end_time, page, club_id)
    self:startReq("CellContributeRequest2", 0, start, length, start_time, end_time, page, 0, club_id)
end

function PeakRaceModule:respContributeRankList(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain and TeaHouse.manager.teahouseMain.updateContributeRank then
            TeaHouse.manager.teahouseMain:updateContributeRank(data)
        end
    end
end

-- opt, start, len, start_time, end_time, page, user_id, club_id
-- 请求贡献记录
function PeakRaceModule:getTeamRank(page, maxLen, club_id)
    self:startReq("CellContributeRequest", ContributeOpt.CONTRIBUTE_OPT_LIST, page, maxLen, 0, 0, page, XH.playerData:getNumberID(), club_id)
end

function PeakRaceModule:respContributeRank(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._contributeRankData = data
        self:dispatchEvent({ name = PeakRaceModule.sContribute, data = data.page })
    end
end

function PeakRaceModule:getChooseRank()
    if self._lastMatch == nil then
        return { rank_type = MatchContributeConfig.TRANSFER_50_RANK[MatchContributeConfig.RankType.WIN_RATE], game_id = 0, ren_count = 0 }
    end
    return self._lastMatch
end

-- club_id, choose_rank, opt
-- 获取最后榜单
function PeakRaceModule:reqGetChooseRank(opt, club_id)
    XH.TipTool.showLoading()
    self:startReq("CellChooseRankRequest2", club_id, '', opt)
end

function PeakRaceModule:respGetChooseRank(cell, flag, data)
    XH.TipTool.hideLoading()
    if flag == XH.Req.TYPE.SUCCESS then
        if data.chooseRank and data.chooseRank ~= "" then
            self._lastMatch = json.decode(data.chooseRank)
        else
            self._lastMatch = { rank_type = MatchContributeConfig.TRANSFER_50_RANK[MatchContributeConfig.RankType.WIN_RATE], game_id = 0, ren_count = 0 }
        end
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain and TeaHouse.manager.teahouseMain.updateChoseRank then
            TeaHouse.manager.teahouseMain:updateChoseRank()
        end
    end
end

-- 设置最后榜单
function PeakRaceModule:reqChooseRank(choose_rank, club_id)
    XH.TipTool.showLoading()
    self:startReq("CellChooseRankRequest", club_id, choose_rank, MatchContributeConfig.ChooseRankOpt.CHOOSE_RANK_OPT_SET)
end

function PeakRaceModule:respChooseRank(cell, flag, data)
    XH.TipTool.hideLoading()
    if flag == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("设置成功，已使用此榜单选拔参赛队员")
        if data.chooseRank and data.chooseRank ~= "" then
            self._lastMatch = json.decode(data.chooseRank)
        else
            self._lastMatch = { rank_type = MatchContributeConfig.TRANSFER_50_RANK[MatchContributeConfig.RankType.WIN_RATE], game_id = 0, ren_count = 0 }
        end
        if TeaHouse and TeaHouse.manager and TeaHouse.manager.teahouseMain and TeaHouse.manager.teahouseMain.updateChoseRank then
            TeaHouse.manager.teahouseMain:updateChoseRank()
        end
    end
end

-- 是否展示报名弹窗
function PeakRaceModule:isShowApply(teaNumber)
    if not teaNumber then
        return false
    end
    if not XH.lobby:getModule("Lobby"):isShowPeakRace() then
        return false
    end
    local key = self:getMatchKey(teaNumber)
    local data = cc.UserDefault:getInstance():getStringForKey(key, "")
    local start = os.date("%Y-%m", os.time())
    if data ~= start then
        XH.viewManager:openView("ApplyView", nil, { teaId = teaNumber })
        return true
    end
    return false
end

function PeakRaceModule:getMatchKey(teaNumber)
    return "KW_SHOW_MONTH_MATCH_" .. teaNumber .. "_" .. XH.areaData:getLobbyID() .. "_" .. XH.playerData:getNumberID()
end

return PeakRaceModule