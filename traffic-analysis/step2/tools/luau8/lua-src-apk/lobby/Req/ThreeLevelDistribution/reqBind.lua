local reqBind = class("reqBind", XH.Req)

-- Bind
function reqBind:start(thirdInfo,timeout)  
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/bind"

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
            self:setMessage("绑定成功！")
        elseif errorcode == 1050 then
            self:setMessage("参数缺失！")
        elseif errorcode == 1051 then
            self:setMessage("房间不存在！")
        elseif errorcode == 1052 then
            self:setMessage("公众号不存在！")
        elseif errorcode == 1053 then
            self:setMessage("玩家已绑定！")
        elseif errorcode == 1054 then
            self:setMessage("邀请码错误！")
        elseif errorcode == 1055 then
            self:setMessage("玩家信息获取异常！")
        else 
            self:setMessage("未知错误,请检查房卡数量并联系客服！")
        end
        self:success(errorcode)
    else
        self:setMessage("绑定失败！")
        self:fail()
    end
end

return reqBind
Y