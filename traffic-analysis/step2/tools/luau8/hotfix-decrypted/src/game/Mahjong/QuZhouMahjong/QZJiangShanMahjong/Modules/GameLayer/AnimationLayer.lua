local AnimationLayer = CF.gameClass("AnimationLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")

function AnimationLayer:getProxyEvents()
    local proxyEvents = AnimationLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_REPLACER_FLOWER", callBack = "onReplaceFlowerEvent"}
    return proxyEvents
end

--补花动画
function AnimationLayer:onReplaceFlowerEvent(evt)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local msg = evt.msg
    if not msg then return end
    if not msg.localSeat then return end
    local localSeat = msg.localSeat

    local aniName = "buhua"
    local exportJsonName = "cardtype_ani_buhua"
    local exportJsonFilePath = "res/animation/GameCommon/cardtype_ani_buhua/cardtype_ani_buhua.ExportJson"
    self["_posPlayerHead_" .. localSeat]:removeAllChildren()
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
            if not self["_posPlayerHead_" .. localSeat] then
                return
            end
            self["_posPlayerHead_" .. localSeat]:removeAllChildren()
        end, sp.EventType.ANIMATION_COMPLETE)
        dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
        self["_posPlayerHead_" .. localSeat]:addChild(dargonBones)
    else
        CF.UITool.playJsonAnimationByName(self["_posPlayerHead_" .. localSeat], exportJsonName, exportJsonFilePath, -1, aniName, nil, nil, function()
            if not self["_posPlayerHead_" .. localSeat] then
                return
            end
            self["_posPlayerHead_" .. localSeat]:removeAllChildren()
        end)
    end
end

return AnimationLayer	