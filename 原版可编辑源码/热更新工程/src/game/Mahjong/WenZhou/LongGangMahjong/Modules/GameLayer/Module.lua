local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
    self._bChipsAniFirstDone = false
    self._pendingChip2Data = nil
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgCrossHu), msgClass = CF.GameProtocol.msgCrossHu}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgNowTingInfo), msgClass = CF.GameProtocol.msgNowTingInfo}

    return subXYDealList
end


function GameModule:onMsgBetResult(msgData)
    -- creat by tangligen
    --该协议和基类协议id 重复了 所以重写了该协议不做任何处理 不影响原有逻辑
end

function GameModule:onMsgCrossHu(msgData)
    --测试使用,过胡标识仅自己视角可见
    --[[local areaTypeid = CF.areaData:getAreaTypeID()
    if areaTypeid > 1000 and msgData.sSeat == CF.gameFunction.getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_CROSS_HU, data = {seat = msgData.sSeat, bShow = msgData.bCrossHu}})
    end--]]
end

function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.LKONG or flag == CF.GameDefine.COMB_FLAG.JOKCMB then
        return true
    end
    return false
end

--听牌设置
function GameModule:onMsgTingMahInfo(msgData)
    if CF.configData:haveTing() == false then
        return
    end
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    local seat = CF.roomData:getSelfSeat()
    local count = msgData.sDelMahSize
    if count == 0 then
        self:getGameData():clearTingMahs(seat)
    else
        local tingMahs = {}
        local tingData = {}

        for idx = 1,count do
            table.insert(tingMahs,  msgData.nDealMah[idx])
            tingData[tingMahs[idx]] = {}

            local bUniversalHu = msgData.bUniversalHu[idx]
            -- 胡任意
            if bUniversalHu then
                local tempTable = {}
                tempTable.huMahID = 255
                tempTable.huInfoNum = ""
                tempTable.huInfo = ""
                table.insert(tingData[tingMahs[idx]], tempTable)
            else
                local tmpCnt = msgData.sTingSize[idx]
                for k = 1,tmpCnt do
                    local tempTable = {}
                    tempTable.huMahID = msgData.nTingMah[idx][k]

                    if msgData.sTingMahFan[idx][k] == 0 then
                        tempTable.huInfoNum = ""
                        tempTable.huInfo = ""
                    else
                        tempTable.huInfoNum = ""
                        tempTable.huInfo = ""
                    end
                    table.insert(tingData[tingMahs[idx]], tempTable)
                end
            end
        end

        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, tingData)
    end
end

function GameModule:onMsgNowTingInfo(msgData)
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    CF.game:getModule("RightBtns"):showTingBtn()
    self:getGameData():setLastTingData()
    
    local data = {}
    if msgData.bUniversalHu then
        local tempTable = {}
        tempTable.huMahID = 255
        tempTable.huInfoNum = ""
        tempTable.huInfo = ""
        table.insert(data, tempTable)
    else
        local huMahs = clone(msgData.nTingMah)
        for i = 1, msgData.sTingSize do
            local tempTable = {}
            tempTable.huMahID = huMahs[i]
            tempTable.huInfoNum = ""
            tempTable.huInfo = ""
            table.insert(data, tempTable)
        end
    end
    self:getGameData():setLastTingData(data)
end

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex, mahValue)
    if not mahIndex or not mahValue then
        return
    end
    if self:getGameData():getPreviewShow() == true then
        local mahID
        local selfSeat = CF.roomData:getSelfSeat()
        if mahIndex == 0 then
            mahID = self:getGameData():getHandDfData(selfSeat)
        else
            local handMahData = self:getGameData():getHandMahData(selfSeat)
            mahID = handMahData[mahIndex]
        end
        if mahID == 0 then
            return
        end
        if self:showPlayFlowerOut(mahValue, mahIndex) then
            return
        end
        CF.msgManager:sendPlayMahs(mahValue, self:getGameData():getActionID())
        local tingMahs = self:getGameData():getTingMahs(selfSeat)
        local isTing = false
        for i = 1, #tingMahs do
            if mahID == tingMahs[i] then
                isTing = true
                break
            end
        end
        if isTing then
            local data = self:getGameData():getCanHuMahsData(selfSeat)
            CF.msgManager:sendTingInfo(data[mahID])
        end
        self:getGameData():setPreviewMah(mahValue)
        local seat = CF.roomData:getSelfSeat()
        self:dealPlayPreOut(seat, mahIndex, mahValue)
    end
end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs - 1 do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

function GameModule:isFlowOptimizeEnable()
    if CF.roomData and CF.roomData:isGoldRoom() then
        return false
    end
    return CF.configData and CF.configData.isFlowOptimizeEnable and CF.configData:isFlowOptimizeEnable()
end

-- 丢骰子：第一次/第二次骰子可配置加速
function GameModule:onMsgThrowChip(msgData)
    if not self:isFlowOptimizeEnable() then
        return GameModule.super.onMsgThrowChip(self, msgData)
    end

    local chips = msgData.nChips
    local step = self:getGameData():getCurGameStep()
    local speedScale = 1

    if step == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_1 then
        speedScale = (CF.configData and CF.configData.getFirstChipAniSpeedScale and CF.configData:getFirstChipAniSpeedScale()) or 1
        self:showChips(chips, speedScale)
    elseif step == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_2 then
        speedScale = (CF.configData and CF.configData.getSecondChipAniSpeedScale and CF.configData:getSecondChipAniSpeedScale()) or 1
        -- 暂存骰子2数据，等骰子1播完、手牌展示后再播放骰子2
        self._pendingChip2Data = {chips = chips, speedScale = speedScale}
    end
end

-- 重写骰子动画完成回调：
-- 第一次调用（骰子1播完）：发送sendEndWait，等手牌到达
-- 第二次调用（骰子2播完）：派发完成事件，正常流程
function GameModule:sendEventChipsAniFinish()
    if not self:isFlowOptimizeEnable() then
        return GameModule.super.sendEventChipsAniFinish(self)
    end
    if not self._bChipsAniFirstDone then
        self._bChipsAniFirstDone = true
        CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
    else
        self._bChipsAniFirstDone = false
        self:dispatchEvent({ name = self.EVENT_SHOW_CHIPS_FINISHED })
        CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
    end
end

-- 手牌展示完成后，播放骰子2动画
function GameModule:onMsgPlayerMah(msgData)
    GameModule.super.onMsgPlayerMah(self, msgData)
    if self._pendingChip2Data then
        local data = self._pendingChip2Data
        self._pendingChip2Data = nil
        self:showChips(data.chips, data.speedScale)
    end
end

return GameModule