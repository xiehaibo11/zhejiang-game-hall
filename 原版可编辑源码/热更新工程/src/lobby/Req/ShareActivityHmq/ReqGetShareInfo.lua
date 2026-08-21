local ReqGetShareInfo = class("ReqGetShareInfo", XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqGetShareInfo:ctor()
    ReqGetShareInfo.super.ctor(self)
end

function ReqGetShareInfo:start(timeout)
    local timestamp = os.time()
    local areaID = XH.areaData:getAreaID()
    local numid = XH.playerData:getNumberID()
    local from = "pc"
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())

    local uuid = areaID .. numid .. timestamp .. math.random(9999)

    local tHttpInfo = "?numid=" .. numid .. "&uid=" .. uid .. "&timestamp=" .. timestamp .. "&from=" .. from .. "&uuid=" .. uuid .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_HANGMA_SHARE_ACT

    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_GETSHARE_INFO, UrlConf.URL_ACT .. tHttpInfo,
    HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpShareInfoCallBack),nil,true)
end

function ReqGetShareInfo:onHttpShareInfoCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
        else
            self:fail()
        end
    end
end

return ReqGetShareInfo