local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")


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
                        --tempTable.huInfo = self:canHuInfo() .. ",张"
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

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    --小结束风位
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
            local fengSeat = (( seat - msgData.nBanker )+ 4 ) % 4
            winLostData:setSeatWind(seat, fengSeat)
        end
    end
end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex, mahValue)
    GameModule.super.showPlayPreOut(self, mahIndex, mahValue)
    if not mahIndex or not mahValue then
        return
    end
    if self:getGameData():getPreviewShow() == true then
        local selfSeat = CF.roomData:getSelfSeat()
        local tingMahs = self:getGameData():getTingMahs(selfSeat)
        local isTing = false
        local mahID
        if mahIndex == 0 then
            mahID = self:getGameData():getHandDfData(selfSeat) or 0
        else
            local handMahData = self:getGameData():getHandMahData(selfSeat)
            mahID = handMahData[mahIndex] or 0
        end
        if mahID == 0 then
            return
        end
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
    end
end

function GameModule:onMsgPlayCanHus(msgData)
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

return GameModule