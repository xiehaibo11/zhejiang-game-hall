local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgSiHuaHu = {
    XY_ID = 1066,

    isSiHuaHu = true,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.isSiHuaHu)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.isSiHuaHu = bis:readBool()
        return self
    end
}

GameProtocol.msgResult = {
    XY_ID = 1026,
  
    nWinLost = {},           --本局优胜值
    nPlayerState = {},       --玩家状态
    danfang = 0,      

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
       
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nPlayerState[i] = bis:readUInt8()
        end
        self.danfang =  bis:readInt32()
        
        return self
    end 
}

GameProtocol.msgServicePay = {
    XY_ID = 1027,

    nBaseScore = 0,
    nServicePay = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nBaseScore = bis:readInt32()
        self.nServicePay = bis:readInt32()
        return self
    end 
}

GameProtocol.msgQiaoPiHua = {
    XY_ID = 1030,

    ucQiaoPiHua = 0,
    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucQiaoPiHua)
        bos:writeInt16(self.sSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucQiaoPiHua = bis:readUInt8()
        self.sSeat = bis:readInt16()

        return self
    end 
}
    
GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    show = false,
    maxWinByOwnNum = {},
    m_iFlowerNum = {},               --累计花分
    maxJiePaoNum = {},
    maxScoreOfTotal = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.playCount = bis:readUInt16()
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
        end
        self.show = bis:readBool()
        
        if bis:getAvailableSize() > 0 then
            for i = 0,3 do 
                self.maxWinByOwnNum[i] = bis:readInt32()
                self.m_iFlowerNum[i] = bis:readInt32()
                self.maxJiePaoNum[i] = bis:readInt32()
                self.maxScoreOfTotal[i] = bis:readInt32()
            end
        end            
        return self
    end 
}

GameProtocol.msgEndType = {
    XY_ID = 1060,

    sEndType = 0,
    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sEndType = bis:readUInt16()
        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgTaiName = {
    XY_ID = 1061,

    fanCount = {},     --台数
    fanName = {},  --台数名称
    everyFanCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        for i = 0,3 do
            self.fanCount[i] = bis:readInt32()
            self.fanName[i] = {}
            self.everyFanCount[i] = {}
            for j = 0,26 do
                self.fanName[i][j] = bis:readInt32()
                self.everyFanCount[i][j] = bis:readInt32()
            end
        end
        return self
    end 
}

GameProtocol.msgCrossHu = {
    XY_ID = 1048,

    sSeat = 0,     --座位
    bCrossHu = false,  --是否过胡

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readUInt16()
        self.bCrossHu = bis:readBool()
        return self
    end 
}

GameProtocol.msgHuMah = {
    XY_ID = 1049,

    sHuMahPos = 0,  --胡牌位置

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sHuMahPos = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgFaceAni = {
    XY_ID = 1050,

    bIsOpen = false,        --是否开启
    sMinUseMoney = 0,       --最小使用金币
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.bIsOpen = bis:readBool()
        self.sMinUseMoney = bis:readInt32()
        return self
    end 
}

GameProtocol.msgFlowerName = {
    XY_ID = 1062,

    iFlowerCount = {},     --花数
    iFlowerName = {},      --花数名称
    iEveryFlowerCount = {},--花数花数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0,3 do
            self.iFlowerCount[i] = bis:readInt32()
            self.iFlowerName[i] = {}
            self.iEveryFlowerCount[i] = {}
            for j = 0,26 do
                self.iFlowerName[i][j] = bis:readInt32()
                self.iEveryFlowerCount[i][j] = bis:readInt32()
            end

        end
        return self
    end
}
GameProtocol.msgBaoPai = {
    XY_ID = 1067,

    bBaoPai = {} ,  --是否过胡

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
       local bis = un.network.OStream.new(buff)

        for i = 0, 3 do
            self.bBaoPai[i] = bis:readBool()
        end
        return self
    end
}
GameProtocol.msgBaoPaiFlag = {
    XY_ID = 1069,

    nSeat = 0,
    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nFlag = bis:readBool()
        return self
    end 
}
GameProtocol.msgBPFlowerName = {
    XY_ID = 1070,

    nSeat = 0,
    nFlowerCounts = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt16()
        self.nFlowerCounts = bis:readInt32()
        return self
    end 
}

--续桌相关
GameProtocol.msgAskContinue = {
    XY_ID = 1150,

    nflag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nflag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nflag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgRespContinue = {
    XY_ID = 1151,

    nSeat = 0,
    bContinue = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeBool(self.bContinue)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.bContinue = bis:readBool()
        return self
    end 
}

GameProtocol.msgContinueFlag = {
    XY_ID = 1152,

    sFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sFlag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgContinueTips = {
    XY_ID = 1153,

    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readInt32()
        return self
    end 
}


return GameProtocol*(