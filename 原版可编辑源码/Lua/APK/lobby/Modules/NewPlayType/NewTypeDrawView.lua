local NewTypeDrawView = class("NewTypeDrawView", XH.ViewBase)

local KW_BTN_TYPE = {
    CREATEBOX = "CREATEBOX",
    CREATETEA = "CREATETEA",
    KNOWN = "KNOWN",
    NOTIFY = "NOTIFY",
}

local KW_PAGE_TYPE = {
    LOBBY = "P1063",
    TEA = "P1104"
}

local KW_NEW_PLAY_TYPE_IMG = {
    [900043] = "new_play_type_draw_bg5.png",
    [900038] = "new_play_type_draw_bg4.png",
}

function NewTypeDrawView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/NewPlayType/NewPlayTypeDraw.csb"
end

function NewTypeDrawView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_GO"] = { varName = "_btnGo", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_DRAW"] = { varName = "_btnDraw", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventDraw" },
        ["_KW_BTN_RULE"] = { varName = "_btnRule", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRule" },
        ["_KW_PROCESS"] = { varName = "_process" },
        ["_KW_STAGE_"] = { varName = "_stage", beginIndex = 1, endIndex = 3 },
        ["_KW_PANEL_TITLE"] = { varName = "_title" },
        ["_KW_TXT_GAP"] = { varName = "_txtGap" },
        ["_KW_TXT_DRAW_COUNT"] = { varName = "_txtDrawCount" },
        ["_KW_IMG_TITLE"] = { varName = "_imgTitle" },
        ["_KW_IMG_NEW_PLAY_TYPE"] = { varName = "_imgNewPlayType" },

    }
end

function NewTypeDrawView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("LuckyTurnTableAct"), eventKeyName = "EVENT_GET_ACT_DATA", callBack = "onGetActData"},
    }
end

function NewTypeDrawView:ctor(param)
    param = param or {}
    NewTypeDrawView.super.ctor(self, param)

    self:initUI()
    XH.lobby:getModule("LuckyTurnTableAct"):reqActData()

    self._page = XH.teaHouseManager:isInTeaHouse() and "TEA" or "LOBBY"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_PUSH, {page = KW_PAGE_TYPE[self._page]})
end

function NewTypeDrawView:initUI()
    if not XH.teaHouseManager:isInTeaHouse() then
        self._btnGo:addTouchEventListener(handler(self, self.onTouchEventGoCreateBox))
    else
        local teahouseType = XH.lobby:getModule("NewPlayType"):checkTeahouseType()
        if teahouseType then
            if teahouseType == XH.lobby:getModule("NewPlayType").TEA_HOUSE_TYPE.FREE then
                self._btnGo:addTouchEventListener(handler(self, self.onTouchEventGoCreateTea))
            elseif teahouseType == XH.lobby:getModule("NewPlayType").TEA_HOUSE_TYPE.WITHNEWTYPEMODE then
                self._btnGo:addTouchEventListener(handler(self, self.onTouchEventKnown))
            elseif teahouseType == XH.lobby:getModule("NewPlayType").TEA_HOUSE_TYPE.WITHOUTNEWTYPEMODE then
                local teahouseData = XH.teaHouseManager:getTeaHouseData()
                if teahouseData:isOwner() then
                    self._btnGo:addTouchEventListener(handler(self, self.onTouchEventKnown))
                else
                    self._btnGo:loadTexture("new_play_type_draw_notify.png", ccui.TextureResType.plistType)
                    self._btnGo:ignoreContentAdaptWithSize(true)
                    self._btnGo:addTouchEventListener(handler(self, self.onTouchEventNotify))
                end
            end
        end
    end
    if KW_NEW_PLAY_TYPE_IMG[XH.areaData:getLobbyID()] and self._imgNewPlayType then
        local ok = pcall(function()
            self._imgNewPlayType:loadTexture(KW_NEW_PLAY_TYPE_IMG[XH.areaData:getLobbyID()], ccui.TextureResType.plistType)
        end)
        if ok then
            self._imgNewPlayType:ignoreContentAdaptWithSize(true)
            self._imgNewPlayType:setVisible(true)
        end
    end
end

function NewTypeDrawView:onTouchEventGoCreateBox(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("CreateBoxRoomView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_NOTIFY_OWNER, {label = KW_BTN_TYPE.CREATEBOX, page = KW_PAGE_TYPE[self._page]})
    self:close()
end

function NewTypeDrawView:onTouchEventGoCreateTea(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    local teahouseManager = XH.teaHouseManager:getTeaHouseManager()
    teahouseManager.viewManager:openView("TeaHouseCreateBoxRoomView", 0, {
        payModeType = teahouseData:getTeaHousePayMode(),
        payTypeTable = teahouseData:getPayTypeByID()
    } )
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_NOTIFY_OWNER, {label = KW_BTN_TYPE.CREATETEA, page = KW_PAGE_TYPE[self._page]})
    self:close()
end

function NewTypeDrawView:onTouchEventNotify(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.lobby:getModule("NewPlayType"):orderNewPlayTypeAndShare()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_NOTIFY_OWNER, {label = KW_BTN_TYPE.NOTIFY, page = KW_PAGE_TYPE[self._page]})
    self:close()
end

function NewTypeDrawView:onTouchEventClose(send, eventType)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_CLOSE, {page = KW_PAGE_TYPE[self._page]})
    self:close()
end

function NewTypeDrawView:onTouchEventKnown(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_NOTIFY_OWNER, {label = KW_BTN_TYPE.KNOWN, page = KW_PAGE_TYPE[self._page]})
    self:close()
end

function NewTypeDrawView:onTouchEventRule(send, eventType)
    XH.viewManager:openView("NewPlayTypeActRuleView", nil, 1)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_RULE, {page = KW_PAGE_TYPE[self._page]})
end

function NewTypeDrawView:onTouchEventDraw(send, eventType)
    XH.viewManager:openView("LuckyTurnTableActView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_PLAY_TYPE_ACT_C_DRAW, {page = KW_PAGE_TYPE[self._page]})
    self:close()
end

function NewTypeDrawView:onGetActData(event)
    if not event.data then
        return
    end
    local finishCount = event.data.finish
    local totalCount = event.data.totalTarget
    if finishCount and totalCount then
        self._process:setPercent(finishCount / totalCount * 100)
        for i = 1, 3 do
            if i <= math.floor(finishCount / 10) and self["_stage" .. i] then
                self["_stage" .. i]:loadTexture("new_play_type_draw_process_stage2.png", ccui.TextureResType.plistType)
            end
        end
        if finishCount < totalCount then
            self._txtGap:setString(totalCount - finishCount)
            self._txtDrawCount:setString(3)
        else
            self._txtGap:setVisible(false)
            self._txtDrawCount:setVisible(false)
            self._imgTitle:loadTexture("new_play_type_draw_play_finish.png", ccui.TextureResType.plistType)
        end
    else
        self._title:setVisible(false)
    end
end

return NewTypeDrawView