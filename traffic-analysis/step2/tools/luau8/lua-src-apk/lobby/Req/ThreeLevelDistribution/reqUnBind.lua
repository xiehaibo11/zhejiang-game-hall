local reqBind = class("reqUnBind", XH.Req)

-- Bind
function reqBind:start(thirdInfo,timeout)  
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/unbind"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.post(apiName,thirdInfo,handler(self,self.onHttpBindCallBack))
end

function reqBind:onHttpBindCallBack(httpid, status, response, origin)
    if origin.readyState == 4 then  
        local errorcode = tonumber(response.code)
        if errorcode == 0 then
            self:setMessage("解绑成功！")
        elseif errorcode == 1060 then
            self:setMessage("元宝不足或请求异常，解绑失败！")
        elseif errorcode == 1050 then
            self:setMessage("参数错误！")
        elseif errorcode == 1051 then
            self:setMessage("房间不存在！")
        elseif errorcode == 1052 then
            self:setMessage("玩家未绑定！")
        elseif errorcode == 1053 then
            self:setMessage("玩家已解绑！")
        elseif errorcode == 1054 then
            self:setMessage("解绑与上次解绑时间间隔过短！")
        elseif errorcode == 1056 then
            self:setMessage("解绑异常！")
        elseif errorcode == 1099 then
            self:setMessage("正在处理中，请稍后再试！")
        else 
            self:setMessage("未知错误,请检查房卡数量并联系客服！")
        end
        self:success(errorcode)
    else
        self:setMessage("解绑失败！")
        self:fail()
    end
end

return reqBind
G