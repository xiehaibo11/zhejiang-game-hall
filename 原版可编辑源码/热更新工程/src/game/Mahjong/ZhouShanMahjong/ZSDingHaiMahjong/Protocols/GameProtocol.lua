local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Protocols.GameProtocol")

GameProtocol.msgVoteInfo = {
    XY_ID = 1600,

    voteStatus = 0,
    voteTime = 0,
    playersVote = {},

    VOTE_STATUS = {
        NONE = 0,
        WAITESTART = 1,
        START = 2,
        SUCCESS = 3,
        REFUSE = 4,
        TIMEOUT = 5,
        PLAYERLEAVE = 6,
        END = 7
    },
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.voteStatus = bis:readInt16()
        self.voteTime = bis:readInt16()
        self.playersVote = {}
        for i = 0, 3 do
            self.playersVote[i] = bis:readInt16()
        end

        return self
    end 
}

GameProtocol.msgRespVote = {
    XY_ID = 1601,

    RESP_TYPE = {
        REFUSE = 0,
        AGREE = 1
    },

    seat = 0,
    respVote = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.respVote)
        return bos
    end,
}

return GameProtocol