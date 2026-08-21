local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

function ConfigData:haveTing()
    return true
end

--是否仅本地洗牌
function ConfigData:getIsLocalShuffle()
    return true
end

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return true
end

function ConfigData:showOthersActionInPlayBack()
    return true
end

--有没有腊子胡
function ConfigData:isHaveLaZiHu()
    return false
end

--有没有买马
function ConfigData:isHaveMaiMa()
    return false
end

--有没有买底
function ConfigData:isHaveMaiDi()
    return false
end

--有没有生牌阶段
function ConfigData:isHaveShengPaiJieDuan()
    return false
end

return ConfigData