local ReqNewPlayTypeActInfo = class("ReqNewPlayTypeActInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

local KW_AID = {
    [900038] = 2754,
    [900043] = 2764,
}

function ReqNewPlayTypeActInfo:start(teaNumber, timeoutTime)
    if ReqNewPlayTypeActInfo.super.start(self, timeoutTime) == false then
        return
    end

    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)

    local data = { }
    table.insert(data, "aid=" .. (KW_AID[XH.areaData:getLobbyID()] or 0))
    table.insert(data, "teaid=" .. teaNumber or 0)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "uuid=" .. uuid)
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_TEA_NEW_PLAY_TYPE_ACT_INFO)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), nil, true)
end

function ReqNewPlayTypeActInfo:onHttpCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
        else
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqNewPlayTypeActInfo