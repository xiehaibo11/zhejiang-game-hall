local GameSpecfCardLayer = CF.gameClass("GameSpecfCardLayer", CF.ViewBase)

function GameSpecfCardLayer:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/SpecfCardLayer.csb"
end

function GameSpecfCardLayer:getBindingInfo()
    return {
        ["_KW_BTN_RANDOM"] = {varName = "_randomBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRandomBtnClicked"},
        ["_KW_BTN_CANCAL"] = {varName = "_cancalBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onCancelBtnClicked"},
        ["_KW_BTN_SEND"] = {varName = "_sendBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSendBtnClicked"},
        ["_KW_BTN_CLOSE"] = {tag = "_KW_BTN_CLOSE", name = "_closeBtn", class = "btn", events = "onCloseBtnClicked"},
        ["_KW_UI_HAND_CARDS"] = {varName = "_handCards"},
        ["_KW_PANEL_SPECF_CARDS"] = {varName = "_specfCards"},
        ["_KW_SPECF_CARD_"] = {varName = "_specfCard_", type = CF.UI_TYPE.IMAGE_TOBUTTON, beginIndex = 1, endIndex = 54, onTouchEnded = "onTouchEventSpecfCard"},
        ["_KW_HAND_CARD_"] = {varName = "_handCard_", type = CF.UI_TYPE.IMAGE_TOBUTTON, beginIndex = 1, endIndex = 16, onTouchEnded = "onTouchEventHandCard"}
    }
end

function GameSpecfCardLayer:ctor(param)
    GameSpecfCardLayer.super.ctor(self, param)
    self._specfCardTable = {}
    self._handCardTable = {}
    self._needCnt = 0
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/shut_maker_layer.plist")
    for i = 1, 54 do
        local textNode = ccui.Text:create()
        self["_specfCard_" .. i]:addChild(textNode)
        textNode:setFontSize(40)
        textNode:setPosition(cc.p(80, 110))
        textNode:setTextColor(cc.c3b(0, 0, 0))
        self["_specfCard_" .. i].textNode = textNode
    end
end

function GameSpecfCardLayer:onTouchEventSpecfCard(send, eventType)
    if #self._handCardTable >= self._needCnt then
        CF.TipTool.showToast("超过需要最大上限")
        return
    end
    local strName = send:getName()
    local specfCardID = CF.StringTool.getNumberSuffixByString(strName)
    if #self._specfCardTable[specfCardID] > 0 then
        local findHandCard = self["_handCard_" .. #self._handCardTable + 1]
        if findHandCard then
            local cardID = self._specfCardTable[specfCardID][1]
            table.remove(self._specfCardTable[specfCardID], 1)
            self._handCardTable[#self._handCardTable + 1] = cardID
        end
    end
    self:showHandCard()
    self:showSpecfCard()
end

function GameSpecfCardLayer:onTouchEventHandCard(send, eventType)
    local strName = send:getName()
    local touchIndex = CF.StringTool.getNumberSuffixByString(strName)
    local specfMahID = self._handCardTable[touchIndex]
    local cardID = (specfMahID - 1) % 54 + 1
    table.insert(self._specfCardTable[cardID], specfMahID)
    table.remove(self._handCardTable, touchIndex)
    self:showHandCard()
    self:showSpecfCard()
end

function GameSpecfCardLayer:onSendBtnClicked(send, eventType)
    while #self._handCardTable < self._needCnt do
        local rand = math.random(1, 54)
        if #self._specfCardTable[rand] > 0 then
            local findHandCard = self["_handCard_" .. #self._handCardTable + 1]
            if findHandCard then
                local cardID = self._specfCardTable[rand][1]
                table.remove(self._specfCardTable[rand], 1)
                self._handCardTable[#self._handCardTable + 1] = cardID
            end
        end
    end

    CF.msgManager:sendSpecCard(self._handCardTable)
    self:showHandCard()
    self:showSpecfLayer(false)
end

function GameSpecfCardLayer:onCancelBtnClicked(send, eventType)
    for i = 1, #self._handCardTable do
        table.insert(self._specfCardTable[(self._handCardTable[i] - 1) % 54 + 1], self._handCardTable[i])
    end
    self._handCardTable = {}
    self:showHandCard()
    self:showSpecfCard()
end

function GameSpecfCardLayer:setAllCards(cards, needCnt)
    self._needCnt = needCnt
    self._specfCardTable = {}
    for i = 1, 54 do
        self._specfCardTable[i] = {}
    end
    for i = 1, #cards do
        local cardID = (cards[i] - 1) % 54 + 1
        table.insert(self._specfCardTable[cardID], cards[i])
    end

    self._handCardTable = {}
    self:showHandCard()
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
            if j <= #self._handCardTable then
                children[j]:setVisible(true)
                local cardID = (self._handCardTable[j] - 1) % 54 + 1
                children[j]:loadTexture(string.format("%s%d.png", "Shut_Card_", cardID), ccui.TextureResType.plistType)
            else
                if j <= self._needCnt then
                    children[j]:loadTexture(string.format("%s%d.png", "Shut_Card_", 55), ccui.TextureResType.plistType)
                    children[j]:setVisible(true)
                else
                    children[j]:setVisible(false)
                end
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
                children[j]:setColor(cc.c3b(160, 160, 160))
            else
                children[j]:setTouchEnabled(true)
                children[j]:setColor(cc.c3b(255, 255, 255))
            end
            children[j].textNode:setString(#self._specfCardTable[specfMahID])
        end
    end
end

return GameSpecfCardLayer
