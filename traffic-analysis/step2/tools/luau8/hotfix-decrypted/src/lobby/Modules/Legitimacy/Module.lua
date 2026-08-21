local LegitimacyModule = class("LegitimacyModule", XH.ModuleBase)

--是否使用新合规策略请求
local USE_NEW_LEGITIMACY = true

function LegitimacyModule:getReqConfig()
    return {
        reqIsUserHideGame = { reqPath = "lobby.Req.Legitimacy.ReqLegitimacy", callBack = self.respIsUserHideGameCallBack },
    }
end

function LegitimacyModule:getProxyEvents()
    return {}
end

function LegitimacyModule:ctor()
    LegitimacyModule.super.ctor(self)
    XH.playerData:setUseNewHideGameReq(USE_NEW_LEGITIMACY)
    self._teaid = 0
end

function LegitimacyModule:isLegitimacyOpen(teaid)
    local IsLegitimacyClose = require("app.Config.GlobalConfig").IsLegitimacyClose
    if IsLegitimacyClose then
        return false
    end
    --请求合规http  4.30之后注册的玩家才判断（同步大厅LobbyModule:onLoginSuccessCallBack判断）
    if teaid then
        return true
    end
    if XH.playerData:getRegTime() > 1619712000 then
        return true
    end
    return false
end

function LegitimacyModule:_reqIsUserHideGameOld(numid, teaid)
    print("userHide old", numid ,teaid )
    local ReqCompliance = require("app.Req.ReqCompliance")
    local reqCompliance = ReqCompliance:new()
    if teaid then
        reqCompliance:startII(teaid, numid)
    else
        reqCompliance:start()
    end
end

--请求隐藏策略配置
--比赛场须传领队numid和比赛场id
function LegitimacyModule:reqIsUserHideGame(numid, teaid)
    numid = numid or XH.playerData:getNumberID()
    print("userHide", numid ,teaid )
    if not self:isLegitimacyOpen(teaid) then
        return
    end
    if not USE_NEW_LEGITIMACY then
        self:_reqIsUserHideGameOld(numid, teaid)
        return
    end
    self._teaid = teaid
    if teaid then
        XH.playerData:setNeedHideClubComGames(true)
    else
        XH.playerData:setNeedHideComGames(true)
        XH.playerData:setNeedHideComGoldGames(true)
    end
    self:startReq("reqIsUserHideGame", numid, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function LegitimacyModule:respIsUserHideGameCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if self._teaid then
            XH.playerData:setClubWhiteListGames(data.data.gameids)
            XH.playerData:setNeedHideClubComGames(data.data.teahourse == 0)
        else
            XH.playerData:setWhiteListGames(data.data.gameids)
            XH.playerData:setNeedHideComGames(data.data.loge == 0)
            XH.playerData:setNeedHideComGoldGames(data.data.gold == 0)
        end
    end
end

return LegitimacyModuleE
