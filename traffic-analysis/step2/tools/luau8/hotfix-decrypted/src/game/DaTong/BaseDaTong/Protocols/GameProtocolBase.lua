local GameProtocol = CF.gameClass("GameProtocol", "game.GameBase.Protocols.GameProtocol")

GameProtocol.msgIsQiaoPiHua = {
    XY_ID = 1141,

    bIsQiaoPiHua = false, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.bIsQiaoPiHua = bis:readBool()
        return self
    end 
}

GameProtocol.msgEnableRememberCard = {
    XY_ID = 1442,

    bEnable = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.bEnable = bis:readBool()
        return self
    end 
}

GameProtocol.msgGameRoomLv = {
    XY_ID = 1451,

    iRoomLv = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.iRoomLv = bis:readInt32()
        return self
    end 
}

GameProtocol.msgHaveMingPai = {
    XY_ID = 1057,

    bMingPai = false,
    sSeat = 0, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.bMingPai = bis:readBool()
        self.sSeat = bis:readInt16()
        return self
    end 
}

GameProtocol.msgGameStart = {
    XY_ID = 1401,

    bIsStart = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nFlag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgGameStep = {
    XY_ID = 1402,

    iGameStep = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.iGameStep = bis:readInt32()
        return self
    end 
}

GameProtocol.msgHandCard = {
    XY_ID = 1403,

    ucSeat = 0,
    ucCount = 0,
    ucCards = {},
    bIsShow = 0,
    bPlayAni = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucSeat)
        bos:writeUInt8(self.ucCount)
        bos:writeBool(self.bIsShow)
        bos:writeBool(self.bPlayAni)
        for i=1,self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.ucSeat = bis:readUInt8()
        self.ucCount = bis:readUInt8()
        self.bIsShow = bis:readBool()
        self.bPlayAni = bis:readBool()
        self.ucCards = {}
        for i = 1,self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end 
        return self
    end 
}

GameProtocol.msgSwapSeat = {
    XY_ID = 1405,
    ucnowseat = 0,
    ucotherseat = 0 ,
    bIsHuanWei = false,
    bPlayAni = false,
    bIsSwapSeatEnd = false,


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.ucnowseat = bis:readUInt8()
        self.ucotherseat = bis:readUInt8()
        self.bIsHuanWei = bis:readBool()
        self.bPlayAni = bis:readBool()
        self.bIsSwapSeatEnd = bis:readBool()
        return self
    end 
}

GameProtocol.msgWaitTakeCard = {
    XY_ID = 1406,
    sSeat = 0,
    bSuccess = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bSuccess)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sSeat = bis:readInt16()
        self.bSuccess = bis:readBool()
        return self
    end 
}



GameProtocol.msgWaitSwapSeat = {
    XY_ID = 1408,
    sSeat = 0,
    bSuccess = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bSuccess)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sSeat = bis:readInt16()
        self.bSuccess = bis:readBool()
        return self
    end 
}

GameProtocol.msgOpenCard = {
    XY_ID = 1410,

    ucCardID = 0,
    bPlayAni = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucCardID)
        bos:writeBool(self.bPlayAni)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.ucCardID = bis:readUInt8()
        self.bPlayAni = bis:readBool()
        return self
    end 
}

GameProtocol.msgWaitOpenCard = {
    XY_ID = 1411,
    sSeat = 0,
    bSuccess = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bSuccess)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sSeat = bis:readInt16()
        self.bSuccess = bis:readBool()
        return self
    end 
}

GameProtocol.msgOpenCardSeat = {
    XY_ID = 1412,

    sFirstSeat = 0,
    sSecondSeat = 0,
    bPlayAni = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sFirstSeat = bis:readInt16()
        self.sSecondSeat = bis:readInt16()
        self.bPlayAni = bis:readBool()
        return self
    end 
}

GameProtocol.msgBase = {
    XY_ID = 1415,

    iBase = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:WriteInt(self.iBase)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.iBase = bis:readInt32()
        return self
    end 
}

GameProtocol.msgGameMut = {
    XY_ID = 1416,

    iWinTime = 0,
    iLostTime = 0,
    iGong = 0, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.iWinTime = bis:readInt32()
        self.iLostTime = bis:readInt32()
        self.iGong = bis:readInt32()
        return self
    end 
}

GameProtocol.msgPower = {
    XY_ID = 1418,

    sPowerSeat = 0,
    sPrePowerSeat = 0,

    new = function (self, o)
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

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sPowerSeat = bis:readInt16()
        self.sPrePowerSeat = bis:readInt16()
        return self
    end 
}

GameProtocol.msgClock = {
    XY_ID = 1419,

    sSeat = 0,
    sClock = 0,

    new = function (self, o)
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

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sSeat = bis:readInt16()
        self.sClock = bis:readInt16()
        return self
    end 
}

GameProtocol.msgSendAllCard = {
    XY_ID = 1421,

    ucCard = {},
    ucCardCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucCard = {}
        for i = 1,162 do
            self.ucCard[i] = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.ucCardCount = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgWaitSelecrCard = {
    XY_ID = 1422,

    ucCard = {},
    ucCardCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        for i = 1,27 do
            local cardID = 0
            if i <= self.ucCardCount then
                cardID = self.ucCard[i]
            end
            bos:writeUInt8(cardID)
        end
        bos:writeUInt8(self.ucCardCount) 
        return bos
    end,
}

GameProtocol.msgQiaoPiHua = {
    XY_ID = 1423,

    sSeat = 0,
    sIndex = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sIndex)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sSeat = bis:readInt16()
        self.sIndex = bis:readInt16()
        return self
    end 
}

GameProtocol.msgCanChaoDi = {
    XY_ID = 1427,

    bCanChaodi = 0,
    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.bCanChaodi = bis:readBool()
        self.sSeat = bis:readInt16()
        return self
    end 
}

GameProtocol.msgPlayerChaoDi = {
    XY_ID = 1428,

    bCanChaodi = 0,
    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bCanChaodi)
        bos:writeInt16(self.sSeat)
        return bos
    end,
}

GameProtocol.msgOutCards = {
    XY_ID = 1429,

    ucCards = {},
    ucCount = 0,
    sSeat = 0,
    sCardType = 0,
    bIsReconntce = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucCount)
        for i = 1,self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sCardType)
        bos:writeBool(self.bIsReconntce)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
         
        self.ucCount = bis:readUInt8()  
        self.ucCards = {} 
        for i = 1,self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end

        self.sSeat = bis:readInt16()
        self.sCardType = bis:readInt16()
        self.bIsReconntce = bis:readBool()
        return self
    end 
}

GameProtocol.msgShowOutCards = {
    XY_ID = 1430,

    ucCards = {},
    ucCount = 0,
    sSeat = 0,
    sCardType = 0,
    bIsReconntce = false,


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()

        bos:writeUInt8(self.ucCount)      
        for i = 1,self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sCardType)
        bos:writeBool(self.bIsReconntce)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
         
        self.ucCount = bis:readUInt8()
        self.ucCards = {}   
        for i = 1,self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end

        self.sSeat = bis:readInt16()
        self.sCardType = bis:readInt16()
        self.bIsReconntce = bis:readBool()
        return self
    end 
}

GameProtocol.msgWinOrder = {
    XY_ID = 1431,

    ucSeat = 0,
    ucOrder = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucSeat)
        bos:writeUInt8(self.ucOrder)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
         
        self.ucSeat = bis:readUInt8()   
        self.ucOrder = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgJokerData = {
    XY_ID = 1433,

    ucCards = {},
    ucCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
         
        self.ucCount = bis:readUInt8()  
        self.ucCards = {} 
        for i = 1,self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgAllOutRecord = {
    XY_ID = 1434,

    ucOutRecordCards = {},
    ucOutRecordCardsCount = {},
    sOutRecorfCardsType = {},
    sOutRecordCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
         
        for i = 0,CF.roomData:getMaxPlayer() - 1 do
            self.sOutRecordCount[i] = bis:readInt16()
            self.sOutRecorfCardsType[i] = {}
            self.ucOutRecordCardsCount[i] = {}
            self.ucOutRecordCards[i] = {}
            for j = 1,self.sOutRecordCount[i] do
                self.sOutRecorfCardsType[i][j] = bis:readInt16()
                self.ucOutRecordCardsCount[i][j] = bis:readUInt8()
                self.ucOutRecordCards[i][j] = {}
                for k = 1,self.ucOutRecordCardsCount[i][j] do
                    self.ucOutRecordCards[i][j][k] = bis:readUInt8()
                end
            end
        end    
        return self
    end 
}

GameProtocol.msgWinLost = {
    XY_ID = 1435,

    sEndType = 0,
    sGong = {},
    iScore = {},
    sXianShu = {},
    sWinOrder = {},
    sChaoDiSeat = 0,
    sEscapeSeat = 0,
    sWinMut = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sGong = {}
        self.iScore = {}
        self.sXianShu = {}
        self.sWinOrder = {}
        self.sEndType = bis:readInt16() 
        local maxPlayerCount = CF.roomData:getMaxPlayer()
        for i = 0, maxPlayerCount - 1 do  
            self.sGong[i] = bis:readInt16()
            self.iScore[i] = bis:readInt32()
            self.sXianShu[i] = {}
            for j = 0, 12 do
                self.sXianShu[i][j] = bis:readInt16()
            end
            self.sWinOrder[i] = bis:readInt16()
        end
        self.sChaoDiSeat = bis:readInt16()
        self.sEscapeSeat = bis:readInt16()
        self.sWinMut = bis:readInt16()
        return self
    end 
}

GameProtocol.msgTrust = {
    XY_ID = 1437,

    sTrustSeat = 0,
    bTrust = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sTrustSeat)
        bos:writeBool(self.bTrust)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
         
        self.sTrustSeat = bis:readInt16()   
        self.bTrust = bis:readBool()

        return self
    end 
}

GameProtocol.msgLianZhaBuDai = {
    XY_ID = 1443,

    bLianZhaBuDai = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.bLianZhaBuDai = bis:readBool()
        return self
    end 
}

GameProtocol.msgGameEnd = {
    XY_ID = 1445,

    bIsGameEnd = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bIsGameEnd)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.bIsGameEnd = bis:readBool()
        return self
    end 
}

GameProtocol.msgGameType = {
    XY_ID = 1447,

    ucGameType = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucGameType)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.ucGameType = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgGameGong = {
    XY_ID = 1450,

    sSeat = 4,
    iGongXian = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sSeat = bis:readInt16()
        self.iGongXian = bis:readInt32()
        return self
    end 
}

GameProtocol.msgRoomHostSeat = {
    XY_ID = 1453,

    seat = 4,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readInt16()
        return self
    end 
}

GameProtocol.msgPlayCount = {
    XY_ID = 1454,

    playCount = 0,
    maxPlayCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.playCount = bis:readInt16()
        self.maxPlayCount = bis:readInt16()
        return self
    end 
}

GameProtocol.msgGameRule = {
    XY_ID = 1455,

    strGameRule = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strGameRule)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.strGameRule = bis:readString()
        return self
    end 
}


GameProtocol.msgTotalResult = {
    XY_ID = 1456,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxXian = {},
    maxWin = {},
    totalDoubleKou = {},
    show = false,
    onePlayerTotalWinLost = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.playCount = bis:readInt16()
        for i = 0,3 do
            self.onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                self.onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = self.onePlayerTotalWinLost
            self.maxXian[i] = bis:readInt32()
            self.maxWin[i] = bis:readInt32()
            self.totalDoubleKou[i] = bis:readInt32()
        end
        self.show = bis:readBool()
        return self
    end 

}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1457,

    seat = 4,
    nRemainingTime = 0,
    bAgree = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt32(self.nRemainingTime)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        if bis:getAvailableSize() then
            self.nRemainingTime = bis:readInt32()
        end
        for i = 0 , CF.roomData:getMaxPlayer() do
            if bis:getAvailableSize() then
                self.bAgree[i] = bis:readBool()
            end
        end
        return self
    end 
}

GameProtocol.msgRespondDismiss = {
    XY_ID = 1458,

    seat = 4,
    agree = false,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readInt16()
        self.agree = bis:readBool()
        return self
    end 
}

GameProtocol.msgDismissFlag = {
    XY_ID = 1459,

    flag = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.flag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.flag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgAvatarUrl =
    {
        XY_ID = 1460,
        seat = 0,                 -- 座位号
        avatarUrl = "",           -- 头像地址

        new = function(self,o)
            o = o or {}
            setmetatable(o,{__index = self})
            return o
        end,

        bostream = function (self)
            local bos = un.network.IStream.new()
            bos:writeInt16(self.seat)
            local encodeURL = string.urlencode(self.avatarUrl)
            bos:writeString(encodeURL)
            return bos
        end,

        bistream = function( self, buff, bufflen )
            local bis = un.network.OStream.new(buff)
            self.seat = bis:readInt16()
            self.avatarUrl = string.urldecode(bis:readString())
            return self
        end
    }

GameProtocol.msgClientForward =
{

    XY_ID = 1461,
    CF_ID = {
        FastVoice = 1,
        PlayerHeadEffect = 2,
        WireBreakSignal = 3,
        MobileSignal = 4,
        Speak = 5,
        ChatMsgEmoji = 6,
        ChatMsgText = 7,
        PropAni = 8,
    },
    sSeat = 0,                 -- 座位号
    sID = 0,
    strData = "",

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sID)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.sID = bis:readInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgRequestSwapSeat =
{
    XY_ID = 1462,
    srcSeat = 4,
    destSeat = 4,        

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.srcSeat)
        bos:writeInt16(self.destSeat)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.srcSeat = bis:readInt16()
        self.destSeat = bis:readInt16()
        return self
    end
}

GameProtocol.msgRespondSwapSeat =
{
    XY_ID = 1463,
    seat = 0,
    agree = false,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat  = bis:readInt16()
        self.agree = bis:readBool()
        return self
    end
}

GameProtocol.msgSwapSeatFlag = {
    XY_ID = 1464,
    srcSeat = 0,
    destSeat = 0,       

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.srcSeat)
        bos:writeInt16(self.destSeat)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.srcSeat = bis:readInt16()
        self.destSeat = bis:readInt16()
        return self
    end
}

GameProtocol.msgShowSwapSeat = 
{
    XY_ID = 1465,

    bIsShowSwapSeat = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.bIsShowSwapSeat = bis:readBool()
        return self
    end 
}

GameProtocol.msgObviousCardsData = 
{
        XY_ID = 1472,
        allRoundCount = 0,
        ObviousCards = {},
        playerID = {},
        
        new = function(self,o)
            o = o or {}
            setmetatable(o,{__index = self})
            return o
        end,

        bistream = function( self, buff, bufflen )
            local bis = un.network.OStream.new(buff)
            self.allRoundCount = bis:readInt32()
            for i = 1,self.allRoundCount do
                self.ObviousCards[i] = {}
                self.ObviousCards[i].ucCount = bis:readUInt8()
                self.ObviousCards[i].ucCards = {}
                for j = 1,self.ObviousCards[i].ucCount do
                    self.ObviousCards[i].ucCards[j] = bis:readUInt8()
                end
            end
            if bis:getAvailableSize() > 0 then
                for i = 1,self.allRoundCount do
                    self.playerID[i] = bis:readInt32()
                end
            end
            
            return self
        end
}

GameProtocol.msgDismissCountdown =
    {
        XY_ID = 1473,
        sSeat = 0,
        reqSeat = 0,
        nTime = 0,--剩余倒计时时间
        iAgrees = {},    --玩家同意信息
        new = function (self, o)
            o = o or {}
            setmetatable(o, {__index = self})
            return o
        end,

        bostream = function (self)
            local bos = un.network.IStream.new()
            bos:writeInt16(self.sSeat)
            bos:writeInt16(self.reqSeat)
            bos:writeInt16(self.nTime)
            for i = 0,CF.roomData:getMaxPlayer() - 1 do
                bos:writeInt16(self.iAgrees[i])
            end
            return bos
        end,

        bistream = function (self,buff, bufflen)
            local bis = un.network.OStream.new(buff)
            
            self.sSeat = bis:readInt16()
            self.reqSeat = bis:readInt16()
            self.nTime = bis:readInt16()
            self.iAgrees = {}
            for i = 0,CF.roomData:getMaxPlayer() - 1 do
                self.iAgrees[i] = bis:readInt16()
            end
            return self
        end 
    }

GameProtocol.msgAllHandCards = 
    {
        XY_ID = 1474,
        allRoundCount = 0,
        ObviousCards = {},
        playerID = {},

        new = function(self,o)
            o = o or {}
            setmetatable(o,{__index = self})
            return o
        end,

        bistream = function( self, buff, bufflen )
            self.ObviousCards = {}
            self.playerID = {}
            local bis = un.network.OStream.new(buff)
            self.allRoundCount = bis:readInt32()
            for i = 1,self.allRoundCount do
                self.ObviousCards[i] = {}
                self.ObviousCards[i].ucCount = bis:readUInt8()
                self.ObviousCards[i].ucCards = {}
                for j = 1,self.ObviousCards[i].ucCount do
                    self.ObviousCards[i].ucCards[j] = bis:readUInt8()
                end
            end
            if bis:getAvailableSize() > 0 then
                for i = 1,self.allRoundCount do
                    self.playerID[i] = bis:readInt32()
                end
            end

            return self
        end
    }
    
GameProtocol.msgNoOutGong = {
    XY_ID = 1475,
    iCaiXiang = false,
    sNoOutGong = {},
    sCaiXiang = {},
    

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
         
        self.iCaiXiang = bis:readBool()
        self.sNoOutGong = {}
        for i = 0,CF.roomData:getMaxPlayer() - 1 do  
            self.sNoOutGong[i] = bis:readInt16()
        end
        self.sCaiXiang = {}
        for i = 0,CF.roomData:getMaxPlayer() - 1 do  
            self.sCaiXiang[i] = bis:readInt16()
        end
        return self
    end 
}

GameProtocol.PlayerLeave = {
    XY_ID = 11101,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        return bos
    end,
} 

GameProtocol.msgBaseClientForwardEx =
{

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
    XY_ID = 1409,

    ucJPQ = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        for i=1,15 do
            bos:writeUInt8(self.ucJPQ[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucJPQ = {}
        for i = 1,15 do
            self.ucJPQ[i] = bis:readUInt8()
        end 
        return self
    end 
}

GameProtocol.msgUseMarker = {
    XY_ID = 1474,

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

return GameProtocoln�