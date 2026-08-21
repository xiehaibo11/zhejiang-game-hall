local ContinueModule = CF.gameClass("ContinueModule", "game.GameBase.Modules.Continue.Module")

function ContinueModule:onMsgAskContinue(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
    if msgData.nflag == msgData.ENUM_FLAG.NONE then
        CF.roomData:setCanContinueBool(false)
    elseif msgData.nflag == msgData.ENUM_FLAG.RELINK then      --弹出提示框
        if CF.roomData:getIsGameOver() then
            CF.roomData:setCanContinueBool(true)
            
            CF.TipTool.showTips("是否续桌？", 
                    function() 
                        CF.msgManager:sendRespContinue(true)
                        CF.msgManager:sendGameStart()
                    end,
                    function() CF.msgManager:sendRespContinue(false) end
                )
        end
    elseif msgData.nflag == msgData.ENUM_FLAG.WAITING then
        CF.roomData:setCanContinueBool(true)
        CF.TipTool.showTipsOk("等待其它玩家续桌，5分钟后未成功续桌将自动解散")
    else
        CF.roomData:setCanContinueBool(true)
    end
    self:dispatchEvent({ name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = false } })

    CF.game:getModule("WinLost"):doAfterMsgResult()
end

return ContinueModule