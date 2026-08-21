local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Protocols.GameProtocol")

-- 定义协议号
local GLXY_RESULT_ZS = 1200     -- 小结束

GameProtocol.msgEndInfo = {
    XY_ID = GLXY_RESULT_ZS,

    isDrawn = false,            --是否流局
    endType = 0,                --游戏结束类型(0 需要继续游戏  1正常打到最后一局  2解散结束的)
    playerCnt = 4,              --玩家数量

    totalTai = {},              --总台数
    totalSiHu = {},             --总（丝）胡数
    totalHu = {},               --总胡数

    winLostScore={},            --总胜负分
    playerEndState = {},        --0:无 1:自摸 2:胡（别人放炮） 3:点炮

    fanCnt = 0,
    fanIDs = {},
    fanNum = {},

    taiCnt = {},
    taiIDs = {{},{},{},{}},
    taiNum = {{},{},{},{}},

    huCnt = {},
    huIDs = {{},{},{},{}},
    huNum = {{},{},{},{}},
    
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

        self.totalTai = {}
        self.totalSiHu = {}
        self.totalHu = {}
        self.winLostScore = {}
        self.playerEndState = {}
        self.fanIDs = {}
        self.fanNum = {}
        self.taiCnt = {}
        self.taiIDs = {{},{},{},{}}
        self.taiNum = {{},{},{},{}}
        self.huCnt = {}
        self.huIDs = {{},{},{},{}}
        self.huNum = {{},{},{},{}}

        self.fanCnt = bis:readInt8()
        for i=1, self.fanCnt do
            self.fanIDs[i] = bis:readInt32()
            self.fanNum[i] = bis:readInt32()
        end
        for i=1, self.playerCnt do
            self.totalTai[i] = bis:readInt32()
            self.totalSiHu[i] = bis:readInt32()
            self.totalHu[i] = bis:readInt32()
            self.winLostScore[i] = bis:readInt32()
            self.playerEndState[i] = bis:readInt8()
            self.taiCnt[i] = bis:readInt8()
            self.huCnt[i] = bis:readInt8()
            for j=1, self.taiCnt[i] do
                self.taiIDs[i][j] = bis:readInt32()
                self.taiNum[i][j] = bis:readInt32()
            end
            for j=1, self.huCnt[i] do
                self.huIDs[i][j] = bis:readInt32()
                self.huNum[i][j] = bis:readInt32()
            end
        end
        return self
    end
}

return GameProtocol