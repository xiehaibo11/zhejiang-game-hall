local ReqBBDealJoinClub = class("ReqBBDealJoinClub", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqBBDealJoinClub:ctor()
    ReqBBDealJoinClub.super.ctor(self)
    self._askId = 0
end

function ReqBBDealJoinClub:start(data, timeout)
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        club_id = data.clubId,
        target_user_ids  = data.userIds,
        agree  = data.agree,
    }
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_DEALJOINCLUB, UrlConf.URL_DEALJOINCLUB, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqBBDealJoinClub:onHttpCallBack(httpID, status, response)
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

return ReqBBDealJoinClub
