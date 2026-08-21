local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

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

function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.LKONG or flag == CF.GameDefine.COMB_FLAG.JOKCMB then
        return true
    end
    return false
end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs - 1 do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

return GameModule