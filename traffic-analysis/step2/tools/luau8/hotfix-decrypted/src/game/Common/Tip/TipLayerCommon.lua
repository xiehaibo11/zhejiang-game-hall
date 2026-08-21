-- TipLayer 和洗牌强相关 并不通用，所以封装 TipLayerCommon，提供界面基本操作交互逻辑

local PopLayer = require("game.Common.Tip.PopLayer")
local TipLayerCommon = class("TipLayerCommon", PopLayer)

TipLayerCommon.ENUM_BUTTON_TYPE = {
    OK = 1,
    CANCEL = 2,
    CLOSE = 3,
}

local KW_PATH_POP_LAYER_ART_RESOURCE = "cocosStudio/Common/TipLayer/CSB/shuffle_tips_ok_cancel_new.csb"

function TipLayerCommon:ctor()
    TipLayerCommon.super.ctor(self)
    --提示弹窗禁止点击背景关闭
    self._canTouchBackGround = false

    self._buttonConfigInfo = {
        [TipLayerCommon.ENUM_BUTTON_TYPE.OK] = {
            ["buttonKeyWord"] = "KW_BUTTON_HINT_OK",
            ["onButtonMoreEvent"] = nil,
        },
        [TipLayerCommon.ENUM_BUTTON_TYPE.CANCEL] = {
            ["buttonKeyWord"] = "KW_BUTTON_HINT_CANCEL",
            ["onButtonMoreEvent"] = nil,
        },
        [TipLayerCommon.ENUM_BUTTON_TYPE.CLOSE] = {
            ["buttonKeyWord"] = "KW_BUTTON_HINT_CLOSE",
            ["onButtonMoreEvent"] = nil,
        },        
    }

    self._checkFunc = nil
end

function TipLayerCommon:init(param)

    self._csbResourcePath = KW_PATH_POP_LAYER_ART_RESOURCE
    TipLayerCommon.super.init(self)

    self._checkFunc = param.checkFunc
    self._checkboxInitFunc = param.checkboxInitFunc
    self._checkboxTextFunc = param.checkboxTextFunc

    local checkBox = ccui.Helper:seekNodeByName(self._popLayer, "KW_CHECKBOX_ISSHOW_NEXT")
    if checkBox then
        checkBox:addEventListener(handler(self, self.onTouchEventCheckBox))
        local isCheck = false
        if self._checkboxInitFunc then
            isCheck = self._checkboxInitFunc()
        end
        checkBox:setSelected(isCheck)
    end

    local showNextTip = ccui.Helper:seekNodeByName(self._popLayer, "KW_TEXT_SHUFFLE_TIP_ISSHOW_NEXT")
    if showNextTip then
        local str = "今日不再提示"
        if self._checkboxTextFunc then
            str = self._checkboxTextFunc()
        end
        showNextTip:setString(str)
    end

    for i,v in pairs(TipLayerCommon.ENUM_BUTTON_TYPE) do
        local configInfo = self._buttonConfigInfo[TipLayerCommon.ENUM_BUTTON_TYPE[i]]
        local node = CF.UITool.seekNodeByName(self._popLayer, configInfo.buttonKeyWord)
        if node then
            node:addTouchEventListener(function (send,eventType)
                self.onButtonEvent(self, send, eventType, v)
            end)
        end
    end 
end

function TipLayerCommon:onTouchEventCheckBox(send, eventType)
    if self._checkFunc then
        self._checkFunc(send, eventType)
    end
end

function TipLayerCommon:onButtonEvent(send, eventType, buttonType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local moreEvent = self._buttonConfigInfo[buttonType].onButtonMoreEvent
    if moreEvent ~= nil then
        moreEvent.func(self,unpack(moreEvent.argv))  
    end
    --播放音效先注释
    --XH.GT.GameSound.playButtonClick()
    CF.popLayerManager:removeLayer(self.__cname)
end

function TipLayerCommon:setButtonMoreEvent(buttonIndex, func, ...)
    self._buttonConfigInfo[buttonIndex].onButtonMoreEvent = {["func"] = func,["argv"] = {...}}
end

function TipLayerCommon:setText(strText)
    local node = ccui.Helper:seekNodeByName(self._popLayer, "KW_TEXT_SHUFFLE_TIP")
    if node then
        node:setText(XH.StringTool.replaceMatchStr(strText))
    end
end

function TipLayerCommon:setTouchBackGround(canTouch)
    self._canTouchBackGround = canTouch
end

return TipLayerCommon�