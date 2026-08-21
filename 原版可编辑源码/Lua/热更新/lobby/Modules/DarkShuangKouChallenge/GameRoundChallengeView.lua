local GameRoundChallengeView = class("GameRoundChallengeView", XH.ViewBase)
local LocalConfig = require("lobby.Modules.GoldNew.Configs.LocalConfig")

function GameRoundChallengeView:getCSBPath()
    return "hall/CSB/DarkShuangKouChallenge/GameRoundChallenge.csb"
end

function GameRoundChallengeView:getBindingInfo()
    return {
        ["_KW_PANEL"] = {varName = "_panelZong"},
        ["_KW_POS_DAILY_AWARD"] = {varName = "_posDailyAward"},
        ["_KW_PANEL_TODAY_AWARD"] = {varName = "_panelTodayAward"},
        ["_KW_TODAY_AWARD_RED_POINT"] = {varName = "_todayAwardRedPoint"},
        ["_KW_TEXT_TODAY_ROUND"] = {varName = "_textTodayRound"},
        ["_KW_PANEL_"] = {varName = "_panel", beginIndex = 1, endIndex = 3, type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnPanel"},
        ["_KW_TOTAL_PANEL"] = {varName = "_totalPanel"},
        ["_KW_UI_FIRST_AWARD"] = {varName = "_uiFirstAward"},
        ["_KW_PANEL_TASK_PROGRESS"] = {varName = "_panelTaskProgress"},
        ["_KW_POS_PROGRESS"] = {varName = "_posProgress"}
    }
end

function GameRoundChallengeView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "KW_EVENT_DARK_SHUANG_KOU_GAME_ROUND_INFO", callBack = "initUI"}
    }
end

function GameRoundChallengeView:ctor(areaId)
    GameRoundChallengeView.super.ctor(self)
    self._posDailyAward:addTouchEventListener(handler(self, self.onClickAward))
    self:initUI()
    self._areaId = areaId

    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040303, {page = page, block_label = "局数挑战"})
end

function GameRoundChallengeView:initUI()
    self._gameRoundInfo, self._gameRoundFirstInfo = XH.lobby:getModule("DarkShuangKouChallenge"):getGameRoundInfo()

    if next(self._gameRoundInfo) then
        self._panelTaskProgress:setVisible(true)
    else
        self._panelTaskProgress:setVisible(false)
    end
    if next(self._gameRoundFirstInfo) then
        -- dailyAwardView:showAward(self._gameRoundFirstInfo.rewards[1])
        self._panelTodayAward:setVisible(true)
        if self._gameRoundFirstInfo.state == 1 then
            local path = "hall/CSB/DarkShuangKouChallenge/spine/"
            self._uiFirstAward:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = path .. "prop_animation.json", animationName = "loop", boneName = "prop", slotName = "prop", isLoop = true})
            self._posDailyAward:setTag(self._gameRoundFirstInfo.subactid)
            self._posDailyAward:setTouchEnabled(true)
            self._todayAwardRedPoint:setVisible(true)
        else
            self._uiFirstAward:stopAllActions()
            self._posDailyAward:setTouchEnabled(false)
            self._todayAwardRedPoint:setVisible(false)
        end
    else
        self._panelTodayAward:setVisible(false)
    end

    if next(self._gameRoundInfo) then
        if not self._posProgress:getChildByName("TaskProgress") then
            local node = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.TaskProgressView").new()
            if node then
                node:setName("TaskProgress")
                self._posProgress:addChild(node)
            end
        end
        local taskProgress = self._posProgress:getChildByName("TaskProgress")
        local info = self._gameRoundInfo
        info.clickCallback = function(content, index)
            XH.lobby:getModule("DarkShuangKouChallenge"):reqGetAward("GameRound", content.subactid)
            local page = "金币游戏结算"
            if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
                page = "新金币大厅"
            elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
                page = "选场大厅"
            end
            local nIndex = index
            if next(self._gameRoundFirstInfo) then
                nIndex = nIndex + 1
            end
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040305, {page = page, block_label = "局数挑战", page_item_id = string.format("第%d阶段", nIndex)})
        end
        taskProgress:setTaskInfo(info)
        self._textTodayRound:setString(self._gameRoundInfo.progress)
    end

    for i = 1, 3 do
        self["_panel" .. i]:setTag(i)
    end
end

function GameRoundChallengeView:onClickAward(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local subactid = send:getTag()
    XH.lobby:getModule("DarkShuangKouChallenge"):reqGetAward("GameRound", subactid)
    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040305, {page = page, block_label = "局数挑战", page_item_id = string.format("第%d阶段", 1)})
end

function GameRoundChallengeView:onBtnPanel(send, eventType)
    local index = send:getTag()
    if index == 1 then
        local currScene = XH.SceneManager:getInstance():getTopScene()
        local sceneTag = currScene:getTag()
        if sceneTag ~= XH.SCENE_TAG.GAME then
            XH.lobby:getModule("LuckyTask"):notifyLuckyTaskJoin("AC_JUMPTYPE_GAME", 30579, {joinRoom = true})
        end
        XH.viewManager:closeView("DarkShuangKouChallengeView")
        return
    end
    XH.lobby:getModule("DarkShuangKouChallenge"):changeToTab(index)
end

return GameRoundChallengeView
