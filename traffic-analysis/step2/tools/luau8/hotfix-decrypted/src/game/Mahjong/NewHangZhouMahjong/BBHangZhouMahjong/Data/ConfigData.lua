local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Data.ConfigData")

function ConfigData:getIsShowLaoZhuang()
    return true
end

function ConfigData:huMahAloneShow()
	return false
end

function ConfigData:haveTing()
    return true
end

return ConfigData?