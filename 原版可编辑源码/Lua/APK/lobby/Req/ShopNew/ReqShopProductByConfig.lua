local ReqShopProductByConfig = class("ReqShopProductByConfig", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

-- �����ǩ�µ���Ʒ
function ReqShopProductByConfig:start(numid, gameid, areaId, windMsgId, uid, pid, timeoutTime)
    if ReqShopProductByConfig.super.start(self, timeoutTime) == false then
        return
    end
    local timestamp = socket.gettime()
    local data = { }
    table.insert(data, "sid=" .. windMsgId)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "gameid=" .. gameid)
    table.insert(data, "areaid=" .. areaId)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "pm_id=" .. pid)
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_SHOP_PRODUCTS_CONFIG)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_EXCHANGESHOP .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpReqShopProductByConfigCallBack), nil, true)
end

function ReqShopProductByConfig:onHttpReqShopProductByConfigCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
        else
            self:success()
        end
    else
        self:fail()
    end
end

return ReqShopProductByConfig