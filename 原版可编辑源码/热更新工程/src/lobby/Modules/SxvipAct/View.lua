local SxvipActView = class("SxvipActView", XH.ViewBase)
local SxvipConfig = require("lobby.Modules.Sxvip.Config")
local UrlConf = require("app.Config.UrlConf")

local KW_VIP_DAY_IMG = {
    [7] = "sxtip_Img_title7.png",
    [30] = "sxtip_Img_title30.png",
    [90] = "sxtip_Img_title90.png",
    [360] = "sxtip_Img_title360.png",
    [365] = "sxtip_Img_title365.png",
}

function SxvipActView:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/Act/SxvipActLayer.csb"
end

function SxvipActView:getBindingInfo()
    return {
        --
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", onTouchEnded = "onBtnClose", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_DETAIL"] = { varName = "_KW_BTN_DETAIL", onTouchEnded = "onBtnDetail", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_DETAIL_2"] = { varName = "_KW_BTN_DETAIL_2", onTouchEnded = "onBtnDetail", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_BUY"] = { varName = "_KW_BTN_BUY", onTouchEnded = "onBtnBuy", type = XH.UI_TYPE.BUTTON },
        ["_KW_TEXT"] = { varName = "_KW_TEXT" },
        ["_KW_TEXT_YH"] = { varName = "_KW_TEXT_YH" },
        ["_KW_BTN_XFXY"] = { varName = "_KW_BTN_XFXY", onTouchEnded = "onTouchEventRenewProtocol", type = XH.UI_TYPE.BUTTON },
        ["_KW_ORI_PRICE"] = { varName = "_KW_ORI_PRICE" },
        ["_KW_IMG_LINE"] = { varName = "_KW_IMG_LINE" },
        ["_KW_NOW_PRICE"] = { varName = "_KW_NOW_PRICE" },
        ["_KW_IMG_VIP"] = { varName = "_KW_IMG_VIP" },
        ["_KW_FNT_1"] = { varName = "_KW_FNT_1" },
        ["_KW_FNT_2"] = { varName = "_KW_FNT_2" },
        ["_KW_FNT_3"] = { varName = "_KW_FNT_3" },
        ["_KW_VIPITEM_1"] = { varName = "_KW_VIPITEM_1" },
        ["_KW_VIPITEM_2"] = { varName = "_KW_VIPITEM_2" },
        ["_KW_VIPITEM_3"] = { varName = "_KW_VIPITEM_3" },
        ["_KW_VIPITEM_4"] = { varName = "_KW_VIPITEM_4" },
        ["_KW_VIPTEXT_1"] = { varName = "_KW_VIPTEXT_1" },
        ["_KW_VIPTEXT_2"] = { varName = "_KW_VIPTEXT_2" },
        ["_KW_VIPTEXT_3"] = { varName = "_KW_VIPTEXT_3" },
        ["_KW_VIPTEXT_4"] = { varName = "_KW_VIPTEXT_4" },
        ["_KW_ITEM"] = { varName = "_KW_ITEM" },
        ["_KW_SCROLLVIEW"] = { varName = "_KW_SCROLLVIEW" },
        ["_KW_ANI_BG"] = { varName = "_KW_ANI_BG" },
        ["_KW_LEFT"] = { varName = "_KW_LEFT" },
        ["_KW_RIGHT"] = { varName = "_KW_RIGHT" },
        ["_KW_CLOCK"] = { varName = "_KW_CLOCK" },
        ["_KW_MAIN_BG"] = { varName = "_KW_MAIN_BG" },
    }
end

function SxvipActView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Sxvip"), eventKeyName = "EVENT_UPDATE_VIPSHOP_LIST", callBack = "onEventGetPagProducts" },
        { module = XH.lobby:getModule("SxvipAct"), eventKeyName = "SXVIP_ACT_FINISH", callBack = "startInit" },
        { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_STATIC_CONFIG_SUCC", callBack = "startInit" },
    }
end

function SxvipActView:ctor(time, prize, isSub)
    SxvipActView.super.ctor(self)
    self:startInit()
    XH.lobby:getModule("Sxvip"):reqPrivilege()
    if device.platform == "ios" or device.platform == "windows" then
        self._KW_BTN_XFXY:setVisible(true)
    end
end

function SxvipActView:onTouchEventRenewProtocol(send, event)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        return
    end
    cc.Application:getInstance():openURL(UrlConf.URL_USER_RENEWPROTOCOL_IOS)
end

function SxvipActView:startInit()
    if not self or tolua.isnull(self) then
        return
    end
    self._actItem = XH.lobby:getModule("SxvipAct"):getShowAct()
    if self._actItem == nil then
        if XH.lobby:getModule("SxvipAct"):isReqActFinish() then
            self:close()
        end
        return
    end
    self._targetTime = self._actItem.actDetail.day
    self._targetPrize = self._actItem.actDetail.discounted_price
    self._isSub = self._actItem.actDetail.is_sub == 1
    self:initUI()
    if self._isReport then
        return
    end
    self._isReport = true
    if self == nil or self.getPageItemId == nil then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hy25022703, { page_item_id = self:getPageItemId(), item_id = self:getItemId() }, { source = "折扣弹窗", count1 = self:getPrize() })
end

function SxvipActView:initUI()
    local productData = XH.lobby:getModule("Sxvip"):getVipShopList()
    if productData and productData.goods_list and #productData.goods_list > 0 then
        self:updateView()
    else
        local prop_type = SxvipConfig:getSxvipShopId()
        XH.lobby:getModule("Sxvip"):reqExchangeProductsInfo(prop_type)
    end
end

function SxvipActView:onEventGetPagProducts()
    self:updateView()
end

function SxvipActView:updateView()
    self._oriInfo = XH.lobby:getModule("SxvipAct"):getActShopInfo(self._targetTime, self._actItem.actDetail.original_price, self._isSub)
    -- 如果没有找到对应档位直接关了
    if self._actItem == nil or self._oriInfo == nil then
        self:close()
        return
    end
    if self._isSub then
        self._KW_TEXT_YH:setString("首月优惠" .. self._actItem.actDetail.discounted_price .. "元/月，次月起将于" .. self._actItem.actDetail.original_price .. "元/每月续费，可随时取消")
    end
    self._KW_ORI_PRICE:setString("原价：" .. self._actItem.actDetail.original_price .. "元")
    self._KW_NOW_PRICE:setString(self._actItem.actDetail.discounted_price .. "元" .. (self._isSub and "连续包月" or ""))
    self._KW_IMG_LINE:setContentSize(self._KW_ORI_PRICE:getContentSize().width + 70, self._KW_IMG_LINE:getContentSize().height)
    if KW_VIP_DAY_IMG[self._actItem.actDetail.day] then
        self._KW_IMG_VIP:loadTexture(KW_VIP_DAY_IMG[self._actItem.actDetail.day], ccui.TextureResType.plistType)
    end
    local actConfig = self._oriInfo.goods_act and self._oriInfo.goods_act.act_config or {}
    local des = actConfig.description or ""
    local value = string.match(des, "value=%d+") or 35
    self._KW_FNT_2:setString(value)

    local awardValue = XH.lobby:getModule("Sxvip"):getEveryDayAwardValue()
    local showTxt = awardValue
    if tonumber(awardValue) >= 10 and tonumber(awardValue) < 20 then
        showTxt = "1 " .. tostring(tonumber(awardValue) - 10)
    end
    self._KW_FNT_1:setString(showTxt)
    self._KW_FNT_3:setString(XH.lobby:getModule("Sxvip"):getPrivilegeNum())

    local diff = 20
    self._KW_SCROLLVIEW:removeAllChildren()
    if actConfig.send and actConfig.send.props_arr then
        for i = 1, #actConfig.send.props_arr do
            local addItem = self._KW_ITEM:clone()
            addItem:setVisible(true)
            addItem:setPosition(cc.p((i - 1) * (self._KW_ITEM:getContentSize().width + diff), self._KW_SCROLLVIEW:getContentSize().height / 2))
            addItem:getChildByName("KW_TEXT"):setString("X" .. actConfig.send.props_arr[i].value)
            local itemIcon = addItem:getChildByName("KW_IMG")
            local size = itemIcon:getContentSize()
            itemIcon = XH.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(itemIcon)
            itemIcon:setUrl(XH.propsData:getExtendPropImgUrlByPropid(tonumber(actConfig.send.props_arr[i].prop_id)))
            local spinePath = "animation/Lobby/Base/zzb_hyeq_gmtc/"
            addItem:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = tostring(i), slotName = tostring(i) })
            self._KW_SCROLLVIEW:addChild(addItem)
        end
        local maxWidth = self._KW_SCROLLVIEW:getContentSize().width
        if maxWidth < #actConfig.send.props_arr * (self._KW_ITEM:getContentSize().width + diff) then
            maxWidth = #actConfig.send.props_arr * (self._KW_ITEM:getContentSize().width + diff)
        end
        self._KW_SCROLLVIEW:setInnerContainerSize(cc.size(maxWidth, self._KW_SCROLLVIEW:getContentSize().height))
    end

    local iopCfg = XH.lobby:getModule("Sxvip"):getStaticConfig()
    local showIds = { SxvipConfig.SXVIP_POWER.FRIEND_INFO, SxvipConfig.SXVIP_POWER.FREE_PROPS, SxvipConfig.SXVIP_POWER.GET_PROPS, SxvipConfig.SXVIP_POWER.GOLDROOM_STATISTICS }  -- 无观战
    for _, v in pairs(iopCfg) do
        if v.id == SxvipConfig.SXVIP_POWER.WATCH then
            showIds = { SxvipConfig.SXVIP_POWER.WATCH, SxvipConfig.SXVIP_POWER.FREE_PROPS, SxvipConfig.SXVIP_POWER.FRIEND_INFO, SxvipConfig.SXVIP_POWER.GET_PROPS }
            break
        end
    end
    for i = 1, 4 do
        local showVipItem = self["_KW_VIPITEM_" .. i]
        local showVipText = self["_KW_VIPTEXT_" .. i]
        showVipItem:removeAllChildren()
        for _, v in pairs(iopCfg) do
            if v.id == showIds[i] then
                showVipText:setString(v.show_name or v.name)
                local size = showVipItem:getContentSize()
                local itemIcon = XH.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(showVipItem)
                itemIcon:setUrl(v.pic)
            end
        end
    end

    self:startAni()
    self:startSchedule()
end

function SxvipActView:startAni()
    self._KW_MAIN_BG:setVisible(true)
    if self._isAni then
        return
    end
    self._isAni = true
    local spinePath = "animation/Lobby/Base/zzb_hyeq_gmtc/"
    local config = {
        path = "",
        ske = spinePath .. "zzb_hyeq_gmtc.atlas",
        tex = spinePath .. "zzb_hyeq_gmtc.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                self._KW_BTN_BUY:removeLuaAllComponents()
                self._KW_BTN_BUY:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "loop", isLoop = true, boneName = "hybtn", slotName = "hybtn" })
                dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    local size = self._KW_ANI_BG:getContentSize()
    dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
    self._KW_ANI_BG:addChild(dargonBones)
    -- 扫光
    local configEx = {
        path = "",
        ske = spinePath .. "zzb_hyeq_gmtc.atlas",
        tex = spinePath .. "zzb_hyeq_gmtc.json",
        armatureName = "btn",
        scale = 1,
        loop = true,
    }
    local dargonBonesEx = display.playDargonBonesSpine(configEx)
    dargonBonesEx:setAnchorPoint(cc.p(0.5, 0.5))
    local sizeEx = self._KW_BTN_BUY:getContentSize()
    dargonBonesEx:setPosition(cc.p(sizeEx.width / 2, sizeEx.height / 2 + 12))
    self._KW_BTN_BUY:addChild(dargonBonesEx)
    self._KW_BTN_CLOSE:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "x", slotName = "x" })
    self._KW_BTN_BUY:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "loop", isLoop = true, boneName = "hybtn", slotName = "hybtn" })
    self._KW_IMG_VIP:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "hybt", slotName = "hybtn" })
    self._KW_BTN_XFXY:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "huiyuan", slotName = "huiyuan" })
    self._KW_TEXT_YH:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "huiyuan", slotName = "huiyuan" })
    self._KW_CLOCK:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "huiyuan", slotName = "huiyuan" })
    self._KW_TEXT:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "huiyuan", slotName = "huiyuan" })
    self._KW_LEFT:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "tq", slotName = "tq" })
    self._KW_RIGHT:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "mrl", slotName = "mrl" })
    self._KW_MAIN_BG:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = spinePath .. "zzb_hyeq_gmtc_animation.json", animationName = "cx", boneName = "huiyuan", slotName = "huiyuan" })
end

function SxvipActView:getPageItemId()
    return self._actItem.actDetail.name
end

function SxvipActView:getItemId()
    return self._actItem.aid
end

function SxvipActView:getPrize()
    return self._targetPrize
end

function SxvipActView:getLeftTime()
    return math.floor(XH.lobby:getModule("SxvipAct"):getRemainTime(self._actItem.aid) / 3600)
end

function SxvipActView:onBtnDetail()
    XH.viewManager:openView("SxvipPrivilegeView", nil, SxvipConfig.ThrowData.source.discountpop)
    self:close()
end

function SxvipActView:onBtnBuy()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hy25022704, { page_item_id = self:getPageItemId(), item_id = self:getItemId() }, { source = "折扣弹窗", count1 = self:getPrize(), count2 = self:getLeftTime() })
    XH.lobby:getModule("SxvipAct"):reqPay(self._targetTime, self._actItem.actDetail.original_price, self._isSub, "折扣弹窗")
    self:close()
end

function SxvipActView:onBtnClose()
    self:close()
    -- XH.viewManager:openView("SxvipActTipView")
end

function SxvipActView:flushLeftTime()
    local lastTime = XH.lobby:getModule("SxvipAct"):getRemainTime(self._actItem.aid)
    if lastTime <= 0 then
        self:close()
        return
    end
    local hour = math.floor(lastTime / 3600)
    local minute = math.floor((lastTime - hour * 3600) / 60)
    local sec = lastTime - hour * 3600 - minute * 60
    self._KW_TEXT:setString(string.format("%02d", hour) .. ":" .. string.format("%02d", minute) .. ":" .. string.format("%02d", sec) .. "后失效")
end

function SxvipActView:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:flushLeftTime()
    end, 1, false)
end

function SxvipActView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function SxvipActView:onCleanup()
    self:removeSchedule()
    SxvipActView.super.onCleanup(self)
end

return SxvipActView