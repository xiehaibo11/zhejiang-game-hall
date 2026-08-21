local GameModule = CF.gameClass("GameModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.Module")
GameModule.EVENT_ROOM_INFO_SET_QUANFENG = "EVENT_ROOM_INFO_SET_QUANFENG"

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_QUANFENG})
    self:dispatchEvent( { name = self.EVENT_ROOM_INFO_SET_QUANFENG})
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

    --local allcombs = self:getGameData():getAllCombMahData(seat)
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

    local combType = msgData.tComb.nFlag
    -- 杠牌多减1张
    if combType == CF.GameDefine.COMB_FLAG.MKONG then
        local wallMahCnt = self:getGameData():getSurPlusCounts()
        self:getGameData():setSurPlusCounts(wallMahCnt - 1, true)
    end
end

-- 盘数据
function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    --小结束风位
    local playerCount = CF.roomData:getChairs()
    if playerCount == 2 then
        for seat = 0, playerCount - 1 do
            local fengSeat = 0
            if seat ~= msgData.nBanker then
                fengSeat = 1
            end
            winLostData:setSeatWind(seat, fengSeat)
        end
    else
        for seat = msgData.nBanker, msgData.nBanker + 3 do
            local fengSeat =  seat % msgData.nBanker
            winLostData:setSeatWind(seat % 4, fengSeat)
        end
    end
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
    local noJokerHandMahs = self:getGameData():getNoJokerHandMahs()
    local combs
        -- 烧毛模式下不剔除财神
    if self:getGameData():getShaoMao() then
        combs = self:getMahAlgorithm():findChow(handMahs, inMah, jokerData, insteadData)
    else
        combs = self:getMahAlgorithm():findChow(noJokerHandMahs, inMah, jokerData, insteadData)
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
    local noJokerHandMahs = self:getGameData():getNoJokerHandMahs()

    local combs
    -- 烧毛模式下不剔除财神
    if self:getGameData():getShaoMao() then
        combs = self:getMahAlgorithm():findPong(handMahs, inMah, jokerData)
    else
        combs = self:getMahAlgorithm():findPong(noJokerHandMahs, inMah, jokerData)
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
    local noJokerHandMahs = self:getGameData():getNoJokerHandMahs()
    local selfAllCombs = self:getGameData():getAllCombMahData(seat)
    local danFang = self:getGameData():getHandDfData(seat)
    local msgCombs = {}
    local combs

    -- 烧毛模式下不剔除财神
    if self:getGameData():getShaoMao() then
        combs = self:getMahAlgorithm():findExposedKong(handMahs, inMah, jokerData)
    else
        combs = self:getMahAlgorithm():findExposedKong(noJokerHandMahs, inMah, jokerData)
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
        -- 烧毛模式下不剔除财神
        if self:getGameData():getShaoMao() then
            combsConcealedKong = self:getMahAlgorithm():findConcealedKong(handMahs, danFang, jokerData)
        else
            combsConcealedKong = self:getMahAlgorithm():findConcealedKong(noJokerHandMahs, danFang, jokerData)
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
        if self:getGameData():getShaoMao() then
            combsFillKong = self:getMahAlgorithm():findFillKong(handMahs, danFang, selfAllCombs, jokerData)
        else
            combsFillKong = self:getMahAlgorithm():findFillKong(noJokerHandMahs, danFang, selfAllCombs, jokerData)
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

return GameModule �,  