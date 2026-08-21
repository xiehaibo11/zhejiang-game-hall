local WinLostData = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")


function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._gameStateInfo = {}         -- 杠信息
    self._playGameMode = 0  --打圈还是打局
    self._caiShenJiang = {}   -- 财神奖分
end

function WinLostData:setCaiShenJiangData(seat,data)
    self._caiShenJiang[seat] = data
end

function WinLostData:getCaiShenJiangData(seat)
    return self._caiShenJiang[seat] or ""
end

function WinLostData:onMsgFanCnt(msgData)
	WinLostData.super.onMsgFanCnt(self, msgData)
    self:setIsShowFan(false)
end

function WinLostData:setGameStateInfo(seat,state)
    if state == 1 then
        self._gameStateInfo[seat] = " 起手口"
    elseif state == 2 then
        self._gameStateInfo[seat] = " 十三不搭"
    end
end

function WinLostData:getGameStateInfo(seat)
    return self._gameStateInfo[seat] or ""
end

return WinLostData�