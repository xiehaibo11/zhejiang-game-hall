local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:onMsgResult(msgData)
    local tblEndStrData = CF.game:getModule("GameLayer"):unserialize(msgData.strLuaData)
    for i = 1, #msgData.nScore do
        self._nWinLost[i-1] = msgData.nScore[i]
        if msgData.strHuTypeTitle ~= nil then
            self._fanNames[i-1] = msgData.strHuTypeTitle[i] .. " " .. tblEndStrData.extendScoreTitle[i]
        end
    end
end

return WinLostData