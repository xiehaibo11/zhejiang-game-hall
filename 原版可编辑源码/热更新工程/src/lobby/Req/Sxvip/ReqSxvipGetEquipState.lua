local ReqSxvipGetEquipState = class("ReqSxvipGetEquipState", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipGetEquipState:ctor()
    ReqSxvipGetEquipState.super.ctor(self)
    self._askId = 0
    self.userIds = {}
end

function ReqSxvipGetEquipState:start(userIds, timeout)
    if ReqSxvipGetEquipState.super.start(self, timeout) == false then
        return
    end

    self.userIds = userIds

    local urlInfo = {
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        info = {}
    }

    for _, userid in ipairs(userIds) do
        urlInfo.info[#urlInfo.info + 1] = {
            user_id = userid,
            equip = 20
        }
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
   
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GET_EQUIP_STATE, UrlConf.URL_GET_EQUIP_STATE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipGetEquipState:onHttpCallBack(httpID, status, response, xhr)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_EQUIP_STATE then
        return
    end
    if status == 200 and response then
        if response.resp.errCode == 0  then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSxvipGetEquipState
