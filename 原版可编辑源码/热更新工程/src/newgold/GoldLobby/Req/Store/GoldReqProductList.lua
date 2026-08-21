local GoldReqProductList = class("GoldReqProductList", NG.ReqHttp)
local GoldUrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

local ReqURL = GoldUrlConf.URL_STORE_PRODUCT_LIST .. "?app_id=%d&package_id=%d"

function GoldReqProductList:ctor()
    GoldReqProductList.super.ctor(self)

end

function GoldReqProductList:start(appid, packgeId, timeoutTime)
    if GoldReqProductList.super.start(self, timeoutTime) == false then
        return
    end

    if GoldAreaConfig.BridgeIsDebug then
        appid = 1538
        packgeId = 7353
    end

    local strUrl = string.format(ReqURL, appid, packgeId)
    NG.httpManager:RequestGet("", strUrl, 4, handler(self, self.onHttpResult))
end

function GoldReqProductList:success(data)
    GoldReqProductList.super.success(self, data)
end

function GoldReqProductList:fail(data)
    GoldReqProductList.super.fail(self, data)
end

function GoldReqProductList:timeout(data)
    GoldReqProductList.super.timeout(self, data)
end

function GoldReqProductList:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        self:setProductInfos(httpData.data)
        self:success(self._productDatas)
    else
        self:setMessage(httpData.message)
        self:fail()
    end
end

function GoldReqProductList:setProductInfos(productDatas)
    self._productDatas = {}
    local isTiShenMode = require("app.Config.GlobalConfig").IsIosTiShen and (device.platform == "ios")
    for i = 1, #productDatas do
        local productId = productDatas[i].product_id
        -- 提审模式：包含所有商品；非提审模式：排除 product_id 以 iOStishen_ 开头的商品
        local shouldAdd = true
        if not isTiShenMode then
            if productId and string.sub(productId, 1, #UrlConf.TISHEN_PRODUCT_PREFIX) == UrlConf.TISHEN_PRODUCT_PREFIX then
                shouldAdd = false
            end
        end
        if shouldAdd then
            local tProductData = {}
            tProductData.id = productDatas[i].id
            tProductData.productId = productId
            tProductData.name = productDatas[i].product_name
            tProductData.pic = productDatas[i].pic
            tProductData.price = productDatas[i].price
            tProductData.type = productDatas[i].type
            tProductData.value = productDatas[i].value
            tProductData.propid = productDatas[i].propid
            self._productDatas[#self._productDatas + 1] = tProductData
        end
    end

    table.sort(self._productDatas, function(a, b)
        return (tonumber(a.value)) < (tonumber(b.value))
    end)
end

return GoldReqProductList

