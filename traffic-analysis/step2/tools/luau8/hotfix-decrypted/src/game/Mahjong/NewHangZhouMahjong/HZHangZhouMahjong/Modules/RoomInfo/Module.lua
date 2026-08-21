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
                tAllPlayerScore[seat] = tAllPlayerScore[seat] + gameData:getTablets()
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
                tAllPlayerScore[seat] = tAllPlayerScore[seat] + gameData:getTablets()
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
    if string.find(strGameRule ,"跟庄") then
        local lobbyID = CF.areaData:getLobbyID() or 0
        local key = "GENZHUANG_" .. lobbyID
        local cnt = cc.UserDefault:getInstance():getIntegerForKey(key, 0)
        local cntEx = cc.UserDefault:getInstance():getIntegerForKey(key .. "_" .. CF.roomData:getRoomID(), 0)
        if cnt < 2 and cntEx == 0 then
            cc.UserDefault:getInstance():setIntegerForKey(key, cnt + 1)
            cc.UserDefault:getInstance():setIntegerForKey(key .. "_" .. CF.roomData:getRoomID(), 1)
            local text = "您已进入跟庄房间\n庄家出的第一张牌其他玩家同一圈都跟了相同的牌(财神也可当作此牌)，会掷骰子，根据点数庄家给分（分数区间2-12片）"
            CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK,
            }, text)
        end
    end
    if string.find(strGameRule ,"片") then
        -- 40片玩法
        gameData:setFortyTablets(true)
        if string.find(strGameRule ,"20片") then
            gameData:setTablets(20)
        elseif string.find(strGameRule ,"40片") then
            gameData:setTablets(40)
        elseif string.find(strGameRule ,"50片") then
            gameData:setTablets(50)
        end
    else
        gameData:setTablets(0)
        gameData:setFortyTablets(false)
    end
end

return RoomInfoModule+