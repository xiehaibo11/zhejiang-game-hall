local GameModule = CF.gameClass("GameModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CHIPS_INFO = "EVENT_SHOW_CHIPS_INFO"
GameModule.EVENT_CLEAR_CHIPS_INFO = "EVENT_CLEAR_CHIPS_INFO"
GameModule.EVENT_SHOW_HF_ANI = "EVENT_SHOW_HF_ANI"
GameModule.EVENT_SHOW_CONTRACT_INFO = "EVENT_SHOW_CONTRACT_INFO"
GameModule.EVENT_CLEAR_CONTRACT_INFO = "EVENT_CLEAR_CONTRACT_INFO"

function GameModule:getProxyEvents()
    local proxyEvents = GameModule.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"}
    return proxyEvents
end

function GameModule:onPlayerStart(event)
    self:dispatchEvent({name = self.EVENT_CLEAR_CHIPS_INFO, data = {}})
    -- 旁观视角准备时，不清除旁观玩家的UI
    if CF.roomData:getIsSeer() then
        return
    end
    -- 隐藏小结束
    if not event or not event.msg or not event.msg.seatID then
        return
    end
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_GAME_PLAYER_START})
    end
end

function GameModule:onMsgStartGame(msgData)   
    GameModule.super.onMsgStartGame(self,msgData)  
    self:dispatchEvent({name = self.EVENT_CLEAR_CONTRACT_INFO, data = {}})
end

function GameModule:getDeQingPlayType()
    local gameRuleStr = CF.roomData:getGameRule()
    local textSet = string.split(gameRuleStr,"/")
    for i = 1 , #textSet do
        if string.match(textSet[i], "平胡模式") then
            return 1
        elseif string.match(textSet[i], "全黄模式") then
            return 2
        elseif string.match(textSet[i], "黄翻模式") then
            return 3
        end
    end
    return nil
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self._showChipsList = self._showChipsList or {}
    self._showChipsList[#self._showChipsList + 1] = clone(chips)
    if #self._showChipsList >= 3 then
        -- 骰子动画，可能有队列动画
        self:showChips(self._showChipsList[2])
        --黄翻动画
        self._huangfanListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._huangfanListener)
            if self._showChipsList and
                #self._showChipsList > 0 and
                self._showChipsList[2] ~= nil then
                local curPlayCount,_ = CF.roomData:getPlayCount()
                local pt = self:getDeQingPlayType()
                self:dispatchEvent({name = self.EVENT_SHOW_HF_ANI, data = {chipsInfo = self._showChipsList[2],playcount = curPlayCount,playType = pt}})
                
                local chipsTemp = self._showChipsList[2]
                local playcount = curPlayCount
                local winLostData = CF.game:getModule("WinLost"):getWinLostData()
                winLostData:setHuangFan(false)
                if pt == 2 and playcount > 1 then
                    winLostData:setHuangFan(true)
                    return
                end
                if (pt == 3 and #chipsTemp == 2 and (chipsTemp[1] == chipsTemp[2] or chipsTemp[1] + chipsTemp[2] >= 10)) or pt == 2 then
                    winLostData:setHuangFan(true)
                end
            end
        end , 0.6, false)
        --显示筛子信息
        self._wireBreakCheckListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._wireBreakCheckListener)
            self:dispatchEvent({name = self.EVENT_SHOW_CHIPS_INFO, data = {chipsInfo = self._showChipsList[2]}})
            self._showChipsList = {}
        end , 1.2, false)
    end
end

function GameModule:onMsgJoker(msgData)
    GameModule.super.onMsgJoker(self, msgData)
    self:getGameData():setOpenData(msgData.nJokers)
end

--承包下拉框显示
function GameModule:resultChengBao()
    local showIndex = 0
    local seatRecord = {}
    for i = 1, 4 do
        local seat = CF.roomData:localToSeat(i)
        local allcombs = self:getGameData():getAllCombMahData(seat)
        if allcombs then
            local tempTable = {}
            for t=1,#allcombs do
                if allcombs[t].nCount == 4 then
                    tempTable[#tempTable+1] = allcombs[t]
                end
            end
            local times = {}
            for j = 1, 4 do
                times[j] = 0
            end
            for index = 1, #allcombs do
                local isInCheck = true
                if allcombs[index].nCount < 4 then
                    for it=1,#tempTable do
                        if allcombs[index].nInMahs[1] == tempTable[it].nInMahs[1] then
                            isInCheck = false
                            break
                        end
                    end
                end
                if isInCheck then
                    local fromSeat = CF.roomData:seatToLocal(allcombs[index].nFromSeat)
                    if fromSeat ~= i then--踢出自己
                        times[fromSeat] = times[fromSeat] + 1
                    end
                end
            end
            for j = 1, 4 do
                if times[j] > 2 then
                    showIndex = showIndex + 1
                    local seat1 = CF.roomData:localToSeat(i)
                    local seat2 = CF.roomData:localToSeat(j)
                    local isNewContract = true
                    for k=1,#seatRecord do
                        if seatRecord[k].s1 == seat1 and seatRecord[k].s2 == seat2 then
                            isNewContract = false
                            break
                        end
                    end
                    if isNewContract then                    
                        seatRecord[#seatRecord+1] = {s1=seat1,s2=seat2}
                        local player1 = CF.roomData:getPlayerDataBySeatId(seat1)
                        local player2 = CF.roomData:getPlayerDataBySeatId(seat2)
                        local name1 = player1:getNickName()
                        local name2 = player2:getNickName()
                        self:dispatchEvent({name = self.EVENT_SHOW_CONTRACT_INFO, data = {showIndexArg = showIndex, nameOne = name1, nameTwo = name2, visible = true}})
                    end
                end
            end
                
        end
    end
end

-- 玩家牌背
function GameModule:onMsgPlayerBack(msgData)
    GameModule.super.onMsgPlayerBack(self,msgData)    
    --德清包厢承包显示
    for ii = 1, CF.roomData:getMaxPlayer() do
        local seat = CF.roomData:localToSeat(ii)
        local allcombs = self:getGameData():getAllCombMahData(seat)
        if allcombs and #allcombs > 0 then
            local seatTable = {}
            for i = 1, CF.roomData:getMaxPlayer() do
                for index = 1, #allcombs do
                    local lseat = CF.roomData:localToSeat(i)
                    if allcombs[index].nFromSeat == lseat then
                        if not seatTable[lseat] then
                            seatTable[lseat] = 0
                        end
                        seatTable[lseat] = seatTable[lseat] + 1
                    end
                end
            end
        end
    end
    --承包下拉框显示
    self:resultChengBao()
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    GameModule.super.onMsgAction(self,msgData)
    --德清承包：吃碰两摊
    local player = CF.roomData:getPlayerDataBySeatId(msgData.nSeat)
    if msgData.tComb.nFromSeat == CF.roomData:getSelfSeat()
        and msgData.nSeat ~= CF.roomData:getSelfSeat() and not CF.roomData:getIsSeer() then
        local seat = msgData.nSeat
        local allcombs = self:getGameData():getAllCombMahData(seat)
        if allcombs then
            local nMyFrom = 0
            local mySeat = CF.roomData:getSelfSeat()
            for index=1,#allcombs do
                if allcombs[index].nFromSeat == mySeat and allcombs[index].nFlag ~= CF.GameDefine.COMB_FLAG.TKONG then
                    nMyFrom = nMyFrom + 1
                end
            end
            if nMyFrom == 2 then
                if player then
                    local tmpName = player:getNickName()                    
                    local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK})
                    tipLayer:setText("玩家" .. tmpName .. "已经吃碰两摊，小心打牌")
                end
            end
        end
    --德清承包，自己吃碰其他玩家三摊
    elseif msgData.nSeat == CF.roomData:getSelfSeat() then
        local seat = msgData.nSeat
        local allcombs = self:getGameData():getAllCombMahData(seat)
        if allcombs then
            local seatTable = {}
            for i = 1, CF.roomData:getMaxPlayer() do
                for index = 1, #allcombs do
                    local lseat = CF.roomData:localToSeat(i)
                    if allcombs[index].nFromSeat == lseat then
                        if not seatTable[lseat] then
                            seatTable[lseat] = 0
                        end
                        seatTable[lseat] = seatTable[lseat] + 1
                    end
                end
            end
        end
    end
    self:resultChengBao()
end

return GameModule