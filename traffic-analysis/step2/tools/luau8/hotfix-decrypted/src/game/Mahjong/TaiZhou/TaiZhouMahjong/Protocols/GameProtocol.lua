local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Protocols.GameProtocol")

GameProtocol.msgChengBaoFlag = {
    XY_ID = 1055,
    nChengBaoFlag = {},

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.nChengBaoFlag = {}
        for i = 0, 3 do
            self.nChengBaoFlag[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgPreBaoPaiMah = {
    XY_ID = 1501,

    nCardCount = 0,             --包牌张数
    nBaoPaiMahs = {},                --包牌
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nCardCount = bis:readUInt8()
        self.nBaoPaiMahs = {}
        for i = 1,self.nCardCount do
            self.nBaoPaiMahs[i] = bis:readUInt8()
        end
        return self
    end 
}

return GameProtocol
�