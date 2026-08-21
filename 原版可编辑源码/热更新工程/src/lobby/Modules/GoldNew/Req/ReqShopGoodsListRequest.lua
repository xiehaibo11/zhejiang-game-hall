local ReqShopGoodsListRequest = class("ReqShopGoodsListRequest ", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local GlobalConfig = XH.Bridge:require("app.Config.GlobalConfig")

function ReqShopGoodsListRequest:ctor()
    ReqShopGoodsListRequest.super.ctor(self)
end

function ReqShopGoodsListRequest:start(data, timeout)
    if ReqShopGoodsListRequest.super.start(self, timeout) == false then
        return
    end

    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        app_id = XH.configerManager:getShopAppId(),
        package_id = XH.configerManager:getShopPackageAppId(),
        business = data.business or ""
    }

    if GlobalConfig.IsDebug and not XH.isEmbeddedApp() then
        protocol.app_id = 1538
        protocol.package_id = 9040
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_SHOP_GOODS_LIST, UrlConf.URL_SHOP_GOODS_LIST, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqShopGoodsListRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_SHOP_GOODS_LIST then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response, self._gameid)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end
return ReqShopGoodsListRequest

-- local ReqShopGoodsListRequest = class("ReqShopGoodsListRequest", XH.ReqProtobuf50)
-- function ReqShopGoodsListRequest:ctor()
--     ReqShopGoodsListRequest.super.ctor(self)
-- end

-- function ReqShopGoodsListRequest:start(data, timeoutTime)
--     if ReqShopGoodsListRequest.super.start(self, timeoutTime, XH.areaData:getSrsGroupID()) == false then
--         return
--     end
--     self._askid = XH.askIDManager:getAskID()
--     local protocol = {
--         ask_id = self._askid,
--         tenant_id = XH.areaData:getTenantid(),
--         area_id = XH.areaData:getAreaID(),
--         user_id = XH.playerData:getNumberID(),
--         app_id = XH.configerManager:getShopAppId(),
--         package_id = XH.configerManager:getShopPackageAppId(),
--         business = "",
--     }
--     self:sendProtobuf(protocol, XH.NikeProtobuf.ShopGoodsListRequest, XH.NikeProtobuf.ShopGoodsListReply)
-- end

-- function ReqShopGoodsListRequest:onMsgReceive(msgData)
--     if msgData.resp.ask_id ~= self._askid then
--         return
--     end
--     if msgData.resp.err_code == 0 then
--         self:success(msgData)
--     else
--         -- if msgData.resp.err_code and self._protobuf.errorCode[msgData.resp.err_code] then
--         --     local errorText = self._protobuf.errorCode[msgData.resp.err_code]
--         --     XH.TipTool.showToast( errorText, 2)
--         -- end
--         self:fail(msgData)
--     end
-- end

-- return ReqShopGoodsListRequest
