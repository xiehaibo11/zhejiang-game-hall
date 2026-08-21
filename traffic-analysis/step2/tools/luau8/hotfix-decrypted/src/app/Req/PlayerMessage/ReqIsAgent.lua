local ReqIsAgent = class("ReqIsAgent", XH.Req)

function ReqIsAgent:ctor()
    ReqIsAgent.super.ctor(self)    
    self._callback = nil
end


function ReqIsAgent:start(ownerId) 
    if ReqIsAgent.super.start(self,15) == false then
        return
    end 
    
    if not ownerId then
       ownerId = XH.playerData:getNumberID()
    end
    
    local infoList = {}
    infoList["numid"] = ownerId
    infoList["rid"] = XH.areaData:getApiHubRid() -- 52 乐清

    local svrName = XH.areaData:getAreaTypeID() > 1000 and "agenttest" or "agent"
    local apiName = "fengxin/numid-check-agent"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
	local reqApihub = require("app.Req.ReqApihub")
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    self._callback = function(httpid, status, response, origin)--修改
        self._requesting = false
        if origin.readyState == 4 then  --4表示完成
            if origin == nil then
                return
            end
            local errCode = tonumber(response.code)
            if errCode == nil then return end
            if response == nil then
                return
            end
            if errCode == 0 then
                local tmpData = cjson.decode(response.data)
                self:success(tmpData)
            else
                self:fail(errCode)
            end
        else
            self:fail()
        end
    end

    svr.get(apiName,infoList,self._callback)
end

return ReqIsAgentk