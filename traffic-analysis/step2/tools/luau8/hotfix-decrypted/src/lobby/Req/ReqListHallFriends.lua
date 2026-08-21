local ReqListHallFriends = class("ReqListHallFriends", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqListHallFriends:ctor()
    ReqListHallFriends.super.ctor(self)
    self._askId = 0
end

function ReqListHallFriends:start(data, timeout)
    self._askId = os.time()
    local urlInfo = {
        ask_id = self._askId,
        source = 9,
        page = 1,
        page_size = 20
    }
    -- local headmap = {
    --     Authorization = "Bearer " .. XH.playerData:getJwtToken()
    -- }
    -- ReqListHallFriends.super.start(self, nil, json.encode(urlInfo), nil, handler(self, self.onHttpCallBack), headmap)
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_LIST_HALL_FRIEND, UrlConf.URL_LIST_HALL_FRIEND, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqListHallFriends:onHttpCallBack(httpID, status, response)
    if status == 200 then
        if response and response.code == 0 then
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

return ReqListHallFriends
d