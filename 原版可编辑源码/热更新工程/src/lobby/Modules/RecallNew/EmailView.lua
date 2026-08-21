-- 召回信
local RecallNewEmailView = class("RecallNewEmailView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")
local ViewManagerConfig = require("app.Manager.ViewManagerConfig")

function RecallNewEmailView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewEmailView.csb"
end

function RecallNewEmailView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_BTN_OPEN_ACT"] = { varName = "_KW_BTN_OPEN_ACT", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickEmail" },
        ["_KW_PANEL_EMAIL"] = { varName = "_KW_PANEL_EMAIL" },
        ["_KW_PANEL_EMAIL_EX"] = { varName = "_KW_PANEL_EMAIL_EX", onTouchEnded = "onClickShowNext" },
        ["_KW_PANEL_BASE"] = { varName = "_KW_PANEL_BASE" },
        ["_KW_PANEL_BG"] = { varName = "_KW_PANEL_BG", onTouchEnded = "onClickOpen" },
        ["_KW_TEXT_SHOW"] = { varName = "_KW_TEXT_SHOW" },
        ["_KW_LINE_1"] = { varName = "_KW_LINE_1" },
        ["_KW_LINE_2"] = { varName = "_KW_LINE_2" },
        ["_KW_LINE_3"] = { varName = "_KW_LINE_3" },
        ["_KW_LINE_4"] = { varName = "_KW_LINE_4" },
        ["_KW_TEXT_1_1"] = { varName = "_KW_TEXT_1_1" },
        ["_KW_TEXT_1_2"] = { varName = "_KW_TEXT_1_2" },
        ["_KW_TEXT_2_1"] = { varName = "_KW_TEXT_2_1" },
        ["_KW_TEXT_4_1"] = { varName = "_KW_TEXT_4_1" },
        ["_KW_TEXT_4_2"] = { varName = "_KW_TEXT_4_2" },
        ["_KW_TEXT_3_1"] = { varName = "_KW_TEXT_3_1" },
        ["_KW_TEXT_3_2"] = { varName = "_KW_TEXT_3_2" },
        ["_KW_ANI_OPEN_ACT"] = { varName = "_KW_ANI_OPEN_ACT" },
        ["_KW_PANEL_ANI_BOOM"] = { varName = "_KW_PANEL_ANI_BOOM" },
        ["_KW_PANEL_BASE_EX"] = { varName = "_KW_PANEL_BASE_EX" },
    }
end

function RecallNewEmailView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_GIFT", callBack = "flushActInfo" },
    }
end

function RecallNewEmailView:flushActInfo()
    self._KW_PANEL_BG:setTouchEnabled(true)
end

function RecallNewEmailView:onClickShowNext()
    self._isClickNext = true
    self:startShow()
    self:setGoldSchedule()
end

function RecallNewEmailView:onClickOpen()
    if self._isClick then
        return
    end
    self._isClick = true
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080604, { page = self._scene or XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay() })
    if self._isFirst then
        XH.lobby:getModule("RecallNew"):reqClickReBack()
    end
    self:initData()
    self._isOpen = true
    -- 开始播放动画
    self:initSecondUI()
    self._KW_PANEL_EMAIL_EX:setVisible(true)
    self._KW_PANEL_EMAIL:setVisible(true)
    self._showIndex = 1
    XH.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        if not self._isClickNext then
            self:startShow()
        end
    end, 0.6)
    self:setGoldSchedule()
end

function RecallNewEmailView:onCleanup()
    self:removeGoldSchedule()
    RecallNewEmailView.super.onCleanup(self)
end

function RecallNewEmailView:removeGoldSchedule()
    if self._goldListener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._goldListener)
    end
    self._goldListener = nil
end

function RecallNewEmailView:setGoldSchedule()
    self:removeGoldSchedule()
    self._goldListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if not self or tolua.isnull(self) then
            return
        end
        self:startShow()
    end, 2, false)
end

function RecallNewEmailView:showFadeIn(node)
    node:setOpacity(0)
    node:setVisible(true)
    node:stopAllActions()
    node:runAction(cc.FadeIn:create(1))
end

function RecallNewEmailView:startShow()
    if self._showList[self._showIndex] then
        if self._showIndex == #self._showList then
            local lastShowList = { self._KW_BTN_OPEN_ACT, self._KW_TEXT_SHOW }
            for i = 1, #lastShowList do
                if lastShowList[i] then
                    self:showFadeIn(lastShowList[i])
                end
            end
        else
            self:showFadeIn(self._showList[self._showIndex])
        end
        self._showIndex = self._showIndex + 1
    end
end

-- 构造数据
function RecallNewEmailView:initData()
    local info = XH.lobby:getModule("RecallNew"):getGiftInfo()
    self._showList = {}
    self._showList[#self._showList + 1] = self._KW_LINE_1
    self._showList[#self._showList + 1] = self._KW_LINE_2
    if info.gameNum and info.gameNum >= 10 then
        self._showList[#self._showList + 1] = self._KW_LINE_3
    end
    if info.friendNum and info.friendNum >= 4 then
        self._showList[#self._showList + 1] = self._KW_LINE_4
        if #self._showList == 3 then
            self._KW_LINE_4:setPosition(self._KW_LINE_3:getPosition())
        end
    end
    if info.playDay >= 3650 then
        self._KW_TEXT_1_1:setString("多年时间")
        self._KW_TEXT_1_2:setString("")
    else
        self._KW_TEXT_1_1:setString(info.playDay or 0)
    end
    self._KW_TEXT_1_2:setPositionX(self._KW_TEXT_1_1:getPositionX() + self._KW_TEXT_1_1:getContentSize().width + 15)
    self._KW_TEXT_2_1:setString(os.date("%Y年%m月%d日", info.lastTime or os.time()))
    self._KW_TEXT_3_1:setString(info.gameNum or 0)
    self._KW_TEXT_3_2:setPositionX(self._KW_TEXT_3_1:getPositionX() + self._KW_TEXT_3_1:getContentSize().width + 15)
    self._KW_TEXT_4_1:setString(info.friendNum or 0)
    self._KW_TEXT_4_2:setPositionX(self._KW_TEXT_4_1:getPositionX() + self._KW_TEXT_4_1:getContentSize().width + 15)
    self._showList[#self._showList + 1] = ""    -- 空文本显示按钮
end

function RecallNewEmailView:onClickEmail()
    if self._isFirst then
        local info = XH.lobby:getModule("RecallNew"):getGiftInfo()
        if info.isRewardGift == false then
            XH.lobby:getModule("RecallNew"):rewardReBackGiftRequest()
        end
        XH.viewManager:openView("RecallNewView", nil, XH.lobby:getModule("RecallNew"):isHideFeeTab() and RecallNewConfig.Tab.GIFT or RecallNewConfig.Tab.FEE, "大厅")
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080605, { block_label = "开启回归旅程", page = self._scene or XH.lobby:getModule("RecallNew"):getCurScene() })
    self:close()
end

function RecallNewEmailView:onClickClose()
    self:close()
end

function RecallNewEmailView:ctor(isOpened, scene)
    RecallNewEmailView.super.ctor(self)
    self._showList = {}
    self._scene = scene
    if not isOpened then
        self._isFirst = true
        if ViewManagerConfig.MultViews["RecallNewEmailView"] then
            for i = 1, #ViewManagerConfig.MultViews["RecallNewEmailView"] do
                XH.viewManager:closeView(ViewManagerConfig.MultViews["RecallNewEmailView"][i])
            end
        end
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080603, { page = self._scene or XH.lobby:getModule("RecallNew"):getCurScene() })
    end
    if self._isFirst then
        XH.SysTool.performDelayOnce(function()
            if not self or tolua.isnull(self) then
                return
            end
            self:initFirstUI()
        end, 1 / 30)
    end
    self:initUI(isOpened)
    XH.SpineManager:playAni(self._KW_ANI_OPEN_ACT, "res/animation/Common/", "zzb_ty_ansg", "animation", true)
end

function RecallNewEmailView:initFirstUI()
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hghd_hgyq/zzb_hghd_hgyq.atlas",
        tex = "animation/Lobby/Base/zzb_hghd_hgyq/zzb_hghd_hgyq.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "cxloop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    local size = self._KW_PANEL_BASE:getContentSize()
    dargonBones:update(0)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
    self._KW_PANEL_BASE:addChild(dargonBones)
end

function RecallNewEmailView:initSecondUI()
    self._KW_PANEL_BASE:setVisible(false)
    self._KW_PANEL_BASE_EX:removeAllChildren()
    XH.SpineManager:playAni(self._KW_PANEL_ANI_BOOM, "res/animation/Lobby/Base/pop_ani_base/", "zzb_ty_tcbk2", "animation2", false)
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hghd_hgyq/zzb_hghd_hgyq.atlas",
        tex = "animation/Lobby/Base/zzb_hghd_hgyq/zzb_hghd_hgyq.json",
        armatureName = "bao",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    local size = self._KW_PANEL_BASE_EX:getContentSize()
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
    self._KW_PANEL_BASE_EX:addChild(dargonBones)
end

function RecallNewEmailView:isForbidOtherView()
    return self._isFirst
end

function RecallNewEmailView:initUI(isOpened)
    if isOpened then
        self:onClickOpen()
    else
        XH.SysTool.performDelayOnce(function()
            if not self or tolua.isnull(self) then
                return
            end
            if self._isOpen then
                return
            end
            self:onClickOpen()
        end, 5)
        self._KW_PANEL_BG:setTouchEnabled(false)
        XH.lobby:getModule("RecallNew"):getReBackBaseInfoRequest()
    end
end

function RecallNewEmailView:onDestroy()
    RecallNewEmailView.super.onDestroy(self)
end

return RecallNewEmailView