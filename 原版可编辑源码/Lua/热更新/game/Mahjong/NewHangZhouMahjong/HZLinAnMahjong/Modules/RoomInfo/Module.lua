local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
	RoomInfoModule.super.onMsgGameRule(self, msgData)
	local strGameRule = CF.roomData:getGameRule()
	if string.find(strGameRule ,"不烧毛") then
        -- 40片玩法
        CF.game:getModule("GameLayer"):getGameData():setShaoMao(false)
    else
        CF.game:getModule("GameLayer"):getGameData():setShaoMao(true)
    end
end

-- 局数信息
function RoomInfoModule:onMsgPlayCount(msgData)
    RoomInfoModule.super.onMsgPlayCount(self, msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    gameData:setIsShowQuanFeng(true)
    if msgData.playCount > 0 then
        local nQuanfeng = msgData.playCount % 4
        gameData:setQuanFengNum(nQuanfeng)
        CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_MAHLAYER_SET_QUANFENG})
        CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_ROOM_INFO_SET_QUANFENG})
    end
end

return RoomInfoModule