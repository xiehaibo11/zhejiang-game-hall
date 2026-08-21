local RewardView = class("RewardView", XH.ViewBase)
local MAX_REWARD = 5

local KW_MAX_TEXT_WIDTH = 200
local KW_MAX_TEXT_FONT_SIZE = 45
local KW_MIN_TEXT_FONT_SIZE = 18

RewardView.KW_BTN_TYPE ={
    ["CONTINUE"] = "com_btn_continue_game.png",
}


function RewardView:getCSBPath()
    return "cocosStudio/hall/CSB/CommonAward/CommonRewardLayer.csb"
end

function RewardView:getBindingInfo()
    return {
        ["_KW_UI_ANI_REWARD"] = {varName = "_rewardAni"},
        ["_KW_UI_REWARD_ROOT"] = {varName = "_rootNode", onTouchEnded = "onTouchClose"},
        ["_KW_AWARD_SCROLL_VIEW"] = {varName = "_awardScrollView"},
        ["_KW_UI_AWARD_ITEM"] = {varName = "_awardItem"},
        ["_KW_AWARD_TIP_TEXT"] = {varName = "_tipText"},
        ["_KW_AWARD_BTN"] = {varName = "_awardBtn", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchAwardBtn"},
        ["_KW_AWARD_BOTTON_TEXT"] ={varName = "_bottomText"}
    }
end

function RewardView:ctor(awardData, localFile, callback, tipMsg, bntType,bottomTipMsg)
    RewardView.super.ctor(self)
    self._awardScrollView:setScrollBarEnabled(false)
    self._localFile = localFile
    self._tipMsg = tipMsg or ""
    self._bottomTipMsg = bottomTipMsg or ""
    self._showBtn = bntType ~= nil
    if self._showBtn then
        self._awardBtn:loadTexture(bntType, ccui.TextureResType.plistType)
        self._awardBtn:setVisible(true)
    else
        self._awardBtn:setVisible(false)
    end
    self:setCallBack(callback)
    self:show(awardData)
    XH.audioManager:play("ACT_GET_AWARD")
end

function RewardView:initUI(awardData)
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
    if self._tipMsg ~= "" then
        self._tipText:setVisible(true)
        self._tipText:setLocalZOrder(XH.ZORDER.TOPLAYER)
        self._tipText:setString(self._tipMsg)
    end
    if self._bottomTipMsg ~= "" then 
        self._bottomText:setVisible(true)
        self._bottomText:setLocalZOrder(XH.ZORDER.TOPLAYER)
        self._bottomText:setString(self._bottomTipMsg)
    end
end

function RewardView:updateImg(node, url)
    if not url then
        return
    end

    if self._localFile then
        local award_icon = XH.UITool.seekNodeByName(node, "KW_UI_IMG_AWARD")
        if award_icon then
            -- 重复资源删除，兼容，task数据带有reward_前缀
            url = string.gsub(url,'reward_','')
            XH.UITool.ignoreContentAdaptWithSize(node, "KW_UI_IMG_AWARD", true)
            award_icon:setVisible(true)
            award_icon:loadTexture(url, ccui.TextureResType.plistType)
        end
        return
    end

    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new():setTouchEnabled(true):setPosition(size.width / 2, size.height / 2):setContentSize(size.width, size.height):setMaxContentSize(cc.size(size.width * 0.8,size.height * 0.8)):addTo(node)
    imageNode:setUrl(url, true)
end

function RewardView:show(awardData)
    self:initUI(awardData)
    self:playAni(awardData)
end

function RewardView:playAni(awardData)
    self._rewardAni:getAnimation():play("in", -1, 0)
    self._rewardAni:getAnimation():setMovementEventCallFunc(handler(self, self.playLoopAni))

    self._awardScrollView:setScale(0.01)
    self._awardScrollView:runAction(cc.ScaleTo:create(0.2, 1.0))
end

function RewardView:playLoopAni(arm, eventType, id)
    if eventType == ccs.MovementEventType.complete and id == "in" then
        self._rewardAni:getAnimation():play("loop", -1, 1)
    end
end

function RewardView:onTouchClose(send, eventType)
    -- 刷新道具
    if self._tipMsg == "" then
        XH.playerData:flushPlayerDrop()
        XH.playerData:flushGoldCoin()
    end
    if self._callBack and not self._showBtn then
        self._callBack()
    end
    self:close()
end

function RewardView:setCallBack(callback)
    self._callBack = callback
end

function RewardView:adaptSuitableFontSize(widget, width, maxFontSize, minFontSize)
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

function RewardView:onTouchAwardBtn(send, eventType)
    if self._callBack and self._showBtn then
        self._callBack()
    end
    self:close()
end

return RewardView
y