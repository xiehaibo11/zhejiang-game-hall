local ListClubReBackPlayersRequest = class("ListClubReBackPlayersRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function ListClubReBackPlayersRequest:ctor()
    ListClubReBackPlayersRequest.super.ctor(self)
    self._curPage = 0
    self._askId = 0
end

function ListClubReBackPlayersRequest:start(act_id, club_id, page, page_size, timeout)
    if ListClubReBackPlayersRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = act_id
    urlInfo["club_id"] = club_id
    urlInfo["page"] = page
    urlInfo["page_size"] = page_size
    urlInfo["ask_id"] = self._askId

    self._curPage = page

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.ListClubReBackPlayersRequest then
        TestConfig.ListClubReBackPlayersRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_LIST_CLUB, 200, TestConfig.ListClubReBackPlayersRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_LIST_CLUB, UrlConf.URL_RECALL_NEW_LIST_CLUB, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ListClubReBackPlayersRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_LIST_CLUB then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.curPage = self._curPage
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试ListClubReBackPlayersRequest")
        self:fail()
    end
end

return ListClubReBackPlayersRequest