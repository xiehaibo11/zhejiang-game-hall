local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_HIDE_HU_FAN_TIPS = "EVENT_HIDE_HU_FAN_TIPS"

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgJudgeShaZhu), msgClass = CF.GameProtocol.msgJudgeShaZhu }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgHuFanType), msgClass = CF.GameProtocol.msgHuFanType }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgPlayTings), msgClass = CF.GameProtocol.msgPlayTings }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgPlayCanHus), msgClass = CF.GameProtocol.msgPlayCanHus }

    return subXYDealList
end

function GameModule:onMsgPower(msgData)
    self:hideHuFanTips()
    local seat = msgData.nSeat
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
        self:getGameData():setPreviewMah(0)
        self:getGameData():setPlayPower(false)

        local convertID, showActionColor = self:analysePower(msgData.nPower)
        -- 将权限通知麻将层
        if convertID and #convertID ~= 0 then
            data.isShow = true
            data.actionTypes = convertID
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_SHA_ZHU_ACTION, data = self:getGameData():getIsShaZhu() })
        end
        self:lightActionMahs(showActionColor)
    end
end

function GameModule:analysePower(power)
    local tPower = {}
    local powerByte = bit:d2b(power)
    local showActionColor = false
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
                local FenZhangCount = 10        --平阳特有（分张自动胡）
                if self:getGameData():getSurPlusCounts() < FenZhangCount * 2 then
                    self:doActionHu()
                    return
                end
            elseif i == 59 then
                tmpPower = CF.GameDefine.POWER.MKONG
                showActionColor = true
            elseif i == 58 then
                tmpPower = CF.GameDefine.POWER.CKONG
                --判断有没有四花
                if self:getGameData():getCurGameStep() == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_FIRST_CKONG then
                    local nType = self:getGameData():getFourFlowersType(CF.roomData:getSelfSeat())
                    if nType ~= CF.GameDefine.KW_HUA_TYPE.HUA_NONE then
                        self:sendFourFlowersAction(CF.roomData:getSelfSeat(), nType)
                    end
                end
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
    return convertID, showActionColor
end

function GameModule:sendFourFlowersAction(seat,nType)
    local combs = {}
    local mahs = {}
    if nType == CF.GameDefine.KW_HUA_TYPE.MEI_HUA then
        for i = 0,3 do
            table.insert(mahs,CF.GameDefine.MAH_VALUE.HUA_MEI + i)
        end
    elseif nType == CF.GameDefine.KW_HUA_TYPE.CHUN_HUA then
        for i = 0,3 do
            table.insert(mahs,CF.GameDefine.MAH_VALUE.HUA_CHUN + i)
        end

    elseif nType == CF.GameDefine.KW_HUA_TYPE.BAI_BAN then
        for _ = 0,3 do
            table.insert(mahs,CF.GameDefine.MAH_VALUE.JIAN_BAI)
        end
    end
    combs.ins = {}
    combs.from = seat
    combs.flag = CF.GameDefine.COM_MAH_FLAG.CMF_CKONG
    combs.mahs = mahs
    CF.msgManager:sendAction(combs, self:getGameData():getActionID())
end

function GameModule:hideHuFanTips()
    self:dispatchEvent({ name = self.EVENT_HIDE_HU_FAN_TIPS })
end

function GameModule:onMsgCrossHu(msgData)
    --测试使用,过胡标识仅自己视角可见
    --[[local areaTypeid = CF.utils.getAreaTypeID()
    if areaTypeid > 1000 and msgData.sSeat == CF.gameFunction.getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_CROSS_HU, data = {seat = msgData.sSeat, bShow = msgData.bCrossHu}})
    end--]]
end

function GameModule:onMsgCrossPeng(msgData)
    --测试使用,过碰提示仅自己视角可见
   --[[ local areaTypeid = CF.utils.getAreaTypeID()
    if areaTypeid > 1000 and msgData.sSeat == CF.gameFunction.getSelfSeat() then
        self:dispatchEvent({name = self.EVENT_CROSS_PENG, data = {seat = msgData.sSeat, bShow = msgData.bCrossPeng}})
    end--]]
end

function GameModule:onMsgJudgeShaZhu(msgData)
    self:getGameData():setIsShaZhu(msgData.nflag > 0)
end

--胡牌时翻数提示
function GameModule:onMsgHuFanType(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    local tmpFan = ""
    local bhaveHint = false
    for j = 0, #msgData.fanName do
        if msgData["fanName"][j] and msgData["fanName"][j] ~= 0 then
            bhaveHint = true
            tmpFan = tmpFan .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData["fanName"][j]]..msgData["everyFanCount"][j] .."台 ,"
        end 
    end
    if bhaveHint then
        tmpFan = string.sub(tmpFan,1,#tmpFan-1)
        CF.gameRequire("Modules.GameLayer.HuFanTipsUI").new(tmpFan):showSelf()
    end
end

function GameModule:onMsgPlayTings(msgData)
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    if self:getGameData():getPlayPower() == true then
        local seat = msgData.nSeat
        local tingMahs = clone(msgData.nMahs)
        if #tingMahs == 0 then
            self:getGameData():clearTingMahs(seat)
        else
            self:getGameData():setTingMahs(seat, tingMahs)
        end
        --可以胡的牌处理
        --local fanShu = clone(msgData.nFanShu)
        local huMahs = clone(msgData.nHuMah)
        if #huMahs == 0 then
            self:getGameData():clearCanHuMahs(seat)
        else
            local data = self:convertCanHuInfoData(msgData)
            self:getGameData():setCanHuMahsData(seat, data)
        end
    end
end

function GameModule:convertCanHuInfoData(msgData)
    local tingMahs = clone(msgData.nMahs)
    local fanShu = clone(msgData.nFanShu)
    local huMahs = clone(msgData.nHuMah)
    local data = {}
    for i = 1, msgData.nCount do
        data[tingMahs[i]] = {}
        for j = 1, #huMahs[i] do
            if huMahs[i][j] == 0 then
                break
            end
            local tempTable = {}
            tempTable.huMahID = huMahs[i][j]
            tempTable.huInfoNum = fanShu[i][j] .. ","
            tempTable.huInfo = "台,"
            table.insert(data[tingMahs[i]], tempTable)
        end
    end
    return data
end

function GameModule:onMsgPlayCanHus(msgData)
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    CF.game:getModule("RightBtns"):showTingBtn()
    local fanShu = clone(msgData.nFanShu)
    local huMahs = clone(msgData.nMahs)
    local data = {}
    for i = 1, msgData.nCount do
        local tempTable = {}
        tempTable.huMahID = huMahs[i]
        tempTable.huInfoNum = fanShu[i] .. ","
        tempTable.huInfo = "台,"
        table.insert(data, tempTable)
    end
    self:getGameData():setLastTingData(data)
end

return GameModule