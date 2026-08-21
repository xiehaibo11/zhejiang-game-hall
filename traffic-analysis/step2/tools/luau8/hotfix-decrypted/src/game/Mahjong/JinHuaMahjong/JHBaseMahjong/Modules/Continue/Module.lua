local ContinueModule = CF.gameClass("ContinueModule", "game.GameBase.Modules.Continue.Module")

function ContinueModule:onMsgAskContinue(msgData)
    if msgData.nflag == msgData.ENUM_FLAG.NONE then
        CF.roomData:setCanContinueBool(false)
    elseif msgData.nflag == msgData.ENUM_FLAG.RELINK then --弹出提示框
        CF.roomData:setCanContinueBool(true)
        --大结束直接返回
        if self:getBigWinLostUI() then
            return
        end
    elseif msgData.nflag == msgData.ENUM_FLAG.WAITING then
        CF.roomData:setCanContinueBool(true)
        local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipLayer:setText("等待其它玩家续桌，5分钟后未成功续桌将自动解散")
    else
        CF.roomData:setCanContinueBool(true)
    end
end

return ContinueModuleh