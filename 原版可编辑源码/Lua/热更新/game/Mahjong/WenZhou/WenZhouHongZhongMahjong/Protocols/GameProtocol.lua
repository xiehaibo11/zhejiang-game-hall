local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,
  
    nWinLost = {},          --胜负
    nFanScore = {},            --番数
    nBase = 0,              --当前底数
    nBaseScore = 0,         --底分
    nMult = 0,              --倍数
    nHuType = 0,            --胡牌类型（0表示软牌，1表示硬牌，2表示双翻）
    df = {},                --单放
    nGuaFe = {},            --胜负
    nShowWinLost = {},      --番数
    bIsTuiGang = {},
    nFanCount = {},            --番数
    nFanID = {},
    nFromSeat = 4,
    nKongType = {},
    nZhongMaCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
       
        self.nWinLost = {}
        self.nFanScore = {}
        self.nGuaFe = {}
        self.nShowWinLost = {}
        self.bIsTuiGang = {}
        self.nFanCount = {}
        self.nFanID = {}
        self.df = {}
        for i = 0, 3  do
            self.nWinLost[i] = bis:readInt64()
            self.nFanScore[i] = bis:readInt64()
        end

        self.nBase = bis:readInt32()
        self.nBaseScore = bis:readInt32()
        self.nMult = bis:readInt32()
        self.nHuType = bis:readInt32()

        for i = 0, 3  do
            self.df[i] = bis:readUInt8()
            self.nGuaFe[i] = bis:readInt32()
            self.nShowWinLost[i] = bis:readInt64()
            self.bIsTuiGang[i] = bis:readBool()
            self.nFanCount[i] = bis:readUInt16()
            self.nFanID[i] = {}
            for j = 1,self.nFanCount[i] do
                self.nFanID[i][j] =  bis:readUInt16()
            end
        end
        self.nFromSeat = bis:readUInt16();

        for i = 0, 3 do
            self.nKongType[i] = {}
            for j = 0, 2 do
                self.nKongType[i][j] = bis:readInt32()
            end
        end
        
        for i = 0,3 do
            self.nZhongMaCount[i] = bis:readInt32()
        end
        
        return self
    end 
}

GameProtocol.msgQiaoPiHua = {
    XY_ID = 1028,

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
    XY_ID = 1062,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    disCardCount = {},
    show = false,
    nKongType = {},
    zhongmaCount = {},
    
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
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.disCardCount[i] = bis:readInt32()
        end
        self.show = bis:readBool()
        if bis:getAvailableSize() > 0 then
            for i = 0, 3  do
                self.nKongType[i] = {}
                for j = 0, 2 do
                    self.nKongType[i][j] = bis:readInt32()
                end
            end
        end
        for i = 0,3 do
            self.zhongmaCount[i] = bis:readInt32()
        end         

        return self
    end 
}

GameProtocol.msgZhaMa = {
    XY_ID = 1065,

    sHuCount = 0,
    sSeat = {},
    IsZhaMa = false,
    sIdexCnt = 0,
    sIdexCntReal = 0,
    nIdex = {},
    nZhaMaScore = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = {}
        self.nIdex = {}
        self.sHuCount = bis:readUInt16()
        for i = 0, self.sHuCount-1 do
            self.sSeat[i] = bis:readUInt16()
        end
        self.IsZhaMa = bis:readBool()
        self.sIdexCnt = bis:readUInt16()
        for i = 0,self.sIdexCnt-1 do
            self.nIdex[i] = bis:readUInt8()
        end
        self.nZhaMaScore = bis:readInt32()
        self.sIdexCntReal = bis:readUInt16()

        return self
    end 
}

GameProtocol.msgTkongLmt = {
    XY_ID = 1066,

    iLmtCnt = {},
    vLmtMahs = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0,3 do
            self.iLmtCnt[i] = bis:readInt32()
        end
        for i = 0,3 do
            self.vLmtMahs[i] = {}
            for j = 1, self.iLmtCnt[i] do
                self.vLmtMahs[i][j] = bis:readUInt8()
            end
        end       

        return self
    end 
}

return GameProtocol
