local ReqBBClubApplyFriends = class("ReqBBClubApplyFriends", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqBBClubApplyFriends:ctor()
    ReqBBClubApplyFriends.super.ctor(self)
    self._askId = 0
end

function ReqBBClubApplyFriends:start(data, timeout)
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        club_id  = data.clubId,
        user_ids = data.userIds
    }
    self._data = data
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(UrlConf.HTTP_ID_CLUBAPPLYFRIENDS, UrlConf.URL_CLUBAPPLYFRIENDS, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqBBClubApplyFriends:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
            response.clubId = self._data.clubId
            response.userIds = self._data.userIds
            self:success(response)
        else
            self:setMessage("请求失败")
            self:fail()
        end
    else
        self:setMessage("请求失败")
        self:fail()
    end
end

return ReqBBClubApplyFriends
'