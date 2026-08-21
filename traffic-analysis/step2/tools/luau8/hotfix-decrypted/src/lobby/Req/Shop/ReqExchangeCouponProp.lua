local ReqExchangeCouponProp = class("ReqExchangeCouponProp", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqExchangeCouponProp:start(propID,coupon_id,productTypeEx)
    self.id = propID
    self.coupon_id = coupon_id
    self.productType = productTypeEx
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
        XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID)
end

function ReqExchangeCouponProp:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local sid = XH.areaData:getAreaWindID()
        local gameid = XH.areaData:getNotifyGameID()
        local numid = XH.playerData:getNumberID()
        local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
        local ssid = string.urlencode(data)
        local areaId = XH.areaData:getAreaID()
        
        local id = self.id
        local propTypeEx = 2--self.productType or tmpPropType 此处获取的productType与实际的web商城id不符合。web端传要求2，目前写死

        local coupon_id = self.coupon_id
        local coupon_scene = 2
        local strUrl =  "areaid=" .. areaId .. "&coupon_id="..coupon_id .."&coupon_scene="..coupon_scene .. "&gameid="..gameid .. "&id=" .. id .. "&numid=" .. numid  ..
        "&prop_type=" .. propTypeEx.."&sid=" .. sid .."&ssid=" .. ssid .. "&uid=" .. uid
        strUrl = strUrl  .."&reqUrl="..UrlConf.URL_SECOND_DOMAIN.REQ_STORE_EXCHANGE_PRODUCT
        XH.httpManager:RequestPost(HttpDefine.COUPON_CHANGE,UrlConf.URL_EXCHANGESHOP,strUrl, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpResult),nil,true)
    end
end

function ReqExchangeCouponProp:onHttpResult(httpID, code, httpData)
    dump(httpData, "ReqModifyUserInfo:onHttpResult")
    if code == 200 then
        if httpData.code == 0 then
            self:success(httpData.data)
        else
            self:setMessage(httpData.message)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqExchangeCouponProp
	