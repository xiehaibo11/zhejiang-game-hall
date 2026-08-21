local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Data.ConfigData")

--显示承包圈动画
function ConfigData:needShowChengBaoQuanAni()
    return false
end

function ConfigData:haveTing()
    return true
end

return ConfigData