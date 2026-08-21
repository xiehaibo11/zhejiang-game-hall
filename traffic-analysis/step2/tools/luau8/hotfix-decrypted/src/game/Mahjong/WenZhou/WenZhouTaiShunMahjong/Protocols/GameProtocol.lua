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

GameProtocol.msgPlayTings = {
    XY_ID = 1155,

    nSeat = 0,
    nCount = 0,
    tingmahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.tingmahs = {}

        for i = 1 , 14 do
            self.tingmahs[i] = {}
            self.tingmahs[i].nCount = bis:readUInt8()
            self.tingmahs[i].from = bis:readUInt8()
            self.tingmahs[i].tmahs = {}

            for k = 1, 10 do
                self.tingmahs[i].tmahs[k] = {};
                self.tingmahs[i].tmahs[k].mah = bis:readUInt8()
                self.tingmahs[i].tmahs[k].ft = bis:readInt32()
            end
        end

        return self
    end 
}

GameProtocol.msgKongLmts = {
    XY_ID = 1156,

    iLmtCnt = {},
    vLmtMahs = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0,3 do
            self.iLmtCnt[i] = bis:readInt32()
        end
        for i = 0,3 do
            self.vLmtMahs[i] = {}
            for j = 1, self.iLmtCnt[i] do
                self.vLmtMahs[i][j] = bis:readUInt8()
            end
        end       

        return self
    end 
}

GameProtocol.msgZhaMa = {
    XY_ID = 1157,

    sHuCount = 0,
    sSeat = {},
    sIdexCnt = 0,
    nIdex = {},
    sZhongMa = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = {}
        self.nIdex = {}
        self.sHuCount = bis:readUInt16()
        for i = 0, self.sHuCount-1 do
            self.sSeat[i] = bis:readUInt16()
        end
        self.sIdexCnt = bis:readUInt16()
        for i = 0,self.sIdexCnt-1 do
            self.nIdex[i] = bis:readUInt8()
        end
        self.sZhongMa = bis:readUInt16()

        return self
    end 
}

GameProtocol.msgGuaFeng = {
    XY_ID = 1158,

    iTotalScore = {},
    iCurScore = {}, 
    sType = 0,
    sSeat = 0,
    bRelink = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iTotalScore = {}
        self.iCurScore = {}
        for i = 0,3 do
            self.iTotalScore[i] = bis:readInt32()
            self.iCurScore[i] = bis:readInt32()
        end        
        self.sType = bis:readInt16()
        self.sSeat = bis:readInt16()
        self.bRelink = bis:readBool() 

        return self
    end 
}

return GameProtocol
�