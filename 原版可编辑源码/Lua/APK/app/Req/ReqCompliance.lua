local ReqCompliance = class("ReqCompliance", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local AuthorStr = XH.SysTool:base64_encode("dzzj:8e7299a27cd3566db68122caaced7ab3");
function ReqCompliance:start()
    XH.playerData:setNeedHideComGames(true)
    local param = "areas/" .. XH.areaData:getAreaID().."/users/".. XH.playerData:getNumberID().."/strategy?"
    local headmap = {}
    headmap["Authorization"] = "Basic "..AuthorStr
    XH.httpManager:RequestGet("", UrlConf.HTTP_ID_COMPLIANCE .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self,self.onHttpReqComplianceCallBack), headmap)
end

function ReqCompliance:onHttpReqComplianceCallBack(eType, status, response)
    if status == 200 then
        if response.strategy == 0 then
            XH.playerData:setNeedHideComGames(true)
        elseif response.strategy == 1 then
            XH.playerData:setNeedHideComGames(false)
        end
    end
end

function ReqCompliance:startII(clubid,ownerid)
    XH.playerData:setNeedHideClubComGames(true)
    local param = "areas/" .. XH.areaData:getAreaID().."/clubs/"..clubid.."/strategy?".."owner=".. ownerid
    local headmap = {}
    headmap["Authorization"] = "Basic "..AuthorStr
    XH.httpManager:RequestGet("", UrlConf.HTTP_ID_COMPLIANCE .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self,self.onHttpReqClubComplianceCallBack), headmap)
end

function ReqCompliance:onHttpReqClubComplianceCallBack(eType, status, response)
    if status == 200 then
        if response.strategy == 0 then
            XH.playerData:setNeedHideClubComGames(true)
        elseif response.strategy == 1 then
            XH.playerData:setNeedHideClubComGames(false)
        end
        self:success()
    else
        self:fail()
    end
end

return ReqCompliance