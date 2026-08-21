local ReqHttp = require("app.Base.Req.ReqHttp")
local ReqH5WeChatAllUserID = class("ReqH5WeChatAllUserID", ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqH5WeChatAllUserID:start(aid, secret, appid, windID, timeout)
    if ReqH5WeChatAllUserID.super.start(self, timeout) == false then
        return
    end
    local timestamp = os.time()
    local areaid = aid
    local numid = XH.playerData:getNumberID()
    local tmpRequestUrl = UrlConf.URL_PALMAPI .. "?" .. string.format("areaid=%d&numid=%s&timestamp=%s&wid=%s&reqUrl=%s", areaid, numid, timestamp, windID, UrlConf.URL_SECOND_DOMAIN.REQ_H5_WECAHT_ALL_USERID)
    XH.httpManager:RequestGet(HttpDefine.REQ_H5_WECAHT_ALL_USERID, tmpRequestUrl, 4, handler(self, self.onHttpH5WeCahtAllUserIDCallBack),nil,true)
end

function ReqH5WeChatAllUserID:onHttpH5WeCahtAllUserIDCallBack(eType, status, response)
    if eType == HttpDefine.REQ_H5_WECAHT_ALL_USERID then
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
end
return ReqH5WeChatAllUserID�