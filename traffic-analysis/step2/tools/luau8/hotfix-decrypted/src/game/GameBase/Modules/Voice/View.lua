local VoiceView = CF.gameClass("VoiceView", CF.ViewBase)

function VoiceView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/VoiceLayer.csb"
end

function VoiceView:getBindingInfo()
    return {
        ["_KW_RECORDING_ANI_POS"] = { varName = "_recordingAniPos" },
    }
end

function VoiceView:getProxyEvents()
    return {
        { module = CF.game:getModule("Voice"), eventKeyName = "EVENT_SHOW_RECORD_ANI", callBack = "onShowRecording" },
    }
end

function VoiceView:onShowRecording(event)
    self:showRecordingAni(event.msg.bShow, event.msg.status)
end

function VoiceView:showRecordingAni(isShow, status)
    isShow = isShow or false
    status = status or 1
    if isShow then
        self:playSendVoiceArmature(self._recordingAniPos, status)
    end
    self._recordingAniPos:setVisible(isShow)
end

local KW_PATH_JSON_SEND_VOICE = "res/animation/GameCommon/fsyy_ani/fsyy_ani.ExportJson"
local KW_JSON_NAME_SEND_VOICE = "fsyy_ani"
function VoiceView:playSendVoiceArmature(armaturePanel, status)
    armaturePanel:removeAllChildren()
    local byName = {"yy_fasong", "yy_quxiao", "yy_shijianduan"}
    local armature = armaturePanel:getChildByName(byName[status])
    if armature then
        armature:getAnimation():play(byName[status], -1, -1)
    else
        CF.UITool.playJsonAnimationByName(armaturePanel, KW_JSON_NAME_SEND_VOICE, KW_PATH_JSON_SEND_VOICE, -1, byName[status])
    end
end

return VoiceView

�