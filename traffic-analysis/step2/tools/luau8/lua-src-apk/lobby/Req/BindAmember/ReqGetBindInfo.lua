local ReqGetBindInfo = class("ReqGetBindInfo",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqGetBindInfo:start(numid, timeout)
    if ReqGetBindInfo.super.start(self,timeout) == false then
        return
    end
    
    local nNumid = numid
    local nRid = XH.areaData:getApiHubRid()
    local nWindid = XH.areaData:getAreaWindID()
    local nSecret = XH.areaData:getBindAgentSecret()

    local signatureStr = "numid="..nNumid.."&rid="..nRid.."&sid="..nWindid.."&secret="..nSecret
    local signature = XH.SysTool:md5_encode(signatureStr)
    local param = "numid=%d&rid=%d&sid=%d&signature=%s"
    param = string.format(param, nNumid, nRid, nWindid, signature)
    local strUrl = UrlConf.HTTP_ID_GETBIND_INFO .. param
    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_GETBIND_INFO, strUrl, 4, handler(self, self.onHttpGetBindInfoCallBack))

end

function ReqGetBindInfo:onHttpGetBindInfoCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_GETBIND_INFO then
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

return ReqGetBindInfox