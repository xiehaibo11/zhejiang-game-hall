local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
	WinLostView.super.createChildren(self)
	--显示回放的时间
    if CF.roomData:isPlayBack() then
        local systime = CF.game:getModule("PlayBack"):getJustRecordGameMsgFirstTime()
        self._timeLabel:setString(os.date("%Y-%m-%d %H:%M:%S", systime))
    end
end

function WinLostView:onUpdateUI()
    WinLostView.super.onUpdateUI(self)
    local isFinal = CF.roomData:getIsGameOver()
    self._checkTableBtn:setVisible(not isFinal)
end

return WinLostViewl