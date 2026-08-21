local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.WenZhou.WenZhouMahjongBase.Data.ConfigData")

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return true
end

function ConfigData:haveTing()
    return true
end

function ConfigData:huMahAloneShow()
	return false
end

return ConfigData