local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

function ConfigData:handNeedSort()
    return false
end

function ConfigData:huMahAloneShow()
	return false
end

function ConfigData:needShowGodOfWealthAni()
    return true
end

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return true
end

function ConfigData:showOthersActionInPlayBack()
    return true
end

return ConfigData