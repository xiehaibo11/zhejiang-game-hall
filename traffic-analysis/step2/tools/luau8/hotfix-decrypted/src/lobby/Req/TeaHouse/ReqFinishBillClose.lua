local ReqFinishBillClose = class("ReqFinishBillClose", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqFinishBillClose:ctor()
    ReqFinishBillClose.super.ctor(self)
    self._askId = 0
end

-- enum FilterScene {
--     ScoreFilter = 0; //分数筛选
--     LikeFilter = 1; //点赞筛选
-- }

function ReqFinishBillClose:start(data, timeout)
    if ReqFinishBillClose.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo["ask_id"] = os.time()
    urlInfo["club_id"] = data.club_id
    urlInfo["to_user_id"] = data.to_user_id or 0
    urlInfo["like_type"] = data.like_type or 0 -- 0:领队/副领队点赞 1:玩家点赞
    urlInfo["filter_type"] = data.filter_type   -- 筛选类型 大于0是设置 1:在使用 2:未使用 
    urlInfo["scene"] = data.scene

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    -- 记录本次请求参数，回调时用于精确判定点赞成功
    self._reqToUserId = urlInfo["to_user_id"] or 0
    self._reqLikeType = urlInfo["like_type"] or 0
    self._reqFilterType = urlInfo["filter_type"] or 0

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_FINISHBILL_CLOSE, UrlConf.URL_REQ_FINISHBILL_CLOSE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqFinishBillClose:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_FINISHBILL_CLOSE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("请求服务器失败")
        self:fail()
    end
end

return ReqFinishBillClose�