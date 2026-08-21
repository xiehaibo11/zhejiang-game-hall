local ReqCheckBind = class("ReqCheckBind", XH.Req)

-- checkbind
function ReqCheckBind:start(thirdInfo,timeout)
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/check-bind"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.post(apiName,thirdInfo,handler(self, self.onHttpCheckBindCallBack))
end

function ReqCheckBind:onHttpCheckBindCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then  
        local errorCode = tonumber(response.code)
        if errorCode == 1060 then
            print("未绑定")
        elseif errorCode == 1050 then
            print("参数错误")
        elseif errorCode == 1051 then
            print("房间不存在")
        elseif errorCode == 1051 then
            print("公众号不存在")
        elseif errorCode == 0 then
            print("已绑定")   
        end
        local msg = json.encode(response)
        self:setMessage(msg)
        self:success(errorCode)
    else
        self:fail()
    end

end

return ReqCheckBind
=