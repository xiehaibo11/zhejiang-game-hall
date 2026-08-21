local MAX_PLAYER = 4

local GameProtocol = {
    XY_ID = {
        GLXY_GUA_FENG = 1059,
        GLXY_CHANGE_MAH_POWER = 1155, --换牌操作提示
        GLXY_CHANGE_MAH_INFO = 1156, --换牌上行和结果下推
        GLXY_CHANGE_MAH_FINISH = 1157, --换牌结束
        GLXY_BIAN_MAH = 1164, --变牌请求
        GLXY_BIAN_MAH_INFO = 1165, --变牌数据下发
        GLXY_EXCLUDE_MAH = 1166, --发牌过滤牌
        GLXY_RECORD_REQ = 1167, --获取对局流水
        GLXY_RECORD_RESP = 1168, --对局流水数据
        GLXY_HU_CARDS = 1169, --胡牌牌张数据
        GLXY_GAME_OVER_RESULT = 1170, --小结束
        GLXY_BANKRUPTCY_STATE = 1171, --破产状态
        GLXY_BIAN_MAH_CLEAR = 1172, --删除百变
        GLXY_REQ_TING_FAN = 1403,
        GLXY_RESP_TING_FAN = 1404,
    }
}
GameProtocol.msgPlayerTimer =
{
    cmdid = 9,

    nBrandID = 0,           -- 品牌ID
    nNumberID = 0,          -- 数字ID


    nSecond = 0,           --定时器时间（单位秒）
    nPower = 0,            --定时器权限
    nSeat = 0,             --定时器位置

     new = function( self, o )
         o = o or {}
         setmetatable( o, { __index = self })
         return o
     end,

     bistream = function( self, buff, bufflen )
         local bis = un.network.OStream.new(buff)
         self.nBrandID = bis:readUInt32()
         self.nNumberID = bis:readUInt32()
         self.nSecond = bis:readUInt32()
         self.nPower = bis:readUInt32()
         self.nPower = bis:readUInt32()
         return self
     end
}

GameProtocol.msgBaseClientForwardEx = {
    cmdid = 22,
    CF_ID = {
        FastVoice = 1,
        GPS_MSG = 2,
        Mobile_Signal = 3,
        Speed_Test = 4,
        WireBreak_Signal = 5,
        Expression = 6,
        FaceAni = 7,
        PlayerHeadEffect = 8,
        PropAni = 9,
        PlayerHeadTrust = 10,
        Emoji = 11,
        HeadUrl = 12,
        AMap = 13,
        QiaoPiHua = 14,
        TouchPoint = 15,
        OPERATE_PASS = 160
    },
    CT_ID = {
        XY_FORWARD = 1,
        XY_SAVE_FORWARD = 2
    },
    sSeat = 0,
    toSeat = -1,
    sID = 0,
    sType = 0,
    strData = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.toSeat)
        bos:writeInt16(self.sID)
        bos:writeInt16(self.sType)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.toSeat = bis:readInt16()
        self.sID = bis:readInt16()
        self.sType = bis:readInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgBaseScore = {
    cmdid = 1062,

    nBaseScore = 0, --底分
    nBaseDi = 0,    --倍率
    nMaxFan = 0,
    nMaxYingFan = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBaseScore = bis:readInt32()
        self.nBaseDi = bis:readInt32()
        self.nMaxFan = bis:readInt32()
        self.nMaxYingFan = bis:readInt32()
        return self
    end 
}

GameProtocol.msgFanData = {

        nFanID = 0,                         -- 番种ID
        nCount = 0,                         -- 番种个数

        new = function (self, o)
            o = o or {}
            setmetatable(o, {__index = self})
            return o
        end, 

        bistream = function (self,buff, bufflen)
            local bis = un.network.OStream.new(buff)
            self.nFanID = bis:readUInt16()
            self.nCount = bis:readUInt8()
            return self
        end  
}

GameProtocol.msgStartGame = {
    cmdid = 513,

    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgEndGame = {
    cmdid = 514,

    nFlag = 0, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgRelinkEnter = {
    cmdid = 515,

    nFlag = 0, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgLookerEnter = {
    cmdid = 516,

    nFlag = 0, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgTrust = {
    cmdid = 517,

    nSeat = 0,
    nFlag = 0, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nFlag = bis:readUInt8()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nFlag)
        return bos
    end
}

GameProtocol.msgPower = {
    cmdid = 518,

    nSeat = 0,
    nPower = 0,
    nActionID = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nPower = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nActionID = bis:readInt32()
        end
        return self
    end 
}

GameProtocol.msgGameStep = {
    cmdid = 519,

    nStepID = 0, 

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nStepID = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgClock = {
    cmdid = 520,

    nSeat = 0, 
    nTime = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nTime = bis:readUInt8()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nTime)
        return bos
    end
}

GameProtocol.msgEndWait = {
    cmdid = 521,

    nStepID = 0,
    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nStepID = bis:readUInt8()
        self.nSeat = bis:readUInt8()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nStepID)
        bos:writeUInt8(self.nSeat)
        return bos
    end
}

GameProtocol.msgSpecfReq = {
    cmdid = 522,

    nSeat = 0,


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        return bos
    end
}

GameProtocol.msgSpecfData = {
    cmdid = 523,

    nCount = 0,
    nMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1,self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgSpecfPower = {
    cmdid = 524,

    nSeat = 0,
    nPower = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nPower = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgSpecfHand = {
    cmdid = 525,

    nSeat = 0,
    nCount = 0,
    nMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1,self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nCount)
        for i = 1, self.nCount do
            bos:writeUInt8(self.nMahs[i])
        end
        return bos
    end
}

GameProtocol.msgSpecfDanFang = {
    cmdid = 526,

    nSeat = 0,
    nDanFang = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nDanFang)
        return bos
    end
}

GameProtocol.msgSpecfWall = {
    cmdid = 527,

    nCount = 0,
    nMahs = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nCount)
        for i = 1, self.nCount do
            bos:writeUInt8(self.nMahs[i])
        end
        return bos
    end
}

GameProtocol.msgSpecfEnd = {
    cmdid = 528,

    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()   
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        return bos
    end
}

GameProtocol.msgWallMah = {
    cmdid = 529,

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
        self.nWallCnt = bis:readUInt8()
        self.nAsc = bis:readUInt8()
        self.nDesc = bis:readUInt8()
        self.nFirstAsc = bis:readUInt8()
        self.nFirstDesc = bis:readUInt8()
        self.bShow = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgOpenWall = {
    cmdid = 530,

    nIndex = 0,
    nMah = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nIndex = bis:readUInt8()
        self.nMah = bis:readUInt8()

        return self
    end 
}
    
GameProtocol.msgThrowChip = {
    cmdid = 532,

    nSeat = 0,
    nCount = 0,
    nChips = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nChips = {}
        for i = 1,self.nCount do
            self.nChips[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgTakeFirst = {
    cmdid = 533,

    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgPlayerMah = {
    cmdid = 534,

    nSeat = 0,                  --座位
    nCombCount = 0,             --牌组个数
    tCombs = {},   --牌组
    nHandCount = 0,             --手牌张数
    nHands = {},                --手牌
    nDFCount = 0,               --单放张数
    nDanFang = 0,               --单放
    
    nHuMah = 0,
    nIndex = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCombCount = bis:readUInt8()
        
        self.tCombs = {}
        for i = 1,self.nCombCount do
            self.tCombs[i] = {}
            self.tCombs[i].nFlag = bis:readUInt8()
            self.tCombs[i].nFromSeat = bis:readUInt8()
            self.tCombs[i].nCount = bis:readUInt8()
            
            self.tCombs[i].nMahs = {}
            for j = 1 , self.tCombs[i].nCount do
                self.tCombs[i].nMahs[j] = {}
                self.tCombs[i].nMahs[j] = bis:readUInt8()
            end
            self.tCombs[i].nInCount = bis:readUInt8()
            self.tCombs[i].nInMahs = {}
            for j = 1 , self.tCombs[i].nInCount do
                self.tCombs[i].nInMahs[j] = {}
                self.tCombs[i].nInMahs[j] = bis:readUInt8()
            end
        end

        self.nHandCount = bis:readUInt8()
        self.nHands = {}
        for i = 1,self.nHandCount do
            self.nHands[i] = bis:readUInt8()
        end
        self.nDFCount = bis:readUInt8()
        if self.nDFCount > 0 then
            self.nDanFang = bis:readUInt8()
        end
        
        if bis:getAvailableSize() > 0 then
            self.nHuMah = bis:readUInt8()
        end
        
        if bis:getAvailableSize() > 0 then
            self.nIndex = bis:readInt32()
        end

        return self
    end 
}

GameProtocol.msgPlayerBack = {
    cmdid = 535,

    nSeat = 0,
    nCombCount = 0,
    tCombs = {},
    nHandCount = 0,
    nDFCount = 0,
    nIndex = 0,
    nMahs = {},
    nDanFang = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCombCount = bis:readUInt8()
        self.tCombs = {}
        for i = 1,self.nCombCount do
            self.tCombs[i] = {}
            self.tCombs[i].nFlag = bis:readUInt8()
            self.tCombs[i].nFromSeat = bis:readUInt8()
            self.tCombs[i].nCount = bis:readUInt8()
            
            self.tCombs[i].nMahs = {}
            for j = 1 , self.tCombs[i].nCount do
                self.tCombs[i].nMahs[j] = {}
                self.tCombs[i].nMahs[j] = bis:readUInt8()
            end
            self.tCombs[i].nInCount = bis:readUInt8()
            self.tCombs[i].nInMahs = {}
            for j = 1 , self.tCombs[i].nInCount do
                self.tCombs[i].nInMahs[j] = {}
                self.tCombs[i].nInMahs[j] = bis:readUInt8()
            end
        end

        self.nHandCount = bis:readUInt8()
        self.nDFCount = bis:readUInt8()

        if bis:getAvailableSize() > 0 then
            self.nIndex = bis:readInt32()
        end
        
        if bis:getAvailableSize() > 0 then
            self.nMahs = {}
            for i = 1,self.nHandCount do
                self.nMahs[i] = bis:readUInt8()
            end
        end
        
        if bis:getAvailableSize() > 0 then
            self.nDanFang = bis:readUInt8()
        end
        
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nCombCount)

        for j = 1, self.nCombCount do
            bos:writeUInt8(self.tCombs[j].nFlag)
            bos:writeUInt8(self.tCombs[j].nFromSeat)
            bos:writeUInt8(self.tCombs[j].nCount)
            for i = 1, self.tCombs[j].nCount do
                bos:writeUInt8(self.tCombs[j].nMahs[i])
            end
            bos:writeUInt8(self.tCombs[j].nInCount)
            for i = 1, self.tCombs[j].nInCount do
                bos:writeUInt8(self.tCombs[j].nInMahs[i])
            end
        end

        bos:writeUInt8(self.nHandCount)
        bos:writeUInt8(self.nDFCount)
        bos:writeInt32(self.nIndex)

        for i = 1, self.nHandCount do
            bos:writeUInt8(self.nMahs[i] or 0)
        end
        bos:writeUInt8(self.nDanFang)
        return bos
    end
}

GameProtocol.msgJoker = {
    cmdid = 536,

    nJokerCount = 0,                  -- // 财神张数
    nJokers = {},      --// 财神
    nInstdCount = 0,                   --// 财神替代张数
    nInstds = {},      --// 财神替代

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nJokerCount = bis:readUInt8()
        self.nJokers = {}
        for i = 1 , self.nJokerCount do
            self.nJokers[i] = bis:readUInt8()
        end
        self.nInstdCount = bis:readUInt8()
        self.nInstds = {}
        for i = 1 , self.nInstdCount do
            self.nInstds[i] = bis:readUInt8()
        end
        return self
    end 


}

GameProtocol.msgReplace = {
    cmdid = 537,

    nSeat = 0,
    nMah = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nMah = bis:readUInt8()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nMah)
        return bos
    end
}

GameProtocol.msgTake = {
    cmdid = 538,

    nSeat = 0,
    nMah = 0,

    nIndex = 0,
    isFront = true,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nMah = bis:readUInt8()
        
        if bis:getAvailableSize() > 0 then
            self.nIndex = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.isFront = bis:readUInt8() == 1
        end
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nMah)
        bos:writeInt32(self.nIndex)
        bos:writeUInt8(self.isFront and 1 or 0)
        return bos
    end
}

GameProtocol.msgPlay = {
    cmdid = 539,

    nSeat = 0,
    nMah = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nMah = bis:readUInt8()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nMah)
        bos:writeInt32(self.nActionID)
        return bos
    end
}

GameProtocol.msgCancel = {
    cmdid = 540,

    nSeat = 0,
    nActionID = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeInt32(self.nActionID)
        return bos
    end
}

GameProtocol.msgHu = {
    cmdid = 541,

    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeInt32(self.nActionID)
        return bos
    end
}

GameProtocol.msgHuEx = {
    cmdid = 542,

    nCount = 0,
    nSeats = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readUInt8()
        self.nSeats = {}
        for i = 1, self.nCount do
            self.nSeats[i] = bis:readUInt8()
        end
        return self
    end 
}

--msgWallMah
--msgOpenWall
--msgInvldWall


GameProtocol.msgAction = {
    cmdid = 543,

    nSeat = 0,
    tComb = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()

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
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)

        bos:writeUInt8(self.tComb.nFlag)
        bos:writeUInt8(self.tComb.nFromSeat)
        bos:writeUInt8(self.tComb.nCount)
        for i = 1, self.tComb.nCount do
            bos:writeUInt8(self.tComb.nMahs[i])
        end
        bos:writeUInt8(self.tComb.nInCount)
        for i = 1, self.tComb.nInCount do
            bos:writeUInt8(self.tComb.nInMahs[i])
        end

        bos:writeInt32(self.nActionID)

        return bos
    end 
}

GameProtocol.msgPanData = {
    cmdid = 544,

    nPanNum = 0,        --盘数
    nQuanNum = 0,       --圈数
    nJuNum = 0,         --局数
    nFirstBanker = 0,   --第一个庄家座位
    nQuanFeng = 0,      --圈风
    nBanker = 0,        --庄家座位
    nLaoZhuang = 0,     --牢庄
    nBaseScore = 0,     --底

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPanNum = bis:readInt32()
        self.nQuanNum = bis:readInt32()
        self.nJuNum = bis:readInt32()
        self.nFirstBanker = bis:readUInt8()
        self.nQuanFeng = bis:readUInt8()
        self.nBanker = bis:readUInt8()
        self.nLaoZhuang = bis:readInt32()
        self.nBaseScore = bis:readInt32()
        return self
    end 
}

GameProtocol.msgTurnData = {
    cmdid = 545,

    nStateCount = 0,            --状态个数
    nStates = {},               --状态
    nJustReplaced = 0,          --刚刚补的牌
    nJustPlayed = 0,            --刚刚出的牌
    nJustTook = 0,              --刚刚抓的牌
    nJustKong = 0,              --刚刚杠的牌
    nJustIndex = 0,             --刚刚抓的牌的索引
    nJustSeat = 0,              --刚刚出牌的座位
    nWhoPlay = 0,               --当前权限座位

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nStateCount = bis:readUInt8()
        self.nStates = {}
        for i = 1 , self.nStateCount do
            self.nStates[i] = bis:readUInt8()
        end
        self.nJustReplaced = bis:readUInt8()
        self.nJustPlayed = bis:readUInt8()
        self.nJustTook = bis:readUInt8()
        self.nJustKong = bis:readUInt8()
        self.nJustIndex = bis:readUInt8()
        self.nJustSeat = bis:readUInt8()
        self.nWhoPlay = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgFlower = {
    cmdid = 546,
    
    nSeat = 0,
    nCount = 0,
    nMahs = {},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1 , self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end         
}

GameProtocol.msgOutMah = {
    cmdid = 547,

    nSeat = 0,
    nCount = 0,
    nMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1 , self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end 
}



GameProtocol.msgFanCnt = {
    cmdid = 548,

    nSeat = 0,
    nCount = 0,
    Fans = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1 , self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readUInt16()
            self.Fans[i].nCount = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgEndResult = {
    cmdid = 549,

    szResult = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.szResult = bis:readString()    
        return self
    end 
}

GameProtocol.msgTWait = {
    cmdid = 550,

    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()   
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        return bos
    end
}

GameProtocol.msgJustWaiting = {
    cmdid = 551,

    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()   
        return self
    end 
}

GameProtocol.msgWaiting = {
    cmdid = 552,

    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()   
        return self
    end 
}

GameProtocol.msgPlayLmts = {
    cmdid = 553,

    nSeat = 0,
    nCount = 0,             --张数
    nMahs = {},             --限制的牌

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1, self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgObviousMahsData = {
    cmdid = 555,

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
            self.mahsData[i] = data
        end
        self.mahsData[0] = nil
        return self
    end 
}

GameProtocol.msgOutMahRefresh = {
    cmdid = 556,

    nSeat = 0,
    nCount = 0,
    nMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1 , self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgAllOutMahRefresh = {
    cmdid = 557,

    nCount = 0,
    nMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,


    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1 , self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end 
};

GameProtocol.msgTest = {
    cmdid = 1025,
    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt16()
       
        return self
    end 
}

GameProtocol.msgResult = {
    cmdid = 1026,
    nWinLost = {},

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
        
        return self
    end 
}

GameProtocol.msgSpeak = {
    cmdid = 1028,

    id = 0,
    bIsMan = false,
    speakSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.id = bis:readInt32()
        self.bIsMan = bis:readBool()
        self.speakSeat = bis:readInt32()

        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.id)
        bos:writeBool(self.bIsMan)
        bos:writeInt32(self.speakSeat)
        return bos
    end
}

GameProtocol.msgServicePay = {
    cmdid = 1033,

    nServicePay = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nServicePay = bis:readInt32()
        return self
    end 
}

GameProtocol.msgEndType = {
    cmdid = 1034,

    sEndType = 0,
    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sEndType = bis:readUInt16()
        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgRoomHostSeat = {
    cmdid = 1035,

    seat = 4,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgPlayCount = {
    cmdid = 1036,

    playCount = 0,
    maxPlayCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        self.maxPlayCount = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgGameRule = {
    cmdid = 1037,

    strGameRule = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strGameRule)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strGameRule = bis:readString()
        return self
    end 
}

GameProtocol.msgTotalResult = {
    cmdid = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,

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
            self.maxFanCount[i] = bis:readInt32()
            self.maxFanName[i] = {}
            for j = 1,self.maxFanCount[i] do
                self.maxFanName[i][j] = bis:readInt32()
            end    
        end
        self.show = bis:readBool()
        return self
    end 
}

GameProtocol.msgRequestDismiss = {
    cmdid = 1039,

    seat = 4,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgRespondDismiss = {
    cmdid = 1040,

    seat = 4,
    agree = false,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.agree = bis:readBool()
        return self
    end 
}

GameProtocol.msgDismissFlag = {
    cmdid = 1041,

    flag = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.flag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt16()
        return self
    end 
}

-- 玩家头像
GameProtocol.msgAvatarUrl =
{
    cmdid = 1042,
    seat = 0,                 -- 座位号
    avatarUrl = "",           -- 头像地址

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        local encodeURL = string.urlencode(self.avatarUrl)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.avatarUrl = string.urldecode(bis:readString())
        return self
    end
}
    
GameProtocol.msgClientForward =
{
    cmdid = 1043,
    CF_ID = {
        FastVoice = 1,
        GPS_MSG = 2,
        Mobile_Signal = 3,
        Speed_Test = 4,
        WireBreak_Signal = 5,
        Expression = 6,
        FaceAni = 7,
        PlayerHeadEffect = 8,
        PropAni = 9,
        PlayerHeadTrust = 10,
    },
    seat = 0,                 -- 座位号
    id = 0,
    strData = "",

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeUInt16(self.id)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.id = bis:readUInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgGameMaxFan =
    {
        cmdid = 1045,

        maxFan = 0,

        new = function(self,o)
            o = o or {}
            setmetatable(o,{__index = self})
            return o
        end,

        bistream = function( self, buff, bufflen )
            local bis = un.network.OStream.new(buff)
            self.maxFan = bis:readInt32()
            return self
        end
    }


GameProtocol.msgResultExtInfo = 
{
    cmdid = 1046,
    score = {},
    desc = {},
    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         for i = 0,3 do 
            self.score[i] = bis:readInt32()
            self.desc[i] = un.StringUtils.GB_18030_2000_TO_UTF8(bis:readString())    
         end
        return self
    end
}

GameProtocol.msgFollowMah = {
    cmdid = 1047,

    ST_TYPE = {
        ST_CENTER = 4,
    },
    RT_TYPE = {
        RT_SI_GEN = 1,
        RT_SAN_GEN = 2,
    },

    seat = 4,
    result = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.result = bis:readUInt16()
        return self
    end
}
GameProtocol.msgBetResult = {
    cmdid = 1049,

    betMahCount = 0,
    betMahList = {},
    betMahWind = {},
    huCount = 0,
    huWind = {},
    allWind = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.betMahCount = bis:readUInt8()
        self.betMahList = {}
        self.betMahWind = {}
        self.huWind = {}
        self.allWind = {}
        for i = 1,self.betMahCount do
            self.betMahList[i] = bis:readUInt8()
        end
        for i = 1,self.betMahCount do
            self.betMahWind[i] = bis:readUInt8()
        end
        self.huCount = bis:readUInt8()
        for i = 1,self.huCount do
            self.huWind[i] = bis:readUInt8()
        end
        for i = 1,4 do
            self.allWind[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgReqShuffle = {
    cmdid = 559,

    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgShuffleSeats = {
    cmdid = 560,

    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgToTalShuffle = {
    cmdid = 563,

    
    shuffleNum = 0,
    shuffleSeats = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
            bos:writeInt32(self.shuffleNum)
        for i = 1,self.shuffleNum do
            bos:writeInt32(self.shuffleSeats[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.shuffleNum = bis:readInt32()
        for i = 0, self.shuffleNum -1 do
            self.shuffleSeats[i] = bis:readInt32()
        end
        return self
    end 
}


GameProtocol.msgShuffleFinish = {
    cmdid = 561,

    bFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bFlag = bis:readBool()
        return self
    end 
}

GameProtocol.msgTingMahInfo = {
    cmdid = 562,

    sDelMahSize = 0,    --  出那几张能听cnt
    nDealMah = {},      --  出那几张能听
    sTingSize = {},     --  出的那张 能听几张
    bUniversalHu = {},  --  出的那张  是否万能听
    nTingMah = {},      --  具体听那几张
    sTingMahCount = {}, --  具体听的那张剩余几张
    sTingMahFan = {},   --  具体听的那张番数

    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sDelMahSize = bis:readInt16()
        self.nDealMah = {}
        self.sTingSize = {}
        self.bUniversalHu = {}
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


GameProtocol.msgAllThrowChip = {
    cmdid = 564,

    nSeat = {},
    nCount = {},
    nChips = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1,3 do
            self.nSeat[i] = bis:readUInt8()
            self.nCount[i] = bis:readUInt8()
            self.nChips[i] = {}
            for j = 1,self.nCount[i] do
                self.nChips[i][j] = bis:readUInt8()
            end
        end
        return self
    end 
}

GameProtocol.msgGameRuleUser = {
    cmdid = 1100,

    strRule = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strRule)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strRule = bis:readString()
        return self
    end
}

GameProtocol.msgHuFlag = {
    cmdid = 1161,

    nSeat = 0,
    nIndex = 0, -- 第几个胡牌
    bIsTransfer = false, --是否显示呼叫转移
    transferSeat = 0, --转移位置
    nFanNum = 0,
    nFanCnt = 0, --番型数量
    nFanIds = {}, -- 番名
    nFromSeat = -1,
    nMah = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nIndex = bis:readInt32()
        self.bIsTransfer = bis:readBool()
        self.transferSeat = bis:readInt32()
        self.nFanNum = bis:readInt32()
        self.nFanCnt = bis:readInt32()
        self.nFanIds = {}
        for i = 1, self.nFanCnt do
            self.nFanIds[#self.nFanIds + 1] = bis:readInt32()
        end
        self.nFromSeat = bis:readInt32()
        self.nMah = bis:readInt32()
        return self
    end
}

GameProtocol.msgThrowChipRelink = {
    XY_ID = 1057,

    nSeat = 0,
    nCount = 0,
    nChips = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nChips = {}
        for i = 1,self.nCount do
            self.nChips[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgDismissCountdown = {
    XY_ID = 1473,
    sSeat = 0,
    reqSeat = 0,
    nTime = 0,
     --剩余倒计时时间
    iAgrees = {}, --玩家同意信息
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.reqSeat)
        bos:writeInt16(self.nTime)
        for i = 0, 4 do
            bos:writeInt16(1)
        end
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.reqSeat = bis:readInt16()
        self.nTime = bis:readInt16()
        self.iAgrees = {}

        return self
    end
}


GameProtocol.msgExcludeMah = {
    cmdid = GameProtocol.XY_ID.GLXY_EXCLUDE_MAH,
    nCount = 0,
    mahs = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nCount = bi:readInt32()
        self.mahs = {}
        for i = 1, self.nCount do
            self.mahs[i] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

--服务通知换牌
GameProtocol.msgChangeMahPower = {
    cmdid = GameProtocol.XY_ID.GLXY_CHANGE_MAH_POWER,
    nChangeCnt = 0,
    powerSeat = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nChangeCnt = bi:readInt32()
        self.powerSeat = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

--换牌请求+返回
GameProtocol.msgChangeMahInfo = {
    cmdid = GameProtocol.XY_ID.GLXY_CHANGE_MAH_INFO,
    changeSeat = 0,
    changeMahType = 0,
    changeMahCnt = 0,
    changeMahs = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.changeSeat = bi:readInt32()
        self.changeMahType = bi:readInt32()
        self.changeMahCnt = bi:readInt32()
        self.changeMahs = {}
        for i = 1, self.changeMahCnt do
            self.changeMahs[i] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.changeSeat)
        bo:writeInt32(self.changeMahType)
        bo:writeInt32(self.changeMahCnt)
        for i = 1, self.changeMahCnt do
            bo:writeUInt8(self.changeMahs[i])
        end
        return bo
    end
}

GameProtocol.msgChangeFinish = {
    cmdid = GameProtocol.XY_ID.GLXY_CHANGE_MAH_FINISH,
    bChangeOver = false,
    nChangeOrder = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.bChangeOver = bi:readBool()
        self.nChangeOrder = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeBool(self.bChangeOver)
        bo:writeInt32(self.nChangeOrder)
        return bo
    end
}

--请求变牌、变牌返回
GameProtocol.msgBianPai = {
    cmdid = GameProtocol.XY_ID.GLXY_BIAN_MAH,
    nSeat = 0,
    nValueBefore = 0,
    nValueAfter = 0,
    nCnt = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nValueBefore = bi:readInt32()
        self.nValueAfter = bi:readInt32()
        self.nCnt = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nSeat)
        bo:writeInt32(self.nValueBefore)
        bo:writeInt32(self.nValueAfter)
        bo:writeInt32(self.nCnt)
        return bo
    end
}

--手牌中所有变牌数据
GameProtocol.msgBianPaiInfo = {
    cmdid = GameProtocol.XY_ID.GLXY_BIAN_MAH_INFO,
    nSeat = 0,
    nCount = 0,
    infos = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nCount = bi:readInt32()
        self.infos = {}
        for i = 1, self.nCount do
            self.infos[i] = {
                nValue = bi:readInt32(),
                nCnt = bi:readInt32(),
            }
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

--请求liushui
GameProtocol.msgRecordData = {
    cmdid = GameProtocol.XY_ID.GLXY_RECORD_REQ,
    nSeat = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nSeat)
        return bo
    end
}

GameProtocol.msgRecordResp = {
    cmdid = GameProtocol.XY_ID.GLXY_RECORD_RESP,
    nSeat = 0,
    nCount = 0,
    records = {},
    total = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nCount = bi:readInt32()
        self.records = {}
        for i = 1, self.nCount do
            self.records[i] = {
                nFanNum = bi:readInt32(),
                nTargetSeat = bi:readInt32(),
                nWinLostNum = bi:readInt64(),
                nRecordType = bi:readInt32(),
                nFanCnt = bi:readInt32(),
            }
            self.records[i].nFanIds = {}
            for j = 1, self.records[i].nFanCnt do
                self.records[i].nFanIds[j] = bi:readInt32()
            end
        end
        self.total = bi:readInt64()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

GameProtocol.msgHuCardInfo = {
    cmdid = GameProtocol.XY_ID.GLXY_HU_CARDS,
    huCards = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nCount = bi:readInt32()
        self.huCards = {}
        for i = 1, self.nCount do
            local seat = bi:readInt32()
            local huNum = bi:readInt32()
            self.huCards[seat] = {}
            for j = 1, huNum do
                self.huCards[seat][j] = bi:readInt32()
            end
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}


GameProtocol.msgGuaFeng = {
    XY_ID = GameProtocol.XY_ID.GLXY_GUA_FENG,
    iTotalScore = {},
    iCurScore = {},
    sType = 0,
    sSeat = 0,
    bRelink = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        self.iTotalScore = {}
        self.iCurScore = {}
        for i = 0, 3 do
            bos:writeInt64(self.iTotalScore[i])
            bos:writeInt64(self.iCurScore[i])
        end
        bos:writeInt16(self.sType)
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bRelink)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iTotalScore = {}
        self.iCurScore = {}
        for i = 0, 3 do
            self.iTotalScore[i] = bis:readInt64()
            self.iCurScore[i] = bis:readInt64()
        end
        self.sType = bis:readInt16()
        self.sSeat = bis:readInt16()
        self.bRelink = bis:readBool()
        return self
    end
}

GameProtocol.msgGameOverResult = {
    cmdid = GameProtocol.XY_ID.GLXY_GAME_OVER_RESULT,
    nWinLost = {},
    nWinSeat = -1,
    nWinCnt = 0,
    nWinFan = 0,
    nCombCount = 0,
    tCombs = {},
    nHandCount = 0,
    nHands = {},
    nDFCount = 0,
    nDanFang = 0,
    nFanCnt = 0,
    nFanIds = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLost = {}
        for i = 1, MAX_PLAYER do
            self.nWinLost[i - 1] = bis:readInt64()
        end
        self.nWinSeat = bis:readInt32()
        self.nWinCnt = bis:readInt32()
        self.nWinFan = bis:readInt32()
        self.nCombCount = bis:readUInt8()
        self.tCombs = {}
        for i = 1, self.nCombCount do
            self.tCombs[i] = {}
            self.tCombs[i].nFlag = bis:readUInt8()
            self.tCombs[i].nFromSeat = bis:readUInt8()
            self.tCombs[i].nCount = bis:readUInt8()

            self.tCombs[i].nMahs = {}
            for j = 1, self.tCombs[i].nCount do
                self.tCombs[i].nMahs[j] = {}
                self.tCombs[i].nMahs[j] = bis:readUInt8()
            end
            self.tCombs[i].nInCount = bis:readUInt8()
            self.tCombs[i].nInMahs = {}
            for j = 1, self.tCombs[i].nInCount do
                self.tCombs[i].nInMahs[j] = {}
                self.tCombs[i].nInMahs[j] = bis:readUInt8()
            end
        end
        self.nHandCount = bis:readUInt8()
        self.nHands = {}
        for i = 1, self.nHandCount do
            self.nHands[i] = bis:readUInt8()
        end
        self.nDFCount = bis:readUInt8()
        self.nDanFang = bis:readUInt8()
        self.nFanCnt = bis:readUInt8()
        self.nFanIds = {}
        for i = 1, self.nFanCnt do
            self.nFanIds[i] = bis:readInt32()
        end
        return bis
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

GameProtocol.msgBankRuptcyState = {
    cmdid = GameProtocol.XY_ID.GLXY_BANKRUPTCY_STATE,
    nSeat = 0,
    nState = 0,
    nTime = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nState = bi:readUInt8()
        self.nTime = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt8(self.nSeat)
        bo:writeUInt8(self.nState)
        bo:writeUInt8(self.nTime)
        return bo
    end
}

GameProtocol.msgBianMahClear = {
    cmdid = GameProtocol.XY_ID.GLXY_BIAN_MAH_CLEAR,
    nSeat = 0,
    nValue = 0,
    nCnt = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nValue = bi:readUInt8()
        self.nCnt = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt8(self.nSeat)
        bo:writeUInt8(self.nValue)
        bo:writeUInt8(self.nCnt)
        return bo
    end
}

--请求听牌数据-打牌阶段
GameProtocol.msgReqTingFan = {
    cmdid = GameProtocol.XY_ID.GLXY_REQ_TING_FAN,
    nSeat = 0,
    nMah = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.nSeat)
        bo:writeUInt8(self.nMah)
        return bo
    end
}

GameProtocol.msgRespTingFan = {
    cmdid = GameProtocol.XY_ID.GLXY_RESP_TING_FAN,

    nMah = 0,
    sTingSize = 0, --  出的那张 能听几张
    bUniversalHu = false, --  出的那张  是否万能听
    nTingMah = {}, --  具体听那几张
    sTingMahCount = {}, --  具体听的那张剩余几张
    sTingMahFan = {}, --  具体听的那张番数


    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nMah = bis:readUInt8()
        self.sTingSize = bis:readInt16()
        self.bUniversalHu = bis:readBool()
        self.nTingMah = {}
        self.sTingMahCount = {}
        self.sTingMahFan = {}
        for j = 1, self.sTingSize do
            self.nTingMah[j] = bis:readUInt8()
            self.sTingMahCount[j] = bis:readInt16()
            self.sTingMahFan[j] = bis:readInt32()
        end
        return self
    end
}

return GameProtocol�