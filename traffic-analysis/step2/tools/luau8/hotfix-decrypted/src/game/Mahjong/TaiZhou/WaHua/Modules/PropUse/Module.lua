local PropUseModule = CF.gameClass("PropUseModule", "game.Mahjong.BasicMahjong.Modules.PropUse.Module")

function PropUseModule:getSubXYDealList()
    local subXYDealList = PropUseModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShuffleSeatsTZ),msgClass = CF.GameProtocol.msgShuffleSeatsTZ}
    return subXYDealList
end

function PropUseModule:onMsgShuffleSeats(msgData)

end

function PropUseModule:onMsgShuffleSeatsTZ(msgData)
    local msgShuffleSeats = msgData.sSeat or {}
    local shuffleList = {}
    local KW_TMP_THESAURUS = {"金主", "豪门", "富豪", "贵族", "财主"}
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(i)
        if player and msgShuffleSeats[i] == 1 then -- 1 表示洗了牌，0表示没洗牌
            local shufferText = string.format("%s玩家%s，正在洗牌...", KW_TMP_THESAURUS[math.random(1, #KW_TMP_THESAURUS)], player:getNickName2())
            table.insert(shuffleList, shufferText)
        end
    end
    if #shuffleList > 0 then
        local ShuffleView =CF.gameRequire("Modules.PropUse.ShuffleView")
        local runningScene = display.getRunningScene()
        if not runningScene :getChildByName(ShuffleView.ClassName) then
            ShuffleView.new():showSelf()
            self:dispatchEvent({name = self.EVENT_SHOW_SHUFFLE_LIST, msg = {shufflelist = shuffleList}})
        else
            self:dispatchEvent({name = self.EVENT_SHOW_SHUFFLE_LIST, msg = {shufflelist = shuffleList}})
        end
        
        -- if not self._shuffleAniLayer then
        --     self._shuffleAniLayer = CF.gameRequire("Modules.PropUse.ShuffleView").new()
        --     self._shuffleAniLayer:showSelf()
        --     self._shuffleAniLayer:showShuffleList(shuffleList)
        -- else
        --     self._shuffleAniLayer:showShuffleList(shuffleList)
        -- end
    end
end

return PropUseModule�