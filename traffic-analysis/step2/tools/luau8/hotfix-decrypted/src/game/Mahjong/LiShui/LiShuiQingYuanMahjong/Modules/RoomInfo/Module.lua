local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self,msgData)
    local strGameRule = un.StringUtils.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    if string.find( strGameRule, "缺一色") then
        local numId = CF.selfPlayerData:getNumberID()
        local areaId = CF.selfPlayerData:getBrandID()
        local identfity = areaId .. numId
        local key = CF.roomData:getGameID() .. identfity

        local userDefault = cc.UserDefault:getInstance()
        if userDefault:getBoolForKey(key, true) then
            CF.TipTool.showToast("请注意本房间玩法为缺一色")
            userDefault:setBoolForKey(key, false)
        end
    end
end


return RoomInfoModuleb