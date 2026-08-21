local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    --SO比赛场下发的规则里面有"/"开头,这里处理下
    if string.sub( strGameRule, 1, 1) == "/" then
        strGameRule = string.sub( strGameRule, 2)
    end
    CF.roomData:setGameRule(strGameRule)
end


return RoomInfoModule