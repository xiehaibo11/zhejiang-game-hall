local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

function PlayerModule:onMsgAvatarUrl(msgData)
end

function PlayerModule:onMsgPlayerEnter(msgData)
    PlayerModule.super.onMsgPlayerEnter(self, msgData)
    if CF.roomData:getChairs() == 2 then
        CF.settingData:setHaveTing(true) --默认开启听牌
    end
end

return PlayerModule