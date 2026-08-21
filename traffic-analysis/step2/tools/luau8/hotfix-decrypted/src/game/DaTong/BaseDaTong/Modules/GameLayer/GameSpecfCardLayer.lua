local GameSpecfCardLayer = CF.gameClass("GameSpecfCardLayer", CF.ViewBase)

function GameSpecfCardLayer:getCSBPath()
    return "res/cocosStudio/DaTong/GameLayer/CSB/SpecfCardLayer.csb"
end

function GameSpecfCardLayer:getBindingInfo()
    return {
        ["_KW_BTN_RANDOM"] = {varName = "_randomBtn",  type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRandomBtnClicked"},
        ["_KW_BTN_CANCAL"] = {varName = "_cancalBtn",  type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCancelBtnClicked"},
        ["_KW_BTN_SEND"] = { varName = "_sendBtn",  type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSendBtnClicked"},
        ["_KW_BTN_CLOSE"] = {tag="_KW_BTN_CLOSE",name="_closeBtn",class="btn",onTouchEnded = "onCloseBtnClicked"},
        ["_KW_UI_HAND_CARDS"] = { varName = "_handCards" },
        ["_KW_PANEL_SPECF_CARDS"] = { varName = "_specfCards"},
        ["_KW_SPECF_CARD_"] = {varName = "_specfCard_", type = CF.UI_TYPE.IMAGE_TOBUTTON, beginIndex = 1, endIndex = 54, onTouchEnded = "onTouchEventSpecfCard"},
        ["_KW_HAND_CARD_"] = {varName = "_handCard_", type = CF.UI_TYPE.IMAGE_TOBUTTON, beginIndex = 1, endIndex = 17, onTouchEnded = "onTouchEventHandCard"},
    }
end

function GameSpecfCardLayer:ctor(param)
    GameSpecfCardLayer.super.ctor(self,param)
    self._specfCardTable = {}
    self._handCardTable = {}
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/shut_maker_layer.plist")
end

function GameSpecfCardLayer:onTouchEventSpecfCard(send,eventType)
    local strName = send:getName()
    local specfCardID = CF.StringTool.getNumberSuffixByString(strName)
    if self._specfCardTable[specfCardID] > 0 then
        local findHandCard = self["_handCard_"..#self._handCardTable + 1]
        if findHandCard then
            self._specfCardTable[specfCardID] = self._specfCardTable[specfCardID] - 1
            self._handCardTable[#self._handCardTable + 1] = specfCardID
        end
    end
    self:showHandCard()
    self:showSpecfCard()
end

function GameSpecfCardLayer:onTouchEventHandCard(send,eventType)
    local strName = send:getName()
    local touchIndex = CF.StringTool.getNumberSuffixByString(strName)
    local specfMahID = self._handCardTable[touchIndex]
    self._specfCardTable[specfMahID] = self._specfCardTable[specfMahID] + 1
    table.remove(self._handCardTable,touchIndex)
    self:showHandCard()
    self:showSpecfCard()
end

function GameSpecfCardLayer:onSendBtnClicked(send,eventType)
    CF.msgManager:sendSpecCard(self._handCardTable)
    self:clearHandCard()
    self:showSpecfLayer(false)
end

function GameSpecfCardLayer:onCancelBtnClicked(send,eventType)
    for i = 1, #self._handCardTable do
        self._specfCardTable[self._handCardTable[i]] = self._specfCardTable[self._handCardTable[i]] + 1
    end
    self:clearHandCard()
    self:showSpecfCard()
end

function GameSpecfCardLayer:setAllCards(cards)
    self._specfCardTable = {}
    for i = 1,#cards do
        self._specfCardTable[cards[i]] = (self._specfCardTable[cards[i]] or 0) + 1
    end

    self:showSpecfCard()
end

function GameSpecfCardLayer:showSpecfLayer(bShow)
    local bTest = CF.areaData:getAreaTypeID() > 1000 and CF.areaData:getSrsGroupID() == 5008
    self:setVisible(bShow and bTest)
end

function GameSpecfCardLayer:showHandCard()
    if self._handCards then
        local children = self._handCards:getChildren()
        for j = 1, #children do
            if j <=  #self._handCardTable then
                children[j]:setVisible(true)   
                children[j]:loadTexture(string.format("%s%d.png","Shut_Card_", self._handCardTable[j]),ccui.TextureResType.plistType)         
            else
                children[j]:setVisible(false)
            end         
        end
    end
end

function GameSpecfCardLayer:showSpecfCard()
    if self._specfCards then
        local children = self._specfCards:getChildren()
        for j = 1, #children do
            local strName = children[j]:getName()
            local specfMahID = CF.StringTool.getNumberSuffixByString(strName)
            if self._specfCardTable[specfMahID] == 0 then
                children[j]:setTouchEnabled(false)
                children[j]:setColor(cc.c3b(160,160,160))
            else
                children[j]:setTouchEnabled(true)
                children[j]:setColor(cc.c3b(255,255,255))
            end    
        end
    end
end

function GameSpecfCardLayer:clearHandCard()
    for i = 1, #self._handCardTable do
        self["_handCard_" .. i]:setVisible(false)   
    end
    self._handCardTable = {}
end

return GameSpecfCardLayerU