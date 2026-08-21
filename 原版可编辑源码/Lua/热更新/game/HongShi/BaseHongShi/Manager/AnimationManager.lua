local AnimationManager = class("AnimationManager")

local KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"

--开局牌堆飞牌
local KW_PATH_JSON_FLY_CARD_MOIVE = KW_GAME_COMMON_ANI_JSON_PATH.."card_pile_movie/card_fly_movie.ExportJson"
local KW_JSON_NAME_FLY_CARD_MOIVE = "card_fly_movie"
function AnimationManager.getFlyCardMovieArmature()
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_FLY_CARD_MOIVE) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_FLY_CARD_MOIVE)
    local armature = nil
    if ccs.ArmatureDataManager:getInstance():getAnimationData(KW_JSON_NAME_FLY_CARD_MOIVE) then
        armature = ccs.Armature:create(KW_JSON_NAME_FLY_CARD_MOIVE)
        if armature then 
            armature:setAnchorPoint(cc.p(0.5, 0.5))
            armature:getAnimation():playWithIndex(0,-1,0)
        end
    end  
    return armature
end

--炸弹
local KW_PATH_JSON_SMALL_BOMB = KW_GAME_COMMON_ANI_JSON_PATH.."ios_sk_zd_ani/ios_sk_zd_ani.ExportJson"
local KW_PATH_JSON_BIG_BOMB = KW_GAME_COMMON_ANI_JSON_PATH.."wangzha/DDZ_wangzha.ExportJson"
local KW_JSON_NAME_SMALL_BOMB = "ios_sk_zd_ani"
local KW_JSON_NAME_BIG_BOMB = "DDZ_wangzha"
local KW_ANI_NAME_SMALL_BOMB_4_5 = "sk_zd_4-5"

function AnimationManager.playSmallBombJsonArmature(actionPanel, xianCount)
    local armature
    if xianCount >= 3 and xianCount <= 4 and cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SMALL_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SMALL_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_SMALL_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_SMALL_BOMB_4_5,-1,0)
    elseif cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BIG_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_BIG_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_BIG_BOMB)
        armature:getAnimation():playWithIndex(0)

        --抖屏动画
        local actDelay = cc.DelayTime:create(0.6)
        local actMoveUp1 = cc.MoveBy:create(0.08,cc.p(0, 10))
        local actMoveUp2 = cc.MoveBy:create(0.08,cc.p(0, 20))
        local actMoveDown = cc.MoveBy:create(0.08,cc.p(0, -20))
        armature:runAction(cc.Sequence:create(
            actDelay,actMoveUp1,actMoveDown,actMoveUp2,actMoveDown,actMoveUp2,actMoveDown,actMoveUp2
        ))
    end
    if armature then 
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():setMovementEventCallFunc(function()
            actionPanel:removeChild(armature)
            end)
        actionPanel:addChild(armature)
    end
    return armature
end

--顺
local KW_PATH_JSON_CARDTYPE_SHUN = KW_GAME_COMMON_ANI_JSON_PATH.."Ani_ShunZi/IOS_sk_shunzi_ani.ExportJson"
local KW_JSON_NAME_CARDTYPE_SHUN = "IOS_sk_shunzi_ani"
function AnimationManager.getShunJsonArmature(shunCount)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_CARDTYPE_SHUN) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_CARDTYPE_SHUN)
    local armature = ccs.Armature:create(KW_JSON_NAME_CARDTYPE_SHUN)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play("sk_shunzi"..shunCount,-1,0)
    end
    return armature
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
        armature:getAnimation():playWithIndex(0,-1,1)
        armaturePanel:addChild(armature)
    end
end

local KW_PATH_JSON_WINLOST = KW_GAME_COMMON_ANI_JSON_PATH.."Ani_WinLost/sk_js_ani.ExportJson"
local KW_JSON_NAME_WINLOST = "sk_js_ani"
function AnimationManager.playWinLostJsonArmature(armaturePanel, type, bXunHuan)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_WINLOST) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_WINLOST)
    local armature = ccs.Armature:create(KW_JSON_NAME_WINLOST)
    if armature then
        local tempStr
        if type == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI then
            tempStr = "cd"
        elseif type == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_PINGKOU then
            tempStr = "pk"
        elseif type == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_DANKOU then
            tempStr = "dk"
        elseif type == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_SHUANGKOU then
            tempStr = "sk"
        else
            tempStr = "js"
        end
        if bXunHuan then
            armature:getAnimation():play("js_"..tempStr.."_xunhuan",-1,1)
        else
            armature:getAnimation():play("js_"..tempStr.."_chuxian",-1,0)
            armature:getAnimation():setMovementEventCallFunc(function()
                AnimationManager.playWinLostJsonArmature(armaturePanel, type, true)
            end)
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
local KW_PATH_JSON_ALARM = KW_GAME_COMMON_ANI_JSON_PATH.."baojing_ani/baojing_ani.ExportJson"
local KW_JSON_NAME_ALARM = "baojing_ani"
function AnimationManager.playAlarmJsonArmature(armaturePanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_ALARM) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_ALARM)
    local armature = ccs.Armature:create(KW_JSON_NAME_ALARM)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():playWithIndex(0,-1,1)
        armaturePanel:addChild(armature)
    end
end

return AnimationManager