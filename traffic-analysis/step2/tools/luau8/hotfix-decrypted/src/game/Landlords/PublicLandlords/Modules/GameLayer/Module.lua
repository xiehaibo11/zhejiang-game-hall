local GameModule = CF.gameClass("GameModule", "game.Landlords.BaseLandlords.Modules.GameLayer.Module")

-- 抢地主类型
function GameModule:onMsgRobLandlordInfo(msgData)
    local landlordType = msgData.nLandlordType
    if msgData.nRobLandlordRateCnt == 3 then
        self._gameData:setLandlordStatus(1)
    end
    self._gameData:setLandlordType(landlordType)

    -- 如果是广播抢地主模式的则只读取模式,不显示UI
    if msgData.isSendAllSign then
        return
    end

    local force = msgData.bForceRobLandLord
    local score = 0
    if landlordType == 0 then -- 叫分
        if msgData.nRobLandlordRateCnt > 0 then
            score = msgData.nRobLandlordRate[1] -1
        end
    end
    local isRob = (msgData.nRobLandlordRateCnt < 3)
    -- 显示界面
    self:dispatchEvent({ name = self.EVENT_SHOW_ROB_LANDLORDS_VIEW, msg = { type = landlordType, score = score, show = true, force = force, isRob = isRob} })
end

return GameModule


�