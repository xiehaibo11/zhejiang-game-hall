-- 选择需要创建的比赛场
local TeaHouseQuitTeaHouseLayer = class("TeaHouseQuitTeaHouseLayer",TeaHouse.View)

TeaHouseQuitTeaHouseLayer.RAW_RES_BINDING_CSB =
{
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseQuitTeaHouseLayer.csb",
    binding = {
        ["_KW_BTN_QUIT_CLOSE"] = {tag = "_KW_BTN_QUIT_CLOSE",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_BTN_QUIT_CANCEL"] = {tag = "_KW_BTN_QUIT_CANCEL",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_BTN_QUIT_SURE"] = {tag = "_KW_BTN_QUIT_SURE",name = "_btnSure",class = "btn",events = "onQuitClicked"},
        ["_KW_BTN_QUIT_YES_NO"] = {tag = "_KW_BTN_QUIT_YES_NO",name = "_btnYesNo"},
        ["_KW_USER_DEAL_TEXT"] = {tag = "_KW_USER_DEAL_TEXT",name = "_textUserDeal"},
        ["_KW_QUIT_TEXT"] = {tag = "_KW_QUIT_TEXT",name = "_textQuit"},
        ["_KW_DISSOLVE_TEXT"] = {tag = "_KW_DISSOLVE_TEXT",name = "_textDissolve"},
    }
}

function TeaHouseQuitTeaHouseLayer:ctor(nTeaNum)
    TeaHouseQuitTeaHouseLayer.super.ctor(self)
    self:initEvent()

    self:initUI()
    self._btnYesNo:addEventListener(handler(self, self.onYesNoClicked))
    self.nTeaNum = nTeaNum
end

function TeaHouseQuitTeaHouseLayer:initUI()
    self._textQuit:removeAllChildren()
    textStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='50' color='#CD8551'>您正在退出比赛场，退出后您在<font color='#C54F30'>该比赛场的可用房卡数据不保留，再次进入后不再恢复，</font>请谨慎考虑！</font>"
    local richText = ccui.RichText:createWithXML(textStr, {})
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:ignoreContentAdaptWithSize(false)
    richText:setContentSize(self._textQuit:getContentSize())
    richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
    richText:setPosition(cc.p(self._textQuit:getContentSize().width / 2, self._textQuit:getContentSize().height / 2))
    self._textQuit:addChild(richText)

    TeaHouse.BridgeUI.setText(self._textDissolve, "KW_TEXT_1_0", TeaHouse.BridgeUI.getText(self._textDissolve, "KW_TEXT_1_0"))
end

function TeaHouseQuitTeaHouseLayer:initEvent()
    local teahouseList = TeaHouse.manager.teahouseGeneral
    self:createListener(teahouseList)
    :addEventListener(teahouseList.EVENT_CLOSE_QUIT_TEAHOUSE_VIEW, handler(self, self.onCloseView))    
end

function TeaHouseQuitTeaHouseLayer:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    self:close()
end

function TeaHouseQuitTeaHouseLayer:onYesNoClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    self._btnSure:setEnabled(send:isSelected())
    self._btnSure:setBright(send:isSelected())
end

function TeaHouseQuitTeaHouseLayer:onQuitClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    TeaHouse.manager.teahouseGeneral:quitTeaHouse(self.nTeaNum)
end

function TeaHouseQuitTeaHouseLayer:onCloseView(send, eventType)
    self:close()
end

return TeaHouseQuitTeaHouseLayer
�