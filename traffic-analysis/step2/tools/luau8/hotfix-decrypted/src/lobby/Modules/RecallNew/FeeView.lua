-- 话费放送
local RecallNewFeeView = class("RecallNewFeeView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function RecallNewFeeView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewFee.csb"
end

function RecallNewFeeView:getBindingInfo()
    return {
        ["_KW_BTN_RECHARGE"] = { varName = "_KW_BTN_RECHARGE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickRecharge" },
        ["_KW_BTN_TASK_TAB"] = { varName = "_KW_BTN_TASK_TAB", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTaskTab" },
        ["_KW_RECHARGE"] = { varName = "_KW_RECHARGE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickRecharge" },
        ["_KW_LEFT"] = { varName = "_KW_LEFT" },
        ["_KW_HORSE"] = { varName = "_KW_HORSE" },
        ["_KW_TEXT_FEE"] = { varName = "_KW_TEXT_FEE" },
        ["_RECHARGE_TXT"] = { varName = "_RECHARGE_TXT" },
        ["_KW_SCROLLVIEW"] = { varName = "_KW_SCROLLVIEW" },
        ["_KW_HORSE_ITEM"] = { varName = "_KW_HORSE_ITEM" },
        ["_KW_PROGRESS"] = { varName = "_KW_PROGRESS" },
        ["_KW_ANI_CHICKEN"] = { varName = "_KW_ANI_CHICKEN" },
        ["_KW_FINGER"] = { varName = "_KW_FINGER" },
        ["_KW_GET_TEXT"] = { varName = "_KW_GET_TEXT" },
        ["_KW_BTN_ANI_2"] = { varName = "_KW_BTN_ANI_2" },
        ["_KW_BTN_ANI_1"] = { varName = "_KW_BTN_ANI_1" },
        ["_KW_ANI_TOP"] = { varName = "_KW_ANI_TOP" },
        ["_KW_ANI_DI"] = { varName = "_KW_ANI_DI" },
        ["_KW_PROGRESS_ANI"] = { varName = "_KW_PROGRESS_ANI" },
        ["_KW_ANI_PRO"] = { varName = "_KW_ANI_PRO" },
    }
end

function RecallNewFeeView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_FEE_INFO", callBack = "flushActInfo" },
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_SHOW_FEE_BIND", callBack = "showFeeBind" },
    }
end

function RecallNewFeeView:onClickTaskTab()
    XH.lobby:getModule("RecallNew"):flushTab(RecallNewConfig.Tab.TASK)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25103101)
end

function RecallNewFeeView:onClickRecharge()
    local info = XH.lobby:getModule("RecallNew"):getFeeInfo()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = 0, block_label = "领取话费", block_item_id = 0, page_item_id = "话费放送", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.curAmount or 0, count2 = RecallNewConfig.FeeTarget })
    if info.status == RecallNewConfig.FeeState.ALREADY_GET then
        XH.TipTool.showToast("话费已充值至账号" .. (info.tel or ""))
        return
    end
    XH.viewManager:openView("FeeGetView", nil, info.curAmount, RecallNewConfig.FeeTarget)
end

function RecallNewFeeView:showFeeBind()
    XH.viewManager:openView("FeeGetView", nil, 0, RecallNewConfig.FeeTarget, true)
end

function RecallNewFeeView:initAni()
    XH.SpineManager:playAniWithComplete(self._KW_ANI_CHICKEN, "animation/Lobby/Base/zzb_ty_xiaoji/", "zzb_ty_xiaoji", "cx", false, "loop", true)
    XH.SpineManager:playAni(self._KW_FINGER, "res/animation/Common/qgb_ty_xsdj/", "qgb_ty_xsdj", "animation", true)
    XH.SpineManager:playAni(self._KW_BTN_ANI_1, "res/animation/Common/", "zzb_ty_ansg", "animation", true)
    XH.SpineManager:playAni(self._KW_BTN_ANI_2, "res/animation/Common/", "zzb_ty_ansg", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_TOP, "res/animation/Lobby/Base/eff_ty_xxsg/", "eff_ty_xxsg", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_DI, "res/animation/Lobby/Base/eff_kuosanguang/", "eff_kuosanguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_DI, "res/animation/Lobby/Base/eff_kuosanguang/", "eff_kuosanguang", "animation", true, nil, nil, false)
    XH.SpineManager:playAni(self._KW_PROGRESS_ANI, "res/animation/Lobby/Base/eff_ty_jdtsg/", "eff_ty_jdtsg", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_PRO, "res/animation/Lobby/Base/eff_ty_jianbianjd/", "eff_ty_jianbianjd", "animation", true)
end

function RecallNewFeeView:flushActInfo()
    self:flushUI()
end

function RecallNewFeeView:flushUI()
    local info = XH.lobby:getModule("RecallNew"):getFeeInfo()
    if info.status ~= nil then
        local showPer = info.curAmount / RecallNewConfig.FeeTarget * 100
        showPer = showPer > 100 and 100 or showPer
        self._KW_PROGRESS:setPercent(100 - showPer)
        self._KW_PROGRESS_ANI:setVisible(true)
        self._KW_PROGRESS_ANI:setPositionY(27 + self._KW_PROGRESS:getContentSize().width * showPer / 100)
        self._KW_TEXT_FEE:setString(string.format("%.2f", info.curAmount / 100) .. "元")
        if info.status == RecallNewConfig.FeeState.CAN_GET then
            XH.viewManager:openView("FeeGetView", nil, info.curAmount, RecallNewConfig.FeeTarget)
        end
        self._RECHARGE_TXT:setString(info.status == RecallNewConfig.FeeState.ALREADY_GET and "已完成充值" or "领取话费")
        self._KW_BTN_RECHARGE:setVisible(info.status ~= RecallNewConfig.FeeState.NULL)
        self._KW_BTN_TASK_TAB:setVisible(info.status == RecallNewConfig.FeeState.NULL)
        self._KW_FINGER:setVisible(info.status == RecallNewConfig.FeeState.CAN_GET)
        self._KW_GET_TEXT:setVisible(info.status == RecallNewConfig.FeeState.CAN_GET)
        self._KW_ANI_DI:setVisible(info.status == RecallNewConfig.FeeState.CAN_GET)
        self._KW_BTN_ANI_2:setVisible(info.status == RecallNewConfig.FeeState.CAN_GET)
        if not self._isReport then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080606, { page_item_id = "话费放送", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.curAmount or 0, count2 = RecallNewConfig.FeeTarget })
            self._isReport = true
        end
        self:flushTime()
    end
end

function RecallNewFeeView:initUI()
    XH.lobby:getModule("RecallNew"):reqFeeInfo()
end

function RecallNewFeeView:refreshData()
    self._isReport = false
    self:initUI()
end

function RecallNewFeeView:flushTime()
    if not self or tolua.isnull(self) then
        return
    end
    local info = XH.lobby:getModule("RecallNew"):getFeeInfo()
    if info.huafeiExpireTime then
        local left = tonumber(info.huafeiExpireTime) - XH.lobby:getModule("Shop"):getServerTime()
        if left > 0 then
            self._KW_LEFT:setString("话费剩余时间：" .. self:getTimeStr(left))
            self._KW_BTN_TASK_TAB:setVisible(info.status == RecallNewConfig.FeeState.NULL)
        else
            self._KW_LEFT:setString("话费活动已结束")
            self._KW_BTN_TASK_TAB:setVisible(false)
        end
        self:initHorse()
    end
end

function RecallNewFeeView:initHorse()
    if self._isInit then
        return
    end
    self._isInit = true
    local maxHorse = 50
    local maxHeight = self._KW_HORSE_ITEM:getContentSize().height * maxHorse
    self._KW_SCROLLVIEW:setInnerContainerSize(cc.size(self._KW_SCROLLVIEW:getContentSize().width, maxHeight))
    for i = 1, maxHorse do
        local item = self._KW_HORSE_ITEM:clone()
        item:setPosition(cc.p(self._KW_SCROLLVIEW:getContentSize().width / 2, maxHeight - self._KW_HORSE_ITEM:getContentSize().height * (i - 1)))
        item:getChildByName("_KW_HORSE"):setString(self:getHorseText(i))
        item:getChildByName("_KW_HORSE_2"):setString("已充值" .. math.floor(RecallNewConfig.FeeTarget / 100) .. "元话费")
        item:setVisible(true)
        self._KW_SCROLLVIEW:addChild(item)
    end
    self._KW_SCROLLVIEW:setScrollBarOpacity(0)
    self._KW_SCROLLVIEW:scrollToBottom(maxHorse * 15, true)
end

function RecallNewFeeView:getHorseText(showIdx)
    local info = XH.lobby:getModule("RecallNew"):getFeeInfo()
    if info.notices and info.notices[showIdx] then
        local phone = info.notices[showIdx]
        return "   玩家尾号" .. string.sub(phone, 8, 11)
    else
        local tmpHead = { 13, 15, 18 }
        return "   玩家尾号" .. math.random(1001, 9999)
    end
end

function RecallNewFeeView:getTimeStr(timestamp)
    local day = math.floor(timestamp / 86400)
    local hour = math.floor((timestamp - day * 86400) / 3600)
    local min = math.floor((timestamp - day * 86400 - hour * 3600) / 60)
    local sec = timestamp - day * 86400 - hour * 3600 - min * 60
    if day > 0 then
        return day .. "天" .. hour .. "小时" .. min .. "分" .. sec .. "秒"
    else
        return hour .. "小时" .. min .. "分" .. sec .. "秒"
    end
end

function RecallNewFeeView:ctor()
    RecallNewFeeView.super.ctor(self)
    self.horseIdx = 0
    self:initUI()
    self:initAni()
end

function RecallNewFeeView:onDestroy()
    RecallNewFeeView.super.onDestroy(self)
end

function RecallNewFeeView:isFullScreen()
    return false
end

return RecallNewFeeView�#