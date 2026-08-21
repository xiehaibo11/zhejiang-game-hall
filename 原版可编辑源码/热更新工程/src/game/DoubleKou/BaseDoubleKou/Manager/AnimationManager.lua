local AnimationManager = class("AnimationManager")

local KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"

--开局牌堆飞牌
local KW_PATH_JSON_FLY_CARD_MOIVE_NEW = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_sk_fp/"
-- 换牌卡
local KW_PATH_JSON_FLY_CARD_MOIVE_NEW_CC = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_sk_fp_cc/"
function AnimationManager.getFlyCardMovieArmature()
    local showPath = KW_PATH_JSON_FLY_CARD_MOIVE_NEW
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if isChanged then
        showPath = KW_PATH_JSON_FLY_CARD_MOIVE_NEW_CC
    end
    if not cc.FileUtils:getInstance():isFileExist(showPath .. "zzb_sk_fp.json") then
        return
    end
    local params = { path = showPath, tex = "zzb_sk_fp.json", ske = "zzb_sk_fp.atlas", armatureName = "animation", scale = 1 }
    if not isChanged and CF.settingData and CF.settingData:getDoubleKouBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        params.armatureName = "animation2"
    end
    local armature = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    if armature then
        armature:setAnimation(0, "" .. params.armatureName, false)
    end
    return armature
end

-- 光效
local KW_PATH_SAO_GUANG_CARD = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_ty_pmsg/"
function AnimationManager.playSaoGuangAni(scale)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_SAO_GUANG_CARD .. "zzb_ty_pmsg.json") then
        return
    end
    local params = { path = KW_PATH_SAO_GUANG_CARD, tex = "zzb_ty_pmsg.json", ske = "zzb_ty_pmsg.atlas", armatureName = "animation", scale = scale or 1 }
    local armature = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    if armature then
        armature:setAnimation(0, "" .. params.armatureName, false)
    end
    return armature
end

--新版炸弹
local KW_PATH_THROW_BOMB = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_sk_rzd/"
function AnimationManager.playThrowBombSpineAni(actionPanel, xianCount, localSeat)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_THROW_BOMB .. "zzb_bw_rzd.json") then
        return
    end
    local aniName
    if localSeat == 1 then
        aniName = "animation4"
    elseif localSeat == 2 then
        aniName = "animation"
    elseif localSeat == 3 then
        aniName = "animation2"
    elseif localSeat == 4 then
        aniName = "animation3"
    end
    if aniName then
        local params = { path = KW_PATH_THROW_BOMB, tex = "zzb_bw_rzd.json", ske = "zzb_bw_rzd.atlas", armatureName = aniName, scale = 1 }
        local armatureEx = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
        if armatureEx then
            local skinName = "4"
            if CF.game:getModule("GameLayer"):getGameData():getEightKing() then
                if xianCount >= 4 and xianCount <= 6 then
                    skinName = "1"
                elseif xianCount >= 7 and xianCount <= 9 then
                    skinName = "2"
                elseif xianCount >= 10 and xianCount <= 11 then
                    skinName = "3"
                elseif xianCount >= 12 then
                    skinName = "4"
                end
            end
            armatureEx:setSkin(skinName)
            armatureEx:setSlotsToSetupPose()
            armatureEx:setAnimation(0, "" .. params.armatureName, false)
            armatureEx:registerSpineEventHandler(function(event)
                if event.type == 'complete' then
                    armatureEx:runAction(cc.Sequence:create(
                    cc.DelayTime:create(0.1),
                    cc.CallFunc:create(function()
                        armatureEx:removeFromParent(true)
                    end)
                    ))
                end
            end, sp.EventType.ANIMATION_COMPLETE)
            actionPanel:addChild(armatureEx)
            actionPanel:runAction(cc.Sequence:create(
            cc.DelayTime:create(8 / 30),
            cc.CallFunc:create(function()
                AnimationManager.playSmallBombSpineAni(actionPanel, xianCount)
            end)
            ))
        end
    end
end

local KW_PATH_PLAY_BOMB_ANI = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_sk_zd/"
function AnimationManager.playSmallBombSpineAni(actionPanel, xianCount)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_PLAY_BOMB_ANI .. "zzb_bw_zd.json") then
        return
    end
    local isEightKing = CF.game:getModule("GameLayer"):getGameData():getEightKing()
    local needPlayFullScreenAni = false
    local aniName
    if xianCount >= 4 and xianCount <= 6 then
        aniName = "2"
    elseif xianCount >= 7 and xianCount <= 9 then
        aniName = "2"
    elseif xianCount >= 10 and xianCount <= 11 then
        aniName = "3"
    elseif xianCount == 12 then
        aniName = "4"
        needPlayFullScreenAni = true
        if isEightKing then
            aniName = "3"
            needPlayFullScreenAni = false
        end
    elseif xianCount > 12 then
        aniName = "4"
        needPlayFullScreenAni = true
    end
    -- 播放全屏动画以及抖动动画
    if needPlayFullScreenAni then
        local params = { path = KW_PATH_PLAY_BOMB_ANI, tex = "zzb_bw_zd.json", ske = "zzb_bw_zd.atlas", armatureName = "44", scale = 1 }
        local armatureEx = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
        if armatureEx then
            local size = cc.Director:getInstance():getWinSize()
            armatureEx:setScaleX(size.width / 1920)
            armatureEx:setScaleY(size.height / 1080)
            armatureEx:setAnimation(0, "" .. params.armatureName, false)
            armatureEx:registerSpineEventHandler(function(event)
                if event.type == 'complete' then
                    armatureEx:runAction(cc.Sequence:create(
                    cc.DelayTime:create(0.1),
                    cc.CallFunc:create(function()
                        armatureEx:removeFromParent(true)
                    end)
                    ))
                end
            end, sp.EventType.ANIMATION_COMPLETE)
            actionPanel:addChild(armatureEx)
        end
        --抖屏动画
        local scene = cc.Director:getInstance():getRunningScene()
        local actDelay = cc.DelayTime:create(8/30)
        local actMoveUp1 = cc.MoveTo:create(1/30, cc.p(0, 0))
        local actMoveUp2 = cc.MoveTo:create(1/30, cc.p(10, -10))
        scene:runAction(cc.Sequence:create(actDelay, actMoveUp2, actMoveUp1, actMoveUp2, actMoveUp1, actMoveUp2, actMoveUp1, actMoveUp2, actMoveUp1, cc.CallFunc:create(function()
            scene:setPosition(cc.p(0,0))
        end)))
    end
    local armature
    if aniName then
        local params = { path = KW_PATH_PLAY_BOMB_ANI, tex = "zzb_bw_zd.json", ske = "zzb_bw_zd.atlas", armatureName = aniName, scale = 1 }
        armature = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
        if armature then
            armature:setAnimation(0, "" .. params.armatureName, false)
            armature:registerSpineEventHandler(function(event)
                if event.type == 'complete' then
                    armature:runAction(cc.Sequence:create(
                    cc.DelayTime:create(0.1),
                    cc.CallFunc:create(function()
                        armature:removeFromParent(true)
                    end)
                    ))
                end
            end, sp.EventType.ANIMATION_COMPLETE)
            armature:setPositionY(-70)
            actionPanel:addChild(armature)
        end
    end
    return armature
end

--新版线数
local KW_PATH_BOMB_LINE = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_bw_xs/"
function AnimationManager.playBombLineSpineAni(actionPanel, xianCount, localSeat)
    -- 7线以下不播放线数动画
    if xianCount < 7 then
        return
    end
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_BOMB_LINE .. "zzb_bw_xs.json") then
        return
    end
    local aniName
    local fntScale = 1
    if xianCount >= 7 and xianCount <= 9 then
        fntScale = 0.8
        aniName = "2"
    elseif xianCount >= 10 and xianCount <= 12 then
        fntScale = 0.9
        aniName = "3"
    elseif xianCount > 12 then
        aniName = "4"
    end
    local posP = {
        cc.p(0, 0),
        cc.p(-100, 0),
        cc.p(-150, 0),
        cc.p(-100, 0)
    }

    if aniName then
        local aniNodeName = "newXianShuAni"
        if actionPanel:getChildByName(aniNodeName) then
            actionPanel:getChildByName(aniNodeName):removeFromParent(true)
        end
        local params = { path = KW_PATH_BOMB_LINE, tex = "zzb_bw_xs.json", ske = "zzb_bw_xs.atlas", armatureName = aniName, scale = 1 }
        local armatureEx = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
        if armatureEx then
            armatureEx:setAnimation(0, "" .. params.armatureName, false)
            armatureEx:registerSpineEventHandler(function(event)
                if event.type == 'complete' then
                    armatureEx:runAction(cc.Sequence:create(
                    cc.DelayTime:create(2),
                    cc.CallFunc:create(function()
                        if actionPanel:getChildByName(aniNodeName) then
                            actionPanel:getChildByName(aniNodeName):removeFromParent(true)
                        end
                    end)
                    ))
                end
            end, sp.EventType.ANIMATION_COMPLETE)
            actionPanel:addChild(armatureEx)
            armatureEx:setName(aniNodeName)
            armatureEx:setPosition(posP[localSeat])
        end
        -- 播放线数动画
        local cloneNode = cc.LabelBMFont:create(xianCount .. "线", "cocosStudio/DoubleKou/Font/sk/fnt-export.fnt")
        cloneNode:setPosition(cc.p(70,-40))
        cloneNode:setScale(fntScale)
        armatureEx:addChild(cloneNode)
        armatureEx:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = KW_PATH_BOMB_LINE .. "zzb_bw_xs.json", animationName = aniName, isLoop = false, boneName = "zi", slotName = "zi" })
    end
end

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
    if xianCount >= 4 and xianCount <= 5 and cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SMALL_BOMB) then
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_SMALL_BOMB)
        armature = ccs.Armature:create(KW_JSON_NAME_SMALL_BOMB)
        armature:getAnimation():play(KW_ANI_NAME_SMALL_BOMB_4_5, -1, 0)
    elseif xianCount >= 6 and xianCount <= 8 and cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_SMALL_BOMB) then
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
local KW_PATH_JSON_BOMB_LINE_COUNT = KW_GAME_COMMON_ANI_JSON_PATH .. "Ani_Xian/ios_sk_x.ExportJson"
local KW_JSON_NAME_BOMB_LINE_COUNT = "ios_sk_x"
function AnimationManager.playBombLineJsonArmature(armaturePanel, lineNumber)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_JSON_BOMB_LINE_COUNT) then
        return
    end
    if lineNumber < 5 or lineNumber > 13 then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(KW_PATH_JSON_BOMB_LINE_COUNT)
    local armature = ccs.Armature:create(KW_JSON_NAME_BOMB_LINE_COUNT)
    if armature then
        armature:setAnchorPoint(cc.p(0.5, 0.5))
        armature:getAnimation():play("sk_x_" .. lineNumber, -1, 0)
        armature:getAnimation():setMovementEventCallFunc(
            function()
                armature:removeFromParent()
            end
        )
        armaturePanel:addChild(armature)
    end
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

function AnimationManager.showSpecialBombGong(nCardsType, nCardsGong, sctPanel, actionPanel, localSeat)
    if nCardsGong and nCardsGong % 3 ~= 0 then
        return
    end
    local posP = {
        cc.p(100, 70),
        cc.p(0, 70),
        cc.p(-100, 70),
        cc.p(0, 70)
    }
    local textZ = "specialGong"
    local parentNode = actionPanel
    local cloneNode
    if parentNode:getChildByName(textZ) ~= nil then
        cloneNode = parentNode:getChildByName(textZ)
    else
        cloneNode = sctPanel:clone()
        cloneNode:setPosition(posP[localSeat])
        cloneNode:setName(textZ)
        parentNode:addChild(cloneNode)
    end
    if nCardsType then
        cloneNode:getChildByName("KW_SCT_ICON"):loadTexture(string.format("tesu%02d.png", nCardsType), ccui.TextureResType.plistType)
        cloneNode:getChildByName("KW_SCT_ICON"):setVisible(true)
    end
    if nCardsGong then
        cloneNode:getChildByName("KW_SCT_NUM"):setString("+" .. nCardsGong)
        cloneNode:getChildByName("KW_SCT_NUM"):setVisible(true)
    end
    if cloneNode:getChildByName("KW_SCT_ICON"):isVisible() and cloneNode:getChildByName("KW_SCT_NUM"):isVisible() then
        cloneNode:setVisible(true)
    end
    CF.SysTool.performWithDelayGlobal(function()
        if cloneNode and not tolua.isnull(cloneNode) then
            cloneNode:setVisible(false)
            cloneNode:removeSelf()
        end
    end, 1)
end

--八王开局动画
local KW_PATH_EIGHTKING_START_ANI = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_bw_kj/"
function AnimationManager.playEightKingStartAni(actionPanel)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_EIGHTKING_START_ANI .. "zzb_bw_kj.json") then
        return
    end
    local params = { path = KW_PATH_EIGHTKING_START_ANI, tex = "zzb_bw_kj.json", ske = "zzb_bw_kj.atlas", armatureName = "animation", scale = 1 }
    local armature = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
    if armature then
        armature:setAnimation(0, "" .. params.armatureName, false)
        armature:registerSpineEventHandler(function(event)
            if event.type == 'complete' then
                armature:runAction(cc.Sequence:create(
                cc.DelayTime:create(0.1),
                cc.CallFunc:create(function()
                    armature:removeFromParent(true)
                end)
                ))
            end
        end, sp.EventType.ANIMATION_COMPLETE)
        actionPanel:addChild(armature)
    end
end

--结束动画
local KW_PATH_EIGHTKING_END_ANI = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_bw_js/"
function AnimationManager.playNewEndAni(actionPanel, animationName, loopAnimationName, isWin)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_EIGHTKING_END_ANI .. "zzb_qb_js.json") or 
    not cc.FileUtils:getInstance():isFileExist(KW_PATH_EIGHTKING_END_ANI .. "zzb_ty_cbgx.json") then
        return
    end
    local config = { 
        path = "", 
        ske = KW_PATH_EIGHTKING_END_ANI .. "zzb_qb_js.atlas", 
        tex = KW_PATH_EIGHTKING_END_ANI .. "zzb_qb_js.json", 
        armatureName = animationName, 
        scale = 1,
        loop = false,
        lastArmatureName = loopAnimationName,
    }
    local configWing = { 
        path = "", 
        ske = KW_PATH_EIGHTKING_END_ANI .. "zzb_ty_cbgx.atlas", 
        tex = KW_PATH_EIGHTKING_END_ANI .. "zzb_ty_cbgx.json", 
        armatureName = "animation", 
        scale = 1,
        loop = false,
    }
    local dargonBones = display.playDargonBonesSpine(config)
    local dargonBonesWing = display.playDargonBonesSpine(configWing)
    if dargonBones then
        dargonBones:setAnimation(0, "" .. config.armatureName, false)
        dargonBones:registerSpineEventHandler(function(event)
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
            end
        end, sp.EventType.ANIMATION_COMPLETE)
        dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
        local size = actionPanel:getContentSize()
        dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
        actionPanel:addChild(dargonBones)
    end
    if dargonBonesWing then
        dargonBonesWing:setAnimation(0, "" .. config.armatureName, false)
        dargonBonesWing:registerSpineEventHandler(function(event)
            if event.type == 'complete' then
                dargonBonesWing:runAction(cc.Sequence:create(
                cc.DelayTime:create(0.1),
                cc.CallFunc:create(function()
                    dargonBonesWing:removeFromParent(true)
                end)
                ))
            end
        end, sp.EventType.ANIMATION_COMPLETE)
        actionPanel:addChild(dargonBonesWing)
    end
end

local KW_PATH_WIN_FIRE_ANI = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_bw_win/"
function AnimationManager.playWinFireAni(actionPanel, actionPanel2)
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_WIN_FIRE_ANI .. "zzb_ty_baoguang.json") or 
    not cc.FileUtils:getInstance():isFileExist(KW_PATH_WIN_FIRE_ANI .. "zzb_ty_huo.json") or 
    not cc.FileUtils:getInstance():isFileExist(KW_PATH_WIN_FIRE_ANI .. "zzb_ty_quan.json") then
        return
    end
    local params1 = { path = KW_PATH_WIN_FIRE_ANI, tex = "zzb_ty_baoguang.json", ske = "zzb_ty_baoguang.atlas", armatureName = "animation", scale = 1 }
    local params2 = { path = KW_PATH_WIN_FIRE_ANI, tex = "zzb_ty_huo.json", ske = "zzb_ty_huo.atlas", armatureName = "animation", scale = 1 }
    local params3 = { path = KW_PATH_WIN_FIRE_ANI, tex = "zzb_ty_quan.json", ske = "zzb_ty_quan.atlas", armatureName = "animation", scale = 1 }
    local armature1 = sp.SkeletonAnimation:create(params1.path .. params1.tex, params1.path .. params1.ske, 1)
    local armature2 = sp.SkeletonAnimation:create(params2.path .. params2.tex, params2.path .. params2.ske, 1)
    local armature3 = sp.SkeletonAnimation:create(params3.path .. params3.tex, params3.path .. params3.ske, 1)
    local pos = cc.p(actionPanel:getContentSize().width/2, actionPanel:getContentSize().height/2)
    if armature1 then
        armature1:setAnimation(0, "" .. params1.armatureName, false)
        armature1:setPosition(pos)
        actionPanel:addChild(armature1)
    end
    if armature2 then
        armature2:setAnimation(0, "" .. params1.armatureName, true)
        armature2:setPosition(pos)
        actionPanel2:addChild(armature2)
    end
    if armature3 then
        armature3:setAnimation(0, "" .. params1.armatureName, true)
        armature3:setPosition(pos)
        actionPanel:addChild(armature3)
    end
end

return AnimationManager
