local UISpecfMahLayer = CF.gameClass("UISpecfMahLayer", CF.ViewBase)
local DEBUG = require("app.Config.GlobalConfig").IsDebug

function UISpecfMahLayer:getCSBPath()
    return "cocosStudio/MahjongNew/MahLayer/CSB/SpecfMahLayer.csb"
end

function UISpecfMahLayer:getBindingInfo()
    return {
        ["_KW_LAYER_SPECF_MAH"] = {varName="_specfMahLayer",class="panel"},
        ["_KW_PANEL_HAND_MAH"] = {varName="_handMah",class="panel"},
        ["_KW_PANEL_SPECF_MAH"] = {varName="_specfMah",class="panel"},

        ["_KW_BTN_SPECF_HAND"] = {varName="_specfHand",onTouchEnded = "onTouchEventSpecfHand"},
        ["_KW_BTN_SPECF_WALL"] = {varName="_specfWall",onTouchEnded = "onTouchEventSpecfWall"},
        ["_KW_BTN_SPECF_QINGYISE"] = {varName="_specfHand",onTouchEnded = "onTouchEventSpecfQingYiSe"},
        ["_KW_BTN_SPECF_TAKE"] = {varName="_specfTake",onTouchEnded = "onTouchEventSpecfTake"},
        ["_KW_BTN_SPECF_REQ"] = {varName="_specfReq",onTouchEnded = "onTouchEventSpecfReq"},
        ["_KW_BTN_SPECF_END"] = {varName="_specfEnd",onTouchEnded = "onTouchEventSpecfEnd"},
        ["_KW_BTN_SPECF_CANCEL"] = {varName="_specfCancel",onTouchEnded = "onTouchEventSpecfCancel"},
        ["_KW_MAH_"] = { varName = "_mah", beginIndex = 17, endIndex = 107,onTouch = "onTouchEventSpecfMah"},
        ["_KW_HAND_MAH_"] = { varName = "_KW_HAND_MAH_", beginIndex = 1, endIndex = 18,onTouch = "onTouchEventHandMah"},
    }
end

function UISpecfMahLayer:getProxyEvents()
    local proxyEvents = UISpecfMahLayer.super.getProxyEvents(self) or {}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_SPECF_MAH", callBack = "onEventUpdateSpecfMah"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SPECF_MAHLAYER_ISSHOW", callBack = "onEventShowSpecfLayer"}
    return proxyEvents
end

function UISpecfMahLayer:ctor()
    UISpecfMahLayer.super.ctor(self)
    self._specfMahTable = {}
    self._handMahTable = {}
    self._specfReq:setVisible(false)
end

function UISpecfMahLayer:init(node)
    self:removeSelf()
    node:addChild(self)
end

function UISpecfMahLayer:onEventShowSpecfLayer(event)
    self:showSpecfLayer(event.data.isShow)
end

function UISpecfMahLayer:onEventUpdateSpecfMah(event)
    self._specfReq:setVisible(true)
    self:updateSpecfMah(event.data.mahs, event.data.count)
end

function UISpecfMahLayer:onTouchEventSpecfMah(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.4)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(0.55)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end 

    local specfMahID = CF.StringTool.getNumberSuffixByString(send:getName())
    if self._specfMahTable[specfMahID] > 0 then
        if self["_KW_HAND_MAH_" .. #self._handMahTable + 1] then
            self._specfMahTable[specfMahID] = self._specfMahTable[specfMahID] - 1
            self._handMahTable[#self._handMahTable + 1] = specfMahID
        end
    end
    self:showHandMah()
    self:showSpecfMah()
end

function UISpecfMahLayer:specfMahByTable(t)
    for i = 1, #t do
        local specfMahID = t[i]
        if self._specfMahTable[specfMahID] > 0 then
            if self["_KW_HAND_MAH_" .. #self._handMahTable + 1] then
                self._specfMahTable[specfMahID] = self._specfMahTable[specfMahID] - 1
                self._handMahTable[#self._handMahTable + 1] = specfMahID
            end
        end
    end
    self:showHandMah()
    self:showSpecfMah()
end

function UISpecfMahLayer:onTouchEventHandMah(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.4)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(0.55)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local touchMahIndex = CF.StringTool.getNumberSuffixByString(send:getName())
    local specfMahID = self._handMahTable[touchMahIndex]
    self._specfMahTable[specfMahID] = self._specfMahTable[specfMahID] + 1
    table.remove(self._handMahTable, touchMahIndex)
    self:showHandMah()
    self:showSpecfMah()
end

function UISpecfMahLayer:onTouchEventSpecfHand(send,eventType)
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

    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.msgManager:sendSpecfHandMahs(self._handMahTable, #self._handMahTable, gameData:getMaxHandMahData())
    self:clearHandMah()
end

function UISpecfMahLayer:onTouchEventSpecfQingYiSe(send,eventType)

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

    local MAH_VALUE = CF.GameDefine.MAH_VALUE
    self:specfMahByTable({
        MAH_VALUE.TIAO_1,
        MAH_VALUE.TIAO_1,
        MAH_VALUE.TIAO_1,
        MAH_VALUE.TIAO_2,
        MAH_VALUE.TIAO_2,
        MAH_VALUE.TIAO_2,
        MAH_VALUE.TIAO_3,
        MAH_VALUE.TIAO_3,
        MAH_VALUE.TIAO_3,
        MAH_VALUE.TIAO_4,
        MAH_VALUE.TIAO_4,
        MAH_VALUE.TIAO_4,
        MAH_VALUE.TIAO_5,
    })
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.msgManager:sendSpecfHandMahs(self._handMahTable, #self._handMahTable, gameData:getMaxHandMahData())

    CF.msgManager:sendSpecfEnd()
    self:clearHandMah()
    self:showSpecfLayer(false)
end

function UISpecfMahLayer:onTouchEventSpecfWall(send, eventType)
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

    CF.msgManager:sendSpecfWallMahs(self._handMahTable)
    self:clearHandMah()
end

function UISpecfMahLayer:onTouchEventSpecfTake(send, eventType)
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

    CF.msgManager:sendSpecfTakeMah(self._handMahTable[1])
    self:clearHandMah()
end

function UISpecfMahLayer:onTouchEventSpecfReq(send, eventType)
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

    CF.msgManager:sendSpecfReq()
    self:clearHandMah()
end

function UISpecfMahLayer:onTouchEventSpecfEnd(send, eventType)
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

    CF.msgManager:sendSpecfEnd()
    self:clearHandMah()
    self:showSpecfLayer(false)
end

function UISpecfMahLayer:onTouchEventSpecfCancal(send, eventType)
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

    for i = 1, #self._handMahTable do
        self._specfMahTable[self._handMahTable[i]] = self._specfMahTable[self._handMahTable[i]] + 1
    end
    self:clearHandMah()
    self:showSpecfMah()
end

function UISpecfMahLayer:updateSpecfMah(mahs, nCount)
    self._specfMahTable = {}
    for _,v in pairs(CF.GameDefine.MAH_VALUE) do
        self._specfMahTable[v] = 0
    end
    for i = 1,#mahs do
        self._specfMahTable[mahs[i]] = (self._specfMahTable[mahs[i]] or 0) + 1
    end

    self:showSpecfMah()
end

function UISpecfMahLayer:showSpecfLayer(bShow)
    if self._specfMahLayer and DEBUG then
        self._specfMahLayer:setVisible(bShow)
    else
        self._specfMahLayer:setVisible(false)
    end
end

function UISpecfMahLayer:showHandMah()
    if self._handMah then
        local children = self._handMah:getChildren()
        for j = 1, #children do
            if j <=  #self._handMahTable then
                children[j]:setVisible(true)             
                local faceNode = children[j]:getChildByName("KW_FACE")
                if faceNode then
                    faceNode:loadTexture(string.format("%s%d.png","mj_mah_face_", self._handMahTable[j]),ccui.TextureResType.plistType)
                end
            else
                children[j]:setVisible(false)
            end         
        end
    end
end

function UISpecfMahLayer:showSpecfMah()
    if self._specfMah then
        local children = self._specfMah:getChildren()
        for j = 1, #children do
            local strName = children[j]:getName()
            local specfMahID = CF.StringTool.getNumberSuffixByString(strName)
            if self._specfMahTable[specfMahID] == 0 then
                children[j]:setTouchEnabled(false)
                children[j]:setColor(cc.c3b(160,160,160))
            else
                children[j]:setTouchEnabled(true)
                children[j]:setColor(cc.c3b(255,255,255))
            end
            local textNode = children[j]:getChildByName("KW_COUNT")
            if textNode then
                textNode:setString("x" .. self._specfMahTable[specfMahID])
            end
        end
    end
end

function UISpecfMahLayer:clearHandMah()
    for i = 1, #self._handMahTable do
        if self["_KW_HAND_MAH_" .. i] then
            self["_KW_HAND_MAH_" .. i]:setVisible(false)        
        end    
    end
    self._handMahTable = {}
end

return UISpecfMahLayer