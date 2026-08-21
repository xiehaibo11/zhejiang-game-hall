local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.Module")

-- 小结束
function WinLostModule:onMsgResult(msgData)
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    self:dispatchEvent({ name = self.EVENT_WINLOST_RESULT})
    for i = 0 , CF.roomData:getChairs() - 1 do
        if msgData.nDianMo[i] > 0 then
            if msgData.nHuType == CF.GameDefine.endPlayerState.EPS_ROBKONG then
                self:getWinLostData():setLostEndType(i, CF.GameDefine.endPlayerState.EPS_ROBKONG)
            else
                self:getWinLostData():setLostEndType(i, CF.GameDefine.endPlayerState.EPS_HU)
            end
        elseif msgData.nDianMo[i] < 0 then
            if msgData.nHuType == CF.GameDefine.endPlayerState.EPS_DISCARD or msgData.nHuType == CF.GameDefine.endPlayerState.EPS_ROBKONG then
                self:getWinLostData():setLostEndType(i, CF.GameDefine.endPlayerState.EPS_DISCARD)
            end
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
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

return WinLostModule