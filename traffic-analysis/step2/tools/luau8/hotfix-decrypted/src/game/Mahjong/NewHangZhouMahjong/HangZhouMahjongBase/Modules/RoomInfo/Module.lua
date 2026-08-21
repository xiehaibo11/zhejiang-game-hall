local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
	RoomInfoModule.super.onMsgGameRule(self, msgData)
	local strGameRule = CF.roomData:getGameRule()
	local gameData = CF.game:getModule("GameLayer"):getGameData()
	strGameRule = string.gsub(strGameRule, "AA支付", "玩家平摊")
    if CF.teaHouseManager:isInTeaHouse() then
        strGameRule = string.gsub(strGameRule, "房主", "圈主")
    end
    local isYouCaiBiKaoXiang = string.find(strGameRule, "有财必拷响") and true or false
    gameData:setIsYouCaiBiKaoXiang(isYouCaiBiKaoXiang)
    local isBaiBanCaiShen = string.find(strGameRule, "白板财神") and true or false
    gameData:setIsBaiBanCaishen(isBaiBanCaiShen)
    if string.find(strGameRule, "自动准备") then
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    end
    local reduceMahWallCount = 0
    if string.find(strGameRule, "无字牌") then
        reduceMahWallCount = reduceMahWallCount + 24
    end
    if string.find(strGameRule, "缺一门") then
        reduceMahWallCount = reduceMahWallCount + 36
    end
    CF.roomData:setGameRule(strGameRule)

    local trustTimeStr = string.match(strGameRule,"超时%d+秒托管")
    if trustTimeStr then
        local trustTimeNum = tonumber(string.match(trustTimeStr,"%d+"))
        if trustTimeNum > 0 then
            self._canSettingViewTrust = true
        end
    end
    self:checkShowTrustTips()
end

return RoomInfoModule-