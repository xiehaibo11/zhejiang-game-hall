local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")

GameProtocol.msgGameRule = {
    XY_ID = 1037,

    strGameRule = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strGameRule)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strGameRule = bis:readString()
        return self
    end 
}

GameProtocol.msgDrawCnt = {
    XY_ID = 1041,
    nDrawCnt = 0, --BYTE 荒牌数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nDrawCnt = bis:readUInt8()
        return self
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

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeDouble(self.tCount)
        bos:writeDouble(self.tCount)
        return bos
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.lon = bis:readDouble()
        self.lat = bis:readDouble()
        return self
    end
}

return GameProtocol