local ReqExchangeProductList = class("ReqExchangeProductList", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local HttpDefine = XH.Bridge:require("app.Define.HttpDefine")
local ExchangeConfig = XH.Bridge:require("lobby.Req.Shop.ExchangeConfig")
local ShopConfig = XH.Bridge:require("lobby.Modules.Shop.Config")

local URL = UrlConf.REQ_STORE_EXCHANGE_PRODUCT_LIST_EX .. "?areaid=%d&goods_tag=%s&numid=%s&prop_type=%s&sid=%d&timestamp=%s&uid=%s"

function ReqExchangeProductList:start(numid, uid, areaId, windMsgId, productType, timeoutTime, tag, productTypeEx)
    if ReqExchangeProductList.super.start(self, timeoutTime) == false then
        return
    end
    -- 内嵌金币商城类型转
    if XH.isEmbeddedApp() and productType == ShopConfig.ProductType.GOLD then
        local param = XH.PluginModule.getStartParams()
        productTypeEx = param.zjbGoldShopType
    end
    self._productType = productType
    local propType = ExchangeConfig.ProductType[productType]
    local goodTag = tag or ExchangeConfig.ProductType[productType]
    if productType == 19 or productType == 20 or productType == 6 or productType == 21 or productType == 22 then
        goodTag = ""
    end
    local tmpPropType = ExchangeConfig.PropType[propType]
    if type(tmpPropType) == "table" then
        tmpPropType = ExchangeConfig.PropType[propType][XH.areaData:getLobbyID()] or ExchangeConfig.PropType[propType][XH.LOBBY_ID.NONE]
    elseif tmpPropType == "config" then
        tmpPropType = XH.Bridge:getModule("BagSysNew"):getShopID()
    end
    local propTypeEx = productTypeEx or tmpPropType
    self._propType = propTypeEx

    local timestamp = socket.gettime()
    local url = string.format(URL, areaId, goodTag, numid, propTypeEx, windMsgId, timestamp, uid)
    print(url)
    XH.httpManager50:RequestGet(HttpDefine.URL_STORE_EXCHANGE_PRODUCT_LIST, url, 4, handler(self, self.onHttpResult),nil,true)
end

function ReqExchangeProductList:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        self:setProductInfos(httpData.data)
        self:success(self._productDatas)
    else
        local msg = (httpData and httpData.message) or ""
        self:setMessage(msg)
        self:fail()
    end
end

-- 当有price_config并且 #price_config>0时，不再依赖needPropId
-- 当price_config有且唯一时提取propid赋值给needPropId
function ReqExchangeProductList:setProductInfos(productDatas)
    self._productDatas = {}
    for i = 1, #productDatas do
        local tProductData = clone(productDatas[i])
        if productDatas[i].multi_score_config and #productDatas[i].multi_score_config == 1 and
            string.find(productDatas[i].multi_score_config[1].type, "prop") then
            local propid = string.gsub(productDatas[i].multi_score_config[1].type, "prop", "")
            if tonumber(propid) ~= productDatas[i].cur_shop_propid then
                tProductData.needPropId = tonumber(propid)
            end
        end
        tProductData.price = productDatas[i].condition
        tProductData.des = productDatas[i].description or ""
        tProductData.goods_mark = productDatas[i].goods_mark or ""
        tProductData.price_config = productDatas[i].multi_score_config
        tProductData.multi_goods_info = productDatas[i].multi_goods_info
        self._productDatas[#self._productDatas + 1] = tProductData
    end
end

function ReqExchangeProductList:getProductType()
    return self._productType
end

return ReqExchangeProductList

