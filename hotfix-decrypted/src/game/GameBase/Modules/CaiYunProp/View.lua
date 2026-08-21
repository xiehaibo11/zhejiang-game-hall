local CaiYunPropView = CF.gameClass("CaiYunPropView", CF.ViewBase)
local CaiYunPropConfig = CF.gameRequire("Modules.CaiYunProp.Config")

function CaiYunPropView:ctor()
    CaiYunPropView.super.ctor(self)
    self._isShowHappy = false
    self:initLeftTimeDelay()
    self:initUI()
end

function CaiYunPropView:getCSBPath()
    return "cocosStudio/Common/CSB/CaiYunPropLayer.csb"
end

function CaiYunPropView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose" },
        ["_KW_BTN_RULE_TIP"] = { varName = "_ruleTipBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchRuleTip" },
        ["_KW_IMG_CAISHEN_BG"] = { varName = "_caishenNormalBg" },
        ["_KW_TEXT_LEFTTIME"] = { varName = "_textLeftTime" },
        ["_KW_IMG_CAISHEN_ICE"] = { varName = "_caishenIce" },
        ["_KW_ITEMS_PANEL"] = { varName = "_itemsPanel" },
        ["_KW_ITEM_PROP"] = { varName = "_propItem" },
        ["_KW_PANEL_RULE_TIP"] = { varName = "_panelRuleTip" },
        ["_KW_IMG_TOP_TIP_BG"] = { varName = "_topTipBg" },
        ["_KW_IMG_BG"] = { varName = "_imgBg" },
        ["_KW_PANEL_ANI"] = { varName = "_panelAni" },
        ["_KW_PANEL_ANI_CAISHEN"] = { varName = "_panelCaiShenAni" },
    }
end

function CaiYunPropView:getProxyEvents()
    return {
        { module = CF.game:getModule("CaiYunProp"), eventKeyName = "EVENT_PROPLISTINFO_CHANGED", callBack = "onPropListInfoChange" },
        { module = CF.game:getModule("CaiYunProp"), eventKeyName = "EVENT_PROP_GET_LEFTTIME", callBack = "onGetLeftTime" },
        { module = CF.game:getModule("CaiYunProp"), eventKeyName = "EVENT_PROP_EXCHANGE_SUCC", callBack = "onPropExchange" },
    }
end

function CaiYunPropView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.TIPLAYER
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName("CaiYunPropView")
        self._panelRuleTip:setVisible(true)
        runningScene:addChild(self, zorder)
    end

    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080835, { state = CF.game:getModule("CaiYunProp"):getSelfLeftTime() <= 0 and 1 or 0 })
    return self
end

function CaiYunPropView:onPropListInfoChange(event)
    self:updateItemList()
end

function CaiYunPropView:onGetLeftTime(event)
    self:updateCaiShenState()
end

function CaiYunPropView:onPropExchange(event)
    local leftTime = CF.game:getModule("CaiYunProp"):getSelfLeftTime()
    if leftTime <= 0 then
        self:showCaishenBreakIceAni()
    end
    if event.reqDataEx and event.reqDataEx.needPropID then
        self:showPropSpecificAni(event.reqDataEx.needPropID)
    end
end

function CaiYunPropView:initUI()
    self:updateCaiShenState()
    self:updateItemList()

    CF.game:getModule("CaiYunProp"):reqExchangeProductsInfo()
end

function CaiYunPropView:onTouchClose(send, eventType)

    local module = CF.game:getModule("JuBaoPen")
    module:updateYS()
    module:playTitleAnimation()

    self:close()

    local conventionData = {}
    local extraData = {}
    if CF.roomData:isNewGoldRoom() or CF.roomData:isGoldRoom() then
        extraData.room_type = 3
    elseif CF.teaHouseManager:isInTeaHouse() then
        extraData.room_type = 1
    else
        extraData.room_type = 2
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUN_PROP_VIEW_CLOSE, conventionData, extraData)
end

function CaiYunPropView:onTouchRuleTip(send, eventType)
    self._panelRuleTip:setVisible(not self._panelRuleTip:isVisible())
end

function CaiYunPropView:updateItemList()
    local penelSize = self._itemsPanel:getContentSize()
    local itemListInfo = CF.game:getModule("CaiYunProp"):getPropListInfo()
    for index, info in pairs(itemListInfo) do
        local tempItem = self:createPropItem(info)
        if tempItem then
            local indexY = math.ceil(index / 3)
            local indexX = index - (indexY - 1) * 3
            tempItem:setPosition(penelSize.width / 3 * (indexX - 0.5), penelSize.height - 142 - (indexY - 1) * 310)
            self._itemsPanel:addChild(tempItem)
        end
    end
end

function CaiYunPropView:createPropItem(info)
    local tempItem = self._propItem:clone()
    XH.UITool.setText(tempItem, "KW_ITEM_PROP_TEXT_NAME", info.name or "")
    XH.UITool.addTouchEventListener(tempItem, "KW_ITEM_PROP_BTN_BUY", handler(self, self.onBuyPropItem))
    local buyBtn = CF.UITool.seekNodeByName(tempItem, "KW_ITEM_PROP_BTN_BUY")
    if buyBtn then
        buyBtn.caiyunInfo = info
    end
    self:updateItemIcon(tempItem, info.image)
    local priceData = CF.game:getModule("CaiYunProp"):getNeedPropIDAndPrice(info)
    XH.UITool.setText(tempItem, "KW_ITEM_PROP_MTEXT", priceData.price or "")
    XH.UITool.setText(tempItem, "KW_ITEM_PROP_TEXT_TIME", info.des or "")
    return tempItem
end

function CaiYunPropView:updateItemIcon(item, url)
    if not item or not url then
        return
    end

    local node = CF.UITool.seekNodeByName(item, "KW_ITEM_PROP_ICON")
    local itemIcon = CF.UITool.seekNodeByName(node, "ITEM_ICON")
    if itemIcon == nil then
        local size = node:getContentSize()
        itemIcon = CF.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName("ITEM_ICON")
        :addTo(node)
    end
    itemIcon:setUrl(url)
end

function CaiYunPropView:onBuyPropItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not send.caiyunInfo then
        return
    end

    local reportData = {
        state = CF.game:getModule("CaiYunProp"):getSelfLeftTime() <= 0 and 1 or 0,
        costInfo = { propid = send.caiyunInfo.value, costPropid = XH.areaData:getPropDiamndID(), cnt = tonumber(send.caiyunInfo.price_config[1] and send.caiyunInfo.price_config[1].value or 0) }
    }
    CF.game:getModule("CaiYunProp"):buyCaiYunProp(send.caiyunInfo, function()
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080837, reportData)
    end)

    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080836, reportData)
end

function CaiYunPropView:onCleanup()
    self:initLeftTimeDelay()
    CaiYunPropView.super.onCleanup(self)
end

function CaiYunPropView:initLeftTimeDelay()
    if self._delayID then
        self:_removeAllScheduleID(self._delayID)
    end
    self._delayID = nil
end

function CaiYunPropView:updateCaiShenState()
    local leftTime = CF.game:getModule("CaiYunProp"):getSelfLeftTime()
    self:initLeftTimeDelay()
    self:updateCaiShenLeftTime(leftTime)
end

local CaishenAniInfo = {
    path = "animation/GameCommon/CaishenProp/",
    ske = "grzx-caishen_ske.json",
    tex = "grzx-caishen_tex.json",
    armatureName = "Armature",
    dragonBonesName = "grzx-caishen",
    animationName = "standby"
}
local CaishenAniInfoHappy = {
    path = "animation/GameCommon/CaishenProp/",
    ske = "grzx-caishen_ske.json",
    tex = "grzx-caishen_tex.json",
    armatureName = "Armature",
    dragonBonesName = "grzx-caishen",
    animationName = "time"
}
function CaiYunPropView:showCaishenAni()
    local dargonBones = self._panelCaiShenAni:getChildByName("CaishenAni")
    if not dargonBones or self._isShowHappy ~= dargonBones.isShowHappy then
        self._panelCaiShenAni:removeChildByName("CaishenAni")
        local AniInfo = self._isShowHappy and CaishenAniInfoHappy or CaishenAniInfo
        dargonBones = display.playDargonBonesAnimByTimes(AniInfo, 0)
        if not dargonBones then
            return
        end
        dargonBones:setName("CaishenAni")
        dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
        dargonBones.isShowHappy = self._isShowHappy
        self._panelCaiShenAni:addChild(dargonBones)
    end
end

local CaishenBreakIceAniInfo = {
    path = "animation/GameCommon/CaishenPropIce/",
    ske = "cs-grzx-ani_ske_ske.json",
    tex = "cs-grzx-ani_ske_tex.json",
    armatureName = "Armature",
    dragonBonesName = "cs-grzx-ani_ske",
    animationName = "newAnimation"
}
function CaiYunPropView:showCaishenBreakIceAni()
    self._panelAni:removeChildByName("CaishenBreakIceAni")
    local dargonBones = self._panelAni:getChildByName("CaishenBreakIceAni")
    local dargonBones = display.playDargonBonesAnimByTimes(CaishenBreakIceAniInfo, 1)
    if not dargonBones then
        return
    end
    dargonBones:setName("CaishenBreakIceAni")
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    self._panelAni:addChild(dargonBones)
end

local CaishenPropGoldAniInfo = {
    path = "animation/GameCommon/CaishenPropGold/",
    ske = "jinbi_ske_ske.json",
    tex = "jinbi_ske_tex.json",
    armatureName = "armatureName",
    dragonBonesName = "jinbi_ske",
    animationName = "newAnimation"
}
function CaiYunPropView:showCaishenPropGoldAni()
    self._panelAni:removeChildByName("CaishenPropGoldAni")
    local dargonBones = display.playDargonBonesAnimByTimes(CaishenPropGoldAniInfo, 1)
    if not dargonBones then
        return
    end
    dargonBones:setName("CaishenPropGoldAni")
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    self._panelAni:addChild(dargonBones)
end

local PropSpecificAniConf = {
    [CaiYunPropConfig.KW_PROP_ID_JINCHAN] = {
        path = "animation/GameCommon/CaiShenJinChan/",
        ske = "zy_jinchan_ani_ske.json",
        tex = "zy_jinchan_ani_tex.json",
        armatureName = "Armature",
        dragonBonesName = "zy_jinchan_ani",
        animationName = "zy_jinchan_ani"
    },
    [CaiYunPropConfig.KW_PROP_ID_BAICAISHEN] = {
        path = "animation/GameCommon/BaiCaiShen/",
        ske = "qf-baicaishen_ske.json",
        tex = "qf-baicaishen_tex.json",
        armatureName = "armatureName",
        dragonBonesName = "qf-baicaishen",
        animationName = "newAnimation"
    },
    [CaiYunPropConfig.KW_PROP_ID_ZHAOCAISHU] = {
        path = "animation/GameCommon/ZhaoCaiShu/",
        ske = "qf-zhaocaishu_ske_ske.json",
        tex = "qf-zhaocaishu_ske_tex.json",
        armatureName = "armatureName",
        dragonBonesName = "qf-zhaocaishu_ske",
        animationName = "newAnimation"
    }
}
function CaiYunPropView:showPropSpecificAni(propID)
    propID = tonumber(propID)
    self._panelAni:removeChildByName("PropSpecificAni")
    local dargonBones, aniTime = display.playDargonBonesAnimByTimes(PropSpecificAniConf[propID], 1)
    if not dargonBones then
        return
    end
    dargonBones:setName("PropSpecificAni")
    self._imgBg:addChild(dargonBones)
    dargonBones:runAction(cc.Sequence:create(cc.DelayTime:create(aniTime), cc.CallFunc:create(function()
        self:showCaishenPropGoldAni()
        self._isShowHappy = true
        dargonBones:removeSelf()
    end)))
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    local size = self._imgBg:getContentSize()
    dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
end

function CaiYunPropView:updateCaiShenLeftTime(leftTime)
    if not leftTime or leftTime <= 0 then
        self._caishenNormalBg:setVisible(false)
        self._caishenIce:setVisible(true)
        self._textLeftTime:setText("时间已用尽")
        return
    end
    self._caishenNormalBg:setVisible(true)
    self._caishenIce:setVisible(false)
    self:showCaishenAni()
    local hour = math.floor(leftTime / 3600)
    local day = math.floor(hour / 24)
    local min = math.floor((leftTime - hour * 3600) / 60)
    local sec = leftTime - hour * 3600 - min * 60
    hour = hour % 24
    hour = hour > 9 and tostring(hour) or "0" .. hour
    min = min > 9 and tostring(min) or "0" .. min
    sec = sec > 9 and tostring(sec) or "0" .. sec
    if day > 0 then
        self._textLeftTime:setText(day .. "天" .. hour .. ":" .. min .. ":" .. sec)
    else
        self._textLeftTime:setText(hour .. ":" .. min .. ":" .. sec)
    end

    -- self._textLeftTime:setTextColor(leftTime < 600 and cc.c3b(218, 14, 14) or cc.c3b(4, 98, 152))
    self._topTipBg:setVisible(leftTime < 600)

    if leftTime > 0 then
        self._delayID = self:performWithDelay(function()
            self:updateCaiShenLeftTime(leftTime - 1)
        end, 1)
    end
end

return CaiYunPropView 1  