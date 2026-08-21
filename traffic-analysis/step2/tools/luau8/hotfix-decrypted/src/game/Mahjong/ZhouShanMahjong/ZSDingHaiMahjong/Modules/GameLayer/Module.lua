local GameModule = CF.gameClass("GameModule", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.GameLayer.Module")

GameModule.EVENT_CLOSE_VIEW = "EVENT_CLOSE_VIEW"
GameModule.EVENT_PLAYER_VOTE = "EVENT_PLAYER_VOTE"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgVoteInfo), msgClass = CF.GameProtocol.msgVoteInfo}

    return subXYDealList
end

function GameModule:onMsgVoteInfo(msgData)
    if CF.roomData:isPlayBack() then
        return
    end
    if self:getGameData():getCurGameStep() > CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_NONE then
        return
    end
    if msgData.voteStatus == CF.GameProtocol.msgVoteInfo.VOTE_STATUS.START then
        local voteView = CF.gameRequire("Modules.GameLayer.VoteView")
        if not CF.UITool.objIsInScene(voteView.ObjName, voteView.ClsName) then
            voteView.new({ data = msgData }):showSelf()
        else
            self:dispatchEvent({name = self.EVENT_PLAYER_VOTE, data = msgData})
        end
    elseif msgData.voteStatus == CF.GameProtocol.msgVoteInfo.VOTE_STATUS.SUCCESS then
        self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
        CF.TipTool.showToast("全部玩家同意，已为您改变规则")
    elseif msgData.voteStatus == CF.GameProtocol.msgVoteInfo.VOTE_STATUS.REFUSE then
        for i = 0, CF.roomData:getMaxPlayer() do
            if msgData.playersVote[i] == 0 and i ~= CF.roomData:getSelfSeat() then
                local playerData = CF.roomData:getPlayerDataBySeatId(i)
                if playerData then
                    CF.TipTool.showToast("玩家" .. playerData:getNickName() .. "拒绝开始")
                    self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
                end
            end
        end
    elseif msgData.voteStatus == CF.GameProtocol.msgVoteInfo.VOTE_STATUS.PLAYERLEAVE then
        self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
        CF.TipTool.showToast("有玩家离开，投票结束")
    elseif msgData.voteStatus == CF.GameProtocol.msgVoteInfo.VOTE_STATUS.TIMEOUT then
        self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
        CF.TipTool.showToast("未全部玩家同意，保持原有规则")
    elseif msgData.voteStatus == CF.GameProtocol.msgVoteInfo.VOTE_STATUS.END then
        self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
        CF.TipTool.showToast("投票结束")
    end
end

function GameModule:canHuInfo()
    return "台,"
end

function GameModule:needDelay(xyid, protocol)
    if xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true,3.75,false
    end
    return false,0,true
end

return GameModule�
