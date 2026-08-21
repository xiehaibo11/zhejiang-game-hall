local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.WenZhou.WenZhouMahjongBase.Data.ConfigData")

function ConfigData:haveTing()
    return true
end

--用于小结束上的麻将子展示方式
function ConfigData:huMahAloneShow()
    return false
end

return ConfigData
$