local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return true
end

function ConfigData:huMahAloneShow()
	return false
end

--用于小结束上的麻将子展示方式
function ConfigData:handNeedSort()
    return false
end

return ConfigData~