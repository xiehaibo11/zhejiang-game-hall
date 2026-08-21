local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ShaoXing3DMahjong.ShaoXing3DBase.Protocols.GameProtocol")

GameProtocol.msgResultInfo = {
    XY_ID = 1046,

    isDrawn = false,
    endType = 0,
	playerCnt = 4,

	winLostScore={},
    playerEndState = {},

    totalFan = 0,
    totalHua = 0,

    fanCount = 0,
    fanIDs = {},
    fanNum = {},

    huaCount = 0,
    huaIDs = {},
    huaNum = {},

    chengBao = {},
    fanChengBao = {},

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

        self.winLostScore = {}
        self.playerEndState = {}

        self.totalFan = bis:readInt32()
        self.totalHua = bis:readInt32()

        self.fanCount = bis:readInt8()
        self.huaCount = bis:readInt8()

        self.fanIDs = {}
        self.fanNum = {}

        self.huaIDs = {}
        self.huaNum = {}

        self.chengBao = {}
        self.fanChengBao = {}

        for i=1, self.fanCount do
            self.fanIDs[i] = bis:readInt32()
            self.fanNum[i] = bis:readInt32()
        end

        for i=1, self.huaCount do
            self.huaIDs[i] = bis:readInt32()
            self.huaNum[i] = bis:readInt32()
        end

        for i=1, self.playerCnt do
            self.winLostScore[i] = bis:readInt32()
            self.playerEndState[i] = bis:readInt8()
            self.chengBao[i] = bis:readBool()
            self.fanChengBao[i] = bis:readBool()
        end

        return self
    end
}

GameProtocol.msgTurnJoker = {
    XY_ID = 1209,

    turnMah = 0,
    jokerMah = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.turnMah = bis:readInt8()
        self.jokerMah = bis:readInt8()
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    show = false,
    playCount = 0,

    boxRoomTotalWinLost = {{}},

    huCount = {},
    maxScoreNum = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.show = bis:readBool()
        self.playCount = bis:readInt16()
        self.boxRoomTotalWinLost = {{}}
        self.huCount = {}
        self.maxScoreNum = {}

        for i = 0, 3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost

            self.huCount[i] = bis:readInt32()
            self.maxScoreNum[i] = bis:readInt32()
        end

        return self
    end
}

return GameProtocol