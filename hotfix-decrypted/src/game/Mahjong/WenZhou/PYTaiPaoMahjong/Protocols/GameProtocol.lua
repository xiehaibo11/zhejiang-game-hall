local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,
  
    nWinLost = {},           --本局优胜值
    nCountTai = {},          --麻将台数             

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
       
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nCountTai[i] = bis:readInt32()
        end

        return self
    end 
}

GameProtocol.msgTaiName = {
    XY_ID = 1046,

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
    XY_ID = 1047,

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

GameProtocol.msgCrossPeng = {
    XY_ID = 1048,

    sSeat = 0,     --座位
    bCrossPeng = false,  --是否过碰

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readUInt16()
        self.bCrossPeng = bis:readBool()
        return self
    end 
}

GameProtocol.msgBaoPei = {
    XY_ID = 1049,

    sSeat = 0,      --座位

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgQiHuLimit = {
    XY_ID = 1050,

    sSeat = 0,     --座位
    iHuTaiCount = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readUInt16()
        self.iHuTaiCount = bis:readInt32()
        return self
    end 
}

GameProtocol.msgJudgeShaZhu = {
    XY_ID = 1051,

    sSeat = 0,     --座位
    nflag = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readUInt16()
        self.nflag = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgHuFanType = {
    XY_ID = 1052,

    fanName = {},  --台数名称
    everyFanCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.fanName = {}
        self.everyFanCount = {}
        for j = 0,26 do
            self.fanName[j] = bis:readInt32()
            self.everyFanCount[j] = bis:readInt32()
        end
        return self
    end 
}

GameProtocol.msgAddBeiSeat = {
    XY_ID = 1156,

    nShow = false,
    nAddFlag = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nShow = bis:readBool()
        self.nAddFlag = {}
        for j = 0,3 do
            self.nAddFlag[j] = bis:readBool()
        end

        return self
    end 
}

GameProtocol.msgFanBeiResult = {
    XY_ID = 1157,

    nFanScore = {},
    nAddFanScore = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nFanScore = {}
        self.nAddFanScore = {}
        for j = 0,3 do
            self.nFanScore[j] = bis:readInt32()
            self.nAddFlag[j] = bis:readInt32()
        end

        return self
    end 
}

GameProtocol.msgPlayTings = {
    XY_ID = 1160,
    nSeat = 0,
    nCount = 0,             --张数
    nFanShu = {},
    nHuMah = {},
    nMahs = {},             --牌


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nSeat = bis:readUInt8()
        self.nCount = bis:readInt32()
        self.nFanShu = {}
        self.nMahs = {}
        for i = 1,17 do
            local fanShu = {}
            self.nFanShu[i] ={}
            for j = 1,34 do
                fanShu[j] = bis:readInt32()
            end
            self.nFanShu[i] = fanShu
        end
        for i = 1,17 do
            self.nHuMah[i] = {}
            local huMah = {}
            for j = 1,34 do
                huMah[j] = bis:readUInt8()
            end 
            self.nHuMah[i] =  huMah 
        end
        for i = 1,17 do
            self.nMahs[i] = bis:readUInt8()
        end

        return self

    end 
}

GameProtocol.msgPlayCanHus = {
    XY_ID = 1161,
    nSeat = 0,
    nCount = 0,             --张数
    nFanShu = {}, 
    nMahs = {},             --牌

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nSeat = bis:readUInt8()
        self.nCount = bis:readInt32()
        self.nFanShu = {}
        self.nMahs = {}
        for i = 1, 34 do
            self.nFanShu[i] = bis:readInt32()
        end
        for i = 1, 34 do
            self.nMahs[i] = bis:readUInt8()
        end
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

return GameProtocol
4$  