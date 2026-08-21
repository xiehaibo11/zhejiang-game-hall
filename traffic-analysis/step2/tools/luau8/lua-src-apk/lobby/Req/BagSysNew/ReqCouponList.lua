local ReqCouponList = class("ReqCouponList", XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqCouponList:ctor()
    ReqCouponList.super.ctor(self)
end

function ReqCouponList:start()
    local areaID = XH.areaData:getAreaID()
    local numid = XH.playerData:getNumberID()
    local datatype = 0--0未使用
    local allscene = 2
    local appid = 1432
    local timeStamp = os.time()
    local scene = 2
    local channelID = XH.SysTool:getChannelID()

    local strUrl =  "areaid=" .. areaID .. "&numid=" .. numid .. "&data_type=" .. datatype ..
    "&all_scene=" .. allscene .. "&app_id=" .. appid .. "&timestamp=" .. timeStamp .. 
    "&scene=" .. scene.."&channel_ids="..channelID
    strUrl = UrlConf.URL_GOPALMAPI .. "?" .. strUrl  .."&reqUrl="..UrlConf.URL_SECOND_DOMAIN.REQ_COUPON_LIST
    XH.httpManager:RequestGet(HttpDefine.COUPON_INFO, strUrl, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCouponListResult),nil,true)
end

function ReqCouponList:onHttpCouponListResult(eType, status, response)
    if status == 200 then
        self:success(response)
    else
        self:fail()
    end
end

return ReqCouponList
�