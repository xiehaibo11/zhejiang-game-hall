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
local KW_PATH_JSON_BIG_BOMB = KW_GAME_COMMON_ANI_JSON_PATH.."Ani_Bomb_9_15/ios_sk_zd_9-12.ExportJson"
local KW_JSON_NAME_SMALL_BOMB = "ios_sk_zd_ani"
local KW_JSON_NAME_BIG_BOMB = "ios_sk_zd_9-12"
local KW_ANI_NAME_SMALL_BOMB_4_5 = "sk_zd_4-5"
local KW_ANI_NAME_SMALL_BOMB_6_8 = "sk_zd_6-8"
local KW_ANI_NAME_BIG_BOMB_9_12 = "sk_zd_9-12"
function AnimationManager.playSmallBombJsonArmature(actionPanel, xianCount)
    local armature
    if xianCount >= 4 and xianCount <= 5 and cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SMALL_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SMALL_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_SMALL_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_SMALL_BOMB_4_5,-1,0)
    elseif xianCount >= 6 and xianCount <= 8 and cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SMALL_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SMALL_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_SMALL_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_SMALL_BOMB_6_8,-1,0)
    elseif cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BIG_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_BIG_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_BIG_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_BIG_BOMB_9_12,-1,0)

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

--线数
local KW_PATH_JSON_BOMB_LINE_COUNT = KW_GAME_COMMON_ANI_JSON_PATH.."Ani_Xian/ios_sk_x.ExportJson"
local KW_JSON_NAME_BOMB_LINE_COUNT = "ios_sk_x"
function AnimationManager.playBombLineJsonArmature(armaturePanel, lineNumber)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BOMB_LINE_COUNT) then
        return
    end
    if lineNumber < 7 or lineNumber > 12 then
        return 
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_BOMB_LINE_COUNT)
    local armature = ccs.Armature:create(KW_JSON_NAME_BOMB_LINE_COUNT)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play("sk_x_"..lineNumber,-1,0)
        armature:getAnimation():setMovementEventCallFunc(function()
            armature:removeFromParent()
            end)
        armaturePanel:addChild(armature) 
    end
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