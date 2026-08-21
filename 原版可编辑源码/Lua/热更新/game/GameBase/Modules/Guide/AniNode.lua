local GuideAniNode = CF.gameClass("GuideAniNode", CF.ViewBase)

function GuideAniNode:getCSBPath()
    return "cocosStudio/Common/CSB/GuideAni.csb"
end

function GuideAniNode:getBindingInfo()
    return {
        ["_KW_POS_PROP_ANI"] = {varName = "_posPropAni"},
        ["_KW_POS_PROP_HAND_ANI"] = {varName = "_posPropHandAni"},
        ["_KW_PANEL_HINT_"] = { varName = "_pnlHint", beginIndex = 1, endIndex = 4 },
        ["_KW_TXT_HINT_"] = { varName = "_txtHint", beginIndex = 1, endIndex = 4 },
        ["_KW_PROP_ITEM"] = {varName = "_propBtn", onTouchEnded = "onTouchProp"},
        ["_KW_DARGON_ANI_PANEL"] = {varName = "_dargonAni"},
        ["_KW_PROP_IMAGE"] = {varName = "_propImg"},
        ["_KW_COST_TEXT"] = {varName = "_propCost"},
        ["_KW_SHADOW_PANEL"] = {varName = "_shadowPanel"},
    }
end

function GuideAniNode:ctor(param)
    param = param or {}
    GuideAniNode.super.ctor(self, param)
end

function GuideAniNode:showGuideAni()
    self:playDragonBoneAni(self._posPropAni, "prop-light", "newAnimation")
    local jsonPath = "res/animation/GameCommon/shouzhi_ani/shouzhi_2.ExportJson"
    CF.UITool.playJsonAnimation(self._posPropHandAni, "shouzhi_2", jsonPath, -1)
end

function GuideAniNode:getGuideText(cost, free, propid)
    if not cost then
        return ""
    end
    if not propid then 
        return ""
    end
    local showText = "免费体验"
    if propid == 150693 or propid == 150692 then 
        showText = "免费新道具"
    end 
    if not free then
        showText = cost
    end
    return showText
end

function GuideAniNode:showGuideTip(position, text)
    local targetPanel = self["_pnlHint" .. position]
    local targetTxt = self["_txtHint" .. position]
    if targetPanel then
        targetPanel:setVisible(true)
    end
    if targetTxt then
        targetTxt:setString(text)
    end
end

function GuideAniNode:showGuidePropAni(position, costInfo, free)
    self._costInfo = costInfo
    self._free = free
    local costPropValue = CF.game:getModule("PlayerInfo"):getPropsCostValueByIndex(costInfo.Propid)
    local text = self:getGuideText(costPropValue, free,self._costInfo.Propid)
    self._propCost:setString(text)
    if costInfo.GuideAniFile and costInfo.GuideAni then
        self:playDragonBoneAni(self._dargonAni, costInfo.GuideAniFile, costInfo.GuideAni)
    else
        self:showPropImageAction()
    end
    self._localSeat = position
    self._propBtn:setVisible(true)
    self:playHideAction(5)
end

function GuideAniNode:showPropImageAction()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/propinfo.plist")
    self._propImg:loadTexture(self._costInfo.AniPicName, ccui.TextureResType.plistType)
    self._propImg:ignoreContentAdaptWithSize(true)
    self._propImg:setVisible(true)
    self:playShakeAction()
end

function GuideAniNode:playDragonBoneAni(node, filename, animationName)
    if node == nil or filename == nil then
        return
    end

    local path = "res/animation/GameCommon/prop_ani/" .. filename .. "/"
    local params = {
        path = path,
        ske = filename .. "_ske.json",
        tex = filename .. "_tex.json",
        armatureName = "Armature",
        dragonBonesName = filename,
        animationName = animationName
    }
    local dargonAni = display.playDargonBonesAnimByTimes(params, 0)
    if dargonAni then
        node:addChild(dargonAni)
        local size = node:getContentSize()
        dargonAni:setAnchorPoint(cc.p(0.5, 0.5))
        dargonAni:setPosition(cc.p(size.width / 2.0, size.height / 2.0))
        dargonAni:setZOrder(-1)
    end
end

function GuideAniNode:onTouchProp(send, eventType)
    local seat = CF.roomData:localToSeat(self._localSeat)
    local costPropCount = self._costInfo.CostPropCount
    local propIndex = self._costInfo.Index
    local costPropId = self._costInfo.Propid
    if CF.roomData:is50() then
        CF.game:getModule("PropUse50"):dealProp(costPropId, costPropCount, seat, propIndex)
    else
        CF.game:getModule("PropUse"):dealProp(costPropId, costPropCount, seat, propIndex)
    end
    self:playHideAction(0)
    print("onTouchProp ...")
end

function GuideAniNode:playHideAction(delayTime)
    -- local spawnAct = cc.Spawn:create(cc.EaseOut:create(cc.MoveTo:create(0.5, cc.p(0, 0)), 0.3), cc.ScaleTo:create(0.5, 0))
    -- local callFunc1 = cc.CallFunc:create( function()
    --     self._shadowPanel:setVisible(false)
    -- end)
    local callFunc = cc.CallFunc:create( function()
        self:removeSelf()
        CF.game:getModule("Player"):dispatchEvent( { name = CF.game:getModule("Player").EVENT_HIDE_GUIDE_PROP})
    end)
    self._propBtn:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime), callFunc))
end

function GuideAniNode:playShakeAction()
    local posPanel = self._propImg
    posPanel:stopAllActions()
    local actMoveUp = cc.MoveBy:create(0.15, cc.p(0, 20))
    local actMoveDown = cc.MoveBy:create(0.15, cc.p(0, -20))

    local actMoveRight1 = cc.RotateBy:create(0.15, 10)
    local actMoveRight2 = cc.RotateBy:create(0.15, 20)
    local actMoveLeft = cc.RotateBy:create(0.15, -20)

    local seqAction = cc.Sequence:create(actMoveRight1, actMoveLeft, actMoveRight2, actMoveLeft, actMoveRight2, actMoveLeft, actMoveRight1, cc.DelayTime:create(0.15), actMoveUp, actMoveDown)
    local repeatAct = cc.RepeatForever:create(seqAction)
    posPanel:runAction(repeatAct)
end

return GuideAniNode
