local ReqPhoneFeeVerCode = class("ReqPhoneFeeVerCode",XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqPhoneFeeVerCode:start(phoneid, timeout)
    if ReqPhoneFeeVerCode.super.start(self,timeout) == false then
        return
    end
    self._phoneid = phoneid
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
    XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(),srsGroupID,timeout)
end

function ReqPhoneFeeVerCode:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = data
        local areaID = XH.areaData:getAreaID() 
        local windID = XH.areaData:getAreaWindID()
        local numid = XH.playerData:getNumberID()
        local uid = XH.playerData:getUserID()
        
        local tHttpInfo = "areaid="..areaID.."&sid="..windID.."&numid="..numid.."&ssid="..string.urlencode(tempSession).."&uid="..uid .."&phone="..self._phoneid
        XH.httpManager:RequestGet(HttpDefine.REQ_SHOP_FEE_PHONE_CODE_CHECK,UrlConf.REQ_SHOP_FEE_PHONE_CODE_CHECK..tHttpInfo,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpPhoneStateCallBack))
    end
end

function ReqPhoneFeeVerCode:onHttpPhoneStateCallBack(eType, status, response)
    if eType ~= HttpDefine.REQ_SHOP_FEE_PHONE_CODE_CHECK then
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
        self:setMessage(XH.ConstString.getStr("PHONE_CODE_ERROR"))
        self:fail()
    end
end

return ReqPhoneFeeVerCode