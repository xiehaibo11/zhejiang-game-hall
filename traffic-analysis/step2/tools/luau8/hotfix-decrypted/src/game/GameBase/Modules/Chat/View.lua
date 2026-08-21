local ChatView = class("ChatView", CF.ViewBase)

local KW_TEXT_SPEAK = "_KW_TEXT_SPEAK"
local KW_IMG_EMOJI_BG_ = "_KW_IMG_EMOJI_BG_"
local KW_IMG_EMOJI_ = "_KW_IMG_EMOJI_"
local KW_RECORD_MSG_BG = "_KW_RECORD_MSG_BG"
local KW_TEXT_PLAYER_NAME = "_KW_TEXT_PLAYER_NAME"
local KW_IMG_RECORD_SPEAK = "_KW_IMG_RECORD_SPEAK"
local KW_TEXT_RECORD_SPEAK = "_KW_TEXT_RECORD_SPEAK"
local KW_PANEL_SELF_SPEAK = "_KW_PANEL_SELF_SPEAK"
local KW_PANEL_OTHER_SPEAK = "_KW_PANEL_OTHER_SPEAK"

local MAX_RECORD_SPEAK_COUNT = 50 --最大记录数量
local KW_PATH_EMOJI_ROOT = "Emoji/"
local MAX_NICKNAME_LEN_SHOW = 12 --记录中显示玩家昵称最大长度

ChatView.KW_PATH_MESSAGE_PLIST = "cocosStudio/Common/Image/message.plist"

function ChatView:ctor()
    ChatView.super.ctor(self)
    self._chatType = 0 --当前选择的标签页索引
    self._speakMsgArray = {}
    self._emojiIconArray = {}
    self._emojiAniNameArray = {}
    self._recordMsgArray = {}
    self._emojiExportJsonName = ""
    self._emojiExportJsonPath = "" --根据配置读取对应的表情动画路径
    self._nickName = ""
    self:init()
end

function ChatView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ChatLayer.csb"
end

function ChatView:getBindingInfo()
    return {
        ["_KW_PANAEL_ROOT"] = {varName = "_messageRoot", onTouchEnded = "onTouchedMsgUIBg"},
        ["_KW_PANAEL_MESSAGE_ROOT"] = {varName = "_messagePanelRoot"},
        ["_KW_PANEL_MESSAGE"] = {varName = "_messagePanel"},
        ["_KW_BTN_SPEAK"] = {varName = "_btnSpeak", type = CF.UI_TYPE.BUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onBtnSpeak"},
        ["_KW_BTN_EMOJI"] = {varName = "_btnEmoji", type = CF.UI_TYPE.BUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onBtnEmoji"},
        ["_KW_BTN_RECORD"] = {varName = "_btnRecord", type = CF.UI_TYPE.BUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onBtnRecord"},
        ["_KW_PANEL_SPEAK"] = {varName = "_panelSpeak"},
        ["_KW_PANEL_EMOJI"] = {varName = "_panelEmoji"},
        ["_KW_PANEL_RECORD"] = {varName = "_panelRecord"},
        ["_KW_LIST_VIEW_SPEAK"] = {varName = "_listSpeak"},
        ["_KW_PAENL_SPEAK_ITEM"] = {varName = "_panelSpeakItem"},
        ["_KW_LIST_VIEW_EMOJI"] = {varName = "_listEmoji"},
        ["_KW_PAENL_EMOJI_ITEM"] = {varName = "_panelEmojiItem"},
        ["_KW_LIST_VIEW_RECORD"] = {varName = "_listRecord"},
        ["_KW_PANEL_RECORD_ITEM"] = {varName = "_panelRecordItem"},
        ["_KW_RECORD_MSG_BG"] = {varName = "_imgRecordBg"}
    }
end

function ChatView:getProxyEvents()
    return {
        {module = CF.game:getModule("Chat"), eventKeyName = "EVENT_CHATMSG_CHANGED", callBack = "onChatMsgChanged"}
    }
end

function ChatView:init()
    self:initMessagePanelRoot()

    self._gameid = CF.roomData:getGameID()

    if self._listSpeak and self._panelSpeakItem then
        self._listSpeak:setItemModel(self._panelSpeakItem)
    end
    if self._listEmoji and self._panelEmojiItem then
        self._listEmoji:setItemModel(self._panelEmojiItem)
    end
    if self._listRecord and self._panelRecordItem then
        self._listRecord:setItemModel(self._panelRecordItem)
    end

    --读取配置
    self:readLocalSpeakConfig()
    self:readLocalEmojiConfig()
    self._recordMsgArray = CF.game:getModule("Chat"):getChatMsgList()
    self._chatType = CF.game:getModule("Chat").ChatType.QIAO_PI_HUA
    self:initUI()
    self:refreshUI()

    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if selfPlayerData then
        self._nickName = selfPlayerData:getNickName()
    end
end

function ChatView:initUI()
    if self._speakCfg and table.nums(self._speakCfg) < 1 then
        self._chatType = CF.game:getModule("Chat").ChatType.EXPRESSION
        self._btnSpeak:setVisible(false)
        self._btnRecord:setPositionY(self._btnEmoji:getPositionY())
        self._btnEmoji:setPositionY(self._btnSpeak:getPositionY())
    end
end

function ChatView:initMessagePanelRoot()
    if self._messagePanelRoot and self._messageRoot then
        self._messagePanelRoot:setPositionX(self._messageRoot:getContentSize().width)
    end
end

local KW_ADAPT_UI_OFFSET = nil
function ChatView:adaptUIOffset()
    if not KW_ADAPT_UI_OFFSET then
        local frameSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
        if frameSize.width / frameSize.height > 1.8 then
            KW_ADAPT_UI_OFFSET = {left = 80, right = 80}
        else
            KW_ADAPT_UI_OFFSET = {left = 0, right = 0}
        end
    end
    return KW_ADAPT_UI_OFFSET
end

--移除动画
function ChatView:moveInAnimation()
    if self._messagePanelRoot and self._messageRoot then
        self._messageRoot:setVisible(true)
        self._messagePanelRoot:stopAllActions()
        local width = self._messagePanelRoot:getContentSize().width
        local totalWidth = display.width
        local yPos = display.height / 2
        local endPosX = totalWidth - width
        local offset = self:adaptUIOffset()
        endPosX = endPosX - offset.left
        local moveAni = cc.MoveTo:create(0.2, cc.p(endPosX, yPos))
        self._messagePanelRoot:runAction(moveAni)
    end
end

--移入动画
function ChatView:moveOutAnimation()
    if self._messagePanelRoot and self._messageRoot then
        self._messagePanelRoot:stopAllActions()
        local yPos = self._messagePanelRoot:getPositionY()
        local endPosX = self._messageRoot:getContentSize().width
        local moveAni = cc.MoveTo:create(0.2, cc.p(endPosX, yPos))
        local fun = cc.CallFunc:create(function()
            self:close()
            end
        )

        local ani = cc.Sequence:create(moveAni, fun)
        self._messagePanelRoot:runAction(ani)
    end
end

function ChatView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)
    self:moveInAnimation()
end

function ChatView:refreshUI()
    if self._panelSpeak then
        self._panelSpeak:setVisible(self._chatType == CF.game:getModule("Chat").ChatType.QIAO_PI_HUA)
    end
    if self._panelEmoji then
        self._panelEmoji:setVisible(self._chatType == CF.game:getModule("Chat").ChatType.EXPRESSION)
    end
    if self._panelRecord then
        self._panelRecord:setVisible(self._chatType == CF.game:getModule("Chat").ChatType.RECORD)
    end
    if self._btnSpeak then
        self._btnSpeak:setBright(self._chatType ~= CF.game:getModule("Chat").ChatType.QIAO_PI_HUA)
        self._btnSpeak:setTouchEnabled(self._chatType ~= CF.game:getModule("Chat").ChatType.QIAO_PI_HUA)
    end
    if self._btnEmoji then
        self._btnEmoji:setBright(self._chatType ~= CF.game:getModule("Chat").ChatType.EXPRESSION)
        self._btnEmoji:setTouchEnabled(self._chatType ~= CF.game:getModule("Chat").ChatType.EXPRESSION)
    end
    if self._btnRecord then
        self._btnRecord:setBright(self._chatType ~= CF.game:getModule("Chat").ChatType.RECORD)
        self._btnRecord:setTouchEnabled(self._chatType ~= CF.game:getModule("Chat").ChatType.RECORD)
    end

    if self._chatType == CF.game:getModule("Chat").ChatType.QIAO_PI_HUA then
        if self._listSpeak and self._listSpeak:getChildrenCount() == 0 then
            self:updateSpeakList()
        end
    end

    if self._chatType == CF.game:getModule("Chat").ChatType.EXPRESSION then
        if self._listEmoji and self._listEmoji:getChildrenCount() == 0 then
            self:updateEmojiList()
        end
    end

    if self._chatType == CF.game:getModule("Chat").ChatType.RECORD then
        if self._listRecord then
            if self._bChatMsgChanged or self._listRecord:getChildrenCount() == 0 then
                self._bChatMsgChanged = false
                self:updateRecordList()
            end
        end
    end
end

function ChatView:onTouchedMsgUIBg(send, eventType)
    self:moveOutAnimation()
end

function ChatView:onBtnSpeak(send, eventType)
    if self._chatType == CF.game:getModule("Chat").ChatType.QIAO_PI_HUA then
        return
    end
    self._chatType = CF.game:getModule("Chat").ChatType.QIAO_PI_HUA
    self:refreshUI()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_09)
end

function ChatView:onBtnEmoji(send, eventType)
    if self._chatType == CF.game:getModule("Chat").ChatType.EXPRESSION then
        return
    end
    self._chatType = CF.game:getModule("Chat").ChatType.EXPRESSION
    self:refreshUI()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_11)
end

function ChatView:onBtnRecord(send, eventType)
    if self._chatType == CF.game:getModule("Chat").ChatType.RECORD then
        return
    end
    self._chatType = CF.game:getModule("Chat").ChatType.RECORD
    self:refreshUI()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_13)
end

function ChatView:readLocalSpeakConfig()
    self._speakCfg = CF.soundManager:getSpeakConfig() or {}
    self._speakList = {}
    local speakCfByIndex = {}
    for _, v in pairs(self._speakCfg) do
        table.insert(self._speakList, v)
        speakCfByIndex[v.index] = v
    end
    self._speakCfg = speakCfByIndex
    table.sort(
        self._speakList,
        function(a, b)
            return a.order < b.order
        end
    )
end

function ChatView:readLocalEmojiConfig()
    local emojiIndex = CF.gameSub:getGameFaceByGameId(self._gameid)
    local GameExpressionConfiger = CF.gameRequire("Modules.Chat.GameExpressionConfiger").new()
    self._emojiExportJsonPath = KW_PATH_EMOJI_ROOT .. GameExpressionConfiger:getGameExpressionDirNameByConfID(emojiIndex)
    self._emojiExportJsonName = GameExpressionConfiger:getGameExpressionJsonByConfID(emojiIndex)
    local emojiIconNameList = GameExpressionConfiger:getGameExpressionSelectIconByConfID(emojiIndex)
    for i, v in ipairs(emojiIconNameList) do
        self._emojiIconArray[i] = v .. ".png"
    end
    local emojiAniNameList = GameExpressionConfiger:getGameExpressionAniNameByConfID(emojiIndex)
    for i, v in ipairs(emojiAniNameList) do
        self._emojiAniNameArray[i] = v
    end

    local iconPlistName = GameExpressionConfiger:getGameExpressionIconPlistNameByConfID(emojiIndex)
    local plistFilePath = "res/" .. self._emojiExportJsonPath .. "/" .. iconPlistName .. ".plist"
    cc.SpriteFrameCache:getInstance():addSpriteFrames(plistFilePath)
end

function ChatView:updateSpeakList()
    if self._listSpeak then
        self._listSpeak:removeAllChildren()
        for _, v in ipairs(self._speakList) do
            self._listSpeak:pushBackDefaultItem()
            local tItems = self._listSpeak:getItems()
            local speakText = v.SpeakText or ""
            local txtNode = ccui.Helper:seekWidgetByName(tItems[#tItems], KW_TEXT_SPEAK)
            if txtNode then
                txtNode:setVisible(true)
                txtNode:setString(speakText)
            end
            tItems[#tItems]:setTag(tonumber(v.index))
            tItems[#tItems]:addTouchEventListener(handler(self, self.onTouchEventSpeakText))
        end
    end
end

function ChatView:updateEmojiList()
    if self._listEmoji and self._panelEmojiItem then
        self._listEmoji:removeAllChildren()
        local oneLineCount = self._panelEmojiItem:getChildrenCount()
        for i, v in ipairs(self._emojiIconArray) do
            if i % oneLineCount == 1 then
                self._listEmoji:pushBackDefaultItem()
            end
            local tItems = self._listEmoji:getItems()
            local index = (i % oneLineCount ~= 0) and i % oneLineCount or oneLineCount
            local imgEmojiBg = ccui.Helper:seekWidgetByName(tItems[#tItems], KW_IMG_EMOJI_BG_ .. index)
            local imgEmojiNode = ccui.Helper:seekWidgetByName(tItems[#tItems], KW_IMG_EMOJI_ .. index)
            if imgEmojiBg and imgEmojiNode then
                imgEmojiBg:setVisible(true)
                imgEmojiBg:setTag(i)
                imgEmojiNode:setVisible(true)
                local emojiIconFileName = v
                imgEmojiNode:loadTexture(emojiIconFileName, ccui.TextureResType.plistType)
                imgEmojiNode:setScale(1.68)
                imgEmojiBg:addTouchEventListener(handler(self, self.onTouchEventEmoji))
            end
        end
    end
end

function ChatView:updateRecordList()
    if self._listRecord and self._panelRecordItem then
        self._listRecord:removeAllChildren()
        local recordlist = {}
        local inedex = 0
        for i = #self._recordMsgArray, 1, -1 do
            table.insert(recordlist, 1, self._recordMsgArray[i])
            inedex = inedex + 1
            if inedex >= MAX_RECORD_SPEAK_COUNT then
                break
            end
        end
        for i = 1, #recordlist do
            self:addRecordMsgItem(recordlist[i])
        end
    end
end

function ChatView:addRecordMsgItem(recordMsg)
    if not recordMsg or next(recordMsg) == nil then
        return
    end
    local msgData = recordMsg.data
    if self._listRecord and self._panelRecordItem then
        self._listRecord:pushBackDefaultItem()
        local tItems = self._listRecord:getItems()
        local recordSelf = ccui.Helper:seekWidgetByName(tItems[#tItems], KW_PANEL_SELF_SPEAK)
        local recordOther = ccui.Helper:seekWidgetByName(tItems[#tItems], KW_PANEL_OTHER_SPEAK)
        local recordNode
        local isSelf = recordMsg.seat == CF.roomData:getSelfSeat()
        local isIcon = msgData.nType == CF.game:getModule("Chat").ChatType.EXPRESSION
        if recordSelf and recordOther then
            if isSelf then
                recordNode = recordSelf
            else
                recordNode = recordOther
            end
            recordNode:setVisible(true)

            local imgRecordBg = ccui.Helper:seekWidgetByName(recordNode, KW_RECORD_MSG_BG)
            if imgRecordBg then
                if isSelf then
                    imgRecordBg:setAnchorPoint(1, 0.5)
                else
                    imgRecordBg:setAnchorPoint(0, 0.5)
                end
                if isIcon then
                    imgRecordBg:setContentSize(180, 100)
                end
            end

            local txtPlayerName = msgData.nickName
            if string.len(txtPlayerName) > MAX_NICKNAME_LEN_SHOW then
                txtPlayerName = self:utf8sub(txtPlayerName, 1, MAX_NICKNAME_LEN_SHOW) .. ":"
            else
                txtPlayerName = txtPlayerName .. ":"
            end
            local playerNameNode = ccui.Helper:seekWidgetByName(recordNode, KW_TEXT_PLAYER_NAME)

            --对方聊天记录 
            if playerNameNode and not isSelf then
                playerNameNode:setString(txtPlayerName)
                if imgRecordBg then
                    imgRecordBg:setPositionPercent(cc.p(1.05, 0.5))   
                    --争对不同的对方姓名做聊天框的适配
                    local Length = 8
                    local NameLength = string.len(txtPlayerName) - 1
                    local recordBgSize = imgRecordBg:getContentSize()
                    imgRecordBg:setContentSize(recordBgSize.width - NameLength * Length ,recordBgSize.height)
                end
            end

            local imgRecordSpeak = ccui.Helper:seekWidgetByName(recordNode, KW_IMG_RECORD_SPEAK)
            if imgRecordSpeak and isIcon then
                imgRecordSpeak:setVisible(true)
                imgRecordSpeak:setPositionPercent(cc.p(0.5, 0.5))
                if msgData.nType == CF.game:getModule("Chat").ChatType.EXPRESSION then
                    imgRecordSpeak:loadTexture(self._emojiIconArray[msgData.index], ccui.TextureResType.plistType)
                end
            end

            local recordSpeakTxtNode = ccui.Helper:seekWidgetByName(recordNode, KW_TEXT_RECORD_SPEAK)
            if recordSpeakTxtNode and not isIcon then
                recordSpeakTxtNode:setVisible(true)
                recordSpeakTxtNode:setString(msgData.speakText)
                local textSize = recordSpeakTxtNode:getAutoRenderSize()
                local recordBgSize = imgRecordBg:getContentSize()
                local fontSize = recordSpeakTxtNode:getFontSize()
                if textSize.width >= recordBgSize.width then
                    --换行显示，背景加大
                    local nLineCount = math.ceil((textSize.width* 1.4) / (recordBgSize.width))
                    recordSpeakTxtNode:setContentSize(recordBgSize.width * 0.9, nLineCount * fontSize + 10)                   
                    imgRecordBg:setContentSize(recordBgSize.width + 4, recordBgSize.height + (nLineCount - 1) * fontSize - 15)
                else
                    --背景变小
                    recordSpeakTxtNode:setContentSize(textSize.width + 4, fontSize + 4)
                    local width = textSize.width < 120 and 120 or textSize.width
                    imgRecordBg:setContentSize(width + 30, recordBgSize.height)
                end
                
                if isSelf then
                    recordSpeakTxtNode:setPositionPercent(cc.p(0.48, 0.5))
                else
                    recordSpeakTxtNode:setPositionPercent(cc.p(0.55, 0.5))
                end
                ccui.Helper:doLayout(recordNode)
            end
        end
    end
end

function ChatView:onTouchEventSpeakText(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local speakTextIndex = send:getTag()
    print("nTouch speakTextIndex = ", speakTextIndex)
    CF.game:getModule("Chat"):sendQiaoPiHua(speakTextIndex)

    self:moveOutAnimation()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_10)
end

function ChatView:onTouchEventEmoji(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local emojiIndex = send:getTag()
    print("nTouch emojiIndex = ", emojiIndex)
    local msgInfo = {}
    msgInfo.nType = CF.game:getModule("Chat").ChatType.EXPRESSION
    msgInfo.index = emojiIndex
    msgInfo.nickName = self._nickName
    msgInfo.exportJsonName = self._emojiExportJsonName
    msgInfo.exportJsonPath = self._emojiExportJsonPath
    msgInfo.aniName = self._emojiAniNameArray[emojiIndex] or ""
    local data = json.encode(msgInfo)
    CF.game:getModule("Chat"):sendEmoji(data)
    self:moveOutAnimation()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_12)
end

function ChatView:onChatMsgChanged(event)
    local chatData = event.msg
    if self._chatType == CF.game:getModule("Chat").ChatType.RECORD then
        self:addRecordMsgItem(chatData)
    else
        self._bChatMsgChanged = true
    end
end

function ChatView:utf8sub(str, startPos, numChars)
    local function charsize(ch)
        if not ch then
            return 0
        elseif ch >= 252 then
            return 6
        elseif ch >= 248 and ch < 252 then
            return 5
        elseif ch >= 240 and ch < 248 then
            return 4
        elseif ch >= 224 and ch < 240 then
            return 3
        elseif ch >= 192 and ch < 224 then
            return 2
        elseif ch < 192 then
            return 1
        end
    end
    local startIndex = 1
    while startPos > 1 do
        local char = string.byte(str, startIndex)
        startIndex = startIndex + charsize(char)
        startPos = startPos - 1
    end
    local currentIndex = startIndex
    while currentIndex < numChars do
        local char = string.byte(str, currentIndex)
        currentIndex = currentIndex + charsize(char)
    end
    return str:sub(startIndex, currentIndex - 1)
end

return ChatView
1N