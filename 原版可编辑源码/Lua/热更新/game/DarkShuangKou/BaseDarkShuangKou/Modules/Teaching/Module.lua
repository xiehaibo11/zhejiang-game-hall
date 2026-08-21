local GameGuideModule = CF.gameClass("GameGuideModule", CF.ModuleBase)

GameGuideModule.EVENT_TEACHING_DATA = "EVENT_TEACHING_DATA"
GameGuideModule.EVENT_TEACHING_NEXT_STEP = "EVENT_TEACHING_NEXT_STEP"

function GameGuideModule:startTeaching(param)
    self._nextFunc = nil
    self._isWaitingTeach = false
    self._protocols = {}
    self._guideStep = 1
    self._isSkip = false
    self:removeTimer()
    self._gameId = param.roomData.gameID
    self._config = clone(require(CF.gameScriptRootPath .. ".DarkShuangKou.BaseDarkShuangKou.Modules.Teaching.Config"))
    if self._config then
        self._guideConfig = {}
        for _, data in pairs(self._config.protocolQueue) do
            self._guideConfig = self:concatTables(self._guideConfig, clone(data))
        end
    end
end

function GameGuideModule:onDestroy()
    self:removeTimer()
end

function GameGuideModule:removeTimer()
    if self._timerHandler then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._timerHandler)
        self._timerHandler = nil
    end
end

function GameGuideModule:concatTables(tab1, tab2)
    for _, v in ipairs(tab2) do
        table.insert(tab1, v)
    end
    return tab1
end

function GameGuideModule:continueNovice()
    if self._nextFunc then
        self._nextFunc()
        self._nextFunc = nil
        return
    end
    if self._timerHandler then
        return
    end
    self._startTime = os.time()
    local startProtocol = function()
        self:startProtocol()
    end
    self._timerHandler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(startProtocol, 0, false)
end

-- 下一步
function GameGuideModule:clickNextGuide()
    self:continueNovice()
    self:dispatchEvent({name = self.EVENT_TEACHING_NEXT_STEP})
end

function GameGuideModule:startProtocol()
    local protocolQueue = self._guideConfig
    if #protocolQueue <= 0 then
        return
    end
    local time = os.time()
    if not protocolQueue[1].xy and protocolQueue[1].xyid == 0 then
        if protocolQueue[1].delay == 9999 then
            self:setIsWaitingTeach(true)
        else
            self:setIsWaitingTeach(false)
        end
        if time - self._startTime < protocolQueue[1].delay then
            return
        end

        local stop = protocolQueue[1].data.stop == nil and true or protocolQueue[1].data.stop
        if stop == true then
            self:removeTimer()
        end
        if protocolQueue[1].data.step then
            self._guideStep = protocolQueue[1].data.step
        end
        self:dispatchEvent({name = self.EVENT_TEACHING_DATA, msg = protocolQueue[1].data})
        table.remove(protocolQueue, 1)
        return
    end
    if protocolQueue[1].xy then
        if time - self._startTime < protocolQueue[1].delay then
            return
        end
        local data = protocolQueue[1].data or {}
        local msg = protocolQueue[1].xy:new()
        table.merge(msg, data)
        if protocolQueue[1].ext then
            if protocolQueue[1].ext.player then
                table.merge(msg, self._config.players[protocolQueue[1].ext.player])
            end
        end
        self:sendProtocol(msg, protocolQueue[1])
        table.remove(protocolQueue, 1)
    end
end

function GameGuideModule:sendProtocol(protocol, xy)
    local xyid = tonumber(string.split(xy.xy.event_key, "_")[2])
    if xy.xy.XY_ID then
        xyid = xy.xy.XY_ID
    end

    local modules = {
        CF.game:getModule("Player"),
        CF.game:getModule("GameLayer")
    }

    for i = 1, #modules do
        local record = modules[i]._subXYDealList[xyid]
        if record then
            modules[i]:doServerToClientMessage(record, protocol, xyid)
        end
    end
end

-- 拦截发送协议
function GameGuideModule:sendStreamPacket(msgObj)
    local parseEndWait = function(msgObj1)
        if msgObj1.XY_ID == CF.GameProtocol.msgAnimationFinished.XY_ID then
            self:isWaitingTeach()
        end
    end
    local parseOutCard = function(msgObj1)
        if msgObj1.XY_ID == CF.GameProtocol.msgOutCard.XY_ID then
            self:clickNextGuide()
        end
    end
    if self._guideStep == 2 then
        parseEndWait(msgObj)
    elseif self._guideStep == 4 then
        parseOutCard(msgObj)
        if msgObj.XY_ID == CF.GameProtocol.msgAnimationFinished.XY_ID then
            self:isWaitingTeach()
            self:clickNextGuide()
        end
    elseif self._guideStep == 8 then
        parseOutCard(msgObj)
        if msgObj.XY_ID == CF.GameProtocol.msgAnimationFinished.XY_ID then
            self:isWaitingTeach()
            self:clickNextGuide()
        end
    end
end

function GameGuideModule:setIsWaitingTeach(isWaitting)
    self._isWaitingTeach = isWaitting
end

function GameGuideModule:isWaitingTeach(func)
    if self._isWaitingTeach then
        self._nextFunc = func
    end

    local protocolQueue = self._guideConfig
    if #protocolQueue <= 0 then
        return
    end
    if not protocolQueue[1].xy and protocolQueue[1].xyid == 0 then
        protocolQueue[1].delay = 0
    end

    return self._isWaitingTeach
end

function GameGuideModule:getRewardCallback(reward)
    local okFunc = function()
        XH.NewThrowDataManager:throwData(
            XH.NewThrowDataDefine.yxyd25031002,
            {page_item_id = "继续下一局", block_item_id = "12", game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())}
        )
        self:goPlay()
        -- if self._isSkip then
        --     self:goPlay()
        -- else
        --     self:clickNextGuide()
        --     CF.viewManager:closeView("TeachingGiftView")
        -- end
    end
    -- reward = {
    --     {
    --         icon = "",
    --         id = 101473,
    --         count = 6666,
    --         name = "",
    --         propExt = "",
    --         tag = ""
    --     }
    -- }
    if #reward > 0 then
        local awardInfo = {}
        awardInfo.prize_names = {}
        awardInfo.prize_pic = {}
        for _, prop in pairs(reward) do
            awardInfo.prize_pic[#awardInfo.prize_pic + 1] = "ico_gold_2.png"
            awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. prop.count
        end
        awardInfo.text = " "
        awardInfo.isAdapt = true
        CF.viewManager:openView("TeachingGiftView", nil, {closeCallBack = okFunc}, awardInfo)
    else
        okFunc()
    end
end

function GameGuideModule:getGuideStep()
    return self._guideStep
end

function GameGuideModule:checkCanGetReward(finish)
    if self._guideStep ~= 12 then
        self._isSkip = true
    end
    local gifts = XH.lobby:getModule("TeachingGift"):getGifts()
    if #gifts > 0 then
        XH.lobby:getModule("TeachingGift"):reqCompleteTeaching(finish, handler(self, self.getRewardCallback))
        return true
    else
        return false
    end
end

function GameGuideModule:goPlay()
    CF.roomData:setTeaching(false)
    XH.lobby:getModule("GoldQuickEnter"):enterGoldGame(30579)
end

return GameGuideModule
