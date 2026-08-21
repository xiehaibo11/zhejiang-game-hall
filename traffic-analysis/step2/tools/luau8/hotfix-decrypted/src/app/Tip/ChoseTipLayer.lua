local ChoseTipLayer = class("ChoseTipLayer", XH.ViewBase)

local KW_TXT_DEFAULT_NOTICE = {
    ["DEFAULT"] = "请选择以下按钮",
}

function ChoseTipLayer:getCSBPath()
    return "cocosStudio/Common/TipLayer/CSB/tips_chose.csb"
end


function ChoseTipLayer:getBindingInfo()
    return {
        ["_KW_TEXT_NOTICE"] = { varName = "_textNotice" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BUTTON_CHOSE_ONE"] = {varName = "_btnChoseOne",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventChoseOne"},
        ["_KW_BUTTON_CHOSE_TWO"] = {varName = "_btnChoseTwo",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventChoseTwo"},
    }
end

function ChoseTipLayer:ctor(param)
    ChoseTipLayer.super.ctor(self)
    self:initMsg(param)
    self._choseOne = param.funcChoseOne
    self._choseTwo = param.funcChoseTwo
end

function ChoseTipLayer:onTouchEventClose()
    self:close()
end

function ChoseTipLayer:initMsg(param)
    local defaultNotic = param.msg or KW_TXT_DEFAULT_NOTICE["DEFAULT"]
    self._textNotice:setText(defaultNotic)
    self._btnChoseOne:setTitleText(param.btnOneTxt  or "")
    self._btnChoseTwo:setTitleText(param.btnTwoTxt  or "")
end

local function callOnce(self, funcName)
    local func = self[funcName]
    if func then
        func()
        self[funcName] = nil
    end
end

function ChoseTipLayer:onTouchEventChoseOne(send,eventType)
    callOnce(self, "_choseOne")
    self:close()
end

function ChoseTipLayer:onTouchEventChoseTwo(send,eventType)
    callOnce(self, "_choseTwo")
    self:close()
end

return ChoseTipLayer�