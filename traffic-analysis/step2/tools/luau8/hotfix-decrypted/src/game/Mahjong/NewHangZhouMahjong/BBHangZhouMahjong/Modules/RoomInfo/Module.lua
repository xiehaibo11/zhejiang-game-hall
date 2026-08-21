local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.RoomInfo.Module")
RoomInfoModule.EVENT_SET_SCORE = "EVENT_SET_SCORE"

function RoomInfoModule:onMsgBaseScore(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local nBaseScore = msgData.nBaseScore
    gameData:setBaseScoreEx(nBaseScore)
    local tAllPlayerScore = clone(gameData:getAllPlayerScore())
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local tableBaseScore = gameData:getBaseScoreEx()
        if tableBaseScore and tableBaseScore ~= 0 then
            local playerData = CF.roomData:getPlayerDataBySeatId(seat)
            if playerData then
                local score = playerData:getPlayTypeScore()
                tAllPlayerScore[seat] = score + gameData:getTablets()
            end
        end
    end
    self:updatePlayerScore(tAllPlayerScore)
end

function RoomInfoModule:updatePlayerScore(score)
    self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = {score = score}})
end

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self, msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local strGameRule = CF.roomData:getGameRule()
    if string.find(strGameRule ,"跟庄") then
        local key = "GENZHUANG_" .. CF.areaData:getLobbyID()
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
        if string.find(strGameRule ,"40片") then
            gameData:setTablets(40)
        elseif string.find(strGameRule ,"50片") then
            gameData:setTablets(50)
        elseif string.find(strGameRule ,"60片") then
            gameData:setTablets(60)
        end
    else
        gameData:setTablets(0)
        gameData:setFortyTablets(false)
    end

    local isAutoReady = string.find(strGameRule, "自动准备") and true or false
    if isAutoReady then
        CF.msgManager:sendGameStart()
    end
    local isYouCaiBiKaoXiang = string.find(strGameRule, "有财必拷响") and true or false
    gameData:setIsYouCaiBiKaoXiang(isYouCaiBiKaoXiang)
    local isBaiBanCaiShen = string.find(strGameRule, "白板财神") and true or false
    gameData:setIsBaiBanCaishen(isBaiBanCaiShen)
    -- 歧义修改
    if strGameRule and string.find(strGameRule, "无限吃碰") then
        strGameRule = string.gsub(strGameRule, "/不可吃三摊", "")
        CF.roomData:setGameRule(strGameRule)
    end
end

return RoomInfoModule