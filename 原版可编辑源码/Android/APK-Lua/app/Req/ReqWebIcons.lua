local ReqWebIcons = class("ReqWebIcons", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqWebIcons:ctor()
    ReqWebIcons.super.ctor(self)
end

function ReqWebIcons:start()
    local areaID = XH.areaData:getAreaID()
    local timeStamp = os.time()
    local packageType = 0

    local httpParme
    httpParme = "areaid=" .. areaID .. "&package_type=" .. packageType .. "&timestamp=" .. timeStamp

    local strUrl = UrlConf.URL_GOPALMAPI .. "?" .. httpParme .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_WEB_ICONS
    XH.httpManager:RequestGet(XH.HttpDefine.HTTP_ID_WEB_ICONS, strUrl, 4, handler(self, self.onRespWebIconsList), nil, true)
end

function ReqWebIcons:onRespWebIconsList(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
            return
        end
    end
    self:fail()
end

return ReqWebIcons