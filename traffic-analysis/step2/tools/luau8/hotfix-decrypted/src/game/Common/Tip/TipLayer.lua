local PopLayer = require("game.Common.Tip.PopLayer")
local TipLayer = class("TipLayer", PopLayer)

TipLayer.ENUM_BUTTON_TYPE = {
    OK = 1,
    CANCEL = 2,
    CLOSE = 3,
}

TipLayer.ENUM_TIP_TYPE = {
    OK = 1,
    OK_CANCEL = 2,
    TAO_PAO = 3,
    REQUEST_LEAVE = 4,
    SHUFFLE_TIP = 5,
    SHARE_WECHAT = 6,
    SHUFFLE_TIP_NEW = 7,
}
local KW_PATH_POP_LAYER_ART_RESOURCE = "cocosStudio/Common/TipLayer/CSB"

local ENUM_TIP_CSB_RESOURCE_PATH = {
    [TipLayer.ENUM_TIP_TYPE.OK] = KW_PATH_POP_LAYER_ART_RESOURCE .. "/share_tips.csb",
    [TipLayer.ENUM_TIP_TYPE.OK_CANCEL] = KW_PATH_POP_LAYER_ART_RESOURCE .. "/share_tips_ok_cancel.csb",
    [TipLayer.ENUM_TIP_TYPE.TAO_PAO] = KW_PATH_POP_LAYER_ART_RESOURCE .. "/share_exit_ok_cancel.csb",
    [TipLayer.ENUM_TIP_TYPE.REQUEST_LEAVE] = KW_PATH_POP_LAYER_ART_RESOURCE .. "/share_request.csb",
    [TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP] = KW_PATH_POP_LAYER_ART_RESOURCE .. "/shuffle_tips_ok_cancel.csb",
    [TipLayer.ENUM_TIP_TYPE.SHARE_WECHAT] = KW_PATH_POP_LAYER_ART_RESOURCE .. "/share_tips_wechat.csb",
    [TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP_NEW] = KW_PATH_POP_LAYER_ART_RESOURCE .. "/shuffle_tips_ok_cancel_new.csb",
}

function TipLayer:ctor()
    TipLayer.super.ctor(self)
    self._tipType = TipLayer.ENUM_TIP_TYPE.OK
    --提示弹窗禁止点击背景关闭
    self._canTouchBackGround = false

    self._buttonConfigInfo = {
        [TipLayer.ENUM_BUTTON_TYPE.OK] = {
            ["buttonKeyWord"] = "KW_BUTTON_HINT_OK",
            ["onButtonMoreEvent"] = nil,
        },
        [TipLayer.ENUM_BUTTON_TYPE.CANCEL] = {
            ["buttonKeyWord"] = "KW_BUTTON_HINT_CANCEL",
            ["onButtonMoreEvent"] = nil,
        },
        [TipLayer.ENUM_BUTTON_TYPE.CLOSE] = {
            ["buttonKeyWord"] = "KW_BUTTON_HINT_CLOSE",
            ["onButtonMoreEvent"] = nil,
        },        
    }
end

function TipLayer:setTextures(cancel, ok)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/dismiss.plist")
    local cancelNode = CF.UITool.seekNodeByName(self._popLayer, "KW_BUTTON_HINT_CANCEL")
    local okNode = CF.UITool.seekNodeByName(self._popLayer, "KW_BUTTON_HINT_OK")
    if cancelNode and cancel then
        cancelNode:loadTextures(cancel, cancel, cancel, ccui.TextureResType.plistType)
    end
    if okNode and ok then
        okNode:loadTextures(ok, ok, ok, ccui.TextureResType.plistType)
    end
end

function TipLayer:init(tipType, gameid)
    if tipType ~= nil then
        self._csbResourcePath = ENUM_TIP_CSB_RESOURCE_PATH[tipType]
        self._tipType = tipType
    else
        self._csbResourcePath = ENUM_TIP_CSB_RESOURCE_PATH[TipLayer.ENUM_TIP_TYPE.OK]
    end
    self._gameid = gameid or 0

    TipLayer.super.init(self)

    if self._tipType == TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP then
        local checkBox = ccui.Helper:seekNodeByName(self._popLayer, "KW_CHECKBOX_ISSHOW_NEXT")
        if checkBox then
            checkBox:addEventListener(handler(self, self.onTouchEventCheckBox))
            self:onTouchEventCheckBox(nil, ccui.CheckBoxEventType.selected)
        end
    elseif self._tipType == TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP_NEW then
        local checkBox = ccui.Helper:seekNodeByName(self._popLayer, "KW_CHECKBOX_ISSHOW_NEXT")
        if checkBox then
            checkBox:addEventListener(handler(self, self.onTouchEventCheckBoxShuffle))
            local isClick = cc.UserDefault:getInstance():getBoolForKey("shufflenew_next_" .. XH.areaData:getLobbyID(), false)
            if isClick then
                checkBox:setSelected(false)
                self:onTouchEventCheckBoxShuffle(nil, ccui.CheckBoxEventType.unselected)
            else
                checkBox:setSelected(true)
                self:onTouchEventCheckBoxShuffle(nil, ccui.CheckBoxEventType.selected)
            end
        end
        local showNextTip = ccui.Helper:seekNodeByName(self._popLayer, "KW_TEXT_SHUFFLE_TIP_ISSHOW_NEXT")
        if showNextTip then
            showNextTip:setString(self:getShuffleDays() < 5 and "今日不再提示" or "不再提示")
        end
    end

    for i,v in pairs(TipLayer.ENUM_BUTTON_TYPE) do
        local configInfo = self._buttonConfigInfo[TipLayer.ENUM_BUTTON_TYPE[i]]
        local node = CF.UITool.seekNodeByName(self._popLayer, configInfo.buttonKeyWord)
        if node then
            node:addTouchEventListener(function (send,eventType)
                self.onButtonEvent(self, send, eventType, v)
            end)
        end
    end 
end

function TipLayer:onTouchEventCheckBox(send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        cc.UserDefault:getInstance():setBoolForKey("isShowShuffkeNext"..self._gameid, false)
    elseif eventType == ccui.CheckBoxEventType.unselected then
        cc.UserDefault:getInstance():setBoolForKey("isShowShuffkeNext"..self._gameid, true)
    end
end

function TipLayer:onButtonEvent(send, eventType, buttonType)
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

function TipLayer:setButtonMoreEvent(buttonIndex, func, ...)
    self._buttonConfigInfo[buttonIndex].onButtonMoreEvent = {["func"] = func,["argv"] = {...}}
end

function TipLayer:setText(strText)
    local node = ccui.Helper:seekNodeByName(self._popLayer, "game_prompt_txt")
    if self._tipType == TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP or self._tipType == TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP_NEW then
        node = ccui.Helper:seekNodeByName(self._popLayer, "KW_TEXT_SHUFFLE_TIP")
    end
    if node then
        node:setText(XH.StringTool.replaceMatchStr(strText))
    end
end

function TipLayer:setTouchBackGround(canTouch)
    self._canTouchBackGround = canTouch
end

--设置洗牌勾选框勾不勾选
function TipLayer:setShuffleIsShowTextSelected(bSelected)
    if bSelected == nil then
        bSelected = true
    end
    local checkBox = ccui.Helper:seekNodeByName(self._popLayer, "KW_CHECKBOX_ISSHOW_NEXT")
    if checkBox then
        checkBox:setSelected(bSelected)
        local eventType = bSelected and ccui.CheckBoxEventType.selected or ccui.CheckBoxEventType.unselected
        self:onTouchEventCheckBox(nil, eventType)
    end
end

function TipLayer:onTouchEventCheckBoxShuffle(send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        cc.UserDefault:getInstance():setBoolForKey("shufflenew_next_" .. XH.areaData:getLobbyID(), false)
    elseif eventType == ccui.CheckBoxEventType.unselected then
        cc.UserDefault:getInstance():setBoolForKey("shufflenew_next_" .. XH.areaData:getLobbyID(), true)
    end
end

function TipLayer:getShuffleDays()
    return cc.UserDefault:getInstance():getIntegerForKey("shufflenew_days_" .. XH.areaData:getLobbyID(), 0)
end

return TipLayerg