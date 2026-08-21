local ReqGameCenter = class("ReqGameCenter", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGameCenter:ctor()
    ReqGameCenter.super.ctor(self)
end

function ReqGameCenter:start()
    local httpParme = "areaid=" .. XH.areaData:getAreaID()
    local strUrl = UrlConf.URL_GAMECENTER .. "?" .. httpParme
    XH.httpManager:RequestGet(XH.HttpDefine.HTTP_ID_GAMECENTER, strUrl, 4, handler(self, self.onRespGameCenter))
end

function ReqGameCenter:onRespGameCenter(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
            return
        end
    end
    self:fail()
end

return ReqGameCenter
�