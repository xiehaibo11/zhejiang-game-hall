local CellClubRankRequest = class("CellClubRankRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function CellClubRankRequest:ctor()
    CellClubRankRequest.super.ctor(self)
    self._askId = 0
end

function CellClubRankRequest:start(beginTime, endTime, rankType, curIndex, pageSize, gameID, club_id)
    if CellClubRankRequest.super.start(self) == false then
        return
    end
    local reqData = {
        ask_id = 0,
        tenant_id = XH.areaData:getTenantid(),
        club_id = club_id,
        area_id = XH.areaData:getAreaID(),
        begin_time = beginTime,
        end_time = endTime,
        rank_type = rankType,
        cur_index = (curIndex - 1) * pageSize + 1,
        count = pageSize,
        game_id = gameID or 0,
        target_user_id = XH.playerData:getNumberID(),
        user = {
            user_id = XH.playerData:getNumberID(),
            area_id = XH.areaData:getAreaID(),
        }
    }
    if gameID ~= 0 then
        reqData.select_type = 32
    end
    if curIndex == 1 then
        reqData.cur_index = 0
    end
    self._page = curIndex

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(reqData)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_CLUB_RANK_RECORD, UrlConf.URL_RANK_MONTH_RECORD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function CellClubRankRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_CLUB_RANK_RECORD then
        return
    end
    if status == 200 then
        response.page = self._page
        self:success(response)
    else
        self:setMessage(XH.ConstString.getStr(""))
        self:fail()
    end
end

return CellClubRankRequestG