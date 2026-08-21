local AnimationManager = class("AnimationManager")

local KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"

--托管
local KW_PATH_JSON_ROBOT = "animation/GameCommon/tuoguan_ani/ios_tuoguan.ExportJson"
local KW_JSON_NAME_ROBOT = "ios_tuoguan"
function AnimationManager.playRobotJsonArmature(armaturePanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_ROBOT) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_ROBOT)
    local armature = ccs.Armature:create(KW_JSON_NAME_ROBOT)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():playWithIndex(0, -1, 1)
        armaturePanel:addChild(armature)
    end
end

function AnimationManager.playWinLostJsonArmature(armaturePanel, type, bXunHuan)
end

--发送语音
local KW_PATH_JSON_SEND_VOICE = "animation/GameCommon/fsyy_ani/fsyy_ani.ExportJson"
local KW_JSON_NAME_SEND_VOICE = "fsyy_ani"
function AnimationManager.playSendVoiceArmature(armaturePanel, status)
    armaturePanel:removeAllChildren()
    local byName = {"yy_fasong", "yy_quxiao", "yy_shijianduan"}
    local armature = armaturePanel:getChildByName(byName[status])
    if armature then
        armature:getAnimation():play(byName[status], -1, -1)
    else
        CF.UITool.playJsonAnimationByName(armaturePanel, KW_JSON_NAME_SEND_VOICE, KW_PATH_JSON_SEND_VOICE, -1, byName[status])
    end
end

--报警
local KW_PATH_JSON_ALARM = KW_GAME_COMMON_ANI_JSON_PATH .. "baojing_ani/baojing_ani.ExportJson"
local KW_JSON_NAME_ALARM = "baojing_ani"
function AnimationManager.playAlarmJsonArmature(armaturePanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_ALARM) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_ALARM)
    local armature = ccs.Armature:create(KW_JSON_NAME_ALARM)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():playWithIndex(0, -1, 1)
        armaturePanel:addChild(armature)
    end
end

return AnimationManager
c