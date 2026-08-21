local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.Player.View")

function PlayerView:getProxyEvents()
    local proxyEvents = PlayerView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = CF.game:getModule("GameLayer").EVENT_EXCHANGE_SEAT, callBack = "onExchangeSeat"}
    return proxyEvents
end

function PlayerView:onExchangeSeat(event)
    local msg = event.msg
    local exchangeData = msg.exchangeData
    local callback = msg.callback
    local len = #exchangeData
    dump(exchangeData, "lsh---------------onExchangeSeat")
    if not exchangeData or len == 0 then return end


    local endVisible = {}
    local playerNode = {}
    for i = 1,len do
        local tempHeadArr = clone(self._playerHeads)
        local player = CF.roomData:getPlayerDataBySeatId(exchangeData[i][1])
        endVisible[exchangeData[i][2]] = player and true or false

        local fromSeat = CF.roomData:seatToLocal(exchangeData[i][1])
        local toSeat = CF.roomData:seatToLocal(exchangeData[i][2])
        local fromNode = tempHeadArr[fromSeat]
        local toNode = tempHeadArr[toSeat]
        if not fromNode or not toNode then
            return 
        end
        playerNode[i] = fromNode:getChildByName("Node"):getChildByName("KW_PANEL_CONTENT"):clone()

        local fromPos = cc.p(fromNode:getPositionX(), fromNode:getPositionY())
        local toPos = cc.p(toNode:getPositionX(), toNode:getPositionY())
        local toWorldPos = toNode:convertToWorldSpace(toPos)
        local toFromPos = fromNode:convertToNodeSpace(toWorldPos)

        playerNode[i]:setPosition(fromPos)
        playerNode[i]:setVisible(true)
        fromNode:getParent():addChild(playerNode[i])
        fromNode:setVisible(false)
        toNode:setVisible(toNode:isVisible())
        playerNode[i]:runAction(
            cc.Sequence:create(
                cc.CallFunc:create(function()
                    toNode:setVisible(endVisible[exchangeData[i][2]] and true or false)
                end),
                cc.MoveTo:create(0.8, toFromPos),
                cc.CallFunc:create(function()
                    playerNode[i]:removeFromParent()
                end)
            )
        )
    end
    if callback then
        callback()
    end
end

function PlayerView:onPlayerListChanged(event)
    --for seat = 0, CF.roomData:getMaxPlayer() - 1 do
    --    local localSeat = CF.roomData:seatToLocal(seat)
    --    if localSeat <= 0 then return end
    --     --�Ƴ�
    --    if self._playerHeads and self._playerHeads[localSeat] then
    --        self._playerHeads[localSeat]:removeSelf()
    --        self._playerHeads[localSeat] = nil
    --    end
    --    --���
    --    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    --    if playerData then
    --        local PlayerHead = CF.gameRequire("Modules.Player.HeadNode")
    --        local playerHead = PlayerHead.new({seatId = seat})
    --        self["_head_panel_"..(localSeat)]:addChild(playerHead)
    --        self._playerHeads[localSeat] = playerHead
    --        local headPos = self:getHeadPosByLocalSeat(localSeat)
    --        playerHead:setPosition(headPos)
    --    end
    --end
    PlayerView.super.onPlayerListChanged(self,event)
end

return PlayerView