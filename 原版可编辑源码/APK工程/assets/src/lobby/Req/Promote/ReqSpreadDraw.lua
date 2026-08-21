local ReqSpreadDraw = class("ReqSpreadDraw", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local PromoteConfig = require("lobby.Modules.Promote.Config")

function ReqSpreadDraw:start(teaNumber, draw_type, nowDate, timeoutTime)
    if ReqSpreadDraw.super.start(self, timeoutTime) == false then
        return
    end
    if PromoteConfig[XH.areaData:getLobbyID()] == nil then
        return
    end
    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)

    self._drawType = draw_type
    self._nowDate = nowDate
    self._teaNumber = teaNumber
    local data = {}
    table.insert(data, "aid=" .. (PromoteConfig[XH.areaData:getLobbyID()].AID or 0))
    table.insert(data, "teaid=" .. teaNumber or 0)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "uuid=" .. uuid)
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "draw_type=" .. draw_type)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_TEAHOUSE_SPREAD_DRAW)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), nil, true)
end

function ReqSpreadDraw:onHttpCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            response.data.draw_type = self._drawType
            response.data.nowDate = self._nowDate
            response.data.teaNumber = self._teaNumber
            self:success(response.data)
        else
            if response and response.message ~= nil then
                XH.TipTool.showToast(response.message, 3)
            end
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSpreadDraw
