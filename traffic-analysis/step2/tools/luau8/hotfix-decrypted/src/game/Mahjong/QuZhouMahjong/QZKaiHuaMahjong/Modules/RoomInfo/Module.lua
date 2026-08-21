local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self,msgData)
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)

    local isDelColor = string.find( strGameRule, "缺一色")
    local isDelFa = string.find( strGameRule, "无中发")
    if isDelColor or isDelFa then
        local numId = CF.selfPlayerData:getNumberID()
        local areaId = CF.selfPlayerData:getBrandID()
        local identfity = areaId .. numId
        local key = CF.roomData:getGameID() .. identfity

        local userDefault = cc.UserDefault:getInstance()
        if userDefault:getBoolForKey(key, true) then
            local str
            if isDelColor and isDelFa then
                str = "请注意本房间玩法为缺一色、无中发"
            elseif isDelColor then
                str = "请注意本房间玩法为缺一色"
            else
                str = "请注意本房间玩法为无中发"
            end
            CF.TipTool.showToast(str)
            userDefault:setBoolForKey(key, false)
        end
    end
end


return RoomInfoModule�