local CellReqPlayerPosition = class("CellReqPlayerPosition", XH.ReqProtocol)

function CellReqPlayerPosition:ctor()
    CellReqPlayerPosition.super.ctor(self)
    self._playerPlace = {}
end

function CellReqPlayerPosition:start(gameID, areaTypeID, lobbyID, srsGroupID, timeoutTime)
    if CellReqPlayerPosition.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    local repPosition = XH.RoomProtocol.ReqPlayerPosition:new()
    repPosition.gameid = gameID
    repPosition.areatypeid = areaTypeID or 0
    repPosition.lobbyid = lobbyID or 0

    self:sendMsg(repPosition, XH.RoomProtocol.RespPlayerPosition, srsGroupID, 0)
end

function CellReqPlayerPosition:onMsgReceive(msgData)
    local errorcode = msgData.errorcode
    print("PlayerPosition:errorcode:", errorcode)
    self._playerPlace = msgData.places
    --理论上这里只会有一个玩家位置信息，不会出现多个，之前是用table，不知道为啥，所以也做了一个table，在解释下后面为什么都是取[1]
    if errorcode == XH.RoomProtocol.ERRORCODE.SUCCESS then
        self:success(self._playerPlace)
    end
end

return CellReqPlayerPosition