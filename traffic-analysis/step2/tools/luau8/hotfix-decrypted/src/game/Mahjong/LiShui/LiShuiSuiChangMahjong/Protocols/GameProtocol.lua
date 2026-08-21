local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,
    drawnCount = {},
    fangGangCount = {},
    isForceExit = false,
    sanQingSeat = -1,
    isMenQianQing = false,


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.playCount = bis:readUInt16()
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.maxFanCount[i] = bis:readInt32()
            self.maxFanName[i] = {}

            
            for j = 1,self.maxFanCount[i] do
                self.maxFanName[i][j] = bis:readInt32()
            end    
        end
        self.show = bis:readBool()
        
        if bis:getAvailableSize() > 0 then
            for i =0, 3 do
                self.drawnCount[i] =  bis:readInt32()   
                self.fangGangCount[i] =  bis:readInt32() 
            end
            self.isForceExit = bis:readBool();
        end
        
        if bis:getAvailableSize() > 0  then
            self.sanQingSeat = bis:readInt32()
        end
        
        if bis:getAvailableSize() > 0 then
            self.isMenQianQing = bis:readBool()
        end


        
        return self
    end 
}

GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {},
    drawnBankerSeat = -1,
    fangGangSeat = -1,
    isSanQing = false,
    genShu = {},
    isDaBanMode = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
       
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end

        if bis:getAvailableSize() > 0 then
            self.drawnBankerSeat = bis:readInt32()
        end
        
        if bis:getAvailableSize() > 0 then
            self.fangGangSeat = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.isSanQing = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.genShu[i] = bis:readInt32()
            end
            self.isDaBanMode = bis:readBool()   
        end
        
        return self
    end 
}

GameProtocol.msgFanCnt = {
    XY_ID = 548,

    nSeat = 0,
    nCount = 0,
    Fans = {},
    fanValue = -1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1 , self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readUInt16()
            self.Fans[i].nCount = bis:readUInt8()
        end
        
        if bis:getAvailableSize() > 0 then
            self.fanValue = bis:readInt32()
        end
        return self
    end 
}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    time = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeInt32(self.time)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        if bis:getAvailableSize() > 0 then
            self.time = bis:readInt32()
        end
        return self
    end 
}

GameProtocol.msgDismissFlag = {
    XY_ID = 1041,

    flag = 0,
    agree = {},
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.flag)
        for i = 0, #self.agree do 
            bos:writeBool(self.agree[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.flag = bis:readInt16()
        if bis:getAvailableSize() > 0 then
            for i = 0, CF.roomData:getMaxPlayer() - 1 do 
                self.agree[i] = bis:readBool()
            end
        end
        return self
    end 
}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    time = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeInt32(self.time)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        if bis:getAvailableSize() > 0 then
            self.time = bis:readInt32()
        end
        return self
    end 
}

return GameProtocol