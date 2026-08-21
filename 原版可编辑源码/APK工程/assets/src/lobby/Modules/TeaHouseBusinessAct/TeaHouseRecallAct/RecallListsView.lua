local RecallListsView = class("RecallListsView", XH.ViewBase)

local KW_DEFAULT_PANEL_MAX = 5

function RecallListsView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BusinessAct/RecallAct/RecallActRecallMembers.csb"
end

function RecallListsView:getBindingInfo()
    return {
        ["_KW_IMG_HEAD_BG"] = { varName = "_headBg" },
        ["_KW_SCROLLVIEW"] = { varName = "_scrollView" },
        ["_KW_HEAD_MSG_MODEL"] = { varName = "_headMsgModel" },
        ["_KW_PANEL_LINE_MAX"] = { varName = "_linePanelMax" },
        ["_KW_TEXT_NO_PEOPLE"] = { varName = "_noPeoPleRecall" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_GORECALL"] = { varName = "_btnGoRecall", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRecallFriend" },
    }
end

function RecallListsView:getProxyEvents()
    return {
		{ module = XH.lobby:getModule("TeaHouseBusinessAct"), eventKeyName = "EVENT_TEAOWNER_MSG", callBack = "onEventTeaOwnerMsg" },
    }
end

function RecallListsView:ctor()
    RecallListsView.super.ctor(self)
    self:reqTeaOwnerMsg()
end

function RecallListsView:reqTeaOwnerMsg()
    XH.lobby:getModule("TeaHouseBusinessAct"):reqPersonMsg()
end

function RecallListsView:onEventTeaOwnerMsg(msg)
    if msg then
        self:initUI(msg.data)
    end
end

function RecallListsView:initUI(msg)
    local function splitItemsData(itemsData)
        local limit = KW_DEFAULT_PANEL_MAX
        local tmpItemData = { }
        local index = 0
        for i = 1, #itemsData do
            if math.fmod(i - 1, limit) == 0 then
                index = index + 1
                tmpItemData[index] = { }
            end
            tmpItemData[index][#tmpItemData[index] + 1] = itemsData[i]
        end
        return tmpItemData
    end
    if msg and msg.needRecalls then
        if #msg.needRecalls == 0 then
            self._noPeoPleRecall:setVisible(true)
            return
        else
            self._noPeoPleRecall:setVisible(false)
        end
        self._scrollView:removeAllChildren()
        local splitData = splitItemsData(msg.needRecalls)
        for i = 1, #splitData do
            self:initPanelData(splitData[i])
        end
        self._scrollView:setInnerContainerSize(cc.size(self._linePanelMax:getContentSize().width, self._linePanelMax:getContentSize().height * #splitData))
    end
end

function RecallListsView:initPanelData(panelData)
    local personMsg = XH.lobby:getModule("TeaHouseBusinessAct"):getTeaNickWithUrl()
    local panelModel = self._linePanelMax:clone()
    panelModel:setVisible(true)
    for i = 1, #panelData do
        local recallMemberModel = self._headMsgModel:clone()
        panelModel:addChild(recallMemberModel)
        local nickName = XH.UITool.seekWidgetByName(recallMemberModel, "_KW_TEXT_NICKNAME")
        if nickName then
            local name = ""
            if personMsg[panelData[i]] then
                name = personMsg[panelData[i]].nickName or ""
            end
            if #name > 12 then
                local maxLength = XH.StringTool.getMinimumValidBytesUTF8(name, 10)
                name = string.sub(name, 1, maxLength) .. "..."
            end
            nickName:setText(name)
        end
        local imgHead = XH.UITool.seekWidgetByName(recallMemberModel, "_KW_IMG_HEAD_BG")
        if imgHead then
            local url = ""
            if personMsg[panelData[i]] then
                url = personMsg[panelData[i]].avarUrl or ""
            end
            self:setPlayerHead(imgHead, url)
        end
        local getPosChild = XH.UITool.seekWidgetByName(panelModel, "_KW_POS_" .. i)
        if getPosChild then
            recallMemberModel:setVisible(true)
            recallMemberModel:setPosition(getPosChild:getPosition())
        end
    end
    self._scrollView:addChild(panelModel)
end

function RecallListsView:setPlayerHead(node, url)
--    if url == "" or not url then
--        url = XH.lobby:getModule("TeaHouseBusinessAct").DEFAULT_PEOPLE_HEAD
--    end
    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new()
    :setTouchEnabled(false)
    :setPosition(size.width / 2, size.height / 2 + 2)
    :setContentSize(size.width, size.height)
    :addTo(node)

    imageNode:setDefaultTexture("_0002_mrtx_m.png", ccui.TextureResType.plistType)
    imageNode:setMaxContentSize(size)
    imageNode:setUrl(url, true)
end

function RecallListsView:onTouchEventClose(send, eventType)
    self:close()
end

function RecallListsView:onTouchEventRecallFriend(send, eventType)
    XH.teaHouseManager:shareToFriends()
end

return RecallListsView
