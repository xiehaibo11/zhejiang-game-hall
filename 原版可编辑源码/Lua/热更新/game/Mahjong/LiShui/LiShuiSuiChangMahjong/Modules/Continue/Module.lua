local ContinueModule = CF.gameClass("ContinueModule", "game.GameBase.Modules.Continue.Module")

function ContinueModule:onMsgAskContinue(msgData)
    if CF.roomData:getIsGPContinue() or CF.teaHouseManager:isInTeaHouse() then
        return
    end
    ContinueModule.super.onMsgAskContinue(self, msgData)
end

return ContinueModule