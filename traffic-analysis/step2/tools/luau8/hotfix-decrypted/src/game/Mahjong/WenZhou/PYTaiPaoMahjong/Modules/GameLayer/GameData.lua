local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._isShaZhu = false
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)

    self._isShaZhu = false
end

function GameData:setIsShaZhu(isShaZhu)
    self._isShaZhu = isShaZhu
end

function GameData:getIsShaZhu()
    return self._isShaZhu
end

function GameData:getFourFlowersType(seat)
    local handMahs = self:getHandMahData(seat)
    local tmpHandMahs = clone(handMahs)

    local takeMah = self:getHandDfData(seat)
    if takeMah ~= CF.GameDefine.MAH_VALUE.NONE then
        table.insert(tmpHandMahs, takeMah)
    end
    
    local meiCount = 0
    local chunCount = 0
    local baiBanCount = 0
    for i = 1,#tmpHandMahs do
        if tmpHandMahs[i] >= CF.GameDefine.MAH_VALUE.HUA_MEI and tmpHandMahs[i] <= CF.GameDefine.MAH_VALUE.HUA_JU  then
            meiCount = meiCount + 1
        elseif tmpHandMahs[i] >= CF.GameDefine.MAH_VALUE.HUA_CHUN and tmpHandMahs[i] <= CF.GameDefine.MAH_VALUE.HUA_DONG  then
            chunCount = chunCount + 1
        elseif tmpHandMahs[i] == CF.GameDefine.MAH_VALUE.JIAN_BAI then
            baiBanCount = baiBanCount + 1
        end
    end
    
    if baiBanCount == 4 then
        return CF.GameDefine.KW_HUA_TYPE.BAI_BAN
    elseif meiCount == 4 then
        return CF.GameDefine.KW_HUA_TYPE.MEI_HUA
    elseif chunCount == 4 then
        return CF.GameDefine.KW_HUA_TYPE.CHUN_HUA
    end
    return CF.GameDefine.KW_HUA_TYPE.HUA_NONE
end

return GameDatau