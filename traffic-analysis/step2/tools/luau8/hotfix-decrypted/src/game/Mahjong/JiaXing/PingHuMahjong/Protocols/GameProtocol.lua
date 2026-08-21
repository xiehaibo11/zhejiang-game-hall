local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")

GameProtocol.msgGameReqJieSan = {
    XY_ID = 1031,
    nSeat = -1,  -- int
    nFlag = -1,  -- int  0:请求 1:同意 2：拒绝
    nRemainingTime = 0,  -- int 自动同意剩余时间

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nFlag = bis:readInt32()
        self.nRemainingTime = bis:readInt32()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeInt32(self.nFlag)
        bos:writeInt32(self.nRemainingTime)
        return bos
    end
}

GameProtocol.msgCurPanShu = {
    XY_ID = 1033,
    cur = 0,    --BYTE 
    goal = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.cur = bis:readInt32()
        self.goal = bis:readInt32()
        return self
    end
}


GameProtocol.msgGameRule = {
    XY_ID = 1034,

    strGameRule = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strGameRule = bis:readString()
        return self
    end 
}

GameProtocol.msgTotalResult = {
    XY_ID = 1035,

    nSeat = 0,         -- 座位
    huCnt = 0,         -- 胡牌次数
    nCount = 0,        -- 个数
    Fans = {},         -- 番种数据
    nTotalWinLost = 0, -- 胜负
    maxHuFan = {},     -- 吴江最大胡番

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.huCnt = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1, self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readUInt16()
            self.Fans[i].nCount = bis:readUInt8()
        end
        self.nTotalWinLost = bis:readInt64()
        if bis:getAvailableSize() > 0 then
            for i=0, 3 do
                self.maxHuFan[i] = bis:readInt32()
            end            
        end
        return self
    end 
}

GameProtocol.msgChengBao = {
    XY_ID = 1039,
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

return GameProtocolz