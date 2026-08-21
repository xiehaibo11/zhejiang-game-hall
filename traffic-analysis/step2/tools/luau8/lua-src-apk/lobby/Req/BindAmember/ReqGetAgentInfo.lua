local ReqGetAgentInfo = class("ReqGetAgentInfo",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqGetAgentInfo:start(nAgent, timeout)
    if ReqGetAgentInfo.super.start(self,timeout) == false then
        return
    end
    
    local nAid = nAgent
    local nRid = XH.areaData:getApiHubRid()
    local nWindid = XH.areaData:getAreaWindID()
    local nSecret = XH.areaData:getBindAgentSecret()

    local signatureStr = "aid="..nAid.."&rid="..nRid.."&sid="..nWindid.."&secret="..nSecret
    local signature = XH.SysTool:md5_encode(signatureStr)
    local param = "aid=%s&rid=%d&sid=%d&signature=%s"
    param = string.format(param, nAid, nRid, nWindid, signature)
    local strUrl = UrlConf.HTTP_ID_GETAGENT_INFO .. param
    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_GETAGENT_INFO, strUrl, 4, handler(self, self.onHttpGetAgentInfoCallBack))

end

function ReqGetAgentInfo:onHttpGetAgentInfoCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_GETAGENT_INFO then
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

return ReqGetAgentInfo{