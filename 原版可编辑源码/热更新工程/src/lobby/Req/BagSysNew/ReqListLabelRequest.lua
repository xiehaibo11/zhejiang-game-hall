local ReqListLabelRequest = class("ReqListLabelRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqListLabelRequest:ctor()
    ReqListLabelRequest.super.ctor(self)
    self._askId = 0
end

-- 通用请求50道具接口
function ReqListLabelRequest:start(timeout, areaid, numid)
    if ReqListLabelRequest.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local param = {
        user_id = numid or XH.playerData:getNumberID(),
        area_id = areaid or XH.areaData:getAreaID(),
        tenant_id = XH.areaData:getTenantid(),
        ask_id = self._askID,
    }
    self._numID = numid or XH.playerData:getNumberID()
    local jsonStr = json.encode(param)
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_LIST_LABEL, UrlConf.URL_LIST_LABEL_REQ, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqListLabelRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_LIST_LABEL then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            response.numid = self._numID
            self:success(response)
        elseif response and response.resp then
            self:setMessage(response.resp.errReason)
            self:fail()
        else
            self:setMessage("请求道具信息失败")
            self:fail()
        end
    else
        self:setMessage("请求道具信息失败")
        self:fail()
    end
end

return ReqListLabelRequest