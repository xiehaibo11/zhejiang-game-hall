local CellChooseRankRequest = class("CellChooseRankRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellChooseRankRequest:ctor()
    CellChooseRankRequest.super.ctor(self)
    self._askId = 0
end

function CellChooseRankRequest:start(club_id, choose_rank, opt)
    if CellChooseRankRequest.super.start(self) == false then
        return
    end
    local reqData = {
        club_id = club_id,
        choose_rank = choose_rank,
        opt = opt,
    }
    self._opt = opt
    self.chooseRank = choose_rank

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(reqData)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_CHOOSE_RANK, UrlConf.URL_RANK_CHOOSERANK, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellChooseRankRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_CHOOSE_RANK then
        return
    end
    if status == 200 then
        if self._opt == 1 then
            response.chooseRank = self.chooseRank
        end
        self:success(response)
    else
        self:setMessage(XH.ConstString.getStr(""))
        self:fail()
    end
end

return CellChooseRankRequest