local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.RoomInfo.Module")
RoomInfoModule.EVENT_SET_SCORE = "EVENT_SET_SCORE"

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayerScore),msgClass = CF.GameProtocol.msgPlayerScore}
    return subXYDealList
end

function RoomInfoModule:onMsgBaseScore(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local nBaseScore = msgData.nBaseScore
    gameData:setBaseScoreEx(nBaseScore)
    local tAllPlayerScore = clone(gameData:getAllPlayerScore())
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        if gameData:getFortyTablets() == true then
            local tableBaseScore = gameData:getBaseScoreEx()
            if tableBaseScore and tableBaseScore ~= 0 then
                tAllPlayerScore[seat] = tAllPlayerScore[seat] + gameData:getTuoDiScore()
            end
        end
    end
    self:updatePlayerScore(tAllPlayerScore)
end

function RoomInfoModule:updatePlayerScore(score)
    self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = {score = score}})
end

-- 玩家分数
function RoomInfoModule:onMsgPlayerScore(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    gameData:setAllPlayerScore(clone(msgData.nWinLost))
    local tAllPlayerScore = clone(msgData.nWinLost)
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        gameData:setPlayerScore(msgData.nWinLost[seat], seat)
        if gameData:getFortyTablets() == true then
            local tableBaseScore = gameData:getBaseScoreEx()
            if tableBaseScore and tableBaseScore ~= 0 then
                tAllPlayerScore[seat] = tAllPlayerScore[seat] + gameData:getTuoDiScore()
            end
        end
    end
    self:updatePlayerScore(tAllPlayerScore)
end

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self, msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local strGameRule = CF.roomData:getGameRule()
    local textSet = CF.StringTool.spiltStringByFlag(strGameRule, "/")
    if textSet ~= nil then
        for i = 1,#textSet do
            local playScoreStr = string.match(textSet[i],"%d+拖底")
            if playScoreStr then
                gameData:setFortyTablets(true)
                local playScoreNum = tonumber(string.match(playScoreStr,"%d+"))
                gameData:setTuoDiScore(playScoreNum)
            end
        end
    end
end

return RoomInfoModule