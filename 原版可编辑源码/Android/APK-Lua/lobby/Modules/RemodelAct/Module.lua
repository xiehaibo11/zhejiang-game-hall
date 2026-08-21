local TeaHouseRemodelActModule = class("TeaHouseRemodelActModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

TeaHouseRemodelActModule.EVENT_REMODEL_ACT_GETDATA = "EVENT_REMODEL_ACT_GETDATA"
TeaHouseRemodelActModule.EVENT_REMODEL_AWARD_DATA = "EVENT_REMODEL_AWARD_DATA"
TeaHouseRemodelActModule.EVENT_REMODEL_FINALAWARD_DATA = "EVENT_REMODEL_FINALAWARD_DATA"

TeaHouseRemodelActModule.RemodelTaskSubID = {
    ["activityInfo"] = 1000,
    ["reqAward"] = 1001,
    ["ruleText"] = 1002,
    ["finalAward"] = 1003,
}

function TeaHouseRemodelActModule:ctor()
    TeaHouseRemodelActModule.super.ctor(self)
end

function TeaHouseRemodelActModule:getReqConfig()
    return {
        ReqRemodelActData = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onRespRemodelTaskDataCallBack },
    }
end

function TeaHouseRemodelActModule:reqRemodelActData(teaId,taskSubId)
    local specialStr = ";nTaskSubId=" .. taskSubId .. ";nTeaId=" .. teaId or  0
    XH.TipTool.showLoading()
    self:startReq("ReqRemodelActData", TaskDefine.KW_REMODEL_ACT, TaskDefine.PROTOID, TaskDefine.APPID, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, specialStr)
end

function TeaHouseRemodelActModule:onRespRemodelTaskDataCallBack(cell, ntype, data)
    XH.TipTool.hideLoading()
    if ntype == cell.TYPE.SUCCESS then
        if data and data.acData and data.acData ~= "" then
            local luaTabel = json.decode(data.acData)
            if next(luaTabel) and luaTabel.actInfo then
                if luaTabel.type == self.RemodelTaskSubID["activityInfo"]  then
                    self:dispatchEvent({name = TeaHouseRemodelActModule.EVENT_REMODEL_ACT_GETDATA, data = luaTabel.actInfo})
                elseif luaTabel.type == self.RemodelTaskSubID["reqAward"]  then
                    self:dispatchEvent({name = TeaHouseRemodelActModule.EVENT_REMODEL_AWARD_DATA, data = luaTabel.actInfo})
                elseif luaTabel.type == self.RemodelTaskSubID["finalAward"]   then
                    self:dispatchEvent({name = TeaHouseRemodelActModule.EVENT_REMODEL_FINALAWARD_DATA, data = luaTabel.actInfo})
                end
            end
        end
    end
end

return TeaHouseRemodelActModule