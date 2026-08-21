local AheadModule = CF.gameClass("AheadModule", CF.ModuleBase)
local AheadConfig = CF.gameRequire("game.Mahjong.LiShui.LiShuiMahjong.Config.AheadConfig")
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")

AheadModule.EVENT_CLOSE_VIEW = "EVENT_CLOSE_VIEW"
AheadModule.EVENT_PLAYER_VOTE = "EVENT_PLAYER_VOTE"

function AheadModule:ctor()
    AheadModule.super.ctor(self)
    if CF.teaHouseManager:isInTeaHouse() then
        self._gameRule, self._gameRuleChinese = self:getTeaModeRule()
    end
end

function AheadModule:getSubXYDealList()
    return {
        -- {callback = handler(self,self.onMsgAheadInfo),msgClass = CF.GameProtocol.msgAheadStartInfo},
        {callback = handler(self,self.onMsgAheadVote),msgClass = CF.GameProtocol.msgAheadVote},
    }
end

function AheadModule:onMsgAheadInfo(msgData)
    if CF.roomData:isPlayBack() and msgData.sAheadState == AheadConfig.AHEAD_STATUS.SUCCESS then  -- 回放提前开局成功处理数据
        local chaircnt = CF.roomData:getChairs()
        local gameRule = CF.roomData:getGameRule()
        CF.game:getModule("GameLayer"):getGameData():onAheadStartEnd()
        if string.find(gameRule, "/" .. chaircnt .. "人") ~= nil then
            gameRule = string.gsub(gameRule, "/" .. chaircnt .. "人", "")
        end
        CF.roomData:setGameRule(gameRule)
        return
    end
    if CF.roomData:isPlayBack() then
        return
    end
    if msgData.sAheadState == AheadConfig.AHEAD_STATUS.WAITEVOTE then
        local AheadVoteUI = CF.gameRequire("Modules.Ahead.View")
        if not CF.UITool.objIsInScene(AheadVoteUI.ObjName, AheadVoteUI.ClsName) then
            AheadVoteUI.new({ data = msgData }):showSelf()
        end
    elseif msgData.sAheadState == AheadConfig.AHEAD_STATUS.TIMEOUT then
        self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
        CF.TipTool.showToast("未全部玩家同意，提前开始失败")
    elseif msgData.sAheadState == AheadConfig.AHEAD_STATUS.PLAYERCHANGE then
        self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
        CF.TipTool.showToast("玩家数改变，开始游戏失败")
    elseif msgData.sAheadState == AheadConfig.AHEAD_STATUS.REFUSE then
        for i = 0, CF.roomData:getMaxPlayer() do
            if msgData.sAheadPlayerChoose[i] == 0 and i ~= CF.roomData:getSelfSeat() then
                local playerData = CF.roomData:getPlayerDataBySeatId(i)
                if playerData then
                    CF.TipTool.showToast("玩家" .. playerData:getNickName() .. "拒绝提前开始")
                    self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
                end
            end
        end
    elseif msgData.sAheadState == AheadConfig.AHEAD_STATUS.SUCCESS then
        CF.game:getModule("GameLayer"):getGameData():onAheadStartEnd()
    end
end

function AheadModule:onMsgAheadVote(msgData)
    if CF.roomData:isPlayBack() then
        return
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_VOTE, data = msgData})
    if msgData.bAheadSuccess then
        CF.msgManager:sendAheadGameRule(self._gameRule)
        self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
    end
end

function AheadModule:getTeaModeRule()
    local teaHouseModeInfos = CF.teaHouseManager:getPlayModeInfos()
    if teaHouseModeInfos and next(teaHouseModeInfos) then
        for _, v in pairs(teaHouseModeInfos) do
            if v.nGameId and v.nGameId == MutiVersionGameConfig.MutiVersionGameID.LSMahjong2New then
                local gameRule = v.acData
                local gameRuleChinese
                local luaString = "return {" .. v.acData .. "}"
                local tmpTable
                local ok = pcall(function ()
                    tmpTable = loadstring(luaString)()
                end)
                if ok and tmpTable then
                    gameRuleChinese = tmpTable.ZhRule
                end
                return gameRule, gameRuleChinese
            end
        end
    end
    return
end

function AheadModule:getTeaModeRuleChinese()
    return self._gameRuleChinese or AheadConfig.AHEAD_RULE[CF.ROOM_TYPE.BOX_ROOM]
end

return AheadModule