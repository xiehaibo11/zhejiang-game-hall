local AnimationLayer = CF.gameClass("AnimationLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")

--飘财动画
function AnimationLayer:playGodOfWealthAnimation(msg)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local localSeat = CF.roomData:seatToLocal(msg.data.seat)
    if not self["_posPlayerHead_" .. localSeat] then
        return
    end

    self["_posPlayerHead_" .. localSeat]:stopAllActions()
    self["_posPlayerHead_" .. localSeat]:removeAllChildren()

    local params = {
        path = "res/animation/Mahjong/ShengZhou/feilong/",
        ske = "syhmj_feilong_ani_ske.json",
        tex = "syhmj_feilong_ani_tex.json",
        armatureName = "Armature",
        dragonBonesName = "syhmj_feilong_ani",
        animationName = "syhmj_feilong"
    }

    local tmpAni = display.playDargonBonesAnimByTimes(params, 1)
    if tmpAni then
        self["_posPlayerHead_" .. localSeat]:addChild(tmpAni)
    end
end

return AnimationLayer