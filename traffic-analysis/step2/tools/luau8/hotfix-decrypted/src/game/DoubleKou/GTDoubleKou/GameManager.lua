local GameManager = CF.gameClass("GTDoubleKouManager", "game.DoubleKou.BaseDoubleKou.GameManager")


function GameManager:JudgeConnet()    
    -- 金币场模式200的需要收到startgame才发connect 金币场200模式 NewGoldRoom    
    if (CF.roomData:getRoomMode2() == CF.ROOM_TYPE.GOLD_ROOM or CF.roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE or CF.roomData:is220Model()) and (not CF.roomData:is50() )
    and not CF.roomData:isReconnect() then        
        CF.goldManager:sendPlayerConnectGameTea()        
    else        
        CF.msgManager:sendPlayerConnect()    
    end

    if (CF.roomData:getRoomMode2() == CF.ROOM_TYPE.NEW_GOLD_ROOM or CF.roomData:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE or CF.roomData:is220Model()) 
    and not CF.roomData:isReconnect() then  
        CF.goldManager:dispatchEvent({name = CF.goldManager.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = false}})
    end 
end

function GameManager:doRelink(msg)
    if msg.srsGroupID == CF.roomData:getSRSGroupID() then 
        CF.roomData:clearAllPlayerData()
    end
    self:dispatchEvent({name = self.EVENT_RLINK_SUCCESS})
    if CF.roomData:getIsSeer() then
        -- 旁观玩家断线重连
        if CF.roomData:isDelayWatch() then
            self:getModule("WatchGame"):play()
        else
            self:getModule("WatchGame"):doRelink(msg)
        end
    else
        self:onRelink(msg)
    end
end

function GameManager:onRelink(msg)
    if CF.roomData:is50() then
        GameManager.super.onRelink(self, msg)
        return
    end
    if msg.srsGroupID == CF.roomData:getSRSGroupID() then
        local rooms = {}
        local aroom = {roomid = CF.roomData:getRoomID(),appid = CF.roomData:getAppID()}
        rooms[1] = aroom
        local roomLevel = CF.roomData:getRoomLevel()
        local LinkReqJoinRoomGT = require("lobby.Req.Room.LinkReqJoinRoomGT")
        local linkReqJoinRoomGT = LinkReqJoinRoomGT.new()
        linkReqJoinRoomGT:addReqCallBack(self, self.onJoinRoomGTCallBack)
        linkReqJoinRoomGT:start(CF.roomData:getGameID(),rooms,CF.roomData:getChairs(),CF.roomData:getSRSGroupID(),15, {roomLevel = roomLevel})
    end
end

-- todo 上面的请求不销毁
function GameManager:onJoinRoomGTCallBack(reqJoin, type, data)
    if not CF.goldManager or not CF.game then
        return
    end
    if type == XH.Req.TYPE.SUCCESS then
        CF.goldManager:sendPlayerConnectGameTea() 
    else
        CF.game:leaveGame()
        --失败也需要处理hjq离开房间
    end
end

return GameManager:
