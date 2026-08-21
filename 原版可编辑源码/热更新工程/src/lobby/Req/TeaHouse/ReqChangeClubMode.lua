-- 福袋活动
local ReqChangeClubMode = class("ReqChangeClubMode", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqChangeClubMode:ctor()
    ReqChangeClubMode.super.ctor(self)
    self._askId = 0
end

function ReqChangeClubMode:start(data, timeout)
    if ReqChangeClubMode.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["club_id"] = data.clubId
    urlInfo["opt"] = data.opt

    self.reqData = data
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_CHANGE_CLUB_MODE, UrlConf.URL_CHANGE_CLUB_MODE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqChangeClubMode:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_CHANGE_CLUB_MODE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.reqData = self.reqData
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage("转换失败")
        self:fail()
    end
end

return ReqChangeClubMode