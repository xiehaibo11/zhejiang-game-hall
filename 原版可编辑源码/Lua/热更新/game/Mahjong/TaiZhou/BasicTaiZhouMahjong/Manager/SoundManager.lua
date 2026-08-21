local SoundManager = CF.gameClass("SoundManager", "game.Mahjong.BasicMahjong.Manager.SoundManager")

local PATH_MAHJONG = "res/audio/Mahjong/"
local FILE_SHENG_PAI_MP3 = "shengpai.mp3"

function SoundManager:playShengPaiSound()
    local path = PATH_MAHJONG .. "Sound/TZWenLing/" .. FILE_SHENG_PAI_MP3
    self:playEffect(path)
end

return SoundManager