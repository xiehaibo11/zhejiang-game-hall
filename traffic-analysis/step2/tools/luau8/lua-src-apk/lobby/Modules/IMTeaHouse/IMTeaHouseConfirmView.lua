local IMTeaHouseConfirmView = class("IMTeaHouseConfirmView", XH.ViewBase)
function IMTeaHouseConfirmView:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/IMTeaHouseConfirmLayer.csb"
end

function IMTeaHouseConfirmView:getBindingInfo()
    return {       
        ["_KWA_BTND_CLOSE"] = {varName = "_onClosebtn",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        ["_KW_BTN_CANCEL"] = {varName = "_onJoinRoom",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        ["_KW_BTN_OK"] = {varName = "_onCreateRoom",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchOK"},
        ["_KW_TEXT_INFO"] = {varName = "_textInfo"},
        ["_KW_CHECK_BOX"] = {varName = "_checkBox"},
        
    }
end

function IMTeaHouseConfirmView:ctor(param)
    IMTeaHouseConfirmView.super.ctor(self)
    self._dofunc = param.doAction 
    self._text = param.text
    self._textInfo:setText(self._text)
end

function IMTeaHouseConfirmView:onTouchClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function IMTeaHouseConfirmView:onTouchOK(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local isSelected = self._checkBox:isSelected()
    cc.UserDefault:getInstance():setBoolForKey("IMListLayer_Skip_TipLayer",isSelected)
    self._dofunc()
    if not tolua.isnull(self) and self.close then
        self:close()
    end
end

return IMTeaHouseConfirmView�