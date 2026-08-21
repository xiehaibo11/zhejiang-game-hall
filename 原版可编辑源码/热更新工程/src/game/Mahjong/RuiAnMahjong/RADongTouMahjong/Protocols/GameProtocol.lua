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
    XY_ID = 1026,

    nWinLost = {},           --本局优胜值
    nCountTai = {},          --麻将台数
    nToTalCountHu = {},      --总计弧数
    nPlayerState = {},       --玩家状态
    danfang = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLost = {}
        self.nCountTai = {}
        self.nToTalCountHu = {}
        self.nPlayerState = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nCountTai[i] = bis:readInt32()
            self.nToTalCountHu[i] = bis:readInt32()
            self.nPlayerState[i] = bis:readUInt8()
        end
        self.danfang =  bis:readInt32()
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    show = false,
    nHuNum = {},        --胡的次数
    nMaxTaiNum={},      --最大台数
    nMaxScore={},

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
                self.nHuNum[i] = bis:readInt32()
                self.nMaxTaiNum[i] = bis:readInt32()
                self.nMaxScore[i] = bis:readInt32()
            end
        end
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
    XY_ID = 1046,

    fanName = {},  --台数名称

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0,3 do
            self.fanName[i] = {}
            for j = 0,26 do
                self.fanName[i][j] = bis:readInt32()
            end
        end
        return self
    end
}

GameProtocol.msgCrossHu = {
    XY_ID = 1048,

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

GameProtocol.msgEndType = {
    XY_ID = 1045,

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

return GameProtocol