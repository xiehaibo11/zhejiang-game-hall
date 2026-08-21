---@class TeaHouseScene : Scene
local TeaHouseScene = class("TeaHouseScene", function()
    return display.newScene()
end)

function TeaHouseScene:ctor()

    self._teaHouseMainView = nil
    self._enterFinishFunc = nil

    self:registerScriptHandler(function(state)
        if state == "enter" and self.onEnter then
            self:onEnter()
        elseif state == "exit" and self.onExit then
            self:onExit()
        elseif state == "enterTransitionFinish" and self.onEnterTransitionFinish then
            self:onEnterTransitionFinish()
        elseif state == "exitTransitionStart" and self.onExitTransitionStart then
            self:onExitTransitionStart()
        elseif state == "cleanup" and self.onCleanup then
            self:onCleanup()
        end
    end)
end

function TeaHouseScene:initUI()
    self._teaHouseMainView = TeaHouse.manager.viewManager:createView("TeaHouseMainView")
    self._teaHouseMainView:setIsAutoClean(false)
    self:addChild(self._teaHouseMainView)
end

function TeaHouseScene:onEnter()
    TeaHouse.manager.teahouseMain:setIsInGame(false)
    TeaHouse.manager.teahouseMain:checkNeedQuickJoinTable()
    TeaHouse.manager.teahouseMain:checkPlayerOwnerProp()
    TeaHouse.manager.teahouseMain:checkAgentPlayerProp()
    TeaHouse.sendFlushDrop()

    TeaHouse.manager.teahouseSDK:addClipboardCallback("TeaHouseScene", handler(self, self.onClipboardCallback))

    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig and SwitchConfig.TeahouseOnline == 1 then
        local isVisible = teahouseData:getUCRight() == teahouseData.UC_RIGHT.YES
        if not isVisible then
            isVisible = teahouseData:isOthersShow()
        end
        if isVisible then
            self:removeChildByName("KW_ONLINE_LIST")
            self._onlineListLayer = require("teahouse.View.TeaHouseOnlineListView").new()
            self._onlineListLayer:setName("KW_ONLINE_LIST")
            self:addChild(self._onlineListLayer)
            self._onlineListLayer:reqHasRecallAward()
        end
    end    
    XH.playerData:setTeaId(teahouseData:getTeaNumber())
    
    if not TeaHouse.manager.teaHouseRemodeCreate:firstJoinNewRemodelTeaHouse() then
        if not TeaHouse.manager.teahouseMain:getIsFirstInTea() then
            if not TeaHouse.BridgeData:isRemodelArea() then
                if not TeaHouse.manager.teaHouseGuide:startCreateTeaHouseGuide() then
                    TeaHouse.startShowPopViews()
                end
            else
                TeaHouse.startShowPopViews()
            end
        end
    end
    if self._enterFinishFunc then
        self._enterFinishFunc()
        self._enterFinishFunc = nil
    end
    XH.lobby:getModule("RecallNew"):getReBackRedPointRequest()
    cc.Director:getInstance():setAnimationInterval(1 / 30)
end

function TeaHouseScene:onExit()
    XH.playerData:setTeaId()
    TeaHouse.manager.teahouseSDK:removeClipboardCallback("TeaHouseScene")
end

function TeaHouseScene:onEnterTransitionFinish()
    TeaHouse.manager.viewManager:updateRootNode()
    TeaHouse.resetLoading()
end

function TeaHouseScene:onExitTransitionStart()

end

function TeaHouseScene:onCleanup()

end

function TeaHouseScene:enter(tableID, inTeaFunc, playModeId)
    self:retain()

    local loadingCoroutine = coroutine.create(function()
        self:initUI()
        coroutine.yield()
        if self._teaHouseMainView then
            self._teaHouseMainView:initTable()
        end
        TeaHouse.pushTeaHouseScene(self)
        TeaHouse.manager.teahouseList:hideSuitableTeaHouseListView()
        self:release()
    end)

    local loadingScheduleID
    loadingScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if coroutine.status(loadingCoroutine) == "dead" then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(loadingScheduleID)
            TeaHouse.manager.teahouseMain:setIsInScene(true)
            if TeaHouse.manager.teahouseData:checkSelfPower("JoinTable") then
                TeaHouse.manager.teahouseMain:checkSelfGameStatus()
            else
                TeaHouse.manager.teahouseMain:setEnterTableID(nil)
            end
        else
            coroutine_resume_with_debug(loadingCoroutine)
        end
    end, cc.Director:getInstance():getAnimationInterval(), false)
    self._enterFinishFunc = inTeaFunc
    TeaHouse.manager.teahouseMain:setEnterTableID(tableID)
    TeaHouse.manager.teahouseMain:setEnterPlayModeID(playModeId)
    TeaHouse.manager.teahouseMain:setEnterSeatID(0)
    TeaHouse.manager.teahouseData:setIsInTeahouse(true)
end

function TeaHouseScene:exit()
    if self._teaHouseMainView ~= nil then
        self._teaHouseMainView:cleanup()
    end
    TeaHouse.SysTool.copyClipboard("")
    TeaHouse.manager.viewManager:closeAllViewsInExclude({ "TeaHouseListView", "TeaHouseRemodelListView"})
    TeaHouse.manager.teahouseList:initReq()
    TeaHouse.manager.teahouseList:showSuitableTeaHouseListView()
    TeaHouse.popTeaHouseScene()

    TeaHouse.manager.teahouseMain:setIsInScene(false)
    TeaHouse.manager.teahouseData:setIsInTeahouse(false)
end

function TeaHouseScene:onClipboardCallback(msg)
    if msg == nil then
        return
    end
    local teaHouseID = nil
    local strTeaHouseID = string.match(msg, "亲友圈口令：%d+") or string.match(msg, "比赛场口令：%d+")
    if strTeaHouseID then
        teaHouseID = tonumber(string.match(strTeaHouseID, "%d+"))
    end
    if teaHouseID then
        TeaHouse.SysTool.copyClipboard("")
    end
end

return TeaHouseScene�