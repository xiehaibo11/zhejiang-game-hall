local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {},
    nHuDanFang = 0,     -- BYTE 
    nHuShu = 0,     -- BYTE 
    nTotalHuShu = 0,     -- BYTE 
    nLaoZhuangtimeDec = {},     -- BYTE

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
       
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end

        self.nHuDanFang = bis:readUInt8()
        self.nHuShu = bis:readInt32()
        self.nTotalHuShu = bis:readInt32()
        for i = 0, 3 do
            self.nLaoZhuangtimeDec[i] = bis:readInt32()
        end
        
        return self
    end 
}

return GameProtocol
�