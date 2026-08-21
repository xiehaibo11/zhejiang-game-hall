local InputPassWord = class("InputPassWord", XH.ViewBase)

local INPUT_NUMBER_COUNT = 6

function InputPassWord:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterPassWordView.csb"
end

function InputPassWord:getBindingInfo()
    return {
        ["_KW_BTN_BACK"] = {varName="_btnBack",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_PANEL_BG"] = {varName="_btnBG",onTouchEnded = "onTouchEventClose"},
        ["_KW_INPUT_CLEAR"] = {varName="_btnInputClear",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClearBtn"},
        ["_KW_INPUT_NUM_DELETE"] = {varName="_btnInputDelete",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventDeleteBtn"},
        ["_KW_INPUT_NUM_"] = {varName="_btnInputNum", beginIndex = 0, endIndex = 9, type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventNumBtn"},
        ["_KW_TEXT_INPUT_NUM_"] = {varName="_textInputNum", beginIndex = 1, endIndex = 6},
        ["_KW_TEXT_TIP"] = {varName="_textTip"},        
    }
end

function InputPassWord:ctor(callBack, tipText, a)
	InputPassWord.super.ctor(self)
    self._inputData = {}
    self._textTip:setString(tipText or "")
    self._callBack = callBack
end

function InputPassWord:onTouchEventNumBtn(send, eventType)
    local bottonName = send:getName()
    local splitStr = string.split(bottonName, "_")
    local num = splitStr[#splitStr]
    self:addInputText(num)
    if not self._inputTime then
        self._inputTime = os.time()
    end
end

function InputPassWord:onTouchEventClearBtn(send, eventType)
    self:removeAllInputTexts()
end

function InputPassWord:onTouchEventDeleteBtn(send, eventType)
    self:removeInputText()
end

function InputPassWord:addInputText(text)
    if not text then
        return
    end
    if #self._inputData >= INPUT_NUMBER_COUNT then
        return
    end
    table.insert(self._inputData, text)
    self:updateAllTexts()
    self:checkReqCallBack()
end

function InputPassWord:checkReqCallBack()
    if #self._inputData < INPUT_NUMBER_COUNT then
        return
    end
    if self._callBack then
        self._callBack(self:getInputNumber())
    end
    self:close()
end

function InputPassWord:removeInputText()
    if #self._inputData <= 0 then
        return
    end
    table.remove(self._inputData, #self._inputData)
    self:updateAllTexts()
end

function InputPassWord:removeAllInputTexts()
    self._inputData = {}
    self:updateAllTexts()
end

function InputPassWord:updateAllTexts()
    for index = 1, INPUT_NUMBER_COUNT do
        local text = self._inputData[index]
        text = text or ""
        if self["_textInputNum"..index] then
            self["_textInputNum"..index]:setString(text)
        end
    end
end

function InputPassWord:getInputNumber()
    local strBoxRoomID = ""
    for _, numText in ipairs(self._inputData) do
        strBoxRoomID = strBoxRoomID .. numText
    end
    return strBoxRoomID
end


--点击关闭按钮
function InputPassWord:onTouchEventClose(send, eventType)
    if self._callBack then
        self._callBack("")
    end
    self:close()
end

return InputPassWord�