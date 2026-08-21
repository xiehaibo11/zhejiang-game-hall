local GameModule = CF.gameClass("GameModule", "game.Mahjong.LiShui.LiShuiMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_UPDATE_STATE_FLAG = "EVENT_UPDATE_STATE_FLAG"
GameModule.EVENT_UPDATE_SPECIAL_BTN_STATE = "EVENT_UPDATE_SPECIAL_BTN_STATE"

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
    self._gameState = {}
end

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self:updateStateFlag()
end

function GameModule:getSubXYDealList()
	local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameState),msgClass = CF.GameProtocol.msgGameState}
    return subXYDealList
end

function GameModule:onMsgGameState(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.seat)
    self:dispatchEvent( { name = self.EVENT_UPDATE_STATE_FLAG , msg = {show = true, seat = localSeat, status = msgData.state}})
    self._gameState[msgData.seat] = msgData.state
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        self._gameState[seat] = self._gameState[seat] or 0
        CF.game:getModule("WinLost"):getWinLostData():setGameStateInfo(seat, self._gameState[seat])
    end
end

function GameModule:showPlayPreOut(mahIndex,mahValue)
    self:dispatchEvent( { name = self.EVENT_UPDATE_SPECIAL_BTN_STATE , msg = {type = nil, show = nil, showall = false}})
    GameModule.super.showPlayPreOut(self, mahIndex, mahValue)
end

function GameModule:analysePower(power)
	local tPower = {}
    local powerByte = bit:d2b(power)
    local showActionColor = false
    for i = 51, 64 do
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
                tmpPower =  CF.GameDefine.POWER.PUNG
                showActionColor = true
            elseif i == 60 then
                tmpPower = CF.GameDefine.POWER.HU
                -- 设置一个胡牌权限
            elseif i == 59 then
                tmpPower =  CF.GameDefine.POWER.MKONG
                showActionColor = true
            elseif i == 58 then
                tmpPower = CF.GameDefine.POWER.CKONG
            elseif i == 57 then
                tmpPower = CF.GameDefine.POWER.TKONG
            elseif i == 52 then
                local state = self._gameState[CF.roomData:getSelfSeat()]
                if state == nil or ((state > 0) == false) then
                    self:dispatchEvent( { name = self.EVENT_UPDATE_SPECIAL_BTN_STATE , msg = {type = 1, show = true, showall = nil}})
                end
            elseif i == 51 then
                local state = self._gameState[CF.roomData:getSelfSeat()]
                if state == nil or ((state > 0) == false) then
                    self:dispatchEvent( { name = self.EVENT_UPDATE_SPECIAL_BTN_STATE , msg = {type = 2, show = true, showall = nil}})
                end
            end
            local tempID = CF.GameDefine.POWER_TO_ACTION[tmpPower]
            if tempID then
                tPower[tempID] = tempID
            end
        else
            if powerByte[i] == 0 then
                if i == 52 then
                    self:dispatchEvent( { name = self.EVENT_UPDATE_SPECIAL_BTN_STATE , msg = {type = 1, show = false, showall = nil}})
                elseif i == 51 then
                    self:dispatchEvent( { name = self.EVENT_UPDATE_SPECIAL_BTN_STATE , msg = {type = 2, show = false, showall = nil}})
                end
            end
        end
    end
    local convertID = {}
    for key,_ in pairs(tPower) do
        convertID[#convertID + 1] = key
    end
    table.sort(convertID)
    return convertID, showActionColor
end

function GameModule:updateStateFlag()
    for i = 1, CF.roomData:getMaxPlayer() do
        self:dispatchEvent( { name = self.EVENT_UPDATE_STATE_FLAG , msg = {show = false, seat = i, status = 0}})
    end
end

function GameModule:updateSpecialBtnState()
    self:dispatchEvent( { name = self.EVENT_UPDATE_SPECIAL_BTN_STATE ,msg = {type = nil, show = nil, showall = false}})
end

-- 结果
function GameModule:onMsgEndResult(msgData)
    -- 财神奖分
    local result = msgData.szResult
    -- getBackStringByFlag 在找不到分隔符时返回 ""；服务端可能只下发 "CSJ,3'-3" 而无 ";" 前缀
    local strCSJ = CF.StringTool.getBackStringByFlag(result, ";")
    if strCSJ == "" then
        strCSJ = result
    end
    local strCSJNum = CF.StringTool.getBackStringByFlag(strCSJ, ",")
    local tableCSJ
    tableCSJ =  string.split(strCSJNum, "'")

    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    for seat = 0, CF.roomData:getChairs() - 1 do
        winLostData:setCaiShenJiangData(seat, tonumber(tableCSJ[seat+1]))
    end
end

return GameModule