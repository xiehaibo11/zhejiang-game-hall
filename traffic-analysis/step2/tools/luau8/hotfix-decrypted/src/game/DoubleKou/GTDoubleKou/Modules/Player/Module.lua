local PlayerModule = CF.gameClass("GameModule", "game.DoubleKou.BaseDoubleKou.Modules.Player.Module")
local areaConfig = require("app.Config.AreaConfig")

PlayerModule.EVENT_HIDE_BASE_SCORE = "EVENT_HIDE_BASE_SCORE"

PlayerModule.processedMsgData = {}  -- 存储已处理的 msgData

function PlayerModule:onMsgPlayerData(msgData)
    msgData.szNickname2 = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.szNickname)
    local msgPlayerData = msgData
    local playerData = CF.gameRequire("Data.PlayerData").new()
    playerData:initFromServerData(msgPlayerData)
    CF.roomData:addPlayerData(playerData)
    if CF.selfPlayerData:getBrandID() == playerData:getBrandID()
    and CF.selfPlayerData:getNumberID() == playerData:getNumberID() then
        if CF.roomData:isGoldRoom() and CF.selfPlayerData:getSR() ~= playerData:getPlayTypeScore() then 
            CF.getLobbyModule("Guide"):flushGoldCoin()
        end 
        CF.msgManager:setSelfSeat(playerData:getSeat())
        -- 获取财运信息
        if not self._initCaiYunInfo then
            CF.game:getModule("CaiYunPropNew"):initCaiYunInfo(true)
        end
        self._initCaiYunInfo = true
    end
    -- 判断是浙江包地区游戏
    for _, v in pairs(areaConfig) do
        local areaID = v.areaID
        if areaID == playerData:getBrandID() then
            CF.game:getModule("CaiYunProp"):reloadGetPropsCount({ playerData:getNumberID() })
        end
    end
end

function PlayerModule:onMsgPlayerEnter(msgData)
    PlayerModule.super.onMsgPlayerEnter(self, msgData)
    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID, msgPlayerEnter.nNumberID)
    if playerData and playerData:getSeat() == CF.roomData:getSelfSeat() then
        self:dispatchEvent({ name = self.EVENT_HIDE_BASE_SCORE })
    end
end

function PlayerModule:onMsgPlayerLeave(msgData)
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID, msgData.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    local seatId = playerData:getSeat()
    if seatId == CF.roomData:getSelfSeat() then
        local selfPlayerData = CF.roomData:getSelfPlayerData()
        -- 已准备玩家如果其他玩家离开时，重新匹配
        if CF.roomData:is220Model() and selfPlayerData and selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psReady then
            CF.msgManager:sendPlayerAct(CF.GameDefine.ENUM_PLAYER_ACT.CHANGESEAT)
        end
        CF.roomData:clearAllPlayerData(true)
    else
        CF.roomData:removePlayerData(seatId)
        self:dispatchEvent( { name = self.EVENT_PLAYER_LEAVE , msg = {playerData = playerData}})
    end
end

return PlayerModule%