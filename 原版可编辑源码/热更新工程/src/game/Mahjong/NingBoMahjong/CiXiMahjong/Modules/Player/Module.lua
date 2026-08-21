local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")
PlayerModule.EVENT_UPDATE_LS_FEN = "EVENT_UPDATE_LS_FEN"
PlayerModule.EVENT_UPDATE_QJ_FEN = "EVENT_UPDATE_QJ_FEN"

function PlayerModule:ctor()
    PlayerModule.super.ctor(self)
end

function PlayerModule:onExit()
    PlayerModule.super.onExit(self)
end

function PlayerModule:getSubXYDealList()
    local xyList = PlayerModule.super.getSubXYDealList(self)
    xyList[#xyList + 1] = { callback = handler(self, self.onMsgHeadLingSuanScore), msgClass = CF.GameProtocol.msgLingSuanScore }
    xyList[#xyList + 1] = { callback = handler(self, self.onMsgHeadScore), msgClass = CF.GameProtocol.msgHeadScore }
    return xyList
end

function PlayerModule:onMsgHeadScore(msgData)
    self:dispatchEvent({ name = self.EVENT_UPDATE_LS_FEN, msg = { score = msgData.nHeadScore, isLs = CF.game:getModule("RoomInfo"):getTypeSanJiaLingSuan() } })
end

function PlayerModule:onMsgHeadLingSuanScore(msgData)
    self:dispatchEvent({ name = self.EVENT_UPDATE_QJ_FEN, score = msgData.nLingSuanScore })
end

return PlayerModule