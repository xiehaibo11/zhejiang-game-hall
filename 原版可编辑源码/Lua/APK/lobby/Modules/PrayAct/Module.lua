local PrayActModule = class("PrayActModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

PrayActModule.EVENT_INVITE_PRAYACT_INFO = "EVENT_INVITE_PRAYACT_INFO"
PrayActModule.EVENT_INVITE_PRAYACT_DRAW = "EVENT_INVITE_PRAYACT_DRAW"
PrayActModule.EVENT_INVITE_PRAYACT_DRAW_GOLD = "EVENT_INVITE_PRAYACT_DRAW_GOLD"
function PrayActModule:ctor()
    PrayActModule.super.ctor(self)
end

function PrayActModule:getReqConfig()
    return {
        -- ReqSystemTimes = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onReqSystemTimesCallBack}
        ReqPrayActInfo = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onRespPrayActInfoCallBack },
        ReqPrayActDraw = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onRespPrayActDrawCallBack },
        ReqPrayActDrawGold = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onRespPrayActDrawGoldCallBack },
    }
end

function PrayActModule:reqPrayActInfo()
    self:startReq("ReqPrayActInfo", XH.playerData:getNumberID(), TaskDefine.APPID, TaskDefine.PROCESSID, 
                TaskDefine.TASK_ID.TASK_TYPE_PRAY_ACT_INFO, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PrayActModule:reqPrayActDraw()
    self:startReq("ReqPrayActDraw", XH.playerData:getNumberID(), TaskDefine.APPID, TaskDefine.PROCESSID, 
                TaskDefine.TASK_ID.TASK_TYPE_PRAY_ACT_GET_AWARD, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PrayActModule:reqPrayActDrawGold()
    self:startReq("ReqPrayActDrawGold", XH.playerData:getNumberID(), TaskDefine.APPID, TaskDefine.PROCESSID, 
                TaskDefine.TASK_ID.TASK_TYPE_PRAY_ACT_GET_GOLD, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function PrayActModule:onRespPrayActInfoCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.acData ~= "" then
             local jsonData = json.decode(data.acData) or {}
             self._PrayActInfo = jsonData
             if jsonData ~= nil then
                self:dispatchEvent({name = PrayActModule.EVENT_INVITE_PRAYACT_INFO,data = jsonData})
             end
        end
    end
end

function PrayActModule:onRespPrayActDrawCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
         local jsonData = json.decode(data.acData) or {}
         self._PrayActInfo = jsonData
         if jsonData ~= nil then
            --self:dispatchEvent({name = PrayActModule.EVENT_INVITE_PRAYACT_INFO,data = jsonData.selectkind})
            self:dispatchEvent({name = PrayActModule.EVENT_INVITE_PRAYACT_DRAW,data = jsonData})
         end
    else
        local message = cell:getMessage()
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		},message)
    end
end

function PrayActModule:onRespPrayActDrawGoldCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
         local jsonData = json.decode(data.acData) or {}
         self._PrayActInfo = jsonData
         if jsonData ~= nil then
            jsonData.addgold = true
            self:dispatchEvent({name = PrayActModule.EVENT_INVITE_PRAYACT_INFO,data = jsonData})
            self:dispatchEvent({name = PrayActModule.EVENT_INVITE_PRAYACT_DRAW_GOLD,data = jsonData})
         end
    else
        local message = cell:getMessage()
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		},message)
    end
end


return PrayActModule