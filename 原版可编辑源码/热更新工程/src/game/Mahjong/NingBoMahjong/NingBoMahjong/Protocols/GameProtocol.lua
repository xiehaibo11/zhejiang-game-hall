local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.NingBoMahjong.NBMahjongBase.Protocols.GameProtocol")

-- 做生意协议
GameProtocol.msgZuoShengYi = {
    XY_ID = 1051,
    nSeat = 0, -- 座位号
    nFlag = 1, -- 1-同意  2-不同意

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeInt32(self.nFlag)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nFlag = bis:readInt32()
        return self
    end
}

-- modified by ZYD 2017-12-27
GameProtocol.msgKongLmt = {
    XY_ID = 1050,

    limitMah = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.limitMah = bis:readUInt8()
        return self
    end
}

--翻型新协议 2018-12-3
GameProtocol.msgFanCntNew = {
    XY_ID = 1450,

    nSeat = 0,
    nCount = 0,
    Fans = {},
    nFanNum = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1, self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readInt16()
            self.Fans[i].nCount = bis:readUInt8()
            self.Fans[i].nFanNum = bis:readInt16()
        end
        self.nFanNum = bis:readInt32()
        return self
    end
}

GameProtocol.msgZuoShengYiInfo = {
    XY_ID = 1452,
    STATE = {
        NONE = 0,
        WAIT = 1,
        DONE = 2,
    },

    sState = 0,
    bCanChow = true,
    sTipChow = 0,
    sTipPung = 0,
    sTipMKong = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sState = bis:readInt16()
        self.bCanChow = bis:readInt8()
        self.sTipChow = bis:readInt16()
        self.sTipPung = bis:readInt16()
        self.sTipMKong = bis:readInt16()
        return self
    end
}

GameProtocol.msgFlowerOrderFlag = {
    XY_ID = 1451,
    FLAG = {
        MEI_LAN_ZHU_JV = 0, --梅兰竹菊
        MEI_LAN_JV_ZHU = 1  --梅兰菊竹
    },

    nFlowerOrderFlag = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlowerOrderFlag = bis:readInt8()
        return self
    end
}

return GameProtocol