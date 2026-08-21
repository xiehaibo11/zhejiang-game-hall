local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.BaseCardGame.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_HIDE_BASE_SCORE = "EVENT_HIDE_BASE_SCORE"
RoomInfoModule.EVENT_GONG_SCORE_CHANGED = "EVENT_GONG_SCORE_CHANGED"
RoomInfoModule.EVENT_WIN_FIRE_ANI = "EVENT_WIN_FIRE_ANI"

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
end

function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = self:analyseGameRuleStr(msgData.strGameRule)
    CF.roomData:setGameRule(strGameRule)
    if string.find(strGameRule, "自动准备") ~= nil then
        CF.msgManager:sendGameStart()
    end
    local lmtMarker = string.find(strGameRule, "禁用记牌器")
    lmtMarker = lmtMarker or false
    CF.game:getModule("Marker"):setLmtMarker(lmtMarker)
    return strGameRule
end

function RoomInfoModule:getSubXYDealList()
    local list = RoomInfoModule.super.getSubXYDealList(self)
    return list
end

function RoomInfoModule:onMsgBase(msgData)
    RoomInfoModule.super.onMsgBase(self, msgData)
    if msgData.iBaseType == 1 and not CF.roomData:getIsGameStart() then --动态底分
        self:dispatchEvent({ name = self.EVENT_HIDE_BASE_SCORE })
    end
end

function RoomInfoModule:onUpdateGongScore(score)
    self:dispatchEvent({ name = self.EVENT_GONG_SCORE_CHANGED, msg = { gongScore = score } })
end

function RoomInfoModule:playAnimation()
    self:dispatchEvent({ name = self.EVENT_WIN_FIRE_ANI })
end

return RoomInfoModule