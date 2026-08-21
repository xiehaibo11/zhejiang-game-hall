local AnimationManager = class("AnimationManager")

local KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"

--炸弹, 动画是从双扣拷贝过来的，不需要xianCount字段,统一播放一个炸弹抖屏
local KW_PATH_JSON_SMALL_BOMB = KW_GAME_COMMON_ANI_JSON_PATH .. "ios_sk_zd_ani/ios_sk_zd_ani.ExportJson"
local KW_PATH_JSON_BIG_BOMB = KW_GAME_COMMON_ANI_JSON_PATH .. "Ani_Bomb_9_15/ios_sk_zd_9-12.ExportJson"
local KW_JSON_NAME_SMALL_BOMB = "ios_sk_zd_ani"
local KW_JSON_NAME_BIG_BOMB = "ios_sk_zd_9-12"
local KW_ANI_NAME_SMALL_BOMB_4_5 = "sk_zd_4-5"
local KW_ANI_NAME_SMALL_BOMB_6_8 = "sk_zd_6-8"
local KW_ANI_NAME_BIG_BOMB_9_12 = "sk_zd_9-12"
function AnimationManager.playBombJsonArmature(actionPanel, xianCount)
    local armature
    if cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BIG_BOMB) then
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

--顺
local KW_PATH_JSON_CARDTYPE_SHUN = KW_GAME_COMMON_ANI_JSON_PATH .. "Ani_ShunZi/IOS_sk_shunzi_ani.ExportJson"
local KW_JSON_NAME_CARDTYPE_SHUN = "IOS_sk_shunzi_ani"
function AnimationManager.getShunJsonArmature(shunCount)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_CARDTYPE_SHUN) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_CARDTYPE_SHUN)
    local armature = ccs.Armature:create(KW_JSON_NAME_CARDTYPE_SHUN)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play("sk_shunzi" .. shunCount, -1, 0)
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
        armature:getAnimation():playWithIndex(0, -1, 1)
        armaturePanel:addChild(armature)
    end
end

local KW_PATH_JSON_WINLOST = KW_GAME_COMMON_ANI_JSON_PATH .. "Ani_WinLost/sk_js_ani.ExportJson"
local KW_JSON_NAME_WINLOST = "sk_js_ani"
function AnimationManager.playWinLostJsonArmature(armaturePanel, type, bXunHuan)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_WINLOST) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_WINLOST)
    local armature = ccs.Armature:create(KW_JSON_NAME_WINLOST)
    if armature and CF.GameDefine then
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
            armature:getAnimation():play("js_" .. tempStr .. "_xunhuan", -1, 1)
        else
            armature:getAnimation():play("js_" .. tempStr .. "_chuxian", -1, 0)
            armature:getAnimation():setMovementEventCallFunc(
                function()
                    AnimationManager.playWinLostJsonArmature(armaturePanel, type, true)
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

function AnimationManager.showGameOperateAni(armaturePanel, ctype)
    if armaturePanel then
        if ctype == CF.GameDefine.KW_PIC_PASS_PNG then
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

function AnimationManager.showCardTypeAni(armaturePanel, ctype)
    if not ctype then
        return
    end
    local aniType = nil
    if ctype == CF.GameDefine.KW_CARD_STYPE_SPRING then
        aniType = "ddz_chuntian"
    end

    if armaturePanel and aniType then
        local jsonPath = KW_GAME_COMMON_ANI_JSON_PATH .. ctype .."/" .. ctype ..".ExportJson"
        CF.UITool.playJsonAnimationByName(armaturePanel, ctype, jsonPath, -1, aniType, nil, nil, function()
            armaturePanel:removeAllChildren()
        end)
    end
end


-- 双扣金币场不准备被踢出倒计时
local KW_PATH_JSON_KICK_CLOCK = KW_GAME_COMMON_ANI_JSON_PATH .. "ddz_naozhong_ani/ddz_naozhong_ani.ExportJson"
local KW_JSON_NAME_KICK_CLOCK = "ddz_naozhong_ani"
function AnimationManager.playKickOutClockJsonArmature(armaturePanel,status)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_KICK_CLOCK) then
        return
    end
    local byName = {"ddz_naozhong_jingtai","ddz_naozhong_dongtai"}
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_KICK_CLOCK)
    local armature = ccs.Armature:create(KW_JSON_NAME_KICK_CLOCK)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play(byName[status], -1, 1)
        armaturePanel:addChild(armature)
    end
end

function AnimationManager.playDargonBonesSpine(params, isloop, scale, callback)
    if sp then
        if isloop == nil or isloop ~= false then
            isloop = true
        end
        scale = scale or 1
        local spineNode = sp.SkeletonAnimation:create(params.path..params.tex, params.path..params.ske, scale);
        if not isloop then
            -- 绑定动画事件监听器
            spineNode:registerSpineEventHandler(function(event)
                -- 如果当前事件为动画结束事件，则移除该动画节点
                if event.type == 'complete' then
                    spineNode:runAction(cc.Sequence:create(
                        cc.DelayTime:create(0.3),
                        cc.CallFunc:create(function()
                            spineNode:removeFromParent(true)
                        end)
                    ))
                    if callback then
                        callback()
                    end
                end
            end, sp.EventType.ANIMATION_COMPLETE)
        end
        spineNode:setAnimation(0, "" .. params.armatureName, isloop)
        return spineNode
    end
    return nil
end

return AnimationManager
  $  