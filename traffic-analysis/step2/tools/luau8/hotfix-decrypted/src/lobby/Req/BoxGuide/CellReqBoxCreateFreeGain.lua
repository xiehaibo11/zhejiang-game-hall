local CellReqBoxCreateFreeGain = class("CellReqBoxCreateFreeGain", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellReqBoxCreateFreeGain:ctor()
    CellReqBoxCreateFreeGain.super.ctor(self)
end

function CellReqBoxCreateFreeGain:start(data , timeout)
    if CellReqBoxCreateFreeGain.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.ask_id = os.time()
    urlInfo.act_id = data.act_id

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_BOX_CREATE_FREE_GAIN, UrlConf.URL_BOX_CREATE_FREE_GAIN, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellReqBoxCreateFreeGain:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_BOX_CREATE_FREE_GAIN then
        return
    end
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(string.format("请求使用免费创建包厢消耗失败，接口错误码：%s", response and response.resp and response.resp.errCode or "nil"))
            self:fail()
        end
    else
        self:setMessage(string.format("请求使用免费创建包厢消耗失败，HTTP错误码：%s", status))
        self:fail()
    end
end

return CellReqBoxCreateFreeGain
