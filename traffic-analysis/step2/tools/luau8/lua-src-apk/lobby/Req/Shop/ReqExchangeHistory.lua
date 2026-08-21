local ReqExchangeHistory = class("ReqExchangeHistory",XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")
local reqCount = 30

function ReqExchangeHistory:start(timeout)
    if ReqExchangeHistory.super.start(self,timeout) == false then
        return
    end
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
        XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID,timeout)
end

function ReqExchangeHistory:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = data
        local areaID = XH.areaData:getAreaID()
        local windID = XH.areaData:getAreaWindID()
        local numid = XH.playerData:getNumberID()
        local uid = XH.playerData:getUserID()
        local ticketShopId = XH.areaData:getCouponShopID() or 0
        
        local tHttpInfo = "?areaid="..areaID.."&page_size="..reqCount.."&prop_type="..ticketShopId.."&sid="..windID.."&numid="..numid.."&ssid="..string.urlencode(tempSession).."&uid="..uid
        if XH.areaData:getMultiShopIDs() then
            tHttpInfo = tHttpInfo .. "&multi_prop_type=" .. XH.areaData:getMultiShopIDs()
        end
        
        XH.httpManager:RequestGet(HttpDefine.URL_TICKETSTORE_EXCHANGE_HISTORY,UrlConf.URL_TICKETSTORE_EXCHANGE_HISTORY..tHttpInfo,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpExchangeHistoryCallBack))
    end
end

function ReqExchangeHistory:onHttpExchangeHistoryCallBack(eType, status, response)
    if eType ~= HttpDefine.URL_TICKETSTORE_EXCHANGE_HISTORY then
        return
    end
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("GET_EXCHANGE_HISTORY_ERROR"))
        self:fail()
    end
end

return ReqExchangeHistory	