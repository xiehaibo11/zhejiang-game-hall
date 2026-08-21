local reqChangeBindState = class("reqChangeBindState", XH.Req)

function reqChangeBindState:start(thirdInfo,timeout)  
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/inactive-unread-log"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.get(apiName,thirdInfo,handler(self,self.onHttpStateCallBack))
end

function reqChangeBindState:onHttpStateCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then
        local errorCode = tonumber(response.code)
        if errorCode == 0 then
            self:success(response)
        end
    else
        self:fail()
    end
end

return reqChangeBindState
