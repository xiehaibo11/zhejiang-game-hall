local GameModule = CF.gameClass("GameModule", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CANCEL_TING = "EVENT_SHOW_CANCEL_TING"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgPlayerGangMahs), msgClass = CF.GameProtocol.msgPlayerGangMahs}
    return subXYDealList
end

function GameModule:onMsgPower(msgData)
    local seat = msgData.nSeat
    local power = msgData.nPower
    if seat == CF.roomData:getSelfSeat() then
        -- 隐藏吃碰杠的选项和多选的选项
        self:getGameData():setActionID(msgData.nActionID)
        local data = {}
        data.isShow = false
        data.actionTypes = {}
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
        if not self:getGameData():isSelfTingWait() then
            self:dispatchShowTing(false)
        end
        data = {}
        data.isShow = false
        data.combs = {}
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
        -- TODO 0721 出牌权限，预显示等数据清空
        self:getGameData():setPreviewMah(0)
        self:getGameData():setPlayPower(false)
        local tPower = {}
        local powerByte = bit:d2b(power)
        local showActionColor = false
        for i = 54, 64 do
            local tmpPower = CF.GameDefine.POWER.NONE
            if powerByte[i] == 1 then
                if i == 64 then
                    tmpPower = CF.GameDefine.POWER.CANCEL
                elseif i == 63 then
                    tmpPower = CF.GameDefine.POWER.PLAY
                    -- 设置一个出牌权限
                    self:getGameData():setPreviewShow(true)
                    self:getGameData():setLastPlayMah(CF.GameDefine.POWER.MV_NONE)
                    self:getGameData():setPlayPower(true)
                elseif i == 62 then
                    tmpPower = CF.GameDefine.POWER.CHOW
                elseif i == 61 then
                    tmpPower = CF.GameDefine.POWER.PUNG
                    showActionColor = true
                elseif i == 60 then
                    tmpPower = CF.GameDefine.POWER.HU
                    -- 设置一个胡牌权限
                elseif i == 59 then
                    tmpPower = CF.GameDefine.POWER.MKONG
                    showActionColor = true
                elseif i == 58 then
                    tmpPower = CF.GameDefine.POWER.CKONG
                elseif i == 57 then
                    tmpPower = CF.GameDefine.POWER.TKONG
                elseif i == 56 then
                    tmpPower = CF.GameDefine.POWER.TWAIT
                elseif i == 55 then
                    tmpPower = CF.GameDefine.POWER.CWAIT
                elseif i == 54 then
                    tmpPower = CF.GameDefine.POWER.PWAIT
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
        -- 将权限通知麻将层
        if #convertID ~= 0 then
            data.isShow = true
            data.actionTypes = convertID
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
        end
        self:lightActionMahs(showActionColor)
    end
end

function GameModule:onMsgPlayerGangMahs(msg)
    if msg.seat == CF.roomData:getSelfSeat() then
        self:getGameData():setTingGangMahs(msg.mahs)
    end
end

-- 听牌
function GameModule:onMsgTWait(msgData)
    self:getGameData():setTingState(msgData.nSeat, "wait")
end

-- 刚刚听得牌
function GameModule:onMsgJustWaiting(msgData)
    self:getGameData():setTingState(msgData.nSeat, "wait")
end

-- 听牌
function GameModule:onMsgWaiting(msgData)
    self:getGameData():setTingState(msgData.nSeat, "ting")
    self:dispatchEvent( {
        name = self.EVENT_UPDATE_TING_FLAG,
        msg = {
            seat = msgData.nSeat,
            flag = true
        }
    } )
end

function GameModule:doActionKong()
    local jokerData = self:getGameData():getJokerData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()
    local danFang = self:getGameData():getHandDfData(seat)

    local tempHands = clone(handMahs)
        if not CF.configData:canChowPungKongJoker() then
        for i = #tempHands,1,-1 do
            for j = 1,#jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands,i)
                    break
                end
            end
        end
    end

    local selfAllCombs = clone(self:getGameData():getAllCombMahData(seat))
    local msgCombs = {}
    local combs = self:getMahAlgorithm():findExposedKong(tempHands, inMah)
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
        local combsConcealedKong = self:getMahAlgorithm():findConcealedKong(tempHands, danFang)

        --这里处理听牌杠限制
        local tingGangMahs = self:getGameData():getTingGangMahs()
        if tingGangMahs and #tingGangMahs > 0 then
            for i = #combsConcealedKong, 1, -1 do
            	local isHave = false
            	for j = 1, #tingGangMahs do
            		if combsConcealedKong[i][1] == tingGangMahs[j] or combsConcealedKong[i][2] == tingGangMahs[j] or combsConcealedKong[i][3] == tingGangMahs[j] or combsConcealedKong[i][4] == tingGangMahs[j] then
            			isHave = true
            		end
            	end
            	if not isHave then
            		table.remove(combsConcealedKong, i)
            	end
            end
        end

        for i = 1 , #combsConcealedKong do
            combs[#combs + 1] = combsConcealedKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.CKONG
            tmpFromSeat = CF.roomData:getSelfSeat()
            tmpInMahs = {}
        end
        if CF.configData:isGuoGangBuGang() then
            tempHands = {}
        end

        local combsFillKong = self:getMahAlgorithm():findFillKong(tempHands, danFang, selfAllCombs)
        -- 这里处理听牌杠限制
        if tingGangMahs and #tingGangMahs > 0 then
            for i = #combsFillKong, 1, -1 do
            	local isHave = false
            	for j = 1, #tingGangMahs do
            		if combsFillKong[i][1] == tingGangMahs[j] or combsFillKong[i][2] == tingGangMahs[j] or combsFillKong[i][3] == tingGangMahs[j] or combsFillKong[i][4] == tingGangMahs[j] then
            			isHave = true
            		end
            	end
            	if not isHave then
            		table.remove(combsFillKong, i)
            	end
            end
        end

        for i = 1 , #combsFillKong do
            combs[#combs + 1] = combsFillKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.TKONG
            for j = 1, 3 do
                tmpInMahs[j] = combsFillKong[1][1]
            end

            for j = 1,#selfAllCombs do
                if selfAllCombs[j].nInMahs[1] == combsFillKong[1][1] then
                    tmpFromSeat = selfAllCombs[j].nFromSeat
                end
            end
        end
        local combsSize = #combs
        if combsSize == 1 then
            if combs[1][1] == CF.GameDefine.MAH_VALUE.BACK then
                for i = 1,#combs[1] do
                    combs[1][i] = combs[1][4]
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

function GameModule:canHuInfo()
    return "番,"
end

function GameModule:dispatchShowTing(value)
    self:dispatchEvent( { name = self.EVENT_SHOW_CANCEL_TING, msg = {value = value} } )
end

return GameModule   #  