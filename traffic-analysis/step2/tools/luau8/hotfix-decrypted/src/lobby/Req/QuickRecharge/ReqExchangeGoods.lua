local ReqExchangeGoods = class("ReqExchangeGoods", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

local URL = UrlConf.URL_EXCHANGESHOP

function ReqExchangeGoods:start(itemID, propType, sceneid, timeoutTime)
    if ReqExchangeGoods.super.start(self, timeoutTime) == false then
        return
    end
    self._sceneid = sceneid
    self._itemID = itemID
    self._propType = propType
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
        XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID,timeoutTime)
end

function ReqExchangeGoods:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local areaId = XH.areaData:getAreaID()
        local numid = XH.playerData:getNumberID()
        local sid = XH.areaData:getAreaWindID()
        local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
        local ssid = string.urlencode(data)
        local urlParam = "areaid=%d&numid=%s&sid=%d&uid=%s&ssid=%s&id=%d&prop_type=%d"
        local urldata = string.format(urlParam, areaId, numid, sid, uid, ssid, self._itemID, self._propType)
        if self._sceneid then
            urlParam = "areaid=%d&numid=%s&sid=%d&uid=%s&ssid=%s&scene_id=%d&id=%d&prop_type=%d"
            urldata = string.format(urlParam, areaId, numid, sid, uid, ssid, self._sceneid, self._itemID, self._propType)
        end
        local url = URL .. "?" .. urldata .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_STORE_EXCHANGE_PRODUCT
        print(url)
        XH.httpManager:RequestGet(HttpDefine.URL_STORE_EXCHANGE_PRODUCT, url, 4, handler(self, self.onHttpResult),nil,true)
    end
end

function ReqExchangeGoods:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        self:success(httpData.data)
    else
        self:setMessage(httpData.message)
        self:fail()
    end
end

return ReqExchangeGoods�