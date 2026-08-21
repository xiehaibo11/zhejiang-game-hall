local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgFanCnt = {
    XY_ID = 548,
  
    nSeat = 0,
    nCount = 0,
    Fans = {},

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
        
        return self
    end 
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,
    m_iMaxNewResult = {},
    
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
            for i = 0,3 do
                local onePlayerNewResult = {}
                for j = 0,2 do
                    onePlayerNewResult[j] = bis:readInt32()
                end
                self.m_iMaxNewResult[i] = onePlayerNewResult
            end
        end    

        return self
    end 
}

GameProtocol.msgKongLmts = {
    XY_ID = 1045,

    nCount = 0,
    nTkongLmtsData = {},     --限制补杠的牌
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nCount = bis:readInt32()
        for i = 0,self.nCount-1 do
            self.nTkongLmtsData[i] = bis:readInt32()
        end  

        return self
    end 
}

GameProtocol.msgGangNums = {
    XY_ID = 1046,

    nKongCount = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0,3 do
            local onePlayerKongCount = {}
            for j = 0,2 do
                onePlayerKongCount[j] = bis:readInt32()
            end
            self.nKongCount[i] = onePlayerKongCount
        end

        return self
    end 
}

GameProtocol.msgCrossHu = {
    XY_ID = 1047,

    sSeat = 0,     --座位
    bCrossHu = false,  --是否过胡

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readUInt16()
        self.bCrossHu = bis:readBool()
        return self
    end 
}

return GameProtocol
�