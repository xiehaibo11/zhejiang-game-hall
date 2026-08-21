local GameModule = CF.gameClass("GameModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayCanHus),msgClass = CF.GameProtocol.msgNowTingInfo}
    return subXYDealList
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

return GameModule�