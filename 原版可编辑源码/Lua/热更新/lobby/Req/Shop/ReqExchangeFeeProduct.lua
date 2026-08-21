local ReqExchangeFeeProduct = class("ReqExchangeFeeProduct",XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqExchangeFeeProduct:start(phoneid, ischeckphone, codecheck, feesnum, timeout)
    if ReqExchangeFeeProduct.super.start(self,timeout) == false then
        return
    end
    
    self._phoneId = tostring(phoneid)
    self._isCheckPhone = tonumber(ischeckphone)
    self._codeCheck = tonumber(codecheck) or 0
    self._feesNum = tonumber(feesnum)

    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
    XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(),srsGroupID,timeout)
end

function ReqExchangeFeeProduct:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = data
        local areaID = XH.areaData:getAreaID() 
        local windID = XH.areaData:getAreaWindID()
        local numid = XH.playerData:getNumberID()
        local uid = XH.playerData:getUserID()
        local chargeType = "phonefare_ctu"
        local tHttpInfo = "areaid="..areaID.."&sid="..windID.."&numid="..numid.."&ssid="..string.urlencode(tempSession).."&uid="..uid.."&phone="..self._phoneId.."&is_check_phone="..self._isCheckPhone.."&code="..self._codeCheck.."&value="..self._feesNum.."&type="..chargeType
        
        XH.httpManager:RequestGet(HttpDefine.REQ_SHOP_FEE_EXCHANGE,UrlConf.REQ_SHOP_FEE_EXCHANGE..tHttpInfo,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpPhoneStateCallBack))
    end
end

function ReqExchangeFeeProduct:onHttpPhoneStateCallBack(eType, status, response)
    if eType ~= HttpDefine.REQ_SHOP_FEE_EXCHANGE then
        return
    end
    if status == 200 then
        print(response)
        if response.code == 0 then
            local respData = {}
            respData.phone = self._phoneId
            respData.message = response.message or "兑换成功"
            self:success(respData)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("GET_EXCHANGE_KAMI_ERROR"))
        self:fail()
    end
end

return ReqExchangeFeeProduct