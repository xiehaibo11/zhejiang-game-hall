local CellReqBoxGuideInfo = class("CellReqBoxGuideInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellReqBoxGuideInfo:ctor()
    CellReqBoxGuideInfo.super.ctor(self)
end

function CellReqBoxGuideInfo:start(data , timeout)
    if CellReqBoxGuideInfo.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.ask_id = os.time()
    urlInfo.act_id = data.act_id
    
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_BOX_GUIDE_INFO, UrlConf.URL_BOX_GUIDE_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellReqBoxGuideInfo:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_BOX_GUIDE_INFO then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(string.format("请求包厢引导失败，接口错误码：%s", response and response.resp and response.resp.errCode or "nil"))
            self:fail()
        end
    else
        self:setMessage(string.format("请求包厢引导失败，HTTP错误码：%s", status))
        self:fail()
    end
end

return CellReqBoxGuideInfo
�