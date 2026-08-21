local UIMahLayer = CF.gameClass("UIMahLayer","game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:getProxyEvents()
    local gameData = self:getGameData()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = gameData, eventKeyName = "EVENT_MAHLAYER_GAIPAI", callBack = "onEventflushGaiPai"}
    return proxyEvents
end


function UIMahLayer:onEventflushGaiPai(event)
    local localSeat = event.data.localSeat
    local handArea = self:_getHandArea(localSeat)
    if handArea then
        handArea:flushMahBack()
    end
end

--加花牌
function UIMahLayer:addFlowers(localSeat, mahValues, bAni, callBack)
    UIMahLayer.super.addFlowers(self, localSeat, self:analyFlowerMahValues(mahValues), bAni, callBack)
end

function UIMahLayer:setFlowers(localSeat, mahValues, bAni, callBack)
    UIMahLayer.super.setFlowers(self, localSeat, self:analyFlowerMahValues(mahValues), bAni, callBack)
end

function UIMahLayer:analyFlowerMahValues(mahValues)
    local tempMahValues = clone(mahValues)
    for key, value in pairs(tempMahValues) do
        if value == 99 then
            tempMahValues[key] = 100
        elseif value == 100 then
            tempMahValues[key] = 99
        end
    end
    return tempMahValues
end

function UIMahLayer:onTouchEventActionButton(send, eventType)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local mahAlgorithm = CF.game:getModule("GameLayer"):getMahAlgorithm()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local jokerData = gameData:getJokerData()
    local insteadData = gameData:getInsteadMahData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = gameData:getHandMahData(seat)
    local inMah = gameData:getLastPlayMah()
    local danFang = gameData:getHandDfData(seat)
    local combsNew = gameData:getAllCombMahData(seat)
    local combcnt = 0 --吃碰杠的次数
    for i = 1, #combsNew do
        if combsNew[i].nFromSeat == gameData:getJustPlaySeat() and combsNew[i].nFlag ~= CF.GameDefine.COMB_FLAG.TKONG then
            combcnt = combcnt + 1
        end
    end
    local tempHands = clone(handMahs)
    for i = #tempHands, 1, -1 do
        for j = 1, #jokerData do
            if jokerData[j] == tempHands[i] then
                table.remove(tempHands, i)
                break
            end
        end
    end

    local powerList = gameData:getMahPower()
    local canhu = false
    for key, _ in pairs(powerList) do
        if key == CF.GameDefine.POWER_TO_ACTION[CF.GameDefine.POWER.HU] then
            canhu = true
        end
    end

    local func_cancel = function()
        self:showAction(self._actionTypes, true)
    end

    if send == self._actionButton1 then
        local func_sure = function()
            self._actionButton1:setEnabled(false)
            self:performWithDelay(function()
                self._actionButton1:setEnabled(true)
            end, 1)
            CF.msgManager:sendCancel(gameData:getActionID())
            CF.msgManager:sendForwardOperatePass(tostring(CF.GameDefine.ACTION.PASS))
        end

        if canhu then
            CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
                funcOK = function()
                    func_sure()
                end,
                funcCancel = function ()
                    func_cancel()
                end
            }, "确认过胡吗？")
        else
            func_sure()
        end

    elseif send == self._actionButton2 then
        local func_chow = function()
            local combs = mahAlgorithm:findChow(tempHands, inMah, jokerData, insteadData)
            local combsSize = #combs
            if combsSize == 1 then
                local msgCombs = {}
                msgCombs.mahs = combs[1]
                msgCombs.ins = { inMah }
                msgCombs.from = gameData:getLastPlaySeat()
                msgCombs.flag = CF.GameDefine.COMB_FLAG.CHOW
                CF.msgManager:sendAction(msgCombs, gameData:getActionID())
            elseif combsSize > 1 then
                local function reverseTable(tab)
                    local tmp = {}
                    for i = 1, #tab do
                        tmp[i] = table.remove(tab)
                    end
                    return tmp
                end
                combs = reverseTable(combs)
                self:showActionCombs(combs, true)
            end
        end
        func_chow()
    elseif send == self._actionButton3 then
        local func_pong = function()
            local combs = mahAlgorithm:findPong(tempHands, inMah)
            if #combs ~= 0 then
                local msgCombs = {}
                msgCombs.mahs = combs
                msgCombs.ins = { inMah }
                msgCombs.from = gameData:getLastPlaySeat()
                msgCombs.flag = CF.GameDefine.COMB_FLAG.PUNG
                CF.msgManager:sendAction(msgCombs, gameData:getActionID())
            end
        end
        func_pong()
    elseif send == self._actionButton4 then
        local selfAllCombs = gameData:getAllCombMahData(seat)
        local msgCombs = {}
        local combs = mahAlgorithm:findExposedKong(tempHands, inMah)
        if #combs == 1 then
            local func_mKong = function()
                msgCombs.mahs = combs[1]
                msgCombs.ins = { inMah }
                msgCombs.from = gameData:getLastPlaySeat()
                msgCombs.flag = CF.GameDefine.COMB_FLAG.MKONG
                CF.msgManager:sendAction(msgCombs, gameData:getActionID())
            end
            func_mKong()
        elseif #combs == 0 then
            --暗杠补杠可能有多种情况出现
            local tmpFlag = 0
            local tmpInMahs = {}
            local tmpFromSeat = CF.roomData:getMaxPlayer()
            local combsConcealedKong = mahAlgorithm:findConcealedKong(tempHands, danFang)
            for i = 1, #combsConcealedKong do
                combs[#combs + 1] = combsConcealedKong[i]
                tmpFlag = CF.GameDefine.COMB_FLAG.CKONG
                tmpFromSeat = CF.roomData:getSelfSeat()
                tmpInMahs = {}
            end
            if CF.configData:isGuoGangBuGang() then
                tempHands = {}
            end
            local combsFillKong = mahAlgorithm:findFillKong(tempHands, danFang, selfAllCombs)

            for i = 1, #combsFillKong do
                combs[#combs + 1] = combsFillKong[i]
                tmpFlag = CF.GameDefine.COMB_FLAG.TKONG
                for j = 1, 3 do
                    tmpInMahs[j] = combsFillKong[1][1]
                end

                for j = 1, #selfAllCombs do
                    if selfAllCombs[j].nInMahs[1] == combsFillKong[1][1] then
                        tmpFromSeat = selfAllCombs[j].nFromSeat
                    end
                end
            end
            local combsSize = #combs
            if combsSize == 1 then
                if combs[1][1] == CF.GameDefine.MAH_VALUE.BACK then
                    for i = 1, #combs[1] do
                        combs[1][i] = combs[1][4]
                    end
                end
                msgCombs.mahs = combs[1]
                msgCombs.ins = tmpInMahs
                msgCombs.from = tmpFromSeat
                msgCombs.flag = tmpFlag
                CF.msgManager:sendAction(msgCombs, gameData:getActionID())
            elseif combsSize > 1 then
                self:showActionCombs(combs, true)
            end
        end
    elseif send == self._actionButton5 then
        CF.msgManager:sendHu(gameData:getActionID())
    elseif send == self._actionButton7 then
        CF.msgManager:sendTing()
    end
    self:showAction({}, false)
end

return UIMahLayer