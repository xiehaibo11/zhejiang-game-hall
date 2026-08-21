local SoundManager = CF.gameClass("SoundManager", "game.Mahjong.BasicMahjong.Manager.SoundManager")


function SoundManager:playSoundMahAction(actionIndex, bMan ,gameID)
    if actionIndex and type(actionIndex) == "string" and actionIndex == "flower" then
        gameID = CF.roomData:getGameID()
    end
    SoundManager.super.playSoundMahAction(self, actionIndex, bMan ,gameID)
end

return SoundManager