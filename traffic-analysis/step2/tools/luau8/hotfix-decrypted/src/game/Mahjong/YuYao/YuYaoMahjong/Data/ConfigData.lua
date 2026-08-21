local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return true
end
--显示牢庄
function ConfigData:getIsShowLaoZhuang()
    return true
end
--听牌设置
function ConfigData:haveTing()
    return true
end
--用于小结束上的麻将子展示方式
function ConfigData:huMahAloneShow()
    return false
end
return ConfigData�