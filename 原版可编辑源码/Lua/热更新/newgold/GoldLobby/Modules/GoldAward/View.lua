local GoldAwardView = class("GoldAwardView", NG.ViewBase)

function GoldAwardView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/Award/GoldAward.csb"
end

function GoldAwardView:getBindingInfo()
    return {
        --
        ["_KW_LISTVIEW_AWARD"] = {varName = "_awardListView"},
        ["_KW_BTN_CLOSE"] = {varName = "KW_BTN_CLOSE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BG"] = {varName = "KW_BG", onTouchEnded = "onTouchEventClose"},
        ["_KW_ANI_BG"] = {varName = "_rewardAni"},
        ["_KW_TEXT_TIPS"] = {varName = "_textTip"},
        ["_KW_BGANI_NODE"] = {varName = "_aniNode"},
        ["_KW_TOPANI_NODE"] = {varName = "_aniTopNode"},
        ["_KW_TITLEANI_NODE"] = {varName = "_aniTitleNode"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
    }
end

local D = {KW_PANEL_ITEM = "_KW_PANEL_ITEM", KW_PIC_AWARD = "_KW_PIC_AWARD", KW_TEXT_NAME = "_KW_TEXT_NAME"}

function GoldAwardView:getProxyEvents()
    return {{module = NG.goldLobby:getModule("GoldAward"), eventName = "BackActivityDownloadImage", callBack = "onDownloadImageCallBack"}}
end

function GoldAwardView:ctor(param, awardData)
    param = param or {}
    GoldAwardView.super.ctor(self, param)
    self._downloadImageUrlList = {}
    self._downloadImageNodeList = {}

    self:init(awardData)
    NG.audioManager:play("ACT_GET_AWARD")
    NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()

    self:downloadImage()
end

function GoldAwardView:init(data)
    if not data then
        return
    end
    self:initAni()
    local rechargeListView = self._awardListView
    local itemPanel = ccui.Helper:seekWidgetByName(rechargeListView, D.KW_PANEL_ITEM)
    rechargeListView:setItemModel(clone(itemPanel))
    rechargeListView:removeAllChildren()
    rechargeListView:removeAllItems()
    for i = 1, #data.prize_names do
        rechargeListView:pushBackDefaultItem()
        local Items = rechargeListView:getItems()
        self:setText(Items[i], D.KW_TEXT_NAME, data.prize_names[i])
        local item = Items[i]
        local aniNode = ccui.Widget:create()
        aniNode:setPosition(cc.p(item:getContentSize().width/2, item:getContentSize().height/2 + 5))
        self:addSpine(aniNode, "zzb_ty_jlgx", "animation", true)
        local body = item:getChildByName("_KW_BODY")
        body:addChild(aniNode)
        self:delayShow(body, 0.1 * i)

        local awardPic = ccui.Helper:seekWidgetByName(Items[i], "_KW_PIC_AWARD")
        if awardPic then
            self:addDownloadImageList(data.image_urls[i], awardPic)
        end
    end

    local Items = rechargeListView:getItems()
    if Items and #Items > 0 then
        local ItemSize = Items[1]:getContentSize().width * #Items
        rechargeListView:setContentSize(ItemSize, Items[1]:getContentSize().height)
    end
    if data.text and data.text ~= "" then
        self._textTip:setString(data.text)
    end
    self:delayShow(self._textTip, 0.2)
end


function GoldAwardView:addSpine(node, fileName, aniName, loop, completFunc)
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
function GoldAwardView:initAni()
    self:addSpine(self._aniNode, "zzb_jbdt_gxhd", "gx_cx", false, function(armature)
        armature:setAnimation(0, "gx_loop", true)
    end)
    self:addSpine(self._aniTopNode, "zzb_ty_jbdl", "animation", false)
    self:addSpine(self._aniTitleNode, "zzb_ty_btgx", "cx", false, function(armature)
        armature:setAnimation(0, "loop", true)
    end)

    local endPos = self._imgTitle:getPositionX()
    self._imgTitle:setPositionX(endPos + 250)
    self._imgTitle:setVisible(false)
    self._imgTitle:runAction(cc.Sequence:create(cc.DelayTime:create(0.2), cc.Show:create(), 
        cc.EaseBackOut:create(cc.MoveBy:create(0.5, cc.p(-250,0))), cc.CallFunc:create(function()
    end)))
end

function GoldAwardView:delayShow(node, delay)
    node:setScale(0)
    node:setOpacity(0)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay), cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(0.2, 1)), cc.FadeIn:create(0.2))))
end

function GoldAwardView:onTouchEventClose(send, eventType)
    self:close()
end

function GoldAwardView:setText(node, name, text)
    local childNode = ccui.Helper:seekWidgetByName(node, name)
    if childNode then
        childNode:setString(text)
    end
end

function GoldAwardView:loadTexture(node, name, image, Ttype)
    local childNode = ccui.Helper:seekWidgetByName(node, name)
    if childNode then
        childNode:loadTexture(image, Ttype)
    end
end

function GoldAwardView:addDownloadImageList(url, node)
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

function GoldAwardView:onDownloadImageCallBack(event)
    if event then
        local imagePath = event.data.imagePath
        local url = event.data.url

        for key, urlVal in ipairs(self._downloadImageUrlList) do
            if urlVal == url then
                for _, node in pairs(self._downloadImageNodeList[key]) do
                    node:loadTexture(imagePath, ccui.TextureResType.localType)
                    node:setVisible(true)
                end
                break
            end
        end
    end
end

function GoldAwardView:downloadImage()
    for _, url in pairs(self._downloadImageUrlList) do
        NG.goldLobby:getModule("GoldAward"):reqDownloadImage(url)
    end
end

return GoldAwardView
