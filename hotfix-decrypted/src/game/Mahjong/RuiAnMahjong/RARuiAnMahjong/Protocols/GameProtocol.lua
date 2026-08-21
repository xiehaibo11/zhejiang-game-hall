local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgComb = {
    nFlag = 0,                         -- 牌组标志
    nFromSeat = 0,                     -- 进牌数据
    nCount = 0,                        -- 牌张数
    nMahs = {},                        -- 牌
    nInCount = 0,                      -- 进牌张数
    nInMahs = {},                      -- 进牌

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nFlag)
        bos:writeUInt8(self.nFromSeat)
        bos:writeUInt8(self.nCount)
        for i = 1 , self.nCount do
            bos:writeUInt8(self.nMahs[i])
        end
        bos:writeUInt8(self.nInCount)
        for i = 1 , self.nInCount do
            bos:writeUInt8(self.nInMahs[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        self.nFromSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1 , self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        self.nInCount = bis:readUInt8()
         self.nInMahs = {}
        for i = 1 , self.nInCount do
            self.nInMahs[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgResult = {
    XY_ID = 1106,

    nWinLost = {},           --本局优胜值
    nCountHu = {},           --牌面弧数
    nCountTai = {},          --麻将台数
    nToTalCountHu = {},      --总计弧数
    nPlayerState = {},       --玩家状态
    danfang = 0,
    nIsSupportDapao = false,      -- 是否打炮玩法
    nRealPaoScore = {},  -- 玩家总炮分
    nCountSeatPao = {},   --  玩家炮数
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nCountHu[i] = bis:readInt32()
            self.nCountTai[i] = bis:readInt32()
            self.nToTalCountHu[i] = bis:readInt32()
            self.nPlayerState[i] = bis:readUInt8()
        end
        self.danfang =  bis:readInt32()
        if bis:getAvailableSize() > 0 then
               self.nIsSupportDapao = bis:readBool()
               for i = 0,3 do
                      self.nRealPaoScore[i]  = bis:readInt32()
                      self.nCountSeatPao[i] = bis:readInt32()
               end
        end
        return self
    end
}

GameProtocol.msgQiaoPiHua = {
    XY_ID = 1107,

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
        bos:writeUInt16(self.sSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucQiaoPiHua = bis:readUInt8()
        self.sSeat = bis:readUInt16()
        return self
    end
}

GameProtocol.msgTaiName = {
    XY_ID = 1109,

    fanCount = {},     --台数
    fanName = {},  --台数名称

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
            for j = 1,self.fanCount[i] do
                self.fanName[i][j] = bis:readInt32()
            end
        end
        return self
    end
}

GameProtocol.msgCrossHu = {
    XY_ID = 1110,

    sSeat = 0,     --座位
    bCrossHu = 0,  --是否过胡

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
    XY_ID = 1111,

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

GameProtocol.msgDisMissTime = {
    XY_ID = 1044,

    iCountTime = 0,
    bShow = false,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.iCountTime = bis:readInt32()
        self.bShow = bis:readBool()
        return self
    end
}

GameProtocol.msgPlayTings = {
    XY_ID = 558,

    nSeat = 0,
    nCount = 0,
    tingmahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.tingmahs = {}

        for i = 1 , 17 do
            self.tingmahs[i] = {}
            self.tingmahs[i].nCount = bis:readUInt8()
            self.tingmahs[i].from = bis:readUInt8()
            self.tingmahs[i].tmahs = {}

            for k = 1, 5 do
                self.tingmahs[i].tmahs[k] = {};
                self.tingmahs[i].tmahs[k].mah = bis:readUInt8()
                self.tingmahs[i].tmahs[k].ft = bis:readInt32()
            end
        end

        return self
    end
}

GameProtocol.msgShowDismiss = {
    XY_ID = 1156,

    bShow = false,
    bIsDismiss = false,
    nLeftTime = nil,
    nLengQue = nil,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bShow = bis:readBool()
        self.bIsDismiss = bis:readBool()
        self.nLeftTime = bis:readInt32()
        self.nLengQue = bis:readBool()
        return self
    end
}

GameProtocol.msgNowTingInfo = {
    XY_ID = 1157,

    seat = 0,
    sTingSize = 0,
    bUniversalHu = false,
    nTingMah = {},
    sTingMahCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.sTingSize)
        bos:writeBool(self.bUniversalHu)
        for i = 1, self.sTingSize do
            bos:writeUInt8(self.nTingMah[i])
            bos:writeInt16(self.sTingMahCount[i])
        end
        return bos
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.sTingSize = bis:readInt16()
        self.bUniversalHu = bis:readBool()
        for i = 1, self.sTingSize do
            self.nTingMah[i] = bis:readUInt8()
            self.sTingMahCount[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgLogCtoS = {
    XY_ID = 1200,

    nLogStr = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeCString(self.nLogStr)
        return bos
    end
}

return GameProtocolX   