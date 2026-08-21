local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Protocols.GameProtocol")

-- 定义协议号
local GLXY_RESULT_ZS = 1203             -- 小结束
local GLXY_EXCHANGE_SEAT = 1210         -- 换座位
local GLXY_REALTIME_ADD_SCORE = 1211    -- 实时计算

GameProtocol.msgEndInfo = {
    XY_ID = GLXY_RESULT_ZS,

    isDrawn = false,            --是否流局
    endType = 0,                --游戏结束类型(0 需要继续游戏  1正常打到最后一局  2解散结束的)
    playerCnt = 4,              --玩家数量

    totalKong = {},
    totalScore = {},

    winLostScore={},            --总胜负分
    playerEndState = {},        --0:无 1:自摸 2:胡（别人放炮） 3:点炮
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.isDrawn = bis:readBool()
        self.endType = bis:readInt8()
        self.playerCnt = bis:readInt16()

        self.totalKong = {}
        self.totalScore = {}
        self.winLostScore = {}
        self.playerEndState = {}
        for i=1, self.playerCnt do
            self.totalScore[i] = bis:readInt32()
            self.totalKong[i] = bis:readInt32()
            self.winLostScore[i] = bis:readInt32()
            self.playerEndState[i] = bis:readInt8()
        end
        return self
    end
}

GameProtocol.msgExchangeSeat = {
    XY_ID = GLXY_EXCHANGE_SEAT,

    sSeatOne = -1,
    sSeatTwo = -1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeatOne = bis:readInt16()
        self.sSeatTwo = bis:readInt16()
        return self
    end 
}

GameProtocol.msgRealtimeAddScore = {
    XY_ID = GLXY_REALTIME_ADD_SCORE,

    playerCnt = 4,
    score = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playerCnt = bis:readInt16()
        for i=0,self.playerCnt-1 do
            self.score[i] = bis:readInt32()
        end
        return self
    end 
}

return GameProtocol