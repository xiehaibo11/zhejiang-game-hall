local TableInfoWindow = CF.gameClass("TableInfoWindow", CF.ViewBase)

function TableInfoWindow:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ShengZhou/TableInfo.csb"
end

function TableInfoWindow:getBindingInfo()
    return {
        ["_KW_PANEL_ANTE"] = {varName="_antePanel"},
        ["_KW_UI_REPLACE_SEAT_1"] = {varName="_replacePanel_1"},
        ["_KW_UI_REPLACE_SEAT_2"] = {varName="_replacePanel_2"},
        ["_KW_UI_REPLACE_SEAT_3"] = {varName="_replacePanel_3"},
        ["_KW_UI_REPLACE_SEAT_4"] = {varName="_replacePanel_4"},
        ["_KW_BTN_ANTE_1"] = {varName="_anteBtn_1",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onAnteBtnClicked"},
        ["_KW_BTN_ANTE_2"] = {varName="_anteBtn_2",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onAnteBtnClicked"},
        ["_KW_BTN_ANTE_3"] = {varName="_anteBtn_3",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onAnteBtnClicked"},
        ["_KW_PIC_CHIP_PAN"] = {varName="_picChipPan"},
        ["_KW_UI_BIG_CHIP_PAN"] = {varName="_bigChipPanPanel"},
        ["_KW_UI_BAOZI_ANI"] = {varName="_baoZiAni"},
        ["_KW_ANI_CHIP_PAN"] = {varName="_chipPanAni"},
        ["_KW_PANEL_FEILONGPAI"] = {varName="_feiLongPanel"},
        ["_KW_FEILONGPAI_POS"] = {varName="_feiLongAniPos"},
        ["_KW_MAH_JOKER_FACE"] = {varName="_jokerFace"}
    }
end

function TableInfoWindow:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHIPS", callBack = "showChipsBymsg"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_BUHUA", callBack = "showBuHua"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHENGBAO_COUNT", callBack = "showChengBaoCount"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_FEI_LONG_JOKER", callBack = "showFeiLongJoker"},
    }
end

function TableInfoWindow:showChengBaoCount(event)
    if event.msg == nil then
        return
    end
    if event.msg.seat == nil or event.msg.count == nil then
        return
    end
    local panelUI = {"_replacePanel_1", "_replacePanel_2", "_replacePanel_3", "_replacePanel_4"}
    local localSeat = CF.roomData:seatToLocal(event.msg.seat)
    local aniNode = self[panelUI[localSeat]]

    aniNode:stopAllActions()
    aniNode:removeAllChildren()

    local showfunc = function ()
        local tmpImg = ccui.ImageView:create("szHuaMah_ertan.png",ccui.TextureResType.plistType)
        if event.msg.count == 3 then
            tmpImg:loadTexture("szHuaMah_santan.png", ccui.TextureResType.plistType)
        end
        if tmpImg then
            aniNode:addChild(tmpImg)
            tmpImg:setVisible(true)
            tmpImg:setAnchorPoint(cc.p(0.5, 0.5))
        end
        aniNode:setVisible(true)
    end

    local showEndfunc = function ()
        aniNode:stopAllActions()
        aniNode:removeAllChildren()
        aniNode:setVisible(false)
    end

    local delayTime = cc.DelayTime:create(0.8)

    aniNode:runAction(cc.Sequence:create(cc.CallFunc:create(showfunc),delayTime,cc.CallFunc:create(showEndfunc)))
end

function TableInfoWindow:showBuHua(event)
    if event.msg == nil then
        return
    end
    if event.msg.seat == nil then
        return
    end
    local panelUI = {"_replacePanel_1", "_replacePanel_2", "_replacePanel_3", "_replacePanel_4"}
    local localSeat = CF.roomData:seatToLocal(event.msg.seat)
    local replaceNode = self[panelUI[localSeat]]
    if replaceNode ~= nil then
        replaceNode:setVisible(true)
        replaceNode:stopAllActions()
        replaceNode:removeAllChildren()
        local params = {
			path = "res/animation/Mahjong/ShengZhou/replace/",
			ske = "ios_syhmj_hua_ske.json",
			tex = "ios_syhmj_hua_tex.json",
			armatureName = "Armature",
			dragonBonesName = "ios_syhmj_hua",
			animationName = "syhmj_hua"
		}
        local outEffect = CF.settingData:getOutEffects()
        if CF.settingData:getIsMahlayer3D() then
            outEffect = CF.settingData:getOutEffectStyle()
        end
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
            replaceNode:addChild(replaceAni)
        end
    end
end

function TableInfoWindow:showChipsBymsg(event)
    if event.msg == nil then
        return
    end
    if event.msg.msgThrowChip == nil then
        return
    end
    local msgThrowChip = event.msg.msgThrowChip
    self._picChipPan:setVisible(false)
    self._bigChipPanPanel:setVisible(false)

    local picChipChildren = self._picChipPan:getChildren()
    local bigPicChipChildren = self._bigChipPanPanel:getChildren()

    for i=1, msgThrowChip.nCount do
        if picChipChildren and picChipChildren[i] then
            picChipChildren[i]:ignoreContentAdaptWithSize(true)
            picChipChildren[i]:loadTexture("szHuaMah_" .. tostring(msgThrowChip.nChips[i]) .. "d.png", ccui.TextureResType.plistType)
        end
        if bigPicChipChildren and bigPicChipChildren[i] then
            bigPicChipChildren[i]:ignoreContentAdaptWithSize(true)
            bigPicChipChildren[i]:loadTexture("szHuaMah_D" .. tostring(msgThrowChip.nChips[i]) .. ".png", ccui.TextureResType.plistType)
        end
    end

    if self._baoZiAni then
        self._baoZiAni:stopAllActions()
        self._baoZiAni:removeAllChildren()

        local funChuXian = function ()
            local params = {
			    path = "res/animation/Mahjong/ShengZhou/touzi/",
			    ske = "syhmj_zhitouzi_ske.json",
			    tex = "syhmj_zhitouzi_tex.json",
			    armatureName = "Armature",
			    dragonBonesName = "syhmj_zhitouzi",
			    animationName = "touzi_yaodong"
		    }

		    if not self._chipsAni1 then
			    self._chipsAni1 = display.playDargonBonesAnimByTimes(params, 1)
			    if self._chipsAni1 then
				    self._baoZiAni:addChild(self._chipsAni1)
                    self._chipsAni1:setPositionX(-60)
                    self._chipsAni1:setScale(1.3)
			    end
		    end
            if not self._chipsAni2 then
			    self._chipsAni2 = display.playDargonBonesAnimByTimes(params, 1)
			    if self._chipsAni2 then
				    self._baoZiAni:addChild(self._chipsAni2)
                    self._chipsAni2:setPositionX(60)
                    self._chipsAni2:setScale(1.3)
			    end
		    end
        end

        local funYiDong = function()
            self._bigChipPanPanel:setVisible(true)
            self._baoZiAni:setVisible(false)
        end

        local funDaoDa = function()
            self._picChipPan:setVisible(true)
            self._bigChipPanPanel:setVisible(false)
            self._baoZiAni:removeAllChildren()
            self._baoZiAni:setVisible(false)
        end

        local funEnd = function()
            self._baoZiAni:stopAllActions()
            self._baoZiAni:removeAllChildren()
            self._baoZiAni:setVisible(false)
        end

        local delay1 = cc.DelayTime:create(0.8)
        local delay2 = cc.DelayTime:create(1.2)

        local sequence = cc.Sequence:create(
            cc.CallFunc:create(funChuXian),
            delay1,cc.CallFunc:create(funYiDong),
            delay2,cc.CallFunc:create(funDaoDa),
            delay1,cc.CallFunc:create(funEnd))

        if event.msg.showAni then
            self._baoZiAni:runAction(cc.Sequence:create(cc.CallFunc:create(funDaoDa),delay1,cc.CallFunc:create(funEnd)))
            if CF.settingData:getIsMahlayer3D() then
                CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_MAHLAYER_HIDE_CHIPS_3D })
            end
        else
            if CF.settingData:getIsMahlayer3D() then
                CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_MAHLAYER_SHOW_CHIPS_3D, data = event.msg.msgThrowChip.nChips})
            end
            self._baoZiAni:runAction(sequence)
        end
	end
end

function TableInfoWindow:showFeiLongJoker(event)
    local msg = event.msg
    if not msg then
        return
    end

    local funcStart = function ()
        self._feiLongAniPos:stopAllActions()
        self._feiLongAniPos:removeAllChildren()
        local params = {
			path = "res/animation/Mahjong/ShengZhou/fanlongpai/",
			ske = "syhmj_longpai_chuxian_ske.json",
			tex = "syhmj_longpai_chuxian_tex.json",
			armatureName = "Armature",
			dragonBonesName = "syhmj_longpai_chuxian",
			animationName = "syhmj_flp"
		}
        local tmpAni = display.playDargonBonesAnimByTimes(params, 1)
        if tmpAni then
            self._feiLongAniPos:addChild(tmpAni)
            self._feiLongAniPos:setVisible(true)
        end
    end

    local funcShowJokerFace = function ()
        self._jokerFace:ignoreContentAdaptWithSize(true)
        self._jokerFace:loadTexture("mj_mah_face_" .. msg.jokerID .. ".png", ccui.TextureResType.plistType)
        self._jokerFace:setVisible(true)
    end

    local funcEnd = function ()
        self._jokerFace:setVisible(false)
        self._feiLongAniPos:stopAllActions()
        self._feiLongAniPos:removeAllChildren()
        self._feiLongAniPos:setVisible(false)
    end

    local delay0 = cc.DelayTime:create(0.1)
    local delay1 = cc.DelayTime:create(0.2)
    local delay2 = cc.DelayTime:create(0.4)

    local sequence = cc.Sequence:create(
        delay0,cc.CallFunc:create(funcStart),
        delay1,cc.CallFunc:create(funcShowJokerFace),
        delay2,cc.CallFunc:create(funcEnd))

    self._feiLongPanel:runAction(sequence)
end

return TableInfoWindow