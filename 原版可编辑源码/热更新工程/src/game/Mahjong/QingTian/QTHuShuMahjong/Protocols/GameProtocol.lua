local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgHuShuCount = {
    XY_ID = 1050,
    
    nseat = 0,
    totalhushu = 0,
    basehushu = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
   
        self.nseat = bis:readUInt8()
        self.totalhushu = bis:readInt32()
        self.basehushu = bis:readInt32()
        return self
    end 
}

GameProtocol.msgHuMahPos = {
    XY_ID = 1051,

    nPos = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPos = bis:readInt32()
        return self
    end 
}

return GameProtocol
