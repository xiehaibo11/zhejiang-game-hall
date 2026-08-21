local GoldManager = CF.gameClass("GoldManager", "game.GameBase.Manager.GoldManager")
function GoldManager:ctor(param)
    GoldManager.super.ctor(self,param)
end

function GoldManager:showTipLayer(leaveReason)
    self:flushLobbyGold()
    local canChange = false
    local showGoldCharge = false
    if leaveReason == "Rematch" then
        return
    elseif leaveReason == GoldManager.ENUM_MSG.NOT_READY then
        leaveReason = GoldManager.ENUM_MSG.NOT_READY_MSG
    else
        -- 金币场转场
        local selfPlayerData = self._selfPlayerData
        local playSR = self._playSR
        if selfPlayerData then
            playSR = selfPlayerData:getPlayTypeScore()
        end
        if leaveReason == GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG and CF.taskManager:JudgeBankruptInGame(playSR, CF.roomData:getGameID()) then
            self._changeType = GoldManager.ENUM_CHANGE_TYPE.BEFORE_BASELIVE
            return
        end

        if self:canChangeRoomLevel(playSR) then
            canChange = true
            if leaveReason == GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG then
                leaveReason = GoldManager.ENUM_MSG.NOT_ENOUGH_SR
                showGoldCharge = true
            end
            if leaveReason == GoldManager.ENUM_MSG.TOO_MUCH_SR_MSG or string.match(leaveReason, "金币高于") then
                leaveReason = GoldManager.ENUM_MSG.TOO_MUCH_SR
            end
        end
    end

    if CF.roomData and CF.roomData:isBianChaDKGoldRoom() and string.match(leaveReason, "金币过低") then
        leaveReason = GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG
    end

    -- 双扣直接走新的充值 isDKGoldRoom()它现在不只是双扣，麻将也算了，按GameID来
    if CF.roomData and CF.roomData:isDKGoldRoom() and leaveReason == GoldManager.ENUM_MSG.NOT_ENOUGH_SR_MSG then
        self._changeType = GoldManager.ENUM_CHANGE_TYPE.REJOIN_BEFORE
        if XH.viewManager:isViewExist("GoldBankruptcyView") or XH.viewManager:isViewExist("YGiftDefeatView") or CF.viewManager:isViewExist("UnLimitGoldActView") then
            return
        end
        -- 有无限金币先无限金币
        if XH.lobby:getModule("UnlimitGoldAct"):judgeIsShowPopAct() then
            return
        end
        if CF.roomData:is220Model() then
            return
        end
        local lobbyId = CF.areaData:getLobbyID()
        local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
        CF.viewManager:openView("GoldBankruptcyView", nil, {gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level})
        return
    end

    local isSupport = CF.areaData:isSupportGoldQuickRecharge() or false
    if showGoldCharge and isSupport then
        local lobbyId = CF.areaData:getLobbyID()
        local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId)
        CF.viewManager:openView("GoldBaseLiveView", nil, {gameID = CF.roomData:getGameID(), goldNotEnough = true, roomFlag = level})
    else
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText(leaveReason)
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function()
            if canChange then
                self._changeType = GoldManager.ENUM_CHANGE_TYPE.SIMPLE
                if CF.game:getModule("WinLost") and CF.game:getModule("WinLost").hideGoldView then
                    CF.game:getModule("WinLost"):hideGoldView()
                end
                if CF.roomData:is220Model() then
                    CF.msgManager:reJoinGoldRoom()
                else
                    self:reqLeaveRoom()
                end
            else
                self:leaveGame()
            end
        end)
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function()
            self:leaveGame()
        end)
    end
end

return GoldManager