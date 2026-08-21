local reqCheckInvateCode = class("reqCheckInvateCode", XH.Req)

-- checkbind
function reqCheckInvateCode:start(thirdInfo,timeout)  
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/code-bind"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.post(apiName,thirdInfo,handler(self, self.onHttpCheckInvateCodeCallBack))
end    
    
function reqCheckInvateCode:onHttpCheckInvateCodeCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then  --4表示完成
        local errorcode = tonumber(response.code)
        if errorcode == 1070 then
            self:setMessage("参数缺失！")
            self:fail()
        elseif errorcode == 1071 then
            self:setMessage("房间不存在！")
            self:fail()
        elseif errorcode == 1072 then
            self:setMessage("此邀请码不存在！")
            self:fail()
        elseif errorcode == 0 then
            local backInfo = json.encode(response)
            self:setMessage(backInfo)
            local data = response.data
            self:success(cjson.decode(data))
        else 
            self:setMessage("未知错误("..errorcode..")")
            self:fail()
        end
    else
        self:fail()
    end
end

return reqCheckInvateCode
