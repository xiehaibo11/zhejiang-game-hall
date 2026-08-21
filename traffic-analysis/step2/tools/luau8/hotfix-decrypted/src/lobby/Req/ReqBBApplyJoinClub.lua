local ReqBBApplyJoinClub = class("ReqBBApplyJoinClub", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqBBApplyJoinClub:ctor()
    ReqBBApplyJoinClub.super.ctor(self)
    self._askId = 0
end

function ReqBBApplyJoinClub:start(data, timeout)
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        club_id = data.clubId,
        friends = data.friends
    }
    -- local headmap = {
    --     Authorization = "Bearer " .. XH.playerData:getJwtToken()
    -- }
    -- ReqBBApplyJoinClub.super.start(self, nil, json.encode(urlInfo), nil, handler(self, self.onHttpCallBack), headmap)

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(UrlConf.HTTP_ID_APPLYJOINCLUB, UrlConf.URL_APPLYJOINCLUB, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqBBApplyJoinClub:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response and response.resp and response.resp.errCode == 0 then
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

return ReqBBApplyJoinClub
t