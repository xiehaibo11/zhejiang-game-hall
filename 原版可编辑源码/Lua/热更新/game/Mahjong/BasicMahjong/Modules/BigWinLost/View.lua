local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")

-- local KW_IMG_BANKER = "KW_IMG_BANKER"

function BigWinLostUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/BigWinLost.csb"
end

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
end

function BigWinLostUI:refreshSinglePlayerInfo(seat, player, param)
    -- local playerUi = self:getPlayerItem(seat + 1)
    -- CF.UITool.setVisible(playerUi, KW_IMG_BANKER, seat == param.bankerSeat)
    BigWinLostUI.super.refreshSinglePlayerInfo(self, seat, player, param)
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)

    self:setPlayerScoreStr(playerUi, param.scoreDes[seat])
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])
end

function BigWinLostUI:initContinueUI()
    BigWinLostUI.super.initContinueUI(self)
	local canCantinue = CF.roomData:isCanContinue() and (not CF.roomData:isPlayBack() and not CF.roomData:getIsSeer())
    self:showContinueBtn(canCantinue)
    self:showContinueAni(canCantinue)
end

return BigWinLostUI
