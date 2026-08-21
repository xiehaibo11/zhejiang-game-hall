local ReqPropsCount50 = class("ReqPropsCount50", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqPropsCount50:ctor()
    ReqPropsCount50.super.ctor(self)
    self._askId = 0
end

-- 通用请求50道具接口
function ReqPropsCount50:start(paramEx, timeout)
    if ReqPropsCount50.super.start(self, timeout) == false then
        return
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    -- example
    -- local paramEx = {}
    -- paramEx[#paramEx + 1] = {
    --     prop_id = 1,
    --     burse_type = 2
    -- }
    local param = {
        props = {
            paramEx
        }
    }
    local jsonStr = json.encode(param)
    XH.httpManager50:RequestPost(XH.HttpDefine.URL_PROPS_COUONT_50, UrlConf.URL_SXVIP_REMAINDER, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqPropsCount50:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_PROPS_COUONT_50 then
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
        self:setMessage(XH.ConstString.getStr("SXVIP_REMAINER_ERROR"))
        self:fail()
    end
end

return ReqPropsCount50