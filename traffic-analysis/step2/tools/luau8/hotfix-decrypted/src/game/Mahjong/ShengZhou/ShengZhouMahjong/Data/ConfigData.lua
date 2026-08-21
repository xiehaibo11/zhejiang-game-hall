local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return true
end

function ConfigData:getHaveMahlayer3D()
    return true
end

--用于小结束上的麻将子展示方式
function ConfigData:huMahAloneShow()
    return false
end

return ConfigData�