local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgComb = {
    nFlag = 0, -- 牌组标志
    nFromSeat = 0, -- 进牌数据
    nCount = 0, -- 牌张数
    nMahs = {}, -- 牌
    nInCount = 0, -- 进牌张数
    nInMahs = {}, -- 进牌
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nFlag = bis:readUInt8()
        self.nFromSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1, self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        self.nInCount = bis:readUInt8()
        self.nInMahs = {}
        for i = 1, self.nInCount do
            self.nInMahs[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {}, --胜负
    nFanScore = {}, --番数
    nBase = 0, --当前底数
    nBaseScore = 0, --底分
    nMult = 0, --倍数
    nHuType = 0, --胡牌类型（0表示软牌，1表示硬牌，2表示双翻）
    df = {}, --单放
    nGuaFe = {}, --胜负
    nShowWinLost = {}, --番数
    bIsTuiGang = {},
    nFanCount = {}, --番数
    nFanID = {},
    nFromSeat = 4,
    nKongType = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nWinLost = {}
        self.nFanScore = {}
        self.nGuaFe = {}
        self.nShowWinLost = {}
        self.bIsTuiGang = {}
        self.nFanCount = {}
        self.nFanID = {}
        self.df = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
            self.nFanScore[i] = bis:readInt64()
        end

        self.nBase = bis:readInt32()
        self.nBaseScore = bis:readInt32()
        self.nMult = bis:readInt32()
        self.nHuType = bis:readInt32()

        for i = 0, 3 do
            self.df[i] = bis:readUInt8()
            self.nGuaFe[i] = bis:readInt32()
            self.nShowWinLost[i] = bis:readInt64()
            self.bIsTuiGang[i] = bis:readBool()
            self.nFanCount[i] = bis:readInt16()
            self.nFanID[i] = {}
            for j = 1, self.nFanCount[i] do
                self.nFanID[i][j] = bis:readInt16()
            end
        end
        self.nFromSeat = bis:readInt16()

        for i = 0, 3 do
            self.nKongType[i] = {}
            for j = 0, 2 do
                self.nKongType[i][j] = bis:readInt32()
            end
        end
        return self
    end
}

GameProtocol.msgQiaoPiHua = {
    XY_ID = 1028,
    ucQiaoPiHua = 0,
    sSeat = 0,
    new = function(self, o)
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
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucQiaoPiHua = bis:readUInt8()
        self.sSeat = bis:readInt16()
        return self
    end
}

GameProtocol.msgGuaFeng = {
    XY_ID = 1059,
    iTotalScore = {},
    iCurScore = {},
    sType = 0,
    sSeat = 0,
    bRelink = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        self.iTotalScore = {}
        self.iCurScore = {}
        for i = 0, 3 do
            bos:writeInt32(self.iTotalScore[i])
            bos:writeInt32(self.iCurScore[i])
        end
        bos:writeInt16(self.sType)
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bRelink)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iTotalScore = {}
        self.iCurScore = {}
        for i = 0, 3 do
            self.iTotalScore[i] = bis:readInt32()
            self.iCurScore[i] = bis:readInt32()
        end
        self.sType = bis:readInt16()
        self.sSeat = bis:readInt16()
        self.bRelink = bis:readBool()
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1064,
    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    disCardCount = {},
    show = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.playCount = bis:readInt16()
        for i = 0, 3 do
            local onePlayerTotalWinLost = {}
            for j = 1, self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.disCardCount[i] = bis:readInt32()
        end
        self.show = bis:readBool()
        return self
    end
}

GameProtocol.msgCrossHu = {
    XY_ID = 1065,
    sSeat = 0, --座位
    bCrossHu = 0, --是否过胡
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.bCrossHu = bis:readBool()
        return self
    end
}

return GameProtocolb