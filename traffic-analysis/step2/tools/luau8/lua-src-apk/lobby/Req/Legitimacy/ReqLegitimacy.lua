local ReqLegitimacy = class("ReqLegitimacy",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqLegitimacy:start(numid, timeout)
    if ReqLegitimacy.super.start(self,timeout) == false then
        return
    end
    local areaid = XH.areaData:getAreaID()
    local nAppId = XH.areaData:getNotifAppid()
    local nSecret = XH.areaData:getNotifSecret()
    local timestamp = os.time()
    local channelid = XH.SysTool:getChannelID()
    local gametype = "cty"
    local ip = un.Device.getIp()

    local signatureStr = "app_id="..nAppId.."areaid="..areaid.."numid="..numid.."user_id=" .. numid .."timestamp="..timestamp.."channelid="..channelid.."gametype="..gametype.."ip="..ip..nSecret
    local signature = XH.SysTool:md5_encode(signatureStr)
    local param = "?app_id=%d&areaid=%d&numid=%d&user_id=%d&timestamp=%d&channelid=%s&gametype=%s&ip=%s&signature=%s"
    param = string.format(param, nAppId, areaid, numid, numid, timestamp, channelid, gametype, ip, signature)
    local strUrl = UrlConf.URL_GOPALMAPI .. "?" .. param .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_LEGITIMACY
    print(strUrl)
    XH.httpManager:RequestGet(HttpDefine.URL_LEGITIMACY_CHECK, strUrl, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpLegitimacyCallBack), nil, true)
end

function ReqLegitimacy:onHttpLegitimacyCallBack(eType, status, response)
    if eType == HttpDefine.URL_LEGITIMACY_CHECK then
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

return ReqLegitimacy)