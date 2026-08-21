local ReqInviteLogin = class("ReqInviteLogin", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local URL_GET_ACT = UrlConf.URL_GET_ACT
function ReqInviteLogin:ctor()
    ReqInviteLogin.super.ctor(self)
    self._askId = 0
end

function ReqInviteLogin:generate(strUrl, params)
    local p = {}
    for k,v in pairs(params) do
        p[#p + 1] = k .. "=" .. v
    end
    local strParams = table.concat(p, "&")
    return strUrl .. strParams
end

function ReqInviteLogin:start(data, timeout)
    if ReqInviteLogin.super.start(self, timeout) == false then
        return
    end

    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local urlInfo = {
        from = 'pc',
        numid = numid,
        timestamp = timestamp,
        aid = data.aid,
        uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID()),
        uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)
    }
    for i,v in pairs(data.ex or {}) do
        urlInfo[i] = v
    end
    self.reqData = urlInfo
    self.method = data.method

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    local method = data.method or "zqinvite/login"
    local reqUrl = self:generate(URL_GET_ACT .. method .. "?", urlInfo)
    print(reqUrl)
    XH.httpManager50:RequestGet("", reqUrl, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), nil)
end

function ReqInviteLogin:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response.status == 0 then
            self:success(response)
        else
            self:setMessage(response.message)
            self:fail(response)
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqInviteLogin
}