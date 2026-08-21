local GameProtocol = CF.gameClass("GameProtocol", "game.GameBase.Protocols.GameProtocol")

GameProtocol.msgPlayerTimer =
{
    XY_ID = 9,

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
    XY_ID = 22,
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
    XY_ID = 1053,

    nBaseScore = 0, --底分
    nBaseDi = 0,    --倍率

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBaseScore = bis:readInt32()
        self.nBaseDi = bis:readInt32()
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
    XY_ID = 513,

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
    XY_ID = 514,

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
    XY_ID = 515,

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
    XY_ID = 516,

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
    XY_ID = 517,

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
    XY_ID = 518,

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
    XY_ID = 519,

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
    XY_ID = 520,

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
    XY_ID = 521,

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
    XY_ID = 522,

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
    XY_ID = 523,

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
    XY_ID = 524,

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
    XY_ID = 525,

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
    XY_ID = 526,

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
    XY_ID = 527,

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
    XY_ID = 528,

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
    XY_ID = 529,

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
    XY_ID = 530,

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
    XY_ID = 532,

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
    XY_ID = 533,

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
    XY_ID = 534,

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
    XY_ID = 535,

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
    XY_ID = 536,

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
    XY_ID = 537,

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
    XY_ID = 538,

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
    XY_ID = 539,

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
    XY_ID = 540,

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
    XY_ID = 541,

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
    XY_ID = 542,

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
    XY_ID = 543,

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
    XY_ID = 544,

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
    XY_ID = 545,

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
    XY_ID = 546,
    
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
    XY_ID = 547,

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
    XY_ID = 548,

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
    XY_ID = 549,

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
    XY_ID = 550,

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
    XY_ID = 551,

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
    XY_ID = 552,

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
    XY_ID = 553,

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
    XY_ID = 555,

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
    XY_ID = 556,

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
    XY_ID = 557,

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
    XY_ID = 1025,
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
    XY_ID = 1026,
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
    XY_ID = 1028,

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
    XY_ID = 1033,

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
    XY_ID = 1034,

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
    XY_ID = 1035,

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
    XY_ID = 1036,

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
    XY_ID = 1037,

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
    XY_ID = 1038,

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
    XY_ID = 1039,

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
    XY_ID = 1040,

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
    XY_ID = 1041,

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
    XY_ID = 1042,
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
    XY_ID = 1043,
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
        XY_ID = 1045,

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
    XY_ID = 1046,
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
    XY_ID = 1047,

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
    XY_ID = 1049,

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
    XY_ID = 559,

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
    XY_ID = 560,

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
    XY_ID = 563,

    
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
    XY_ID = 561,

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
    XY_ID = 562,

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
    XY_ID = 564,

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
    XY_ID = 1100,

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

return GameProtocol