local GoldReqExchangeProductList = class("GoldReqExchangeProductList", NG.ReqHttp)
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")
local ExchangeConfig = require("lobby.Req.Shop.ExchangeConfig")

local URL = UrlConf.URL_EXCHANGESHOP .. "?areaid=%d&goods_tag=%s&numid=%s&prop_type=%s&sid=%d&timestamp=%s&uid=%s&reqUrl=%s"

function GoldReqExchangeProductList:start(numid, uid, areaId, windMsgId, productType, productTypeEx, timeoutTime)
    if GoldReqExchangeProductList.super.start(self, timeoutTime) == false then
        return
    end
    self._productType = productType
    local goodTag = ""
    local timestamp = socket.gettime()
    local url = string.format(URL, areaId, goodTag, numid, productTypeEx, windMsgId, timestamp, uid, UrlConf.URL_SECOND_DOMAIN.REQ_STORE_EXCHANGE_PRODUCT_LIST)
    NG.httpManager:RequestGet("", url, 4, handler(self, self.onHttpResult), nil, true)
end

function GoldReqExchangeProductList:onHttpResult(httpID, code, httpData)
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
function GoldReqExchangeProductList:setProductInfos(productDatas)
    self._productDatas = {}
    for i = 1, #productDatas do
        local tProductData = {}
        tProductData.id = productDatas[i].id
        tProductData.count = productDatas[i].count
        tProductData.image = productDatas[i].image
        tProductData.name = productDatas[i].name
        tProductData.price = productDatas[i].condition
        tProductData.needPropId = productDatas[i].cur_shop_propid or ""
        if productDatas[i].multi_score_config and #productDatas[i].multi_score_config == 1 and string.find(productDatas[i].multi_score_config[1].type, "prop") then
            local propid = string.gsub(productDatas[i].multi_score_config[1].type, "prop", "")
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
        self._productDatas[#self._productDatas + 1] = tProductData
    end
    table.sort(self._productDatas, function(a, b)
        return (tonumber(a.price)) < (tonumber(b.price))
    end)
end

function GoldReqExchangeProductList:getProductType()
    return self._productType
end

return GoldReqExchangeProductList

