local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

-- 规则信息
function RoomInfoModule:onMsgGameRule(msgData)
    local msgGameRule = msgData
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgGameRule.strGameRule)
    if string.find(strGameRule, "自动准备") ~= nil then
        self:dispatchEvent({ name = self.EVENT_AUTO_READY })
    end
    -- local tGameName = {
        -- [30356] = "定海玩法",
        -- [30450] = "定海玩法",
        -- [30357] = "沈家门玩法",
        -- [30451] = "沈家门玩法",
        -- [30358] = "万字玩法",
        -- [30371] = "岱山玩法",
        -- [30372] = "推倒胡玩法",
        -- [30382] = "嵊泗玩法"
    -- }
    -- local gameName = tGameName[CF.roomData:getGameID()] or ""
    CF.roomData:setGameRule(strGameRule)
end

function RoomInfoModule:onMsgPlayCount(msgData)
    RoomInfoModule.super.onMsgPlayCount(self, msgData)
    CF.game:getModule("GameLayer"):getGameData():setMsgPlayCount(msgData)
end

return RoomInfoModule