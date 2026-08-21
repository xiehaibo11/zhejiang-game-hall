local LocalConfig = import("...Configs.LocalConfig")

local functions = {
    GiftPackCollection = {
        isValid = function()
            return XH.Bridge:getModule(LocalConfig.MP.GPC):isValid()
        end,
        click = function()
            if XH.lobby:getModule("Lobby"):getLobbyType() == XH.LOBBY_TYPE.YUEJU then
                XH.Bridge.viewManager:openView("GoldHallGPCView", nil, {jumpToView = "GoldHallPeGPView"})
            else
                XH.Bridge:getModule("GoldNew"):openFullView("GoldHallGPCView", {jumpToView = "GoldHallPeGPView"})
            end
        end,
        checkRed = function()
            return XH.Bridge:getModule(LocalConfig.MP.ActPeGP):isHaveFreeGift()
        end,
        throwName = "每日福利"
    },
    TimeLogin = {
        isValid = function()
            return XH.lobby:getModule("TimeLoginAct"):isValid()
        end,
        click = function()
            XH.viewManager:openView("TimeLoginActView")
        end,
        checkRed = function()
            return XH.lobby:getModule("TimeLoginAct"):checkShowRedPoint()
        end,
        throwName = "定时登录"
    },
    DailyLuckyDraw = {
        isValid = function()
            return XH.lobby:getModule("DailyLuckyDraw"):isValid()
        end,
        click = function()
            -- XH.viewManager:openView("DailyLuckDrawMainView")
            if XH.lobby:getModule("Lobby"):getLobbyType() == XH.LOBBY_TYPE.YUEJU then
                XH.viewManager:openView("TabsActivityView", nil, {tab = "FREEDRAW"})
            else
                XH.Bridge:getModule("GoldNew"):openFullView("GoldHallActivityView", {tab = "FREEDRAW"})
            end
        end,
        checkRed = function()
            return XH.lobby:getModule("DailyLuckyDraw"):checkShowRedPoint()
        end,
        throwName = "免费抽奖"
    },
    LuckyTask = {
        isValid = function()
            if XH.isEmbeddedApp() then
                return false
            end
            return XH.lobby:getModule("LuckyTask"):isValid()
        end,
        click = function()
            XH.viewManager:openView("LuckyTaskView")
        end,
        checkRed = function()
            return XH.lobby:getModule("LuckyTask"):isHaveAward()
        end,
        throwName = "幸运任务"
    },
    UnlimitedGift = {
        isValid = function()
            return XH.lobby:getModule("UnlimitedGift"):getActData() ~= nil
        end,
        click = function()
            XH.lobby:getModule("UnlimitedGift"):openUnlimitedGift()
        end,
        checkRed = function()
            return XH.lobby:getModule("UnlimitedGift"):hasReward()
        end,
        timeStr = function()
            local lefttime = XH.lobby:getModule("UnlimitedGift"):getLeftTime()
            if lefttime > 0 then
                return XH.StringTool.getLeftTimeStr(lefttime, true)
            end
            return ""
        end,
        throwName = "无限惊喜礼包"
    },
    LoginGift = {
        isValid = function()
            return XH.lobby:getModule("ToponAct"):isOpen() ~= nil
        end,
        click = function()
            XH.Bridge:getModule("GoldNew"):openFullView("GoldHallActivityView", {tab = "DAILYSIGN"})
        end,
        checkRed = function()
            local activityRed = XH.lobby:getModule("TabsActivity"):getHuoDongRedShow()
            return activityRed["DAILYSIGN"] and true or false
        end,
        throwName = "登录有礼"
    },
    DailyShare = {
        isValid = function()
            return true
        end,
        click = function()
            XH.Bridge:getModule("Share"):setShareScene("获取金币", "每日分享")
            local shareInfo = XH.Bridge:getModule("Share"):getShareInfo()
            if shareInfo == nil or shareInfo.award == nil or #shareInfo.award == 0 then
                XH.Bridge:getModule("Lobby"):onTouchShare()
            else
                XH.Bridge.viewManager:openView("LobbyShareNewView", nil, {source = "获取金币"})
            end
        end,
        checkRed = function()
            return XH.lobby:getModule("Share"):checkShowRedPoint()
        end,
        throwName = "每日分享"
    },
    RecallNew = {
        isValid = function()
            return XH.lobby:getModule("RecallNew"):isInAct()
        end,
        click = function()
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080602, {page = "金币大厅-活动"})
            XH.viewManager:openView("RecallNewView", nil, nil, "金币大厅")
        end,
        checkRed = function()
            return XH.lobby:getModule("RecallNew"):isShowRedPointList()
        end,
        throwName = "召回用户"
    },
    LuckyMission = {
        isValid = function()
            return XH.lobby:getModule("LuckyMission"):isInAct()
        end,
        click = function()
            XH.viewManager:openView("LuckyMissionView", nil, nil, "金币大厅")
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25092202, { page = "金币大厅" })
        end,
        checkRed = function()
            return XH.lobby:getModule("LuckyMission"):isShowRedPointList()
        end,
        throwName = "幸运任务2.0"
    },
    BindPhone = {
        isValid = function()
            return XH.lobby:getModule("BindPhone"):isShowBindPhoneIcon()
        end,
        click = function()
            XH.viewManager:openView("BindPhoneView")
        end,
        checkRed = function()
            return false
        end,
        throwName = "绑定有礼"
    },
    LuckyTurnTableAct = {
        isValid = function()
            return XH.lobby:getModule("LuckyTurnTableAct"):checkShow()
        end,
        click = function()
            XH.viewManager:openView("TabsActivityView", nil, { tab = "LUCKYTURNTABLE"})
        end,
        checkRed = function()
            return XH.lobby:getModule("LuckyTurnTableAct"):checkRedPoint()
        end,
        throwName = "幸运转盘"
    }
}

return functions
