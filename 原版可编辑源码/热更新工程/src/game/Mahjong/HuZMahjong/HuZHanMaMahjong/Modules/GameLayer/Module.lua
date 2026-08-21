local GameModule = CF.gameClass("GameModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgThrowKongChips), msgClass = CF.GameProtocol.msgThrowKongChips}
    return subXYDealList
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self._showChipsList = self._showChipsList or {}
    self._showChipsList[#self._showChipsList + 1] = clone(chips)
    if #self._showChipsList >= 3 then
        -- 骰子动画，可能有队列动画
        self:showChips(self._showChipsList[2])
        self._showChipsList = {}
    end
end

--杠筛子 hanma
function GameModule:onMsgThrowKongChips(msgData)
    CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
    if #msgData.nChips > 0 then 
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_CHIPS, data = msgData.nChips })
    end
end

return GameModule