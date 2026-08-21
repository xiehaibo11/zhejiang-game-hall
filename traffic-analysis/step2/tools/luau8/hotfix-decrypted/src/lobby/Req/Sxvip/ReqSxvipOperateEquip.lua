local ReqSxvipOperateEquip = class("ReqSxvipOperateEquip", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function ReqSxvipOperateEquip:ctor()
    ReqSxvipOperateEquip.super.ctor(self)
    self._askId = 0
    self._state = false
end

function ReqSxvipOperateEquip:start(data, timeout)
    if ReqSxvipOperateEquip.super.start(self, timeout) == false then
        return
    end

    data = data or {}

    local urlInfo = {
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        prop = {
            prop_id = SxvipConfig.PROP_ID,
            burse_type = SxvipConfig.BURSE_TYPE,
            count = 1
        },
        take_off = type(data.take_off) == "boolean" and data.take_off or false,
        params = ""
    }
    self._state = urlInfo.take_off

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
   
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_URL_OPERATE_EQUIP, UrlConf.URL_OPERATE_EQUIP, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipOperateEquip:onHttpCallBack(httpID, status, response, xhr)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_URL_OPERATE_EQUIP then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSxvipOperateEquip
�