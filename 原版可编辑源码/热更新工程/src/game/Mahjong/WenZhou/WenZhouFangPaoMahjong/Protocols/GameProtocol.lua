local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

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
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
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
            self.df[i] = bis:readInt8()
            self.nGuaFe[i] = bis:readInt32()
            self.nShowWinLost[i] = bis:readInt64()
            self.bIsTuiGang[i] = bis:readBool()
            self.nFanCount[i] = bis:readInt16()
            self.nFanID[i] = {}
            for j = 1,self.nFanCount[i] do
                self.nFanID[i][j] =  bis:readInt16()
            end
        end  
        self.nFromSeat = bis:readInt16()
        
        for i = 0, 3  do
            self.nKongType[i] = {}
            for j = 0, 2 do
                self.nKongType[i][j] = bis:readInt32()
            end
        end
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

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
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

    bistream = function (self, buff, bufflen)
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

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readInt16()
        for i = 0, 3 do
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
