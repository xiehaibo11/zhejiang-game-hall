local ReqExchangeProductList = class("ReqExchangeProductList", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")
local ExchangeConfig = require("lobby.Req.Shop.ExchangeConfig")
local ShopConfig = require("lobby.Modules.Shop.Config")

local URL = UrlConf.URL_EXCHANGESHOP .. "?areaid=%d&goods_tag=%s&numid=%s&prop_type=%s&sid=%d&timestamp=%s&uid=%s&reqUrl=%s"

function ReqExchangeProductList:start(numid, uid, areaId, windMsgId, productType, timeoutTime, tag, productTypeEx)
    if ReqExchangeProductList.super.start(self, timeoutTime) == false then
        return
    end
    self._productType = productType
    local propType = ExchangeConfig.ProductType[productType]
    local goodTag = tag or ExchangeConfig.ProductType[productType]
    if productType == 19 or productType == 20 or productType == 6 then
        goodTag = ""
    end
    local tmpPropType = ExchangeConfig.PropType[propType]
    if type(tmpPropType) == "table" then 
        tmpPropType = ExchangeConfig.PropType[propType][XH.areaData:getLobbyID()] or ExchangeConfig.PropType[propType][XH.LOBBY_ID.NONE]
    elseif tmpPropType == "config" then
        tmpPropType = XH.lobby:getModule("BagSysNew"):getShopID()
    end
    local propTypeEx = productTypeEx or tmpPropType
    self._propType = propTypeEx

    local timestamp = socket.gettime()
    local url = string.format(URL, areaId, goodTag, numid, propTypeEx, windMsgId, timestamp, uid, UrlConf.URL_SECOND_DOMAIN.REQ_STORE_EXCHANGE_PRODUCT_LIST)
    print(url)
    XH.httpManager:RequestGet(HttpDefine.URL_STORE_EXCHANGE_PRODUCT_LIST, url, 4, handler(self, self.onHttpResult),nil,true)
end

function ReqExchangeProductList:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        self:setProductInfos(httpData.data)
        self:success(self._productDatas)
    else
        self:setMessage(httpData.message)
        self:fail()
    end
end

-- 当有price_config并且 #price_config>0时，不再依赖needPropId
-- 当price_config有且唯一时提取propid赋值给needPropId
function ReqExchangeProductList:setProductInfos(productDatas)
    self._productDatas = { }
    for i = 1, #productDatas do
        local tProductData = { }
        tProductData.id = productDatas[i].id
        tProductData.count = productDatas[i].count
        tProductData.image = productDatas[i].image
        tProductData.name = productDatas[i].name
        tProductData.price = productDatas[i].condition
        tProductData.needPropId = productDatas[i].cur_shop_propid or ""
        if productDatas[i].multi_score_config and #productDatas[i].multi_score_config == 1 and string.find(productDatas[i].multi_score_config[1].type,"prop") then 
            local propid = string.gsub(productDatas[i].multi_score_config[1].type,"prop","")
            if tonumber(propid) ~= productDatas[i].cur_shop_propid then
                tProductData.needPropId = tonumber(propid)
            end
        end
        tProductData.type = productDatas[i].type
        tProductData.wid = productDatas[i].wid
        tProductData.prop_count = productDatas[i].prop_count
        tProductData.value = productDatas[i].value
        tProductData.des = productDatas[i].description or ""
        tProductData.mark = productDatas[i].goods_mark or ""
        tProductData.tags = productDatas[i].tags
        tProductData.price_config = productDatas[i].multi_score_config
        tProductData.multi_goods_info = productDatas[i].multi_goods_info
        tProductData.sort = productDatas[i].sort
        tProductData.offline_at = productDatas[i].offline_at
        tProductData.all_limit = productDatas[i].all_limit
        tProductData.day_limit = productDatas[i].day_limit
        tProductData.goods_day_limit = productDatas[i].goods_day_limit
        tProductData.display_price = productDatas[i].display_price
        tProductData.inner_game_sort = productDatas[i].inner_game_sort or 0
        tProductData.corner_tag =  productDatas[i].corner_tag or 0
        self._productDatas[#self._productDatas + 1] = tProductData
    end
    local SxvipConfig = require("lobby.Modules.Sxvip.Config")
    if (self._productType and self._productType == ShopConfig.ProductType.CAIYUNNEW) or 
        (self._propType and self._propType == SxvipConfig:getSxvipShopId()) then
        return
    end
    table.sort(self._productDatas, function(a, b) return(tonumber(a.price)) <(tonumber(b.price)) end)
end

function ReqExchangeProductList:getProductType()
    return self._productType
end

return ReqExchangeProductList

