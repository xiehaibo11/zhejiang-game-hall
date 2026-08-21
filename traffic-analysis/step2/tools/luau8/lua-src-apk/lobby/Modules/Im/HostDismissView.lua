local IMHostDismissView = class("IMHostDismissView", XH.ViewBase)

function IMHostDismissView:getCSBPath()
    return "cocosStudio/hall/CSB/IM/IMHostDismiss.csb"
end

function IMHostDismissView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName="KWA_BTND_CLOSE",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onCloseClicked" },
		["_KW_PANEL_BG"] = { varName="_Bg",onTouchEnded = "onCloseClicked" },
		["_KWA_BTND_OK"] = { varName="_btnOk",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnOkClicked" },
        ["_KWA_BTND_CANCLE"] = { varName="_btnCancle",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCancleClicked" },
        ["_KW_UI_CHECK"] = { varName = "_checkBox" },
    }
end

--加载窗口所需资
function IMHostDismissView:ctor(param)
    param = param or {}
	IMHostDismissView.super.ctor(self,param)

    self._roomid = param
    self:initUI()
end

--刷新UI
function IMHostDismissView:initUI()
    if self._checkBox then
        self._checkBox:addEventListener(handler(self, self.onTouchEventCheckBox))
        self:onTouchEventCheckBox(nil, ccui.CheckBoxEventType.selected)
    end
end

function IMHostDismissView:onCloseClicked(send,eventType)
    self:close()
end

function IMHostDismissView:onBtnOkClicked(send,eventType)
    XH.lobby:getModule("Im"):joinRoomAfterDismiss(self._roomid)
    self:close()
end

function IMHostDismissView:onBtnCancleClicked(send,eventType)
    self:close()
end

function IMHostDismissView:onTouchEventCheckBox(send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        cc.UserDefault:getInstance():setBoolForKey("IMManager_host_reply_invite_"..XH.areaData:getLobbyID(), true)
    elseif eventType == ccui.CheckBoxEventType.unselected then
        cc.UserDefault:getInstance():setBoolForKey("IMManager_host_reply_invite_"..XH.areaData:getLobbyID(), false)
    end
end
 
return IMHostDismissView�