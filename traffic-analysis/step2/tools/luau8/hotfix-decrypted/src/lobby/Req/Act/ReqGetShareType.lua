local ReqGetShareType = class("ReqGetShareType", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
function ReqGetShareType:ctor()
    ReqGetShareType.super.ctor(self)
end

function ReqGetShareType:start(param, timeoutTime)
    if ReqGetShareType.super.start(self, timeoutTime) == false then
        return
    end
    self._askid = XH.askIDManager:getAskID()
    local protocol = {
        ask_id = self._askid
    }
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    self.replayStruct = XH.NyxProtobuf.GetShareTypeReply
    local jsonStr = XH.Protobuf.mergeBufDataHttp(XH.NyxProtobuf.GetShareTypeRequest, protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GET_SHARETYPE, UrlConf.URL_REQ_ROUTE_URL, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGetShareType:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GET_SHARETYPE then
        return
    end
    if status == 200 then
        if response.process_id == self.replayStruct.processid and response.protocol_id == self.replayStruct.XY_ID then
            local msgData = XH.Protobuf.protoBufToMsgHttp(self.replayStruct, response.resp_body)
            if msgData.resp and msgData.resp.err_code == 0 then
                self:success(msgData)
            else
                self:setMessage(msgData.resp.err_reason)
                self:fail()
            end
        else
            self:setMessage("请求服务器失败")
            self:fail()
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqGetShareType�