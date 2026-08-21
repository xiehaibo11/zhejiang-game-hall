local CenterBtnsModule = CF.gameClass("CenterBtnsModule", "game.GameBase.Modules.CenterBtns.Module")

function CenterBtnsModule:onMsgGameRuleUser(msgData)
    local rule = CenterBtnsModule.super.onMsgGameRuleUser(self, msgData)
    CF.roomData:setIsAutoReady(rule.AutoReady)
end

function CenterBtnsModule:onStartGameEvent(addLevel)
    CenterBtnsModule.super.onStartGameEvent(self,addLevel)
    CF.msgManager:sendTrust(false)
end

return CenterBtnsModule�