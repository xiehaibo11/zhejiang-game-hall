---@class PlayerBillInputView : View
local PlayerBillInputView = class("PlayerBillInputView", XH.ViewBase)

local KW_MIN_NUM = 0
local KW_MAX_NUM = 9

function PlayerBillInputView:getCSBPath()
    return "cocosStudio/hall/CSB/PlayerBillInputView.csb"
end

function PlayerBillInputView:getBindingInfo()
    return {
        ["_KW_PANEL_MASK"] = { varName = "_panelMask", onTouchEnded = "onMaskClicked" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onCloseClicked" },
        ["_KW_BTN_DELETE"] = { varName = "_btnDelete", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onDeleteClicked" },
        ["_KW_BTN_RESET"] = { varName = "_btnReset", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onResetClicked" },
        ["_KW_TEXT_RECORD"] = { varName = "_textRecord" },
        ["_KW_BTN_RECORD"] = { varName = "_btnRecord", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onRecordClicked" },
        ["_KW_IMG_RECORD_TITLE"] = { varName = "_imgRecordTitle" },
        ["_KW_IMG_RECORD_INPUT"] = { varName = "_imgRecordInput" },

        ["_KW_BTN_NUM_0"] = { varName = "_btnNum0", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_1"] = { varName = "_btnNum1", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_2"] = { varName = "_btnNum2", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_3"] = { varName = "_btnNum3", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_4"] = { varName = "_btnNum4", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_5"] = { varName = "_btnNum5", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_6"] = { varName = "_btnNum6", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_7"] = { varName = "_btnNum7", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_8"] = { varName = "_btnNum8", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_NUM_9"] = { varName = "_btnNum9", type = XH.UI_TYPE.BUTTON},
    }
end

function PlayerBillInputView:ctor()
    PlayerBillInputView.super.ctor(self)
    self._defaultText = ""
    self._inputText = ""
    self:initUI()
end

function PlayerBillInputView:initUI()
    for i = KW_MIN_NUM, KW_MAX_NUM do
        local btnNum = self["_btnNum" .. i]
        if btnNum then
            btnNum:addTouchEventListener(function(send, eventType)
                self:onNumClicked(send, eventType, i)
            end)
        end
    end

    if self._imgRecordTitle then
        self._imgRecordTitle:setVisible(true)
    end
    if self._imgRecordInput then
        self._imgRecordInput:setVisible(true)
    end
    if self._textRecord then
        self._defaultText = self._textRecord:getString()
    end
end

function PlayerBillInputView:getProxyEvents()
    if device.platform == "ios" or device.platform == "android" then
        return  { module = XH.sdkManager, eventKeyName = XH.sdkManager.EVENT_DEFAULT_CALLBACK , callBack = "onClipboardCallback" }
    end
    return {}
end

function PlayerBillInputView:onEnter()
    PlayerBillInputView.super.onEnter(self)

    if self._textRecord then
        self._textRecord:stopAllActions()
        self._textRecord:runAction(cc.Sequence:create(cc.CallFunc:create(function()
            self:reqClipboard()
        end), cc.DelayTime:create(0.1)))
    end
end

function PlayerBillInputView:onExit()
    PlayerBillInputView.super.onExit(self)
end

function PlayerBillInputView:reqClipboard()
    XH.TipTool.showClipboardTip({always = true, msg = "是否允许使用剪切板，快速查看战绩"})
end

function PlayerBillInputView:onMaskClicked(send, eventType)
    self:close()
end

function PlayerBillInputView:onCloseClicked(send, eventType)
    self:close()
end

function PlayerBillInputView:onDeleteClicked(send, eventType)
    if self.onDeleteInput then
        self:onDeleteInput()
    end
end

function PlayerBillInputView:onResetClicked(send, eventType)
    if self.onResetInput then
        self:onResetInput()
    end
end

function PlayerBillInputView:onNumClicked(send, eventType, num)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self.onNumInput then
        self:onNumInput(num)
    end
end

function PlayerBillInputView:onTeaHouseJoinFailed(event)
    self:onResetInput()
end

function PlayerBillInputView:onDeleteInput()
    if #self._inputText <= 0 then
        return
    end
    self._inputText = string.sub(self._inputText, 1, #self._inputText - 1)
    self:refreshNums()
end

function PlayerBillInputView:onResetInput()
    self._inputText = ""
    self:refreshNums()
end

function PlayerBillInputView:onNumInput(num)
    self._inputText = self._inputText .. tostring(num)
    self:refreshNums()
end

function PlayerBillInputView:refreshNums()
    if self._textRecord == nil then
        return
    end
    if #self._inputText > 0 then
        self._textRecord:setString(self._inputText)
    else
        self._textRecord:setString(self._defaultText)
    end
end

function PlayerBillInputView:onRecordClicked(send, eventType)
    XH.lobby:getModule("PlayerBill"):startPlayBack(self._inputText)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041702, {block_label='大厅战绩_回放弹窗'})
    self:close()
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_28) 
end

function PlayerBillInputView:onClipboardCallback(event)
    if event == nil or event.data == nil or event.data.msg == nil or event.data.code ~= XH.ThirdDefine.SYSFUNC_CALLBACK.SYSFUNC_GET_CLIPBOARDCONTENT_SUCCESS then
        return
    end

    local msg = event.data.msg
    local teaHouseShareCode = nil
    local strTeaHouseShareCode = string.match(msg, "回放码：%d+")
    if strTeaHouseShareCode then
        teaHouseShareCode = string.match(strTeaHouseShareCode, "%d+")
    end
    if teaHouseShareCode == nil then
        return
    end
    XH.SysTool.copyString("")

    self._inputText = teaHouseShareCode
    self:refreshNums()
end

return PlayerBillInputView