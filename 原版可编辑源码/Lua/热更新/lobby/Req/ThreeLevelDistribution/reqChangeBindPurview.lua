local reqChangeBindPurview = class("reqChangeBindPurview", XH.Req)

function reqChangeBindPurview:start(thirdInfo,timeout)  
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/check-inactive-rebind"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.get(apiName,thirdInfo,handler(self,self.onHttpPurviewCallBack))
end

function reqChangeBindPurview:onHttpPurviewCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then
        local parme = {}
        parme.response = cjson.decode(response.data)
        parme.errorCode = tonumber(response.code)
        self:success(parme)
    else
        self:fail()
    end
end

return reqChangeBindPurview
