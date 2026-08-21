local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._teaBigWinStyleRule = {}   --游戏规则字段
    self._isShowLaoZhuang = false   --是否显示牢庄
end

function GameData:getTeaBigWinStyleRule()
    return self._teaBigWinStyleRule
end

function GameData:setTeaBigWinStyleRule(ruleTable)
    self._teaBigWinStyleRule = ruleTable
end

function GameData:setIsShowLaoZhuang(isShow)
    self._isShowLaoZhuang = isShow
end

function GameData:getIsShowLaoZhuang()
    return self._isShowLaoZhuang
end

return GameData