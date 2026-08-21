local BackActivityAwardView = class("BackActivityAwardView", XH.ViewBase)

function BackActivityAwardView:getCSBPath()
    return "hall/CSB/Activity/BackActivity/BackActivityAward.csb"
end

function BackActivityAwardView:getBindingInfo()
    return {
        ["_KW_LISTVIEW_AWARD"] = {varName = "_awardListView"},
        ["_KW_BTN_CLOSE"] = {varName = "KW_BTN_CLOSE", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BG"] = {varName = "KW_BG", onTouchEnded = "onTouchEventClose"},
        ["_KW_BGANI_NODE"] = {varName = "_aniNode"},
        ["_KW_TOPANI_NODE"] = {varName = "_aniTopNode"},
        ["_KW_TITLEANI_NODE"] = {varName = "_aniTitleNode"},
        ["_KW_TEXT_TIPS"] = {varName = "_textTip"},
        ["_KW_STEN"] = {varName = "_spSten"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
        ["_KW_IMG_TITLE_LIGHT"] = {varName = "_imgLight"},
        ["_KW_BTN_GO_USE"] = {varName = "_useBtn", onTouchEnded = "onTouchEventGoBag"},
        ["_KW_BTN_PROMOTE_DOUBLE"] = {varName = "_promoteDoubleBtn", onTouchEnded = "onTouchEventPromoteDouble"}
    }
end

local D = {KW_PANEL_ITEM = "_KW_PANEL_ITEM", KW_PIC_AWARD = "_KW_PIC_AWARD", KW_TEXT_NAME = "_KW_TEXT_NAME"}

function BackActivityAwardView:getProxyEvents()
    return {{module = XH.lobby:getModule("BackActivity"), eventName = "BackActivityDownloadImage", callBack = "onDownloadImageCallBack"}}
end

function BackActivityAwardView:ctor(param, awardData)
    param = param or {}
    BackActivityAwardView.super.ctor(self, param)
    self._downloadImageUrlList = {}
    self._downloadImageNodeList = {}
    self._isPromote = awardData.isPromote
    self._closeFunc = param.closeFunc

    self:init(awardData)
    XH.audioManager:play("ACT_GET_AWARD")

    XH.lobby:getModule("BackActivity"):fulshPlayerProp()

    self:downloadImage()
    if awardData.showUseBtn then
        self._useBtn:setVisible(true)
        self._useFunc = awardData.useFunc
        self:delayShow(self._useBtn, 0.1 * #awardData + 0.5)
    end
    -- 推广活动
    if self._promoteDoubleBtn then
        if awardData.isPromote and awardData.isDouble then
            self._nowDate = awardData.nowDate
            self._awardType = awardData.award_type
            self._teaNumber = awardData.teaNumber
            self._promoteDoubleBtn:setVisible(true)
            self:delayShow(self._promoteDoubleBtn, 0.1 * #awardData + 0.5)
        else
            self._promoteDoubleBtn:setVisible(false)
        end
    end
    if awardData.isPromote then
        self._textTip:setVisible(false)
    end
end

function BackActivityAwardView:initAni()
    self:addSpine(self._aniNode, "zzb_jbdt_gxhd", "gx_cx", false, function(armature)
        armature:setAnimation(0, "gx_loop", true)
    end)
    self:addSpine(self._aniTopNode, "zzb_ty_jbdl", "animation", false)
    self:addSpine(self._aniTitleNode, "zzb_ty_btgx", "cx", false, function(armature)
        armature:setAnimation(0, "loop", true)
    end)

    -- local clippingNode = cc.ClippingNode:create()
    -- clippingNode:setPosition(0, 0)
    -- clippingNode:setStencil(self._imgTitle)
    -- clippingNode:setAlphaThreshold(0.1) -- 设置 alpha 阈值
    -- self._imgLight:removeFromParent()
    -- clippingNode:addChild(self._imgLight)
    -- self._imgTitle:getParent():addChild(clippingNode)
    self._imgLight:setVisible(false)
    self._imgTitle:setPositionX(250)
    self._imgTitle:setVisible(false)
    self._imgTitle:runAction(cc.Sequence:create(cc.DelayTime:create(0.2), cc.Show:create(), 
        cc.EaseBackOut:create(cc.MoveBy:create(0.5, cc.p(-250,0))), cc.CallFunc:create(function()
            -- self._imgLight:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1.5), 
            --     cc.MoveTo:create(0.5, cc.p(280, 380)),cc.CallFunc:create(function()
            -- self._imgLight:setPosition(-280, 380)
        -- end))))
    end)))
end

function BackActivityAwardView:delayShow(node, delay)
    node:setScale(0)
    node:setOpacity(0)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay), cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(0.2, 1)), cc.FadeIn:create(0.2))))
end

function BackActivityAwardView:init(data)
    if not data then
        return
    end
    self:initAni()
    local rechargeListView = self._awardListView
    local itemPanel = ccui.Helper:seekWidgetByName(rechargeListView, D.KW_PANEL_ITEM)
    rechargeListView:setItemModel(clone(itemPanel))
    rechargeListView:removeAllChildren()
    rechargeListView:removeAllItems()
    local isOnlyShowFeeAni = false
    for i = 1, #data.prize_names do
        if data.prize_names[i] and string.match(data.prize_names[i], "话费") then
            isOnlyShowFeeAni = true
            break
        end
    end
    for i = 1, #data.prize_names do
        rechargeListView:pushBackDefaultItem()
        local item = rechargeListView:getItems()[i]
        local body = XH.UITool.seekNodeByName(item, "_KW_BODY")
        local awardPic = XH.UITool.seekNodeByName(item, "_KW_PIC_AWARD")
        local txtNum = XH.UITool.seekNodeByName(item, "_KW_TEXT_NUM")
        local aniNode = XH.UITool.seekNodeByName(item, "_KW_ANI_NODE")
        if isOnlyShowFeeAni then
            if data.prize_names[i] and string.match(data.prize_names[i], "话费") then
                self:addSpine(aniNode, "zzb_ty_jlgx", "animation", true)
                aniNode:setScale(1)
            end
        else
            self:addSpine(aniNode, "zzb_ty_jlgx", "animation", true)
            aniNode:setScale(1)
        end
        self:setText(item, D.KW_TEXT_NAME, data.prize_names[i])
        if data.prize_count and data.prize_count[i] then
            txtNum:setString(data.prize_count[i])
        else
            txtNum:setString("")
        end
        self:delayShow(body, 0.1 * i)
        if awardPic then
            if data.prize_pic and data.prize_pic[i] then
                local sf = cc.SpriteFrameCache:getInstance():getSpriteFrame(data.prize_pic[i])
                if sf then
                    local sfSize = sf:getOriginalSize()
                    local showSize = awardPic:getContentSize()
                    awardPic:ignoreContentAdaptWithSize(true)
                    local minScale = math.min(showSize.width / sfSize.width, showSize.height / sfSize.height)
                    awardPic:loadTexture(data.prize_pic[i], ccui.TextureResType.plistType)
                    awardPic:setScale(minScale)
                end
            else
                self:addDownloadImageList(data.image_urls[i], awardPic)
                if self._isPromote and data.image_urls[i] == "" then
                    awardPic:setVisible(false)
                    local promotePic = XH.UITool.seekNodeByName(item, "_KW_PROMOTE_PIC")
                    if promotePic then
                        promotePic:setVisible(true)
                    end
                end
            end
        end
    end

    local Items = rechargeListView:getItems()
    if Items and #Items > 0 then
        local ItemSize = Items[1]:getContentSize().width * #Items + rechargeListView:getItemsMargin() * (#Items - 1)
        rechargeListView:setContentSize(ItemSize, Items[1]:getContentSize().height)
    end
    if data.text and data.text ~= "" then
        self._textTip:setString(data.text)
    end
    self:delayShow(self._textTip, 0.2)
end

function BackActivityAwardView:addSpine(node, fileName, aniName, loop, completFunc)
    local armature = display.playDargonBonesSpine({
        path = "animation/Lobby/Base/zzb_jbdt_gxhd/",
        tex = fileName .. ".json",
        ske = fileName .. ".atlas",
        armatureName = aniName,
        loop = loop,
        scale = 1
    })
    if armature then
        if completFunc then
            armature:registerSpineEventHandler(function(event)
                if event.type == 'complete' then
                    completFunc(armature)
                end
            end, sp.EventType.ANIMATION_COMPLETE)
        end
        node:addChild(armature)
    end
    return armature
end

function BackActivityAwardView:onTouchEventClose(send, eventType)
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self:close()
end

function BackActivityAwardView:onTouchEventPromoteDouble(send, eventType)
    if self._nowDate ~= nil and self._awardType ~= nil and self._teaNumber ~= nil then
        local data = {}
        data[#data + 1] = self._nowDate
        XH.lobby:getModule("Promote"):reqSpreadAward(self._teaNumber, data, self._awardType)
    end
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PROMOTE_ACT_CLICK7, {userid = XH.playerData:getNumberID()})
    XH.lobby:getModule("Promote"):shreToWx()
    self:close()
end

function BackActivityAwardView:close()
    if self._closeFunc then
        self._closeFunc()
    end
    BackActivityAwardView.super.close(self)
end

function BackActivityAwardView:setText(node, name, text)
    local childNode = ccui.Helper:seekWidgetByName(node, name)
    if childNode then
        childNode:setString(text)
    end
end

function BackActivityAwardView:loadTexture(node, name, image, Ttype)
    local childNode = ccui.Helper:seekWidgetByName(node, name)
    if childNode then
        childNode:loadTexture(image, Ttype)
    end
end

function BackActivityAwardView:addDownloadImageList(url, node)
    if url and node then
        local find = false
        for key, urlVal in ipairs(self._downloadImageUrlList) do
            if urlVal == url then
                table.insert(self._downloadImageNodeList[key], node)
                find = true
                break
            end
        end
        if not find then
            table.insert(self._downloadImageUrlList, url)
            self._downloadImageNodeList[#self._downloadImageUrlList] = {}
            table.insert(self._downloadImageNodeList[#self._downloadImageUrlList], node)
        end
    end
end

function BackActivityAwardView:onDownloadImageCallBack(event)
    if event then
        local imagePath = event.data.imagePath
        local url = event.data.url

        for key, urlVal in ipairs(self._downloadImageUrlList) do
            if urlVal == url then
                for _, node in pairs(self._downloadImageNodeList[key]) do
                    local showSize = node:getContentSize()
                    node:ignoreContentAdaptWithSize(true)
                    node:loadTexture(imagePath, ccui.TextureResType.localType)
                    local sfSize = node:getContentSize()
                    local minScale = math.min(showSize.width / sfSize.width, showSize.height / sfSize.height)
                    node:setScale(minScale)
                    node:setVisible(true)
                end
                break
            end
        end
    end
end

function BackActivityAwardView:downloadImage()
    for _, url in pairs(self._downloadImageUrlList) do
        XH.lobby:getModule("BackActivity"):reqDownloadImage(url)
    end
end

function BackActivityAwardView:onTouchEventGoBag()
    if self._useFunc then
        if self._useFunc(handler(self, self.close)) then
            self:close()
        end
    else
        XH.viewManager:openView("GoldHallBagView", nil, {openType = "Lobby"})
        self:close()
    end
end

return BackActivityAwardView
h-