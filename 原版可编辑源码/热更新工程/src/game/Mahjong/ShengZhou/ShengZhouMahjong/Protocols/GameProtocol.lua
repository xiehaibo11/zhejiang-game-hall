local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgAnte = {
    XY_ID = 11304,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        self:reset()
        return o
    end,

    reset = function (self)
        self.nSeat=0             --// 玩家坐位
        self.nAnte=0             --// 玩家加注的值 0没有加值 (加倍or加分)
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nAnte)
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nAnte = bis:readUInt8()
        return self
    end
}

GameProtocol.msgPowerBack = {
    XY_ID = 11305,
    nPowerID = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nPowerID)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        if bis:getAvailableSize() > 0 then
            self.nPowerID = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgEffect =
{
    XY_ID = 557,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

     nSeat = 0,
     nEffectID = 0, --特效编号
     nValue = 0, --特效值

     bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nEffectID = bis:readUInt8()
        self.nValue = bis:readInt32()
        return self
    end
}

GameProtocol.msgFLag =
    {
        XY_ID = 558,

        Flag =
        {
            FLG_DINGQUE_ING = 0,--//定缺中
            FLG_DINGQUE_ED = 1,--//已定缺 0（显示已定缺文字）1，2，3（自己显示定的哪一门）
            FLG_DINGQUE_FINISH = 2,--//定缺完成，发所有人定缺值，播动画
            FLG_DINGQUE_RELINK = 3,--//重连回来显示头像上的定缺值

            FLG_HUANSANZHANG_ING = 6,--//换三张中
            FLG_HUANSANZHANG_ED = 7,--//已三张中
            FLG_HUANSANZHANG_FINISH = 8,--//已三张中


            FLG_HU_ZIMO = 10,--//自摸 value=胡牌顺序
            FLG_HU_DIANPAO = 11,--//点炮 value=胡牌顺序
            FLG_HU_QIANGGANG = 12,--//抢扛 value=胡牌顺序
            FLG_HU_TIANHU = 13,--//天胡 value=胡牌顺序
            FLG_HU_DIHU = 14,--//地胡 value=胡牌顺序
            FLG_HU_GANGSHANGPAO = 15,--//扛上炮 value=胡牌顺序
            FLG_HU_GANGSHANGHUA = 16,--//杠上花 value=胡牌顺序

            FLG_BAOJIAO_ING = 20,--//报叫中
            FLG_BAOJIAO_ED = 21,--//已报叫
            FLG_FENGSHU = 30,--//分数
            FLG_HUASHU = 31, --//花个数

            FLG_ANTE_ING = 40,
            FLG_ANTE_ED = 41,
            FLG_ANTE_FINISH = 42,

            FLG_TWAIT = 43, --//听牌

            FLG_MAIDA = 44, --//买大标记

            FLG_REVERT = 51,--//过胡的还原标记
        },

        nSeat = 0,
        nFlag = 0,
        nValue = 0,

        new = function (self, o)
            o = o or {}
            setmetatable(o, {__index = self})
            self:reset()
            return o
        end,

        reset = function (self)

            self.nSeat = 0
            self.nFlag = 0
            self.nValue = 0

        end,

        bostream = function (self)
            local bos = un.network.IStream.new()
            bos:writeUInt8(self.nSeat)
            bos:writeUInt8(self.nFlag)
            bos:writeInt32(self.nValue)

            return bos
        end,
        bistream = function (self, buff, bufflen)
            local bis = un.network.OStream.new(buff)
            self.nSeat = bis:readUInt8()
            self.nFlag = bis:readUInt8()
            self.nValue = bis:readInt32()
            return self
        end
    }

GameProtocol.msgCountScore = {
    XY_ID = 1056,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        self:reset()
        return o
    end,

    reset = function(self)
        self.nSeat = 0;
        self.isShow = false;
        self.isLianZhuang = false
        self.isBanker = false
        self.isChengBao = false
        self.isBaoSanTan = false
        self.isFeiNiaoPeiFu = false
        self.nPan = 0
        self.nGang = 0
        self.nPao = 0
        self.nScore = 0
        self.huType = 0
        self.huFanCount = 0
        self.huFanID = {}
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.isShow = bis:readBool()
        self.isLianZhuang = bis:readBool()
        self.isBanker = bis:readBool()
        self.isChengBao = bis:readBool()
        self.isBaoSanTan = bis:readBool()
        self.isFeiNiaoPeiFu = bis:readBool()
        self.nPan = bis:readUInt8()
        self.nGang = bis:readUInt16()
        self.nPao = bis:readUInt8()
        self.nScore = bis:readInt32()
        self.huType = bis:readUInt8()
        self.huFanCount = bis:readUInt8()
        self.huFanID = {}
        for k = 1,self.huFanCount do
            self.huFanID[k] = bis:readInt32()
        end
        return self
    end

}

GameProtocol.msgOutMah = {
    XY_ID = 547,

    nSeat = 0,
    nCount = 0,
    nMahs = {},
    nLastOutMah = 0;

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
        if bis:getAvailableSize() > 0 then
            self.nLastOutMah = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgPowerBack = {
    XY_ID = 559,
    nPowerID = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nPowerID)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        if bis:getAvailableSize() > 0 then
            self.nPowerID = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgReqShuffle = {
    XY_ID = 561,

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
    XY_ID = 562,

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

GameProtocol.msgShuffleFinish = {
    XY_ID = 563,

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

GameProtocol.msgThrowChipRelink = {
    XY_ID = 564,

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

GameProtocol.msgEndDetail =
{
    XY_ID = 11298,
    nPlayerNum = 0,--byte//玩家数量
    vEndData = {},--EndData结构，玩家计算数据
    nNumID = {},
    nSeat = {},
    nComboCount = {},
    vEndCombo ={},
    nFan = {},
    bFanlmt = {},
    nKongScore = {},
    nScore = {},

    nDoubleFlag = {},
    nHuType = {},
    nHuTypeEx = {},
    nHuCount = {},
    nHuMahs = {},
    nGetSeats = {},
    nGetCount = {},

    nAnte = {},
    strHuTypeTitle = {},

    isShowDetail = false,
    isEnd = false,
    nBillID = 0,--int //帐单号
    nPan = 0,--byte
    nTotalScore = {},
    nBanker = -1,
    nLaoZhuang = 0,
    strEndTime = "",
    strLuaData = "",
    nPropCnt = {},
    createnumid = -1,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayerNum = bis:readUInt8()
        for i = 1, self.nPlayerNum do
            self.nNumID[i] = bis:readInt32()--int玩家id
            self.nSeat[i] = bis:readUInt8()--byte玩家座位号
            self.nFan[i] = bis:readUInt8()--byte 番数
            self.bFanlmt[i] = bis:readBool() --bool是否封顶
            self.nKongScore[i] = bis:readInt32() --int杠优胜值
            self.nScore[i] = bis:readInt32()--int优胜值,正负
            self.nDoubleFlag[i] = bis:readUInt8()--byte 加倍标记 0没有，1报叫，2飘
            self.nHuType[i] = bis:readUInt8()--byte胡牌类型
            self.nHuTypeEx[i] = bis:readUInt8()--byte//0没有，1天胡，2地胡，3杠上炮，4杠上花，11查叫，12花猪
            self.nHuCount[i] = bis:readUInt8()--byte
            bis:seek(-1)
            self.nHuMahs[i] = bis:readString()--byte[]胡牌的值
            self.nGetCount[i] = bis:readUInt8()--byte自摸几家，点炮固定为1
            bis:seek(-1)

            self.nGetSeats[i] = bis:readString() --byte

            self.nComboCount[i] = bis:readUInt8()--byte combo数量
            self.vEndCombo[i] = {}
            for j = 1,self.nComboCount[i] do
                self.vEndCombo[i][j] = {}
                self.vEndCombo[i][j].nFlag = bis:readUInt8()--byte//牌组类型
                self.vEndCombo[i][j].nFromSeat = bis:readUInt8()--byte
                self.vEndCombo[i][j].nCount = bis:readUInt8()--byte//牌张数
                bis:seek(-1)
                self.vEndCombo[i][j].nMahs = bis:readString()--//牌数组
                self.vEndCombo[i][j].nGetCount = bis:readUInt8()
                bis:seek(-1)
                self.vEndCombo[i][j].nGetSeats = bis:readString()--//如果是杠收了哪几家
                self.vEndCombo[i][j].nToCount = bis:readUInt8()
                bis:seek(-1)
                self.vEndCombo[i][j].nToSeats = bis:readString()--呼叫转移到哪家
            end

            self.nAnte[i] = bis:readUInt8()
            self.strHuTypeTitle[i] = bis:readString()

        end
        self.isShowDetail = bis:readBool()--当isShowDetail为false时，不出错时isEnd必定为true
        self.isEnd = bis:readBool()--当isShowDetail为true时，isEnd用来点击继续按钮时是发继续消息，还是显示账单用
        if bis:getAvailableSize()>0 then
            self.nBillID = bis:readInt32()
            self.nPan = bis:readUInt8()
            for i = 1, self.nPlayerNum do
                self.nTotalScore[i] = {}
                for j = 1, self.nPan do
                    self.nTotalScore[i][j] = bis:readUInt16()
                end
            end
        end
        if bis:getAvailableSize()>0 then
            self.nBanker = bis:readUInt8()
            self.nLaoZhuang = bis:readUInt32()
        else
            self.nBanker = -1
        end
        if bis:getAvailableSize()>0 then
            self.strEndTime = bis:readString()
        else
            self.strEndTime = ""
        end
        if bis:getAvailableSize()>0 then
            self.strLuaData = bis:readString()
        else
            self.strLuaData = ""
        end
        if bis:getAvailableSize()>0 then
            for i = 1, self.nPlayerNum do
                self.nPropCnt[i] = bis:readUInt32()
            end
        end
        if bis:getAvailableSize()>0 then
            self.createnumid = bis:readUInt32()
        end

        return self
    end
}

return GameProtocol