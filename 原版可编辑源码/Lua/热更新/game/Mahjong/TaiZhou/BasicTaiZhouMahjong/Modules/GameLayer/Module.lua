local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_LEFT_BANKER_COUNT = "EVENT_SHOW_LEFT_BANKER_COUNT" ----剩余庄数
GameModule.EVENT_SHOW_LEFT_JU_COUNT = "EVENT_SHOW_LEFT_JU_COUNT"  ----剩余局数
GameModule.EVENT_SHOW_SHENG_PAI_INFO = "EVENT_SHOW_SHENG_PAI_INFO" ----生牌信息
GameModule.EVENT_SHOW_SHENG_PAI_ANI = "EVENT_SHOW_SHENG_PAI_ANI" ----生牌动画

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgLeftBanker), msgClass = CF.GameProtocol.msgLeftBanker }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgShengPaiCnt), msgClass = CF.GameProtocol.msgShengPaiCnt }

    --听牌信息
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgAllWaitInfo), msgClass = CF.GameProtocol.msgAllWaitInfo}

    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgClientForwardBase), msgClass = CF.GameProtocol.msgBaseClientForwardEx}
    return subXYDealList
end

function GameModule:needDelay(xyid, protocol)
    if xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true,3.75,false
    end
    return false,0,true
end

function GameModule:onMsgLeftBanker(msgData)
    self:getGameData():setLeftBanker(msgData.leftBanker)
    self:dispatchEvent({ name = self.EVENT_SHOW_LEFT_BANKER_COUNT , msg = {nLeftBanker = msgData.leftBanker}})
end

--生牌数量
function GameModule:onMsgShengPaiCnt(msgData)
    self:showShengPaiCount(true, msgData.cnt)
    if not self:getGameData():getShengPaiJieDuan() then
        self:getGameData():setShengPaiJieDuan(true)
        --生牌阶段音效
        CF.soundManager:playShengPaiSound()
        self:dispatchEvent({ name = self.EVENT_SHOW_SHENG_PAI_ANI })
    end
end

function GameModule:onMsgWallCnt(msgData)

end

function GameModule:onMsgTaiName(msgData)

end

function GameModule:onMsgTingMahInfo(msgData)

end

function GameModule:showShengPaiCount(bShow, nCount)
    self:dispatchEvent({name = self.EVENT_SHOW_SHENG_PAI_INFO, msg = {cnt = nCount, show = bShow}})
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    if self:getGameData():getCurGameStep() == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_2 then
        -- 骰子动画，只播一次骰子动画
        self:showChips(chips)
    end
end

function GameModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.OperatePass then
        if not CF.roomData:getIsGameStart() then
            return
        end
        self:onMsgClientForwardOperatePass(msgData)
    end
end

function GameModule:onMsgClientForwardOperatePass(msgData)
    local actionType = msgData.strData
    if CF.GameDefine.ACTION.PASS == tonumber(actionType) and CF.roomData:isPlayBack()  then
        local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_OPERATE_PASS, localSeat = localSeat })
    end
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    --小结束风位
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
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
        for seat = 0, 3 do
            local fengSeat = ((seat - msgData.nBanker) + 4) % 4
            winLostData:setSeatWind(seat, fengSeat)
        end
    end
end

--听牌信息
function GameModule:onMsgAllWaitInfo(msgData)
    if CF.settingData:getHaveTing() == false then
        return
    end
    local tingMahs = {}
    local tingDatas = {}
    local bShowFanNum = msgData.bShowFanNum
    local bShowHuNum = msgData.bShowHuNum
    for i = 1, msgData.nOutMahCnt do
        tingMahs[i] = msgData.waitMahInfo[i].nOutMah
        tingDatas[tingMahs[i]] = {}
        for j = 1, msgData.waitMahInfo[i].nWaitCnt do
            local tmpTable = {}
            tmpTable.huMahID = msgData.waitMahInfo[i].nWaitMahs[j]
            local fanNum = msgData.waitMahInfo[i].nFanPoint[j]
            local huNum = msgData.waitMahInfo[i].nHuPoint[j]
            --local leftCnt = msgData.waitMahInfo[i].nLeftCnt[j]
            tmpTable.huInfoNum = self:canHuInfoNum(bShowFanNum, bShowHuNum, fanNum, huNum)
            tmpTable.huInfo = self:canHuInfo(bShowFanNum, bShowHuNum)
            table.insert(tingDatas[tingMahs[i]], tmpTable)
        end
    end
    local seat = CF.roomData:getSelfSeat()
    self:getGameData():setTingMahs(seat, tingMahs)
    self:getGameData():setCanHuMahsData(seat, tingDatas)
end

function GameModule:canHuInfoNum(bShowFanNum, bShowHuNum, fanNum, huNum)
    local canHuInfoNum = ""
    if bShowFanNum then
        canHuInfoNum = canHuInfoNum .. fanNum .. ","
    end
    if bShowHuNum then
        canHuInfoNum = canHuInfoNum .. huNum .. ","
    end
    return canHuInfoNum
end

function GameModule:canHuInfo(bShowFanNum, bShowHuNum)
    local canHuInfo = ""
    if bShowFanNum then
        canHuInfo = canHuInfo .. "台,"
    end
    if bShowHuNum then
        canHuInfo = canHuInfo .. "胡,"
    end
    return canHuInfo
end

--出牌判断是否为花牌
--param 麻将牌ID
function GameModule:showPlayFlowerOut(mahID, mahIndex)
    return false
end

--用于小结束上的麻将子展示方式
function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_TYPE.NONE and flag <= CF.GameDefine.COMB_TYPE.FILL_KONG then
        return true
    end
    return false
end

return GameModule