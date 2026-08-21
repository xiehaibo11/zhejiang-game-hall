local ReqPoolsByAid = class("ReqPoolsByAid", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqPoolsByAid:ctor()
    ReqPoolsByAid.super.ctor(self)
end

function ReqPoolsByAid:start(aid, pid, sid, timeout)
    if ReqPoolsByAid.super.start(self, timeout) == false then
        return
    end

    aid = aid
    sid = sid or 0
    pid = pid or ""
    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)

    local data = {}
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "uuid=" .. uuid)
    table.insert(data, "aid=" .. aid)
    table.insert(data, "sid=" .. sid)
    table.insert(data, "pid=" .. pid)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_POOLS_AID_PID)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpReqPoolsByAidCallBack),nil,true)
end

function ReqPoolsByAid:onHttpReqPoolsByAidCallBack(eType, status, response)
    if status == 200 then
       print(response)
       if response.code == 0 then
            self:success(response.data)
       else
            self:success()
       end
   else
       self:fail()
   end
end

return ReqPoolsByAid "