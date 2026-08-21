local ReqLeisureEntrance = class("ReqLeisureEntrance", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqLeisureEntrance:ctor()
    ReqLeisureEntrance.super.ctor(self)
end

function ReqLeisureEntrance:start()
    local areaID = XH.areaData:getAreaID()
    local timeStamp = os.time()
    local packageType = 0
    local numid = XH.playerData:getNumberID()
    local channelID = XH.SysTool:getChannelID()
    if require("app.Config.GlobalConfig").IsDebug then
        channelID = 1
    end

    local httpParme
    httpParme = "areaid=" .. areaID .. "&package_type=" .. packageType .. "&timestamp=" .. timeStamp .. "&numid=" .. numid .. "&channel_ids=" .. channelID

    local strUrl = UrlConf.URL_GOPALMAPI .. "?" .. httpParme .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_LEISURE_ENTRANCE
    XH.httpManager:RequestGet(XH.HttpDefine.HTTP_ID_LEISURE_ENTRANCE, strUrl, 4, handler(self, self.onRespLeisureEntrance), nil, true)
end

function ReqLeisureEntrance:onRespLeisureEntrance(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
            return
        end
    end
    self:fail()
end

return ReqLeisureEntrance�