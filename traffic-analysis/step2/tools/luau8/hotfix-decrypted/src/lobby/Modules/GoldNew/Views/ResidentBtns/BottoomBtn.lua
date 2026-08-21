local BtnBase = import("..BtnBase")
local BottoomBtn = class("BottoomBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")
local LobbyConfig = XH.Bridge:require("lobby.Modules.Lobby.Config")
local RedPointManager = import("...Manager.RedPointManager")

function BottoomBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("BottomBtn.csb")
end

function BottoomBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function BottoomBtn:getBindingInfo()
    return {
        ["_imgBtn"] = {varName = "_imgIcon", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_imgLine"] = {varName = "_imgLine"},
        ["_text"] = {varName = "_text"},
        ["_redPoint"] = {varName = "_redPoint"},
        ["_new"] = {varName = "_new"},
    }
end

function BottoomBtn:getProxyEvents()
    local e = BottoomBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("TabsActivity"), eventKeyName = "EVENT_HUO_DONG_RED_POS", callBack = "onEventRedPos"})
    table.insert(e, {module = XH.Bridge:getModule(LocalConfig.MP.Mail), eventKeyName = "MAIL_EVENT_CHECKNEW", callBack = "refreshMailRed"})
    table.insert(e, {module = XH.Bridge:getModule("Share"), eventKeyName = "EVENT_LOBBY_SHARE_DATA", callBack = "onEventFlushShareInfo"})
    return e
end

function BottoomBtn:ctor(id, areaId, cfg)
    BottoomBtn.super.ctor(self, id, areaId, cfg)
    if self._text then
        local defaultCfg = LocalConfig.BTN_CFG[self._id]
        self._text:setString(defaultCfg.name)
    end
    if self._id == LocalConfig.BTN_ID.SHARE then
        self._redPoint:setVisible(XH.lobby:getModule("Share"):checkShowRedPoint())
    elseif self._id == LocalConfig.BTN_ID.ZHUANG_BAN then
        RedPointManager:registerNode("zhuangban")
        RedPointManager:addListener("zhuangban", function(state)
            if tolua.isnull(self) then
                return
            end
            self._new:setVisible(state)
        end)
    end
end

function BottoomBtn:addTestNode()
    local txt = cc.Label:createWithSystemFont("test", "Arial", 20)
    local size = self:getContentSize()
    -- txt:setAnchorPoint(0.5, 0.5)
    txt:setPosition(self:getContentSize().width / 2, self:getContentSize().height / 2 - 30)
    txt:setString("" .. self._id)
    self:addChild(txt)
end

function BottoomBtn:onClick()
    self:throwClickData()
    if self._id == LocalConfig.BTN_ID.BAG then
        XH.Bridge:getModule("GoldNew"):openFullView("bag")
    elseif self._id == LocalConfig.BTN_ID.SHOP then
        XH.Bridge.viewManager:openView("GoldHallShopView", nil, {})
    elseif self._id == LocalConfig.BTN_ID.ACT then
        XH.Bridge:getModule("GoldNew"):openFullView("GoldHallActivityView")
    elseif self._id == LocalConfig.BTN_ID.MORE then
        XH.Bridge:getModule("GoldNew"):dispatchEvent({
            name = "EVENT_CHANGE_BOTTOM_MORE_VISIBLE",
            msg = {pos = cc.Node.convertToWorldSpace(self, cc.p(self:getContentSize().width / 2 + 50, self:getContentSize().height + 10))}
        })
    elseif self._id == LocalConfig.BTN_ID.SHARE then
        XH.Bridge:getModule("Share"):setShareScene("金币大厅", "分享按钮")
        local shareInfo = XH.Bridge:getModule("Share"):getShareInfo()
        if shareInfo == nil or shareInfo.award == nil or #shareInfo.award == 0 then
            XH.Bridge:getModule("Lobby"):onTouchShare()
        else
            XH.Bridge.viewManager:openView("LobbyShareNewView", nil, {source = "金币大厅"})
        end
    elseif self._id == LocalConfig.BTN_ID.ZHUANG_BAN then
        RedPointManager:setState("zhuangban", false)
        cc.UserDefault:getInstance():setBoolForKey("EVENT_CLICK_ZB_BTN_" .. XH.playerData:getNumberID(), true)
        BottoomBtn.super.onClick(self)
    elseif self._id == LocalConfig.BTN_ID.CUSTOMER_BOTTOM then
        XH.Bridge:gotoKefu("GOLDLOBBY")
    else
        BottoomBtn.super.onClick(self)
    end
end

function BottoomBtn:showLine(bShow)
    self._imgLine:setVisible(bShow)
end

function BottoomBtn:onEventRedPos(msg)
    if msg then
        -- self:setMenuIconRedPointVisible(LobbyConfig.ICON_ID.HUO_DONG, msg.data)
    end
end

function BottoomBtn:refreshMailRed(event)
    if self._id ~= LocalConfig.BTN_ID.MAIL then
        return
    end
    local cnt = event.count or 0
    local awardCnt = event.awardCount or 0
    self._redPoint:setVisible(awardCnt > 0 or cnt > 0)
end

function BottoomBtn:onEventFlushShareInfo(event)
    if self._id ~= LocalConfig.BTN_ID.SHARE then
        return
    end
    self._redPoint:setVisible(XH.lobby:getModule("Share"):checkShowRedPoint())
end

return BottoomBtn
�