local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,

    nWinLost = {},      -- 本局优胜值
    nPlayerState = {},    -- 玩家状态
    nKongScore = {},      -- 杠牌分
    nBaseScore = {},     -- 基础倍数
    nMKongTime = {},    --明杠次数
    nAKongTime = {},    --暗杠次数
    nDanFang = 0,       -- 胡单放
    bFinal = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nWinLost = {}
        self.nPlayerState = {}
        self.nKongScore = {}
        self.nBaseScore = {}
        self.nMKongTime = {}
        self.nAKongTime = {}
        self.nDanFang = 0
        self.bFinal = false
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nPlayerState[i] = bis:readUInt8()
            self.nKongScore[i] = bis:readInt32()
            self.nBaseScore[i] = bis:readInt32()
            self.nMKongTime[i] = bis:readInt32()
            self.nAKongTime[i] = bis:readInt32()
        end
        self.nDanFang = bis:readInt32()
        self.bFinal = bis:readBool()
        
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    sPlayCount = 0,
    bShow = false,
    nZiMoCnt = {},          --自摸次数
    nJiePaoCnt = {},        --接炮次数
    nFangChongCnt = {},     --放冲次数
    nMKongTime = {},        --明杠次数
    nAKongTime = {},        --暗杠次数
    boxRoomTotalWinLost = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nZiMoCnt = {}
        self.nJiePaoCnt = {}
        self.nFangChongCnt = {}
        self.nMKongTime = {}
        self.nAKongTime = {}
        self.boxRoomTotalWinLost = {}

        self.sPlayCount = bis:readUInt16()
        self.bShow = bis:readBool()
        for i = 0,3 do
            self.nZiMoCnt[i] = bis:readInt32()
            self.nJiePaoCnt[i] = bis:readInt32()
            self.nFangChongCnt[i] = bis:readInt32()
            self.nMKongTime[i] = bis:readInt32()
            self.nAKongTime[i] = bis:readInt32()
            local onePlayerTotalWinLost = {}
            for j = 1, self.sPlayCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
        end
        return self
    end 
}

GameProtocol.msgMaiDi = {
    XY_ID = 1053,

    bHaveOperate = {},

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.bHaveOperate = {}
        for i = 0, 3 do
            self.bHaveOperate[i] = bis:readBool()
        end

        return self
    end
}

GameProtocol.msgReponseMaiDi = {
    XY_ID = 1054,

    seat = 4,
    maidiNum = -1,
    
    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.maidiNum = bis:readInt16()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.maidiNum)
        return bos
    end
}

GameProtocol.msgMaiDiFlag = {
    XY_ID = 1055,

   bMaiDi = {},

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.bMaiDi = {}
        for i = 0, 3 do
            self.bMaiDi[i] = bis:readInt16()
        end

        return self
    end
}

GameProtocol.msgPlayCaiShen = {
    XY_ID = 1056,

   Isplay = {},

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.Isplay = {}
        for i = 0, 3 do
            self.Isplay[i] = bis:readBool()
        end

        return self
    end
}

GameProtocol.msgWallCardShow = {
    XY_ID = 1057,

   bShow = false,
   nCardNum = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.bShow = bis:readBool()
        self.nCardNum = bis:readInt16()

        return self
    end
}

return GameProtocol
B