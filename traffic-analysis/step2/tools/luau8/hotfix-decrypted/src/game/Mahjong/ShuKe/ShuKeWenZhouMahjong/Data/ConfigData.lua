local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.ShuKe.ShuKeMahjongBase.Data.ConfigData")

function ConfigData:handNeedSort()
    return true
end

function ConfigData:huMahAloneShow()
	return true
end

function ConfigData:haveTing()
    return true
end

return ConfigData
*