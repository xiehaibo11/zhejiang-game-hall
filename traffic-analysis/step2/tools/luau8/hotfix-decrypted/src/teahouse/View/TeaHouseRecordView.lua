local TeaHouseInputView = import(".TeaHouseInputView")
---@class TeaHouseInputView : TeaHouseInputView
local TeaHouseRecordView = class("TeaHouseRecordView", TeaHouseInputView)

TeaHouseRecordView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseInputView.csb",
    binding = {
        ["_KW_IMG_RECORD_TITLE"] = { tag = "_KW_IMG_RECORD_TITLE", name = "_imgRecordTitle", class = "img" },
        ["_KW_IMG_RECORD_INPUT"] = { tag = "_KW_IMG_RECORD_INPUT", name = "_imgRecordInput", class = "img" },
        ["_KW_TEXT_RECORD"] = { tag = "_KW_TEXT_RECORD", name = "_textRecord", class = "img" },
        ["_KW_BTN_RECORD"] = { tag = "_KW_BTN_RECORD", name = "_btnRecord", class = "btn", events = "onRecordClicked" },
    }
}

function TeaHouseRecordView:ctor()
    self._defaultText = ""
    self._inputText = ""

    TeaHouseRecordView.super.ctor(self)
end

function TeaHouseRecordView:initUI()
    TeaHouseRecordView.super.initUI(self)

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

function TeaHouseRecordView:onEnter()
    TeaHouseRecordView.super.onEnter(self)

    TeaHouse.manager.teahouseSDK:addClipboardCallback("TeaHouseRecordView", handler(self, self.onClipboardCallback))

    if self._textRecord then
        self._textRecord:stopAllActions()
        self._textRecord:runAction(cc.Sequence:create(cc.CallFunc:create(function()
            XH.TipTool.showClipboardTip({always = true, msg = "是否允许使用剪切板，快速查看战绩"})
        end), cc.DelayTime:create(0.1)))
    end

    self:initEvents()
end

function TeaHouseRecordView:onExit()
    TeaHouseRecordView.super.onExit(self)

    TeaHouse.manager.teahouseSDK:removeClipboardCallback("TeaHouseRecordView")
end

function TeaHouseRecordView:initEvents()

end

function TeaHouseRecordView:onTeaHouseJoinFailed(event)
    self:onResetInput()
end

function TeaHouseRecordView:onDeleteInput()
    if #self._inputText <= 0 then
        return
    end
    self._inputText = string.sub(self._inputText, 1, #self._inputText - 1)
    self:refreshNums()
end

function TeaHouseRecordView:onResetInput()
    self._inputText = ""
    self:refreshNums()
end

function TeaHouseRecordView:onNumInput(num)
    self._inputText = self._inputText .. tostring(num)
    self:refreshNums()
end

function TeaHouseRecordView:refreshNums()
    if self._textRecord == nil then
        return
    end
    if #self._inputText > 0 then
        self._textRecord:setString(self._inputText)
    else
        self._textRecord:setString(self._defaultText)
    end
end

function TeaHouseRecordView:onRecordClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.startPlayBack(self._inputText)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041702, {block_label='比赛场战绩_回放弹窗'})
    self:close()
end

function TeaHouseRecordView:onClipboardCallback(msg)
    if msg == nil then
        return
    end
    local teaHouseShareCode = nil
    local strTeaHouseShareCode = string.match(msg, "回放码：%d+")
    if strTeaHouseShareCode then
        teaHouseShareCode = string.match(strTeaHouseShareCode, "%d+")
    end
    if teaHouseShareCode == nil then
        return
    end
    TeaHouse.SysTool.copyClipboard("")

    self._inputText = teaHouseShareCode
    self:refreshNums()
end

return TeaHouseRecordView�