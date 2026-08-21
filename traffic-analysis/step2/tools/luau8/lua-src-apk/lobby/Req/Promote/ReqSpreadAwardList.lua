local ReqSpreadAwardList = class("ReqSpreadAwardList", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local PromoteConfig = require("lobby.Modules.Promote.Config")

function ReqSpreadAwardList:start(teaNumber, draw_type, timeoutTime)
    if ReqSpreadAwardList.super.start(self, timeoutTime) == false then
        return
    end
    if PromoteConfig[XH.areaData:getLobbyID()] == nil then
        return
    end
    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)

    local data = {}
    table.insert(data, "aid=" .. (PromoteConfig[XH.areaData:getLobbyID()].AID or 0))
    table.insert(data, "teaid=" .. teaNumber or 0)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "uuid=" .. uuid)
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "draw_type=" .. draw_type)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_TEAHOUSE_SPREAD_AWARD_LIST)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), nil, true)
end

function ReqSpreadAwardList:onHttpCallBack(eType, status, response)
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

return ReqSpreadAwardList
�