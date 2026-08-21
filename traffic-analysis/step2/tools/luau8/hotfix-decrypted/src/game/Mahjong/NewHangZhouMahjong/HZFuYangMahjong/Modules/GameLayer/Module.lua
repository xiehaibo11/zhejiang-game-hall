local GameModule = CF.gameClass("GameModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_UPDATE_CAITI_STATE_FLAG = "EVENT_UPDATE_CAITI_STATE_FLAG"

function GameModule:getProxyEvents()
    local proxyEvents = GameModule.super.getProxyEvents(self)
    local gameData = self:getGameData()
    proxyEvents[#proxyEvents + 1] = {module = gameData, eventKeyName = "EVENT_CAITI_STATE_CHANGED", callBack = "onCaiTiStateChanged"}
    return proxyEvents
end

function GameModule:getSubXYDealList()
    local xyTable = GameModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgCaiPiao), msgClass = CF.GameProtocol.msgCaiPiao}

    return xyTable
end

function GameModule:doActionCancel()
    CF.msgManager:sendCancel(self:getGameData():getActionID())
    CF.msgManager:sendForwardOperatePass(tostring(CF.GameDefine.ACTION.PASS))
end

function GameModule:doActionChow()
    local jokerData = self:getGameData():getJokerData()
    local insteadData = self:getGameData():getInsteadMahData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()

    local combs
    if self:getGameData():getCaiTiState() then
        combs = self:getMahAlgorithm():findChow(handMahs, inMah, jokerData, insteadData)
    else
        combs = self:getMahAlgorithm():findChowNoCaiTi(handMahs, inMah, jokerData, insteadData)
    end
    local combsSize = #combs
    if combsSize == 1 then
        local msgCombs = {}
        msgCombs.mahs = combs[1]
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.CHOW
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif combsSize > 1 then
        local function reverseTable(tab)
            local tmp = {}
            for i = 1, #tab do
                tmp[i] = table.remove(tab)
            end
            return tmp
        end
        combs = reverseTable(combs)
        local data = {}
        data.isShow = true
        data.combs = combs
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
    end
end

function GameModule:doActionPong()
    local jokerData = self:getGameData():getJokerData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()
    local zuofeng = self:getGameData():getZuoFeng()

    local combs
    -- 如果财替状态可以财神替代任意麻将子，非财替情况下要满足可多一台
    if self:getGameData():getCaiTiState() then
        combs = self:getMahAlgorithm():findPong(handMahs, inMah, jokerData)
    else
        combs = self:getMahAlgorithm():findPongNoCaiTi(handMahs, inMah, jokerData, zuofeng)
    end
    local ombsSize = #combs
    if #combs == 1 then
        local msgCombs = {}
        msgCombs.mahs = combs[1]
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.PUNG
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif ombsSize > 1 then
        local data = {}
        data.isShow = true
        data.combs = combs
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
    end
end

function GameModule:doActionKong()
    local jokerData = self:getGameData():getJokerData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()
    local selfAllCombs = self:getGameData():getAllCombMahData(seat)
    local danFang = self:getGameData():getHandDfData(seat)
    local zuofeng = self:getGameData():getZuoFeng()
    local msgCombs = {}
    local combs

    if self:getGameData():getCaiTiState() then
        combs = self:getMahAlgorithm():findExposedKong(handMahs, inMah, jokerData)
    else
        combs = self:getMahAlgorithm():findExposedKongNoCaiTi(handMahs, inMah, jokerData, zuofeng)
    end
    if #combs == 1 then
        msgCombs.mahs = combs[1]
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.MKONG
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif #combs == 0 then
        --暗杠补杠可能有多种情况出现
        local tmpFlag = 0
        local tmpInMahs = {}
        local tmpFromSeat = CF.roomData:getMaxPlayer()
        local combsConcealedKong
         -- 如果财替状态可以财神替代任意麻将子，非财替情况下要满足可多一台
        if self:getGameData():getCaiTiState() then
            combsConcealedKong = self:getMahAlgorithm():findConcealedKong(handMahs, danFang, jokerData)
        else
            combsConcealedKong = self:getMahAlgorithm():findConcealedKongNoCaiTi(handMahs, danFang, jokerData, zuofeng)
        end
        for i = 1 , #combsConcealedKong do
            combs[#combs + 1] = combsConcealedKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.CKONG
            tmpFromSeat = CF.roomData:getSelfSeat()
            tmpInMahs = {}
        end
        if CF.configData:isGuoGangBuGang() then
            handMahs = {}
        end
        local combsFillKong
         -- 如果财替状态可以财神替代任意麻将子，非财替情况下要满足可多一台
        if self:getGameData():getCaiTiState() then
            combsFillKong = self:getMahAlgorithm():findFillKong(handMahs, danFang, selfAllCombs, jokerData)
        else
            combsFillKong = self:getMahAlgorithm():findFillKongNoCaiTi(handMahs, danFang, selfAllCombs, jokerData, zuofeng)
        end
        for i = 1 , #combsFillKong do
            combs[#combs + 1] = combsFillKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.TKONG
        end
        local combsSize = #combs
        if combsSize == 1 then
            if combs[1][1] == CF.GameDefine.MAH_VALUE.BACK then
                for i = 1,#combs[1] do
                    combs[1][i] = combs[1][4]
                end
            end
            if tmpFlag == CF.GameDefine.COMB_FLAG.TKONG then
                for i = 1, #combs[1]-1 do
                    tmpInMahs[i] = combs[1][i]
                end
                for i = 1,#selfAllCombs do
                    if selfAllCombs[i].nInMahs[1] == combsFillKong[1][1] then
                        tmpFromSeat = selfAllCombs[i].nFromSeat
                    end
                end
            end
            msgCombs.mahs = combs[1]
            msgCombs.ins = tmpInMahs
            msgCombs.from = tmpFromSeat
            msgCombs.flag = tmpFlag
            CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
        elseif combsSize > 1 then
            local data = {}
            data.isShow = true
            data.combs = combs
            self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
        end
    end
end

function GameModule:doActionHu()
    CF.msgManager:sendHu(self:getGameData():getActionID())
end

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self:getGameData():setCaiTiState(true)
    self:dispatchEvent( { name = self.EVENT_UPDATE_CAITI_STATE_FLAG , msg = {show = true}})
end

function GameModule:onMsgPlay(msgData)
    GameModule.super.onMsgPlay(self, msgData)

    --判断是否在财飘
    local isJoker = false
    local jokers = self:getGameData():getJokerData()
    for index = 1, #jokers do
        if jokers[index] == msgData.nMah then
            isJoker = true
            break
        end
    end
    if isJoker == true then
        self:getGameData():setCaiPiaoState(isJoker)
        self:getGameData():setCaiPiaoSeat(msgData.nSeat)
    end
end

function GameModule:onMsgCaiPiao(msgData)
    self:getGameData():setCaiPiaoState(true)
    self:getGameData():setCaiPiaoSeat(msgData.sSeat)
end

function GameModule:onMsgPlayLmts(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    local caipiaoseat = self:getGameData():getCaiPiaoSeat()
    if caipiaoseat == localSeat then
        self:getGameData():setCaiPiaoState(false)
    end
    GameModule.super.onMsgPlayLmts(self, msgData)
end

function GameModule:onMsgPower(msgData)
    local seat = msgData.nSeat

    local caipiaoseat = self:getGameData():getCaiPiaoSeat()
    if caipiaoseat == msgData.nSeat then
        self:getGameData():setCaiPiaoState(false)
    end

    self:getGameData():setMsgPowerData()
    if seat == CF.roomData:getSelfSeat() then
        self:getGameData():setMsgPowerData(msgData)
        -- 隐藏吃碰杠的选项和多选的选项
        self:getGameData():setActionID(msgData.nActionID)
        local data = {}
        data.isShow = false
        data.actionTypes = {}
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
        data = {}
        data.isShow = false
        data.combs = {}
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
        -- TODO 0721 出牌权限，预显示等数据清空
        self:getGameData():setPreviewMah(0)
        self:getGameData():setPlayPower(false)
        self:getGameData():setHuPower(false)
        local convertID, showActionColor = self:analysePower(msgData.nPower)
        
        -- 将权限通知麻将层
        if #convertID ~= 0 then
            ---增加财替排断
            self:getGameData():setCaiTiNextState(true)
            if self:getGameData():getCaiTiState() == false then
                self:getGameData():setCaiTiNextState(false)
                -- local localSeat = CF.roomData:getSelfLocalSeat()
                local hands = self:getGameData():getHandMahData(CF.roomData:getSelfSeat())
                local inmah = self:getGameData():getLastPlayMah()
                local danfang = self:getGameData():getHandDfData(CF.roomData:getSelfSeat()) or 0

                local zuofeng = self:getGameData():getZuoFeng()
                local excessTai = {zuofeng, CF.GameDefine.MAH_VALUE.JIAN_ZHONG, CF.GameDefine.MAH_VALUE.JIAN_FA, CF.GameDefine.MAH_VALUE.JIAN_BAI}
                if  danfang == 0 then 
                    local Chowcombs = self:getMahAlgorithm():findChow(clone(hands),inmah,self:getGameData():getJokerData(),self:getGameData():getInsteadMahData())
                    local Pungcombs = self:getMahAlgorithm():findPong(clone(hands) ,inmah, self:getGameData():getJokerData())
                    local Kongcombs = self:getMahAlgorithm():findExposedKong(clone(hands) ,inmah, self:getGameData():getJokerData())

                    local canchow = false
                    for i = 1 , #convertID do
                        if convertID[i] == 2 then
                            canchow = true
                        end
                    end
                    local onlychow = true
                    if canchow == true then
                        for i = 1 , #Chowcombs do
                            onlychow = self:getGameData():checkPureComb(Chowcombs[i], {self:getGameData():getJokerData()[1]})
                            if not onlychow then
                                break
                            end
                        end 
                    end
                    

                    local onlypung = self:getGameData():judgeMahInstead(Pungcombs, excessTai)

                    local onlykong = self:getGameData():judgeMahInstead(Kongcombs, excessTai)

                    if onlychow and onlypung and onlykong and self:getGameData():getHuPower() == false then
                        --全部是假得直接操作弃
                        CF.msgManager:sendCancel(self:getGameData():getActionID())
                        self:getGameData():setLimitHandMahs(CF.roomData:getSelfSeat(), {})
                        local data1 = {}
                        data1.isShow = false
                        data1.actionTypes = {}
                        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data1 })
                        return
                    end
                    if onlychow then
                        for i = 1 , #convertID do
                            if convertID[i] == 2 then
                                table.remove(convertID,i)
                            end
                        end
                    end
                    if onlypung then
                        for i = 1 , #convertID do
                            if convertID[i] == 3 then
                                table.remove(convertID,i)
                            end
                        end
                    end
                    if onlykong then
                        for i = 1 , #convertID do
                            if convertID[i] == 4 then
                                table.remove(convertID,i)
                            end
                        end
                    end
                else
                    local combsFillKong = self:getMahAlgorithm():findConcealedKong(clone(hands) ,danfang, self:getGameData():getJokerData())
                    local onlykong2 = self:getGameData():judgeMahInstead(combsFillKong, excessTai)

                    local allcombs = self:getGameData():getAllCombMahData(CF.roomData:getSelfSeat())
                    local combsFillKong_b = self:getMahAlgorithm():findFillKong(clone(hands) ,danfang ,allcombs, self:getGameData():getJokerData())
                    local onlykong3 = self:getGameData():judgeMahInstead(combsFillKong_b, excessTai)

                    for i = 1 , #combsFillKong_b do
                       if #combsFillKong_b[i] > 5 then
                            onlykong3 = false
                       end
                    end

                    if onlykong2 and onlykong3 then
                        for i = 1 , #convertID do
                            if convertID[i] == 4 then
                                table.remove(convertID,i)
                            end
                        end
                    end
                end
            end
            if #convertID == 1 then
                if convertID[1] == 1 then
                     convertID = {}
                end
            end
            if #convertID ~= 0 then
                data.isShow = true
                data.actionTypes = convertID
                self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
            else
                data.isShow = false
                data.actionTypes = convertID
                self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
            end
        end
        self:getGameData():lightActionMahs(showActionColor)
    end
end

function GameModule:analysePower(power)
    local tPower = {}
    local powerByte = bit:d2b(power)
    local showActionColor = false
    for i = 57, 64 do
        local tmpPower = CF.GameDefine.POWER.NONE
        if powerByte[i] == 1 then
            if i == 64 then
                tmpPower = CF.GameDefine.POWER.CANCEL
            elseif i == 63 then
                tmpPower = CF.GameDefine.POWER.PLAY
                -- 设置一个出牌权限
                self:getGameData():setPreviewShow(true)
                self:getGameData():setLastPlayMah(CF.GameDefine.MAH_VALUE.NONE)
                self:getGameData():setPlayPower(true)
            elseif i == 62 then
                tmpPower = CF.GameDefine.POWER.CHOW
            elseif i == 61 then
                tmpPower = CF.GameDefine.POWER.PUNG
                showActionColor = true
            elseif i == 60 then
                tmpPower = CF.GameDefine.POWER.HU
                self:getGameData():setHuPower(true)
                -- 设置一个胡牌权限
            elseif i == 59 then
                tmpPower = CF.GameDefine.POWER.MKONG
                showActionColor = true
            elseif i == 58 then
                tmpPower = CF.GameDefine.POWER.CKONG
            elseif i == 57 then
                tmpPower = CF.GameDefine.POWER.TKONG
            end
            local tempID = CF.GameDefine.POWER_TO_ACTION[tmpPower]
            if tempID then
                tPower[tempID] = tempID
            end
        end
    end

    local convertID = {}
    for key, _ in pairs(tPower) do
        convertID[#convertID + 1] = key
    end
    table.sort(convertID)
    return convertID, showActionColor
end

function GameModule:dealNotCaiTiState(convertID)
    if self:getGameData():getCaiTiState() then
        return convertID
    end
    self:getGameData():setCaiTiNextState(false)
    local mySeat = CF.roomData:getSelfSeat()
    local hands = self:getGameData():getHandMahData(mySeat)
    local inmah = self:getGameData():getLastPlayMah()
    local danfang = self:getGameData():getHandDfData(mySeat) or 0
    local jokerData = self:getGameData():getJokerData()
    local insteadsData = self:getGameData():getInsteadMahData()

    local zuofeng = self:getGameData():getZuoFeng()
    local excessTai = {zuofeng, 
                        CF.GameDefine.MAH_VALUE.JIAN_ZHONG, 
                        CF.GameDefine.MAH_VALUE.JIAN_FA,
                        CF.GameDefine.MAH_VALUE.JIAN_BAI}
    if  danfang == 0 then 
        local Chowcombs = self:getMahAlgorithm():findChow(clone(hands), inmah, jokerData, insteadsData)
        local Pungcombs = self:getMahAlgorithm():findPong(clone(hands) ,inmah, jokerData)
        local Kongcombs = self:getMahAlgorithm():findExposedKong(clone(hands) ,inmah, jokerData)

        local canchow = false
        for i = 1 , #convertID do
            if convertID[i] == 2 then
                canchow = true
            end
        end
        local onlychow = true
        if canchow == true then
            for i = 1 , #Chowcombs do
                onlychow = self:getGameData():checkPureComb(Chowcombs[i], {jokerData[1]})
                if not onlychow then
                    break
                end
            end 
        end
        
        local onlypung = self:getGameData():judgeMahInstead(Pungcombs, excessTai)
        local onlykong = self:getGameData():judgeMahInstead(Kongcombs, excessTai)

        if onlychow and onlypung and onlykong and self:getGameData():getHuPower() == false then
            --全部是假得直接操作弃
            CF.msgManager:sendCancel(self:getGameData():getActionID())
            self:getGameData():setLimitHandMahs(mySeat, {})
            local data = {}
            data.isShow = false
            data.actionTypes = {}
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
            return
        end
        if onlychow then
            for i = 1 , #convertID do
                if convertID[i] == 2 then
                    table.remove(convertID,i)
                end
            end
        end
        if onlypung then
            for i = 1 , #convertID do
                if convertID[i] == 3 then
                    table.remove(convertID,i)
                end
            end
        end
        if onlykong then
            for i = 1 , #convertID do
                if convertID[i] == 4 then
                    table.remove(convertID,i)
                end
            end
        end
    else
        local combsFillKong = self:getMahAlgorithm():findConcealedKong(clone(hands) ,danfang, jokerData)
        local onlykong2 = self:getGameData():judgeMahInstead(combsFillKong, excessTai)

        local allcombs = self:getGameData():getAllCombMahData(mySeat)
        local combsFillKong_b = self:getMahAlgorithm():findFillKong(clone(hands) ,danfang ,allcombs, jokerData)
        local onlykong3 = self:getGameData():judgeMahInstead(combsFillKong_b, excessTai)

        for i = 1 , #combsFillKong_b do
           if #combsFillKong_b[i] > 5 then
                onlykong3 = false
           end
        end

        if onlykong2 and onlykong3 then
            for i = 1 , #convertID do
                if convertID[i] == 4 then
                    table.remove(convertID,i)
                end
            end
        end
    end
    return convertID
end

function GameModule:onMsgPowerEx(msgData)
    local caipiaoseat = self:getGameData():getCaiPiaoSeat()
    if caipiaoseat == msgData.nSeat then
        self:getGameData():setCaiPiaoState(false)
    end
    self:onMsgPower(msgData)
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    local seat = msgData.nSeat
    local localSeat = CF.roomData:seatToLocal(seat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setHuPower(false)
    end
    local convertFlag = CF.GameDefine.COMB_FLAG_TO_TYPE[msgData.tComb.nFlag]
    -- 播放行牌动画
    if convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG then
        local allcombs = self:getGameData():getAllCombMahData(seat)
        --local jokerData = self:getGameData():getJokerData()
        for i = 1, #allcombs do
            local comb = allcombs[i]
            if (comb.nFlag == CF.GameDefine.COMB_TYPE.PONG 
            or comb.nFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG
            or comb.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG)
            and  comb.nMahs[1] ==  msgData.tComb.nMahs[1] then
                table.remove(allcombs, i)
                break
            end
        end
    end

    -- 播放行牌动画
    self:getGameData():setCombMahData(seat, clone(msgData.tComb), true)
    self:showMahAcitonAni(localSeat, msgData.tComb.nFlag)
    -- TODO 0721 播放行牌音效
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = convertFlag
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)

    -- 如果是吃碰杠，则把出牌区的牌，删一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CHOW or
        convertFlag == CF.GameDefine.COMB_TYPE.PONG or
        convertFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG then
        self:getGameData():deleteLastOutMahData(msgData.tComb.nFromSeat)
        local nMahs = msgData.tComb.nMahs
        local inMahs = msgData.tComb.nInMahs[1] 
        for i = 1,#nMahs do
            if nMahs[i] == inMahs then
                table.remove(nMahs, i) 
                break
            end
        end
        self:getGameData():deleteHandMahData(seat, nMahs)
    end

    -- 如果是暗杠或者补杠，如果手牌中有单放，整理一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG  then
        local nMahs = msgData.tComb.nMahs
        self:getGameData():deleteHandMahData(seat, nMahs)
    end

    if convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG then
        local nMahs = clone(msgData.tComb.nMahs)
        local inMahs = clone(msgData.tComb.nInMahs)
        -- 临安麻将烧毛准确删牌
        for i = 1,#inMahs do
            for j = 1,#nMahs do
                if nMahs[j] == inMahs[i] then
                    table.remove(nMahs, j)
                    break
                end
            end   
        end
        self:getGameData():deleteHandMahData(seat, nMahs)
    end

    self:getGameData():setPowerData({})
end

function GameModule:clearMahLayerAction()
    local data = {}
    data.isShow = false
    data.actionTypes = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
    data = {}
    data.isShow = false
    data.combs = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
end

function GameModule:onCaiTiStateChanged(event)
    local msgPowerData = self:getGameData():getMsgPowerData()
    if msgPowerData then
        self:onMsgPower(msgPowerData)
    end
end

return GameModuler`