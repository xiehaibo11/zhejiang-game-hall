local GameModule = CF.gameClass("GameModule", "game.Mahjong.LiShui.LiShuiMahjongBase.Modules.GameLayer.Module")
GameModule.EVENT_ER_REN_TASK_INFO = "EVENT_ER_REN_TASK_INFO"
GameModule.EVENT_ER_REN_FINISHED_TASK = "EVENT_ER_REN_FINISHED_TASK"
GameModule.EVENT_ER_REN_SHOW_CHIP = "EVENT_ER_REN_SHOW_CHIP"
GameModule.EVENT_ER_REN_SHOW_HU_DOUBLE_ANI = "EVENT_ER_REN_SHOW_HU_DOUBLE_ANI"
GameModule.EVENT_ER_REN_HU_MAH_FAN = "EVENT_ER_REN_HU_MAH_FAN"
GameModule.EVENT_ER_REN_SHOW_SEL_DOUBLE = "EVENT_ER_REN_SHOW_SEL_DOUBLE" --选择二人加倍

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    CF.settingData:setHaveTing(true) --默认开启听牌
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgHuCanceDouble),msgClass = CF.GameProtocol.msgRespHuCanceDouble}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTaskInfo),msgClass = CF.GameProtocol.msgTaskInfo}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayerFinishTask),msgClass = CF.GameProtocol.msgPlayerFinishTask}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgRespHuMahFan),msgClass = CF.GameProtocol.msgRespHuMahFan}
    return subXYDealList
end

function GameModule:doActionCancel()
    GameModule.super.doActionCancel(self)
    if self:getGameData():getPlayerTingState(CF.roomData:getSelfSeat()) == "waiting" then
        self:getGameData():setLimitHandMahs(CF.roomData:getSelfSeat(), {})
        self:getGameData():setPlayerTingState(CF.roomData:getSelfSeat(), "cancel")
    end
end

function GameModule:doActionTing()
    local localSeat = CF.roomData:getSelfLocalSeat()
    local seat = CF.roomData:localToSeat(localSeat)
    local dfMahData = self:getGameData():getHandDfData(seat)
    local outMahs = self:getGameData():getOutMahData(localSeat)
    if #outMahs == 0 and dfMahData == CF.GameDefine.MAH_VALUE.NONE then
        CF.msgManager:sendTingWait()
        self:getGameData():setPlayerTingState(seat, "ting")
    else
        self:setLimitMahsTingWait(seat)
    end
end

function GameModule:setLimitMahsTingWait(seat)
    self:getGameData():setPlayerTingState(seat, "waiting")
    local limitMahs = {}
    local tingMahsData = self:getGameData():getTingMahs(seat)
    for i = 1, (#tingMahsData or 0) do
        table.insert(limitMahs, tingMahsData[i])
    end
    local hardMahs = clone(self:getGameData():getHandMahData(seat))
    for i = 1, (#limitMahs or 0) do
        for j = #hardMahs , 1,-1 do
             if hardMahs[j] == limitMahs[i] then
                table.remove(hardMahs,j)
             end 
        end
    end 
    local hardDfMahs = clone(self:getGameData():getHandDfData(seat))
    local harddfinLimit = false
    if hardDfMahs then
        for i = 1, (#limitMahs or 0) do 
            if limitMahs[i] == hardDfMahs then 
                harddfinLimit = true
            end
        end
        if not harddfinLimit then
            table.insert(hardMahs, hardDfMahs)
        end
    end
    self:getGameData():setLimitHandMahs(seat, hardMahs)
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    if self:getGameData():getCurGameStep() == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_2 then
    -- 骰子动画，只播一次骰子动画
        self:showChips(chips)
    end
    self:dispatchEvent({name = self.EVENT_ER_REN_SHOW_CHIP})
end

-- 牌权
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
                    self:getGameData():setLastPlayMah(CF.GameDefine.MAH_VALUE.NONE)
                    self:getGameData():setPlayPower(true)
                elseif i == 62 then
                    tmpPower = CF.GameDefine.POWER.CHOW
                elseif i == 61 then
                    tmpPower = CF.GameDefine.POWER.PUNG
                    showActionColor = true
                elseif i == 60 then
                    tmpPower = CF.GameDefine.POWER.HU
                    -- 设置一个胡牌权限
                    --如果是听牌可以胡牌的阶段，直接胡牌
                    for tempSeat = 0, CF.roomData:getChairs() - 1 do
                        local player = CF.roomData:getPlayerDataBySeatId(tempSeat)
                        if player:getNumberID() == CF.selfPlayerData:getNumberID() then
                            if self:getGameData():getPlayerTingState(seat) == "ting" then
                                CF.msgManager:sendReqHuMah()
                                return
                            end
                        end
                    end
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

function GameModule:onMsgHuCanceDouble(msgData)
    for i = 0, CF.roomData:getChairs() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(i)
        if player:getNumberID() == CF.selfPlayerData:getNumberID() then
            if self:getGameData():getPlayerTingState(i) == "ting" then
                self:dispatchEvent( { name = self.EVENT_ER_REN_SHOW_SEL_DOUBLE , msg = {data = msgData}})
                break
            end
        end
    end
    --显示加倍动画
    self:dispatchEvent( { name = self.EVENT_ER_REN_SHOW_HU_DOUBLE_ANI , msg = {data = msgData}})
end

function GameModule:onMsgTaskInfo(msgData)
    self:getGameData():setErRenTaskInfo(msgData)
    self:dispatchEvent( { name = self.EVENT_ER_REN_TASK_INFO , msg = {data = msgData}})
end

function GameModule:onMsgPlayerFinishTask(msgData)
    self:dispatchEvent( { name = self.EVENT_ER_REN_FINISHED_TASK , msg = {data = msgData}})
end

function GameModule:onMsgTWait(msgData)
    self:getGameData():setPlayerTingState(msgData.nSeat, "ting")
end

function GameModule:onMsgWaiting(msgData)
    self:getGameData():setPlayerTingState(msgData.nSeat, "ting")
end

function GameModule:onMsgRespHuMahFan(msgData)
    self:dispatchEvent( { name = self.EVENT_ER_REN_HU_MAH_FAN , msg = {data = msgData}})
end

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex, mahValue)
    if not mahIndex or not mahValue then
        return
    end
    if self:getGameData():getPreviewShow() == true then
        if self:showPlayFlowerOut(mahValue, mahIndex) then
            return
        end
        self:getGameData():setPreviewMah(mahValue)
        local seat = CF.roomData:getSelfSeat()
        self:dealPlayPreOut(seat, mahIndex, mahValue)

        if self:getGameData():getPlayerTingState(CF.roomData:getSelfSeat()) == "waiting" then
            CF.msgManager:sendTingWait()
        end
        self:performWithDelay(function()
             self:getGameData():setPreviewMah(mahValue)
             CF.msgManager:sendPlayMahs(mahValue, self:getGameData():getActionID())
        end,0.5)
    end
end

-- 限制牌
function GameModule:onMsgPlayLmts(msgData)
    -- local seat = msgData.nSeat
    -- local mahs = msgData.nMahs
    local hardMahs = clone(self:getGameData():getHandMahData(CF.roomData:getSelfSeat()))
    self:getGameData():setLimitHandMahs(CF.roomData:getSelfSeat(), hardMahs)
end

return GameModule;&