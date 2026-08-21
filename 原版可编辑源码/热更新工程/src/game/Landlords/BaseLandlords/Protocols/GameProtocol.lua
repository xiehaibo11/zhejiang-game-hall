local GameProtocol = CF.gameClass("GameProtocol", "game.GameBase.Protocols.GameProtocol")

GameProtocol.msgGameStart = {
    XY_ID = 513,    -- 游戏开始

    bIsStart = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bIsStart = bis:readBool()
        return self
    end
}

GameProtocol.msgGameBase = {
    XY_ID = 514,    -- 底分

    nBase = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBase = bis:readInt16()
        return self
    end
}

GameProtocol.msgGameStep = { 
    XY_ID = 515,    --游戏步骤

    nGameStep = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nGameStep = bis:readInt32()
        return self
    end
}

GameProtocol.msgGameRule = { 
    XY_ID = 516,    --房间规则

    strGameRule = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strGameRule = bis:readString()
        return self
    end
}

GameProtocol.msgClock = { 
    XY_ID = 517,    --发送时钟

    sSeat = 0,
    sClock = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sClock)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.sClock = bis:readInt16()
        return self
    end
}

GameProtocol.msgAllDoCards = { 
    XY_ID = 518,    --做牌所有牌数据

    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()

        for i = 1, self.ucCount do 
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgDoCard = { 
    XY_ID = 519,    --做牌

    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.ucCount)

        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        return bos
    end
}

GameProtocol.msgSendHandCard = { 
    XY_ID = 520,    --发送手牌

    nPlayerCnt = 0,
    nHandCardCnt = {},
    nHandCard = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayerCnt = bis:readInt32()

        self.nHandCardCnt = {}
        for i = 1, self.nPlayerCnt do 
            self.nHandCardCnt[i] = bis:readInt16()
            self.nHandCard[i] = {}
            for j = 1, self.nHandCardCnt[i] do
                self.nHandCard[i][j] = bis:readInt16()
            end
        end
        return self
    end
}

GameProtocol.msgPlayerCardsCount = { 
    XY_ID = 521,    --发送所有玩家当前手牌数

    nSeat = 0,
    ucCount = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nSeat)
        bos:writeUInt8(self.ucCount)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        return self
    end
}

GameProtocol.msgPower = { 
    XY_ID = 522,    --出牌权限

    sPowerSeat = 0,
    sPrePowerSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sPowerSeat)
        bos:writeInt16(self.sPrePowerSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPowerSeat = bis:readInt16()
        self.sPrePowerSeat = bis:readInt16()
        return self
    end
}

GameProtocol.msgPlayCard = { 
    XY_ID = 523,    --打牌

    nSeat = 0,
    sEndPower = 0,
    nPlayCardType = 0,
    nPlayCardCnt = 0,
    nPlayCard = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeInt16(self.sEndPower)
        bos:writeInt16(self.nPlayCardType)
        bos:writeInt16(self.nPlayCardCnt)

        for i = 1, self.nPlayCardCnt do
            bos:writeUInt8(self.nPlayCard[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.sEndPower = bis:readInt16()
        self.nPlayCardType = bis:readInt16()
        self.nPlayCardCnt = bis:readInt16()

        self.nPlayCard = {}
        for i = 1, self.nPlayCardCnt do
            self.nPlayCard[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgWinLost = { 
    XY_ID = 524,    --小结束

    --  0:地主赢，1:农民赢，2:地主春天，3:农民春天
    nWinLostType = 0,
    nPlayerCnt = 0,
    nWinLostScore = { },
    nPlayerCardTypesCounts = { },
    nPlayerCardTypes = { },
    nBombNumbers = { },

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLostType = bis:readInt32()
        self.nPlayerCnt = bis:readInt32()

        self.nWinLostScore = {}
        for i = 1, self.nPlayerCnt do
            self.nWinLostScore[i] = bis:readInt32()
        end

        self.nPlayerCardTypesCounts = {}
        for i = 1, self.nPlayerCnt do
            self.nPlayerCardTypesCounts[i] = bis:readInt32()
        end

        self.nPlayerCardTypes = {}
        for i = 1, self.nPlayerCnt do
            self.nPlayerCardTypes[i] = {}
            for j = 1, self.nPlayerCardTypesCounts[i] do
                self.nPlayerCardTypes[i][j] = bis:readInt32()
            end
        end

        self.nBombNumbers = {}
        for i = 1, self.nPlayerCnt do
            self.nBombNumbers[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgTotalResult = { 
    XY_ID = 525,    --大结束

    nPlayerCount = 0,
    sPlayCount = 0,
	sWinCount = {},
	sBoomCount = {},
	iTotalScore = {},
    nSpringCount = {},
    
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayerCount = bis:readInt16()
        self.sPlayCount = bis:readInt16()

        self.sWinCount = {}
        for i = 1, self.nPlayerCount do
            self.sWinCount[i] = bis:readInt16()
        end

        self.sBoomCount = {}
        for i = 1, self.nPlayerCount do
            self.sBoomCount[i] = bis:readInt16()
        end

        self.iTotalScore = {}
        for i = 1, self.nPlayerCount do
            self.iTotalScore[i] = bis:readInt16()
        end

        self.nSpringCount = {}
        for i = 1, self.nPlayerCount do
            self.nSpringCount[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgAllHandCards = { 
    XY_ID = 526,    --发送所有人的手牌

    ucPlayerCount = 0,
    ucCount = {},
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucPlayerCount = bis:readInt16()
        for i = 1, self.ucPlayerCount do
            self.ucCount[i] = bis:readInt16()
            self.ucCards[i] = {}
            for j = 1, self.ucCount[i] do
                self.ucCards[i][j] = bis:readInt16()
            end
        end
        return self
    end
}

GameProtocol.msgAllDirCards = { 
    XY_ID = 527,    --全视角初始手牌

    ucPlayerCount = 0,
    ucCount = {},
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.ucPlayerCount)

        for i = 1, self.ucPlayerCount do
            bos:writeUChar(self.ucCount[i])
            for j = 1, self.ucCount[i] do
                bos:writeInt16(self.ucCards[i][j])
            end
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucPlayerCount = bis:readInt16()

        for i = 1, self.ucPlayerCount do
            self.ucCount[i] = bis:readInt16()
            self.ucCards[i] = {}
            for j = 1, self.ucCount[i] do
                self.ucCards[i][j] = bis:readInt16()
            end
        end
        return self
    end
}

GameProtocol.msgAllPlayOutCards = { 
    XY_ID = 528,    --全部人这一局内的出的牌

    ucPlayerCount = 0,
    ucPowerSeat = 0,
    sEndPower = {},
    nPlayCardType = {},
    nPlayCardCnt = {},
    nPlayCard = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.ucPlayerCount)
        bos:writeUInt16(self.ucPowerSeat)

        for i = 1, self.ucPlayerCount do
            bos:writeUInt16(self.sEndPower[i])
            bos:writeUInt16(self.nPlayCardType[i])
            bos:writeUInt16(self.nPlayCardCnt[i])
            for j = 1, self.nPlayCardCnt[i] do
                bos:writeUInt16(self.nPlayCard[i][j])
            end
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucPlayerCount = bis:readUInt16()
        self.ucPowerSeat = bis:readUInt16()

        self.nPlayCard = {}
        for i = 1, self.ucPlayerCount do
            self.sEndPower[i] = bis:readUInt16()
            self.nPlayCardType[i] = bis:readUInt16()
            self.nPlayCardCnt[i] = bis:readUInt16()

            self.nPlayCard[i] = {}
            for j = 1, self.nPlayCardCnt[i] do
                self.nPlayCard[i][j] = bis:readUInt16()
            end
        end
        return self
    end
}

--landlords
GameProtocol.msgGameMultiples = { 
    XY_ID = 1025,    --倍数

    nSeat = 0,
    ucPlayerCount = 0,
    ucMult = {},
    bActionSign = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.ucPlayerCount = bis:readInt16()

        self.ucMult = {}
        for i = 1, self.ucPlayerCount do
            self.ucMult[i] = bis:readInt16()
        end
        self.bActionSign = bis:readBool()
        return self
    end
}

GameProtocol.msgChooseJokers = { 
    XY_ID = 1026,    --选择百变牌

    nJokerCnt = 0,
    bJokerSamePower = false,
    nJokerValue = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nJokerCnt)
        bos:writeBool(self.bJokerSamePower)

        for i = 1, self.nJokerCnt do
            bos:writeInt16(self.nJokerValue[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nJokerCnt = bis:readInt16()
        self.bJokerSamePower = bis:readBool()

        self.nJokerValue = {}
        for i = 1, self.nJokerCnt do
            self.nJokerValue[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgRobLandlordInfo = { 
    XY_ID = 1027,    --抢地主类型

    isSendAllSign = false,
    nLandlordType = 0,
    nRobLandlordRateCnt = 0,
    nRobLandlordRate = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.isSendAllSign)
        bos:writeInt32(self.nLandlordType)
        bos:writeInt32(self.nRobLandlordRateCnt)

        for i = 1, self.nRobLandlordRateCnt do
            bos:writeInt32(self.nRobLandlordRate[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.isSendAllSign = bis:readBool()
        self.nLandlordType = bis:readInt32()
        self.nRobLandlordRateCnt = bis:readInt32()

        self.nRobLandlordRate = {}
        for i = 1, self.nRobLandlordRateCnt do
            self.nRobLandlordRate[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgRobLandlord = { 
    XY_ID = 1028,    --抢地主

    nSeat = 0,
    nRobRate = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeInt32(self.nRobRate)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nRobRate = bis:readInt32()
        return self
    end
}

GameProtocol.msgLandlordSeat = { 
    XY_ID = 1029,    --地主位置

    nSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        return self
    end
}

GameProtocol.msgShowBackCard = { 
    XY_ID = 1030,    --显示底牌

    nBackCardCnt = 0,
    nBackCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nBackCardCnt)

        for i = 1, self.nBackCardCnt do
            bos:writeInt16(self.nBackCards[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBackCardCnt = bis:readInt16()

        self.nBackCards = {}
        for i = 1, self.nBackCardCnt do
            self.nBackCards[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgSetShowHandCardPower = { 
    XY_ID = 1031,    --明牌权限

    nSeat = 0,
    bSetShowHandCardPower = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeBool(self.bSetShowHandCardPower)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.bSetShowHandCardPower = bis:readBool()
        return self
    end
}

GameProtocol.msgSetShowHandCardResult = { 
    XY_ID = 1032,    --明牌结果

    nSeat = 0,
    ucCount = 0,
    nHandCard = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeInt16(self.ucCount)

        for i = 1, self.ucCount do
            bos:readInt16(self.nHandCard[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.ucCount = bis:readInt16()

        self.nHandCard = {}
        for i = 1, self.ucCount do
            self.nHandCard[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgSetDouble = { 
    XY_ID = 1033,    --是否加倍

    bSetDouble = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bSetDouble)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bSetDouble = bis:readBool()
        return self
    end
}

GameProtocol.msgSetDoubleResult = { 
    XY_ID = 1034,    --玩家加倍信息

    nPlayCnt = 0,
    nSeat = 0,
    bSetDouble = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayCnt = bis:readInt32()
        self.nSeat = bis:readInt32()
        self.bSetDouble = bis:readBool()
        return self
    end
}

GameProtocol.msgWinLostRate = { 
    XY_ID = 1035,    --当前胜负的倍数

    nPlayerCnt = 0,
    nWinLostRate = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nPlayerCnt)

        for i = 1, self.nPlayerCnt do
            bos:writeInt32(self.nWinLostRate[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayerCnt = bis:readInt32()

        self.nWinLostRate = {}
        for i = 1, self.nPlayerCnt do
            self.nWinLostRate[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgTrust = {
    XY_ID = 1036, -- 托管

    nSeat = 0,
    bState = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeBool(self.bState)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.bState = bis:readBool()
        return self
    end
}

GameProtocol.msgBaseClientForwardEx = {
    XY_ID = 22, -- 转发协议
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
        QiaoPiHua = 12,
        AvatarUrl = 13,
        AMap = 14,
        VIPEffect = 15,
    },
    
    CT_ID = {

        XY_FORWARD = 1,
        XY_SAVE_FORWARD = 2,
    },
    
    
    sSeat = 0,
    toSeat = -1,
    sID = 0,
    sType = 0,
    strData = "",
    
    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.toSeat)
        bos:writeInt16(self.sID)
        bos:writeInt16(self.sType)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        
        self.sSeat = bis:readInt16()
        self.toSeat = bis:readInt16()
        self.sID = bis:readInt16()
        self.sType = bis:readInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgJiPaiQi = {
    XY_ID = 1037,

    ucJPQ = {},
    ucFlag = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 1, 15 do
            bos:writeUInt8(self.ucJPQ[i])
        end
        bos:writeUInt8(self.ucFlag)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucJPQ = {}
        for i = 1, 15 do
            self.ucJPQ[i] = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.ucFlag = bis:readUInt8()
        end
        return self
    end
}

----瑞安，温茶，丽水 记牌器
GameProtocol.msgUseMarker = {
    XY_ID = 1038,

    seat = 4,
    markerState = 0,
    endTime = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()

        bos:writeInt16(self.seat)
        bos:writeInt16(self.markerState)
        bos:writeInt64(self.endTime)

        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readUInt16()
        self.markerState = bis:readUInt16()
        self.endTime = bis:readInt64()

        return self
    end 
}

return GameProtocol