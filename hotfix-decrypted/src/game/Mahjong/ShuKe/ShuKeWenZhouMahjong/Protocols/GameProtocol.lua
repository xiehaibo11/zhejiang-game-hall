local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,

    nWinLost = {},          --胜负
    nFanScore = {},         --番数
    nMaiDi = {},            --买底
    nDingDi = {},           --顶底
    nBase = 0,              --当前底数
    nBaseScore = 0,         --底分
    nMult = 0,              --倍数
    nHuType = 0,            --胡牌类型（0表示软牌，1表示硬牌，2表示双翻）
    df = 0,                 --单放
    nHuTypeEx = 0,          --胡牌类型扩展类型（0表示软牌，1表示硬牌，2表示双翻 3 表示自摸）
    bFengDing = {}, --封顶情况

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLost = {}
        self.nMaiDi = {}
        self.nDingDi = {}
        self.nFanScore = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
            self.nMaiDi[i] = bis:readInt32()
            self.nDingDi[i] = bis:readInt32()
            self.nFanScore[i] = bis:readInt64()
        end

        self.nBase = bis:readInt32()
        self.nBaseScore = bis:readInt32()
        self.nMult = bis:readInt32()
        self.nHuType = bis:readInt32()
        self.df = bis:readInt8()

        if bis:getAvailableSize() > 0 then
            self.nHuTypeEx = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.bFengDing[i] = bis:readBool()
            end
        end
        return self
    end 
}

GameProtocol.msgPlayCount = {
    XY_ID = 1036,

    playCount = 0,
    maxPlayCount = 0,
    gameModeQuan = 0,  -- 0: 局  1: 圈 ，


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()     
        self.maxPlayCount = bis:readUInt16()     -- 最大局数，洗牌时会用这个比较,故保留1000，圈数仅在显示时除1000
        if self.maxPlayCount >= 1000 then
            self.gameModeQuan = 1
        end
        return self
    end 
}


GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    show = false,
    isQuanEnd = false,
    maxNewResult = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()   
        end
        self.show = bis:readBool()
        self.isQuanEnd = bis:readBool()
        if bis:getAvailableSize() > 0 then
            for i = 0,3 do
                local onePlayerNewResult = {}
                for j = 0,5 do
                    onePlayerNewResult[j] = bis:readInt32()
                end
                self.maxNewResult[i] = onePlayerNewResult
            end
        end

        return self
    end 
}

GameProtocol.msgMDdi = {
    XY_ID = 1050,

    nType = 0,
    sSeat = 0,
    nRet = 0,
    nChaoshi = 0,
    nTimer = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nType = bis:readInt32()
        self.sSeat = bis:readUInt16()
        self.nRet = bis:readInt32()
        self.nChaoshi = bis:readInt32()
        self.nTimer = bis:readInt32()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nType)
        bos:writeUInt16(self.sSeat)
        bos:writeInt32(self.nRet)
        bos:writeInt32(self.nChaoshi)
        bos:writeInt32(self.nTimer)
        return bos
    end
}

GameProtocol.msgMDDiShow = {
    XY_ID = 1052,

    nSeat = 0,
    nMDFlag = 0,                             -- 0表示买底，1表示顶底
    nScore = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nMDFlag = bis:readInt32()
        self.nScore = bis:readInt32()
        return self
    end
}

GameProtocol.msgGangFeng = {
    XY_ID = 1057,

    nTotalScore = {},
    nCurScore = {}, 
    sType = 0,
    sSeat = 0,
    bRelink = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nTotalScore = {}
        self.nCurScore = {}
        for i = 0,3 do
            self.nTotalScore[i] = bis:readInt32()
            self.nCurScore[i] = bis:readInt32()
        end        
        self.sType = bis:readUInt16()
        self.sSeat = bis:readUInt16()
        self.bRelink = bis:readBool() 
        return self
    end 
}

GameProtocol.msgTuiGang = {
    XY_ID = 1058,

    nShowWinLost = {},      --显示的胜负（退杠的虚拟分数）
    nGuaFeng = {},
    bIsTuiGang = {},
    nKongType = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nShowWinLost = {}
        self.nGuaFeng = {}
        self.bIsTuiGang = {}
        self.nKongType = {}
        for i = 0,3 do
            self.nShowWinLost[i] = bis:readInt64()
            self.nGuaFeng[i] = bis:readInt32()
            self.bIsTuiGang[i] = bis:readBool()

            self.nKongType[i] = {}
            for j = 0, 2 do
                self.nKongType[i][j] = bis:readInt32()
            end
        end
        return self
    end 
}

GameProtocol.msgShowCKong = {
    XY_ID = 1059,
    
    nIndex = -1,
    bShowCKong = true,
    ucSeat = 0,
    tComb = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nIndex = bis:readInt32()
        self.bShowCKong = bis:readBool()
        self.ucSeat = bis:readUInt8()

        self.tComb = {}
        self.tComb.nFlag = bis:readUInt8()
        self.tComb.nFromSeat = bis:readUInt8()
        self.tComb.nCount = bis:readUInt8()

        self.tComb.nMahs = {}
        for i = 1 , self.tComb.nCount do
            self.tComb.nMahs[i] = {}
            self.tComb.nMahs[i] = bis:readUInt8()
        end
        self.tComb.nInCount = bis:readUInt8()

        self.tComb.nInMahs = {}
        for i = 1 , self.tComb.nInCount do
            self.tComb.nInMahs[i] = {}
            self.tComb.nInMahs[i] = bis:readUInt8()
        end

        return self
    end 
}

GameProtocol.msgFollowMah = {
    XY_ID = 1060,

    sSeat = 4,      

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgFollowMahScore = {
    XY_ID = 1061,

    nScore = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nScore = {}
        for i = 0,3 do
            self.nScore[i] = bis:readInt32()
        end
        return self
    end 
}

GameProtocol.msgWillThreeBack = {
    XY_ID = 1062,

    sSeat = 4,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgThreeBack = {
    XY_ID = 1063,

    sSeat = 4,
    bThreeBack = false,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.bThreeBack = bis:readBool()
        return self
    end 
}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    time = 300,
    respondDismiss = {};

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt32(self.time)
        for i = 1,4 do
            bos:writeInt32(self.respondDismiss[i])
        end

        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        self.time = bis:readInt32()
        for i = 1,4 do
            self.respondDismiss[i] = bis:readInt32()
        end

        return self
    end  
}


--续桌相关
GameProtocol.msgAskContinue = {
    XY_ID = 1150,

    nflag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nflag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nflag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgRespContinue = {
    XY_ID = 1151,

    nSeat = 0,
    bContinue = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeBool(self.bContinue)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.bContinue = bis:readBool()
        return self
    end 
}

GameProtocol.msgContinueFlag = {
    XY_ID = 1152,

    sFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sFlag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgContinueTips = {
    XY_ID = 1153,

    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readInt32()
        return self
    end 
}

GameProtocol.msgNowTingInfo = {
    XY_ID = 1157,

    seat = 0,
    sTingSize = 0,
    bUniversalHu = false,
    nTingMah = {},
    sTingMahCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.sTingSize)
        bos:writeBool(self.bUniversalHu)
        for i = 1, self.sTingSize do
            bos:writeUInt8(self.nTingMah[i])
            bos:writeInt16(self.sTingMahCount[i])
        end
        return bos
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.sTingSize = bis:readInt16()
        self.bUniversalHu = bis:readBool()
        for i = 1, self.sTingSize do
            self.nTingMah[i] = bis:readUInt8()
            self.sTingMahCount[i] = bis:readInt16()
        end
        return self
    end 
}
--------------------------------------------------------
--提前开始协议
--------------------------------------------------------

--玩家请求提前开桌
GameProtocol.msgReqAdvancedPlayInfo = {
    XY_ID = 2500,
    nSeat = 0, --请求玩家位置 
    state = 0,  --请求玩家状态
    playerCnt = 0,  --请求开桌人数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nSeat)
        bos:writeInt8(self.state)
        bos:writeInt32(self.playerCnt)
        return bos
    end,
}

--刷新返回数据
GameProtocol.msgRespAdvancedPlayInfo = {
    XY_ID = 2501,

    leftTime = 0,   -- 剩余时间
    nPlayerCnt = 0, --人数
    nFirstLaunchSeat = 0, --发起人
    state = {},  --请求玩家状态

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.leftTime = bis:readInt16()
        self.nPlayerCnt = bis:readInt32()
        self.nFirstLaunchSeat = bis:readInt32()
        for index = 0, 3 do
            self.state[index] = bis:readInt8()
        end
        return self
    end 
}

--提前开桌的最终结果
GameProtocol.msgAdvancedPlayProgress = {
    XY_ID = 2502,
    nProgressState = 0,
    flag = 0,
    nLaunchSeat = 0, -- 第一个发起的玩家座位
    nRefuseSeat = 0,  -- 拒绝的玩家座位
    nFinalPlayerCount = 0, --最终开局人数
    nAdjustSeatMap = {}, --座位调整映射
    isNeedChangRuleAuto = false,  --是否需要自动转换规则
    strGameRuleDiff = "", -- 差别规则

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nProgressState = bis:readInt32()
        self.nFlag = bis:readInt32()
        self.nLaunchSeat = bis:readInt32()
        self.nRefuseSeat = bis:readInt32()
        self.nFinalPlayerCount = bis:readInt32()
        for index = 0, 3 do
            self.nAdjustSeatMap[index] = bis:readInt32()
        end
        self.isNeedChangRuleAuto = bis:readBool()
        self.strGameRuleDiff = bis:readString()
        return self
    end 
}

--重连时刷新桌面数据
GameProtocol.msgAdvancedTableInfoRelink = {
    XY_ID = 2503,
   
    nFinalPlayerCount = 0,
    nAdjustSeatMap = {}, --座位调整映射

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFinalPlayerCount = bis:readInt32()
        for index = 0, 3 do
            self.nAdjustSeatMap[index] = bis:readInt32()
        end
        return self
    end 
}

-- 四连报听
GameProtocol.msgSiLianBaoTing = {
    XY_ID = 1160,
   
    sSeat = -1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        return self
    end 
}

return GameProtocol�B  