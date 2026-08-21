local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return true
end

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return true
end

function ConfigData:huMahAloneShow()
	return false
end

return ConfigData