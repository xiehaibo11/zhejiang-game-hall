local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Protocols.GameProtocol")

GameProtocol.msgObviousMahsData = {
    XY_ID = 1099,

    nCount = 0,
    mahsData = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readInt32()
        for i = 0,self.nCount do
            local data = {}
            data.handMahsCount = bis:readUInt8()
            data.handMahs = {}
            for j = 1,data.handMahsCount do
                data.handMahs[j] = bis:readUInt8()
            end
            data.takeMahsCount = bis:readUInt8()
            data.takeMahs = {}
            for j = 1,data.takeMahsCount do
                data.takeMahs[j] = bis:readUInt8()
            end
            data.nPower = bis:readInt32()
            data.nFlag = bis:readUInt8()
            self.mahsData[i] = data
        end
        self.mahsData[0] = nil
        return self
    end 
}

return GameProtocol