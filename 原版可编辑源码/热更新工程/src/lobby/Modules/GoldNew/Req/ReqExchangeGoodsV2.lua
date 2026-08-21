---兑换商城V2获取商品列表
local ReqExchangeGoodsV2 = class("ReqExchangeGoodsV2 ", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local GlobalConfig = XH.Bridge:require("app.Config.GlobalConfig")

function ReqExchangeGoodsV2:ctor()
    ReqExchangeGoodsV2.super.ctor(self)
end

function ReqExchangeGoodsV2:start(data, timeout)
    if ReqExchangeGoodsV2.super.start(self, timeout) == false then
        return
    end

    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
    }
    for k,v in pairs(data) do
        protocol[k] = v
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_EXCHANGE_GOODS, UrlConf.URL_EXCHANGE_GOODSV2, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqExchangeGoodsV2:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_EXCHANGE_GOODS then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response, self._gameid)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:fail()
    end
end
return ReqExchangeGoodsV2