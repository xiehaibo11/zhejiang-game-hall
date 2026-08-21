local GameManager = CF.gameClass("ShengZhouMahjongManager", "game.Mahjong.BasicMahjong.GameManager")

function GameManager:getProxyEvents()
    local proxyEvents = GameManager.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.netEngine, eventName = CF.ToolMProtocol.RespLeaveRoom.event_key, callBack = "onRespLeaveRoomSZ"}
    return proxyEvents
end

--比赛场领队强制解散
function GameManager:onRespLeaveRoomSZ(event)
    local respLeaveRoom = CF.ToolMProtocol.RespLeaveRoom:new()
    respLeaveRoom:bistream(event.msg.buff, event.msg.len)
    --当前游戏局数，如果已经开始游戏，不做领队强制站起提示
    local currGameCnt = CF.roomData:getPlayCount()
    if currGameCnt == 0 then
        if CF.teaHouseManager:isInTeaHouse() then
            if respLeaveRoom.type == CF.ToolMProtocol.RespLeaveRoom.LEAVEROOMTYPE.KICK then
                local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK})
                tipLayer:setTouchBackGround(false)
                tipLayer:setText("你已被领队强制站起！")
                tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.OK,
                    function()
                        self:leaveGame()
                    end
                )
                tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.CLOSE,
                    function()
                        self:leaveGame()
                    end
                )
            end
        end
    end
end

function GameManager:onRespLeaveRoom(event)
    local respLeaveRoom = CF.GameMProtocol.RespLeaveRoom:new()
    respLeaveRoom:bistream(event.msg.buff, event.msg.len)
    --当前游戏局数，如果已经开始游戏，不做领队强制站起提示
    local currGameCnt = CF.roomData:getPlayCount()
    if currGameCnt == 0 then
        if CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM then
            if respLeaveRoom.type == CF.GameMProtocol.RespLeaveRoom.LEAVEROOMTYPE.KICK then
                if CF.popLayerManager:getLayer("TipLayer") then
                    return
                end
                local tipLayer = CF.TipTool.showPopLayer("TipLayer")
                tipLayer:setTouchBackGround(false)
                tipLayer:setText('您已被房主请出房间')
                tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.OK,
                    function()
                        self:leaveGame()
                    end
                )
                tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function()
                    self:leaveGame()
                end)
            end
        end
    end
end

function GameManager:onRelink()
    CF.msgManager:sendPlayerConnect()
    CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_CLEAR_SANTAN_HINT })
end

return GameManager