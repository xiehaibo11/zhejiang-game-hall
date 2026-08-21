local RoomInfoView = CF.gameClass("RoomInfoView", "game.GameBase.Modules.RoomInfo.View")

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_GAME_MUT_CHANGED", callBack = "onGameMutChanged" }
    return proxyEvents
end

function RoomInfoView:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "winLost", NodeType = self.INFO_NODE_TYPE.TWO, KeyStr1 = "输", DefaultValueStr1 = "x1", KeyStr2 = "赢", DefaultValueStr2 = "x1", DefaultVisible = true}
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true},
        {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
        {Name = "winLost", NodeType = self.INFO_NODE_TYPE.TWO, KeyStr1 = "输", DefaultValueStr1 = "x1", KeyStr2 = "赢", DefaultValueStr2 = "x1", DefaultVisible = true}
    }
end

local NUM_PER_FRAME_TIME = 0.03
function RoomInfoView:onGameMutChanged(event)
    local msg = event.msg
    local winMut = msg.iWinTime
    local lostMut = msg.iLostTime
    self:setTwoInfoNodeValue("winLost", 2, "x" .. winMut)
    self:setTwoInfoNodeValue("winLost", 1, "x" .. lostMut)

    if msg.isPlayWin then
        local winText = self:getInfoNodeByName("winLost")._valueText2
        if winText then 
            winText:stopAllActions()
            local winMutAction1 = cc.Sequence:create(
                cc.ScaleTo:create(NUM_PER_FRAME_TIME * 13,1.5),
                cc.ScaleTo:create(NUM_PER_FRAME_TIME * 13,1))
            winText:runAction(winMutAction1)
        end
        local winMutTempleText = ccui.Text:create()
        :setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
        :setFontSize(30)
        :setColor(cc.c3b(236, 197, 123))
        :setAnchorPoint(0, 0.5)
        :setPosition(0, winText:getContentSize().height/2)
        :setString("x" .. winMut)
        :addTo(winText)
        local winMutAction2 = cc.Spawn:create(
            cc.ScaleTo:create(2 * NUM_PER_FRAME_TIME * 13,4),
            cc.FadeOut:create(2 * NUM_PER_FRAME_TIME * 13),
            cc.RemoveSelf:create())
        winMutTempleText:runAction(winMutAction2)
    end
end

return RoomInfoView�
