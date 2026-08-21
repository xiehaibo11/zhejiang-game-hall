local GoldNewView = class("GoldNewView", NG.ViewBase)
local GoldRoomsDefine = require("newgold.GoldCommon.Define.GoldRoomsDefine")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldStoreDefine = require("newgold.GoldLobby.Modules.GoldStore.Define")
local GoldLaunchConfig = require("lobby.Modules.GoldLaunch.Config")

function GoldNewView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/Gold/GoldLayer.csb"
end

function GoldNewView:getBindingInfo()
    return {
        -- 
        ["_KW_BTN_CZCW_FREE"] = { varName = "_KW_BTN_CZCW_FREE" },
        ["_KW_SCROLLVIEW"] = { varName = "_KW_SCROLLVIEW" },
        ["_KW_PANEL_ITEM"] = { varName = "_KW_PANEL_ITEM" },
        ["_KW_BTN_BACK"] = { varName = "_KW_BTN_BACK", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_TEXT_NAME_BIG"] = { varName = "_KW_TEXT_NAME_BIG" },
        ["_KW_GOLD_SR"] = { varName = "_KW_GOLD_SR" },
        ["_KW_DIAMOND_SR"] = { varName = "_KW_DIAMOND_SR" },
        ["_KW_ROOM"] = { varName = "_KW_ROOM" },
        ["_KW_SCORE"] = { varName = "_KW_SCORE" },
        ["_KW_TXT_COUNT"] = { varName = "_KW_TXT_COUNT" },
        ["_KW_TXT_LIMIT"] = { varName = "_KW_TXT_LIMIT" },
        ["_KW_QUICKSTART"] = { varName = "_KW_QUICKSTART", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventQuickStart" },
        ["_KW_QS_ANI"] = { varName = "_KW_QS_ANI" },
        ["_KW_STORE"] = { varName = "_KW_STORE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventStore" },
        ["_KW_TEXT_QS"] = { varName = "_KW_TEXT_QS" },
        ["_KW_BTN_CZCW"] = { varName = "_KW_BTN_CZCW", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCZCW" },
        ["_KW_BTN_ZDFL"] = { varName = "_KW_BTN_ZDFL", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventZDFL" },
        ["_KW_BTN_MRQD"] = { varName = "_KW_BTN_MRQD", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventMRQD" },
        ["_KW_GOLD_ADD"] = { varName = "_KW_GOLD_ADD", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGoldStore" },
        ["_KW_DIAMOND_ADD"] = { varName = "_KW_DIAMOND_ADD", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventDiamondStore" },
        ["_KW_PANEL_CHOSE"] = { varName = "_KW_PANEL_CHOSE" },
        ["_KW_PANEL_LEFT"] = { varName = "_KW_PANEL_LEFT" },
        ["_KW_BTN_RULE"] = { varName = "_KW_BTN_RULE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRule" },
        ["_KW_CZCW_SHOW"] = { varName = "_KW_CZCW_SHOW" }, -- 超值畅玩红点
        ["_KW_LEFT_CZCW"] = { varName = "_KW_LEFT_CZCW" }, -- 超值畅玩倒计时
        ["_KW_ZDFL_SHOW"] = { varName = "_KW_ZDFL_SHOW" }, -- 整点福利红点
        ["_KW_MRQD_SHOW"] = { varName = "_KW_MRQD_SHOW" }, -- 每日签到红点
        ["_KW_NUMID"] = { varName = "_KW_NUMID" },
        ["_KW_PANEL_LEFT_EX"] = { varName = "_KW_PANEL_LEFT_EX" },
        ["_KW_DIS_ICON"] = { varName = "_KW_DIS_ICON" },
    }
end

function GoldNewView:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_FLUSH_NOTIFY_PROPS", callBack = "updateProps" },
        { module = NG.goldLobby:getModule("GoldDailySignIn"), eventKeyName = "EVENT_SIGN_INFO_SUCCESS", callBack = "flushSignState" },
        { module = NG.goldLobby:getModule("GoldPlayAward"), eventKeyName = "EVENT_CHCW_INFO_SUCCESS", callBack = "flushPlayAwardState" },
        { module = NG.goldLobby:getModule("GoldHourLoginAward"), eventKeyName = "EVENT_ZDFL_INFO_SUCCESS", callBack = "flushHourAwardState" },
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_NOTIFY_AUTOJOIN_ROOM", callBack = "setAutoJoin" },
    }
end

function GoldNewView:ctor(param)
    GoldNewView.super.ctor(self, param)
    self:initAudio()
    local bSupportBBXL = NG.goldLobby:getModule("GoldCommon"):isSupportGame(GoldAreaConfig.MAH_BBXL)
    self._gameid = param.gameid or (bSupportBBXL and GoldAreaConfig.MAH_BBXL or GoldAreaConfig.LZDDZ)
    NG.goldLobby.selectGameID = self._gameid
    local rooms = NG.goldLobby:getModule("GoldCommon"):getRoomInfos()
    for _, v in pairs(rooms) do
        if v.GAMEID == self._gameid then
            self._roomInfos = v
            break
        end
    end
    if self._roomInfos == nil then
        return
    end
    if param then
        self._autoJoinGame = param.autoJoinGame or false
    end
    NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
    NG.goldLobby:getModule("GoldCommon"):flushPlayerPosition()
    self:judgeParam(param)
    self:initUI()
    self:initReqs()
    self:updateProps()
    self:flushScene()
    self:judgeNewUser(param)
    self._KW_NUMID:setString("UID:" .. GoldPlayerData.NumId .. "                        ")
    NG.UITool.adaptForLiuHai({ self._KW_PANEL_LEFT_EX })

    self:performWithDelay(function()
        NG.goldLobby:getModule("GoldTip"):judgeShowView()
    end, 0.1)
    XH.lobby:getModule("Lobby"):openAniTopView()
end

function GoldNewView:initAudio()
    local gameID = 42210
    local key = "GameSound_" .. gameID
    local priority = 1
    local GameSoundResChecker = require("app.hotupdate.gamesound.GameSoundResChecker")
    GameSoundResChecker._startHotFix(gameID, key, priority)
end

function GoldNewView:judgeNewUser(param)
    if param == nil or not param.NewUserGift then
        XH.lobby:getModule("GoldLaunch"):reqGiftInfo()
        return
    end
    -- 重新请求一次数据，然后再做后续处理
    XH.lobby:getModule("GoldLaunch"):reqGiftInfo(GoldLaunchConfig.Type.GOLDLOBBY)
end

function GoldNewView:setAutoJoin()
    if NG.goldLobby:getModule("GoldCommon"):getAutoJoin() then
        return
    end
    self._autoJoinGame = true
    NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
end

-- 设置每日签到状态
function GoldNewView:flushSignState()
    self._info = NG.goldLobby:getModule("GoldDailySignIn"):getActInfo()
    if self._info == nil then
        return
    end
    local canSign = self._info.progressLog[#self._info.progressLog] -- 是否已经签到
    self._KW_MRQD_SHOW:setVisible(canSign == 0)
    if canSign == 0 and self._isShowSign == nil then
        self._isShowSign = true
        NG.viewManager:openView("NewGold_DailySignInView")
    end
end

-- 设置整点福利状态
function GoldNewView:flushHourAwardState()
    self._KW_ZDFL_SHOW:setVisible(NG.goldLobby:getModule("GoldHourLoginAward"):isCanGetAward())
end

-- 设置超值畅玩状态
function GoldNewView:flushPlayAwardState()
    self._KW_BTN_CZCW_FREE:setVisible(NG.goldLobby:getModule("GoldPlayAward"):isCanGetFree())
    self:flushOpenInfo()
    -- 买过没次数
    local isActEnd = NG.goldLobby:getModule("GoldPlayAward"):isBuyedAndTimesOut()
    self._KW_BTN_CZCW:setVisible(not isActEnd)
    if isActEnd then
        if NG.goldLobby:getModule("GoldPlayAward"):isCanGetFree() then
            self._KW_BTN_CZCW:setVisible(true)
        end
        self:removeSchedule()
        return
    end
    -- 没买过
    local isBuyed = NG.goldLobby:getModule("GoldPlayAward"):isBuyed()
    if not isBuyed then
        self:removeSchedule()
        return
    end
    -- 买过有次数（有无时间）
    self._leftTime = NG.goldLobby:getModule("GoldPlayAward"):getLeftTime()
    local leftCnt = NG.goldLobby:getModule("GoldPlayAward"):getLeftCnt()
    if leftCnt == 0 then
        self._leftTime = 0
    end
    self._KW_CZCW_SHOW:setVisible(self._leftTime > 0)
    if self._leftTime <= 0 then
        self:removeSchedule()
        return
    end
    self._KW_LEFT_CZCW:setString(NG.StringTool.secToTime(self._leftTime))
    if self._leftTime > 0 then
        self._KW_BTN_CZCW_FREE:setVisible(false)
        self:removeSchedule()
        self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            self:schedulePlayAward()
        end, 1, false)
    end
end

function GoldNewView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function GoldNewView:schedulePlayAward()
    if self == nil or self._leftTime == nil or NG == nil then
        return
    end
    self._leftTime = self._leftTime - 1
    if self._leftTime <= 0 then
        self._KW_CZCW_SHOW:setVisible(false)
        NG.goldLobby:getModule("GoldPlayAward"):reqActInfo()
        self:removeSchedule()
        return
    end
    self._KW_LEFT_CZCW:setString(NG.StringTool.secToTime(self._leftTime))
end

-- 刷新参数
function GoldNewView:judgeParam(param)
    if param == nil then
        -- 每日首两次弹窗超值畅玩
        local showTimes = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_ACT_CZCW_TIMES, 0)
        if showTimes < 2 then
            self._isAutoShowCZCW = true
        end
        return
    end
    if param.isShowCZCW then
        self._isShowCZCW = true -- 进入后需要弹超值畅玩
    end
end

-- 是否弹窗超值畅玩
function GoldNewView:flushOpenInfo()
    if NG.goldLobby:getModule("GoldPlayAward"):isBuyed() then
        self._isShowCZCW = false
        self._isAutoShowCZCW = false
        return
    end
    if self._isShowCZCW then
        NG.viewManager:openView("NewGold_PlayAwardView")
        self._isShowCZCW = false
        return
    end
    if self._isAutoShowCZCW then
        NG.viewManager:openView("NewGold_PlayAwardView")
        self._isAutoShowCZCW = false
        local showTimes = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_ACT_CZCW_TIMES, 0)
        NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_ACT_CZCW_TIMES, showTimes + 1)
        return
    end
end

-- 切换gameid后刷新ui
function GoldNewView:flushScene()
    self:updateLevelInfos()
    self:flushLeftState()
    self:judgeQuickStart()
end

function GoldNewView:updateProps()
    self._KW_GOLD_SR:setString(NG.StringTool.getScoreStr(GoldPlayerData.JoyBean))
    self._KW_DIAMOND_SR:setString(NG.StringTool.getScoreStr(GoldPlayerData.Diamond))
    self:judgeQuickStart()
    if self._autoJoinGame and GoldPlayerData.JoyBean >= GoldRoomsDefine.GOLD_MIN_JOIN then
        local idx = tonumber(self:getQuickLevel())
        NG.goldLobby:getModule("GoldCommon"):setAutoJoin(true)
        self:judgeJoinRoom(idx)
        self._autoJoinGame = false
    end
end

function GoldNewView:onTouchEventGoldStore()
    NG.viewManager:openView("NewGold_StoreView", nil, { productType = GoldStoreDefine.TYPE.GOLD })
end

function GoldNewView:onTouchEventDiamondStore()
    NG.viewManager:openView("NewGold_StoreView", nil, { productType = GoldStoreDefine.TYPE.DIAMOND })
end

-- 初始化部分请求
function GoldNewView:initReqs()
    -- 每日签到
    NG.goldLobby:getModule("GoldDailySignIn"):reqActInfo()
    -- 整点福利
    NG.goldLobby:getModule("GoldHourLoginAward"):reqActInfo()
    -- 超值畅玩
    NG.goldLobby:getModule("GoldPlayAward"):reqActInfo()
    -- 破产礼包
    NG.goldLobby:getModule("GoldBankTip"):reqActInfo()
    -- 请求钻石列表
    NG.goldLobby:getModule("GoldStore"):reqProductList(GoldStoreDefine.TYPE.DIAMOND)
end

function GoldNewView:updateLevelInfos()
    -- 设置场次
    self._KW_SCROLLVIEW:removeAllChildren()
    self._KW_TEXT_NAME_BIG:setString(self._roomInfos.TITLE)
    self._KW_BTN_RULE:setVisible(self._roomInfos.GAMEID == GoldAreaConfig.LZDDZ)
    for j, k in pairs(self._roomInfos.LEVEL) do
        local temp = self._KW_PANEL_ITEM:clone()
        local size = temp:getContentSize()
        local lineX = (j - 1) % 3
        local lineY = math.floor((j - 1) / 3)
        temp:setVisible(true)
        temp:setPosition(size.width * (lineX + 0.5), size.height * (1.5 - lineY))
        temp:addTouchEventListener(handler(self, self.onTouchEventGoldScene))
        local item = temp:getChildByName("_KW_PANEL_GOLD_ITEM")
        item:getChildByName("_KW_ROOM"):setString(k.name)
        item:getChildByName("_KW_SCORE"):setString(k.base)
        local limit = NG.StringTool.getScoreStr(k.minscore) .. "-" .. NG.StringTool.getScoreStr(k.maxscore)
        if k.maxscore == -1 then
            limit = NG.StringTool.getScoreStr(k.minscore) .. "以上"
        end
        item:getChildByName("_KW_TXT_LIMIT"):setString(limit)
        local params = { path = "cocosStudio/GoldNew/Lobby/Json/Tuijian/", tex = "skeleton.json", ske = "skeleton.atlas", armatureName = "animation" }
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            temp:getChildByName("_KW_GOLD_ITEM_ANI"):addChild(spineNode)
            spineNode:setScale(1.63)
            temp:getChildByName("_KW_GOLD_ITEM_ANI"):setVisible(false)
        end
        temp:setName(k.level)
        self._KW_SCROLLVIEW:addChild(temp)
    end
end

function GoldNewView:showShopAni()
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_dt_sc/zzb_dt_sc.atlas",
        tex = "animation/Lobby/Base/zzb_dt_sc/zzb_dt_sc.json",
        armatureName = "animation",
        scale = 1.2,
        loop = true,
    }
    local armature = display.playDargonBonesSpine(config)

    -- local aniInfo = { File = "animation/Lobby/Base/shop-icon/shop-icon.ExportJson", ArmatureName = "shop-icon", AniName = "Animation1" }
    -- if not cc.FileUtils:getInstance():isFileExist(aniInfo.File) then
    --     return
    -- end
    -- ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniInfo.File)
    -- local armature = ccs.Armature:create(aniInfo.ArmatureName)
    self._KW_STORE:addChild(armature)
    armature:setAnchorPoint(cc.p(0.5, 0.5))
    local size = self._KW_STORE:getContentSize()
    armature:setPosition(cc.p(size.width / 2, size.height / 2))
    -- armature:getAnimation():play(aniInfo.AniName, -1, 1)
    -- armature:setScale(1.2)
end

function GoldNewView:initUI()
    -- 快速开始
    local params = { path = "cocosStudio/GoldNew/Lobby/Json/quickStart/", tex = "Kuaisukaishi.json", ske = "Kuaisukaishi.atlas", armatureName = "animation2" }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_QS_ANI:addChild(spineNode)
        spineNode:setScale(2)
        spineNode:setPosition(self._KW_QS_ANI:getContentSize().width / 2, self._KW_QS_ANI:getContentSize().height / 2)
    end
    -- 商城
    self:showShopAni()
    -- local params = {path = "cocosStudio/GoldNew/Lobby/Json/I_shangcheng/", tex = "I_shangcheng.json", ske = "I_shangcheng.atlas", armatureName = "animation"}
    -- local spineNode = display.playDargonBonesSpine(params)
    -- if spineNode then
    --     self._KW_STORE:addChild(spineNode)
    --     spineNode:setScale(2.5)
    --     spineNode:setPosition(self._KW_STORE:getContentSize().width / 2, self._KW_STORE:getContentSize().height / 2)
    -- end
    -- 左侧页签，目前只有一个金币场，先写死
    local rooms = NG.goldLobby:getModule("GoldCommon"):getRoomInfos()
    for _, v in pairs(rooms) do
        if NG.goldLobby:getModule("GoldCommon"):isSupportGame(v.GAMEID) then
            local temp = self._KW_PANEL_CHOSE:clone()
            temp:getChildByName("_KW_TEXT_NAME"):setString(v.TITLE)
            temp:getChildByName("_KW_CHOSE_STATE"):setVisible(false)
            temp:setName(v.GAMEID)
            temp:setVisible(true)
            temp:addTouchEventListener(handler(self, self.onTouchEventChangeGold))
            self._KW_PANEL_LEFT:addChild(temp)
        end
    end

    local disIcon = require("newgold.GoldLobby.Modules.GoldBankrupt.GoldDisIconView").new({ isHall = true })
    if disIcon then
        self["_KW_DIS_ICON"]:addChild(disIcon)
    end
end

function GoldNewView:flushLeftState()
    for i = 1, self._KW_PANEL_LEFT:getChildrenCount() do
        local node = self._KW_PANEL_LEFT:getChildren()[i]
        if node then
            local bSelect = tonumber(node:getName()) == self._gameid
            node:getChildByName("_KW_CHOSE_STATE"):setVisible(bSelect)
            node:getChildByName("_KW_TEXT_NAME"):setColor(bSelect and cc.c3b(131,60,26) or cc.c3b(254,254,254))
        end
    end
end

function GoldNewView:onTouchEventChangeGold(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._gameid = tonumber(send:getName())
    for _, v in pairs(GoldRoomsDefine.ROOMS) do
        if v.GAMEID == self._gameid then
            self._roomInfos = v
            NG.goldLobby.selectGameID = self._roomInfos.GAMEID
            break
        end
    end
    self:flushScene()
end

function GoldNewView:updateSelectAni(fitLevel)
    for i = 1, self._KW_SCROLLVIEW:getChildrenCount() do
        local node = self._KW_SCROLLVIEW:getChildren()[i]
        node:getChildByName("_KW_GOLD_ITEM_ANI"):setVisible(node:getName() == tostring(fitLevel))
        node:getChildByName("_KW_PANEL_GOLD_ITEM"):getChildByName("_KW_IMG_CHOSE"):setVisible(node:getName() == tostring(fitLevel))
    end
end

function GoldNewView:judgeQuickStart()
    local fitLevel = -1
    local gold = GoldPlayerData.JoyBean
    for _, k in pairs(self._roomInfos.LEVEL) do
        if k.level == 1 and fitLevel == -1 then
            self:updateSelectAni(k.level)
            self._KW_TEXT_QS:setString(self._roomInfos.TITLE .. " " .. k.name)
        end
        if k.maxscore == -1 then
            if gold >= k.minscore then
                fitLevel = k.level
                self._KW_TEXT_QS:setString(self._roomInfos.TITLE .. " " .. k.name)
            end
        else
            if gold >= k.minscore and gold <= k.maxscore then
                fitLevel = k.level
                self._KW_TEXT_QS:setString(self._roomInfos.TITLE .. " " .. k.name)
            end
        end
    end
    if fitLevel == -1 then
        return
    end
    self:updateSelectAni(fitLevel)
end

function GoldNewView:getQuickLevel()
    local fitLevel = 1
    local gold = GoldPlayerData.JoyBean
    for _, k in pairs(self._roomInfos.LEVEL) do
        if k.maxscore ~= -1 then
            if gold >= k.minscore and gold <= k.maxscore then
                fitLevel = k.level
            end
        else
            if gold >= k.minscore then
                fitLevel = k.level
            end
        end
    end
    return fitLevel
end

-- 点击金币场
function GoldNewView:onTouchEventGoldScene(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:judgeJoinRoom(tonumber(send:getName()))
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_7, { item_id = send:getName() }, { area_id = GoldAreaConfig.AreaID })
end

-- 商城
function GoldNewView:onTouchEventStore()
    NG.viewManager:openView("NewGold_StoreView")
end

-- 快速开始
function GoldNewView:onTouchEventQuickStart()
    self:judgeJoinRoom(tonumber(self:getQuickLevel()))
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_8, { item_id = self:getQuickLevel() }, { area_id = GoldAreaConfig.AreaID })
end

-- 处理加入逻辑
function GoldNewView:judgeJoinRoom(level)
    local gold = GoldPlayerData.JoyBean
    local info
    for j, k in pairs(self._roomInfos.LEVEL) do
        if k.level == level then
            info = k
            break
        end
    end
    if info == nil then
        NG.TipTool.showToast("选场异常，请尝试退出重进")
        return
    end
    -- 金币不足
    if gold < info.minscore then
        if NG.goldLobby:getModule("GoldPlayAward"):isCanGetAward() then
            NG.goldLobby:getModule("GoldPlayAward"):reqActGameRewards(true, false, info.roomId, info.appId)
            return
        end
        if GoldPlayerData.JoyBean < GoldRoomsDefine.GOLD_MIN_JOIN then
            NG.goldLobby:getModule("GoldBankTip"):reqBankTipAward(false, info)
        else
            NG.viewManager:openView("NewGold_EnterRoomGiftPackView", nil, info)
        end
        return
    end
    -- 金币过多
    if gold > info.maxscore and info.maxscore ~= -1 then
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "您太富有了，去高级房间和更厉害的玩家一起游戏吧！")
        return
    end
    NG.goldLobby:getModule("GoldCommon"):reqJoinRoom(self._roomInfos.GAMEID, false, info.roomId, info.appId, info.level)
end

-- 超值畅玩
function GoldNewView:onTouchEventCZCW()
    NG.viewManager:openView("NewGold_PlayAwardView")
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_6, nil, { area_id = GoldAreaConfig.AreaID })
end

-- 整点福利
function GoldNewView:onTouchEventZDFL()
    NG.viewManager:openView("NewGold_HourLoginAwardView")
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_22, nil, { area_id = GoldAreaConfig.AreaID })
end

-- 每日签到
function GoldNewView:onTouchEventMRQD()
    NG.viewManager:openView("NewGold_DailySignInView")
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_5, nil, { area_id = GoldAreaConfig.AreaID })
end

function GoldNewView:onClickClose()
    self:removeSchedule()
    local NewGoldController = require("newgold.NewGoldController")
    NewGoldController:getInstance():exit()
end

-- 规则
function GoldNewView:onTouchEventRule()
    NG.viewManager:openView("NewGold_SettingView")
end

return GoldNewView(V  