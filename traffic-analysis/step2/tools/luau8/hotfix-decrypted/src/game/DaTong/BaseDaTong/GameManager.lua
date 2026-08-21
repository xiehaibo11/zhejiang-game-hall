local GameManager = CF.gameClass("DaTongManager", "game.GameBase.GameManager")

XH.___GameLoad_____ = true

function GameManager:leaveGame(canBack)
	if CF.soundManager then
		CF.soundManager:stopMusic()
		CF.soundManager:resumeMusicLobby()
	end
	GameManager.super.leaveGame(self,canBack)
end

return GameManagerC