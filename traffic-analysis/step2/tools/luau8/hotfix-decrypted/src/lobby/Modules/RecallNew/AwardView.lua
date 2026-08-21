-- 助力基金
local RecallNewAwardView = class("RecallNewAwardView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function RecallNewAwardView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewAward.csb"
end

function RecallNewAwardView:getBindingInfo()
    return {
        ["_KW_GO_ACT"] = { varName = "_KW_GO_ACT", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickGoAct" },
        ["_KW_GET_PRIZE"] = { varName = "_KW_GET_PRIZE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickGetPrize" },
        ["_KW_PANEL_LAST"] = { varName = "_KW_PANEL_LAST" },
        ["_KW_PANEL_NOW"] = { varName = "_KW_PANEL_NOW" },
        ["_KW_LAST_ACTIVE"] = { varName = "_KW_LAST_ACTIVE" },
        ["_KW_LAST_PAY"] = { varName = "_KW_LAST_PAY" },
        ["_KW_LAST_FK"] = { varName = "_KW_LAST_FK" },
        ["_KW_LAST_JB"] = { varName = "_KW_LAST_JB" },
        ["_KW_LAST_ZS_AWARD"] = { varName = "_KW_LAST_ZS_AWARD" },
        ["_KW_LAST_FK_AWARD"] = { varName = "_KW_LAST_FK_AWARD" },
        ["_KW_LAST_JB_AWARD"] = { varName = "_KW_LAST_JB_AWARD" },
        ["_KW_LAST_TRANSFER"] = { varName = "_KW_LAST_TRANSFER" },
        ["_KW_PANEL_PROGRESS_EX"] = { varName = "_KW_PANEL_PROGRESS_EX" },
        ["_KW_PANEL_PROGRESS_ITEM"] = { varName = "_KW_PANEL_PROGRESS_ITEM" },
        ["_KW_NOW_ACTIVE"] = { varName = "_KW_NOW_ACTIVE" },
        ["_KW_NOW_PAY"] = { varName = "_KW_NOW_PAY" },
        ["_KW_NOW_FK"] = { varName = "_KW_NOW_FK" },
        ["_KW_NOW_JB"] = { varName = "_KW_NOW_JB" },
        ["_KW_NOW_TRANSFER"] = { varName = "_KW_NOW_TRANSFER" },
        ["_KW_NOW_ZS_AWARD"] = { varName = "_KW_NOW_ZS_AWARD" },
        ["_KW_NOW_FK_AWARD"] = { varName = "_KW_NOW_FK_AWARD" },
        ["_KW_NOW_JB_AWARD"] = { varName = "_KW_NOW_JB_AWARD" },
        ["_KW_TEXT_ZHANG"] = { varName = "_KW_TEXT_ZHANG" },
        ["_KW_NOW_ZHANG"] = { varName = "_KW_NOW_ZHANG" },
        ["_KW_NOW_TODAY_EX"] = { varName = "_KW_NOW_TODAY_EX" },
        ["_KW_CUR_PROGRESS"] = { varName = "_KW_CUR_PROGRESS" },
        ["_KW_LAST_JIANTOU"] = { varName = "_KW_LAST_JIANTOU" },
        ["_KW_NOW_JIANTOU"] = { varName = "_KW_NOW_JIANTOU" },
        ["_KW_ANI_GO_ACT"] = { varName = "_KW_ANI_GO_ACT" },
        ["_KW_ANI_GET_PRIZE"] = { varName = "_KW_ANI_GET_PRIZE" },
        ["_KW_ITEM_ANI_GUANG_1"] = { varName = "_KW_ITEM_ANI_GUANG_1" },
        ["_KW_ITEM_ANI_GUANG_2"] = { varName = "_KW_ITEM_ANI_GUANG_2" },
        ["_KW_ITEM_ANI_GUANG_3"] = { varName = "_KW_ITEM_ANI_GUANG_3" },
        ["_KW_ITEM_ANI_GUANG_4"] = { varName = "_KW_ITEM_ANI_GUANG_4" },
        ["_KW_ITEM_ANI_GUANG_5"] = { varName = "_KW_ITEM_ANI_GUANG_5" },
        ["_KW_ITEM_ANI_GUANG_6"] = { varName = "_KW_ITEM_ANI_GUANG_6" },
        ["_KW_ANI_LIUGUANG_1"] = { varName = "_KW_ANI_LIUGUANG_1" },
        ["_KW_ANI_LIUGUANG_2"] = { varName = "_KW_ANI_LIUGUANG_2" },
        ["_KW_ANI_LIUGUANG_3"] = { varName = "_KW_ANI_LIUGUANG_3" },
        ["_KW_ANI_PROGRESS"] = { varName = "_KW_ANI_PROGRESS" },
    }
end

function RecallNewAwardView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_AWARD", callBack = "flushActInfo" },
    }
end

function RecallNewAwardView:initAni()
    -- 箭头
    local path = "res/animation/Lobby/Base/zzb_ty_jtxg/"
    local filename = "zzb_ty_jtxg"
    local aniName = "animation"
    XH.SpineManager:playAni(self._KW_LAST_JIANTOU, path, filename, aniName, true)
    XH.SpineManager:playAni(self._KW_NOW_JIANTOU, path, filename, aniName, true)
    -- 扫光
    XH.SpineManager:playAni(self._KW_ANI_GO_ACT, "res/animation/Common/", "zzb_ty_ansg", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_GET_PRIZE, "res/animation/Common/", "zzb_ty_ansg", "animation", true)
    -- 奖励特效
    XH.SpineManager:playAni(self._KW_ITEM_ANI_GUANG_1, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ITEM_ANI_GUANG_2, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ITEM_ANI_GUANG_3, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ITEM_ANI_GUANG_4, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ITEM_ANI_GUANG_5, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ITEM_ANI_GUANG_6, "animation/Common/", "zzb_ty_xingguang", "animation", true)
    -- 流光
    XH.SpineManager:playAni(self._KW_ANI_LIUGUANG_1, "res/animation/Lobby/Base/zzb_ty_jlliuguang/", "zzb_ty_jlliuguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_LIUGUANG_2, "res/animation/Lobby/Base/zzb_ty_jlliuguang/", "zzb_ty_jlliuguang", "animation", true)
    XH.SpineManager:playAni(self._KW_ANI_LIUGUANG_3, "res/animation/Lobby/Base/zzb_ty_jlliuguang/", "zzb_ty_jlliuguang", "animation", true)
end

function RecallNewAwardView:onClickGoAct()
    XH.lobby:getModule("RecallNew"):goAwardTarget()
    local info = XH.lobby:getModule("RecallNew"):getAwardInfo()
    local go = "包厢"
    local lastRoomMode = RecallNewConfig.RoomMode[info.yesterdayRoomMode]
    if lastRoomMode == XH.ROOM_TYPE.TeaHouseRoom then
        go = "比赛场"
    elseif lastRoomMode == XH.ROOM_TYPE.GOLD_ROOM or lastRoomMode == XH.ROOM_TYPE.NEW_GOLD_ROOM or lastRoomMode == XH.ROOM_TYPE.DISPATCH_QUEUE then
        go = "金币大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = go, block_label = "去游戏", block_item_id = 0, page_item_id = "助力基金", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.todayActive or 0, count2 = self:getTodayStage() })
    XH.viewManager:closeView("RecallNewView")
end

function RecallNewAwardView:onClickGetPrize()
    XH.lobby:getModule("RecallNew"):rewardReBackSupportRequest()
    local info = XH.lobby:getModule("RecallNew"):getAwardInfo()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = "", block_label = "领取", block_item_id = 0, page_item_id = "助力基金", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.todayActive or 0, count2 = self:getTodayStage() })
end

function RecallNewAwardView:flushActInfo()
    self:flushUI()
end

function RecallNewAwardView:getTodayStage()
    local info = XH.lobby:getModule("RecallNew"):getAwardInfo()
    return info.todayPercent or 0
end

function RecallNewAwardView:flushUI()
    local info = XH.lobby:getModule("RecallNew"):getAwardInfo()
    if info.todayActive then
        if not self._isReport then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080606, { page_item_id = "助力基金", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = info.todayActive, count2 = self:getTodayStage() })
            self._isReport = true
        end
        local isShowLastDay = info.isReward
        self._KW_PANEL_LAST:setVisible(isShowLastDay)
        self._KW_PANEL_NOW:setVisible(not isShowLastDay)

        -- 昨日
        self._KW_LAST_ACTIVE:setString(info.todayActive)
        self._KW_LAST_PAY:setString(info.todayRecharge)
        self._KW_LAST_FK:setString(info.todayCard)
        self._KW_LAST_JB:setString(info.todayGold)
        self._KW_LAST_ZS_AWARD:setString("x" .. XH.StringTool.numberToString(info.todayDiamondInherit, 4))
        self._KW_LAST_FK_AWARD:setString("x" .. XH.StringTool.numberToString(info.todayCardInherit, 4))
        self._KW_LAST_JB_AWARD:setString("x" .. XH.StringTool.numberToString(info.todayGoldInherit, 4))
        self._KW_LAST_TRANSFER:setString(info.todayPercent * 100 .. "%")
        self._KW_TEXT_ZHANG:setPositionX(self._KW_LAST_FK:getPositionX() + self._KW_LAST_FK:getContentSize().width / 2)

        -- 今日
        local showPer = 0
        local showUIPer = { 287, 538, 790, 1040 }
        self._KW_PANEL_PROGRESS_EX:removeAllChildren()
        for i = 1, #info.stagePercents do
            local item = self._KW_PANEL_PROGRESS_ITEM:clone()
            item:setPosition(cc.p(showUIPer[i], self._KW_CUR_PROGRESS:getContentSize().height / 2))
            item:setVisible(true)
            item:getChildByName("KW_UNFINISH"):getChildByName("KW_TRANSFER"):setString(info.stagePercents[i].percent * 100 .. "%")
            item:getChildByName("KW_FINISH"):getChildByName("KW_TRANSFER"):setString(info.stagePercents[i].percent * 100 .. "%")
            item:getChildByName("KW_UNFINISH"):setVisible(info.todayActive < info.stagePercents[i].target)
            item:getChildByName("KW_FINISH"):setVisible(info.todayActive >= info.stagePercents[i].target)
            self._KW_CUR_PROGRESS:addChild(item)
        end
        local per1 = info.stagePercents[1].target
        local per2 = info.stagePercents[2].target
        local per3 = info.stagePercents[3].target
        local per4 = info.stagePercents[4].target
        if info.todayActive >= per3 then
            showPer = showUIPer[3] + (info.todayActive - per3) / (per4 - per3) * (showUIPer[4] - showUIPer[3])
        elseif info.todayActive >= per2 then
            showPer = showUIPer[2] + (info.todayActive - per2) / (per3 - per2) * (showUIPer[3] - showUIPer[2])
        elseif info.todayActive >= per1 then
            showPer = showUIPer[1] + (info.todayActive - per1) / (per2 - per1) * (showUIPer[2] - showUIPer[1])
        else
            showPer = info.todayActive / per1 * showUIPer[1]
        end
        showPer = 100 * showPer / showUIPer[4]
        if showPer > 100 then
            showPer = 100
        end
        self._KW_CUR_PROGRESS:setPercent(showPer)
        if self._KW_ANI_PROGRESS:getChildrenCount() == 0 then
            XH.SpineManager:playAni(self._KW_ANI_PROGRESS, "animation/Lobby/Base/zzb_ty_jdtgd/", "zzb_ty_jdtgd", "animation", true)
        end
        self._KW_ANI_PROGRESS:setPositionX(self._KW_CUR_PROGRESS:getContentSize().width * showPer / 100)
        self._KW_NOW_TODAY_EX:setString(info.todayActive)
        self._KW_NOW_ACTIVE:setString(info.todayActive)
        self._KW_NOW_PAY:setString(info.todayRecharge)
        self._KW_NOW_FK:setString(info.todayCard)
        self._KW_NOW_JB:setString(info.todayGold)
        self._KW_NOW_TRANSFER:setString(info.todayPercent * 100 .. "%")
        self._KW_NOW_ZS_AWARD:setString("x" .. XH.StringTool.numberToString(info.todayDiamondInherit, 4))
        self._KW_NOW_FK_AWARD:setString("x" .. XH.StringTool.numberToString(info.todayCardInherit, 4))
        self._KW_NOW_JB_AWARD:setString("x" .. XH.StringTool.numberToString(info.todayGoldInherit, 4))
        self._KW_NOW_ZHANG:setPositionX(self._KW_NOW_FK:getPositionX() + self._KW_NOW_FK:getContentSize().width / 2)
    end
end

function RecallNewAwardView:initUI()
    XH.lobby:getModule("RecallNew"):getReBackSupportInfo()
end

function RecallNewAwardView:refreshData()
    self._isReport = false
    self:initUI()
end

function RecallNewAwardView:ctor()
    RecallNewAwardView.super.ctor(self)
    self:initUI()
    self:initAni()
end

function RecallNewAwardView:onDestroy()
    RecallNewAwardView.super.onDestroy(self)
end

function RecallNewAwardView:isFullScreen()
    return false
end

return RecallNewAwardViewR-