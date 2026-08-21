local ReqGetPropsAttr = class("ReqGetPropsAttr", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqGetPropsAttr:ctor()
    ReqGetPropsAttr.super.ctor(self)
    self._askId = 0
end

function ReqGetPropsAttr:start(propids, include)
    self._askId = os.time()

    local urlInfo = {
        user_id = XH.playerData:getNumberID(),
        area_id = XH.areaData:getAreaID(),
        tenant_id = XH.areaData:getTenantid(),
        prop_ids = propids,
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"

    local jsonStr = json.encode(urlInfo)
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GETPROPSATTR, UrlConf.URL_GETPROPSATTR, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGetPropsAttr:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GETPROPSATTR then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage("")
            self:fail()
        end
    else
        self:setMessage("")
        self:fail()
    end
end

return ReqGetPropsAttr