local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Protocols.GameProtocol")

-- 定义协议号
local GLXY_RESULT_ZS = 1204     -- 小结束

GameProtocol.msgEndInfo = {
    XY_ID = GLXY_RESULT_ZS,

    isDrawn = false,            --是否流局
    endType = 0,                --游戏结束类型(0 需要继续游戏  1正常打到最后一局  2解散结束的)
    playerCnt = 4,              --玩家数量

    huaScore = {},
    zhuangScore = {},

    winLostScore={},            --总胜负分
    playerEndState = {},        --0:无 1:自摸 2:胡（别人放炮） 3:点炮

    fanCnt = {},
    fanIDs = {},
    fanNum = {},

    huaCnt = {},
    huaIDs = {},
    huaNum = {},
    
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

        self.huaScore = {}
        self.zhuangScore = {}
        self.winLostScore = {}
        self.playerEndState = {}
        self.fanCnt = {}
        self.fanIDs = {}
        self.fanNum = {}
        self.huaCnt = {}
        self.huaIDs = {}
        self.huaNum = {}
        for i=1, self.playerCnt do
            self.huaScore[i] = bis:readInt32()
            self.zhuangScore[i] = bis:readInt32()
            self.winLostScore[i] = bis:readInt32()
            self.playerEndState[i] = bis:readInt8()
            
            self.fanCnt[i] = bis:readInt8()
            self.huaCnt[i] = bis:readInt8()
            self.fanIDs[i] = {}
            self.fanNum[i] = {}
            self.huaIDs[i] = {}
            self.huaNum[i] = {}
            for j=1, self.fanCnt[i] do
                self.fanIDs[i][j] = bis:readInt32()
                self.fanNum[i][j] = bis:readInt32()
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