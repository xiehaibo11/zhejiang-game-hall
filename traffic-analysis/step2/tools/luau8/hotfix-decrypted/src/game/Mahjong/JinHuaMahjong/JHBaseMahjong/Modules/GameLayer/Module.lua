local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CHENG_BAO_QUAN_ANI = "EVENT_SHOW_CHENG_BAO_QUAN_ANI"  --承包圈动画
GameModule.EVENT_QIAO_XIANG = "EVENT_QIAO_XIANG"  --敲响事件
GameModule.EVENT_OTHERS_QIAO_XIANG = "EVENT_OTHERS_QIAO_XIANG"  --其他玩家敲响事件


function GameModule:getProxyEvents()
	local eventsList = GameModule.super.getProxyEvents(self)
	return eventsList
end

function GameModule:getSubXYDealList()
	local xyDealList = GameModule.super.getSubXYDealList(self)
	xyDealList[#xyDealList+1]  = {callback = handler(self,self.onMsgTingMahInfo),msgClass = CF.GameProtocol.msgPlayTings}
	return xyDealList
end

function GameModule:onMsgTingMahInfo(msgData)
    if CF.configData:haveTing() == false then
        return
    end
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end

    local seat = msgData.nSeat
    local count = msgData.nCount
    local data = clone(msgData.tingmahs)

    if count == 0 then
        self:getGameData():clearTingMahs(seat)
    else
        local finalData = {}
        local tingMahs = {}
        for i = 1, count do
            tingMahs[i] = data[i].from
            finalData[tingMahs[i]] = {}
            local temp = data[i].nCount
            if temp > 9 then
                temp = 9
            end
            for j = 1, temp do
                local tempTable = {}
                tempTable.huMahID = data[i].tmahs[j].mah
                tempTable.huInfoNum = data[i].tmahs[j].ft .. ","
                tempTable.huInfo = "倍,"
                table.insert(finalData[tingMahs[i]], tempTable)
            end
        end
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, finalData)
    end
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    if self._throwChip == nil then
        self._throwChip = 0
    end
    self._throwChip = self._throwChip + 1
    if self._throwChip == 2 then
        local chips = msgData.nChips
        -- 骰子动画，可能有队列动画
        self:showChips(chips)
    elseif self._throwChip == 3 then
        self._throwChip = 0
    end
end

function GameModule:onMsgPower(msgData)
    GameModule.super.onMsgPower(self, msgData)

    self:getGameData():setPowerByte(bit:d2b(msgData.nPower))
    local gameid = CF.roomData:getGameID() or 0
    if gameid ~= 30100 and gameid ~= 30101  then
        return
    end

    local bIsQiaoXiang = false
    local seat = msgData.nSeat
    local power = msgData.nPower
    if seat == CF.roomData:getSelfSeat() then --兰溪和金华才有敲响
        local powerByte = bit:d2b(power)
        local showActionColor = false
        if powerByte[52] == 1 then --敲响轮
            bIsQiaoXiang = true
        end
        self:getGameData():setqiaoxiang(bIsQiaoXiang, CF.roomData:getSelfLocalSeat())
        if bIsQiaoXiang then
            local tPower = {}
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
                        showActionColor = true
                    elseif i == 60 then
                        tmpPower = CF.GameDefine.POWER.HU
                        -- 设置一个胡牌权限
                    elseif i == 59 then
                        tmpPower = CF.GameDefine.POWER.MKONG
                        showActionColor = true
                    elseif i == 58 and not bIsQiaoXiang then
                        tmpPower = CF.GameDefine.POWER.CKONG
                    elseif i == 57 and not bIsQiaoXiang then
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
                local data = {}
                data.isShow = true
                data.actionTypes = convertID
                self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
            end
            self:lightActionMahs(showActionColor)
        end
        self:dispatchEvent( { name = self.EVENT_QIAO_XIANG, data = bIsQiaoXiang })
    end
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    local seat = msgData.nSeat
    local convertFlag = CF.GameDefine.COMB_FLAG_TO_TYPE[msgData.tComb.nFlag]
    if  convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG or convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG then
        -- 0721 播放行牌音效
        local bMan = false
        local playerData = CF.roomData:getPlayerDataBySeatId(seat)
        if playerData then
            bMan = playerData:getSex() == 1
        end
        local bFangYan = not CF.settingData:getMahIsNormalVoice()
        if bFangYan then
            local gameid = bFangYan and CF.roomData:getGameID() or nil
            CF.soundManager:playSoundMahAction(CF.GameDefine.COMB_TYPE.EXPOSED_KONG, bMan, gameid)
        end
    end
    GameModule.super.onMsgAction(self, msgData)
end

-- 限制牌
function GameModule:onMsgPlayLmts(msgData)
    GameModule.super.onMsgPlayLmts(self, msgData)
    local isLmtMahs = false
    local mahs = msgData.nMahs
    if #mahs > 0 then
        isLmtMahs = true
    end
    self:getGameData():setLimitMahs(isLmtMahs)
end

-- 抓牌
function GameModule:onMsgTake(msgData)
    GameModule.super.onMsgTake(self,msgData)
    if CF.configData:needShowChengBaoQuanAni() then
        local wallMahCnt = self:getGameData():getSurPlusCounts()
        if wallMahCnt == 3 then
            self:dispatchEvent( { name = self. EVENT_SHOW_CHENG_BAO_QUAN_ANI})
        end
    end
end

function GameModule:showPlayBackOnlinePower(msgPower)
    if msgPower.nSeat == CF.roomData:getSelfSeat() then
        return
    end
    if not CF.roomData:isPlayBack() then
        return
    end
    local tPower = {}
    local bIsQiaoXiang = false
    local powerByte = bit:d2b(msgPower.nPower)
    if powerByte[52] == 1 then --敲响轮
        bIsQiaoXiang = true
    end

    for i = 57,64 do
        local tmpPower = CF.GameDefine.POWER.NONE
        if powerByte[i] == 1 then
            if i == 64 then
                tmpPower = CF.GameDefine.POWER.CANCEL
            elseif i == 63 then
                tmpPower = CF.GameDefine.POWER.PLAY
            elseif i == 62 then
                tmpPower = CF.GameDefine.POWER.CHOW
            elseif i == 61 then
                tmpPower = CF.GameDefine.POWER.PUNG
            elseif i == 60 then
                tmpPower = CF.GameDefine.POWER.HU
            elseif i == 59 then
                tmpPower = CF.GameDefine.POWER.MKONG
            elseif i == 58 and not bIsQiaoXiang then
                tmpPower = CF.GameDefine.POWER.CKONG
            elseif i == 57 and not bIsQiaoXiang then
                tmpPower = CF.GameDefine.POWER.TKONG
            end
            local tempID = CF.GameDefine.POWER_TO_ACTION[tmpPower]
            if tempID then
                tPower[tempID] = tempID
            end
        end
    end
    local seatLocal = CF.roomData:seatToLocal(msgPower.nSeat)
    local convertID = {}
    for key, _ in pairs(tPower) do
        convertID[#convertID + 1] = key
    end
    table.sort(convertID)
    -- 将权限通知麻将层
    if #convertID ~= 0 then
        self:dispatchOthersAction(seatLocal, true, convertID)
    end
    self:dispatchEvent( { name = self.EVENT_OTHERS_QIAO_XIANG, data = {bQiaoXiang = bIsQiaoXiang, localSeat = seatLocal} })
end

return GameModules"