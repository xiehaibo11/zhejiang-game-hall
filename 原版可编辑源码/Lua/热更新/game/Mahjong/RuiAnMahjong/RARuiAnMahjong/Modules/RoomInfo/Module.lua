local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self,msgData)
    local strGameRule = CF.roomData:getGameRule()
    if string.find(strGameRule ,"防恶意解散") then
        CF.game:getModule("Dismiss"):setPreventSpitefulDismiss(true)
    else
        CF.game:getModule("Dismiss"):setPreventSpitefulDismiss(false)
    end
end


return RoomInfoModule