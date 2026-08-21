local GameLogicProtocol = CF.gameClass("GameLogicProtocol", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Protocols.GameProtocol")

GameLogicProtocol.msgPlayCount = {
    XY_ID = 1036,

    playCount = 0,
    maxPlayCount = 0,
    startdifen = 0,
    laozhuangCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        self.maxPlayCount = bis:readUInt16()
        self.startdifen = bis:readUInt16()
        self.laozhuangCount = bis:readUInt16()
        return self
    end
}

return GameLogicProtocol