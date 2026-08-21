local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

WinLostModule.EVENT_WINLOST_RESULT = "EVENT_WINLOST_RESULT"

-- 小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    CF.game:getModule("WinLost"):getWinLostData():setFengDingFlag(msgData.bFengDing)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huMahID = msgData.nDanFang or 0
    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        if gameData:isHuSeat(i) then
            if CF.roomData and CF.roomData:getIsSeer() then
                if (#mahIDs - 2 + 3) % 3 == 0 then
                    for k = 1,#mahIDs do
                        if mahIDs[k] == huMahID then
                            table.remove(mahIDs, k)
                            break
                        end
                    end
                end
            end
            gameData:setHuMahsData(i, mahIDs, huMahID)
        else
            gameData:setHuMahsData(i, mahIDs, 0)
        end
        if msgData.nPlayerState[i] ~= CF.GameDefine.endPlayerState.EPS_NULL then
            self:getWinLostData():setLostEndType(i, msgData.nPlayerState[i])
        end
    end
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():setDelayTime(1)
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():onMsgResult(msgData)
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

function WinLostModule:showSettleWindow(isCenter)
    WinLostModule.super.showSettleWindow(self, isCenter)
    self:dispatchEvent({ name = self.EVENT_WINLOST_RESULT})
    if CF.roomData:isGoldRoom() and CF.configData:isShowSettleGoldWindow() then
        --隐藏生牌阶段信息
        CF.game:getModule("GameLayer"):showShengPaiCount(false)
    end
end


return WinLostModule