local GameModule = CF.gameClass("GameModule", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgClock), msgClass = CF.GameProtocol.msgClock}, --1419
        {callback = handler(self, self.onMsgGameStart), msgClass = CF.GameProtocol.msgGameStart}, --1401
        {callback = handler(self, self.onMsgGameStep), msgClass = CF.GameProtocol.msgGameStep}, --1402
        {callback = handler(self, self.onMsgJokerData), msgClass = CF.GameProtocol.msgJokerData}, --1433
        {callback = handler(self, self.onMsgAllOutRecord), msgClass = CF.GameProtocol.msgAllOutRecord}, --1434
        {callback = handler(self, self.onMsgHandCard), msgClass = CF.GameProtocol.msgHandCard}, --1403
        {callback = handler(self, self.onMsgShowOutCards), msgClass = CF.GameProtocol.msgShowOutCards}, --1430
        {callback = handler(self, self.onMsgLianZhaBuDai), msgClass = CF.GameProtocol.msgLianZhaBuDai}, --1443
        {callback = handler(self, self.onMsgGameType), msgClass = CF.GameProtocol.msgGameType}, --1447
        {callback = handler(self, self.onMsgHaveMingPai), msgClass = CF.GameProtocol.msgHaveMingPai}, --1057
        {callback = handler(self, self.onMsgGameGong), msgClass = CF.GameProtocol.msgGameGong}, --1450
        {callback = handler(self, self.onMsgSwapSeat), msgClass = CF.GameProtocol.msgSwapSeat}, --1405
        {callback = handler(self, self.onMsgOpenCard), msgClass = CF.GameProtocol.msgOpenCard}, --1410
        {callback = handler(self, self.onMsgOpenCardSeat), msgClass = CF.GameProtocol.msgOpenCardSeat}, --1412
        {callback = handler(self, self.onMsgWinOrder), msgClass = CF.GameProtocol.msgWinOrder}, --1431
        {callback = handler(self, self.onMsgGameEnd), msgClass = CF.GameProtocol.msgGameEnd}, --1445
        {callback = handler(self, self.onMsgCanChaoDi), msgClass = CF.GameProtocol.msgCanChaoDi}, --1427
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPower}, --1418
        {callback = handler(self, self.onMsgOutCards), msgClass = CF.GameProtocol.msgOutCards}, --1429
        {callback = handler(self, self.onMsgGameZhang), msgClass = CF.GameProtocol.msgGameZhang}, 
        --[[{callback = handler(self, self.onMsgRequestSwapSeat), msgClass = CF.GameProtocol.msgRequestSwapSeat}, --1462--hjq与茶苑双扣不一致
        {callback = handler(self, self.onMsgRespondSwapSeat), msgClass = CF.GameProtocol.msgRespondSwapSeat}, --1463--hjq与茶苑双扣不一致
        {callback = handler(self, self.onMsgShowSwapSeat), msgClass = CF.GameProtocol.msgShowSwapSeat}, --1465--无
        {callback = handler(self, self.onMsgSwapSeatFlag), msgClass = CF.GameProtocol.msgSwapSeatFlag}, --1464--hjq与茶苑双扣不一致
        {callback = handler(self, self.onMsgAllHandCards), msgClass = CF.GameProtocol.msgAllHandCards}, --1474
        {callback = handler(self, self.onMsgNoOutGong), msgClass = CF.GameProtocol.msgNoOutGong}, --1475--无
        {callback = handler(self, self.onMsgUseMarkerEx), msgClass = CF.GameProtocol.msgUseMarkerEx}, --1477--无--]]
        {callback = handler(self, self.onMsgGameMut), msgClass = CF.GameProtocol.msgGameMut}, --1416
        {callback = handler(self, self.onMsgSpecfCards), msgClass = CF.GameProtocol.msgSendAllCard}, --1421
        {callback = handler(self, self.onMsgQiaoPiHua), msgClass = CF.GameProtocol.msgQiaoPiHua}, --1421
        {callback = handler(self, self.onMsgSpecialBombGong), msgClass = CF.GameProtocol.msgSpecialBombGong}, --1470
        {callback = handler(self, self.onMsgChatMsg), msgClass = CF.GameProtocol.msgChatMsg}, --1446
        {callback = handler(self, self.onMsgWinLostExtra), msgClass = CF.GameProtocol.msgWinLostExtra}, --2026
        {callback = handler(self, self.onMsgExtraBonus), msgClass = CF.GameProtocol.msgExtraBonus}, --2029
        {callback = handler(self, self.onMsgTrustLimit), msgClass = CF.GameProtocol.msgTrustLimit}, --1438
    }
end

function GameModule:onMsgSpecialBombGong(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    self:dispatchEvent({ name = self.EVENT_SHOW_SPECIAL_BOMB_GOND, msg = { localSeat = localSeat, nCardsType = msgData.nCardsType, nCardsGong = msgData.nCardsGong } })
end

--小结束是否显示洗牌按钮
function GameModule:needShowShuffleButton()
    return true
end

function GameModule:onMsgSwapSeat(msgData)
    --换位
    if not msgData.bIsSwapSeatEnd then
        if msgData.bIsHuanWei then
            if msgData.ucnowseat == CF.roomData:getPlayBackSelfSeat() then
                CF.roomData:setPlayBackSelfSeat(msgData.ucotherseat)
            end
            if msgData.ucotherseat == CF.roomData:getPlayBackSelfSeat() then
                CF.roomData:setPlayBackSelfSeat(msgData.ucnowseat)
            end
            self._gameData:swapPlayerSeat(msgData.ucnowseat, msgData.ucotherseat)
            --先把本地的玩家座位对换
            self:swapPlayerSeat(msgData.ucnowseat, msgData.ucotherseat)
        else
            CF.msgManager:sendWaitSwapSeat()
        end
    end
    CF.game:getModule("Marker"):clearLocalStartKey(true)
    CF.game:getModule("Marker"):resetAllLeftCards()
end

function GameModule:onMsgQiaoPiHua(msgData)
    local config = CF.soundManager:getSpeakConfigEx() or {}
    local content = ""
    -- PC下发的转一层
    msgData.sIndex = self:getTransferQPH(msgData.sIndex)
    if config and config[msgData.sIndex] then
        content = config[msgData.sIndex].SpeakText
    else
        return
    end
    local transferData = {
        strData = msgData.sIndex .. "/" .. content,
        sSeat = msgData.sSeat,
    }
    CF.game:getModule("Chat"):onMsgClientForwardQaioPiHua(transferData)
end

function GameModule:getTransferQPH(index)
    local transfer = {
        [200] = 4, --快来那
        [201] = 3, --打快打快！！
        [202] = 1, --动作快点！！！
        [203] = 7, --没炸弹啊
        [204] = 11, --破牌！
        [205] = 12, --双拖双
        [206] = 13, --三拖一
        [207] = 14, --全散！
        [208] = 15, --全大
        [219] = 5, --没吃不倒霉
        [210] = 16, --什么牌型那！
        [211] = 6, --炸弹带回家？
        [212] = 109, --让他打吧
        [213] = 103, --被扔砖头了
        [214] = 102, --被炸残了
        [215] = 11, --这盘没救了
        [216] = 100, --痛苦
        [217] = 17, --我帮你瞄着
    }
    return transfer[index] or index
end

function GameModule:onMsgChatMsg(msgData)
    local strChatMsg = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.chatMsg)
    if string.find(strChatMsg, "本局游戏不计分") then
        local winSize = cc.Director:getInstance():getWinSize()
        CF.TipTool.showToast("对局结束太快，本局不计分!", 4, cc.p(winSize.width / 2, winSize.height / 3))
    end
end

function GameModule:onMsgGameZhang(msgData)
    local gameData = self:getGameData()
    -- 50游戏不使用逻辑下发的手续费
    if not CF.roomData:is50() then
        gameData:setServicePay(msgData.nServicePay)
    end
    gameData:setEightKing(msgData.bEightKing)
    local CardLayerConfig = CF.gameRequire("Modules.GameLayer.CardLayerConfig")
    if msgData.bEightKing then
        CardLayerConfig.HandCardConf = CardLayerConfig.HandCardConfEightKing
    end
    CF.game:getModule("AddMultiple"):updateLayout(msgData.bEightKing)
end

function GameModule:onMsgWinLostExtra(msgData)
    local winLostData = self._gameData:getWinLostData()
    winLostData:setIncValues(msgData.fMut)
end

function GameModule:onMsgGameGong(msgData)
    self._gameData:setGongXianFen(msgData.sSeat, msgData.iGongXian, msgData.iGong)
end

function GameModule:onMsgExtraBonus(msgData)
    local winLostData = self._gameData:getWinLostData()
    winLostData:setExtraBonus(msgData.nVipBonus)
end

function GameModule:onMsgTrustLimit(msgData)
    local trustPunishTime = msgData.trustPunishTime / 1000
    self._gameData:setTrustPunishTime(trustPunishTime)
end

return GameModule
     