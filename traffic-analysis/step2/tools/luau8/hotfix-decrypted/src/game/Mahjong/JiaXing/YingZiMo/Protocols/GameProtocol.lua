local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")

GameProtocol.msgAllWinLost_2P = {
    XY_ID = 1031,
    nSeat = 0,
    nAllWinLost = 0,    -- long

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt16()
        self.nAllWinLost = bis:readInt32()
        return self
    end
}

GameProtocol.msgSpeak_2P = {
    XY_ID = 1034,
    nickName  = '', -- char
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
         self.nickName = bis:readUInt8()
         self.id = bis:readUInt32()
         self.bIsMan = bis:readUInt8()
         self.speakSeat = bis:readUInt32()
         return self
    end
}
GameProtocol.msgGameRule_2P = {
    XY_ID = 1037,

    rule = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.rule = bis:readString()
        return self
    end 
}
GameProtocol.msgDrawCnt_2P = {
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
    end
}

GameProtocol.msgChengBao_2P = 
{
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

GameProtocol.msgLocation_2P = {
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
    end
}

return GameProtocol�