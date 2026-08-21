local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Data.ConfigData")

--有没有腊子胡
function ConfigData:isHaveLaZiHu()
    return true
end

--有没有生牌阶段
function ConfigData:isHaveShengPaiJieDuan()
    return true
end

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return false
end

return ConfigData