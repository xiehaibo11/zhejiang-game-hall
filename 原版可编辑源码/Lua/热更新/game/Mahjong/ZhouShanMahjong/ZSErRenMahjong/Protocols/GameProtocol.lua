local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Protocols.GameProtocol")

-- 定义协议号
local GLXY_RESULT_ZS = 1208     -- 小结算
local GLXY_TWAIT_CANCEL = 1210
local GLXY_PLAYER_GANGMAHS = 1212

GameProtocol.msgEndInfo = {
    XY_ID = GLXY_RESULT_ZS,

    isDrawn = false,            --是否流局
    endType = 0,                --游戏结束类型(0 需要继续游戏  1正常打到最后一局  2解散结束的)
    playerCnt = 4,              --玩家数量

    winLostScore={},            --总输赢分
    playerEndState = {},        --0:无 1:自摸 2:胡（别人放炮） 3:点炮

    fanCnt = {},
    fanIDs = {{},{},{},{}},
    fanNum = {{},{},{},{}},
    
    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.isDrawn = bis:readInt8() == 1
        self.endType = bis:readInt8()
        self.playerCnt = bis:readInt8()

        self.winLostScore = {}
        self.playerEndState = {}

        self.fanCnt = {}
        self.fanIDs = {{},{},{},{}}
        self.fanNum = {{},{},{},{}}

        for i=1, self.playerCnt do
            self.winLostScore[i] = bis:readInt32()
        end
        for i=1, self.playerCnt do
            self.playerEndState[i] = bis:readInt8()
        end
        for i=1, self.playerCnt do
            self.fanCnt[i] = bis:readInt8()
        end
        for i=1, self.playerCnt do
            for j=1, self.fanCnt[i] do
                self.fanIDs[i][j] = bis:readInt16()
            end
        end
        for i=1, self.playerCnt do
            for j=1, self.fanCnt[i] do
                self.fanNum[i][j] = bis:readInt16()
            end
        end
        if bis:getAvailableSize() > 0 then
            self.beiLv = bis:readInt16()
            for i=1, self.playerCnt do
                self.winLostScore[i] = self.winLostScore[i]/self.beiLv
            end
        else
            self.beiLv = 1
        end
        return self
    end
}

GameProtocol.msgTWaitCancel = {
    XY_ID = GLXY_TWAIT_CANCEL,

    nSeat = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nSeat)
        return bos
    end
}

GameProtocol.msgPlayerGangMahs = {
    XY_ID = GLXY_PLAYER_GANGMAHS,

    seat = -1,
    mahCnt = 0,
    mahs = {},

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        self.mahCnt = bis:readUInt8()
        self.mahs = {}
        for i = 1, self.mahCnt do
            self.mahs[i] = bis:readUInt8()
        end
        return self
    end 
}

return GameProtocol