local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgGameState =
{

    XY_ID = 1044,

    seat = 0,                 -- 座位号
    state = 0,                -- 游戏状态

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeUInt16(self.state)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.state = bis:readUInt16()
        return self
    end
}

GameProtocol.msgQuanCount = {
    XY_ID = 1500,

    quanCount = 0,
    maxQuanCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.quanCount = bis:readUInt16()
        self.maxQuanCount = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgGameMode = {
    XY_ID = 1501,

    gameMode = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.gameMode = bis:readUInt16()
        return self
    end 
}

return GameProtocol