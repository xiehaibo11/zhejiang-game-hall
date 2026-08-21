local ReqFirstCharge = class("ReqFirstCharge",XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqFirstCharge:start(aid, secret, appid, timeout)
    if ReqFirstCharge.super.start(self,timeout) == false then
        return
    end
    
    local from = "pc"
    aid = aid
    appid = appid
    local timestamp = os.time()
    secret = secret
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID()..numid..timestamp..math.random(9999)
    local signatureStr = "app_id="..appid.."&numid="..numid.."&secret="..secret.."&timestamp="..timestamp.."&uuid="..uuid
    local signature = XH.SysTool:md5_encode(signatureStr)
    local param = "from=%s&app_id=%d&timestamp=%s&signature=%s&numid=%d&uid=%s&uuid=%s&aid=%d"
    param = string.format(param, from, appid, timestamp, signature, numid, uid, uuid, aid)
    local strUrl = UrlConf.REQ_FIRST_CHARGE_INFO .. param
    XH.httpManager:RequestGet(HttpDefine.REQ_FIRST_CHARGE_INFO, strUrl, 4, handler(self, self.onHttpFirstChargeCallBack))

end

function ReqFirstCharge:onHttpFirstChargeCallBack(eType, status, response)
    if eType == HttpDefine.REQ_FIRST_CHARGE_INFO then
        if status == 200 then
            if response.status == 0 then
                self:success(response)
            else
                self:setMessage(response)
                self:fail()
            end
        else
            self:setMessage("PHONE_CODE_ERROR")
            self:fail()
        end
    end
end

return ReqFirstCharge