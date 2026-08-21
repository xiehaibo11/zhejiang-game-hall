local ReqCritHofRankListRequest = class("ReqCritHofRankListRequest", XH.ReqHttp)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")

-- 暴击名人堂获取排行榜分页数据
function ReqCritHofRankListRequest:ctor()
    ReqCritHofRankListRequest.super.ctor(self)
end

function ReqCritHofRankListRequest:start(param, timeout)
    if ReqCritHofRankListRequest.super.start(self, timeout) == false then
        return
    end

    self._currPageIdx = param.pageIdx
    self._pageSize = param.pageSize or 20

    local protocol = {
        ask_id = self._askid,
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        act_id = param.aid,
        page = self._currPageIdx,
        page_size = self._pageSize,
        pageSize = self._pageSize
    }

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(protocol)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_GOLD_CRITHOFRANKLIST, UrlConf.URL_GOLD_CRITHOFRANKLIST, jsonStr,
                                 XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqCritHofRankListRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_GOLD_CRITHOFRANKLIST then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.currPageIdx = self._currPageIdx
            response.totalPageNum = math.ceil(response.totalCount / self._pageSize)
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end
return ReqCritHofRankListRequest
C