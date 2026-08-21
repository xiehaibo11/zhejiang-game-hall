local MatchView = NG.GAME.gameClass("MatchView", NG.ViewBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

function MatchView:ctor()
    MatchView.super.ctor(self)

    self:initView()
    self:showMatchAni()
end

function MatchView:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Basic/MatchingLayer.csb"
end

function MatchView:getBindingInfo()
    return {
        --
        ["_KW_IMG_MATCH_BG"] = {varName = "_matchBg"},
        ["_KW_NODE_MATCH_ANI"] = {varName = "_matchAniNode"},
        ["_KW_FONT_MATCH_TIME"] = {varName = "_matchTimeText"},
        ["_KW_NODE_WAIT"] = {varName = "_waitNode"},
        ["_KW_NODE_WAIT_ANI"] = {varName = "_waitAniNode"}
    }
end

function MatchView:getProxyEvents()
    return {
        --
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SHOW_GAME_BTNS", callBack = "showWaitAni"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TIME_OUT_CHANGE_SEAT", callBack = "initView"},
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START", callBack = "initView"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SHOW_CONTINUE_BTN", callBack = "initView"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CHANGE_TABLE_SUCCESS", callBack = "showMatchAni"},
        {module = NG.goldGame:getModule("Players"), eventKeyName = "EVENT_PLAYER_STATE_CHANGE", callBack = "onPlayerStateChange" },
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_NOTIFY_JOIN_MATCH_SUCCESS", callBack = "showMatchAni" },
    }
end

function MatchView:initView()
    self._matchBg:setVisible(false)
    self._waitNode:setVisible(false)
end

function MatchView:onShowPlayerReady()
    self:showWaitAni()
end

function MatchView:hideMatchAni()
    self._matchAniNode:removeAllChildren()
    self._matchBg:setVisible(false)
    self:stopAllActions()
end

function MatchView:showMatchAni()
    self:initView()
    self:initMatchAni()
    self._matchBg:setVisible(true)
    self:startMatchTime()
end

local nowMatchTime = 0
function MatchView:startMatchTime()
    self:removeSchedule()
    nowMatchTime = 0
    self:setMatchTimeStr(nowMatchTime)
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        nowMatchTime = nowMatchTime + 1
        self:setMatchTimeStr(nowMatchTime)
    end, 1, false)
end

function MatchView:setMatchTimeStr(nowMatchTime)
    if nowMatchTime < 10 then
        self._matchTimeText:setString("0"..nowMatchTime .. "秒")
    else
        self._matchTimeText:setString(nowMatchTime .. "秒")
    end
end

function MatchView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function MatchView:hideWaitAni()
    self._waitAniNode:removeAllChildren()
    self._waitNode:setVisible(false)
end

function MatchView:showWaitAni()
    self:initView()
    self:initWaitAni()
    self._waitNode:setVisible(true)
end

function MatchView:initMatchAni()
    if self._matchAniNode:getChildByName("MatchAni") then
        return
    end
    local params = {path = "NewGoldRes/Spine/Common/Match/", tex = "Hp_ppz.json", ske = "Hp_ppz.atlas", armatureName = "animation"}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        spineNode:setName("MatchAni")
        spineNode:setScale(1.6)
        self._matchAniNode:addChild(spineNode)
    end
    self._matchBg:setVisible(true)
end

function MatchView:initWaitAni()
    if self._waitAniNode:getChildByName("WaitAni") then
        return
    end
    local params = {path = "NewGoldRes/Spine/Common/Match/", tex = "Dengdaizhong.json", ske = "Dengdaizhong.atlas", armatureName = "animation"}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        spineNode:setName("WaitAni")
        spineNode:setScale(1.6)
        self._waitAniNode:addChild(spineNode)
    end
end

function MatchView:onPlayerStateChange(event)
    local localSeat = NG.GAME.roomTableData:seatToLocal(event.msg.seat)
    local playerData = NG.GAME.roomTableData:getPlayerBySeat(event.msg.seat)
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT and playerData:getPlayState() == 2 then
        self:hideWaitAni()
    end
end

function MatchView:close()
    self:removeSchedule()
    MatchView.super.close(self)
end

return MatchView
5