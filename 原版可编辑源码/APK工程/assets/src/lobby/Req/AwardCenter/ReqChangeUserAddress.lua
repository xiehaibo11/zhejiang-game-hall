local ReqChangeUserAddress = class("ReqChangeUserAddress",XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqChangeUserAddress:start(data, timeout)
    if ReqChangeUserAddress.super.start(self,timeout) == false then
        return
    end
    self._postData = data or ""
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
        XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID,timeout)
end

function ReqChangeUserAddress:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local numid = XH.playerData:getNumberID()
        local uid = string.urlencode(XH.playerData:getUserID())

        local parme = string.format("areaid=%d&sid=%d&numid=%s&ssid=%s&uid=%s", XH.areaData:getAreaID(), XH.areaData:getAreaWindID(), numid, string.urlencode(data), uid)
        local url = UrlConf.HTTP_ID_USER_ADDRESS_CHANGE .. parme
        local realName = string.urldecode(self._postData.realname)
        local mobile = string.urldecode(self._postData.mobile)
        local addr = string.urldecode(self._postData.addr)
        local urlInfo = string.format("realname=%s&mobile=%s&addr=%s&province=%s&city=%s&area=%s",realName,mobile,addr,"","","")
        XH.httpManager:RequestPost(HttpDefine.HTTP_ID_USER_ADDRESS_CHANGE, url, urlInfo, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpChangeUserAddressCallBack))
    end
end

function ReqChangeUserAddress:onHttpChangeUserAddressCallBack(eType, status, response)
    if eType ~= HttpDefine.HTTP_ID_USER_ADDRESS_CHANGE then
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

function ReqChangeUserAddress:distillReqData(reqData)
    if reqData == nil then
        return
    end
    if type(reqData) == "table" then
        local strData = ""
        for k,v in pairs(reqData) do
            strData = strData..k.."="..v.."&"
        end
        strData = string.sub(strData, 1, -2)
        return strData
    end
    return reqData
end

return ReqChangeUserAddress