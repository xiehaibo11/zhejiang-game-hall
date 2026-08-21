local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,

    nWinLost = {},      -- 本局优胜值
    nCountHu = {},      -- 牌面胡数
    nCountTai = {},     -- 麻将台数
    nToTalCountHu = {}, -- 总计弧数
    nPlayerState = {},  -- 玩家状态
    bLazi = false,      -- 是否腊子
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
        self.nCountHu = {}
        self.nCountTai = {}
        self.nToTalCountHu = {}
        self.nPlayerState = {}
        self.bLazi = false
        self.nDanFang = 0
        self.bFinal = false
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nCountHu[i] = bis:readInt32()
            self.nCountTai[i] = bis:readInt32()
            self.nToTalCountHu[i] = bis:readInt32()
            self.nPlayerState[i] = bis:readUInt8()
        end
        self.bLazi = bis:readBool()
        self.nDanFang = bis:readInt32()
        self.bFinal = bis:readBool()

        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,

    nWinByOwn = {},         -- 自摸胡次数
    nWinScoreNum = {},      -- 胜分次数
    nJiePaoNum = {},        -- 接炮次数
    nDiscardNum = {},       -- 点炮次数
    nMaxSorceOfTotal = {},  -- 最高分
    nLaZiNum = {},          -- 辣子次数
    nChengBaoNum = {},      -- 包三家次数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readInt16()

        self.boxRoomTotalWinLost = {}
        self.maxHuCount = {}
        self.maxFanNum = {}
        self.maxFanCount = {}
        self.maxFanName = {}
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1, self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.maxFanCount[i] = bis:readInt32()
            self.maxFanName[i] = {}
            for j = 1,self.maxFanCount[i] do
                self.maxFanName[i][j] = bis:readInt32()
            end 
        end

        self.show = bis:readBool()

        self.nWinByOwn = {}
        self.nWinScoreNum = {}
        self.nJiePaoNum = {}
        self.nDiscardNum = {}
        self.nMaxSorceOfTotal = {}
        self.nLaZiNum = {}
        self.nChengBaoNum = {}
        for i=0,3 do
            self.nWinByOwn[i] = bis:readInt32()
            self.nWinScoreNum[i] = bis:readInt32()
            self.nJiePaoNum[i] = bis:readInt32()
            self.nDiscardNum[i] = bis:readInt32()
            self.nMaxSorceOfTotal[i] = bis:readInt32()
            self.nLaZiNum[i] = bis:readInt32()
            self.nChengBaoNum[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgFanHuCntEx = {
    XY_ID = 1053,

    huSeat = 4,
    fhSize = 0,
    hfcnt = {},

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.huSeat = bis:readInt16()
        self.fhSize = bis:readUInt8()
        self.hfcnt = {}
        for j = 1, self.fhSize do
            self.hfcnt[j] = {}
            self.hfcnt[j].hfid = bis:readInt16()
            self.hfcnt[j].hfCount = bis:readUInt8()
            self.hfcnt[j].isFan = bis:readBool()
        end

        return self
    end
}

return GameProtocol
�