local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShuKe.ShuKeMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_SI_HUA_HU = "EVENT_SI_HUA_HU"

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgSiHuaHu), msgClass = CF.GameProtocol.msgSiHuaHu }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgBaoPai), msgClass = CF.GameProtocol.msgBaoPai }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgBaoPaiFlag), msgClass = CF.GameProtocol.msgBaoPaiFlag }
    return subXYDealList
end

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self:getGameData():setIsBaoPai(false)
end

function GameModule:onMsgSiHuaHu(msgData)
    self:dispatchEvent( { name = self.EVENT_SI_HUA_HU })
end

function GameModule:onMsgBaoPai(msgData)
    self:getGameData():setIsBaoPai(false)
    for seat = 0 , CF.roomData:getMaxPlayer() - 1 do
       if msgData.bBaoPai[seat] then
            self:getGameData():setIsBaoPai(true)
       end
    end
   
end

function GameModule:onMsgBaoPaiFlag(msgData)
    -- body
end

return GameModule