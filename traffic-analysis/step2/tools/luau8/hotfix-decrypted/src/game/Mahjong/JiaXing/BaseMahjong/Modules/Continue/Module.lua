local ContinueModule = CF.gameClass("ContinueModule", "game.GameBase.Modules.Continue.Module")

function ContinueModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgAskContinue), msgClass = CF.GameProtocol.msgAskContinue},
        {callback = handler(self, self.onMsgContinueFlag), msgClass = CF.GameProtocol.msgContinueFlag},
        {callback = handler(self, self.onMsgContinueTips), msgClass = CF.GameProtocol.msgContinueTips}
    }
end

--续桌提示
function ContinueModule:onMsgContinueTips(msgData)
    if CF.roomData:getIsGPContinue() then
        return
    end
    if not self:getBigWinLostUI() then
        return
    end
    if CF.roomData:isCanContinue() then
        CF.TipTool.showTipsOk("其它玩家已续桌，点击【继续游戏】即可加入！点击【回到大厅】即可离开！")
    end
end

--续桌结果
function ContinueModule:onMsgContinueFlag(msgData)
    if CF.roomData:getIsGPContinue() then
        return
    end
    local function leaveGame()
        CF.game:leaveGame()
    end
    if msgData.sFlag == msgData.ENUM_FLAG.DISAGREE then
        CF.TipTool.showTipsOk("有玩家离开，本局无法续桌", leaveGame, leaveGame, leaveGame)
        CF.roomData:setCanContinueBool(false)
    elseif msgData.sFlag == msgData.ENUM_FLAG.TIME_OUT then
        CF.TipTool.showTipsOk("续桌等待时间过长，房间已解散！", leaveGame, leaveGame, leaveGame)
        CF.roomData:setCanContinueBool(false)
    end
end

return ContinueModule