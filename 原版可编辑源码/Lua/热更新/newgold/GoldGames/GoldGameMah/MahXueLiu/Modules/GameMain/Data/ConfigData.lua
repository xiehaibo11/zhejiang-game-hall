local ConfigData = NG.GAME.gameClass("CardLogicData", NG.ModuleBase)

function ConfigData:haveTing()
    return false
end

function ConfigData:getHaveMahlayer3D()
    return false
end

function ConfigData:showOthersActionInPlayBack()
    return true
end

function ConfigData:getIsShowLaoZhuang()
    return false
end

function ConfigData:getHaveFlower()
    return true
end

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return false
end

function ConfigData:canChowPungKongJoker()
    return false
end

function ConfigData:useSpecialHuAni()
    return false
end

--游戏规则项
function ConfigData:isGuoGangBuGang()
    return false
end

--用于小结束上的麻将子展示方式
function ConfigData:handNeedSort()
    return true
end

--用于小结束上的麻将子展示方式
function ConfigData:huMahAloneShow()
    return true
end

--配置听牌-可以胡的信息面板中剩余张数，是否需要客户端自行计算
function ConfigData:needGetSurplusMahCount()
    return true
end

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return false
end

--是否仅本地洗牌
function ConfigData:getIsLocalShuffle()
    return true
end

return ConfigData