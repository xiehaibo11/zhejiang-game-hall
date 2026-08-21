local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_GAME_START_CHANGE = "EVENT_GAME_START_CHANGE"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgCanTWait),msgClass = CF.GameProtocol.msgCanTWait}
    return subXYDealList
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    local seat = msgData.nSeat
    local localSeat = CF.roomData:seatToLocal(seat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setHuPower(false)
        --发生吃碰杠后，隐藏听牌按钮
        CF.game:getModule("RightBtns"):hideTingBtn()
        self:getGameData():setLastTingData()
        self:getGameData():clearTingMahs(seat)
        self:dispatchEvent( { name = self.EVENT_HIDE_CAN_HU_MAHS } )
        self:getGameData():clearCanHuMahsData(seat)
    end
    local convertFlag = CF.GameDefine.COMB_FLAG_TO_TYPE[msgData.tComb.nFlag]

    --暗杠不显示牌
    local tempComb = clone(msgData.tComb)
    if (not CF.roomData:isPlayBack()) and convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG and seat ~= CF.roomData:getSelfSeat() then
        for i =0, msgData.tComb.nCount do
            tempComb.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end

    -- 播放行牌动画
    self:getGameData():setCombMahData(seat, tempComb, true)

    -- 如果是吃碰杠，则把出牌区的牌，删一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CHOW or convertFlag == CF.GameDefine.COMB_TYPE.PONG or convertFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG then
        local nMahs = msgData.tComb.nMahs
        local inMahs = msgData.tComb.nInMahs[1]
        for i = 1,#nMahs do
            if nMahs[i] == inMahs then
                table.remove(nMahs, i)
                break
            end
        end
        self:getGameData():deleteHandMahData(seat, nMahs)
        self:getGameData():deleteLastOutMahData(msgData.tComb.nFromSeat)
    end

    -- 如果是暗杠或者补杠，如果手牌中有单放，整理一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        local nMahs = msgData.tComb.nMahs
        self:getGameData():deleteHandMahData(seat, nMahs)
    end
    if convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG then
        local inMahs = msgData.tComb.nInMahs[1]
        self:getGameData():deleteHandMahData(seat, {inMahs})
    end

    self:showMahAcitonAni(localSeat, msgData.tComb.nFlag)
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = convertFlag
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
end

function GameModule:onMsgThrowChip(msgData)
    CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
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
                fengSeat = 2
            end
            winLostData:setSeatWind(seat, fengSeat)
        end
    else
        for seat = 0, 3 do
            local fengSeat = (( seat - msgData.nBanker ) + 4 ) % 4
            winLostData:setSeatWind(seat, fengSeat)
        end
    end
end

function GameModule:showPlayFlowerOut(mahID, mahIndex)
    return false
end

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
        if msgData.nDealMah[1] == 144 and count == 1 then
            self:getGameData():setLastTingData()
            local data = {}
            if msgData.bUniversalHu[1] then
                local tempTable = {}
                tempTable.huMahID = 255
                tempTable.huInfoNum = ""
                tempTable.huInfo = ""
                table.insert(data, tempTable)
            else
                local huMahs = clone(msgData.nTingMah[1])
                for j = 1, msgData.sTingSize[1] do
                    local tempTable = {}
                    tempTable.huMahID = huMahs[j]
                    tempTable.huInfoNum = ""
                    tempTable.huInfo = ""
                    table.insert(data, tempTable)
                end
            end
            self:getGameData():setLastTingData(data)
            return
        end
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

function GameModule:onMsgCanTWait(msgData)
    if CF.configData:haveTing() == false then
        return
    end

    if msgData.flag == false then
        self:getGameData():setLastTingData()
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    if msgData.flag == true and next(self:getGameData():getLastTingData()) then 
        CF.game:getModule("RightBtns"):showTingBtn()
    end
end

return GameModule