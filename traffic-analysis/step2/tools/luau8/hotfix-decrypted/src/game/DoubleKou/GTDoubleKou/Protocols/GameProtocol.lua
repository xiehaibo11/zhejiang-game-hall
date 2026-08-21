local GameProtocol = CF.gameClass("GameProtocol", "game.DoubleKou.BaseDoubleKou.Protocols.GameProtocol")

GameProtocol.msgGameMut = {
    XY_ID = 1416,
    iWinTime = 0,
    iLostTime = 0,
    iGong = 0,
    iMut = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iWinTime = bis:readInt32()
        self.iLostTime = bis:readInt32()
        self.iGong = bis:readInt32()
        if  bis:getAvailableSize() > 0 then
            self.iMut = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgSendAllCard = {
    XY_ID = 1421,
    ucCard = {},
    ucCardCount = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucCardCount = bis:readUInt8()
        self.ucCard = {}
        for i = 1, self.ucCardCount do
            self.ucCard[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgWaitSelecrCard = {
    XY_ID = 1422,
    ucCard = {},
    ucCardCount = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucCardCount)
        for i = 1, self.ucCardCount do
            local cardID = 0
            if i <= self.ucCardCount then
                cardID = self.ucCard[i]
            end
            bos:writeUInt8(cardID)
        end
        return bos
    end
}

GameProtocol.msgGameZhang = {
    XY_ID = 1462,
    sDivideCount = 0,
    nServicePay = 0,
    nMinStartJF = 0,
    nNewGongMut = 0,
    bSpecialCardType = false,
    bEightKing = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sDivideCount = bis:readInt16()
        self.nServicePay = bis:readInt32()
        self.nMinStartJF = bis:readInt32()
        self.nNewGongMut = bis:readInt32()
        self.bSpecialCardType = bis:readBool()
        self.bEightKing = bis:readBool()
        return self
    end
}

GameProtocol.msgClientVersion = {
    XY_ID = 1471,
    cVersion = "",
    bEnableEightKing = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeString(self.cVersion)
        bos:writeBool(self.bEnableEightKing)
        return bos
    end
}

GameProtocol.msgIncDoubling = {
    XY_ID = 1472,
    seat = 0,
    increament = 0,
    value = 0,
    flag = 0,
    FLAG = {  
        NONE = 0,        -- 
        SUCCESS = 1,      --成功
        FAILED = 2,     -- 失败
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.seat)
        bos:writeInt32(self.increament)
        bos:writeFloat(self.value)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt32()
        self.increament = bis:readInt32()
        self.value = bis:readFloat()
        if bis:getAvailableSize() > 0 then
            self.flag = bis:readInt8()
        end
        
        return self
    end
}

GameProtocol.msgIncDoublingPower = {
    XY_ID = 1473,
    seat = 0,
    power = 0,
    time = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readUInt8()
        self.power = bis:readInt8()
        self.time = bis:readUInt8()
        return self
    end
}

GameProtocol.msgReturnProp = {
    XY_ID = 1485,
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

GameProtocol.msgWinLostExtra = {
    XY_ID = 2026,
	nMut = {},	-- 最终的倍数，非加倍时此值与fMut相同
	nDouble = {}, -- 翻倍的倍数
    fMut = {}, -- 最终的倍数浮点值
    nIncStatus = {}, -- 玩家加倍的情况
    fInc = {}, -- 加倍的实际的倍数
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nMut = {}
        self.nDouble = {}
        self.fMut = {}
        self.nIncStatus = {}
        self.fInc = {}
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.nMut[i] = bis:readInt32()
        end
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.nDouble[i] = bis:readInt32()
        end
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.fMut[i] = bis:readFloat()
        end
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.nIncStatus[i] = bis:readInt32()
        end
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.fInc[i] = bis:readFloat()
        end
        return self
    end 
}

-- Vip增益
GameProtocol.msgExtraBonus = {
    XY_ID = 2029,
	nHeadBonus = {},
	nHeadBonusRate = {},
	nVipBonus = {},
	nVipBonusRate = {},
	nRoleBonus = {},
	nRoleBonusRate = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nHeadBonus = {}
        self.nHeadBonusRate = {}
        self.nVipBonus = {}
        self.nVipBonusRate = {}
        self.nRoleBonus = {}
        self.nRoleBonusRate = {}
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.nHeadBonus[i] = bis:readInt32()
            self.nHeadBonusRate[i] = bis:readInt32()
            self.nVipBonus[i] = bis:readInt32()
            self.nVipBonusRate[i] = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            for i = 0, CF.roomData:getMaxPlayer() - 1 do
                self.nRoleBonus[i] = bis:readInt32()
                self.nRoleBonusRate[i] = bis:readInt32()
            end
        end
        return self
    end 
}

-- 托管限制
GameProtocol.msgTrustLimit = {
    XY_ID = 1438,
    trustPunishTime = 0,
    sTrustCountLimit = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.trustPunishTime = bis:readInt64()
        self.sTrustCountLimit = bis:readInt16()
        return self
    end 
}

-- 托管惩罚
GameProtocol.msgTrustPunishment = {
    XY_ID = 2017,
    nCount = 0,
	seats = {},
	nPunishment = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seats = {}
        self.nPunishment = {}
        self.nCount = bis:readInt32()
        for i = 0, self.nCount - 1 do
            self.seats[i] = bis:readInt32()
        end
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.nPunishment[i] = bis:readInt64()
        end
        return self
    end 
}

-- 以小博大（封顶）
GameProtocol.msgResultYxbd = {
    XY_ID = 2030,
	nYXBD = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nYXBD = {}
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.nYXBD[i] = bis:readInt32()
        end
        return self
    end
}

return GameProtocolO#