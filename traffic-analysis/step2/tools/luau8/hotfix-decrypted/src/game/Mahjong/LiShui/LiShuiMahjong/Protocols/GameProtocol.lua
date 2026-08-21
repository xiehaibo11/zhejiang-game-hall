local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgTingWait = {
    XY_ID = 1158,

    nSeat = 0,
    bTingWait = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nSeat)
        bos:writeBool(self.bTingWait)

        return bos
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.bTingWait = bis:readBool()
        return self
    end 
}

GameProtocol.msgAheadStartInfo = {
    XY_ID = 1159,

    sAheadState = 0,
    sAheadLeftTime = 0,
    sAheadPlayerChoose = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sAheadState = bis:readInt16()
        self.sAheadLeftTime = bis:readInt16()
        for i = 0, 3 do
            self.sAheadPlayerChoose[i] = bis:readInt16()
        end
        return self
    end 
}

GameProtocol.msgAheadVote = {
    XY_ID = 1160,

    sAheadVoteSeat = 0,
    sAheadVoteStatus = false,
    bAheadSuccess = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sAheadVoteSeat)
        bos:writeBool(self.sAheadVoteStatus)
        bos:writeBool(self.bAheadSuccess)
        return bos
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sAheadVoteSeat = bis:readInt16()
        self.sAheadVoteStatus = bis:readBool()
        self.bAheadSuccess = bis:readBool()
        return self
    end 
}

GameProtocol.msgAheadRule = {
    XY_ID = 1161,

    sSeat = 0;
    sAheadRule = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeString(self.sAheadRule)
        return bos
    end
}

return GameProtocol�	