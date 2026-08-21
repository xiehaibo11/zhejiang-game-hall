local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

function ConfigData:haveTing()
    return true
end

--配置听牌-可以胡的信息面板中剩余张数，是否需要客户端自行计算
function ConfigData:needGetSurplusMahCount()
    return false
end

function ConfigData:getHaveMahlayer3D()
    return true
end

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return true
end

return ConfigData�