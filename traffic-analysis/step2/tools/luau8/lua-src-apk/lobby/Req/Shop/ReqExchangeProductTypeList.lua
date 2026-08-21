local ReqProductList = class("ReqProductList", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

local ReqURL = UrlConf.URL_EXCHANGESHOP

function ReqProductList:ctor()
    ReqProductList.super.ctor(self)

end

function ReqProductList:start(data, timeoutTime)
    if ReqProductList.super.start(self, timeoutTime) == false then
        return
    end
    local timestamp = socket.gettime()
    local param = {}
    table.insert(param,"areaid=" .. data.areaId)
    table.insert(param,"gameid=" .. data.gameid)
    table.insert(param,"numid=" .. data.numId)
    table.insert(param,"prop_type=".. data.productTypeEx)
    table.insert(param,"sid=" .. data.windMsgId)
    table.insert(param,"timestamp=" .. timestamp)
    table.insert(param,"uid=" .. data.uid)
    table.insert(param,"reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_STORE_PRODUCT_TYPE_LIST)

    local httpparme = "?" .. table.concat(param, "&")
    local strUrl = ReqURL .. httpparme
    XH.httpManager:RequestGet(HttpDefine.URL_STORE_PRODUCT_TYPE_LIST, strUrl, 4, handler(self, self.onHttpResult),nil,true)
end

function ReqProductList:success(data)
    ReqProductList.super.success(self,data)
end

function ReqProductList:fail(data)
    ReqProductList.super.fail(self,data)
end

function ReqProductList:timeout(data)
    ReqProductList.super.timeout(self,data)
end

function ReqProductList:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        self:success(httpData.data)
    else
        self:setMessage(httpData.message)
        self:fail()
    end
end

return ReqProductList

�