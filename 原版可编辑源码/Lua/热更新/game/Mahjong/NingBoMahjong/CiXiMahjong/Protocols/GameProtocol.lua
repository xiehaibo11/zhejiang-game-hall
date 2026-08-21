local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.NingBoMahjong.NBMahjongBase.Protocols.GameProtocol")

GameProtocol.msgKongLmt = {
    XY_ID = 1050,

    limitMah = 0,

    new = function(self, o)
        local oNew = o or {}
        setmetatable(oNew, { __index = self })
        return oNew
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.limitMah = bis:readUInt8()
        return self
    end
}

GameProtocol.msgHeadScore = {
    XY_ID = 1052,

    nHeadScore = {},

    new = function(self, o)
        local oNew = o or {}
        setmetatable(oNew, { __index = self })
        return oNew
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nHeadScore = {}
        for i = 1, 4 do
            self.nHeadScore[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgChowLmt = {
    XY_ID = 1055,

    nSeat = 0, -- 座位
    mahs = {}, -- 吃牌组合
    mahcnt = 0, -- 麻将数量

    new = function(self, o)
        local oNew = o or {}
        setmetatable(oNew, { __index = self })
        return oNew
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.mahs = {}
        for i = 1, 4 do
            self.mahs[i] = {}
            for j = 1, 3 do
                self.mahs[i][j] = bis:readUInt8()
            end
        end
        self.mahcnt = bis:readUInt8()
        return self
    end
}
-- 另算分数
GameProtocol.msgLingSuanScore = {
    XY_ID = 1056,

    nSeat = 0,
    nLingSuanScore = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    -- 流出
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.nLingSuanScore = {}
        for i = 0, 3 do
            self.nLingSuanScore[i] = bis:readInt64()
        end

        return self
    end
}

return GameProtocol