local ReqGoldRecord = class("ReqGoldRecord", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

function ReqGoldRecord:ctor()
    ReqGoldRecord.super.ctor(self)
end

function ReqGoldRecord:start(param , timeout)
    if ReqGoldRecord.super.start(self, timeout) == false then
        return
    end

    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        game_id = param.gameID,
        page_idx = param.pageIdx
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLD_RECORD_REQUEST, UrlConf.URL_GOLD_RECORD_REQUEST, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqGoldRecord:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLD_RECORD_REQUEST then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response , self._gameid)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end
return ReqGoldRecord
