
local ReqExchange = class("ReqExchange", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")
local ExchangeConfig = require("lobby.Req.Shop.ExchangeConfig")

function ReqExchange:start(areaId, windMsgId, numId, uid, gameId, productId, productType, timeoutTime, productTypeEx, phoneNum, richType, propValue,multiCfgId,gift_cfg,paramExTable, subItemType)
    if ReqExchange.super.start(self, timeoutTime) == false then
        return
    end
    self._phoneid = phoneNum
    self._richType = richType
    self._areaId          = areaId
    self._windMsgId       = windMsgId
    self._numId           = numId
    self._uid             = uid 
    self._gameId          = gameId
    self._productId       = productId
    self._productType     = productType
    self._timeoutTime     = timeoutTime
    self._productTypeEx   = productTypeEx
    self._phoneNum        = phoneNum
    self._richType        = richType
    self._propValue       = propValue
    self._multiCfgId      = multiCfgId
    self._gift_cfg        = gift_cfg
    self._subItemType = subItemType
    if paramExTable then
        self._tel_fee_to_gift = paramExTable.tel_fee_to_gift 
        self._check_phone = paramExTable.check_phone 
        self._check_code = paramExTable.check_code 
    end
    local propTypeName = ExchangeConfig.ProductType[productType]
    local tmpPropType = ExchangeConfig.PropType[propTypeName]
    if type(tmpPropType) == "table" then 
        tmpPropType = ExchangeConfig.PropType[propTypeName][XH.areaData:getLobbyID()] or ExchangeConfig.PropType[propTypeName][XH.LOBBY_ID.NONE]
    elseif tmpPropType == "config" then
        tmpPropType = XH.lobby:getModule("BagSysNew"):getShopID()
    end
    local propTypeEx = productTypeEx or tmpPropType
    local timestamp = socket.gettime()
    local data
    if self._richType then
        self._propTypeEx    =   propTypeEx
        self._timestamp     =   timestamp 
        self:reqSessionID(timeoutTime)
        return
    end
    if phoneNum then
        local urlParam = "areaid=%d&gameid=%d&id=%d&numid=%s&phone=%s&prop_type=%d&sid=%d&timestamp=%s&uid=%s&reqUrl=%s"
        data = string.format(urlParam, areaId, gameId, productId, numId, phoneNum, propTypeEx, windMsgId, timestamp, uid, UrlConf.URL_SECOND_DOMAIN.REQ_STORE_EXCHANGE_PRODUCT)
    else
        local urlParam = "areaid=%d&gameid=%d&id=%d&numid=%s&prop_type=%d&sid=%d&timestamp=%s&uid=%s&reqUrl=%s"
        data = string.format(urlParam, areaId, gameId, productId, numId, propTypeEx, windMsgId, timestamp, uid, UrlConf.URL_SECOND_DOMAIN.REQ_STORE_EXCHANGE_PRODUCT)
    end
    print(data)
    XH.httpManager:RequestPost(HttpDefine.URL_STORE_EXCHANGE_PRODUCT, UrlConf.URL_EXCHANGESHOP, data, 4, handler(self, self.onHttpResult),nil,true)
end

function ReqExchange:setDataEx(propValue, propCount, needPropID)
    self._dataEx = {}
    self._dataEx.propValue = propValue
    self._dataEx.propCount = propCount
    self._dataEx.needPropID = needPropID
end

function ReqExchange:getDataEx()
    return self._dataEx
end

function ReqExchange:onHttpResult(httpID, code, httpData)
    dump(httpData, "onHttpResult:httpData:")
    if httpData and httpData.code == 0 then
        httpData.propValue = self._propValue
        httpData.subItemType = self._subItemType
        self:success(httpData)
    else
        self:setMessage(httpData.message)
        self:fail(httpData)
    end
end

function ReqExchange:reqSessionID(timeout)
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0, XH.playerData:getBrandID(),
    XH.playerData:getNumberID(), un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()), XH.playerData:getSessionID(false), srsGroupID, timeout)
end

function ReqExchange:onTempSessionBack(cell, type, data1)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = string.urlencode(data1)
        local richType = self._richType
        local areaId = self._areaId
        local windMsgId = self._windMsgId
        local numId = self._numId
        local uid = self._uid
        local gameId = self._gameId
        local productId = self._productId
        local propTypeEx = self._propTypeEx
        local timestamp = self._timestamp
        local urlParam = "areaid=%d&gameid=%d&id=%d&numid=%s&rich_type=%s&prop_type=%d&sid=%d&ssid=%s&timestamp=%s&uid=%s"
        local data = string.format(urlParam, areaId, gameId, productId, numId, richType, propTypeEx, windMsgId, tempSession, timestamp, uid)
        if self._multiCfgId then
            data = data .. "&multi_cfg_id=" .. self._multiCfgId
        end
        if self._gift_cfg then
            data = data .. "&gift_cfg=" .. self._gift_cfg
        end
        if self._tel_fee_to_gift then
            data = data .. "&tel_fee_to_gift=" .. self._tel_fee_to_gift
            if self._check_phone then
                data = data .. "&check_phone=" .. self._check_phone
            end
            if self._check_code then
                data = data .. "&check_code=" .. self._check_code
            end
        end
        data = data .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_STORE_EXCHANGE_PRODUCT
        print(data)
        XH.httpManager:RequestPost(HttpDefine.URL_STORE_EXCHANGE_PRODUCT, UrlConf.URL_EXCHANGESHOP, data, 4, handler(self, self.onHttpResult), nil, true)
    end
end

return ReqExchange

*