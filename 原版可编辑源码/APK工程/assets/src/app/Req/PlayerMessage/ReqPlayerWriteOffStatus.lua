local ReqPlayerWriteOffStatus = class("ReqPlayerWriteOffStatus", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqPlayerWriteOffStatus:start(timeoutTime, optCheck)
    if ReqPlayerWriteOffStatus.super.start(self, timeoutTime) == false then
        return
    end
    local data = { }
    table.insert(data, "sid=" .. XH.areaData:getAreaWindID())
    table.insert(data, "areaid=" .. XH.areaData:getAreaID())
    table.insert(data, "numid=" .. XH.playerData:getNumberID())
    table.insert(data, "uid=" .. un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID()))
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_WRITE_OFF_STATUS)
    if optCheck then
        table.insert(data, "opt_check=" .. optCheck)
    end
    local param = table.concat(data, "&")
    print(UrlConf.URL_EXCHANGESHOP .. "?" .. param)
    XH.httpManager:RequestGet("", UrlConf.URL_EXCHANGESHOP .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpReqPlayerWriteOffStatusCallBack), nil, true)
end

function ReqPlayerWriteOffStatus:onHttpReqPlayerWriteOffStatusCallBack(eType, status, response)
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

return ReqPlayerWriteOffStatus