local RecordsView = class("RecordsView", XH.ViewBase)

function RecordsView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BusinessAct/RecallAct/RecallActRecords.csb"
end

function RecordsView:getBindingInfo()
    return {
        ["_KW_SCROLLVIEW"] = { varName = "_scrollView" },
        ["_KW_HAVE_RECALL_MODEL"] = { varName = "_recallModel" },
        ["_KW_TEXT_NO_PEO_REACALL"] = { varName = "_recallPeople" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
    }
end

function RecordsView:getProxyEvents()
    return {
		{ module = XH.lobby:getModule("TeaHouseBusinessAct"), eventKeyName = "EVENT_TEAOWNER_MSG", callBack = "onEventTeaOwnerMsg" },
    }
end

function RecordsView:ctor()
    RecordsView.super.ctor(self)
    self:reqTeaOwnerMsg()
end

function RecordsView:reqTeaOwnerMsg()
    XH.lobby:getModule("TeaHouseBusinessAct"):reqPersonMsg()
end

function RecordsView:onEventTeaOwnerMsg(msg)
    if msg then
        self:initUI(msg.data)
    end
end

function RecordsView:initUI(msg)
    local personMsg = XH.lobby:getModule("TeaHouseBusinessAct"):getTeaNickWithUrl()
    if msg and msg.recallLists then
        self._scrollView:removeAllChildren()
        if #msg.recallLists == 0 then
            self._recallPeople:setVisible(true)
            return
        else
            self._recallPeople:setVisible(false)
        end
        local numberSet = 1
        for i = #msg.recallLists, 1, -1 do
            local recallModel = self._recallModel:clone()
            local numberData = XH.UITool.seekWidgetByName(recallModel, "_KW_TEXT_NUMBER")
            local imgHead = XH.UITool.seekWidgetByName(recallModel, "_KW_IMG_HEAD_BG")
            local nickName = XH.UITool.seekWidgetByName(recallModel, "_KW_TEXT_NAME")
            local fightsData = XH.UITool.seekWidgetByName(recallModel, "_KW_TEXT_FIGHTS")
            if numberData then
                numberData:setText(numberSet)
                numberSet = numberSet + 1
            end
            if imgHead then
                local url = ""
                if personMsg[msg.recallLists[i].nNumid] then
                    url = personMsg[msg.recallLists[i].nNumid].avarUrl or ""
                end
                self:setPlayerHead(imgHead, url)
            end
            if nickName then
                local name = ""
                if personMsg[msg.recallLists[i].nNumid] then
                    name = personMsg[msg.recallLists[i].nNumid].nickName or ""
                end
                if #name > 12 then
                    local maxLength = XH.StringTool.getMinimumValidBytesUTF8(name, 10)
                    name = string.sub(name, 1, maxLength) .. "..."
                end
                nickName:setText(name)
            end
            if fightsData then
                fightsData:setText(msg.recallLists[i].nCount)
            end
            recallModel:setVisible(true)
            self._scrollView:addChild(recallModel)
        end
        self._scrollView:setInnerContainerSize(cc.size(self._recallModel:getContentSize().width, self._recallModel:getContentSize().height * #msg.recallLists))
    end
end

function RecordsView:setPlayerHead(node, url)
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

function RecordsView:onTouchEventClose(send, eventType)
    self:close()
end

return RecordsView
