 local SettingData = CF.gameClass("SettingData", "game.Mahjong.BasicMahjong.Data.SettingData")

--是否显示额外的牌花数字,逻辑各自子类重写
function SettingData:isShowFlowerNumber()
    local isShowNumberWordType = 1
    return self:getWordType() == isShowNumberWordType
end

return SettingData?