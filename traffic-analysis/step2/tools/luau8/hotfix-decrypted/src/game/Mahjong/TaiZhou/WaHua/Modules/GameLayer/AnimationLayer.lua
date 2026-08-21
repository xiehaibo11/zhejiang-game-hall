local AnimationLayer = CF.gameClass("AnimationLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")

function AnimationLayer:getProxyEvents()
    local proxyEvents = AnimationLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_XIAN_HUA_ANI", callBack = "onShowXianHuaAni" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_BU_HUA_ANI", callBack = "onShowBuHuaAni" }
    return proxyEvents
end

function AnimationLayer:onShowXianHuaAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local localSeat = event.msg.localSeat
    local params = {
		path = "res/animation/Mahjong/TaiZhou/WaHua/",
		ske = "ios_wh_ani_ske.json",
		tex = "ios_wh_ani_tex.json",
		armatureName = "Armature",
		dragonBonesName = "ios_wh_ani",
		animationName = "wh_xianhua_ani"
	}
    self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    local ani, time = display.playDargonBonesAnimByTimes(params, 1)
    if ani then
		self["_posPlayerHead_" .. localSeat]:addChild(ani)
        local fun = cc.CallFunc:create(function()
            CF.game:getModule("GameLayer"):playXianHuaAniEnd(self["_posPlayerHead_" .. localSeat], localSeat)
            ani:removeSelf()
        end)
        self["_posPlayerHead_" .. localSeat]:runAction(cc.Sequence:create(cc.DelayTime:create(time), fun))
	end
    CF.game:getModule("GameLayer"):showXianHuaMah(self["_posPlayerHead_" .. localSeat], localSeat, event.msg.data)
end

--补花动画
function AnimationLayer:onShowBuHuaAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local localSeat = event.msg.localSeat
    local params = {
		path = "res/animation/Mahjong/TaiZhou/WaHua/",
		ske = "ios_wh_ani_ske.json",
		tex = "ios_wh_ani_tex.json",
		armatureName = "Armature",
		dragonBonesName = "ios_wh_ani",
		animationName = "wh_buhua_ani"
	}

    self["_posPlayerHead_" .. localSeat]:removeAllChildren()
	local ani, time = display.playDargonBonesAnimByTimes(params, 1)
	if ani then
		self["_posPlayerHead_" .. localSeat]:addChild(ani)
        local fun = cc.CallFunc:create(function()
            ani:removeSelf()
        end)
        self["_posPlayerHead_" .. localSeat]:runAction(cc.Sequence:create(cc.DelayTime:create(time), fun))
	end
end

return AnimationLayer�	