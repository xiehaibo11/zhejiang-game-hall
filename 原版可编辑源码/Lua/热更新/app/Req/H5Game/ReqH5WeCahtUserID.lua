local ReqHttp = require("app.Base.Req.ReqHttp")
local ReqH5WeCahtUserID = class("ReqH5WeCahtUserID", ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")
require("cocos.cocos2d.json")

function ReqH5WeCahtUserID:start(aid, secret, appid, windID, timeout)
    if ReqH5WeCahtUserID.super.start(self, timeout) == false then
        return
    end
    local timestamp = os.time()
    local areaid = aid
    local numid = XH.playerData:getNumberID()
    local tmpRequestUrl = UrlConf.URL_PALMAPI .. "?" .. string.format("areaid=%d&numid=%s&timestamp=%s&wid=%s&reqUrl=%s", areaid, numid, timestamp, windID, UrlConf.URL_SECOND_DOMAIN.REQ_H5_WECAHT_USERID)
    XH.httpManager:RequestGet(HttpDefine.REQ_H5_WECAHT_USERID, tmpRequestUrl, 4, handler(self, self.onHttpH5WeCahtUserIDCallBack),nil,true)
end

function ReqH5WeCahtUserID:onHttpH5WeCahtUserIDCallBack(eType, status, response)
    if eType == HttpDefine.REQ_H5_WECAHT_USERID then
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
return ReqH5WeCahtUserID