local SaleGiftBagModule = class("SaleGiftBagModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")
local TaskID =  TaskDefine.TASK_ID

SaleGiftBagModule.TASK_TYPE_ID_DISCOUNT = "TASK_TYPE_ID_DISCOUNT"
SaleGiftBagModule.TASK_TYPE_ID_START_DISCOUNT = "TASK_TYPE_ID_START_DISCOUNT"
SaleGiftBagModule.TASK_TYPE_ID_BUY_DISCOUNT = "TASK_TYPE_ID_BUY_DISCOUNT"
SaleGiftBagModule.EVENT_SHOW_DISCOUNT_GIFT = "EVENT_SHOW_DISCOUNT_GIFT"
function SaleGiftBagModule:ctor()
    SaleGiftBagModule.super.ctor(self)

end
function SaleGiftBagModule:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.MatchLinkProtocol.RespNotifyTaskPercent.event_key, callBack = "onRespNotifyTaskPercent" },
    }
end

--获取srs组
function  SaleGiftBagModule:getSrsGroupID()
    return  XH.areaData:getSrsGroupID()
end
function SaleGiftBagModule:reqTaskProtocol(taskid, paramStr)
    paramStr = paramStr or ""
    local srsGroupID = self:getSrsGroupID()
    local ReqTaskProtocol = require("app.Req.Task.ReqTaskProtocol")
    local reqTaskProtocol = ReqTaskProtocol:new()
    reqTaskProtocol:addReqCallBack(self, self.onCellReqTaskProtocolCallBack)
    reqTaskProtocol:start(taskid, TaskDefine.PROTOID, TaskDefine.APPID, srsGroupID, XH.KW_CONFIG_LOGIC_TIME_OUT, paramStr)
end
function SaleGiftBagModule:onRespNotifyTaskPercent(event)
    local respData = XH.MatchLinkProtocol.RespNotifyTaskPercent:new()
    respData:bistream(event.msg.buff, event.msg.len)
    if respData.nTaskId == TaskID.TASK_TYPE_ID_DISCOUNT_NOTICE then
        self:dispatchEvent({name = self.EVENT_SHOW_DISCOUNT_GIFT, msg = respData.acData})
    end
end

function SaleGiftBagModule:onCellReqTaskProtocolCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if data.taskId == TaskID.TASK_TYPE_ID_DISCOUNT then
            if data.acData and data.acData ~= "" and data.acData ~= "nil" then 
                local discountData = json.decode(data.acData)
                self:dispatchEvent({name = SaleGiftBagModule.TASK_TYPE_ID_DISCOUNT, msg = discountData})
            end
        elseif data.taskId == TaskID.TASK_TYPE_ID_BUY_DISCOUNT then
            if data.acData and data.acData ~= "" and data.acData ~= "nil" then 
                self:dispatchEvent({name = SaleGiftBagModule.TASK_TYPE_ID_BUY_DISCOUNT, msg = data.acData})
            end
        end
    end
end
-------task请求
function SaleGiftBagModule:reqDiscountGiftBag(bShowLayer)
    bShowLayer = bShowLayer or 0
    self:reqTaskProtocol(TaskID.TASK_TYPE_ID_DISCOUNT, ";showLayer="..bShowLayer)
end
function SaleGiftBagModule:reqStartDiscountGiftBag()
    self:reqTaskProtocol(TaskID.TASK_TYPE_ID_START_DISCOUNT)
end
function SaleGiftBagModule:reqBuyDiscountGiftBag()
    self:reqTaskProtocol(TaskID.TASK_TYPE_ID_BUY_DISCOUNT)
end


return SaleGiftBagModuleL