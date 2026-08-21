local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

--显示飘财动画
function ConfigData:needShowGodOfWealthAni()
    return true
end
--显示承包圈动画
function ConfigData:needShowChengBaoQuanAni()
    return false
end
--用于小结束上的麻将子展示方式
function ConfigData:huMahAloneShow()
    return false
end

return ConfigData