local GameModule = CF.gameClass("GameModule", "game.Mahjong.LiShui.LiShuiMahjongBase.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTingWait),msgClass = CF.GameProtocol.msgTingWait}
    return subXYDealList
end

function GameModule:onMsgTake(msgData)
    GameModule.super.onMsgTake(self, msgData)
    local leftCardCount = self:getGameData():getSurPlusCounts()
    if leftCardCount == 3 then
        local gameRule = CF.roomData:getGameRule()
        if string.find( gameRule, "最后四张包牌") then
            CF.TipTool.showToast("最后4张，可包牌")
        end
    end
end

function GameModule:onMsgTingWait(msgData)
    if msgData.bTingWait then
        self:getGameData():setPlayerTingState(msgData.nSeat, "ting")
    else
        self:getGameData():setPlayerTingState(msgData.nSeat, "cancel")
    end
end

function GameModule:analysePower(power)
    if CF.roomData:getChairs() == 2 then
        return self:analysePowerEx(power)
    else
        return GameModule.super.analysePower(self, power)
    end
end

function GameModule:analysePowerEx(power)
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
    return convertID, showActionColor
end

function GameModule:doActionCancel()
    GameModule.super.doActionCancel(self)
    if self:getGameData():getPlayerTingState(CF.roomData:getSelfSeat()) == "waiting" then
        self:getGameData():setLimitHandMahs(CF.roomData:getSelfSeat(), {})
        self:getGameData():setPlayerTingState(CF.roomData:getSelfSeat(), "cancel")
    end
end

function GameModule:doActionTing()
    self:setLimitMahsTingWait(CF.roomData:getSelfSeat())
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

function GameModule:onMsgPlay(msgData)
    GameModule.super.onMsgPlay(self, msgData)
    if msgData.nSeat == CF.roomData:getSelfSeat() and self:getGameData():getPlayerTingState(msgData.nSeat) == "waiting" then
        CF.msgManager:sendTingWait(true)
    end
end

return GameModule