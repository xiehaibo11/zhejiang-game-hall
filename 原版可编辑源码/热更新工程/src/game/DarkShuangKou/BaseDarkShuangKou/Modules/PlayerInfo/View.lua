local PlayerInfoView = CF.gameClass("PlayerInfoView", CF.gameScriptRootPath .. ".GameBase.Modules.PlayerInfo.View")

function PlayerInfoView:getProxyEvents()
    local eventTable = PlayerInfoView.super.getProxyEvents(self) or {}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_PLAYER_INFO", callBack = "onClearPlayerInfo"}
    return eventTable
end

function PlayerInfoView:onClearPlayerInfo()
    self:removePlayerInfo()
end

function PlayerInfoView:onEventChanged()
    local playerData = self._playerData
    if playerData then
        local url = playerData:getAvatarUrl()
        self._nickName:setString(playerData:getNickName())
        self._id:setVisible(false)
        self._ip:setString("网络地址:" .. playerData:getIPName())
        self._goldText:setPositionY(621.65)
        self._goldText:setString("金币:" .. playerData:getPlayTypeScore())
        self:updateImg(url)

        self:updateGPS()
        self:updateHeadFrame()
    end
    local showRobotID = cc.UserDefault:getInstance():getBoolForKey("KW_TEST_DARKSHUANGKOU_SHOW_ROBOT_ID", false)
    if showRobotID == true then
        self._id:setVisible(true)
        self._id:setString("序号:" .. playerData:getNumberID())
        self._id:setPositionY(621.65)
        self._goldText:setPositionY(575.87)
    end
end

return PlayerInfoView
