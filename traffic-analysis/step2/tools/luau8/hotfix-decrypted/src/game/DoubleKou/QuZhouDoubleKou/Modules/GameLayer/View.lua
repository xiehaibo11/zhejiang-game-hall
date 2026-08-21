local GameLayer = CF.gameClass("GameLayer", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.View")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local CardEnum  = CF.gameRequire("Define.CardEnum")

function GameLayer:onPlayerShowOutCard(event)
    --隐藏操作按钮
    self:showPanelGamePlayBtns(false)
    --隐藏抄底按钮
    self:showChaoDiBtn(false)

    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local outCardIDs = msg.outCardIDs
    if #outCardIDs > 0 then
        CF.soundManager:playSoundOut()
        -- 牌型音效
        local player = CF.roomData:getPlayerDataBySeatId(msg.seat)
        if player then
            local power = CardLogic.getMinPowerInCardIDs(outCardIDs) --最小的牌权值即为牌型的牌权值
            local bFangYan = not CF.settingData:getDoubleKouIsNormalVoice()
            local gameType = CF.game:getModule("GameLayer"):getGameData():getGameType()
            local gameid = CF.roomData:getGameID() .. "_" .. gameType
            CF.soundManager:playSoundPlayCardType(player:getSex(), msg.cardType, power, bFangYan, gameid)
        end
        --显示附带动画
        self:showCardTypeAni(msg.seat, msg.cardType)

        local isShowFire = false
        if CF.roomData:isShowNewBomb() and msg.cardType and msg.cardType >= CardEnum.CARDS_TYPE.CT_12_JUNKO_0_CONTINUOUS and msg.cardType <= CardEnum.CARDS_TYPE.CT_16_JUNKO_2_CONTINUOUS then
            isShowFire = true
        end
        self._cardLayer:setOutCards(localSeat, outCardIDs, isShowFire)

        local handCardIDs = self._gameData:getHandCardIDs(msg.seat)
        if not CardLogic.isBackHandCards(handCardIDs) then
            local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
            self._cardLayer:setHandCards(localSeat, newHandCardIDs)
        else
            if CF.roomData:getIsSeer() and msg.seat == CF.roomData:getSelfSeat() then
                for i = 1,#outCardIDs do
                    outCardIDs[i] = 0
                end
                local _, newHandCardIDs = CardLogic.deleteCardIDs(handCardIDs, outCardIDs)
                self._cardLayer:setHandCards(localSeat, newHandCardIDs)
            end
        end
    else
        CF.soundManager:playSoundPass()
        self:showPassAni(localSeat)
    end

    self:stopOutCardClock(localSeat)

    --自己出牌
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:removeCardTypeSelectLayer()
    end
end

function GameLayer:onGameTotalResult(event)
    self._gameData:setBigSettleData(nil)
    self:clearAllPlayerOutCardClock()

    local msg = event.msg
    CF.roomData:setIsGameOver(msg.show)
    if not msg.show then
        return
    end

    local delayTime = 1
    if msg.playCount == msg.maxCount then
        delayTime = 6
    end

    if CF.game:getModule("GameLayer")._nDelayPhaseTime then
        delayTime = delayTime + CF.game:getModule("GameLayer")._nDelayPhaseTime
        CF.game:getModule("GameLayer")._nDelayPhaseTime = 0
    end

    self:runAction(
        cc.Sequence:create(
            cc.DelayTime:create(delayTime),
            cc.CallFunc:create(
                function()
                    --隐藏小结束
                    self:clearWinLostLayer()
                    local BigWinLostLayer = CF.gameRequire("Modules.BigWinLost.View")
                    local layer = BigWinLostLayer.new(msg)
                    layer:setCanContinue(CF.roomData:isCanContinue())
                    layer:showSelf()
                end
            )
        )
    )
end

return GameLayer
i