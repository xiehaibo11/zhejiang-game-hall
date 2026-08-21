local ReqDoBindAgent = class("ReqDoBindAgent",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqDoBindAgent:start(agentid, numid, timeout)
    if ReqDoBindAgent.super.start(self,timeout) == false then
        return
    end
    
    local nAid = agentid
    local nNumid = numid
    local nRid = XH.areaData:getApiHubRid()
    local nWindid = XH.areaData:getAreaWindID()
    local nSecret = XH.areaData:getBindAgentSecret()

    local signatureStr = "aid="..nAid.."&numid="..nNumid.."&rid="..nRid.."&sid="..nWindid.."&secret="..nSecret
    local signature = XH.SysTool:md5_encode(signatureStr)
    local param = "aid=%s&numid=%d&rid=%d&sid=%d&signature=%s"
    param = string.format(param, nAid, nNumid, nRid, nWindid, signature)
    local strUrl = UrlConf.HTTP_ID_DOBIND_AGENT .. param
    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_DO_BIND_AGENT, strUrl, 4, handler(self, self.onHttpDoBindAgentCallBack))

end

function ReqDoBindAgent:onHttpDoBindAgentCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_DO_BIND_AGENT then
        if status == 200 then
            if response.code == 0 then
                self:success(response)
            else
                self:fail(response)
            end
        else
            self:setMessage("MSG_SEND_TIME_OUT")
            self:fail()
        end
    end
end

return ReqDoBindAgent�