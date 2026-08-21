local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Protocols.GameProtocol")

GameProtocol.msgQiaoFengAsk = {
    XY_ID = 1051,

    timeout = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.timeout =  bis:readInt8()
        return self
    end
}

GameProtocol.msgQiaoFengResp = {
    XY_ID = 1052,

    seat = 0,
    qiaoFeng = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt8()
        self.qiaoFeng = bis:readInt8()
        return self
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt8(self.seat)
        bos:writeInt8(self.qiaoFeng)
        return bos
    end
}

GameProtocol.msgQiaoFengResult = {
    XY_ID = 1054,

    scores = {},
    nCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readInt8()
        for i = 1 , self.nCount do
            self.scores[i] = bis:readInt8()
        end
        return self
    end
}

GameProtocol.msgWallMahEx = {
    XY_ID = 1055,

    nWallCnt = 0,       --剩余可抓张数
    nAsc = 0,           --正向待抓索引
    nDesc = 0,          --反向待抓索引
    nFirstAsc = 0,      --初始正向待抓索引
    nFirstDesc = 0,     --初始反向待抓索引
    bShow = 0,          --收到时是否即刻显示牌墙

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWallCnt = bis:readInt8()
        self.nAsc = bis:readInt8()
        self.nDesc = bis:readInt8()
        self.nFirstAsc = bis:readInt8()
        self.nFirstDesc = bis:readInt8()
        self.bShow = bis:readInt8()
        return self
    end
}

return GameProtocol