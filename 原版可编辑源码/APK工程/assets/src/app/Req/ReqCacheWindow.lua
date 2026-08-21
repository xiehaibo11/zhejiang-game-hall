local ReqCacheWindow = class("ReqCacheWindow", XH.ReqHttp)

local UrlConf = require("app.Config.UrlConf")

function ReqCacheWindow:ctor()
    ReqCacheWindow.super.ctor(self)
end

function ReqCacheWindow:start()
    local channel = XH.SysTool:getChannelID()
    -- if device.platform ~= "android" then
    --     channel = 30002
    -- end
    local tagInfo = XH.playerData:getAllTags()

    local playerTag = {}
    for k,_ in pairs(tagInfo) do
        table.insert(playerTag, k)
    end
    playerTag = table.concat(playerTag, ",")

    local windMsgID = XH.areaData:getAreaWindID()
    local lobbyID = XH.areaData:getLobbyID()
    local areaID = XH.areaData:getAreaID()
    local timeStamp = os.time()
    local numid = XH.playerData:getNumberID()
    local bundleVersion =  XH.SysTool:GetBundleVersion() or "1.0.0"

    local httpParme
    httpParme = "areaid=" .. areaID .. "&channel=" .. channel .. "&lobbyid=" .. lobbyID ..
    "&numid=" .. numid .. "&timestamp=" .. timeStamp .. "&version=" .. bundleVersion .. "&wid=" .. windMsgID
    if playerTag ~= "" then
        httpParme = "areaid=" .. areaID .. "&channel=" .. channel .. "&lobbyid=" .. lobbyID ..
        "&numid=" .. numid .. "&player_tag=" .. playerTag .. "&timestamp=" .. timeStamp .. "&version=" .. bundleVersion .. "&wid=" .. windMsgID
    end
    local strUrl = UrlConf.URL_PALMAPI .. "?" .. httpParme .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_CACHE_WINDOW
    XH.httpManager:RequestGet(XH.HttpDefine.REQ_CACHE_WINDOW, strUrl, 4, handler(self, self.onRespCacheWindowInfo),nil, true)
end

function ReqCacheWindow:onRespCacheWindowInfo(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
            return
        end
    end
    self:fail()
end

return ReqCacheWindow