local PersonalCenterTipLayer = class("PersonalCenterTipLayer", XH.ViewBase)

function PersonalCenterTipLayer:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterTipLayer.csb"
end

function PersonalCenterTipLayer:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName="_btnBack",type = XH.UI_TYPE.IMAGE_TOBUTTON,onTouchEnded = "close"},
        ["_KW_BG"] = {varName="_BG"},
        ["_KW_BTN_OK"] = {varName="_btnOk",type = XH.UI_TYPE.IMAGE_TOBUTTON,onTouchEnded = "onTouchEventOkBtn"},
        ["_KW_BTN_CANCEL"] = {varName="_btnCancel",type = XH.UI_TYPE.IMAGE_TOBUTTON,onTouchEnded = "onTouchEventCancelBtn"},
        ["_KW_NODE_PLAYER_INFO"] = {varName="_nodePlayerInfo"},
        ["_KW_TEXT_TIP_1"] = {varName="_textTip1"},
        ["_KW_TEXT_TIP_2"] = {varName="_textTip2"},        
    }
end

function PersonalCenterTipLayer:ctor(showData)
	PersonalCenterTipLayer.super.ctor(self,showData)
    self:initBackGround()

    self._showData = showData
    self._textTip1:setString(self._showData.tipText1 or "")
    self._textTip2:setString(self._showData.tipText2 or "")
    if self._showData.showBtn == "ok" then
        self._btnOk:setVisible(true)
        self._btnCancel:setVisible(false)
        self._btnOk:setPositionX(self._BG:getContentSize().width * 0.5)
    elseif self._showData.showBtn == "cancel" then
        self._btnOk:setVisible(false)
        self._btnCancel:setVisible(true)
        self._btnCancel:setPositionX(self._BG:getContentSize().width * 0.5)
    else
        self._btnOk:setVisible(true)
        self._btnCancel:setVisible(true)
        self._btnOk:setPositionX(self._BG:getContentSize().width * 0.7)
        self._btnCancel:setPositionX(self._BG:getContentSize().width * 0.3)
    end
    if self._showData.node then
        local cloneNode = self._showData.node:clone()
        self._nodePlayerInfo:addChild(cloneNode)
        cloneNode:setPosition(cc.p(0,0))
    end
    if self._showData.richText then
        self._textTip1:setString("")
        local richText = ccui.RichText:createWithXML(self._showData.richText, {})
        richText:setAnchorPoint(cc.p(0.5, 1))
        richText:ignoreContentAdaptWithSize(false)
        richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
        richText:setContentSize(self._textTip1:getContentSize())
        richText:setPosition(cc.p(self._textTip1:getContentSize().width/2, self._textTip1:getContentSize().height))
        self._textTip1:addChild(richText)
    end
end

function PersonalCenterTipLayer:onTouchEventOkBtn(send, eventType)
    if self._showData.okFun then
        self._showData.okFun()
    end
    self:close()
end

function PersonalCenterTipLayer:onTouchEventCancelBtn(send, eventType)
    if self._showData.cancelFun then
        self._showData.cancelFun()
    end
    self:close()
end

return PersonalCenterTipLayer