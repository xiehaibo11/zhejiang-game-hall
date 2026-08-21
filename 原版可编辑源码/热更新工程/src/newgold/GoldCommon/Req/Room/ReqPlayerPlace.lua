local ReqPlayerPosition = class("ReqPlayerPosition", XH.ReqProtocol)

function ReqPlayerPosition:ctor()
    ReqPlayerPosition.super.ctor(self)
    self._playerPlace = {}
end

function ReqPlayerPosition:start(gameID, srsGroupID, timeoutTime)
    if ReqPlayerPosition.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    
    local repPosition = NG.PlayerPlaceProcess.ReqPlayerPlace:new()
    repPosition.gameid = gameID
    repPosition.askid = os.time()
    self:sendMsg(repPosition, NG.PlayerPlaceProcess.RespPlayerPlace, srsGroupID, 0)
end

function ReqPlayerPosition:onMsgReceive(msgData)
    local errorcode = msgData.flag
    print("PlayerPlace:errorcode:", errorcode)
    dump(msgData)
    self._playerPlace = msgData.placeData
    --理论上这里只会有一个玩家位置信息，不会出现多个，之前是用table，不知道为啥，所以也做了一个table，在解释下后面为什么都是取[1]
    if errorcode == NG.PlayerPlaceProcess.RespPlayerPlace.FLAG.SUCCESS then
        self:success(self._playerPlace) 
    else
        self:fail(msgData)
    end
end

return ReqPlayerPosition