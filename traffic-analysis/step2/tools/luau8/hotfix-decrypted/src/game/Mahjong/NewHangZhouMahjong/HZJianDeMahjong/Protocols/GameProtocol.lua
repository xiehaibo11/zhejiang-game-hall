local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Protocols.GameProtocol")

GameProtocol.msgTotalResultEx = {
    XY_ID = 1051,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {}, 
    maxFanCount = {},-- 列表长度
    maxFanName = {},
    maxFanNameCount = {},
    show = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readInt16()
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.maxFanCount[i] = bis:readInt32()
            self.maxFanName[i] = {}
            self.maxFanNameCount[i] = {}
            for j = 1,self.maxFanCount[i] do
                self.maxFanName[i][j] = bis:readInt32()
            end
            for j = 1,self.maxFanCount[i] do
                self.maxFanNameCount[i][j] = bis:readInt32()
            end     
        end
        self.show = bis:readBool()
        return self
    end 
}

GameProtocol.msgResult = {
    XY_ID = 1052,
    fanNameListSize = 0;
    nWinLost = {},
    fanNameList = {},
    chengBaoSeat = {},
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.fanNameListSize = bis:readInt32()
        self.nWinLost = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end
        self.fanNameList = {}
        for i = 1, self.fanNameListSize do
            self.fanNameList[i] = bis:readInt32()
        end
        self.chengBaoSeat = {}
        for i = 0, 3 do
            self.chengBaoSeat[i] = bis:readInt16()
        end
        return self
    end 
}

return GameProtocol
	