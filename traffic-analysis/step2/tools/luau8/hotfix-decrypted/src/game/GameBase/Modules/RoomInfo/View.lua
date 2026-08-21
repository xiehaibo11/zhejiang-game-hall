local RoomInfoView = CF.gameClass("RoomInfoView", CF.ViewBase)



RoomInfoView.INFO_NODE_TYPE = {
    ONE = 1,
    TWO = 2
}

function RoomInfoView:ctor()
    RoomInfoView.super.ctor(self)
    self._infoNodeList = {}
    self:initUI()
end

function RoomInfoView:getCSBPath()
    if CF.roomData:isNewUI() then
        return "cocosStudio/Common/CSB/GameBase/RoomInfoLayerNew.csb"
    else
        return "cocosStudio/Common/CSB/GameBase/RoomInfoLayer.csb"
    end
end

function RoomInfoView:getBindingInfo()
    return {
        ["_KW_IMG_ROOM_INFO_BG"] = {varName = "_roomInfoBg"},
        ["_KW_ONE_INFO_NODE"] = {varName = "_oneInfoNode"},
        ["_KW_TWO_INFO_NODE"] = {varName = "_twoInfoNode"},
        ["_KW_PANEL_NODE_NEW"] = {varName = "_newInfoNode"},
        ["_KW_PANAEL_SYS_INFO"] = {varName = "_sysInfoPanel"},
        ["_KW_TEXT_SYS_TIME"] = {varName = "_sysTimeNode"},
        ["_KW_IMG_SYS_NET"] = {varName = "_sysNetNode"},
        ["_KW_LB_SYS_POWER"] = {varName = "_sysPowerNode"},

        ["_KW_PANEL_LEFT_RULE_ROOT"] = { varName = "_uLeftRuleRoot" },
        ["_KW_BTN_LEFT_RULE"] = { varName = "_uLeftRuleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRuleBtnClicked" },
        ["_KW_TEXT_LEFT_RULE"] = { varName = "_uLeftRuleText" },
        ["_KW_PANEL_LEFT_RULE"] = { varName = "_leftRulePanel" },
        ["_KW_TEXT_SYS_WARING"] = { varName = "_uLeftWarningText" },
    }
end

function RoomInfoView:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMERULE_CHANGED", callBack = "onGameRuleChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_BASESCORE_CHANGED", callBack = "onBaseScoreChanged"},
        {module = CF.game, eventKeyName = "EVENT_START_SIGNAL_SEND", callBack = "onStartSignalSend"},
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_UPDATE_SIGNAL_UI", callBack = "onUpdateSignalUI"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart" },
        {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_HIDE_BASE_SCORE", callBack = "hideBaseScore" },
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_HIDE_BASE_SCORE", callBack = "hideBaseScore" },
        { module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_ADD_MULTIPLE_INFO", callBack = "onUpdateAddMultipleInfo" },
    }
end

function RoomInfoView:getAdaptationConfig()
    return {
        {node = self._sysInfoPanel, bRight = false, bHalf = true},
        {node = self._roomInfoBg, bRight = false, bHalf = true},
        {node = self._leftRulePanel, bRight = false, bHalf = true}
    }
end

function RoomInfoView:initUI()
    self:initTimeNode()
    self:initBatteryNode()
    self:initRoomInfoNodes()
    self:initLeftRulePanel()
    self:setOneInfoNodeValue("roomID", CF.game:getModule("RoomInfo"):getShowRoomID())
end

function RoomInfoView:onExit()
    RoomInfoView.super.onExit(self)
    --退出游戏后清理计时器，避免报错
    self._sysPowerNode:stopAllActions()
    self._sysTimeNode:stopAllActions()
    self._sysNetNode:stopAllActions()
end

function RoomInfoView:getInfoNodeConfig()
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true}
    }
end

function RoomInfoView:onPlayCountChanged(event)
    if self and self.setOneInfoNodeValue then
        self:setOneInfoNodeValue("playCount", event.msg.playCount .. "/" .. event.msg.maxPlayCount)
    end
end

function RoomInfoView:initTimeNode()
    local function getTimeFunc()
        local date = CF.SysTool.getCurSysTimeStr()
        self._sysTimeNode:setString(date)
    end
    getTimeFunc()
    CF.UITool.createRepeateAction(self._sysTimeNode, 10, getTimeFunc)
end

function RoomInfoView:initBatteryNode()
    local function getBatteryFunc()
        local batteryLevel = CF.SysTool:GetCurBattery()
        if batteryLevel >= 60 then
            self._sysPowerNode:setColor(cc.c3b(212, 152, 28))
        elseif batteryLevel >= 20 then
            self._sysPowerNode:setColor(cc.c3b(212, 152, 28))
        else
            self._sysPowerNode:setColor(cc.c3b(212, 28, 34))
        end
        self._sysPowerNode:setPercent(batteryLevel)
    end
    getBatteryFunc()
    CF.UITool.createRepeateAction(self._sysPowerNode, 300, getBatteryFunc)
end

function RoomInfoView:updateWifiStatus(delayTime)
    local formatStr = ""
    if CF.roomData and CF.roomData:isNewUI() then
        formatStr = "img_game_wifi%d.png"
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/common_gamelayer.plist")
    else
        formatStr = "doublekouwifi_icon_%d.png"
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/doublekou_gamelayer.plist")
    end
    if delayTime <= 150 then
        self._sysNetNode:loadTexture(string.format(formatStr, 3), ccui.TextureResType.plistType)
    elseif delayTime <= 800 then
        self._sysNetNode:loadTexture(string.format(formatStr, 2), ccui.TextureResType.plistType)
    else
        self._sysNetNode:loadTexture(string.format(formatStr, 1), ccui.TextureResType.plistType)
    end
end

--网络情况
function RoomInfoView:onUpdateSignalUI(event)
    local delayTime = event.msg.delayTime
    self:updateWifiStatus(delayTime)
end

function RoomInfoView:onStartSignalSend(event)
    if self._sysNetNode and self._sysNetNode:numberOfRunningActions() == 0 then
        CF.UITool.createRepeateAction(self._sysNetNode, 3, function()
            if CF.roomData and CF.roomData:getSignalMsgTime() ~= 0 then
                self:updateWifiStatus(999)
            end
            if CF.msgManager then
                CF.msgManager:sendMobileSignalMsg()
            end
        end)
    end
end

function RoomInfoView:initRoomInfoNodes()
    local nodeConf = self:getInfoNodeConfig() or {}
    for _, conf in ipairs(nodeConf) do
        local node
        if CF.roomData:isNewUI() then
            node = self:createOneInfoNodeNew(conf)
        elseif conf.NodeType == self.INFO_NODE_TYPE.ONE then
            node = self:createOneInfoNode(conf.KeyStr, conf.DefaultValueStr)
        elseif conf.NodeType == self.INFO_NODE_TYPE.TWO then
            node = self:createTwoInfoNode(conf.KeyStr1, conf.DefaultValueStr1, conf.KeyStr2, conf.DefaultValueStr2)
        end
        node:setName(conf.Name)
        node:setVisible(conf.DefaultVisible)
        self._roomInfoBg:addChild(node)
        table.insert(self._infoNodeList, node)
    end
    self:updateInfoNodeListLayout()
end

function RoomInfoView:initLeftRulePanel()
    if not self._leftRulePanel then
        return
    end
    self._leftRulePanel:setVisible(self:getLeftRuleVisible())
end

function RoomInfoView:getLeftRuleVisible()
    if not self:isHaveLeftRule() or CF.roomData:isGoldRoom() or CF.roomData:isPlayBack() then
        return false
    end
    return true
end

-- 该游戏是否有左上角规则按钮
function RoomInfoView:isHaveLeftRule()
    return false
end

--游戏规则更新
function RoomInfoView:onGameRuleChanged(event)
    local ruleStr = CF.roomData:getGameRule()
    self:setLeftRuleString(ruleStr)
end

function RoomInfoView:onBaseScoreChanged(event)
    if self and self.setOneInfoNodeValue and CF.roomData then
        self:setOneInfoNodeValue("baseScore", CF.roomData:getBaseScore())
    end
end

function RoomInfoView:onRuleBtnClicked(send, eventType)
    local uLeftUIRoot = self._uLeftRuleRoot
    local isVisible = not uLeftUIRoot:isVisible()
    uLeftUIRoot:setVisible(isVisible)
    uLeftUIRoot:stopAllActions()

    if isVisible then
        local delayAct = cc.DelayTime:create(4.0)
        local updateCallAct = cc.CallFunc:create(function() 
            uLeftUIRoot:setVisible(false)
        end)

        local sequenceAct = cc.Sequence:create(delayAct, updateCallAct)
        uLeftUIRoot:runAction(sequenceAct)
    end
    CF.game:getModule("IconAnimationManager"):reportData("规则")
end

function RoomInfoView:setLeftRuleString(strRule)
    strRule = strRule or ""
    local ruleText = self._uLeftRuleText
    local parent = self._uLeftRuleRoot

    if not ruleText or not parent then
        return
    end

    local adpatwidth = 15
    local adpatHeight = 8
    local ruleTab = string.split(strRule,"/")
    local textSize = ruleText:getContentSize()
    local totalCount = #ruleTab
    local totalHeight = adpatHeight + (textSize.height + adpatHeight) * totalCount
    
    parent:removeAllChildren()
    local maxLineWidth = 0
    for k, text in ipairs(ruleTab) do
        local tmpTextItem = ruleText:clone()
        local curPos = totalHeight - adpatHeight - (textSize.height + adpatHeight) * (k - 1)
        tmpTextItem:setPosition(adpatwidth, curPos)
        tmpTextItem:setString(text)
        tmpTextItem:setVisible(true)
        parent:addChild(tmpTextItem)

        local curItemWidt = tmpTextItem:getContentSize().width
        if maxLineWidth < curItemWidt then
            maxLineWidth = curItemWidt
        end
    end
    parent:setContentSize(cc.size(maxLineWidth + adpatwidth * 2, totalHeight))
end

function RoomInfoView:setOneInfoNodeValue(name, value)
    local node = self:getInfoNodeByName(name)
    if not node or not node._valueText then
        return
    end
    node._valueText:setString(value)
end

function RoomInfoView:setOneInfoNodeKeyStr(name, value)
    local node = self:getInfoNodeByName(name)
    if not node or not node._valueText then
        return
    end
    node._keyText:setString(value)
end

function RoomInfoView:setTwoInfoNodeValue(name, index, value)
    local node = self:getInfoNodeByName(name)
    if not node or not index or not node["_valueText" .. index] then
        return
    end
    node["_valueText" .. index]:setString(value)
end

function RoomInfoView:setInfoNodeVisible(name, visible)
    local node = self:getInfoNodeByName(name)
    if not node then
        return
    end
    node:setVisible(visible)
    self:updateInfoNodeListLayout()
end

function RoomInfoView:getInfoNodeByName(name)
    if not name or type(name) ~= "string" then
        return nil
    end
    for _, node in ipairs(self._infoNodeList) do
        if node:getName() == name then
            return node
        end
    end
    return nil
end

local NODE_HEIGHT = 35
local NODE_DIS = 8
local NODE_POS_X = 115
function RoomInfoView:updateInfoNodeListLayout()
    if CF.roomData:isNewUI() then
        self:updateInfoNodeListLayoutNew()
        return
    end
    local oldSize = self._roomInfoBg:getContentSize()
    local totalNodeCount = self:getTotalShowCount()
    self._roomInfoBg:setContentSize(cc.size(oldSize.width, (NODE_HEIGHT + NODE_DIS) * totalNodeCount + NODE_DIS + 5 * 2))
    local index = 0
    for _, node in ipairs(self._infoNodeList) do
        if node:isVisible() then
            index = index + 1
            node:setPosition(cc.p(NODE_POS_X, (totalNodeCount - index + 1 / 2) * NODE_HEIGHT + (totalNodeCount - index + 1) * NODE_DIS + 5))
        end
    end
end

local NEW_NODE_POS_Y = 35
local NEW_NODE_WIDTH = 180
function RoomInfoView:updateInfoNodeListLayoutNew()
    local totalNodeCount = self:getTotalShowCount()
    local index = 0
    for _, node in ipairs(self._infoNodeList) do
        if node:isVisible() then
            index = index + 1
            node:setPosition(cc.p((index-1/2) * NEW_NODE_WIDTH, NEW_NODE_POS_Y))
        end
    end
end

function RoomInfoView:getTotalShowCount()
    local totalShowCount = 0
    for _, node in ipairs(self._infoNodeList) do
        if node:isVisible() then
            totalShowCount = totalShowCount + 1
        end
    end
    return totalShowCount
end

function RoomInfoView:createOneInfoNodeNew(conf)
    if not self._newInfoNode or conf.img == nil then
        return
    end
    local newNode = self._newInfoNode:clone()
    CF.BindUITool.bindingNode(
        newNode,
        {
            ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
            ["_KW_TEXT_VALUE"] = {varName = "_valueText"}
        }
    )
    if newNode._imgTitle then
        newNode._imgTitle:loadTexture(conf.img, ccui.TextureResType.plistType)
    end
    if conf.DefaultValueStr and newNode._valueText then
        newNode._valueText:setString(conf.DefaultValueStr)
    end
    return newNode
end

function RoomInfoView:createOneInfoNode(key, value)
    if not self._oneInfoNode then
        return
    end
    local newNode = self._oneInfoNode:clone()
    CF.BindUITool.bindingNode(
        newNode,
        {
            ["_KW_TEXT_KEY"] = {varName = "_keyText"},
            ["_KW_TEXT_VALUE"] = {varName = "_valueText"}
        }
    )
    if key and newNode._keyText then
        newNode._keyText:setString(key)
    end
    if value and newNode._valueText then
        newNode._valueText:setString(value)
    end
    return newNode
end

function RoomInfoView:createTwoInfoNode(key1, value1, key2, value2)
    if not self._twoInfoNode then
        return
    end
    local newNode = self._twoInfoNode:clone()
    CF.BindUITool.bindingNode(
        newNode,
        {
            ["_KW_TEXT_TWO_1"] = {varName = "_keyText1"},
            ["_KW_TEXT_TWO_2"] = {varName = "_keyText2"},
            ["_KW_TEXT_TWO_VALUE_1"] = {varName = "_valueText1"},
            ["_KW_TEXT_TWO_VALUE_2"] = {varName = "_valueText2"}
        }
    )
    if key1 and newNode._keyText1 then
        newNode._keyText1:setString(key1)
    end
    if value1 and newNode._valueText1 then
        newNode._valueText1:setString(value1)
    end
    if key2 and newNode._keyText2 then
        newNode._keyText2:setString(key2)
    end
    if value2 and newNode._valueText2 then
        newNode._valueText2:setString(value2)
    end
    self:updateTwoInfoNodeTextPos(newNode)
    return newNode
end

function RoomInfoView:updateTwoInfoNodeTextPos(node)
    if not node._keyText1 or not node._valueText1 or not node._keyText2 or not node._valueText2 then
        return
    end
    local ketTextSize1 = node._keyText1:getContentSize()
    local ketTextPosX1 = node._keyText1:getPositionX()
    node._valueText1:setPositionX(ketTextPosX1 + ketTextSize1.width + 8)
    local ketTextSize2 = node._keyText2:getContentSize()
    local ketTextPosX2 = node._keyText2:getPositionX()
    node._valueText2:setPositionX(ketTextPosX2 + ketTextSize2.width + 8)
end

function RoomInfoView:onGameStart(event)
    self:flushBaseScore(true)
end

function RoomInfoView:hideBaseScore()
    self:flushBaseScore(false)
end

function RoomInfoView:flushBaseScore(isShow)
    local node = self:getInfoNodeByName("baseScore")
    if not node or not node._valueText then
        return
    end
    node._valueText:setVisible(isShow)
end

function RoomInfoView:onUpdateAddMultipleInfo(event)
    if event.msg == nil then
        return
    end
    if event.msg.data == nil then
        return
    end

    if event.msg.data.multi == nil then
        return
    end
    self:setInfoNodeVisible("addMultiple", true)
    self:setOneInfoNodeValue("addMultiple", "x" .. event.msg.data.multi)
end

return RoomInfoView
�=