local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

-- 定义协议号
local GLXY_TOTAL_RESULT = 1038  -- 大结束
local GLXY_HU_EX_NEW = 1146     -- 多人胡
local GLXY_TINGMAHINFO = 1147   -- 听牌信息
local GLXY_REQ_TING_FAN = 1148  -- 请求听牌番数
local GLXY_RESP_TING_FAN = 1149 -- 回复听牌番数
local GLXY_RESULT_ZS = 1201     -- 小结束

GameProtocol.msgTotalResult = {
    XY_ID = GLXY_TOTAL_RESULT,

    show = false,
    playCount = 0,
    boxRoomTotalWinLost = {},
    
    ziMoCnt={},
    jiePaoCnt = {},
    dianPaoCnt = {},

    beiLv = 1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.show = bis:readBool()
        self.playCount = bis:readInt16()
        self.boxRoomTotalWinLost = {}
        self.ziMoCnt = {}
        self.jiePaoCnt = {}
        self.dianPaoCnt = {}
        for i = 0, 3 do
            self.ziMoCnt[i] = bis:readInt16()
            self.jiePaoCnt[i] = bis:readInt16()
            self.dianPaoCnt[i] = bis:readInt16()
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
        end
        if bis:getAvailableSize() > 0 then
            self.beiLv = bis:readInt16()
            for i = 0, 3 do
                for j = 1,self.playCount do
                    self.boxRoomTotalWinLost[i][j] = self.boxRoomTotalWinLost[i][j]/self.beiLv
                end
            end
        else
            self.beiLv = 1
        end
        return self
    end 
}

GameProtocol.msgHuExNew = {
    XY_ID = GLXY_HU_EX_NEW,

    nCount = 0,
    nSeats = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nCount = bis:readUInt8()
        self.nSeats = {}
        for i = 1, self.nCount do
            self.nSeats[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgTingMahInfo = {
    XY_ID = GLXY_TINGMAHINFO,

    sDelMahSize = 0,
    nDealMah = {},
    sTingSize = {},
    bUniversalHu = {},
    nTingMah = {},
    sTingMahCount = {},
    sTingMahFan = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nDealMah = {}
        self.sTingSize = {}
        self.bUniversalHu = {}
        self.nTingMah = {}
        self.sTingMahCount = {}
        self.sTingMahFan = {}

        self.sDelMahSize = bis:readInt16()
        for i = 1, self.sDelMahSize do
            self.nDealMah[i] = bis:readUInt8()
            self.sTingSize[i] = bis:readInt16()
            self.bUniversalHu[i] = bis:readBool()
            self.nTingMah[i] = {}
            self.sTingMahCount[i] = {}
            self.sTingMahFan[i] = {}
            for j = 1, self.sTingSize[i] do
                self.nTingMah[i][j] = bis:readUInt8()
                self.sTingMahCount[i][j] = bis:readInt16()
                self.sTingMahFan[i][j] = bis:readInt16()
            end
        end
        
        return self
    end 
}

GameProtocol.msgReqTingFan = {
    XY_ID = GLXY_REQ_TING_FAN,

    seat = 0,
    mah = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeUInt8(self.mah)
        return bos
    end,
}

GameProtocol.msgRespTingFan = {
    XY_ID = GLXY_RESP_TING_FAN,

    nDealMah = 0,
    sTingSize = 0,
    bUniversalHu = false,
    nTingMah = {},
    sTingMahCount = {},
    sTingMahFan = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nTingMah = {}
        self.sTingMahCount = {}
        self.sTingMahFan = {}

        self.nDealMah = bis:readUInt8()
        self.sTingSize = bis:readInt16()
        self.bUniversalHu = bis:readBool()
        for j = 1, self.sTingSize do
            self.nTingMah[j] = bis:readUInt8()
            self.sTingMahCount[j] = bis:readInt16()
            self.sTingMahFan[j] = bis:readInt16()
        end

        return self
    end 
}

GameProtocol.msgEndInfo = {
    XY_ID = GLXY_RESULT_ZS,

    isDrawn = false,            --是否流局
    endType = 0,                --游戏结束类型(0 需要继续游戏  1正常打到最后一局  2解散结束的)
    playerCnt = 4,              --玩家数量

    winLostScore={},            --总胜负分
    playerEndState = {},        --0:无 1:自摸 2:胡（别人放炮） 3:点炮

    fanCnt = {},
    fanIDs = {{},{},{},{}},
    fanNum = {{},{},{},{}},

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

        self.winLostScore = {}
        self.playerEndState = {}
        self.fanCnt = {}
        self.fanIDs = {{},{},{},{}}
        self.fanNum = {{},{},{},{}}
        self.taiCnt = {}
        self.taiIDs = {{},{},{},{}}
        self.taiNum = {{},{},{},{}}
        self.huCnt = {}
        self.huIDs = {{},{},{},{}}
        self.huNum = {{},{},{},{}}
        for i=1, self.playerCnt do
            self.winLostScore[i] = bis:readInt32()
            self.playerEndState[i] = bis:readInt8()
            self.fanCnt[i] = bis:readInt8()
            self.taiCnt[i] = bis:readInt8()
            self.huCnt[i] = bis:readInt8()
            for j=1, self.fanCnt[i] do
                self.fanIDs[i][j] = bis:readInt32()
                self.fanNum[i][j] = bis:readInt32()
            end
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

return GameProtocol�