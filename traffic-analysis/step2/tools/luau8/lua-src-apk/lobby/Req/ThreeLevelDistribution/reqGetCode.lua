local reqGetCode = class("reqGetCode", XH.Req)

function reqGetCode:start(thirdInfo,timeout)
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/get-code"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.post(apiName,thirdInfo,handler(self, self.onHttpGetCodeCallBack))
end

function reqGetCode:onHttpGetCodeCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then  --4表示完成
        local errorCode = tonumber(response.code)
        if errorCode == 0 then
            self:setMessage(errorCode)
            self:success(response)
        elseif errorCode == 1050 then
            self:setMessage("参数缺失!")
            self:fail()
        elseif errorCode == 1051 then
            self:setMessage("系统不存在!")
            self:fail()
        else
            self:setMessage(response)
            self:fail()
        end
    else
        self:fail()
    end
end

return reqGetCode
�