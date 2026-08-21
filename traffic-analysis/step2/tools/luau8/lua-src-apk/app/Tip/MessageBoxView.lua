
local MessageBoxView = class("MessageBoxView", XH.ViewBase)
local showArea = {
    [1] = "您输入的房间号有误，请重新输入",
    [2] = "该亲友圈不存在，请确认口令重新输入",
}

function MessageBoxView:getCSBPath()
    return "cocosStudio/hall/CSB/MessageBox.csb"
end

function MessageBoxView:getBindingInfo()
    return {
        ["_KWA_BTND_CANCEL_2"] = {varName="KWA_BTND_CANCEL_2",type = XH.UI_TYPE.BUTTON,onTouchEnded = "on_KWA_BTND_CANCEL_2"},
		["_KWA_BTND_CLOSE"] = {varName="KWA_BTND_CLOSE",type = XH.UI_TYPE.BUTTON,onTouchEnded = "on_KWA_BTND_CLOSE"},
		["_KW_PANEL_BG"] = {varName="_Bg",onTouchEnded = "on_KWA_BTND_BG"},
		["_KWA_BTND_OK_1"] = {varName="KWA_BTND_OK_1",type = XH.UI_TYPE.BUTTON,onTouchEnded = "on_KWA_BTND_OK_1"},
		["_KWA_BTND_OK_2"] = {varName="KWA_BTND_OK_2",type = XH.UI_TYPE.BUTTON,onTouchEnded = "on_KWA_BTND_OK_2"},
		["_KWA_PANEL_BUTTON_LIST_1"] = {varName="KWA_PANEL_BUTTON_LIST_1"},
		["_KWA_PANEL_BUTTON_LIST_2"] = {varName="KWA_PANEL_BUTTON_LIST_2"},
        ["_KWA_MSG_LABEL"] = {varName="KWA_MSG_LABEL"},
        ["_KWA_MSG_LABEL_LEFT"] = {varName="_KWA_MSG_LABEL_LEFT"},
        
        ["_KW_IMG_AREA"] = { varName = "_areaImage" },
        ["_KW_TEXT_AREA"] = { varName = "_areaText" },
        ["_KW_BTN_CHECK"] = { varName = "_btnCheck" }
    }
end

--加载窗口所需资
function MessageBoxView:ctor(param)
    param = param or {}
	MessageBoxView.super.ctor(self,param)
    self.bEnableBGTouch = true
    self.currentType = XH.TIP_LAYER_TYPE.OK
    self.okCB = nil
    self.cancelCB = nil
    self.closeCB = nil
    self.showCheckBox = param.showCheckBox or false

    self.currentType = param.enumType
    if param.enumType == XH.TIP_LAYER_TYPE.OK then
        self.bEnableBGTouch = true
        self.closeCB = param.funcClose
    elseif param.enumType == XH.TIP_LAYER_TYPE.OK_NO_CLOSE then
        self.bEnableBGTouch = false
    elseif param.enumType == XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE then
        self.bEnableBGTouch = false
    elseif param.enumType == XH.TIP_LAYER_TYPE.OK_CANCEL then
        self.bEnableBGTouch = true
        --self.closeCB = param.funcCancel
    end
    self.KWA_MSG_LABEL:setString(param.msg)

    if param.bLeft then
        if self._KWA_MSG_LABEL_LEFT then
            self._KWA_MSG_LABEL_LEFT:setVisible(true)
            self._KWA_MSG_LABEL_LEFT:setString(param.msg)
        end
        self.KWA_MSG_LABEL:setVisible(false)
    else
        if self._KWA_MSG_LABEL_LEFT then
            self._KWA_MSG_LABEL_LEFT:setVisible(false)
        end
        self.KWA_MSG_LABEL:setVisible(true)
    end

    self.okCB = param.funcOK
    self.cancelCB = param.funcCancel
    self:initUI(param.msg)
end

--刷新UI
function MessageBoxView:initUI(msgString)
    local bPanel1Enable = self.currentType == XH.TIP_LAYER_TYPE.OK or self.currentType == XH.TIP_LAYER_TYPE.OK_NO_CLOSE
    local bPanel2Enable = self.currentType == XH.TIP_LAYER_TYPE.OK_CANCEL or self.currentType == XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE
    local bCloseButtonEnable = self.currentType == XH.TIP_LAYER_TYPE.OK or self.currentType == XH.TIP_LAYER_TYPE.OK_CANCEL
    self.KWA_PANEL_BUTTON_LIST_1:setVisible(bPanel1Enable)
    self.KWA_PANEL_BUTTON_LIST_2:setVisible(bPanel2Enable)
    self.KWA_BTND_CLOSE:setVisible(bCloseButtonEnable)
    if self._btnCheck then
        self._btnCheck:setVisible(self.showCheckBox)
    end

    local isShowArea = false
    for _, msg in pairs(showArea) do
        if msg == msgString then
            isShowArea = true
            break
        end
    end
    if isShowArea then
        if XH.ChannelTool.judgeIsChannel() then
            if self._areaImage and self._areaText then
                self._areaText:setString("")
                self._areaImage:setVisible(false)
            end
        else
            if self._areaImage and self._areaText then
                local areaString = XH.areaData:getAreaName()
                self._areaText:setString(areaString)
                self._areaImage:setVisible(true)
            end
        end
    end
end

--显示窗口
function MessageBoxView:showSelf(zOrder)
    local zorder = zOrder or XH.ZORDER.TIPLAYER
	local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)
	end
end

------开始业务逻辑------

local function callOnce(self, funcName)
    local func = self[funcName]
    if func then
        if self._btnCheck then 
            func(self.showCheckBox and self._btnCheck:isSelected())
        else
            func()
        end
        self[funcName] = nil
    end
end

function MessageBoxView:on_KWA_BTND_CANCEL_2(send,eventType)
	print("called KWA_BTND_CANCEL_2")
    callOnce(self, "cancelCB")
    self:close()
end

function MessageBoxView:on_KWA_BTND_CLOSE(send,eventType)
	print("called KWA_BTND_CLOSE")
    callOnce(self, "closeCB")
    self:close()
end

function MessageBoxView:on_KWA_BTND_BG(send,eventType)
    if not self.bEnableBGTouch then
        return 
    end
	print("called KWA_BTND_CLOSE")
    callOnce(self, "closeCB")
    self:close()
end

function MessageBoxView:on_KWA_BTND_OK_1(send,eventType)
    callOnce(self, "okCB")
    self:close()
end

function MessageBoxView:on_KWA_BTND_OK_2(send,eventType)
    self:on_KWA_BTND_OK_1(send,eventType)
end
 
return MessageBoxViewx