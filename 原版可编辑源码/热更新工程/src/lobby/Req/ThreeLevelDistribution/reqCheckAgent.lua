local reqCheckAgent = class("reqCheckAgent", XH.Req)

-- checkbind
function reqCheckAgent:start(thirdInfo,timeout)
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/numid-check-agent"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.post(apiName,thirdInfo,handler(self, self.onHttpCheckAgentCallBack))

end    
    
function reqCheckAgent:onHttpCheckAgentCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then  
        local errorcode = tonumber(response.code)
        if errorcode == 1050 then
            self:setMessage("参数缺失！")
            self:fail()
        elseif errorcode == 1051 then
            self:setMessage("用户不存在！")
            self:fail()
        elseif errorcode == 1056 then
            self:setMessage("系统异常！")
            self:fail()
        elseif errorcode == 0 then
            local backInfo = json.encode(response)
            self:setMessage(backInfo)
            self:success(errorcode)
        else 
            self:setMessage("未知错误")
            self:fail()
        end
    else
        self:fail()
    end
end

return reqCheckAgent
