local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_UPDATE_ROOM_INFO_EX = "EVENT_UPDATE_ROOM_INFO_EX"

function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = RoomInfoModule.super.onMsgGameRule(self, msgData)
    strGameRule = string.gsub(strGameRule, "AA支付", "平摊支付")
    CF.roomData:setGameRule(strGameRule)
    return strGameRule
end

function RoomInfoModule:onMsgPlayCount(msgData)
	RoomInfoModule.super.onMsgPlayCount(self, msgData)
	CF.roomData:setQuanCount(msgData.quanCount or 0)
	CF.roomData:setMaxQuanCount(msgData.maxQuanCount or 0)

	if msgData.laozhuangCount then
	    local laozhuangcnt = msgData.laozhuangCount or 0
	    if laozhuangcnt > 0 then
	        laozhuangcnt = laozhuangcnt-1
	    end
	    CF.roomData:setLaoZhuangNum(laozhuangcnt)
	end

	self:dispatchEvent({ name = self.EVENT_UPDATE_ROOM_INFO_EX })
end

return RoomInfoModule�