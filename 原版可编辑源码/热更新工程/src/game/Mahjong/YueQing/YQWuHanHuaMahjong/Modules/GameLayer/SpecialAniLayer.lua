local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
local SpecialAniWindow = CF.gameClass("SpecialAniWindow", CF.ViewBase)
local AnimationLayer = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")


function SpecialAniWindow:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/YueQing/AniLayer.csb"
end

function SpecialAniWindow:getBindingInfo()
    return {
        ["_KW_POS_ANI_1"] = { varName = "_aniPos1" },
        ["_KW_POS_ANI_2"] = { varName = "_aniPos2" },
        ["_KW_POS_ANI_3"] = { varName = "_aniPos3" },
        ["_KW_POS_ANI_4"] = { varName = "_aniPos4" },
        ["_KW_POS_MING_PAI_ANI_1"] = { varName = "_mingPaiAniPos1" },
        ["_KW_POS_MING_PAI_ANI_2"] = { varName = "_mingPaiAniPos2" },
        ["_KW_POS_MING_PAI_ANI_3"] = { varName = "_mingPaiAniPos3" },
        ["_KW_POS_MING_PAI_ANI_4"] = { varName = "_mingPaiAniPos4" },
    }
end

function SpecialAniWindow:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MINGPAI_SHOW_ANI", callBack = "onShowPlayMingPaiAni"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_HU_SHOW_ANI", callBack = "onShowPlayHuAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_REPLAYCE_SHOW_ANI", callBack = "onShowPlayReplaceAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_BAIBANGANG_SHOW_ANI", callBack = "onShowPlayBaiBanGangAni"},
    }
end

function SpecialAniWindow:onShowPlayReplaceAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local msg = event.msg
    local aniPanel = {"_aniPos1", "_aniPos2", "_aniPos3", "_aniPos4"}
    local playAniNode = self[aniPanel[msg.seat]]
    if playAniNode then
        playAniNode:stopAllActions()
        playAniNode:removeAllChildren()
        playAniNode:setVisible(true)
         -- 获取光效设置信息
        local outEffect = CF.settingData:getOutEffects() 
        local params = {
            path = "res/animation/Mahjong/ShengZhou/replace/",
            ske = "ios_syhmj_hua_ske.json",
            tex = "ios_syhmj_hua_tex.json",
            armatureName = "Armature",
            dragonBonesName = "ios_syhmj_hua",
            animationName = "syhmj_hua"
        }
        if outEffect == 2 then
            params = {
                path = "res/animation/Mahjong/ShaoXing3D/replace/",
                ske = "ios_syhmj_hua_ske_ske.json",
                tex = "ios_syhmj_hua_ske_tex.json",
                armatureName = "Armature",
                dragonBonesName = "ios_syhmj_hua_ske",
                animationName = "syhmj_hua"
            }
        end
        local replaceAni = display.playDargonBonesAnimByTimes(params, 1)
        if replaceAni then
            playAniNode:addChild(replaceAni)
        end
    end
end


function SpecialAniWindow:onShowPlayBaiBanGangAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local msg = event.msg
    -- 配置动画名和特效信息
    local aniName = WinLostFanConfig.BUHUA_ANI_NAME[msg.ntype]
    local outEffect = CF.settingData:getOutEffects() --

        -- aniIndex 指定使用哪套动画，用下划线+数字表示(如chi_1, peng_1)
    local aniIndex = AnimationLayer:getAnimationIndex(outEffect)
    if aniIndex and aniIndex > 0 then
        aniName = aniName .. "_" .. aniIndex
    end

    
    local aniPanel = {"_aniPos1", "_aniPos2", "_aniPos3", "_aniPos4"}
    local playAniNode = self[aniPanel[msg.seat]]
    if playAniNode then
        playAniNode:stopAllActions()
        playAniNode:removeAllChildren()
        playAniNode:setVisible(true)
        local aniPath = "res/animation/Mahjong/YueQing/cardtype_ani_yqrr/cardtype_ani_yqrr.ExportJson"
        
        CF.UITool.playJsonAnimationByName(playAniNode, "cardtype_ani_yqrr", aniPath, 0, aniName, nil, nil, function()
            playAniNode:setVisible(false)
        end)
    end
end

function SpecialAniWindow:onShowPlayMingPaiAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local msg = event.msg
    local aniPanel = {"_mingPaiAniPos1", "_mingPaiAniPos2", "_mingPaiAniPos3", "_mingPaiAniPos4"}
    local playAniNode = self[aniPanel[msg.localSeat]]
    if playAniNode then
        playAniNode:stopAllActions()
        playAniNode:removeAllChildren()
        playAniNode:setScale(1.4)
        playAniNode:setVisible(true)
        local aniPath = "res/animation/Mahjong/YueQing/ios_yq_px_ani/ios_yq_px_ani.ExportJson"
        local aniName = WinLostFanConfig.MP_ANI_NAME[msg.ntype]
        CF.UITool.playJsonAnimationByName(playAniNode, "ios_yq_px_ani", aniPath, 0, aniName, nil, nil, function()
            playAniNode:setVisible(false)
        end)
    end
end

function SpecialAniWindow:onShowPlayHuAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local msg = event.msg
    local aniName = WinLostFanConfig.FANID_TO_ANI[msg.maxfan]
    if msg == nil or aniName == nil then
        return
    end
    local aniPanel = {"_aniPos1", "_aniPos2", "_aniPos3", "_aniPos4"}
    local playAniNode = self[aniPanel[msg.localSeat]]
    if playAniNode then
        playAniNode:stopAllActions()
        playAniNode:removeAllChildren()
        playAniNode:setVisible(true)
        local aniPath = "res/animation/Mahjong/YueQing/pxtx_ani_yq/pxtx_ani_yq.ExportJson"
        CF.UITool.playJsonAnimationByName(playAniNode, "pxtx_ani_yq", aniPath, 0, aniName, nil, nil, function()
            playAniNode:setVisible(false)
        end)
    end
end

return SpecialAniWindow