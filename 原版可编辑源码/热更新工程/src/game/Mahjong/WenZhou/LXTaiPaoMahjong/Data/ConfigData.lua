local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.WenZhou.WenZhouMahjongBase.Data.ConfigData")

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return false
end

function ConfigData:haveTing()
    return true
end

function ConfigData:handNeedSort()
    return true
end

return ConfigData