local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return true
end

function ConfigData:showOthersActionInPlayBack()
    return true
end

function ConfigData:handNeedSort()
    return false
end

return ConfigData