local ReqShopPageMarkTop = class("ReqShopPageMarkTop", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

-- 如需用到商城预发布功能
-- pre_pub 预发布参数，如果需要传 per_pub=1

-- 请求标签信息
function ReqShopPageMarkTop:start(numid, gameid, areaId, windMsgId, uid, timeoutTime)
    if ReqShopPageMarkTop.super.start(self, timeoutTime) == false then
        return
    end
    local timestamp = socket.gettime()
    local data = { }
    table.insert(data, "sid=" .. windMsgId)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "gameid=" .. gameid)
    table.insert(data, "areaid=" .. areaId)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_SHOP_PAGE_MARK)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_EXCHANGESHOP .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpReqShopPageMarkTopCallBack),nil,true)
end

function ReqShopPageMarkTop:onHttpReqShopPageMarkTopCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
        else
            self:success({})
        end
    else
        self:fail()
    end
end

return ReqShopPageMarkTop