local GameProtocol = {}

GameProtocol.msgBaseClientForwardEx = {
    XY_ID = 22,
    CF_ID = {
        FastVoice = 1,
        GPS_MSG = 2,
        Mobile_Signal = 3,
        Speed_Test = 4,
        WireBreak_Signal = 5,
        Expression = 6,
        FaceAni = 7,
        PlayerHeadEffect = 8,
        PropAni = 9,
        PlayerHeadTrust = 10,
        Emoji = 11,
        HeadUrl = 12,
        AMap = 13,
        QiaoPiHua = 14,
        TouchPoint = 15,
        OPERATE_PASS = 160,
    },
    CT_ID = {
        XY_FORWARD = 1,
        XY_SAVE_FORWARD = 2
    },
    sSeat = 0,
    toSeat = -1,
    sID = 0,
    sType = 0,
    strData = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.toSeat)
        bos:writeInt16(self.sID)
        bos:writeInt16(self.sType)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.toSeat = bis:readInt16()
        self.sID = bis:readInt16()
        self.sType = bis:readInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgAddMulti = {
    XY_ID = 601,
    seat = 4,
    multi = 0,
    ADDMULTITYPE = {  
        NONE = 0,        -- 未操作加倍
        PASS = 1,        -- 不加倍
        DEFAULT = 2,     -- 普通加倍
        SUPER = 3        -- 超级加倍
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.multi)
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.multi = bis:readInt16()
        return self
    end 
}

GameProtocol.msgReturnProp = {
    XY_ID = 602,
    propID = 0,
    propCount = 0,
    returnReason = 0, --1为抄底
    REASON = {  
        NONE = 0,        -- 
        CHAODI = 1,      -- 抄底
        TIMEOUT = 2,     -- 超时
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
   
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.propID = bis:readInt32()
        self.propCount = bis:readInt32()
        self.returnReason = bis:readInt32()
        return self
    end 
}

GameProtocol.msgAddMultiInfo = {
    XY_ID = 603,
    multi = 1,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
   
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.multi = bis:readDouble()
        return self
    end 
}

return GameProtocol
�