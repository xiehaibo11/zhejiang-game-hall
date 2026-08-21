local CellContributeRequest = class("CellContributeRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellContributeRequest:ctor()
    CellContributeRequest.super.ctor(self)
    self._askId = 0
end

function CellContributeRequest:start(opt, start, length, start_time, end_time, page, user_id, club_id)
    if CellContributeRequest.super.start(self) == false then
        return
    end
    local reqData = {
        opt = opt,
        club_id = club_id,
        start = start,
        length = length,
        start_time = start_time,
        end_time = end_time,
        target_user_id = user_id, -- USER.mid,
    }
    self._page = page

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(reqData)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_CONTRIBUTE, UrlConf.URL_RANK_CONTRIBUTE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellContributeRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_CONTRIBUTE then
        return
    end
    if status == 200 then
        response.page = self._page
        self:success(response)
    else
        self:setMessage(XH.ConstString.getStr(""))
        self:fail()
    end
end

return CellContributeRequest