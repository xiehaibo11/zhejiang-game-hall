local GameModule = CF.gameClass("GameModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.GameLayer.Module")

GameModule.EVENT_REPLAYCE_SHOW_ANI = "EVENT_REPLAYCE_SHOW_ANI"
GameModule.EVENT_FOLLOWMAH_SHOW_ANI = "EVENT_FOLLOWMAH_SHOW_ANI"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgStartNotifyInfo), msgClass = CF.GameProtocol.msgStartNotifyInfo}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFollowMah), msgClass = CF.GameProtocol.msgHZFollowMah}
    return subXYDealList
end

function GameModule:onMsgStartNotifyInfo(msgData)
    if msgData.flower == 0 or msgData.joker == 0 then
        return
    end
    local mah = { msgData.flower, msgData.joker }
    self:getGameData():setOpenMahToFlower({ msgData.flower })
    self:getGameData():setOpenData(mah)
    self:dispatchEvent( { name = self.EVENT_OPEN_WALL_MAH , msg = msgData})
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self._showChipsList = self._showChipsList or {}
    self._showChipsList[#self._showChipsList + 1] = clone(chips)
    if #self._showChipsList >= 2 then
        -- 骰子动画，可能有队列动画
        self:showChips(self._showChipsList[1])        
        self._showChipsList = {}
    end
end

-- 补花
function GameModule:onMsgReplace(msgData)
    GameModule.super.onMsgReplace(self, msgData)
    --播放补花动画
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    self:dispatchEvent( { name = self.EVENT_REPLAYCE_SHOW_ANI, msg = {seat = localSeat} })
end

-- 跟风的玩家座位
function GameModule:onMsgFollowMah(msgData)
    self:dispatchEvent( { name = self.EVENT_FOLLOWMAH_SHOW_ANI })
end

return GameModulea