local GoldReqExchangeProduct = class("GoldReqExchangeProduct", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldReqExchangeProduct:start(sid, lastAreaId, lastNumId, id, propType, obj, callFunc, timeoutTime)
    if GoldReqExchangeProduct.super.start(self, timeoutTime) == false then
        return
    end
    local data = {}
    table.insert(data, "sid=" .. sid)
    table.insert(data, "cost_areaid=" .. lastAreaId)
    table.insert(data, "cost_numid=" .. lastNumId)
    table.insert(data, "id=" .. id)
    table.insert(data, "prop_type=" .. propType)
    table.insert(data, "areaid=" .. GoldAreaConfig.AreaID)
    table.insert(data, "numid=" .. GoldPlayerData.NumId)
    table.insert(data, "uid=" .. un.StringUtils.GB_18030_2000_TO_UTF8(GoldPlayerData.UserId))
    local param = table.concat(data, "&")
    self._callFunc = callFunc
    self._obj = obj
    self._propType = propType
    NG.httpManager50:RequestGet("", UrlConf.REQ_STORE_EXCHANGE_PRODUCT .. "?" .. param, 4, handler(self, self.onHttpResult), nil, true)
end

function GoldReqExchangeProduct:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        httpData.cCallFunc = self._callFunc
        httpData.obj = self._obj
        httpData.propType = self._propType
        self:success(httpData)
    else
        self:setMessage(httpData.message)
        self:fail()
    end
end

return GoldReqExchangeProduct

a