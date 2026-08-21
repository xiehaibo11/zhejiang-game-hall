local MatchModule = class("MatchModule", XH.ModuleBase)

MatchModule.EVENT_UPDATE_PEAKRACE = "EVENT_UPDATE_PEAKRACE"

function MatchModule:ctor()
    MatchModule.super.ctor(self)
    self._peakRaceInfo = nil -- 巅峰赛信息
end

function MatchModule:getReqConfig()
    return {
        CellPeakMatchInfo = { reqPath = "lobby.Req.Match.CellPeakMatchInfo", callBack = self.respPeakMatchInfo },
    }
end

-- 请求巅峰赛信息
function MatchModule:reqPeakMatchInfo()
    self:startReq("CellPeakMatchInfo")
end

function MatchModule:respPeakMatchInfo(cell, flag, data)
    if flag == XH.Req.TYPE.SUCCESS then
        self._peakRaceInfo = data
        self:dispatchEvent({ name = self.EVENT_UPDATE_PEAKRACE })
    end
end

function MatchModule:getPeakRaceInfo()
    return self._peakRaceInfo
end

return MatchModule