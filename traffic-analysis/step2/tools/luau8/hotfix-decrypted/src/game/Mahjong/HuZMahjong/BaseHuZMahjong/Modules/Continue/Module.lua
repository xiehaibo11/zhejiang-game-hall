local ContinueModule = CF.gameClass("ContinueModule", "game.GameBase.Modules.Continue.Module")

function ContinueModule:onMsgAskContinue(msgData)
    if CF.teaHouseManager:isInTeaHouse() then
        return
    end
    ContinueModule.super.onMsgAskContinue(self, msgData)
end

function ContinueModule:onGPContinueStatusPlayerLeave()
    ContinueModule.super.onGPContinueStatusPlayerLeave(self)
    self:dispatchEvent({name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = {remove = false}})
    CF.TipTool.showTip({
        type = CF.TIP_LAYER_TYPE.OK_NO_CLOSE,
    }, "有玩家离开，桌子解散。")
end

return ContinueModule�