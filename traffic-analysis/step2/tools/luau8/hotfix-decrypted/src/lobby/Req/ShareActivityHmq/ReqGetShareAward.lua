local ReqGetShareAward = class("ReqGetShareAward", XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

local poolIdList = {
    1596,
    1597,
}
function ReqGetShareAward:ctor()
    ReqGetShareAward.super.ctor(self)
    self._subid = 3
end

function ReqGetShareAward:start(subid, timeout)
    if ReqGetShareAward.super.start(self, timeout) == false then
        return
    end
    local timestamp = os.time()
    local areaID = XH.areaData:getAreaID()
    local appId = 10006
    local numid = XH.playerData:getNumberID()
    local secret = "93b8e3f475b69a8f1511dee024073e2f"
    local from = "pc"
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())

    local uuid = areaID .. numid .. timestamp .. math.random(9999)
    local signatureStr = "app_id=" .. appId .. "&numid=" .. numid .. "&secret=" .. secret .. "&timestamp=" .. timestamp .. "&uuid=" .. uuid
    local signature =  XH.SysTool:md5_encode(signatureStr)
    local pid = poolIdList[subid] or 0

    local tHttpInfo = "numid=" .. numid .. "&uid=" .. uid .. "&signature=" .. signature .. "&timestamp=" .. timestamp .. "&app_id=" .. appId .. "&from=" .. from .. "&pid=" .. pid .. "&uuid=" .. uuid

    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_HANGMA_SHARE_AWARD, UrlConf.HTTP_ID_HANGMA_SHARE_AWARD .. tHttpInfo,
    HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpShareInfoCallBack))
end

function ReqGetShareAward:onHttpShareInfoCallBack(eType, status, response)
    if status == 200 then
        if response.status == 0 then
            self:success(response.info)
        else
            self:fail()
        end
    end
end

return ReqGetShareAward�