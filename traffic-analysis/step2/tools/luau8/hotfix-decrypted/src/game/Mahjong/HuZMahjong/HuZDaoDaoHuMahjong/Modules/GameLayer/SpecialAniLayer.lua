local SpecialAniLayer = CF.gameClass("SpecialAniLayer", CF.ViewBase)

function SpecialAniLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/HuZhou/AniLayer.csb"
end

function SpecialAniLayer:getBindingInfo()
    return {
        ["_KW_POS_ANI_"] = { varName = "_aniPos", beginIndex = 1, endIndex = 4 },
        ["_KW_POS_MING_PAI_ANI_"] = { varName = "_mingPaiAniPos", beginIndex = 1, endIndex = 4 },
    }
end

function SpecialAniLayer:ctor(param)
    param = param or {}
	SpecialAniLayer.super.ctor(self,param)
end

function SpecialAniLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_REPLAYCE_SHOW_ANI", callBack = "onShowPlayReplaceAni"},
    }
end

function SpecialAniLayer:onShowPlayReplaceAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local msg = event.msg
    local aniPanel = { "_aniPos1", "_aniPos2", "_aniPos3", "_aniPos4" }
    local playAniNode = self[aniPanel[msg.seat]]
    if playAniNode then
        playAniNode:stopAllActions()
        playAniNode:removeAllChildren()
        playAniNode:setVisible(true)
        local aniPath = "res/animation/GameCommon/cardtype_ani_buhua/cardtype_ani_buhua.ExportJson"
        local aniName = "cardtype_ani_buhua"
        local outEffect = CF.settingData:getOutEffects()
        if CF.settingData:getIsMahlayer3D() then
            outEffect = CF.settingData:getOutEffectStyle()
        end
        if outEffect == 2 then
            local config = {
                path = "",
                ske = "animation/GameCommon/cardtype_ani_buhua_2/cardtype_ani_buhua.atlas",
                tex = "animation/GameCommon/cardtype_ani_buhua_2/cardtype_ani_buhua.json",
                armatureName = "animation",
                scale = 1,
                loop = false,
            }
            local dargonBones = display.playDargonBonesSpine(config)
            dargonBones:registerSpineEventHandler(function(event)
                if not playAniNode then
                    return
                end
                playAniNode:removeAllChildren()
                playAniNode:setVisible(false)
            end, sp.EventType.ANIMATION_COMPLETE)
            dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
            playAniNode:addChild(dargonBones)
        else
            CF.UITool.playJsonAnimation(playAniNode, aniName, aniPath, 0, nil, nil, function()
                playAniNode:setVisible(false)
            end)
        end
    end
end

return SpecialAniLayer.
