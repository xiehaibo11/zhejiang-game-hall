local ReqExchangeGiftHistory = class("ReqExchangeGiftHistory", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqExchangeGiftHistory:ctor()
    ReqExchangeGiftHistory.super.ctor(self)
end

function ReqExchangeGiftHistory:start(propids,timeoutTime)
    if ReqExchangeGiftHistory.super.start(self, timeoutTime) == false then
        return
    end
    self._propids = propids
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID,timeoutTime)
end

function ReqExchangeGiftHistory:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = data
        local areaID = XH.areaData:getAreaID() 
        local windID = XH.areaData:getAreaWindID()
        local numid = XH.playerData:getNumberID()
        local uid = XH.playerData:getUserID()
        local gameid = XH.areaData:getConfigGameID()
        local tHttpInfo = "?sid="..windID.."&numid="..numid.."&uid="..uid.."&ssid="..string.urlencode(tempSession).."&areaid="..areaID.."&gameid=".. gameid .. "&id=" .. self._propids .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_STORE_MODIFY_USER_INFO
        XH.httpManager:RequestGet(HttpDefine.URL_STORE_MODIFY_USER_INFO,UrlConf.URL_EXCHANGESHOP..tHttpInfo,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpCallBack),nil,true)
    end
end

function ReqExchangeGiftHistory:onHttpCallBack(eType, status, response)
    if eType ~= HttpDefine.URL_STORE_MODIFY_USER_INFO then
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
        self:setMessage(XH.ConstString.getStr("GET_EXCHANGE_KAMI_ERROR"))
        self:fail()
    end
end

return ReqExchangeGiftHistory

