---兑换商城V2获取商品列表
local ReqExchangeGoodsListV2 = class("ReqExchangeGoodsListV2 ", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local GlobalConfig = XH.Bridge:require("app.Config.GlobalConfig")

function ReqExchangeGoodsListV2:ctor()
    ReqExchangeGoodsListV2.super.ctor(self)
end

function ReqExchangeGoodsListV2:start(data, timeout)
    if ReqExchangeGoodsListV2.super.start(self, timeout) == false then
        return
    end

    local protocol = {
        ask_id = self._askID,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        businesses = data.business or ""
    }
    self._reqType = data.reqType or ""
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_EXCHANGE_GOODS_LIST, UrlConf.URL_EXCHANGE_GOODS_LISTV2, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqExchangeGoodsListV2:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_EXCHANGE_GOODS_LIST then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            response.reqType = self._reqType
            self:success(response, self._gameid)
        elseif response and response.resp then
            response.reqType = self._reqType
            self:setMessage(response.resp.errReason)
            self:fail(response)
        else
            self:fail({ reqType = self._reqType })
        end
    else
        self:fail({ reqType = self._reqType })
    end
end

function ReqExchangeGoodsListV2:timeout(data)
    data = data or {}
    if not data.reqType or data.reqType == "" then
        data.reqType = self._reqType
    end
    ReqExchangeGoodsListV2.super.timeout(self, data)
end
return ReqExchangeGoodsListV2@