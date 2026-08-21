local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CHIPS = "EVENT_SHOW_CHIPS"
GameModule.EVENT_SHOW_BUHUA = "EVENT_SHOW_BUHUA"
GameModule.EVENT_JOKER_DATA_SET = "EVENT_JOKER_DATA_SET"

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    CF.roomData:setDismissType(CF.GameDefine.DISMISS_TYPE.GP)
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgThrowChipRelink),msgClass = CF.GameProtocol.msgThrowChipRelink}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayTings),msgClass = CF.GameProtocol.msgTingMahInfo}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShowTkongMah),msgClass = CF.GameProtocol.msgShowTkongMah}
    return subXYDealList
end

function GameModule:onMsgThrowChip(msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS, msg = {msgThrowChip = msgData, showAni = false}})
end

function GameModule:onMsgThrowChipRelink(msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS, msg = {msgThrowChip = msgData, showAni = true}})
end

function GameModule:onMsgReplace(msgData)
    GameModule.super.onMsgReplace(self, msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_BUHUA, msg = {seat = msgData.nSeat}})
end

function GameModule:onMsgJoker(msgData)
    GameModule.super.onMsgJoker(self, msgData)
    local isRelink = self:getGameData():getCurGameStep() >= CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_MAH
    self:dispatchEvent( { name = self.EVENT_JOKER_DATA_SET, msg = {openMahs = msgData.nJokers, isRelink = isRelink}})
end

-- 开牌
function GameModule:onMsgOpenWall(msgData)
    GameModule.super.onMsgOpenWall(self, msgData)
    local isRelink = self:getGameData():getCurGameStep() >=  CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_MAH
    if not isRelink then
        -- 牌墙数 -1
        self:getGameData():decreaseSurPlusCounts()
    end
end

function GameModule:onMsgPlayTings(msgData)
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
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
                tempTable.huMahID = msgData.nTingMah[1][j] .. ","
                tempTable.huInfoNum = msgData.sTingMahFan[1][j] .. "," .. msgData.sTingMahCount[1][j]
                table.insert(data, tempTable)
            end
        end
        self:getGameData():setLastTingData(data)
        CF.game:getModule("RightBtns"):showTingBtn()
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
                        tempTable.huInfoNum = msgData.sTingMahCount[i][j] .. ","
                        tempTable.huInfo = "番,"
                    else
                        tempTable.huInfoNum = msgData.sTingMahFan[i][j] .. ","
                        tempTable.huInfo = "番,"
                    end
                    table.insert(data[tingMahs[i]], tempTable)
                end
            end
        end
        self:getGameData():setCanHuMahsData(seat, data)
    end
end

-- 出牌
function GameModule:onMsgPlay(msgData)
    GameModule.super.onMsgPlay(self, msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setChowLimitOtherCombs(msgData.nMah)
    end
end

function GameModule:onMsgOutMah(msgData)
    GameModule.super.onMsgOutMah(self, msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setChowLimitOtherCombs(msgData.nLastOutMah)
    end
end

-- 显示暗杠的牌
function GameModule:onMsgShowTkongMah(msgData)
    if msgData and msgData.combIndex then
        for i = 1, #msgData.combIndex do
            local cloneCombData = { }
            cloneCombData.nMahs = { CF.GameDefine.MAH_VALUE.BACK, CF.GameDefine.MAH_VALUE.BACK, CF.GameDefine.MAH_VALUE.BACK, clone(msgData.nMahs[i]) }
            self:getGameData():refreshCombMahData(msgData.nSeat, cloneCombData, msgData.combIndex[i])
        end
    end
end

function GameModule:getLuaIntValue(luaString,variable)
    local value = -1
    local vs = string.split(luaString, ";")
    for i = 1,#vs do
        local vss = string.split(vs[i], "=")
        if (#vss >= 2 and vss[1] == variable)then
            value = tonumber(vss[2])
            return value
        end
    end
    return value
end

function GameModule:getLuaStrValue(luaString,  variable)
    local value = ""
    local vs = string.split(luaString, ";")
    for i = 1,#vs do
        local vss = string.split(vs[i], "=")
        if (#vss >= 2 and vss[1] == variable)then
            value = vss[2]
            if (string.len(value) >= 2)then
                if (value[1] == '\'' and value[string.len(value)] == '\'')then
                    value = string.sub(value,1,string.len(value) - 1)
                end
            end
            return value
        end
    end
    return value
end

function GameModule:unserialize(lua)
    local t = type(lua)
    if t == "nil" or lua == "" then
        return nil
    elseif t == "number" or t == "string" or t == "boolean" then
        lua = tostring(lua)
    else
        error("can not unserialize a " .. t .. " type.")
    end
    lua = "return " .. lua
    local func = loadstring(lua)
    if func == nil then
        return nil
    end
    return func()
end

return GameModule