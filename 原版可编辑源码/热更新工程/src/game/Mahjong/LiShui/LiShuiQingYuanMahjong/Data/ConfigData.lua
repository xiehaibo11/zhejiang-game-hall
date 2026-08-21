local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.LiShui.LiShuiMahjongBase.Data.ConfigData")

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return true
end

function ConfigData:getIsShowLaoZhuang()
    return true
end

return ConfigData