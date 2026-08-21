local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_CROSS_HU = "EVENT_CROSS_HU"

function GameModule:ctor()
    GameModule.super.ctor(self)
    local gameid = CF.roomData:getGameID()
    if gameid ~= 30272 then --除了洞头麻将 其他声音播放函数都要改
        CF.soundManager.playSoundMahAction = CF.soundManager.playSoundMahActionWidthSuffix
    end
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgCrossHu),msgClass = CF.GameProtocol.msgCrossHu}
    return subXYDealList
end

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
end

function GameModule:onMsgCrossHu(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_CROSS_HU, data = {seat = msgData.sSeat, bShow = msgData.bCrossHu}})
    end
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    --小结束风位
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local playerCount = CF.roomData:getChairs()
    if playerCount == 2 then
        for seat = 0, playerCount - 1 do
            local fengSeat = 0
            if seat ~= msgData.nBanker then
                fengSeat = 2
            end
            winLostData:setSeatWind(seat, fengSeat)
        end
    else
        for seat = 0, 3 do
            local fengSeat = (( seat - msgData.nBanker ) + 4 ) % 4
            winLostData:setSeatWind(seat, fengSeat)
        end
    end
end

return GameModule