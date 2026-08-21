-- 转盘活动界面
local ViewBase = require("lobby.Modules.BackActivity.AwardView") 
local AwardView = class("AwardView", ViewBase)


function AwardView:getCSBPath()
    return "hall/CSB/Activity/Double12_2025/Double12AwardLayer.csb"
end

function AwardView:getBindingInfo()
    return {
        ["_KW_LISTVIEW_AWARD"] = {varName = "_awardListView"},
        ["_KW_BTN_CLOSE"] = {varName = "KW_BTN_CLOSE", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_SURE"] = {varName = "_btnSure", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        -- ["_KW_BG"] = {varName = "KW_BG", onTouchEnded = "onTouchEventClose"},
        ["_KW_BGANI_NODE"] = {varName = "_aniNode"},
        ["_KW_TOPANI_NODE"] = {varName = "_aniTopNode"},
        ["_KW_TITLEANI_NODE"] = {varName = "_aniTitleNode"},
        ["_KW_TEXT_TIPS"] = {varName = "_textTip"},
        ["_KW_STEN"] = {varName = "_spSten"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
        ["_KW_IMG_TITLE_LIGHT"] = {varName = "_imgLight"},
        ["_KW_IMG_TIPBG"] = {varName = "_imgTipBg"},
        ["_KW_BTN_GO_USE"] = {varName = "_useBtn", onTouchEnded = "onTouchEventGoBag"},
        ["_KW_BTN_KF"] = {varName = "_btnKF", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventKF"}
    }
end

function AwardView:ctor(param, awardData)
    ViewBase.ctor(self, param, awardData)
    self._isJinliCard = true-- param.isJinliCard
    self._btnKF:setVisible(self._isJinliCard)
    if self._isJinliCard then
        self._btnSure:setPositionX(-280)
        self._btnKF:setPositionX(280)
        -- self._awardListView:setPositionY(-20)
        -- self._imgTipBg:setContentSize(1100, 124)
    -- else
    --     self._awardListView:setPositionY(0)
    --     self._imgTipBg:setContentSize(1100, 84)
    --     self._textTip:setPositionY(42)
    end

    self._textTip:setVisible(false)
    local richText = ccui.RichText:createWithXML(awardData.text, {})
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:ignoreContentAdaptWithSize(false)
    richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
    local contentSize = self._textTip:getContentSize()
    richText:setContentSize(contentSize)
    self._textTip:getParent():addChild(richText)
    richText:setPosition(cc.p(self._textTip:getPosition()))
end


function AwardView:onTouchEventClose(send, eventType)
    self:close()
end

function AwardView:onTouchEventKF(send, eventType)
    -- XH.lobby:getModule("Double12"):toWXPublic()
    XH.lobby:getModule("CusService"):oponCusServerView(nil,"DOUBLE12")
end

return AwardView
k
