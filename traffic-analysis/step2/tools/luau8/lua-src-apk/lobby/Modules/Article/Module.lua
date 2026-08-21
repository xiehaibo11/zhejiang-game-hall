local ArticleModule = class("ArticleModule", XH.ModuleBase)

ArticleModule.EVENT_ARTICLE_LIST_INFO = "EVENT_ARTICLE_LIST_INFO"

function ArticleModule:ctor()
    ArticleModule.super.ctor(self)
    self._list = {}
end

function ArticleModule:getReqConfig()
    return {
        ReqArticleListInfo = { reqPath = "lobby.Req.Configuration.ReqArticleList", callBack = self.respArticleListInfo },
        ReqArticleThrow = { reqPath = "lobby.Req.Configuration.ReqArticleThrow", callBack = self.respArticleThrow },
    }
end

function ArticleModule:getCurIndex()
    return self._index or 0
end

function ArticleModule:setCurIndex(idx)
    self._index = idx
end

function ArticleModule:getArticleList()
    return self._list
end

function ArticleModule:reqArticleListInfo()
    if device.platform ~= "android" and device.platform ~= "windows" then
        return
    end
    self:startReq("ReqArticleListInfo", {}, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function ArticleModule:respArticleListInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data and data.data then
            local ok, jsondata = pcall(cjson.decode, data.data)
            if ok and jsondata then
                self._list = jsondata.list or {}
            end
        end
        self:dispatchEvent({ name = self.EVENT_ARTICLE_LIST_INFO })
    end
end

function ArticleModule:reqArticleThrow()
    if device.platform ~= "android" and device.platform ~= "windows" then
        return
    end
    local title = ""
    local url = ""
    local idx = self:getCurIndex()
    if self._list and self._list[idx] then
        title = self._list[idx].title
        url = self._list[idx].url
    end
    local data = {}
    data.identifier = XH.SysTool:GetDevid()
    data.android_id = XH.sdkManager:getDeviceId()
    data.title = title
    data.url = url
    data.model = un.Device.getDeviceName()
    data.manufactor = "" --un.Device.getOsName()
    data.os_type = device.platform
    data.os_version = un.Device.getOsName()
    data.client_ip = un.Device.getIp()
    self:startReq("ReqArticleThrow", data, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function ArticleModule:respArticleThrow()
    -- donothing
end

return ArticleModule�