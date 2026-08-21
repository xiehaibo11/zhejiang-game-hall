local VoiceModule = CF.gameClass("VoiceModule", "game.GameBase.Modules.Voice.Module")

function VoiceModule:getSubXYDealList()
    local xyTable = VoiceModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgClientForwardBase), msgClass = CF.GameProtocol.msgBaseClientForward}
    return xyTable
end

function VoiceModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForward.CF_ID.FastVoice then
        self:onMsgClientForwardFastVoice(msgData)
    end
end

return VoiceModule=