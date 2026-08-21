local GameModule = CF.gameClass("GameModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPowerEx), msgClass = CF.GameProtocol.msgPowerEx_SToC}
    return subXYDealList
end

-- 下发权限
function GameModule:onMsgPowerEx(msgData)
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
        local tPower = {}
        local powerByte = bit:d2b(power)
        self:getGameData():setPlayPower(false)
        for i = 57, 64 do
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
                elseif i == 60 then
                    tmpPower = CF.GameDefine.POWER.HU
                    -- 设置一个胡牌权限
                elseif i == 59 then
                    tmpPower = CF.GameDefine.POWER.MKONG
                elseif i == 58 then
                    tmpPower = CF.GameDefine.POWER.CKONG
                elseif i == 57 then
                    tmpPower = CF.GameDefine.POWER.TKONG
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
    end
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self._showChipsList = self._showChipsList or {}
    self._showChipsList[#self._showChipsList + 1] = clone(chips)
    if #self._showChipsList >= 3 then
        -- 骰子动画，可能有队列动画
        self:showChips(self._showChipsList[2])
        self._showChipsList = {}
    end
end

return GameModule