local GameModule = CF.gameClass("GameModule", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_REPLAYCE_SHOW_ANI = "EVENT_REPLAYCE_SHOW_ANI"

function GameModule:getSubXYDealList()
    local xyTable = GameModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = { callback = handler(self, self.onMsgZSY), msgClass = CF.GameProtocol.msgZuoShengYi }
    xyTable[#xyTable + 1] = { callback = handler(self, self.onMsgZuoShengYiInfo), msgClass = CF.GameProtocol.msgZuoShengYiInfo }
    return xyTable
end

-- 补花
function GameModule:onMsgReplace(msgData)
    GameModule.super.onMsgReplace(self, msgData)
    --播放补花动画
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    self:dispatchEvent({ name = self.EVENT_REPLAYCE_SHOW_ANI, msg = { seat = localSeat } })
end

function GameModule:onMsgZSY(msgData)
    local sSeat = msgData.nSeat
    local flag = msgData.nFlag
    if sSeat == CF.roomData:getSelfSeat() then
        if 2 == flag then
            -- 自己不跟, 手牌变暗
            local handMahs = self:getGameData():getHandMahData(sSeat)
            local showHands = clone(handMahs)
            self:getGameData():setLimitHandMahs(sSeat, showHands)
        end
    else
        if 2 == flag then
            -- 别人不跟， 手牌倒下
            CF.SysTool.performWithDelayGlobal(function()
                self:getGameData():setGaiPaiSeat(sSeat)
            end, 1.5)
        end
    end
end

function GameModule:onMsgZuoShengYiInfo(msgData)
    self:getGameData():setZuoShengYiState(msgData.sState)
    self:getGameData():setChengBaoTipCanChow(msgData.bCanChow)
    self:getGameData():setChengBaoTipChow(msgData.sTipChow)
    self:getGameData():setChengBaoTipPung(msgData.sTipPung)
    self:getGameData():setChengBaoTipMKong(msgData.sTipMKong)
end

-- 牌权
function GameModule:onMsgPower(msgData)
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
        self:getGameData():setPlayPower(false)
        local tPower = {}
        local powerByte = bit:d2b(power)
        local showActionColor = false
        for i = 50, 64 do
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
                elseif i == 52 then  --做生意权限
                    local agreeFunc = function()
                        CF.msgManager:sendZuoShengYi(1)
                    end
                    local refuseFunc = function()
                        CF.msgManager:sendZuoShengYi(2)
                    end
                    local msg = "有玩家做生意了，确定要跟吗？"
                    CF.TipTool.showTip({
                        bTop = true,
                        type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
                        funcOK = agreeFunc,
                        funcCancel = refuseFunc
                    }, msg)
                elseif i == 51 then --做生意等待权限
                    print("做生意等待")
                end
                local tempID = CF.GameDefine.POWER_TO_ACTION[tmpPower]
                if tempID then
                    tPower[tempID] = tempID
                end
            end
        end
        self:getGameData():setMahPower(tPower)
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
        self:lightActionMahs(showActionColor)
    end
end

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex, mahValue)
    if not mahIndex or not mahValue or CF.roomData:isPlayBack() then
        return
    end

    local isJoker = false
    local jokers = self:getGameData():getJokerData()
    for index = 1, #jokers do
        if jokers[index] == mahValue then
            isJoker = true
            break
        end
    end

    local powerList = self:getGameData():getMahPower()
    local canhu = false
    for key, _ in pairs(powerList) do
        if key == CF.GameDefine.POWER_TO_ACTION[CF.GameDefine.POWER.HU] then
            canhu = true
            break
        end
    end

    local func_play = function()
        if self:getGameData():getPreviewShow() == true then
            CF.msgManager:sendPlayMahs(mahValue,self:getGameData():getActionID())
            self:getGameData():setPreviewMah(mahValue)
            local seat = CF.roomData:getSelfSeat()
            self:dealPlayPreOut(seat, mahIndex, mahValue)
        end
    end

    local func_cancel = function()
        self:getGameData():setPlayPower(true)
    end
    if canhu and self:getGameData():isFirstOutGuoHu() then
        local msg = "确认过胡吗？"
        local func_guohu = function()
            func_play()
            self:getGameData():setFirstOutGuoHu(false)
        end
        CF.TipTool.showTip({
            bTop = true,
            type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
            funcOK = func_guohu,
            funcCancel = func_cancel
        }, msg)
    else
        if isJoker then
            local msg = "这张是百搭，是否确定打出？"
            CF.TipTool.showTip({
                bTop = true,
                type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
                funcOK = func_play,
                funcCancel = func_cancel
            }, msg)
        else
            func_play()
        end
    end
end

return GameModule;j