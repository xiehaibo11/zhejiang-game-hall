local AnimationManager = class("AnimationManager")

local KW_GAME_ANI_JSON_PATH = "res/animation/ShutCards/"
local KW_GAME_COMMON_ANI_JSON_PATH = "res/animation/GameCommon/PokerGame/"

--关门、破关动画
local KW_PATH_JSON_SHUTDOOR = KW_GAME_ANI_JSON_PATH .. "ani_guanmen/ani_guanmen.ExportJson"
local KW_JSON_NAME_SHUTDOOR = "ani_guanmen"
function AnimationManager.playShutDoorAni(armaturePanel, ctype)
    CF.UITool.playJsonAnimationByName(armaturePanel, KW_JSON_NAME_SHUTDOOR, KW_PATH_JSON_SHUTDOOR, -1, ctype, nil, nil, function()
        armaturePanel:removeAllChildren()
    end)
end

--托管
local KW_PATH_JSON_ROBOT = "res/animation/GameCommon/tuoguan_ani/ios_tuoguan.ExportJson"
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

local KW_PATH_JSON_WINLOST = KW_GAME_COMMON_ANI_JSON_PATH .. "sk_js_ani/sk_js_ani_ex.ExportJson"
local KW_JSON_NAME_WINLOST = "sk_js_ani_ex"
function AnimationManager.playWinLostJsonArmature(armaturePanel, ctype, bXunHuan)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_WINLOST) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_WINLOST)
    local armature = ccs.Armature:create(KW_JSON_NAME_WINLOST)
    if armature then
        local tempStr
        if CF.GameDefine then
            if ctype == CF.GameDefine.ENUM_WINLOST_ENDTYPE.ET_LOST then
                tempStr = "sb"
            elseif ctype == CF.GameDefine.ENUM_WINLOST_ENDTYPE.ET_WIN then
                tempStr = "sl"
            elseif ctype == CF.GameDefine.ENUM_WINLOST_ENDTYPE.ET_ESCAPE then
                tempStr = "js"
            end
        end
        if tempStr == nil then
            return
        end
        if bXunHuan then
            armature:getAnimation():play("js_" .. tempStr .. "_xunhuan", -1, 1)
        else
            armature:getAnimation():play("js_" .. tempStr .. "_chuxian", -1, 0)
            armature:getAnimation():setMovementEventCallFunc(
                function()
                    AnimationManager.playWinLostJsonArmature(armaturePanel, ctype, true)
                end
            )
        end
        local zOrder = 2
        if bXunHuan then
            zOrder = 1
        end
        armaturePanel:addChild(armature, zOrder)
    end
end

--发送语音
local KW_PATH_JSON_SEND_VOICE = "res/animation/GameCommon/fsyy_ani/fsyy_ani.ExportJson"
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
local KW_PATH_JSON_ALARM = KW_GAME_ANI_JSON_PATH .. "jingbaoqi/DDZ_jingbaoqi.ExportJson"
local KW_JSON_NAME_ALARM = "DDZ_jingbaoqi"
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

function AnimationManager.showCardTypeAni(armaturePanel, ctype)
    local aniType = nil
    if ctype == CF.GameDefine.KW_CARD_STYPE_BOMB then
        aniType = "sk_zd_6-8"
    elseif ctype == CF.GameDefine.KW_CARD_STYPE_AIRPLANE then
        aniType = "DDZ_feiji_ani"
    elseif ctype == CF.GameDefine.KW_CARD_STYPE_SPRING then
        aniType = "ddz_chuntian"
    end

    if armaturePanel and aniType then
        local jsonPath = KW_GAME_COMMON_ANI_JSON_PATH .. ctype .."/" .. ctype ..".ExportJson"
        CF.UITool.playJsonAnimationByName(armaturePanel, ctype, jsonPath, -1, aniType, nil, nil, function()
            armaturePanel:removeAllChildren()
        end)
    end
end

function AnimationManager.showGameOperateAni(armaturePanel, ctype)
    if armaturePanel then
        if type == CF.GameDefine.KW_PIC_PASS_PNG then
            armaturePanel:setScale(1.2)
        else
            armaturePanel:setScale(1.0)
        end
        armaturePanel:loadTexture(ctype, ccui.TextureResType.plistType)
        armaturePanel:setVisible(true)
        armaturePanel:setOpacity(255)
        local delayAction = cc.DelayTime:create(0.2 + 0.2)
        local fadeOutAction = cc.FadeOut:create(0.4)
        armaturePanel:runAction(cc.Sequence:create(delayAction,fadeOutAction))
    end
end

return AnimationManager
