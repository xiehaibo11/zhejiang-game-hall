local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:onMsgEndType(msgData)
    -- 设置点炮玩家
    local winLostData = self:getWinLostData()
    if msgData.sEndType == CF.GameDefine.HU_TYPE.TAKE_OTHER then
        winLostData:setLostEndType(msgData.sSeat, msgData.sEndType)
    end
    WinLostModule.super.onMsgEndType(self, msgData)
end

function WinLostModule:needShowShuffleButton(isCutCard)
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    --大结束
    if playCount == maxPlayCount then
        return false
    end
    if CF.roomData:getIsGameOver() then 
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

return WinLostModule9