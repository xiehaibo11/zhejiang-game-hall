local LobbyShareNewView = class("LobbyShareNewView", XH.ViewBase)

function LobbyShareNewView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LobbyShare/LobbyShareNewView.csb"
end

function LobbyShareNewView:getBindingInfo()
    return {
        --
        ["_KW_BTN_CLOSE"] = {varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_AWARD_ITEM"] = {varName = "_KW_AWARD_ITEM"},
        ["_KW_BTN_SHARE"] = {varName = "_KW_BTN_SHARE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnShare"},
        ["_KW_LISTVIEW"] = {varName = "_KW_LISTVIEW"},
        ["_KW_PANEL_ITEM"] = {varName = "_KW_PANEL_ITEM"}
    }
end

function LobbyShareNewView:ctor(param)
    LobbyShareNewView.super.ctor(self)
    self:initUI()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_LOBBY_VIEW_SHARE, nil, {area_id = XH.areaData:getAreaID()})
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohfx25070901 ,{page = param.source})
end

function LobbyShareNewView:initUI()
    if self._awardListPosX == nil then
        self._awardListPosX = self._KW_LISTVIEW:getPositionX()
    end
    self._KW_LISTVIEW:setScrollBarOpacity(0)
    local shareInfo = XH.lobby:getModule("Share"):getShareInfo()
    if shareInfo ~= nil and shareInfo.award ~= nil and #shareInfo.award > 0 then
        for i = 1, #shareInfo.award do
            local temp = self._KW_PANEL_ITEM:clone()
            local picImg = temp:getChildByName("_KW_PIC_AWARD")
            local size = picImg:getContentSize()
            local headImage = XH.RemoteImage.new():setAnchorPoint(cc.p(0.5, 0.5)):setPosition(size.width * 0.5, size.height * 0.5):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(picImg)
            headImage:setUrl(shareInfo.award[i].propImgUrl or "")
            temp:getChildByName("_KW_TEXT_NAME"):setString("x" .. shareInfo.award[i].propCount)
            temp:setVisible(true)
            self._KW_LISTVIEW:addChild(temp)
        end
        if #shareInfo.award < 3 then
            local nWidth = #shareInfo.award * self._KW_PANEL_ITEM:getContentSize().width
            local startPos = (self._KW_LISTVIEW:getContentSize().width - nWidth) * 0.5
            self._KW_LISTVIEW:setPositionX(self._awardListPosX + startPos)
        end
        self._KW_LISTVIEW:setInnerContainerSize(cc.size(self._KW_PANEL_ITEM:getContentSize().width * #shareInfo.award, self._KW_PANEL_ITEM:getContentSize().height))
    end
end

function LobbyShareNewView:reqShareAwardFailed()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohfx25070904 ,{page = "大厅", page_item_id = "失败"})
end

function LobbyShareNewView:reqShareAward()
    local srsList = XH.netEngine:getAllSRS()
    local closeCount = 0
    for k, _ in pairs(srsList) do 
        if srsList[k]:getLinkState() == XH.SRS_LINK_STATE.LINK_STATE_SUCCESS then
            closeCount = closeCount + 1
        end
    end
    if closeCount == #srsList then        
        XH.lobby:getModule("Share"):setShareRewardDelay()
    else
        XH.lobby:getModule("Share"):reqLobbyShareAward()
    end

    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohfx25070904 ,{page = "大厅", page_item_id = "成功"})
    if self.close then
        self:close()
    end
end

function LobbyShareNewView:onBtnShare()
    XH.lobby:getModule("Share"):startShareFzbLobby(self.reqShareAward, self.reqShareAwardFailed, self)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_LOBBY_VIEW_CLICK, nil, {area_id = XH.areaData:getAreaID()})
end

function LobbyShareNewView:onBtnClose()
    self:close()
end

return LobbyShareNewView
