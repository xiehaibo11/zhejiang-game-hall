local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShaoXing3DMahjong.ShaoXing3DBase.Modules.GameLayer.Module")

function GameModule:decodeConfig(luaConfig)
    local strArray = ""
    local needExtend = false

    local nFengDing = self:getLuaIntValue(luaConfig, "FengDing")
    if nFengDing == 3 then
        strArray = strArray .. " 3番封顶 "
    elseif nFengDing == 4 then
        strArray = strArray .. " 4番封顶 "
    elseif nFengDing == 0 then
        strArray = strArray .. " 无限番 "
    end

    local nBaseFlower = self:getLuaIntValue(luaConfig, "nBaseFlower")
    if nBaseFlower > 0 then
        strArray = strArray .. " 底花:" .. nBaseFlower .. " "
    end

    nBaseFlower = self:getLuaIntValue(luaConfig, "DaDiaoMoCai")
    if nBaseFlower > 0 then
        strArray = strArray .. " 大吊摸财 "
    end

    nBaseFlower = self:getLuaIntValue(luaConfig, "DaDiaoZhuoChong")
    if nBaseFlower > 0 then
        strArray = strArray .. " 大吊摸铳 "
    end

    local bForbiddenChi = self:getLuaIntValue(luaConfig, "bForbiddenChi")
    if bForbiddenChi == 1 then
        strArray = strArray .. " 不能吃 "
        needExtend = true
    end

    local bChaoYiJinShi = self:getLuaIntValue(luaConfig, "bChaoYiJinShi")
    if bChaoYiJinShi == 1 then
        strArray = strArray .. " 超一进十 "
        needExtend = true
    end

    local bPrevCheat = self:getLuaIntValue(luaConfig, "PrevCheat")
    if bPrevCheat == 1 then
        strArray = strArray .. " 防作弊 "
    end

    local strPayType = self:getLuaStrValue(luaConfig, "PayType")
    if strPayType == "'1'" then
        strArray = strArray .. " 平摊支付 "
    elseif strPayType == "'0'" then
        if CF.teaHouseManager:isInTeaHouse() then
            strArray = strArray .. " 圈主支付 "
        else
            strArray = strArray .. " 房主支付 "
        end
    end

    local nAutoTrust = self:getLuaIntValue(luaConfig, "nTrustTime")
    if tonumber(nAutoTrust) > 0 then
        strArray = strArray .. " " .. nAutoTrust .. "秒超时托管 "
    end

    print("rule ==" .. strArray)
    return strArray, needExtend
end

return GameModule�