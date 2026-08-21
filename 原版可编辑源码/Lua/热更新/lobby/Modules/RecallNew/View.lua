-- 主界面
local RecallNewView = class("RecallNewView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

function RecallNewView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewView.csb"
end

function RecallNewView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_TAB_GIFT"] = { varName = "_KW_TAB_GIFT", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickItem" },
        ["_KW_TAB_SIGN"] = { varName = "_KW_TAB_SIGN", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickItem" },
        ["_KW_TAB_TASK"] = { varName = "_KW_TAB_TASK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickItem" },
        ["_KW_TAB_FEE"] = { varName = "_KW_TAB_FEE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickItem" },
        ["_KW_PANEL_BOTTOM"] = { varName = "_KW_PANEL_BOTTOM" },
        ["_KW_LEFT"] = { varName = "_KW_LEFT" },
        ["_KW_ANI_H"] = { varName = "_KW_ANI_H" },
        ["_KW_ANI_F"] = { varName = "_KW_ANI_F" },
        ["_KW_ROOT_LAYER"] = { varName = "_KW_ROOT_LAYER" },
        ["_KW_PANEL_TOP"] = { varName = "_KW_PANEL_TOP" },
        ["_KW_BTN_INTRO"] = { varName = "_KW_BTN_INTRO", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickHelp" },
        ["_KW_PIC_AWARD"] = { varName = "_KW_PIC_AWARD" },
        ["_KW_PIC_AWARD_0"] = { varName = "_KW_PIC_AWARD_0" },
        ["_KW_PIC_AWARD_1"] = { varName = "_KW_PIC_AWARD_1" },
        ["_KW_ANI_END_POS"] = { varName = "_KW_ANI_END_POS" },
    }
end

function RecallNewView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_CHOSE_TAB", callBack = "flushChoseTab" },
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "flushRedPoint" },
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_SHOW_MOVE_ANI", callBack = "showAni" },
    }
end

function RecallNewView:ctor(defaultTag, scene, limitClick)
    RecallNewView.super.ctor(self)
    -- 设置默认优先级
    self._defSelect = self:getTagDef()
    if defaultTag ~= nil then
        self._defSelect = defaultTag
    end
    self._scene = scene or ""
    if XH.lobby:getModule("RecallNew"):isHideFeeTab() then
        self._KW_TAB_TASK:setPositionY(self._KW_TAB_SIGN:getPositionY())
        self._KW_TAB_SIGN:setPositionY(self._KW_TAB_FEE:getPositionY())
        self._KW_TAB_FEE:setVisible(false)
    end
    XH.lobby:getModule("RecallNew"):setCurScene(scene)
    self._viewLists = {}
    self:showSelectByTag(self._defSelect)
    self:flushRedPoint()
    self:delayShow(self._KW_PANEL_TOP, 0, 18 / 30)
    self:runAni()
    if limitClick then
        self._KW_BTN_CLOSE:setTouchEnabled(false)
        XH.SysTool.performDelayOnce(function()
            if not self or tolua.isnull(self) then
                return
            end
            self._KW_BTN_CLOSE:setTouchEnabled(true)
        end, 3)
    end
end

function RecallNewView:getTagDef()
    local info = XH.lobby:getModule("RecallNew"):getBaseInfo()
    if info.rebackGift then
        return RecallNewConfig.Tab.GIFT
    end
    if info.rebackSign then
        return RecallNewConfig.Tab.SIGN
    end
    if info.rebackTask then
        return RecallNewConfig.Tab.TASK
    end
    if not XH.lobby:getModule("RecallNew"):isHideFeeTab() and info.huaFeiGet then
        return RecallNewConfig.Tab.FEE
    end
    return RecallNewConfig.Tab.TASK
end

function RecallNewView:delayShow(node, delay, time)
    node:setScale(0)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay),
    cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(time or 0.2, 1)))))
end

function RecallNewView:runAni()
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hghd_hdkt/zzb_hghd_hdkt.atlas",
        tex = "animation/Lobby/Base/zzb_hghd_hdkt/zzb_hghd_hdkt.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "loop", true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    dargonBones:setPosition(cc.p(0, 0))
    self._KW_ANI_F:addChild(dargonBones)

    local configEx = config
    configEx.armatureName = "cx2"
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "loop2", true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    dargonBones:setPosition(cc.p(0, 0))
    self._KW_ANI_H:addChild(dargonBones)

    self._KW_ROOT_LAYER:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hdkt/zzb_hghd_hdkt_1.json", animationName = "cx", boneName = "all", slotName = "all" })
end

function RecallNewView:flushRedPoint()
    local info = XH.lobby:getModule("RecallNew"):getBaseInfo()
    if not info.isReback then
        self:close()
        return
    end
    self._KW_TAB_GIFT:getChildByName("KW_REDPOINT"):setVisible(info.rebackGift)
    self._KW_TAB_SIGN:getChildByName("KW_REDPOINT"):setVisible(info.rebackSign)
    self._KW_TAB_TASK:getChildByName("KW_REDPOINT"):setVisible(info.rebackTask)
    self:flushLeft()
end

function RecallNewView:flushChoseTab(event)
    if event and event.msg then
        self:showSelectByTag(event.msg)
    end
end

function RecallNewView:showSelectByTag(tag)
    for k, v in pairs(RecallNewConfig.TabConfig) do
        if k == tag then
            self:flushShowState(v.NAME, v.PATH)
            break
        end
    end
end

function RecallNewView:createView(name, path)
    if self._viewLists[name] == nil then
        local item = require(path).new()
        self._KW_PANEL_BOTTOM:addChild(item)
        item:setAnchorPoint(cc.p(0.5, 0.5))
        item:setPosition(self._KW_PANEL_BOTTOM:getContentSize().width / 2, self._KW_PANEL_BOTTOM:getContentSize().height / 2)
        self._viewLists[name] = item
    end
end

function RecallNewView:flushShowState(name, path)
    local isExist = self._viewLists[name] ~= nil
    self:createView(name, path)
    self:flushSelect(name)
    for k, v in pairs(self._viewLists) do
        v:setVisible(name == k)
        local aniNode = self[k]:getChildByName("KW_ANI_POS")
        aniNode:setVisible(name == k)
        aniNode:removeAllChildren()
        if name == k then
            Utils:addSpine(aniNode, "Activity", "zzb_hdzx_cbl", "animation", 1, true)
            if isExist then
                v:refreshData()
            end
        end
    end
end

function RecallNewView:showSelectByName(name)
    for k, v in pairs(RecallNewConfig.TabConfig) do
        if v.NAME == name then
            self:flushShowState(v.NAME, v.PATH)
            break
        end
    end
end

function RecallNewView:flushSelect(name)
    for k, v in pairs(RecallNewConfig.TabConfig) do
        if self[v.NAME] then
            self[v.NAME]:getChildByName("KW_UNCHOSE"):setVisible(v.NAME ~= name)
            self[v.NAME]:getChildByName("KW_CHOSE"):setVisible(v.NAME == name)
        end
        if v.TAG and self[v.TAG] then
            self[v.TAG]:setVisible(v.NAME == name)
        end
    end
end

function RecallNewView:onClickItem(send)
    local name = send:getName()
    self:showSelectByName(name)
end

function RecallNewView:onClickClose()
    self:close()
end

function RecallNewView:flushLeft()
    self:removeLeftSchedule()
    self:showLeftSchedule()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:showLeftSchedule()
    end, 1, false)
end

function RecallNewView:onCleanup()
    self:removeLeftSchedule()
    RecallNewView.super.onCleanup(self)
end

function RecallNewView:removeLeftSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function RecallNewView:showLeftSchedule()
    if not self or tolua.isnull(self) then
        return
    end
    local info = XH.lobby:getModule("RecallNew"):getBaseInfo()
    if info.rebackEndTime then
        local left = tonumber(info.rebackEndTime) - XH.lobby:getModule("Shop"):getServerTime()
        if left < 0 then
            self:close()
            XH.lobby:getModule("RecallNew"):getReBackRedPointRequest()
            return
        end
        self._KW_LEFT:setString("活动剩余：" .. self:getTimeStr(left))
    end
    local feeView = self._viewLists[RecallNewConfig.TabConfig[RecallNewConfig.Tab.FEE].NAME]
    if feeView and feeView.flushTime then
        feeView:flushTime()
    end
end

function RecallNewView:getTimeStr(timestamp)
    local day = math.floor(timestamp / 86400)
    local hour = math.floor((timestamp - day * 86400) / 3600)
    local min = math.floor((timestamp - day * 86400 - hour * 3600) / 60)
    local sec = timestamp - day * 86400 - hour * 3600 - min * 60
    if day > 0 then
        return day .. "天" .. string.format("%02d", hour) .. "小时" .. string.format("%02d", min) .. "分" .. string.format("%02d", sec) .. "秒"
    else
        return string.format("%02d", hour) .. "小时" .. string.format("%02d", min) .. "分" .. string.format("%02d", sec) .. "秒"
    end
end

function RecallNewView:onClickHelp()
    XH.viewManager:openView("RecallNewHelpView")
end

function RecallNewView:showAni(msg)
    local list = { self._KW_PIC_AWARD, self._KW_PIC_AWARD_0, self._KW_PIC_AWARD_1 }
    for i = 1, #list do
        self:showAniFee(list[i], msg.data.x, msg.data.y, i)
    end
end

function RecallNewView:showAniFee(node, x, y, i)
    local pos = node:getParent():convertToNodeSpace(cc.p(x, y))
    node:stopAllActions()
    node:setVisible(false)
    node:setPosition(pos.x, pos.y)
    node:setScale(1)
    local endPosX, endPosY = self._KW_ANI_END_POS:getPosition()
    local time = 0.75
    node:runAction(cc.Sequence:create(cc.DelayTime:create((i - 1) * 0.1), cc.CallFunc:create(function()
        node:setVisible(true)
    end), cc.Spawn:create(cc.ScaleTo:create(time, 0), cc.MoveTo:create(time, cc.p(endPosX, endPosY)))))
end

function RecallNewView:onEnter()
    RecallNewView.super.onEnter(self)
    self._startTime = socket.gettime()
end

function RecallNewView:onExit()
    -- XH.lobby:getModule("NewYear2026"):addShowTime(socket.gettime() - self._startTime)
    RecallNewView.super.onExit(self)
end
return RecallNewView