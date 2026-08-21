local PersonalCenterView = class("PersonalCenterView", XH.ViewBase)
local PersonalCenterCinfig = require("lobby.Modules.PersonalCenter.Config") 

function PersonalCenterView:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PersonalCenterView.csb"
end

function PersonalCenterView:getBindingInfo()
    return{
        ["_KW_VIEWTAB_LIST"] = { varName = "_listTab" },
        ["_KW_VIEWTAB_BTN_ITEM"] = { varName = "_btnTabItem", onTouchEnded = "onTouchEventViewTab", type = XH.UI_TYPE.BUTTON },
        ["_KW_LAYER_NODE"] = { varName = "_nodeLayer" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", onTouchEnded = "close", type = XH.UI_TYPE.IMAGE_TOBUTTON },
        ["_KW_IMG_TITLE"] = { varName = "_imageTitle", onTouchEnded = "onTouchEventTitle"},
        ["_KW_TEXT_CHANNEL"] = {varName = "_textChannel"},
    }
end

function PersonalCenterView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_VIP_LAYER_VIP_CONFIG", callBack = "eventVipConfig" },
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_VIP_LAYER_VIP_INFO", callBack = "eventVipInfo" },
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_VIP_LAYER_SHOW_TAB_LAYER", callBack = "eventShowTabLayer" },
    }
end

function PersonalCenterView:ctor(param)
    param = param or {}
    PersonalCenterView.super.ctor(self, param)
    self:initBackGround()

    XH.lobby:getModule("PersonalCenter"):getVipSysteamData()
    self._tabBtnList = {}
    self._viewList = {}
    self._selectTab = 1
    self:initUI()
end

function PersonalCenterView:initUI()
    self:initTabBtn()
    self:chooseTab(self._selectTab)
end

function PersonalCenterView:initTabBtn()
    self._tabBtnList = {}
    self._listTab:removeAllChildren()

    local tabConfigList = PersonalCenterCinfig.KW_VIEW_TAB
    for i = 1, #tabConfigList do
        local tabConfig = tabConfigList[i]
        if not tabConfig.judgeShowFun or (tabConfig.judgeShowFun and self[tabConfig.judgeShowFun](self)) then
            local tabBtn = self._btnTabItem:clone()
            tabBtn:setTag(i)
            tabBtn:setTitleText(tabConfig.tabName)
            if tabConfig.tabName == "手机绑定" and XH.playerData:isBindPhone() then
                tabBtn:setTitleText("手机换绑")
            end
            tabBtn:setTitleColor(cc.c3b(191, 108, 29))
            self._tabBtnList[#self._tabBtnList + 1] = tabBtn
            self._listTab:addChild(tabBtn,i)
        end
    end
end

function PersonalCenterView:onTouchEventViewTab(send, eventType)
    if tonumber(send:getTag()) ~= self._selectTab then
        self:chooseTab(send:getTag())
        self._selectTab = send:getTag()
    end
end

function PersonalCenterView:eventShowTabLayer(event)
    if event and event.data then
        self._selectTab = event.data
        self:chooseTab(event.data)
    end
end

function PersonalCenterView:chooseTab(tabTag)
    local tabConfigList = PersonalCenterCinfig.KW_VIEW_TAB
    for i = 1, #self._tabBtnList do
        if i == tabTag then
            self._tabBtnList[i]:setEnabled(false)
            self._tabBtnList[i]:setTitleColor(cc.c3b(255, 255, 255))
            if tabConfigList[i] and tabConfigList[i].viewName ~= "" then
                self:showTabLayer(tabConfigList[i].viewName)
            end
            if tabConfigList[i] and tabConfigList[i].throwData then
                XH.throwDataManager:recordButtonClick(tabConfigList[i].throwData)
            end 
        else
            self._tabBtnList[i]:setEnabled(true)
            self._tabBtnList[i]:setTitleColor(cc.c3b(191, 108, 29))
        end
    end
end

function PersonalCenterView:showTabLayer(showView)
    if showView then
        for viewName,_ in pairs(self._viewList) do
            self._viewList[viewName]:setVisible(false)
        end
        if self._viewList[showView] then
            self._viewList[showView]:setVisible(true)
        else
            local node = require("lobby.Modules.PersonalCenter." .. showView).new(nil, self)
            self._viewList[showView] = node
            self._nodeLayer:addChild(node)
        end
    end
end

-- 设置名称变为渠道号
function PersonalCenterView:setChannelWithId()
    local manifestPath = un.FileSystem.getWritePath() .. un.const.HotFixPath .. "harbor/Lobby/project.manifest"
    local localManifest = un.hotfix.Manifest.new(manifestPath)
    local curChannel = ""
    local curVersion = ""
    if localManifest:isLoaded() then
        curChannel = localManifest:getChannel()
        curVersion = localManifest:getVersion()
    end
    local secondCmdConfigs = nil
    pcall( function()
        secondCmdConfigs = require("local.Debug.Cmd.ReChannel.Config")

    end )
    if secondCmdConfigs then
        for index = 1, #secondCmdConfigs do
            local name = secondCmdConfigs[index].name
            if secondCmdConfigs[index].channel == curChannel then
                self._textChannel:setVisible(true)
                self._textChannel:setText("当前渠道：" .. name .. " 版本：" .. curVersion)
                break
            end
        end
    end
end

function PersonalCenterView:onTouchEventTitle()
    if self._handleClearCache == nil then
        self._handleClearCache = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        handler(self, self.removeHandleClearCache), 10, false)
        self._diamondClickCnt = 1
        pcall( function()
            XH.viewManager:openView("DebugUI")
        end )
        self:setChannelWithId()
    else
        self._diamondClickCnt = self._diamondClickCnt + 1
        if self._diamondClickCnt == 5 then
            -- XH.TipTool.showToast("已打开", 3)
            pcall( function()
                local checker = require("app.hotupdate.entry.EntryResChecker")
                checker._startHotFix()
            end )
        end
    end
end

function PersonalCenterView:removeHandleClearCache()
    if self._handleClearCache then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._handleClearCache)
        self._handleClearCache = nil
    end
end

function PersonalCenterView:onExit()
    PersonalCenterView.super.onExit()
    self:removeHandleClearCache()
end

function PersonalCenterView:eventVipConfig(event)
    if event and self:judgeShowVipLayer() then
        self:initUI()
    end
end

function PersonalCenterView:eventVipInfo(event)
    if event and self:judgeShowGiveLayer() then
        self:initUI()
    end
end

function PersonalCenterView:judgeShowVipLayer()
    local vipConfig = XH.lobby:getModule("PersonalCenter"):getVipConfig(false)
    if vipConfig and vipConfig.start_time <= os.time() and os.time() <= vipConfig.end_time then
        return true
    end
    return false
end

function PersonalCenterView:judgeShowGiveLayer()
    local vipInfo = XH.lobby:getModule("PersonalCenter"):getVipInfo(false)
    local vipConfig = XH.lobby:getModule("PersonalCenter"):getVipConfig(false)
    if vipInfo and self:judgeShowVipLayer() then
        for _, vip in ipairs(vipConfig.vip_config) do
            if vip.vip_id == vipInfo.vip_id then
                if vip.can_trans_prop then
                    return true
                else
                    return false
                end
            end
        end
    end
    return false
end

return PersonalCenterView�