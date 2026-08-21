local CellReqBoxCreateFreeCheck = class("CellReqBoxCreateFreeCheck", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellReqBoxCreateFreeCheck:ctor()
    CellReqBoxCreateFreeCheck.super.ctor(self)
end

function CellReqBoxCreateFreeCheck:start(data , timeout)
    if CellReqBoxCreateFreeCheck.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.ask_id = os.time()
    urlInfo.act_id = data.act_id

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_BOX_CREATE_FREE_CHECK, UrlConf.URL_BOX_CREATE_FREE_CHECK, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellReqBoxCreateFreeCheck:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_BOX_CREATE_FREE_CHECK then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(string.format("请求使用免费创建包厢检测失败，接口错误码：%s", response and response.resp and response.resp.errCode or "nil"))
            self:fail()
        end
    else
        self:setMessage(string.format("请求使用免费创建包厢检测失败，HTTP错误码：%s", status))
        self:fail()
    end
end

return CellReqBoxCreateFreeCheck
