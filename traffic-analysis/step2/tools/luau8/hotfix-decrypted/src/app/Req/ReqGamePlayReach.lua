local ReqGamePlayReach = class("ReqGamePlayReach", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGamePlayReach:ctor()
    ReqGamePlayReach.super.ctor(self)
end

function ReqGamePlayReach:start()
    local httpParme = "areaid=" .. XH.areaData:getAreaID()
    local strUrl = UrlConf.URL_PLAYREACH .. "?" .. httpParme
    XH.httpManager:RequestGet(XH.HttpDefine.REQ_GAMEPLAY_REACH, strUrl, 4, handler(self, self.onRespGamePlayReach))
end

function ReqGamePlayReach:onRespGamePlayReach(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
            return
        end
    end
    self:fail()
end

return ReqGamePlayReach
�