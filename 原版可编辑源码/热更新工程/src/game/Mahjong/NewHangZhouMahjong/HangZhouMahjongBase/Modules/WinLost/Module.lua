local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)

    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgEndTypeEx), msgClass = CF.GameProtocol.msgEndTypeEx }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgContractRelationships), msgClass = CF.GameProtocol.msgContractRelationships }

    return subXYDealList
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()

    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()

    local endType = self:getWinLostData():getEndType()

    if endType ~= CF.GameDefine.END_TYPE.ET_NONE then
        for i = 0 , CF.roomData:getChairs() - 1 do
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            local huMahID = gameData:getHuDanFang(i)
            gameData:setHuMahsData(i, mahIDs, huMahID)
        end
    end
    self:getWinLostData():onMsgResult(msgData)

    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
        local selfWinLost = msgData.nWinLost[CF.roomData:getSelfSeat()]
        local winLostWithServicePay = selfWinLost 
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        if gameData.getServicePay then 
            winLostWithServicePay = winLostWithServicePay - gameData:getServicePay()
        end
        CF.SysTool.performWithDelayGlobal(function()
            if not self or not CF.roomData then
                return
            end
            CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, CF.roomData:is50())--hjq todo
        end,time + 1)
    end

    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgEndTypeEx(msgData)
    self:getWinLostData():onMsgEndType(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huSeats = gameData:getHuSeat()
    for i = 1, #huSeats do
        --播放胡牌音效
        -- local acitonindex
        -- if msgData.sEndType == CF.GameDefine.END_TYPE.ET_SELF then
        --     acitonindex = "hu_3"
        -- elseif msgData.sEndType == CF.GameDefine.END_TYPE.ET_DISCARD or msgData.sEndType == CF.GameDefine.END_TYPE.ET_ROBKONG then
        --     acitonindex = "hu_2"
        --     gameData:deleteLastOutMahData(gameData:getLastPlaySeat())
        -- end
        -- if acitonindex then
        --     local bMan = false
        --     local playerData = CF.roomData:getPlayerDataBySeatId(huSeats[i])
        --     if playerData then
        --         bMan = playerData:getSex() == 1
        --     end
        --     local bFangYan = not CF.settingData:getMahIsNormalVoice()
        --     local gameid = bFangYan and CF.roomData:getGameID() or nil
        --     CF.soundManager:playSoundMahAction(acitonindex, bMan, gameid)
        -- end
        --胡动画
        local localHuSeat = CF.roomData:seatToLocal(huSeats[i])
        CF.game:getModule("GameLayer"):showMahAcitonAni(localHuSeat, CF.GameDefine.POWER.HU, false)
    end
end

function WinLostModule:onMsgContractRelationships(msgData)
    self:getWinLostData():onMsgContractRelationships(msgData)
end

--小结束是否显示洗牌按钮
function WinLostModule:needShowShuffleButton(isCutCard)
    if CF.roomData:getIsGameOver() then
        return false
    end
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    --读取配置,是否开启洗牌
    local isShowShuffle = CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())
    -- 下局是否预洗牌
    if isShowShuffle and not isCutCard then
        local propUseModule = CF.game:getModule("PropUse")
        if propUseModule and propUseModule.isPreShuffle then
            isShowShuffle = not propUseModule:isPreShuffle()
        end
    end
    return isShowShuffle
end

return WinLostModule