local CoinRewardsView = class("CoinRewardsView", XH.ViewBase)
local LocalConfig = import("...Configs.LocalConfig")

function CoinRewardsView:getCSBPath()
    return XH.Bridge:getCCSResPath("CoinRewards/View.csb")
end

function CoinRewardsView:getBindingInfo()
    return {
        ["_KW_BG"] = {varName = "_KW_BG"},
        ["_KW_LIST_TAB"] = {varName = "_listTab"},
        ["_KW_ITEM_TAB"] = {varName = "_itemTab"},
        ["_KW_PANEL_EMPTY"] = {varName = "_panelEmpty"},
        ["_KW_PANEL_CONTENT"] = {varName = "_panelContent", type = XH.UI_TYPE.PACKAGEVIEW},
        ["_KW_FULL_BACK"] = {varName = "_fullBack"},
        ["_KW_ITEM_ACT"] = {varName = "_itemAct"},
        ["_KW_ANI_NODE"] = {varName = "_aniNode"},
        ["_KW_CLOSE_BTN"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function CoinRewardsView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("DailyLuckyDraw"), eventKeyName = "EVENT_PLAYER_INFO", callBack = "updatePanelContent"},
        {module = XH.Bridge:getModule(LocalConfig.MP.ActPeGP), eventKeyName = "EVENT_ACT_INFO", callBack = "updatePanelContent"},
        {module = XH.lobby:getModule("LuckyTask"), eventKeyName = "EVENT_NotifyPageStatus", callBack = "updatePanelContent"},
        {module = XH.Bridge:getModule(LocalConfig.MP.CoinRewards), eventKeyName = "EVENT_UPDATE_RED_POINT", callBack = "updateRedPoint"},
        {module = XH.lobby:getModule("UnlimitedGift"), eventKeyName = "EVENT_UNGIFT_BTN_STATUS", callBack = "updatePanelContent"},
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "updatePanelContent" },
        {module = XH.Bridge:getModule(LocalConfig.MP.CoinRewards), eventKeyName = "EVENT_UPDATE_LEFT_TAB", callBack = "initLeftTabList"},
    }
end

function CoinRewardsView:ctor(param)
    param = param or {}
    CoinRewardsView.super.ctor(self, param)
    self._page = param.page or "金币大厅"
    self._selectIndex = 1
    self._itemTab:setVisible(false)
    self._itemAct:setVisible(false)

    self._panelContent:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
    self._panelContent:setPreciseClick(true)
    self._panelContent:setItemModel(self._itemAct)
    self._panelContent:setItemUpdateEvent(handler(self, self.showItem))
    self._panelContent:setItemClickEvent(handler(self, self.clickItem))

    self:initLeftTabList()
    self:updateRedPoint()
    self._listTab:setScrollBarEnabled(false)
    XH.UITool.fullWidth(self._fullBack)
    self:initAni()
end

-- 关闭按钮
function CoinRewardsView:onTouchEventClose(send, event)
    self:close()
end

function CoinRewardsView:initAni()
    self._KW_BG:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "res/animation/Lobby/Base/NewGoldHall/CoinRewards/zzb_jbdt_hqjb_ani.json", animationName = "cx", boneName = "di", slotName = "di"})
    self._listTab:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "res/animation/Lobby/Base/NewGoldHall/CoinRewards/zzb_jbdt_hqjb_ani.json", animationName = "cx", boneName = "ce", slotName = "ce"})
    XH.SpineManager:playAniWithComplete(self._aniNode, "res/animation/Lobby/Base/NewGoldHall/CoinRewards/", "zzb_jbdt_hqjb", "cx", false, "loop", true)
end

function CoinRewardsView:initLeftTabList()
    self._config, self._configFunc = XH.Bridge:getModule(LocalConfig.MP.CoinRewards):getConfig()
    if not self._config or #self._config <= 0 then
        return
    end
    self._listTab:removeAllChildren()
    for k, v in ipairs(self._config) do
        local btnTab = self._itemTab:clone()
        btnTab:setVisible(true)
        XH.UITool.setText(btnTab, "_txtTitle", v.name or "")
        XH.UIButton.create(
            btnTab,
            XH.UIButton.CLICK_STYLE.NOSCALE,
            function()
                self:updateLeftTabStateChanged(btnTab, k)
            end
        )
        self._listTab:addChild(btnTab)
    end

    self._leftTabBtns = self._listTab:getChildren()
    self:updateLeftTabStateChanged(self._leftTabBtns[1], 1)
end

function CoinRewardsView:updateLeftTabStateChanged(selectBtn, index)
    self._selectIndex = index
    for index, btn in pairs(self._leftTabBtns) do
        local isSelected = btn == selectBtn
        btn:setTouchEnabled(not isSelected)
        local imgSelect = btn:getChildByName("_imgSelect")
        if imgSelect then
            imgSelect:setVisible(isSelected)
        end
        local textTitle = btn:getChildByName("_txtTitle")
        if textTitle then
            textTitle:setTextColor(isSelected and cc.c3b(0x09, 0x0b, 0x05) or cc.c3b(0xff, 0xff, 0xff))
            textTitle:enableOutline(isSelected and cc.c3b(0xff, 0xff, 0xff) or cc.c3b(0x00, 0x00, 0x00), 3)
        end
    end
    self:updatePanelContent()
end

function CoinRewardsView:updatePanelContent()
    self._config, self._configFunc = XH.Bridge:getModule(LocalConfig.MP.CoinRewards):getConfig()
    if not self._config or not #self._config then
        return
    end
    self._panelContent:setData(self._config[self._selectIndex].content or {})
    self._panelEmpty:setVisible(#self._config[self._selectIndex].content == 0)
end

function CoinRewardsView:updateRedPoint()
    if not self._leftTabBtns or #self._leftTabBtns <= 0 then
        return
    end
    for index, btn in pairs(self._leftTabBtns) do
        local showRed = XH.Bridge:getModule(LocalConfig.MP.CoinRewards):getShowRedPointByTitle(index)
        btn:getChildByName("_KW_IMG_RED_POINT"):setVisible(showRed)
    end
end

function CoinRewardsView:showItem(item, datas, index)
    local resIndex = datas[index].resIndex or 1
    local titleRes = string.format("CoinRewards_Title_Title_%d.png", resIndex)
    local logoRes = string.format("CoinRewards_Img_icon_%d.png", resIndex)
    if item then
        item:setCascadeOpacityEnabled(true)
        item:setVisible(true)
        -- 标题
        if cc.SpriteFrameCache:getInstance():getSpriteFrame(titleRes) then
            local imgTitle = item:getChildByName("_KW_IMG_TITLE")
            if imgTitle then
                imgTitle:loadTexture(titleRes, ccui.TextureResType.plistType)
                imgTitle:setVisible(true)
                imgTitle:ignoreContentAdaptWithSize(true)
            end
            local title = item:getChildByName("_KW_TEXT_TITLE")
            if title then
                title:setVisible(false)
            end
        else
            local imgTitle = item:getChildByName("_KW_IMG_TITLE")
            if imgTitle then
                imgTitle:setVisible(false)
            end
            local title = item:getChildByName("_KW_TEXT_TITLE")
            if title then
                title:setString(XH.StringTool.getTrimName(datas[index].name, 12))
                title:setVisible(true)
            end
        end
        -- logo
        local logo = item:getChildByName("_KW_IMG_LOGO")
        if logo then
            logo:loadTexture(logoRes, ccui.TextureResType.plistType)
            logo:ignoreContentAdaptWithSize(true)
        end
        -- 红点
        local redPoint = item:getChildByName("_KW_IMG_RED_POINT")
        if redPoint then
            local red = false
            if datas[index].key and datas[index].key ~= "" and self._configFunc[datas[index].key] and self._configFunc[datas[index].key].checkRed then
                red = self._configFunc[datas[index].key].checkRed()
            end
            redPoint:setVisible(red)
        end
        -- 倒计时
        local textTime = item:getChildByName("_KW_TEXT_TIME")
        if textTime then
            textTime:setText("")
            local timeStr = ""
            if datas[index].key and datas[index].key ~= "" and self._configFunc[datas[index].key] and self._configFunc[datas[index].key].timeStr then
                timeStr = self._configFunc[datas[index].key].timeStr()
                textTime:setText("剩余" .. timeStr)
            end
        end
    end
end

function CoinRewardsView:clickItem(item, datas, index)
    if datas[index].key and datas[index].key ~= "" and self._configFunc[datas[index].key] then
        local throwName = self._configFunc[datas[index].key].throwName or ""
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060404, {page = self._page, page_item_id = throwName})
        self._configFunc[datas[index].key].click()
        XH.viewManager:closeView("CoinRewardsView")
    end
end

function CoinRewardsView:onCleanup()
    CoinRewardsView.super.onCleanup(self)
end

return CoinRewardsView
�!