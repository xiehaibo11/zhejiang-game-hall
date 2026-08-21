local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {},       -- longlong 胜负
    nHuDanFang = 0,     -- BYTE 任务倍数(0为未完成)
    isFinal = 0,       --是否是最后一局
    mKongFen = {},
    cKongFen = {},
    tKongFen = {},
    huFen = 0,
    disSeat = -1,

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
        self.nHuDanFang = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.isFinal = bis:readUInt8()
        end
        self.mKongFen = {}
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.mKongFen[i] = bis:readInt32()
            end
        end
        self.cKongFen = {}
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.cKongFen[i] = bis:readInt32()
            end
        end
        self.tKongFen = {}
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.tKongFen[i] = bis:readInt32()
            end
        end
        if  bis:getAvailableSize() > 0 then
            self.huFen = bis:readInt32()
        end
        if  bis:getAvailableSize() > 0 then
            self.disSeat = bis:readInt32()
        end
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        for i = 0, 3 do
            bos:writeInt64(self.nWinLost[i])
        end
        bos:writeUInt8(self.nHuDanFang)
        bos:writeUInt8(self.isFinal)
        for i = 0, 3 do
            bos:writeInt32(self.mKongFen[i])
        end
        for i = 0, 3 do
            bos:writeInt32(self.cKongFen[i])
        end
        for i = 0, 3 do
            bos:writeInt32(self.tKongFen[i])
        end
        bos:writeInt32(self.huFen)
        bos:writeInt32(self.disSeat)
        return bos
    end
}

GameProtocol.msgGameRuleZhuaDa = {
    XY_ID = 1030,
    nFlag = false, -- bool 财飘时，是否抓打

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)       
        self.nFlag = bis:readBool()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.nFlag)
        return bos
    end
}

GameProtocol.msgSpeak = {
    XY_ID = 1034,
    nickName  = "", -- char
    id        = 0, --long
    bIsMan    = 0, -- byte
    speakSeat = 0, -- int

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.nickName = bis:readString()
        self.id = bis:readUInt32()
        self.bIsMan = bis:readBool()
        self.speakSeat = bis:readUInt32()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeString(self.nickName)
        bos:writeUInt32(self.id)
        bos:writeBool(self.bIsMan)
        bos:writeUInt32(self.speakSeat)
        return bos
    end
}

GameProtocol.msgGameRule = {
    XY_ID = 1037,

    nBaseScore = 1, -- 底分
    bHuangFan = 0,
    dblSanHua = 0,
    chiPengType = 3,
    nQiangGang = 0,
    nBaiPi = 0,
    nGangPai = 0,
    nTwoFanCanHu = 0,
    nWinLostLmt = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBaseScore = bis:readInt32()
        self.bHuangFan = bis:readInt32()
        self.dblSanHua = bis:readInt32()
        self.chiPengType = bis:readInt32()
        self.nQiangGang = bis:readInt32()
        self.nBaiPi = bis:readInt32()
        if bis:getAvailableSize() then
            self.nGangPai = bis:readInt32()
            self.nTwoFanCanHu = bis:readInt32()
            self.nWinLostLmt = bis:readInt32()
        end
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nBaseScore)
        bos:writeInt32(self.bHuangFan)
        bos:writeInt32(self.dblSanHua)
        bos:writeInt32(self.chiPengType)
        bos:writeInt32(self.nQiangGang)
        bos:writeInt32(self.nBaiPi)
        bos:writeInt32(self.nGangPai)
        bos:writeInt32(self.nTwoFanCanHu)
        bos:writeInt32(self.nWinLostLmt)
        return bos
    end
}

GameProtocol.msgDrawCnt = {
    XY_ID = 1041,
    nDrawCnt = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nDrawCnt = bis:readUInt8()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nDrawCnt)
        return bos
    end
}

GameProtocol.msgChengBao = {
    XY_ID = 1043,
    nCBSeat = 0,    --BYTE
    nFCBSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCBSeat = bis:readUInt8()
        self.nFCBSeat = bis:readUInt8()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nCBSeat)
        bos:writeUInt8(self.nFCBSeat)
        return bos
    end
}

GameProtocol.msgLocation = {
    XY_ID = 1044,
    nSeat = 0,
    lon = 0.0,   -- 经度
    lat = 0.0,    -- 纬度

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.lon = bis:readDouble()
        self.lat = bis:readDouble()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeDouble(self.lon)
        bos:writeDouble(self.lat)
        return bos
    end
}

GameProtocol.msgCaiPiao = {
    XY_ID = 1045,
    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        return self
    end
}

GameProtocol.msgTmpChowLmts = {
    XY_ID = 1046,

    nSeat = 0,
    nLmtCount = 0,
    nLmts = {},
    nRealLmts = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nLmtCount = bis:readUInt8()
        self.nLmts = {}
        for i = 1,self.nLmtCount do
            self.nLmts[i] = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.nRealLmts = bis:readUInt8()
        end
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nLmtCount)
        for i = 1, self.nLmtCount do
            bos:writeUInt8(self.nLmts[i])
        end
        bos:writeUInt8(self.nRealLmts)
        return bos
    end
}

return GameProtocol!  