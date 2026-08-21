local AnimationManager = class("AnimationManager")

local KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"

--炸弹
local KW_PATH_JSON_SMALL_BOMB = KW_GAME_COMMON_ANI_JSON_PATH .. "ios_sk_zd_ani/ios_sk_zd_ani.ExportJson"
local KW_PATH_JSON_BIG_BOMB = KW_GAME_COMMON_ANI_JSON_PATH .. "Ani_Bomb_9_15/ios_sk_zd_9-12.ExportJson"
local KW_JSON_NAME_SMALL_BOMB = "ios_sk_zd_ani"
local KW_JSON_NAME_BIG_BOMB = "ios_sk_zd_9-12"
local KW_ANI_NAME_SMALL_BOMB_4_5 = "sk_zd_4-5"
local KW_ANI_NAME_SMALL_BOMB_6_8 = "sk_zd_6-8"
local KW_ANI_NAME_BIG_BOMB_9_12 = "sk_zd_9-12"
function AnimationManager.playSmallBombJsonArmature(actionPanel, xianCount)
    local armature
    if xianCount >= 4 and xianCount <= 9 and cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SMALL_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SMALL_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_SMALL_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_SMALL_BOMB_4_5, -1, 0)
    elseif xianCount >= 10 and xianCount <= 16 and cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SMALL_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SMALL_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_SMALL_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_SMALL_BOMB_6_8, -1, 0)
    elseif cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BIG_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_BIG_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_BIG_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_BIG_BOMB_9_12, -1, 0)

        --抖屏动画
        local actDelay = cc.DelayTime:create(0.6)
        local actMoveUp1 = cc.MoveBy:create(0.08, cc.p(0, 10))
        local actMoveUp2 = cc.MoveBy:create(0.08, cc.p(0, 20))
        local actMoveDown = cc.MoveBy:create(0.08, cc.p(0, -20))
        armature:runAction(cc.Sequence:create(actDelay, actMoveUp1, actMoveDown, actMoveUp2, actMoveDown, actMoveUp2, actMoveDown, actMoveUp2))
    end
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():setMovementEventCallFunc(
        function()
            actionPanel:removeChild(armature)
        end
        )
        actionPanel:addChild(armature)
    end
    return armature
end

--线数
local KW_PATH_JSON_BOMB_LINE_COUNT = KW_GAME_COMMON_ANI_JSON_PATH .. "eff_wl_xs/"
function AnimationManager.playBombLineJsonArmature(armaturePanel, lineNumber)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BOMB_LINE_COUNT .. "eff_wl_xs.json") then
        return
    end
    if lineNumber < 7 or lineNumber > 24 then
        return
    end

    local aniTop = 4
    local fntFile = "res/tex/plist/wulong/hx-export.fnt"
    if lineNumber >= 4 and lineNumber <= 9 then
        aniTop = 1
        fntFile = "res/tex/plist/wulong/lx-export.fnt"
    elseif lineNumber >= 10 and lineNumber <= 12 then
        aniTop = 2
        fntFile = "res/tex/plist/wulong/lss-export.fnt"
    elseif lineNumber >= 13 and lineNumber <= 16 then
        aniTop = 3
        fntFile = "res/tex/plist/wulong/zx-export.fnt"
    end

    local params1 = { path = KW_PATH_JSON_BOMB_LINE_COUNT, tex = "eff_wl_xs.json", ske = "eff_wl_xs.atlas", armatureName = aniTop, scale = 1 }
    local armatureEx1 = sp.SkeletonAnimation:create(params1.path .. params1.tex, params1.path .. params1.ske, 1)
    local params2 = { path = KW_PATH_JSON_BOMB_LINE_COUNT, tex = "eff_wl_xs.json", ske = "eff_wl_xs.atlas", armatureName = aniTop * 11, scale = 1 }
    local armatureEx2 = sp.SkeletonAnimation:create(params2.path .. params2.tex, params2.path .. params2.ske, 1)
    if armatureEx1 and armatureEx2 then
        armatureEx1:setAnimation(0, "" .. aniTop * 11, false)
        armatureEx2:setAnimation(0, "" .. aniTop, false)
        armatureEx2:registerSpineEventHandler(function(event)
            if event.type == 'complete' then
                armatureEx2:runAction(cc.Sequence:create(
                cc.DelayTime:create(0.1),
                cc.CallFunc:create(function()
                    armaturePanel:removeAllChildren()
                end)
                ))
            end
        end, sp.EventType.ANIMATION_COMPLETE)

        local txtTitle = ccui.TextBMFont:create()
        :setFntFile(fntFile)
        :setAnchorPoint(cc.p(0.5, 0.5))
        :setString(lineNumber .. "线")

        txtTitle:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = KW_PATH_JSON_BOMB_LINE_COUNT .. "eff_wl_xs_animation.json", animationName = "1", boneName = "sz", slotName = "sz" })
        armaturePanel:addChild(armatureEx1)
        armaturePanel:addChild(txtTitle)
        armaturePanel:addChild(armatureEx2)
    end
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

-- 双扣金币场不准备被踢出倒计时
local KW_PATH_JSON_KICK_CLOCK = KW_GAME_COMMON_ANI_JSON_PATH .. "ddz_naozhong_ani/ddz_naozhong_ani.ExportJson"
local KW_JSON_NAME_KICK_CLOCK = "ddz_naozhong_ani"
function AnimationManager.playKickOutClockJsonArmature(armaturePanel, status)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_KICK_CLOCK) then
        return
    end
    local byName = { "ddz_naozhong_jingtai", "ddz_naozhong_dongtai" }
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_KICK_CLOCK)
    local armature = ccs.Armature:create(KW_JSON_NAME_KICK_CLOCK)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play(byName[status], -1, 1)
        armaturePanel:addChild(armature)
    end
end

return AnimationManager