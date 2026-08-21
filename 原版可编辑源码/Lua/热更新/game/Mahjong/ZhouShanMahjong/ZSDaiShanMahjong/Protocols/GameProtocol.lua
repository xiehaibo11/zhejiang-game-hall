local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Protocols.GameProtocol")

-- 定义协议号
local GLXY_RESULT_ZS = 1202     -- 小结束

GameProtocol.msgEndInfo = {
    XY_ID = GLXY_RESULT_ZS,

    isDrawn = false,            --是否流局
    endType = 0,                --游戏结束类型(0 需要继续游戏  1正常打到最后一局  2解散结束的)
    playerCnt = 4,              --玩家数量

    totalDi = {},               --总台数
    totalHua = {},              --总（丝）胡数

    winLostScore={},            --总胜负分
    playerEndState = {},        --0:无 1:自摸 2:胡（别人放炮） 3:点炮

    diCnt = {},
    diIDs = {{},{},{},{}},
    diNum = {{},{},{},{}},

    huaCnt = {},
    huaIDs = {{},{},{},{}},
    huaNum = {{},{},{},{}},
    
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

        self.totalDi = {}
        self.totalHua = {}
        self.winLostScore = {}
        self.playerEndState = {}
        self.diCnt = {}
        self.diIDs = {{},{},{},{}}
        self.diNum = {{},{},{},{}}
        self.huaCnt = {}
        self.huaIDs = {{},{},{},{}}
        self.huaNum = {{},{},{},{}}
        for i=1, self.playerCnt do
            self.totalDi[i] = bis:readInt32()
            self.totalHua[i] = bis:readInt32()
            self.winLostScore[i] = bis:readInt32()
            self.playerEndState[i] = bis:readInt8()
            self.diCnt[i] = bis:readInt8()
            self.huaCnt[i] = bis:readInt8()
            for j=1, self.diCnt[i] do
                self.diIDs[i][j] = bis:readInt32()
                self.diNum[i][j] = bis:readInt32()
            end
            for j=1, self.huaCnt[i] do
                self.huaIDs[i][j] = bis:readInt32()
                self.huaNum[i][j] = bis:readInt32()
            end
        end
        return self
    end
}
return GameProtocol