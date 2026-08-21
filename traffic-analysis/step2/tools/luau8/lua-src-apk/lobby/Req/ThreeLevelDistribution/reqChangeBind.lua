local reqChangeBind = class("reqChangeBind", XH.Req)

function reqChangeBind:start(thirdInfo,timeout)  
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/inactive-rebind"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.post(apiName,thirdInfo,handler(self,self.onHttpChangeBindCallBack))
end

function reqChangeBind:onHttpChangeBindCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then
        local parme = {}
        parme.response = response
        parme.errorCode = tonumber(response.code)
        self:success(parme)
    else
        self:fail()
    end
end

return reqChangeBind
�