local BackActivityAwardView = class("BackActivityAwardView", XH.ViewBase)

function BackActivityAwardView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BackActivity/BackActivityAward.csb"
end

function BackActivityAwardView:getBindingInfo()
    return {
        ["_KW_LISTVIEW_AWARD"] = { varName = "_awardListView" },
        ["_KW_BTN_CLOSE"] = { varName = "KW_BTN_CLOSE", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BG"] = { varName = "KW_BG", onTouchEnded = "onTouchEventClose" },
        ["_KW_ANI_BG"] = { varName = "_rewardAni" },
        ["_KW_TEXT_TIPS"] = { varName = "_textTip" },
        ["_KW_BTN_GO_USE"] = { varName = "_useBtn", onTouchEnded = "onTouchEventGoBag"},
        ["_KW_BTN_PROMOTE_DOUBLE"] = { varName = "_promoteDoubleBtn", onTouchEnded = "onTouchEventPromoteDouble"}
    }
end

local D = {
    KW_PANEL_ITEM = "_KW_PANEL_ITEM",
    KW_PIC_AWARD = "_KW_PIC_AWARD",
    KW_TEXT_NAME = "_KW_TEXT_NAME",
}

function BackActivityAwardView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("BackActivity"), eventName = "BackActivityDownloadImage", callBack = "onDownloadImageCallBack" },
    }
end

function BackActivityAwardView:ctor(param, awardData)
    param = param or { }
    BackActivityAwardView.super.ctor(self, param)
    self._downloadImageUrlList = {}
    self._downloadImageNodeList = {}
    self._isPromote = awardData.isPromote

    self:init(awardData)
    XH.audioManager:play("ACT_GET_AWARD")

    self._rewardAni:getAnimation():play("in", -1, 0)
    self._rewardAni:getAnimation():setMovementEventCallFunc( function(arm, eventType, id)
        if eventType == ccs.MovementEventType.complete and id == "in" then
            self._rewardAni:getAnimation():play("loop", -1, 1)
        end
    end )

    XH.lobby:getModule("BackActivity"):fulshPlayerProp()

    self:downloadImage()
    if awardData.showUseBtn then
        self._useBtn:setVisible(true)
    end
    -- 推广活动
    if awardData.isPromote and awardData.isDouble then
        self._nowDate = awardData.nowDate
        self._awardType = awardData.award_type
        self._teaNumber = awardData.teaNumber
        self._promoteDoubleBtn:setVisible(true)
    else
        self._promoteDoubleBtn:setVisible(false)
    end
    if awardData.isPromote then
        self._textTip:setVisible(false)
    end
end

function BackActivityAwardView:init(data)
    if not data then
        return
    end
    local rechargeListView = self._awardListView
    local itemPanel = ccui.Helper:seekWidgetByName(rechargeListView, D.KW_PANEL_ITEM)
    rechargeListView:setItemModel(clone(itemPanel))
    rechargeListView:removeAllChildren()
    rechargeListView:removeAllItems()
    for i = 1, #data.prize_names do
        rechargeListView:pushBackDefaultItem()
        local Items = rechargeListView:getItems()
        self:setText(Items[i], D.KW_TEXT_NAME, data.prize_names[i])

        local awardPic = Items[i]:getChildByName("_KW_PIC_AWARD")
        if awardPic then
            self:addDownloadImageList(data.image_urls[i], awardPic)
            if self._isPromote and data.image_urls[i] == "" then
                awardPic:setVisible(false)
                local promotePic = Items[i]:getChildByName("_KW_PROMOTE_PIC")
                if promotePic then
                    promotePic:setVisible(true)
                end
            end
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
        data[#data+1] = self._nowDate
        XH.lobby:getModule("Promote"):reqSpreadAward(self._teaNumber, data, self._awardType)
    end
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PROMOTE_ACT_CLICK7, {userid = XH.playerData:getNumberID()})
    XH.lobby:getModule("Promote"):shreToWx()
    self:close()
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
            self._downloadImageNodeList[#self._downloadImageUrlList] = { }
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
                    node:loadTexture(imagePath, ccui.TextureResType.localType)
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
    if XH.areaData:isSupportNewBagSystem() then
        XH.viewManager:openView("BagMainViewNew")
    else
        XH.viewManager:openView("BagMainView")
    end
    self:close()
end

return BackActivityAwardView
