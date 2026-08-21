local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_UPDATE_QUANFENG = "EVENT_UPDATE_QUANFENG"
GameModule.EVENT_FLUSH_CAN_HU_MAH_DATA = "EVENT_UPDATE_QUANFENG"
GameModule.EVENT_UPDATE_TING_FLAG = "EVENT_UPDATE_TING_FLAG"
GameModule.EVENT_GAMEINFO_CHANGED = "EVENT_GAMEINFO_CHANGED"


function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    --subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgTotalResult), msgClass = CF.GameProtocol.msgTotalResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgHuExNew), msgClass = CF.GameProtocol.msgHuExNew}
    --subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgEndInfo), msgClass = CF.GameProtocol.msgEndInfo}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgPlayTings), msgClass = CF.GameProtocol.msgTingMahInfo}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgTingFan), msgClass = CF.GameProtocol.msgRespTingFan}

    return subXYDealList
end

function GameModule:spiltStringByFlag(str,cFlag)
    local splitStr = {}
    local tmpStr = clone(str)
    while true do
        local a,b = string.find(tmpStr,cFlag)
        if a == nil then
            if string.len(tmpStr) ~= 0 then
                table.insert(splitStr,tmpStr)
            end
            break
        end
        table.insert(splitStr,string.sub(tmpStr,1,a-1))

        tmpStr = string.sub(tmpStr,b + 1,-1)
    end
    return splitStr 
end

function GameModule:cutString(version)
    local nums = {}
    local tmpVer = clone(version)
    while true do
        local a,b = string.find(tmpVer,"[0-9]+")
        if a == nil then
            break
        end
        table.insert(nums,tonumber(string.sub(tmpVer,1,b)))
        a,b = string.find(tmpVer,"[0-9]+.")
        if a == nil then
            break
        end
        tmpVer = string.sub(tmpVer,b + 1,-1)
    end
    return nums    
end

function GameModule:getFengWeiIdx(seat)
    local bankerSeat = self:getGameData()._bankerSeatId
    if CF.roomData:getChairs() == 2 then
        if seat == bankerSeat then
            return 0
        else
            return 2
        end
    else
        return (seat + 4 - bankerSeat) % 4 --0:东 1:南
    end
end

-- 是否本花
function GameModule:isBenHua(seat, value)
    return ((value == 0x61 + self:getFengWeiIdx(seat)) or (value == 0x65 + self:getFengWeiIdx(seat)))
end

function GameModule:initDatas()
    self._gameInfoData = self:getGameData()

    if self._settleData then
        self._settleData:initDatas()
    else
        self._settleData = CF.gameRequire("Modules.WinLost.WinLostData").new()
    end
    GameModule.super.initDatas(self)

    -- 使用GP解散
    CF.roomData:setDismissType(1)
end

function GameModule:onMsgHuExNew(msg)
    -- 胡的位置列表(可能存在多人胡)
    self._gameInfoData._huSeats = msg.nSeats
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)

    local banker = msgData.nBanker
    local infoData = self:getGameData()
    -- 风圈显示
    if CF.roomData:getGameID() == 30356 or CF.roomData:getGameID() == 30357 then
        local str = {[0x41]="东风圈",[0x42]="南风圈",[0x43]="西风圈",[0x44]="北风圈",}
        local strQuanfeng = str[msgData.nQuanFeng]
        infoData:setQuanFengStr(strQuanfeng)
        self:dispatchEvent( { name = self.EVENT_UPDATE_QUANFENG, msg = {value = strQuanfeng} } )
    end
    -- 2小圈1大圈显示，大于99局时表示以圈数计算
    if CF.roomData:getMaxPlayCount() >= 99 then
        local juIdx = (banker+4-msgData.nFirstBanker)%4+1
        local str = {[0x41]="东%d局",[0x42]="南%d局",[0x43]="西%d局",[0x44]="北%d局",}
        local strQuan = string.format(str[msgData.nQuanFeng], juIdx)
        infoData:setQuanJuStr(strQuan)
        self:dispatchEvent( { name = GameModule.EVENT_GAMEINFO_CHANGED, msg = {strQuan = strQuan} })
    end
end

function GameModule:onMsgPlayTings(msgData)
    if CF.settingData:getHaveTing() == false then
        self:dispatchEvent( { name = self.EVENT_HIDE_TING_BUTTON } )
        return
    end
    if msgData.sDelMahSize == 1 and msgData.nDealMah[1] == 0 then       --断线重连
        local data = {}
        self:getGameData():setLastTingData()
        if msgData.bUniversalHu[1] then
            local tempTable = {}
            tempTable.huMahID = 255
            tempTable.huInfoNum = ""
            tempTable.huInfo = ""
            table.insert(data, tempTable)
        else
            for j = 1, msgData.sTingSize[1] do
                local tempTable = {}
                tempTable.huMahID = msgData.nTingMah[1][j]
                tempTable.huInfoNum = msgData.sTingMahFan[1][j] .. "," .. msgData.sTingMahCount[1][j]
                tempTable.huInfo = self:canHuInfo() .. "张"
                table.insert(data, tempTable)
            end
        end
        self:getGameData():setLastTingData(data)
        self:dispatchEvent( { name = self.EVENT_SHOW_TING_BUTTON } )
    else
        local seat = CF.roomData:getSelfSeat()
        local tingMahs = clone(msgData.nDealMah) or {}
        self:getGameData():setTingMahs(seat, tingMahs)
        local data = {}
        for i = 1, msgData.sDelMahSize do
            data[tingMahs[i]] = {}
            if msgData.bUniversalHu[i] then
                local tempTable = {}
                tempTable.huMahID = 255
                tempTable.huInfoNum = ""
                tempTable.huInfo = ""
                table.insert(data[tingMahs[i]], tempTable)
            else
                for j = 1, msgData.sTingSize[i] do
                    local tempTable = {}
                    tempTable.huMahID = msgData.nTingMah[i][j]
                    if msgData.sTingMahFan[i][j] == -1 then
                        tempTable.huInfoNum = msgData.sTingMahCount[i][j]
                        tempTable.huInfo = "张"
                    else
                        tempTable.huInfoNum = msgData.sTingMahFan[i][j] .. "," .. msgData.sTingMahCount[i][j]
                        tempTable.huInfo = self:canHuInfo() .. "张"
                    end
                    table.insert(data[tingMahs[i]], tempTable)
                end
            end
        end
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, data)
    end
end

function GameModule:onMsgTingFan(msgData)
    local mahID = msgData.nDealMah or 0
    if msgData.bUniversalHu then
        return
    end
    local seat = CF.roomData:getSelfSeat()
    local data = self:getGameData():getCanHuMahsData(seat)
    data[mahID] = data[mahID] or {}
    for i = 1, msgData.sTingSize do
        data[mahID][i] = data[mahID][i] or {}
        data[mahID][i].huMahID = msgData.nTingMah[i]
        data[mahID][i].huInfoNum = msgData.sTingMahFan[i] .. "," .. msgData.sTingMahCount[i]
        data[mahID][i].huInfo = self:canHuInfo() .. "张"
    end
    --发送事件UI层刷新
    self:dispatchEvent( { name = self.EVENT_FLUSH_CAN_HU_MAH_DATA, data = mahID } )
end

function GameModule:clickMahSpecialEvent(mahID)
    local seat = CF.roomData:getSelfSeat()
    local data = self:getGameData():getCanHuMahsData(seat)
    if data[mahID] == nil then
        return
    end
    if #data[mahID] == 1 and data[mahID].huMahID == 255 then
        return
    end
    self:sendReqTingFan(mahID)
end

function GameModule:sendReqTingFan(mahID)
    local msgReqTingFan = CF.GameProtocol.msgReqTingFan:new()
    msgReqTingFan.seat = CF.roomData:getSelfSeat()
    msgReqTingFan.mah = mahID
    CF.netEngine.sendStreamPacket(msgReqTingFan)
end

return GameModule