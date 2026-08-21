local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgPowerEx_CToS = {
    XY_ID = 518,

    nSeat = 0,
    nPower = 0,
    nIndex = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
            local bos = un.network.IStream.new()
            bos:writeUInt8(self.nSeat)
            bos:writeInt32(self.nPower)
            bos:writeInt32(self.nIndex)
            return bos
        end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nPower = bis:readInt32()
        self.nIndex = bis:readInt32()
        return self
    end 
}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    time = 180,
    respondDismiss = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeInt32(self.time)
        for i = 1,4 do
            bos:writeInt32(self.respondDismiss[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.time = bis:readInt32()
        for i = 1,4 do            
            local temp = bis:readInt32()
            self.respondDismiss[i] = temp
        end
        return self
    end 
}

GameProtocol.msgClientForward =
{
    XY_ID = 1043,
    CF_ID = {
        FastVoice = 1,
        GPS_MSG = 2,
        Mobile_Signal = 3,
        Speed_Test = 4,
        WireBreak_Signal = 5,
        Expression = 6,
        FaceAni = 7,
        PlayerHeadEffect = 8,
        PropAni = 9,
        PlayerHeadTrust = 10,
        Location = 11,
    },
    seat = 0,                 -- 座位号
    id = 0,
    strData = "",

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeUInt16(self.id)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.id = bis:readUInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgTotalResultEx = {
    XY_ID = 1050,

    playCount = 0,
    baseScore = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        self.baseScore = bis:readUInt16()
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
        return self
    end 
}

GameProtocol.msgThrowKongChips = {
    XY_ID = 1051,

    nSeat = 0,
    nCount = 0,
    nChips = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nChips = {}
        for i = 1,self.nCount do
            self.nChips[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgPlayerAction = {
    XY_ID = 1095,
    
    nSeat = 0,
    nFlag = 0, 
    nIndex = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
            local bos = un.network.IStream.new()
            bos:writeUInt8(self.nSeat)
            bos:writeUInt8(self.nFlag)
            bos:writeInt32(self.nIndex)
            return bos
        end,
        
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nFlag = bis:readUInt8()
        self.nIndex = bis:readInt32()
        return self
    end 
}

GameProtocol.msgLastOutMahSeat = {
    XY_ID = 1096,
    
    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgPowerEx_SToC = {
    XY_ID = 1097,

    nSeat = 0,
    nPower = 0,
    nIndex = 0,
    nActionID = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nPower = bis:readInt32()
        self.nIndex = bis:readInt32()
        self.nActionID = self.nIndex
        return self
    end 
}

GameProtocol.msgFanCntEx = {
    XY_ID = 2000,--安吉

    nSeat = 0,
    nCount = 0,
    Fans = {},
    nFlowerCnt = 0,

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
            self.Fans[i].nFlowerCnt = bis:readUInt8()
            self.Fans[i].nGangCnt = bis:readUInt8()
            self.Fans[i].nPiaoCnt = bis:readUInt8()
        end
        self.nFlowerCnt = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgRequestIsPlayerIPLimit = 
{
    XY_ID = 2008,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        return bos
    end,

    bistream = function( self, buff, bufflen )
        -- local bis = un.network.OStream.new(buff)
        return self
    end
}

GameProtocol.msgRespondIsPlayerIPLimit = 
{
    XY_ID = 2009,
    isIPLimit = false,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.isIPLimit = bis:readBool()
        return self
    end
}

GameProtocol.msgIsOnPiaoCai = 
{
    XY_ID = 2010,
    isOnPiaoCai = false,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.isOnPiaoCai = bis:readBool()
        return self
    end
}

GameProtocol.msgPlayTings = {
    XY_ID = 10001,

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
            
            for k = 1, 5 do
                self.tingmahs[i].tmahs[k] = {};
                self.tingmahs[i].tmahs[k].mah = bis:readUInt8()
                self.tingmahs[i].tmahs[k].ft = bis:readInt32()
            end
        end

        return self
    end 
}

GameProtocol.msgStartNotifyInfo = 
{
    XY_ID = 2001,
    flower = 0,
    joker = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.flower = bis:readUInt8()
        self.joker = bis:readUInt8()
        return self
    end
}

GameProtocol.msgFanResultDDH = 
{
    XY_ID = 2002,
    nSeat = 0,
    nFlowerCnt = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nFlowerCnt = bis:readUInt8()
        return self
    end
}

GameProtocol.msgFollowMah = {
    XY_ID = 1047,

    ST_TYPE = {
        ST_CENTER = 4,
    },
    RT_TYPE = {
        RT_SI_GEN = 1,
        RT_SAN_GEN = 2,
    },

    seat = 4,
    result = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.result = bis:readUInt16()
        return self
    end
}

GameProtocol.msgHZFollowMah = {
    XY_ID = 2004,

    ST_TYPE = {
        ST_CENTER = 4,
    },
    RT_TYPE = {
        RT_SI_GEN = 1,
        RT_SAN_GEN = 2,
    },

    seat = 4,
    result = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.result = bis:readUInt16()
        return self
    end
}

GameProtocol.msgHZFollowMahScore = {
    XY_ID = 2003,

    nScore = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nScore = {}
        for i = 0,3 do
            self.nScore[i] = bis:readInt32()
        end
        return self
    end 
}

return GameProtocol O-  