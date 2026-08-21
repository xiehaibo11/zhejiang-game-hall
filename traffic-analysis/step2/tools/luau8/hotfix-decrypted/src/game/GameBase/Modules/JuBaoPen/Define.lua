local JuBaoPenDefine = CF.gameClass("JuBaoPenDefine")

JuBaoPenDefine.ITEM_COUNT = 16
JuBaoPenDefine.MAX_LEVEL = 10

JuBaoPenDefine.TreasureActType = {
    TATGet = 0, -- 获取
    TATOnce = 1, -- 单次
    TATFive = 2, -- 5连 关闭重新打开界面传这个
    TATContinue = 3, -- 5连续抽奖 从第二次开始 传这个 
    TATClean = 4, -- 清空
}

return JuBaoPenDefine�