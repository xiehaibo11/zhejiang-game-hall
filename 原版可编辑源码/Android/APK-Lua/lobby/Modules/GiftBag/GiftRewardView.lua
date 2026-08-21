local GiftRewardView = class("GiftRewardView", XH.ViewBase)
local MAX_REWARD = 5

local KW_MAX_TEXT_WIDTH = 200
local KW_MAX_TEXT_FONT_SIZE = 45
local KW_MIN_TEXT_FONT_SIZE = 30

function GiftRewardView:getCSBPath()
    return "cocosStudio/hall/CSB/CommonAward/CommonRewardLayer.csb"
end

function GiftRewardView:getBindingInfo()
    return {
        ["_KW_UI_ANI_REWARD"] = {varName = "_rewardAni"},
        ["_KW_UI_REWARD_ROOT"] = {varName = "_rootNode", onTouchEnded = "onTouchClose"},
        ["_KW_AWARD_SCROLL_VIEW"] = {varName = "_awardScrollView"},
        ["_KW_UI_AWARD_ITEM"] = {varName = "_awardItem"}
    }
end

function GiftRewardView:ctor(awardData, callback)
    GiftRewardView.super.ctor(self)
    self._awardScrollView:setScrollBarEnabled(false)
    self._isLocalFile = false
    self:setCallBack(callback)
    self:show(awardData)
    XH.audioManager:play("ACT_GET_AWARD")
end

function GiftRewardView:initUI(awardData)
    self._awardScrollView:removeAllChildren()
    if awardData then
        local size = self._awardItem:getContentSize()
        local scrollSize = self._awardScrollView:getContentSize()
        local awardCnt = #awardData
        for i = 1, awardCnt do
            local awardItem = self._awardItem:clone()
            self._awardScrollView:addChild(awardItem)
            local award_icon = XH.UITool.seekNodeByName(awardItem, "KW_UI_AWARD_BG")
            if award_icon then
                if awardData[i].propType == "gold" then
                    self._isLocalFile = true
                else
                    self._isLocalFile = false
                end
                self:updateImg(award_icon, awardData[i].url)
            end
            local award_desc = awardItem:getChildByName("KW_UI_TEXT_COUNT")
            if award_desc then
                award_desc:setString(awardData[i].desc)
                self:adaptSuitableFontSize(award_desc,KW_MAX_TEXT_WIDTH,KW_MAX_TEXT_FONT_SIZE,KW_MIN_TEXT_FONT_SIZE)
            end
            awardItem:setPosition(cc.p(size.width * (i - 1), scrollSize.height / 2))
        end

        if awardCnt > MAX_REWARD then
            self._awardScrollView:setContentSize(cc.size((size.width + 20) * MAX_REWARD, scrollSize.height))
            self._awardScrollView:setInnerContainerSize(cc.size(size.width * awardCnt, scrollSize.height))
        else
            self._awardScrollView:setContentSize(cc.size(size.width * awardCnt, scrollSize.height))
            self._awardScrollView:setInnerContainerSize(cc.size(size.width * awardCnt, scrollSize.height))
        end
    end
end

function GiftRewardView:updateGoldImg(node)
    
end

function GiftRewardView:updateImg(node, url)
    if not url then
        return
    end

    if self._isLocalFile then
        local award_icon = XH.UITool.seekNodeByName(node, "KW_UI_IMG_AWARD")
        if award_icon then
            XH.UITool.ignoreContentAdaptWithSize(node, "KW_UI_IMG_AWARD", true)
            XH.UITool.setScale(node, "KW_UI_IMG_AWARD", 0.9)
            award_icon:setVisible(true)
            award_icon:loadTexture(url, ccui.TextureResType.plistType)
        end
        return
    end

    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new():setTouchEnabled(true):setPosition(size.width / 2, size.height / 2):setContentSize(size.width, size.height):setMaxContentSize(cc.size(size.width * 0.8,size.height * 0.8)):addTo(node)
    imageNode:setUrl(url, true)
end

function GiftRewardView:show(awardData)
    self:initUI(awardData)
    self:playAni(awardData)
end

function GiftRewardView:playAni(awardData)
    self._rewardAni:getAnimation():play("in", -1, 0)
    self._rewardAni:getAnimation():setMovementEventCallFunc(handler(self, self.playLoopAni))

    self._awardScrollView:setScale(0.01)
    self._awardScrollView:runAction(cc.ScaleTo:create(0.2, 1.0))
end

function GiftRewardView:playLoopAni(arm, eventType, id)
    if eventType == ccs.MovementEventType.complete and id == "in" then
        self._rewardAni:getAnimation():play("loop", -1, 1)
    end
end

function GiftRewardView:onTouchClose(send, eventType)
    -- 刷新道具
    XH.playerData:flushGoldCoin()
    XH.playerData:flushPlayerDrop()
    if self._callBack then
        self._callBack()
    end
    self:close()
end

function GiftRewardView:setCallBack(callback)
    self._callBack = callback
end

function GiftRewardView:adaptSuitableFontSize(widget, width, maxFontSize, minFontSize)
    if widget == nil then
        return 0
    end

    local curFontSize = maxFontSize
    while curFontSize > minFontSize do
        if widget:getContentSize().width > width then
            curFontSize = curFontSize - 1
            widget:setFontSize(curFontSize)
        else
            break
        end
    end
    return curFontSize
end

return GiftRewardView
