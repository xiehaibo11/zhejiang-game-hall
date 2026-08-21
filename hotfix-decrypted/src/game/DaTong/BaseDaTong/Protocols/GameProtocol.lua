local GameProtocol = CF.gameClass("GameProtocol", "game.DaTong.BaseDaTong.Protocols.GameProtocolBase")

--请求投降
GameProtocol.msgRequestSurrender = {
    XY_ID = 1474,

    sReqSeat = 0,

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sReqSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sReqSeat = bis:readInt16()
        return self
    end 
}
-- 点击投降或者买牌
GameProtocol.msgRespondSurrender = {
    XY_ID = 1475,
    sResSeat = 0,
    -- 1投降 2 买牌
    sFlag    = 0,

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()    
        bos:writeInt16(self.sResSeat)
        bos:writeInt16(self.sFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sResSeat = bis:readInt16()
        self.sFlag = bis:readInt16()
        return self
    end 
}
-- 投降买牌
GameProtocol.msgSurrenderCountDown = {
    XY_ID = 1476,

    sReqSeat = 0, -- 请求投降玩家的座位号
    sResSeat = 0, -- 投降或者是买牌玩家的座位号
    sFlag = 0,    -- 0啥也没做  1 投降 2 买牌
    nTime = 0,

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()    
        bos:writeInt16(self.sReqSeat)
        bos:writeInt16(self.sResSeat)
        bos:writeInt16(self.sFlag)
        bos:writeInt16(self.nTime)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sReqSeat = bis:readInt16()
        self.sResSeat = bis:readInt16()
        self.sFlag = bis:readInt16()
        self.nTime = bis:readInt16()
        return self
    end 
}

-- 桌面闷拿分
GameProtocol.msgScoreTableShowTurn = {
    XY_ID = 1477,
    sScore = 0,

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()    
        bos:writeInt16(self.sScore)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sScore = bis:readInt16()
        return self
    end    
}

-- 每人的闷拿分
GameProtocol.msgScoreEveryPlayerTurn = {
    XY_ID = 1478,
    sScore = {},

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        for i = 1 , CF.roomData:getMaxPlayer() do
            bos:writeInt16(self.sScore[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1 , CF.roomData:getMaxPlayer() do
            self.sScore[i] = bis:readInt16()
        end
        return self
    end    
}

-- 炸弹分
GameProtocol.msgScoreBombTurn = {
    XY_ID = 1479,
    sBombScore = {},

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        for i = 1 , CF.roomData:getMaxPlayer() do
            bos:writeInt16(self.sBombScore[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1 , CF.roomData:getMaxPlayer() do
            self.sBombScore[i] = bis:readInt16()
        end
        return self
    end 
}

GameProtocol.msgTotalResultDT = {
    XY_ID = 1480,
    sPlayCount = 0,
    bShow = false,
    sTotalScore = {},
    sEveryScore = {}, -- 二维

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPlayCount = bis:readInt16()
        self.bShow = bis:readBool()
        for i = 0 , CF.roomData:getMaxPlayer()-1 do
            self.sTotalScore[i] = bis:readInt16()
            local  everyScore = {}
            for j = 1 , self.sPlayCount do
                 everyScore[j] = bis:readInt16()
            end
            self.sEveryScore[i] = everyScore
        end
        return self
    end 
}

GameProtocol.msgWinLostDT = {
    XY_ID = 1481,
    sEndType = 0,
    sGraspScore = {},   -- 本轮抓分
    sBombScore = {},    -- 讨赏优胜值（炸弹分）
    sRankScore = {},    -- 名次优胜值
    sTotalScore = {},
    sWinOrder = {},     --名次 {[0] = 2 ,[1] = 3, [2] = 4, [3] = 1}  服务端座位号-> 名次（出完牌顺序）
    sDoubleOrSingle = {}, --单扣或者双扣 {[0] = 0 ,[1] = 0, [2] = 2 , [3] = 2}  1 单扣，2双扣，0 无
    sCombCount = {},    --炸弹数量
    allComb = {},       --二维
    bIsFinal = false,   --是否最后一局
    sCombType = {},     --小结束显示牌型[seat][cardtype]

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        self.allComb = {}
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sEndType = bis:readInt16()
        for i = 1 , CF.roomData:getMaxChairs() do
            if bis:getAvailableSize() > 0 then
                self.sGraspScore[i] = bis:readInt16()
            end
            if bis:getAvailableSize() > 0 then
                self.sBombScore[i] = bis:readInt16()

            end
            if bis:getAvailableSize() > 0 then
                self.sRankScore[i] = bis:readInt16()
            end

            if bis:getAvailableSize() > 0 then
                self.sTotalScore[i] = bis:readInt16()
            end

            if bis:getAvailableSize() > 0 then
                self.sWinOrder[i] = bis:readInt16()
            end

            if bis:getAvailableSize() > 0 then
                self.sDoubleOrSingle[i] = bis:readInt16()
            end

            if bis:getAvailableSize() > 0 then
                self.sCombCount[i] = bis:readInt16()
            end
            local combCount = self.sCombCount[i]
            self.allComb[i] = {}
            for j = 1 , combCount do
                self.allComb[i][j] = {}
                if bis:getAvailableSize() > 0 then
                    self.allComb[i][j].combScore = bis:readInt16()
                end
                if bis:getAvailableSize() > 0 then
                    self.allComb[i][j].ucCount = bis:readUInt8()
                end
                 self.allComb[i][j].ucCards = {}
                 for k = 1 , self.allComb[i][j].ucCount do
                    if bis:getAvailableSize() > 0 then
                        self.allComb[i][j].ucCards[k] = bis:readUInt8()
                    end
                 end
            end            
        end
        if bis:getAvailableSize() > 0 then
            self.bIsFinal = bis:readBool()
        end

        if bis:getAvailableSize() > 0 then
            for i = 1 , CF.roomData:getMaxChairs() do
                self.sCombType[i] = {}
                local combCount = self.sCombCount[i]
                if combCount then
                    for j = 1 , combCount do
                        self.sCombType[i][j] = bis:readInt16()
                    end
                end
            end
        end
        -- dump(self.sCombType,"hcc>>sCombType: ")
        return self
    end
}
--投降标记
GameProtocol.msgSurrenderFlag = {
    XY_ID = 1482,
    sflag = {}, -- 标记，0能投降，1不能投降
    
    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1 , CF.roomData:getMaxPlayer() do
            self.sflag[i]= bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgTotalScore = {
    XY_ID = 1483,
    sTotalScore = {},
    
    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1 , CF.roomData:getMaxPlayer() do
            self.sTotalScore[i]= bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgReqShuffle = {
    XY_ID = 1484,

    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        return self
    end 
}

GameProtocol.msgShuffleSeats = {
    XY_ID = 1485,

    sSeat = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
            for i = 0 , CF.roomData:getMaxPlayer() - 1 do
                bos:writeInt16(self.sSeat[i])
            end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0 , CF.roomData:getMaxPlayer() - 1 do
            self.sSeat[i] = bis:readInt16()
        end
        return self
    end 
}

GameProtocol.msgShuffleFinish = {
    XY_ID = 1486,

    bFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bFlag = bis:readBool()
        return self
    end 
}

GameProtocol.msgWaitShowBombAni = {
    XY_ID = 1487,

    sSeat = 0,
    bIsSuccess = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bIsSuccess)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bIsSuccess = bis:readBool()
        return self
    end 
}

GameProtocol.msgWaitShowBomb = {
    XY_ID = 1488,

    sSeat = 0,
    bIsSuccess = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bIsSuccess)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bIsSuccess = bis:readBool()
        return self
    end 
}

GameProtocol.msgFourJokerScore = {
    XY_ID = 1489,

    sSeat = 0,
    sScore = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sScore)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.sScore = bis:readInt16()
        return self
    end 
}

GameProtocol.msgStableBombSeat = {
    XY_ID = 1490,

    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        return self
    end 
}

GameProtocol.msgFFZSeat = {
    XY_ID = 1491,
    sSeat = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
            for i = 0 , CF.roomData:getMaxPlayer() - 1 do
                bos:writeInt16(self.sSeat[i])
            end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0 , CF.roomData:getMaxPlayer() - 1 do
            self.sSeat[i] = bis:readInt16()
        end
        return self
    end 
}

GameProtocol.msgFFZBomb = {
    XY_ID = 1492,

    sSeat = 0,
    bAnimation = true,
    sCombCount = 0,
    bIsNoBomb = false,
    allComb = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        self.sSeat = 0
        self.bAnimation = true
        self.sCombCount = 0
        self.bIsNoBomb = false
        self.allComb = {}
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bAnimation = bis:readBool()
        self.sCombCount = bis:readInt16()
        self.bIsNoBomb = bis:readBool()
        if self.sCombCount  > 0 then
            for i = 1 , self.sCombCount  do
                self.allComb[i] = {}
                self.allComb[i].combScore = bis:readInt16()
                self.allComb[i].cardType = bis:readInt16()
                self.allComb[i].isTongSe = bis:readBool()
                self.allComb[i].ucCount = bis:readUInt8()
                self.allComb[i].ucCards = {}
                for j = 1 , self.allComb[i].ucCount do
                    self.allComb[i].ucCards[j] = bis:readUInt8()
                end
            end
        end
        return self
    end 
}

GameProtocol.msgFFZBombOnce = {
    XY_ID = 1493,
    sCombCount = {},    --炸弹数量
    allComb = {},       --炸弹牌

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        self.sCombCount = {}
        self.allComb = {}
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1 , CF.roomData:getMaxPlayer() do
            self.sCombCount[i] = bis:readInt16()
            local combCount = self.sCombCount[i]
            self.allComb[i] = {}
            if combCount > 0 then
                for j = 1 , combCount do
                     self.allComb[i][j] = {}                
                     self.allComb[i][j].combScore = bis:readInt16()
                     self.allComb[i][j].cardType = bis:readInt16()
                     self.allComb[i][j].ucCount = bis:readUInt8()
                     self.allComb[i][j].ucCards = {}
                     for k = 1 , self.allComb[i][j].ucCount do
                        self.allComb[i][j].ucCards[k] = bis:readUInt8()
                     end
                end            
            end
        end
        return self
    end
}

GameProtocol.msgFFZJoker = {
    XY_ID = 1494,
    sSeat = 0,    
    ucCount = 0,
    ucCards = {},

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        self.sSeat = 0   
        self.ucCount = 0
        self.ucCards = {}
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        if self.ucCount > 0 then
            for i=1,self.ucCount do
                self.ucCards[i] = bis:readUInt8()
            end
        end
        return self
    end
}

GameProtocol.msgStableBombSeatArray = {
    XY_ID = 1496,
    sSeatArray = {},

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        self.sSeatArray = {}
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0 , CF.roomData:getMaxPlayer() - 1 do
            self.sSeatArray[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgGraspScoreCards = {
    XY_ID = 1497,
    allScoreCards = {},       --所有分牌

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        self.allScoreCards = {}
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1 , CF.roomData:getMaxPlayer() do
            self.allScoreCards[i] =  {}
            self.allScoreCards[i].score = bis:readInt16()
            self.allScoreCards[i].ucCount = bis:readUInt8()
            self.allScoreCards[i].ucCards = {}
            for j = 1 , self.allScoreCards[i].ucCount do
                self.allScoreCards[i].ucCards[j] = bis:readUInt8()
            end
        end
        return self
    end
}

GameProtocol.msgNormalNoBoom = {
    XY_ID = 1498,

    nNoBoomSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nNoBoomSeat = bis:readInt32()
        return self
    end 
}
--六人开牌座位
GameProtocol.msgOpenCardSeatSix = {
    XY_ID = 1499,

    sFirstSeat = 0,
    sSecondSeat = 0,
    sThirdSeat = 0,
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
        self.sThirdSeat = bis:readInt16()
        self.bPlayAni = bis:readBool()
        return self
    end 
}

return GameProtocol  �K  