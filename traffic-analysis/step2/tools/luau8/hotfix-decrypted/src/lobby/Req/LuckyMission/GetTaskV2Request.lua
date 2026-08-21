local GetTaskV2Request = class("GetTaskV2Request", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.LuckyMission.TestConfig")

function GetTaskV2Request:ctor()
    GetTaskV2Request.super.ctor(self)
    self._askId = 0
end

function GetTaskV2Request:start(task_opt, page_name, timeout, isNeedCheckPop)
    if GetTaskV2Request.super.start(self, timeout) == false then
        return
    end

    self.task_opt = task_opt
    self.page_name = page_name
    self._askId = os.time()

    local device_type = 0
    if device.platform == "android" then
        device_type = 2
    elseif device.platform == "ios" then
        device_type = 1
    end

    local urlInfo = {}
    urlInfo["ask_id"] = self._askId
    urlInfo["user"] = {
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
    }
    urlInfo["device_type"] = device_type
    urlInfo["task_opt"] = task_opt
    urlInfo["page_name"] = page_name

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug then
        if TestConfig.GetTaskV2RequestRedPoint and task_opt == 1 then
            TestConfig.GetTaskV2RequestRedPoint.resp = { errCode = 0 }
            self:onHttpCallBack(XH.HttpDefine.HTTP_ID_TASK_V2_REQUEST, 200, TestConfig.GetTaskV2RequestRedPoint)
            return
        end
        if TestConfig.GetTaskV2RequestContent and task_opt == 2 then
            TestConfig.GetTaskV2RequestContent.resp = { errCode = 0 }
            self:onHttpCallBack(XH.HttpDefine.HTTP_ID_TASK_V2_REQUEST, 200, TestConfig.GetTaskV2RequestContent)
            return
        end
    end

    self.isNeedCheckPop = isNeedCheckPop
    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_TASK_V2_REQUEST, UrlConf.URL_TASK_V2_REQUEST, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GetTaskV2Request:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_TASK_V2_REQUEST then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            self:success(response)
        elseif response and response.resp then
            self:setMessage(response.resp.errReason)
            self:fail()
        else
            self:setMessage("网络异常，稍后再试GetTaskV2Request")
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试GetTaskV2Request")
        self:fail()
    end
end

return GetTaskV2Request�
