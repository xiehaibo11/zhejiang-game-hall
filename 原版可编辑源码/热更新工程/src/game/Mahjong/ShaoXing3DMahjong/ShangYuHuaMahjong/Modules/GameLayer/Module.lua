local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShaoXing3DMahjong.ShaoXing3DBase.Modules.GameLayer.Module")

function GameModule:decodeConfig(luaConfig)
    local strArray = ""
    local needExtend = false

    local nBaseFlower = self:getLuaIntValue(luaConfig, "nBaseFlower")
    if nBaseFlower > 0 then
        strArray = strArray .. " 底花:" .. nBaseFlower .. " "
    end

    local bBaoZiFanBei = self:getLuaIntValue(luaConfig, "bBaoZiFanBei")
    if bBaoZiFanBei == 1 then
        strArray = strArray .. " 豹子翻倍 "
        needExtend = true
    end

    local bChaoYiJinShi = self:getLuaIntValue(luaConfig, "bChaoYiJinShi")
    if bChaoYiJinShi == 1 then
        strArray = strArray .. " 超一进十 "
        needExtend = true
    end

    local bForbiddenChi = self:getLuaIntValue(luaConfig, "bForbiddenChi")
    if bForbiddenChi == 1 then
        strArray = strArray .. " 不能吃 "
        needExtend = true
    end

    local bDelColor = self:getLuaStrValue(luaConfig, "DelColor")
    if bDelColor == "'1'" then
        strArray = strArray .. " 缺一色 "
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

return GameModule