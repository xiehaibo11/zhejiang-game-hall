local ReqProductList = class("ReqProductList", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

local ReqURL = UrlConf.URL_STORE_PRODUCT_LIST .. "?app_id=%d&package_id=%d"

function ReqProductList:ctor()
    ReqProductList.super.ctor(self)

end

function ReqProductList:start(appid, packgeId, timeoutTime)
    if ReqProductList.super.start(self,timeoutTime) == false then
        return
    end

    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    if DEBUG then
        appid = 1538
        packgeId = 7353
    end

    local strUrl = string.format(ReqURL, appid, packgeId)
    XH.httpManager:RequestGet(HttpDefine.URL_STORE_PRODUCT_LIST, strUrl, 4, handler(self, self.onHttpResult))
end

function ReqProductList:success(data)
    ReqProductList.super.success(self,data)
end

function ReqProductList:fail(data)
    ReqProductList.super.fail(self,data)
end

function ReqProductList:timeout(data)
    ReqProductList.super.timeout(self,data)
end

function ReqProductList:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        self:setProductInfos(httpData.data)
        self:success(self._productDatas)
    else
        self:setMessage(httpData.message)
        self:fail()
    end
end

function ReqProductList:setProductInfos(productDatas)
    self._productDatas = {}    
    for i = 1, #productDatas do
        local tProductData = {}
        tProductData.id = productDatas[i].id
        tProductData.productId = productDatas[i].product_id
        tProductData.name = productDatas[i].product_name
        tProductData.pic = productDatas[i].pic
        tProductData.price = productDatas[i].price
        tProductData.type = productDatas[i].type
        tProductData.value = productDatas[i].value
        tProductData.propid = productDatas[i].propid

        self._productDatas[#self._productDatas + 1] = tProductData
    end
    
    table.sort(self._productDatas,function(a,b)  return (tonumber(a.value)) < (tonumber(b.value))  end)
end

return ReqProductList

