local QueryReBackPlayersRequest = class("QueryReBackPlayersRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function QueryReBackPlayersRequest:ctor()
    QueryReBackPlayersRequest.super.ctor(self)
    self._askId = 0
end

function QueryReBackPlayersRequest:start(actId, user_ids, timeout)
    if QueryReBackPlayersRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_ids"] = user_ids
    urlInfo["act_id"] = actId
    urlInfo["ask_id"] = self._askId

    self._reqUsers = user_ids

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.QueryReBackPlayersRequest then
        TestConfig.QueryReBackPlayersRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_QUERY_CLUB, 200, TestConfig.QueryReBackPlayersRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_QUERY_CLUB, UrlConf.URL_RECALL_NEW_QUERY_CLUB, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function QueryReBackPlayersRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_QUERY_CLUB then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.reqUsers = self._reqUsers
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试QueryReBackPlayersRequest")
        self:fail()
    end
end

return QueryReBackPlayersRequest