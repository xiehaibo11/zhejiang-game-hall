local ReqPlayerPosition = class("ReqPlayerPosition", XH.ReqProtocol)
local askID = 0
function ReqPlayerPosition:ctor()
    ReqPlayerPosition.super.ctor(self)
    self._playerPlace = {}
    self._askID = 0
end

function ReqPlayerPosition:start(gameID, areaTypeID, lobbyID, srsGroupID, timeoutTime)
    if ReqPlayerPosition.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    askID = askID + 1
    self._askID = askID

    local repPosition = XH.RoomProtocol.ReqPlayerPosition:new()
    repPosition.gameid = gameID
    repPosition.areatypeid = areaTypeID or 0
    repPosition.lobbyid = lobbyID or 0
    repPosition.askid = askID
    
    self:sendMsg(repPosition, XH.RoomProtocol.RespPlayerPosition, srsGroupID, self:reqAppID())
end

function ReqPlayerPosition:reqAppID()
    return 0
end

function ReqPlayerPosition:onMsgReceive(msgData)
    if self._askID ~= msgData.askid then 
        return 
    end
    local errorcode = msgData.errorcode
    print("PlayerPosition:errorcode:", errorcode)
    self._playerPlace = msgData.places
    --理论上这里只会有一个玩家位置信息，不会出现多个，之前是用table，不知道为啥，所以也做了一个table，在解释下后面为什么都是取[1]
    if errorcode == XH.RoomProtocol.ERRORCODE.SUCCESS then
        self:success(self._playerPlace) 
    end
end

return ReqPlayerPosition�