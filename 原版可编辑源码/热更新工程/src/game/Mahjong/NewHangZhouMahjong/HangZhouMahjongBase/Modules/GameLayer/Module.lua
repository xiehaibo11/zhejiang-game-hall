local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_REPLAYCE_SHOW_ANI = "EVENT_REPLAYCE_SHOW_ANI"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgPowerEx), msgClass = CF.GameProtocol.msgPowerEx }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgPlayTingsEx), msgClass = CF.GameProtocol.msgPlayTingsEx }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgClientForwardBase), msgClass = CF.GameProtocol.msgBaseClientForwardEx}
    return subXYDealList
end

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    CF.game:getModule("WinLost"):getWinLostData():setSelfSeat(CF.roomData:getSelfSeat())
end

-- 每轮数据
function GameModule:onMsgTurnData(msgData)
    self:getGameData():setLastPlayMah(msgData.nJustPlayed)
    self:getGameData():setLastPlaySeat(msgData.nJustSeat)
end

function GameModule:onMsgPlay(msgData)
    GameModule.super.onMsgPlay(self, msgData)
    CF.game:getModule("WinLost"):getWinLostData():setHuKongState(false)
end

function GameModule:onMsgPowerEx(msgData)
    self:getGameData():setCurPower(msgData.nPower)
    GameModule.super.onMsgPower(self, msgData)
end

function GameModule:onMsgAction(msgData)
    GameModule.super.onMsgAction(self, msgData)
    local combType = msgData.tComb.nFlag
    -- 杠牌多减一张牌
    if combType == CF.GameDefine.COMB_FLAG.CKONG or combType == CF.GameDefine.COMB_FLAG.TKONG or 
        combType == CF.GameDefine.COMB_FLAG.MKONG then
        local wallMahCnt = self:getGameData():getSurPlusCounts()
        self:getGameData():setSurPlusCounts(wallMahCnt - 1, true)
        self:dispatchEvent( { name = self.EVENT_TAKE_MAH_FROM_WALL, msg = {isFront = false}})
        CF.game:getModule("WinLost"):getWinLostData():setHuKongState(true)
    else
        CF.game:getModule("WinLost"):getWinLostData():setHuKongState(false)
    end
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self._showChipsList = self._showChipsList or {}
    self._showChipsList[#self._showChipsList + 1] = clone(chips)
    if #self._showChipsList >= 3 then
        -- 骰子动画，可能有队列动画
        self:showChips(self._showChipsList[1])        
        self._showChipsList = {}
    end
end

-- 补花
function GameModule:onMsgReplace(msgData)
    GameModule.super.onMsgReplace(self, msgData)

    self:dispatchEvent( { name = self.EVENT_REPLAYCE_SHOW_ANI, msg = {seat = CF.roomData:seatToLocal(msgData.nSeat)} })
end

function GameModule:onMsgPlayTingsEx(msgData)
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
        local bIsBaiBanCaishen = self:getGameData():isBaiBanCaishen() -- 是否为白板财神规则
        local bIsYouCaiBiKaoXiang = self:getGameData():isYouCaiBiKaoXiang()-- 是否为有财必拷响
        local finalData = {}
        local tingMahs = {}
        for i = 1, count do
            tingMahs[i] = data[i].from
            finalData[tingMahs[i]] = {}
            for j = 1, #data[i].tmahs do
                local tempTable = {}
                tempTable.huMahID = data[i].tmahs[j].mah
                tempTable.huInfoNum = ""
                tempTable.huInfo = ""
                table.insert(finalData[tingMahs[i]], tempTable)
            end
            local jokerData = self:getGameData():getJokerData()
            if not bIsYouCaiBiKaoXiang then --不是有财必拷响状态下
                for j = 1, #jokerData do
                    local haveMah = false
                    local haveRenYi = false
                    for k = 1, data[i].nCount do
                        if data[i].tmahs[k] then --报错修复
                            if data[i].tmahs[k].mah == jokerData[j] then
                                haveMah = true
                                break
                            elseif data[i].tmahs[k].mah == 255 then
                                haveRenYi = true
                                break
                            end
                        end
                    end
                    if haveRenYi == false then
                        if haveMah == false then
                            local tempTable = {}
                            tempTable.huMahID = jokerData[j]
                            tempTable.huInfoNum = ""
                            tempTable.huInfo = ""
                            table.insert(finalData[tingMahs[i]], tempTable)
                        else
                            if not bIsBaiBanCaishen then
                                local tempTable = {}
                                tempTable.huMahID = CF.GameDefine.MAH_VALUE.FENG_BEI
                                tempTable.huInfoNum = ""
                                tempTable.huInfo = ""
                                table.insert(finalData[tingMahs[i]], tempTable)
                            end
                        end
                    end
                end
            end
        end
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, finalData)
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

function GameModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.OPERATE_PASS then
        self:onMsgClientForwardOperatePass(msgData)
    end
end

function GameModule:onMsgClientForwardOperatePass(msgData)
    local actionType = msgData.strData
    if CF.GameDefine.ACTION.PASS == tonumber(actionType) and CF.roomData:isPlayBack()  then
        local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_OPERATE_PASS, localSeat = localSeat })
    end
end

return GameModule