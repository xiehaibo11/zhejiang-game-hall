local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgEndInfo = {
    XY_ID = 1208,

    isDrawn = false,            --是否流局
    endType = 0,                --游戏结束类型(0 需要继续游戏  1正常打到最后一局  2解散结束的)
    playerCnt = 4,              --玩家数量

    winLostScore = {},          --总胜负分
    playerEndState = {},        --0:无 1:自摸 2:胡（别人放炮） 3:点炮

    fanCnt = {},
    fanIDs = {{},{},{},{}},
    fanNum = {{},{},{},{}},
    nTaskBase = 1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.isDrawn = bis:readUInt8() == 1
        self.endType = bis:readUInt8()
        self.playerCnt = bis:readUInt8()

        self.winLostScore = {}
        self.playerEndState = {}

        self.fanCnt = {}
        self.fanIDs = {{},{},{},{}}
        self.fanNum = {{},{},{},{}}

        for i = 1, self.playerCnt do
            self.winLostScore[i] = bis:readInt32()
        end
        for i = 1, self.playerCnt do
            self.playerEndState[i] = bis:readUInt8()
        end
        for i = 1, self.playerCnt do
            self.fanCnt[i] = bis:readUInt8()
        end
        for i = 1, self.playerCnt do
            for j = 1, self.fanCnt[i] do
                self.fanIDs[i][j] = bis:readInt16()
            end
        end
        for i = 1, self.playerCnt do
            for j = 1, self.fanCnt[i] do
                self.fanNum[i][j] = bis:readInt16()
            end
        end
        if bis:getAvailableSize() > 0 then
            self.nTaskBase = bis:readInt32()
        end

        return self
    end
}

GameProtocol.msgTaskInfo = {
    XY_ID = 1213,

    nValue = 0,  -- 目前用于麻将id
    nType = 0,   -- 任务类型
    nBase = 1,   -- 任务加倍

    TYPE = {
        PUNG = 1,
        KONG = 2,
    },

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,


    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nValue = bis:readUInt8()
        self.nType = bis:readUInt8()
        self.nBase = bis:readUInt8()

        return self
    end
}


GameProtocol.msgPlayerFinishTask = {
    XY_ID = 1214,

    seat = 0,  -- 完成任务的玩家座位
    nBase = 1,   -- 任务加倍
    nCurBase = 1, -- 玩家当前加倍

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.nBase = bis:readUInt8()
        self.nCurBase = bis:readUInt32()

        return self
    end
}

--过胡加倍
GameProtocol.msgReqHuCanceDouble = {
    XY_ID = 1215,

    seat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

   bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)

        return bos
    end
}

--过胡加倍
GameProtocol.msgRespHuCanceDouble = {
    XY_ID = 1216,

    seat = 0,
    base = 1,
    nCurBase = 1,
    times = 0,
    huMah = 0,
    nFan = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

     bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.base = bis:readUInt8()
        self.nCurBase = bis:readUInt32()
        self.times = bis:readUInt8()
        self.huMah = bis:readUInt8()
        self.nFan = bis:readUInt32()

        return self
    end
}

--过胡时胡牌数据
GameProtocol.msgReqHuMahFan = {
    XY_ID = 1217,

    seat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

   bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)

        return bos
    end
}

GameProtocol.msgRespHuMahFan = {
    XY_ID = 1218,

    mah = 0,
    fan = 1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.mah = bis:readUInt8()
        self.fan = bis:readUInt32()
        
        return self
    end
}

return GameProtocol