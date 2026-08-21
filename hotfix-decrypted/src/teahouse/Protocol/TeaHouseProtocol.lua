---@class TeaHouseProtocol
local TeaHouseProtocol = {}

-- TeaHouseProtocol.PROCESS_ID = 116
-- TeaHouseProtocol.APP_ID = 0
-- TeaHouseProtocol.BILL_PROCESS_ID = 30
-- TeaHouseProtocol.BILL_APP_ID = 0
-- TeaHouseProtocol.ST_MAXTEAHOUSE = 3 --加入的比赛场已满
-- TeaHouseProtocol.UC_RIGHT_WAITING = 2 --等待领队审 批
-- TeaHouseProtocol.UC_RIGHT_YES = 1 --有权限
-- TeaHouseProtocol.UC_RIGHT_NO = 0 --无权限
local XY_ID_PLUS = 200

local CMDT_REQCREATETABLEAUTOSIT = XY_ID_PLUS + 81 --创建桌子并自动入座
local CMDT_RESPCREATETABLEAUTOSIT = XY_ID_PLUS + 82 --返回创建桌子并自动入座

local CMDT_REQJIONTAETABLE = XY_ID_PLUS + 83 --请求入座
local CMDT_RESPJIONTAETABLE = XY_ID_PLUS + 84 --返回入座

local CMDT_REQSETMANAGERRIGHT = XY_ID_PLUS + 96 --设置权限
local CMDT_RESPSETMANAGERRIGHT = XY_ID_PLUS + 97

local CMDT_REQINVITEPLAYER = XY_ID_PLUS + 98 --邀请玩家
local CMDT_RESPINVITEPLAYER = XY_ID_PLUS + 99

local CMDT_REQCREATEJOINCONFIG = XY_ID_PLUS + 123 --请求比赛场走新流程还是老流程的配置(123,124为临时协议，所有区都走新的之后可以删掉)
local CMDT_RESPCREATEJOINCONFIG = XY_ID_PLUS + 124 --返回比赛场走新流程还是老流程的配置

local CMDT_REQCREATEAUTOSITWITHMODE = XY_ID_PLUS + 125 --使用固定玩法创建桌子并自动入桌 （新流程）

local CMDT_REQRANKUSERINFO = XY_ID_PLUS + 128 -- 请求按某个维度排序的玩家信息
local CMDT_RESPRANKUSERINFO = XY_ID_PLUS + 129 -- 返回按某个维度排序的玩家信息

local CMDT_REQDISMISSTEAHOUSE = XY_ID_PLUS + 130 -- 领队请求预解散比赛场（不立刻解散，有确认期）
local CMDT_RESPDISMISSTEAHOUSE = XY_ID_PLUS + 131 -- 返回预解散比赛场

local CMDT_REQCANCELDISMISSTEAHOUSE = XY_ID_PLUS + 132 -- 领队撤回解散比赛场请求
local CMDT_RESPCANCELDISMISSTEAHOUSE = XY_ID_PLUS + 133 -- 返回领队撤回解散比赛场请求

local CMDT_REQAGENTBINDUSER = XY_ID_PLUS + 134 -- 领队请求绑定用户
local CMDT_RESPAGENTBINDUSER = XY_ID_PLUS + 135 -- 返回绑定用户

local CMDT_REQOTHERSHIDTHINFO = XY_ID_PLUS + 141 --请求 对非比赛场会员是否隐藏比赛场信息
local CMDT_RESPOTHERSHIDTHINFO = XY_ID_PLUS + 142 --请求 对非比赛场会员是否隐藏比赛场信息

local CMDT_REQFORBIDDENPLAY = XY_ID_PLUS + 147 -- 禁止玩家玩游戏
local CMDT_RESPFORBIDDENPLAY = XY_ID_PLUS + 148

local CMDT_REQINVITEHISTORY = XY_ID_PLUS + 149
local CMDT_RESPINVITEHISTORY = XY_ID_PLUS + 150

local CMDT_IMTOOLCONFIG = XY_ID_PLUS + 151

local CMDT_REQRANKSELFINFO = XY_ID_PLUS + 169 -- 请求自己在某个比赛场某个维度排名
local CMDT_RESPRANKSELFINFO = XY_ID_PLUS + 170 -- 返回自己在某个比赛场某个维度排名

local CMDT_REQTEAMEMBERLIST = XY_ID_PLUS + 173 -- 请求比赛场会员列表
local CMDT_RESPTEAMEMBERLIST = XY_ID_PLUS + 174 -- 返回比赛场会员列表

local CMDT_REQSELFFIGHTINFO = XY_ID_PLUS + 175 -- 请求个人比赛场对战时间信息
local CMDT_RESPSELFFIGHTINFO = XY_ID_PLUS + 176 -- 返回个人比赛场对战时间信息

local CMDT_REQOPERATIONHISTORY = XY_ID_PLUS + 177 -- 请求申请或操作记录
local CMDT_RESPOPERATIONHISTORY = XY_ID_PLUS + 178 -- 返回申请或操作记录

local CMDT_REQPLAYEROWNERCARD = XY_ID_PLUS + 179 -- 请求玩家领队卡数
local CMDT_RESPPLAYEROWNERCARD = XY_ID_PLUS + 180 -- 请求玩家领队卡数

local CMDT_REQGETTEATABLERULEVISIBLE = XY_ID_PLUS + 183 --请求比赛场桌子规则是否对玩家可见
local CMDT_RESPGETTEATABLERULEVISIBLE = XY_ID_PLUS + 184

local CMDT_REQSETTEATABLERULEVISIBLE = XY_ID_PLUS + 185 --请求设置比赛场桌子规则是否对玩家可见
local CMDT_RESPSETTEATABLERULEVISIBLE = XY_ID_PLUS + 186

local CMDT_REQSETAUTOTRANSFERCARD = XY_ID_PLUS + 193 --领队设置比赛场自动划卡参数
local CMDT_RESPSETAUTOTRANSFERCARD = XY_ID_PLUS + 194 --返回领队设置比赛场自动划卡参数
local CMDT_REQGETAUTOTRANSFERCARD = XY_ID_PLUS + 195 --领队请求比赛场自动划卡参数
local CMDT_RESPGETAUTOTRANSFERCARD = XY_ID_PLUS + 196 --返回领队请求比赛场自动划卡参数

local CMDT_REQSETFORBIDPLAYINSAMETABLE            = XY_ID_PLUS + 205  --禁止某几个玩家同桌游戏
local CMDT_RESPSETFORBIDPLAYINSAMETABLE           = XY_ID_PLUS + 206  --返回
local CMDT_REQDELFORBIDPLAYINSAMETABLE            = XY_ID_PLUS + 207  --删除同桌规则
local CMDT_RESPDELFORBIDPLAYINSAMETABLE           = XY_ID_PLUS + 208  --返回
local CMDT_REQFORBIDPLAYINSAMETABLE               = XY_ID_PLUS + 209  --请求禁止同桌游戏玩家
local CMDT_RESPFORBIDPLAYINSAMETABLE              = XY_ID_PLUS + 210  --返回

local CMDT_REQTRANSFERTEAHOUSE                       = XY_ID_PLUS + 230;  -- 请求转移茶館 给另一个用户
local CMDT_RESPTRANSFERTEAHOUSE                      = XY_ID_PLUS + 231;  -- 返回

-- 领队设置玩家对排行榜的可见性
local CMDT_REQSETRANKLISTVISIBLE                  = XY_ID_PLUS + 253;  -- 设置排行榜的可见性
local CMDT_RESPSETRANKLISTVISIBLE                 = XY_ID_PLUS + 254;  -- 返回
local CMDT_REQGETRANKLISTVISIBLE                  = XY_ID_PLUS + 255;  -- 获取排行榜的可见性
local CMDT_RESPGETRANKLISTVISIBLE                 = XY_ID_PLUS + 256;  -- 返回

local CMDT_REQSETTEACUSTOMINFO                    = XY_ID_PLUS + 267  -- 设置比赛场相关信息
local CMDT_RESPSETTEACUSTOMINFO                   = XY_ID_PLUS + 268  -- 返回
local CMDT_REQGETTEACUSTOMINFO                    = XY_ID_PLUS + 269  -- 设置比赛场相关信息
local CMDT_RESPGETTEACUSTOMINFO                   = XY_ID_PLUS + 270  -- 返回

local CMDT_REQSETPLAYERCUSTOMINFO = XY_ID_PLUS + 295 -- 领队设置玩家自定义信息
local CMDT_RESPSETPLAYERCUSTOMINFO = XY_ID_PLUS + 296 -- 返回
local CMDT_REQGETPLAYERCUSTOMINFO = XY_ID_PLUS + 297 -- 领队获取玩家自定义信息
local CMDT_RESPGETPLAYERCUSTOMINFO = XY_ID_PLUS + 298 -- 返回

local CMDT_REQCANQUITTEAHOUSE                     = XY_ID_PLUS + 341;  -- 请求是否可以退出比赛场
local CMDT_RESPCANQUITTEAHOUSE                    = XY_ID_PLUS + 342;  -- 返回

local CMDT_REQGETTEATABLECARD                     =  347 + XY_ID_PLUS;  --玩家请求棋牌室总房卡库存，总桌卡，占用桌卡信息
local CMDT_RESPGETTEATABLECARD                    =  348 + XY_ID_PLUS;  -- 返回

local CMDT_REQREGISTERAGENT                       = XY_ID_PLUS + 349;  -- 请求注册用户
local CMDT_RESPREGISTERAGENT                      = XY_ID_PLUS + 350;  -- 返回

local CMDT_REQUNLOCKTEAINFO                       = XY_ID_PLUS + 357  --  解锁比赛场相关数据
local CMDT_RESPUNLOCKTEAINFO                      = XY_ID_PLUS + 358  --  返回
local CMDT_REQUPGRADETEAHOUSE                     = XY_ID_PLUS + 359  -- 中级比赛场升级为高级比赛场
local CMDT_RESPUPGRADETEAHOUSE                    = XY_ID_PLUS + 360  --  返回
local CMDT_REQGETACTIVEVALUE                      = XY_ID_PLUS + 361  --  获取活跃值
local CMDT_RESPGETACTIVEVALUE                     = XY_ID_PLUS + 362  -- 返回
local CMDT_TEALEVELCONFIG                         = XY_ID_PLUS + 363  -- 不同等级比赛场相关信息
local CMDT_REQGETADDCARDLOG                       = XY_ID_PLUS + 366  -- 获取前项付费模式下给玩家的划卡记录
local CMDT_RESPGETADDCARDLOG                      = XY_ID_PLUS + 367  -- 返回

local CMDT_REQTEAANDPLAYEROPERATION               = XY_ID_PLUS + 381  -- 比赛场和玩家的操作记录
local CMDT_RESPTEAANDPLAYEROPERATION              = XY_ID_PLUS + 382  -- 返回

local CMDT_NOTIFYCARDCOUNT                        = XY_ID_PLUS + 391  -- 通知卡数（缺卡提醒）

local CMDT_REQRECOMENDINVITELIST                  = XY_ID_PLUS + 392    -- 获取推荐邀请列表
local CMDT_RESPRECOMENDINVITELIST                 = XY_ID_PLUS + 393    -- 
local CMDT_REQSENDRECOMENDINVITE                  = XY_ID_PLUS + 394    -- 批量发送邀请
local CMDT_RESPSENDRECOMENDINVITE                 = XY_ID_PLUS + 395    -- 

local CMDT_REQGETINVITESTATE                      = XY_ID_PLUS + 399    --获取邀请记录
local CMDT_RESPGETINVITESTATE                     = XY_ID_PLUS + 400

local CMDT_REQDELKICKLOG                          = XY_ID_PLUS + 404    -- 删除踢人记录
local CMDT_RESPDELKICKLOG                         = XY_ID_PLUS + 405    -- 返回

local CMDT_REQNEWOPENTEAHOUSE                     = XY_ID_PLUS + 406; --亲友圈主申请新亲友圈 new(c->s)
local CMDT_RESPNEWOPENTEAHOUSE                    = XY_ID_PLUS + 407; --返回新亲友圈 new(s->c)
local CMDT_REQTEAHOUSEAUTOUPGRADE                 = XY_ID_PLUS + 408; --请求自动升级比赛场(c->s)
local CMDT_RESPTEAHOUSEAUTOUPGRADE                = XY_ID_PLUS + 409; --返回自动升级比赛场结果 (s->c)

local CMDT_REQTEATIMECARDS_INFO                   = XY_ID_PLUS + 410;      -- 获取比赛场库存中时效道具详情
local CMDT_RESPTEATIMECARDS_INFO                  = XY_ID_PLUS + 411;

TeaHouseProtocol.TeaHouseSummary = {
    THAHOUSE_STATE = {
        TS_CLOSE = 0,
        TS_OPEN = 1,
        TS_PAUSE = 2,
    },
    nTeaHouseAppid = 0,
    nTeaNumber = 0,
    szTeaName = "",
    szPasswd = "",
    nUserCnt = 0,
    szUrl = "",
    szData = "",
    nOnLineUserCnt = 0,
    ucState = 0,
    nTodayUseProps = 0,
    nAreaid = 0,
    nTeaOwnerNumid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end
}

--请求连接比赛场模块(c->s)
TeaHouseProtocol.PlayerConnect = {
    XY_ID = 1 + XY_ID_PLUS,

    askid = 0,
    rightid = 0, -- 权限 可以创建最多比赛场数
    url = "",
    szName = "",
    nAgentAreaid = 0,
    nGameLobbyId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.rightid)
        bos:writeString(self.url)
        bos:writeString(self.szName)
        bos:writeInt32(self.nAgentAreaid)
        bos:writeInt32(self.nGameLobbyId)
        return bos
    end,
}

--返回(s->c)
TeaHouseProtocol.RespConnectInfo = {
    XY_ID = 2 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        FAIL = 1, --不是用户
    },
    askid = 0, -- 序号
    size = 0, --数组大小
    teaNumber = {}, -- 己建比赛场数组
    appid = 0,
    ucFlag = 0, --char
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.size = bis:readInt16()
        self.teaNumber = {}
        for i = 1, self.size do
            self.teaNumber[i] = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.appid = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.ucFlag = bis:readInt8()
        end
        return self
    end
}

--请求进入比赛场(c->s)
TeaHouseProtocol.ReqJoinTeaHouse = {
    XY_ID = 3 + XY_ID_PLUS,

    askid = 0, --序号
    teaNumber = 0, --需要进入的比赛场编号(比赛场主使用)
    password = 0, --比赛场等入密码或者管理密码(比赛场主使用)
    url = "", --微信头像的url  
    nickname = "", -- 玩家昵称
    sex = 0, --性别(取值见SEX定义)
    channelid = 0, --渠道号
    osver = 0, --client OS版本号
    reconnect = 0, --是否重连标志, 1为重连,0为正常
    szIdentify = "", --硬件码
    gameLobbyId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        bos:writeInt32(self.password)
        bos:writeString(self.url)
        bos:writeString(self.nickname)
        bos:writeUInt8(self.sex)
        bos:writeInt32(self.channelid)
        bos:writeInt32(self.osver)
        bos:writeUInt8(self.reconnect)
        bos:writeString(self.szIdentify)
        bos:writeInt32(self.gameLobbyId)
        return bos
    end,
}

--返回(s->c)
TeaHouseProtocol.RespJoinTeaHouse = {
    XY_ID = 4 + XY_ID_PLUS,

    FLAG = {
        SUCCESS = 0, --成功
        UNKNOWN_USERID = 1, --非法用户
        INVALID_PASSWORD = 2, --密码不对
        DBERR = 3, --DB错误
        CLOSED = 4, --已关闭
        OTHER = 5,
        PAUSED = 6, --已暂停
        UNKNOWN_TEA = 7, --不是该区游戏的比赛场
        ALREADY_JOINTEA = 8,--已经在请求进入比赛场了
        RSV9 = 9,
        NEWBIE_REDIS_OUT = 25,--玩家新手redis 过期
        REDIS_NOT_NEWBIE = 26,--玩家新手redis 不是新手
        NEWBIE_PLAYER_HAVE_TWA = 27,--不是新手 有比赛场信息
        UNBINDWECHAT = 28, --非绑定微信用户，禁止进入
        ERR_PWD_LMT = 29,--玩家输入错误比赛场口令的次数过多
    },

    askid = 0, --序号
    flag = 0, --返回标示    
    right = 0, --权限 0 无比赛场权限 1 有比赛场权限 
    passwd = "", --返回玩家进入密码
    totalCnt = 0, --返回可创建最大包房数
    tableCnt = 0, --返回已经创建包房数
    billCnt = 0, --返回未计算帐单数
    powerCnt = 0, --返回申请比赛场权限玩家数
    bIsOwner = 0,
    appid = 0,
    nErrorCode = 0,
    szErrorInfo = "",

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.right = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.passwd = bis:readString()
            self.totalCnt = bis:readInt32()
            self.tableCnt = bis:readInt32()
            self.billCnt = bis:readInt32()
            self.powerCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bIsOwner = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.appid = bis:readInt32()
            self.nErrorCode = bis:readInt32()
            self.szErrorInfo = bis:readString()
            --TeaHouseProtocol.APP_ID = self.appid 功能代码移到业务逻辑的地方
        end
        return self
    end
}

--/返回包房信息(s->c)
TeaHouseProtocol.TableInfo = {
    XY_ID = 5 + XY_ID_PLUS,
    FLAG = {
        ST_NORMAL = 0, -- 0 正常
        ST_GAME = 1, -- 1 游戏中
        ST_DISBAND = 2, -- 2 解散
        ST_INIT = 9, -- 9 初始化
    },

    tableid = 0, --桌号
    gameid = 0, --游戏编号
    appid = 0, --进程号
    base = 0, --底数
    count = 0, --局数
    finish = 0, --完成局数
    usePropCnt = 0, -- 消耗房卡数
    billCnt = 0, -- 未计算轮数
    name = "", -- 包房名称
    data = "", -- 包房游戏规则
    size = 0, --椅子数
    passwd = "", --进入包房密码
    state = 0, --0 正常 1 解散
    nAreaid = {},
    nNumid = {},
    creatorAreaid = 0, --领队areaid
    creatorNumid = 0, --领队numid
    createTime = 0, --创建时间

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)


        self.tableid = bis:readInt32()
        self.base = bis:readInt32()
        self.count = bis:readInt32()
        self.finish = bis:readInt32()
        self.usePropCnt = bis:readInt32()
        self.billCnt = bis:readInt32()
        self.name = un.StringUtils.GB_18030_2000_TO_UTF8(bis:readString())
        self.data = bis:readString()
        self.size = bis:readInt16()
        self.gameid = bis:readInt32()
        self.appid = bis:readInt32()
        self.passwd = bis:readString()
        self.state = bis:readInt8()
        self.nAreaid = {}
        self.nNumid = {}
        if bis:getAvailableSize() > 0 then
            for i = 1, self.size do
                table.insert(self.nAreaid, bis:readInt32())
                table.insert(self.nNumid, bis:readInt32())
            end
        end
        if bis:getAvailableSize() > 0 then
            self.creatorAreaid = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.creatorNumid = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.createTime = bis:readInt32()
        end
        return self
    end
}

--返回比赛场信息(s->c)
TeaHouseProtocol.RespTeaHouseInfo = {
    XY_ID = 6 + XY_ID_PLUS,
    FLAG = {
        CLOSED = 0,
        OPEN = 1,
        PAUSED = 2
    },
    teaNumber = 0, --比赛场编号
    teaName = "", --比赛场名称
    passwd = "", --比赛场密码
    tableTotalCnt = 0, --可以创建包房数
    tableCnt = 0, --已创建包房数
    tableid = {}, --已创建包房编号数组
    propCnt = 0, --剩余房卡数
    billCnt = 0, --未计算帐单数
    askCnt = 0, --申请比赛场权限玩家数
    userCnt = 0, --比赛场中玩家人数
    url = "", --比赛场主微信头像的url
    nAskid = 0,
    szData = "", --比赛场附加信息
    nCardNum = 0, --变更密码消耗房卡数量
    nDefaultPropCnt = 0, --比赛场玩家每日默认消耗道具数
    nDailyUseAllProps = 0, --比赛场每日消耗道具数
    nOnLineUserCnt = 0, --在线人数

    ucState = 0, --0已经关闭，1使用状态 2 暂时关闭
    nSelfPropCnt = 0, --本比赛场内剩余房卡
    nOverPropCnt = 0, --默认可透支道具数
    bOthersHide = false,
    acOwnerNick = "", --领队名字
    acNotice = "", --公告
    nSubAreaId = 0, --区域编号
    bTableRuleVisible = false, --固定玩法规则是否可见
    nEnableAutoTransferCard = 0,
    nLowCardNum = 0,
    nTransferCardNum = 0,
    acExtraData = "",
    nCreateTime = 0,
    bJoinTableRuleVisible = false,
    nErrorCode = 0,
    nRemindLowCardNum = -1,
    bUseBuyedProp = true,         --温茶1.0方案，客户端判断显示后台卡还是购买卡
    nLevel = 0,
    maxPlayerCnt = 0, -- 最大人数
    refreshTime = 0, -- 最大人数刷新时间
    kickCnt = 0, -- 踢出人数
    kickTime = 0, -- 踢出时间
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.teaNumber = bis:readInt32()
        self.teaName = bis:readString()
        self.passwd = bis:readString()
        self.tableTotalCnt = bis:readInt16()
        self.tableCnt = bis:readInt16()
        self.propCnt = bis:readInt32()
        self.billCnt = bis:readInt32()
        self.askCnt = bis:readInt32()
        self.userCnt = bis:readInt32()
        self.tableid = {}
        for i = 1, self.tableCnt do
            self.tableid[i] = bis:readInt32()
        end
        self.url = bis:readString()
        if bis:getAvailableSize() > 0 then
            self.nAskid = bis:readInt32()
            self.szData = bis:readString()
            self.nCardNum = bis:readInt32()
            self.nDefaultPropCnt = bis:readInt32()
            self.nDailyUseAllProps = bis:readInt32()
            self.nOnLineUserCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.ucState = bis:readUInt8()
            self.nSelfPropCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nOverPropCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bOthersHide = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.acOwnerNick = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.acNotice = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.nSubAreaId = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bTableRuleVisible = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.nEnableAutoTransferCard = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nLowCardNum = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nTransferCardNum = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.acExtraData = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.nCreateTime = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bJoinTableRuleVisible = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nRemindLowCardNum = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bUseBuyedProp = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.nLevel = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.maxPlayerCnt = bis:readInt32()
        else
            self.maxPlayerCnt = -1
        end
        if bis:getAvailableSize() > 0 then
            self.refreshTime = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.kickCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.kickTime = bis:readInt32()
        end
        return self
    end,
    splitTeaName = function(self, name)
        local lp, rp = 0, 0
        if string.sub(name, #name, #name) == ')' then
            rp = #name
            for i = #name - 1, 1, -1 do
                local c = string.sub(name, i, i)
                if c == '(' then
                    lp = i
                    break
                end
            end
        end
        if lp > 0 and rp > 0 and rp > lp then
            local ext = string.sub(name, lp + 1, rp - 1)
            local num = tonumber(ext)
            if num ~= nil then
                self.teaName = string.sub(name, 1, lp - 1)
                return
            end
        end
        self.teaName = name
    end,
    showTeaName = function(self)
        local txt = self.teaName
        if self.szData and #self.szData > 0 then
            txt = string.format("%s(%s)", txt, self.szData)
        end
        return txt
    end
}

--返回帐单信息(s->c)
TeaHouseProtocol.RespBillInfo = {
    XY_ID = 7 + XY_ID_PLUS,

    id = 0, --序号
    tableid = 0, --桌号
    time = 0, --结束时间点
    count = 0, --局数
    finish = 0, --完成局数
    usePropCnt = 0, --消耗房卡数
    flag = 0, --是否计算标示 0 未计算 1 已计算
    size = 0, --椅子数
    areaid = {}, --玩家区号
    numid = {}, --玩家数字帐号
    score = {}, --对应玩家胜负值
    nickName = {}, --玩家昵称
    szUrl = {}, --微信头像的url 
    szName = "", --包房名称 
    szPasswd = "",
    billCnt = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.id = bis:readInt32()
        self.tableid = bis:readInt32()
        self.time = bis:readInt32()
        self.count = bis:readInt32()
        self.finish = bis:readInt32()
        self.usePropCnt = bis:readInt32()
        self.flag = bis:readUInt8()
        self.size = bis:readInt16()
        self.areaid = {}
        self.numid = {}
        for i = 1, self.size do
            self.areaid[i] = bis:readInt32()
            self.numid[i] = bis:readInt32()
        end
        self.score = {}
        for m = 1, self.finish do
            self.score[m] = {}
            for n = 1, self.size do
                self.score[m][n] = bis:readInt32()
            end
        end
        self.nickName = {}
        self.szUrl = {}
        for i = 1, self.size do
            self.nickName[i] = bis:readString()
            self.szUrl[i] = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            local name = bis:readString()
            if name and name ~= "" then
                self.szName = name
            end
        end
        if bis:getAvailableSize() > 0 then
            local passwd = bis:readString()
            if passwd and passwd ~= "" then
                self.szPasswd = string.format("%06d", passwd)
            end
        end
        if bis:getAvailableSize() > 0 then
            local billcnt = bis:readInt32()
            if billcnt and billcnt ~= 0 then
                self.billCnt = billcnt
            end
        end
        return self
    end
}

--返回申请比赛场权限信息(s->c)
TeaHouseProtocol.RespDealPower = {
    XY_ID = 8 + XY_ID_PLUS,

    size = 0, --申请玩家数量
    areaid = {}, --申请玩家区号
    numid = {}, --申请玩家数字帐号
    data = {}, --申请备注信息 

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.size = bis:readInt32()
        self.areaid = {}
        self.numid = {}
        self.data = {}
        for i = 1, self.size do
            self.areaid[i] = bis:readInt32()
            self.numid[i] = bis:readInt32()
            self.data[i] = bis:readString()
        end

        return self
    end
}

-- 心跳协议(c->s,s->c)
TeaHouseProtocol.CheckAction = {
    XY_ID = 9 + XY_ID_PLUS,
    action = 0, --时间戳

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.action = bis:readInt32()
        return self
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.action)
        return bos
    end,
}

--返回登陆比赛场结束(s->c) 10
TeaHouseProtocol.RespJoinFinish = {
    XY_ID = 10 + XY_ID_PLUS,

    askid = 0, --序号
    teaNumber = 0, --比赛场编号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.teaNumber = bis:readInt32()
        return self
    end
}

--玩家申请比赛场权限(c->s) 11
TeaHouseProtocol.ReqAskPower = {
    XY_ID = 11 + XY_ID_PLUS,
    askid = 0, --序号
    data = "", -- 申请备注信息
    teaID = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeString(self.data)
        bos:writeInt32(self.teaID)
        return bos
    end,

}

--返回玩家申请比赛场权限(s->c) 12
TeaHouseProtocol.RespAskPower = {
    XY_ID = 12 + XY_ID_PLUS,
    FLAG = {
        ST_NOT_RIGTH = 0, --无权限
        ST_RIGTH = 1, --有权限
        ST_WAIT = 2, --等待比赛场主处理
        ST_MAXTEAHOUSE = 3, -- 已经申请5个
        ST_MAX_MEMBER = 4, --成员人数已满
        ST_SHIELD = 7,         --被用户屏蔽申请了
        BAN = 8,--比赛场功能ban掉
    },

    askid = 0, --序号
    right = 0, --权限 0 无比赛场权限 1 有比赛场权限 
    teaid = 0,


    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.right = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.teaid = bis:readInt32()
        end
        return self
    end
}

--比赛场主申请创建包房(c->s)
TeaHouseProtocol.ReqCreateTable = {
    XY_ID = 13 + XY_ID_PLUS,

    PayType = {
        TYPE_TEA_OWNER = 0, --比赛场消耗
        TYPE_TEA_PLAYER_AA = 1, --比赛场内玩家支付，扣玩家房卡
        TYPE_TEA_ROOM_OWNER = 6, --比赛场内创建桌子的玩家支付，扣玩家房卡
        TYPE_TEA_PLAYER_OWNER_CARD_AA = 7, --比赛场内玩家AA支付
        TYPE_TEA_PLAYER_OWNER_CARD_ROOMOWNER  = 8, --比赛场内房主支付

        TYPE_AGENT_PLAYER_AA = 20, --游戏结束后，扣用户大厅的房卡(user_props)，aa扣除
        TYPE_AGENT_PLAYER_WINNER = 21, --游戏结束后，扣用户大厅的房卡(user_props)，冠军出
        
        TEA_PLAYER_OWNER_TEACARD_AA      = 22, -- 比赛场内玩家AA支付，扣user_props表道具，和TEA_PLAYER_AA道具id不同， -- 商城自己购买比赛场卡
        TEA_PLAYER_OWNER_TEACARD_WIN     = 23, --比赛场内玩家冠军支付，扣user_props表道具 --  商城自己购买比赛场卡
        TEA_AA        =   24, --比赛场内领队平摊支付
    },

    askid = 0, --序号
    gameid = 0, --游戏编号
    base = 0, --底数
    cont = 0, --局数
    type = 0, --类型(正常,可透支)
    size = 0, --椅子数
    name = "", --包房名称
    data = "", --包房游戏规则
    tableCnt = 0, --桌子数    
    roomCardId = 0, --房卡id
    preCostRoomCardId = 0, --房卡id
    ucFlag = 0, --创建者类型
    nPayType = 0, --支付类型  0比赛场消耗 1AA支付 6其他支付

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.base)
        bos:writeInt32(self.cont)
        bos:writeInt32(self.type)
        bos:writeInt16(self.size)
        bos:writeString(self.name)
        bos:writeString(self.data)
        bos:writeInt32(self.tableCnt)
        bos:writeInt32(self.roomCardId)
        bos:writeInt32(self.preCostRoomCardId)
        bos:writeInt8(self.ucFlag)
        bos:writeInt32(self.nPayType)
        return bos
    end,
}

-- 返回创建包房(s->c) 14
TeaHouseProtocol.RespCreateTable = {
    XY_ID = 14 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOT_RIGHT = 1, --没有权限
        MAXTABLE = 2, --已经达到创建上限
        NOT_APPID = 3, --没有app
        NOT_SETUP = 4, --没有对应局数配置
        OTHER = 5, --其他错误
        NO_PROP = 6, -- 道具不够
        NO_TABLE = 7, -- 房间里桌子已经满了
        NO_TEAHOUSE_PROP = 8, --没有领队分配的房卡
        MAX_CREAT_TABLE = 9, --玩家已达创建最大数量的桌子
        BAN = 10, --玩家被禁游戏
        PAUSED = 11, --已经暂停
        TEAHOUSE_WITHOUT_PLAYMODE = 12,
        TEAHOUSE_MAX_COUNT = 13, --达到领队每日最大消耗
    },

    askid = 0, --序号
    flag = 0, --返回标示 
    index = 0, --返回创建桌子的序号，从1开始
    tableid = 0, --桌号
    passwd = "", --进入包房密码
    usePropCnt = 0, -- 消耗房卡数


    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.index = bis:readInt32()
        self.tableid = bis:readInt32()
        self.passwd = bis:readString()
        self.usePropCnt = bis:readInt32()
        return self
    end
}

-- 比赛场主获取帐单(c->s) 15
TeaHouseProtocol.ReqBillInfo = {
    FLAG = {
        UNBILL = 0, --未计算
        BILL = 1, --已计算
    },
    XY_ID = 15 + XY_ID_PLUS,
    askid = 0,
    teaNumber = 0, --比赛场编号
    billCnt = 0, --获取帐单数量，0 获取所有，
    billID = 0, --开始帐单号，不包含当前帐单，默认 0 
    ucFlag = 0, --uchar

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        bos:writeInt32(self.billCnt)
        bos:writeInt32(self.billID)
        bos:writeUInt8(self.ucFlag)
        return bos
    end,
}

--  比赛场主获取申请比赛场权限(c->s) 16
TeaHouseProtocol.ReqDealPower = {
    XY_ID = 16 + XY_ID_PLUS,
    askid = 0,
    teaNumber = 0, --比赛场编号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        return bos
    end,
}

TeaHouseProtocol.DealBills = {
    XY_ID = 17 + XY_ID_PLUS,
    FLAG = {
        UNBILL = 0, --未计算
        BILL = 1, --已计算
    },

    askid = 0, --序号
    teaNumber = 0, --比赛场编号
    size = 0, --数量
    id = {}, --序号
    flag = {}, --返回标示 
    nAreaid = 0,
    nNumid = 0, --玩家数据账号 

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,


    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.teaNumber = bis:readInt32()
        self.size = bis:readInt16()
        self.id = {}
        self.flag = {}
        for i = 1, self.size do
            self.id[i] = bis:readInt32()
            self.flag[i] = bis:readUInt8()
        end

        self.nAreaid = bis:readInt32()
        self.nNumid = bis:readInt32()

        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        bos:writeInt16(self.size)
        for i = 1, self.size do
            bos:writeInt32(self.id[i])
            bos:writeUInt8(self.flag[i])
        end
        bos:writeInt32(self.nAreaid)
        bos:writeInt32(self.nNumid)
        return bos
    end,
}

--比赛场主处理申请比赛场权限(c->s)
TeaHouseProtocol.DealPowers = {
    XY_ID = 18 + XY_ID_PLUS,
    FLAG = {
        NOT_RIGHT = 0, --没有权限
        RIGHT = 1, --权限
    },

    EVENT_TYPE = {
        JOIN = 0, --加入申请
        QUIT = 1, --退出申请
    },

    askid = 0, --序号
    teaNumber = 0, --比赛场编号
    size = 0, --数量
    areaid = {}, --玩家区号
    numid = {}, --玩家数字帐号
    flag = {}, --返回权限标示 
    eventType = 0, --玩家事件类型

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.teaNumber = bis:readInt32()
        self.size = bis:readInt16()
        self.areaid = {}
        self.numid = {}
        self.flag = {}
        for i = 1, self.size do
            self.areaid[i] = bis:readInt32()
            self.numid[i] = bis:readInt32()
            self.flag[i] = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.eventType = bis:readInt32()
        end
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        bos:writeInt16(self.size)
        for i = 1, self.size do
            bos:writeInt32(self.areaid[i])
            bos:writeInt32(self.numid[i])
            bos:writeUInt8(self.flag[i])
        end
        bos:writeInt32(self.eventType)
        return bos
    end,
}

-- 19 比赛场主申请变更比赛场密码(c->s)
TeaHouseProtocol.ReqChangePass = {
    XY_ID = 19 + XY_ID_PLUS,
    askid = 0,
    teaNumber = 0, --比赛场编号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        return bos
    end,
}

--返回比赛场密码(s->c)
TeaHouseProtocol.RespChangePass = {
    XY_ID = 20 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功            
        NOT_RIGHT = 1, --没有权限
    },

    askid = 0, --序号
    flag = 0, --返回标示 
    passwd = "", --返回比赛场密码 

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.passwd = bis:readString()
        return self
    end
}

-- 21 比赛场主申请删除包房(c->s)
TeaHouseProtocol.ReqDeleteTable = {
    XY_ID = 21 + XY_ID_PLUS,
    askid = 0, --序号
    tableid = 0, --桌号
    teaid = 0,
    force = 0, --是否强制解散，0不可以，1可以

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.tableid)
        bos:writeInt32(self.teaid)
        bos:writeInt32(self.force)
        return bos
    end,
}

--返回删除包房(s->c)
TeaHouseProtocol.RespDeleteTable = {
    XY_ID = 22 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        GAMEING = 1, --游戏中
        DISAGREE = 2, --玩家不同意
        INVALID_ID = 3, --
        OTHER = 4, --其他错误
        NORIGHT = 5,
        NOT_FENGXIN_RIGHT = 6,
        NOT_FULL = 7, --未坐满
    },

    askid = 0, --序号
    flag = 0, --返回标示 

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,


    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

--23 比赛场主申请新比赛场(c->s)
TeaHouseProtocol.ReqOpenTeaHouse = {
    XY_ID = 23 + XY_ID_PLUS,
    askid = 0, --序号
    name = "", --名称
    nDefaultProps = 0, --默认新会员可消耗道具数    
    propid = 0,
    nOverPropCnt = 0, --默认可透支道具数
    notice = "", --公告
    areaID = 0, --区域号
    nLevel = 0,--比赛场等级
    bNoCardCheck = 0, --传1跳过房卡检查
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeString(self.name)
        bos:writeInt32(self.nDefaultProps)
        bos:writeInt32(self.propid)
        bos:writeInt32(self.nOverPropCnt)
        bos:writeString(self.notice)
        bos:writeInt32(self.areaID)
        bos:writeInt32(self.nLevel)
        bos:writeInt32(self.bNoCardCheck)
        return bos
    end,
}

--返回新比赛场(s->c)
TeaHouseProtocol.RespOpenTeaHouse = {
    XY_ID = 24 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOTRIGHT = 1, --不权限
        MAXHOUSE = 2, --已经达到创建上限
        OTHER = 3, --其他错误
        NOTPROP = 4, --没有足够的卡
        SENSITIVE = 5, --被MGC过滤
        BAN = 6, --被ban比赛场功能
        DAILYMAX = 7, --日常上限
    },
    askid = 0, --序号
    flag = 0, --返回标示 
    teaNumber = 0, --比赛场编号
    szTeaName = "",
    nErrorCode = 0,
    nPasswd = 0,
    nUnLockActiveValue = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.teaNumber = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.szTeaName = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nPasswd = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nUnLockActiveValue = bis:readInt32()
        end
        return self
    end
}

--25 比赛场主关闭比赛场(c->s)
TeaHouseProtocol.ReqCloseTeaHouse = {
    XY_ID = 25 + XY_ID_PLUS,
    askid = 0, --序号
    teaNumber = 0, --比赛场编号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        return bos
    end,
}

-- 26 返回关闭比赛场(s->c)
TeaHouseProtocol.RespCloseTeaHouse = {
    XY_ID = 26 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOTRIGHT = 1, --不权限
        EXISTTABLE = 2, --还有包房
        OTHER = 3, --其他错误
    },

    askid = 0, --序号
    flag = 0, --返回标示 

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

-- 27 比赛场主踢人(c->s)
TeaHouseProtocol.ReqKickUser = {
    FLAG = {
        KICK_ROOM = 1, --踢出包房
        KICK_TEAHOUSE = 2, --踢出比赛场，同时删除比赛场权限
    },
    APPLY_TYPE = {
        OWNER = 1, --领队申请踢人
        DEALPOWER = 2, --处理玩家申请
    },
    XY_ID = 27 + XY_ID_PLUS,
    askid = 0, --序号
    tableid = 0, --桌号
    areaid = 0, --玩家区号
    numid = 0, --玩家数字帐号
    ucType = 0, --uchar 踢人类型 1 踢出包房 2 踢出比赛场，同时删除比赛场权限
    nApplyType = 0,
    teaid = 0,
    bIsPartner = false,
    exceptsize = 0,
    exceptnumid = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.tableid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)
        bos:writeUInt8(self.ucType)
        bos:writeInt32(self.nApplyType)
        bos:writeInt32(self.teaid)
        bos:writeBool(self.bIsPartner)
        bos:writeInt32(self.exceptsize)
        for i = 1, self.exceptsize do
            bos:writeInt32(self.exceptnumid[i])
        end
        return bos
    end,
}

--返回踢人(s->c)
TeaHouseProtocol.RespKickUser = {
    XY_ID = 28 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOTRIGHT = 1, --不权限
        NOTTABLE = 2, --包房不存在
        NOTUSER = 3, --玩家不存在
        GAMEING = 4, --游戏中           
        OTHER = 5, --其他错误
        MANAGER_K_MANAGER = 6, --副领队踢副领队
        NOT_FENGXIN_RIGHT = 7,
    },

    askid = 0, --序号
    flag = 0, --返回标示

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

--29 请求离开比赛场(c->s)
TeaHouseProtocol.ReqLeaveTeaHouse = {
    XY_ID = 29 + XY_ID_PLUS,

    askid = 0, --序号
    teaNumber = 0, --比赛场编号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        return bos
    end,
}

-- 返回离开比赛场(s->c)
TeaHouseProtocol.RespLeaveTeaHouse = {
    XY_ID = 30 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        GAMEING = 1, --游戏中           
        OTHER = 2, --其他错误
    },

    askid = 0, --序号
    flag = 0, --返回标示 

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

--31 返回玩家信息(s->c)
TeaHouseProtocol.UserInfo = {
    XY_ID = 31 + XY_ID_PLUS,
    US_STATE = {
        US_OFFLINE = 0,
        US_ONLINE = 1,
        US_GAME = 2,
    },

    TP_EVENT = {
        TP_EVENT_NONE = 0, --无
        TP_EVENT_QUIT = 1, --请求退出比赛场会员
    },

    areaid = 0, --玩家区号
    numid = 0, --玩家数字帐号
    tableid = 0, --所在桌号
    seat = 0, --座位号
    url = "", --微信头像的url  
    nickName = "", --玩家昵称
    sex = 0, --性别(取值见SEX定义)
    nPropCnt = 0, --玩家所在比赛场可消耗道具数量
    bHaveRight = 0, --是否有该比赛场权限
    nDailyCost = 0, --每日消耗（小房卡）
    nHistoryCost = 0, --历史消耗（小房卡）
    nJoinTime = 0, --加入时间
    nAskid = 0,
    teaNumber = 0,
    nUserShowProps = 0, --玩家显示的卡
    nAgentShowProps = 0, --用户显示的卡
    bOffLine = false, --是否离线
    ucState = "", --玩家状态 US_STATE
    nChangeTime = 0, --游戏时间
    nLastFightTime = 0, --最终游戏时间
    nIdx = 0, --索引（从0开始）
    nTotal = 0, --总共索引数
    nUserEvent = 0, --用户申请事件
    nUserRight = 0,
    acAksPowerData = "", --申请加入信息
    nAskTime = 0, --申请加入时间
    nLastLeaveTime = 0, -- 最后离开比赛场时间
    bCanPlay = true,
    nPlayerOwnerCards = 0, --台州转型人人，比赛场流通模式使用该字段，划卡处统计流通卡数量
    acUserExtraInfo = "", --用户一些额外数据，格式见ReqUserInfo
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.areaid = bis:readInt32()
        self.numid = bis:readInt32()
        self.tableid = bis:readInt32()
        self.seat = bis:readInt16()
        self.url = bis:readString()
        self.nickName = bis:readString()
        self.sex = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.nPropCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bHaveRight = bis:readBool()
            self.nDailyCost = bis:readInt32()
            self.nHistoryCost = bis:readInt32()
            self.nJoinTime = bis:readInt32()
            self.nAskid = bis:readInt32()
            self.teaNumber = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nUserShowProps = bis:readInt32()
            self.nAgentShowProps = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bOffLine = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.ucState = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.nChangeTime = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nLastFightTime = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nIdx = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nTotal = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nUserEvent = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nUserRight = bis:readInt32() -- = = 1
        end
        if bis:getAvailableSize() > 0 then
            self.acAksPowerData = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.nAskTime = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nLastLeaveTime = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bCanPlay = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.nPlayerOwnerCards = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.acUserExtraInfo = bis:readString()
        end
        return self
    end
}

--玩家请求进入包房(c->s)
TeaHouseProtocol.ReqJoinTable = {
    XY_ID = 32 + XY_ID_PLUS,
    FLAG = {
        RAND = 0, --随机
        SETUP = 1, --指定
    },
    askid = 0, --序号
    teaNumber = 0, --比赛场编号
    tableid = 0, --桌号
    seat = 0, --座位号
    flag = 0, --是否按指定座位标志,1为指定,0为随机

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        bos:writeInt32(self.tableid)
        bos:writeInt32(self.seat)
        bos:writeUInt8(self.flag)
        return bos
    end,
}

--返回(s->c)
TeaHouseProtocol.RespJoinTable = {
    XY_ID = 33 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOT_RIGHT = 1, --没有权限
        NOT_EMPTY = 2, --没有空位
        OTHER = 3, --其他错误
        NO_TEAHOUSE_PROP = 4, --没有领队分配的房卡
        PAUSED = 5, --已经闭圈
        NO_BEST_TABLE = 6, --没有合适的桌子
        NOT_PROP = 7, --道具不足
        SAME_IP_LIMIT = 8, --同ip限制
        FORBIDDEN_PLAY = 9, --禁止游戏
    },

    askid = 0, --序号
    flag = 0, --标志
    gameid = 0, --游戏编号
    appid = 0, --进程号
    roomid = 0, --房间号
    tableid = 0, --桌子编号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.gameid = bis:readInt32()
        self.appid = bis:readInt32()
        self.roomid = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.tableid = bis:readInt32()
        end
        return self
    end
}

--34 返回玩家状态(s->c)
TeaHouseProtocol.UserState = {
    XY_ID = 34 + XY_ID_PLUS,
    areaid = 0, --玩家区号
    numid = 0, --玩家数字帐号
    tableid = 0, --桌号
    seat = 0, --座位号
    teaNumber = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.areaid = bis:readInt32()
        self.numid = bis:readInt32()
        self.tableid = bis:readInt32()
        self.seat = bis:readInt16()
        if bis:getAvailableSize() > 0 then
            self.teaNumber = bis:readInt32()
        end
        return self
    end

}

--  玩家离开比赛场(s->c)
TeaHouseProtocol.UserLeaveRoom = {
    XY_ID = 35 + XY_ID_PLUS,

    teaNumber = 0, --比赛场编号
    areaID = 0, --区号(areaid)
    numID = 0, --数字账号
    isKicked = false, --是否被踢
    bOffLine = false, --是否离线

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.teaNumber = bis:readInt32()
        self.areaID = bis:readInt32()
        self.numID = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.isKicked = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.bOffLine = bis:readBool()
        end
        return self
    end
}

-- 36 返回桌子状态(s->c)
TeaHouseProtocol.TableState = {
    XY_ID = 36 + XY_ID_PLUS,
    FLAG = {
        ST_NORMAL = 0, -- 0 正常
        ST_GAME = 1, -- 1 游戏中
        ST_DISBAND = 2, -- 2 解散
        ST_INIT = 9, -- 9 初始化
    },

    tableid = 0, --桌号
    gameid = 0, --游戏编号
    appid = 0, --进程号
    state = 0, -- 0 正常 1 解散 
    count = 0, --局数
    finish = 0, --完成局数

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.tableid = bis:readInt32()
        self.gameid = bis:readInt32()
        self.appid = bis:readInt32()
        self.state = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.count = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.finish = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.TeaHouseState = {
    XY_ID = 37 + XY_ID_PLUS,

    teaNumber = 0, --比赛场编号
    billCnt = 0, --未计算帐单数
    askCnt = 0, --申请比赛场权限玩家数
    userCnt = 0, --比赛场中玩家人数
    nOnLineUserCnt = 0, --在线人数
    acTeaName = "", --比赛场名字
    acNotice = "", --比赛场公告

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,


    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.teaNumber = bis:readInt32()
        self.billCnt = bis:readInt32()
        self.askCnt = bis:readInt32()
        self.userCnt = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nOnLineUserCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.acTeaName = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.acNotice = bis:readString()
        end
        return self
    end
}

-- RDP
TeaHouseProtocol.ReqJoinCustRoom = {
    XY_ID = 5 + XY_ID_PLUS,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    askid = 0, --序号
    gameid = 0,
    passwd = "", --玩家进入密码
    nickName = "", --玩家昵称
    szUrl = "", --头像url
    roomCardId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.gameid)
        bos:writeString(self.passwd)
        bos:writeString(self.nickName)
        bos:writeString(self.szUrl)
        bos:writeInt32(self.roomCardId)
        return bos
    end
}

TeaHouseProtocol.RespJoinCustRoom = {
    XY_ID = 6 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0,
        NO_ROOM = 1, --没有房间
        OTHER = 99, --其他原因
    },

    askid = 0, --序号
    flag = 0, --返回标志
    szMsg = "", --返回信息
    gameid = 0, --游戏编号
    appid = 0, --进程号
    roomid = 0, --房间号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,


    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.szMsg = bis:readString()
        self.gameid = bis:readInt32()
        self.appid = bis:readInt32()
        self.roomid = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqTableInfo = {
    XY_ID = 38 + XY_ID_PLUS,
    nAskid = 0,
    nTeaNumber = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaNumber)
        return bos
    end
}

TeaHouseProtocol.ReqUserInfo = {
    XY_ID = 39 + XY_ID_PLUS,
    ASKTYPEFLAG = {
        ASKTYPE_ALL = 0, --全部
        ASKTYPE_ONLINE = 1, --在线
    },
    nAskid = 0,
    nTeaNumber = 0,
    nAskType = 0,
    nStartIndex = 0,
    nCount = 0,
    nReqBit = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaNumber)
        bos:writeInt32(self.nAskType)
        bos:writeInt32(self.nStartIndex)
        bos:writeInt32(self.nCount)
        bos:writeInt32(self.nReqBit)
        return bos
    end
}

TeaHouseProtocol.ReqTeaHouseInfo = {
    XY_ID = 40 + XY_ID_PLUS,
    nAskid = 0,
    nTeaNumber = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaNumber)
        return bos
    end
}

TeaHouseProtocol.SetupTeaHouse = {
    XY_ID = 41 + XY_ID_PLUS,
    nAskid = 0,
    nTeaID = 0,
    szData = "",
    nDefaultProps = 0, --默认新会员可消耗道具数
    nOverPropCnt = 0, --默认新会员可消耗道具数
    nTeaDailyMaxPropCnt = 0,
    bOthersHiden = false,
    ----------------新增start----------------
    nEnableAutoTransferCard = 0, --启用自动转卡功能
    nLowCardNum = 0, --低于多少时触发
    nTransferCardNum = 0, --自己转入多少
    nErrorCode = 0,
    nRemindLowCardNum = -1, --缺卡提醒数量
    ----------------新增end----------------
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaID)
        bos:writeString(self.szData)
        bos:writeInt32(self.nDefaultProps)
        bos:writeInt32(self.nOverPropCnt)
        bos:writeInt32(self.nTeaDailyMaxPropCnt)
        bos:writeBool(self.bOthersHiden)
        ----------------新增start----------------
        bos:writeInt32(self.nEnableAutoTransferCard)
        bos:writeInt32(self.nLowCardNum)
        bos:writeInt32(self.nTransferCardNum)
        bos:writeInt32(self.nErrorCode)
        bos:writeInt32(self.nRemindLowCardNum)
        ----------------新增end----------------
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaID = bis:readInt32()
        self.szData = bis:readString()
        self.nDefaultProps = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nOverPropCnt = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nTeaDailyMaxPropCnt = bis:readInt32()
        end

        if bis:getAvailableSize() > 0 then
            self.bOthersHiden = bis:readBool()
        end
        ----------------新增start----------------
        if bis:getAvailableSize() > 0 then
            self.nEnableAutoTransferCard = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nLowCardNum = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nTransferCardNum = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nRemindLowCardNum = bis:readInt32()
        end
        ----------------新增end----------------
        return self
    end
}

TeaHouseProtocol.ReqGetCard = {
    XY_ID = 42 + XY_ID_PLUS,
    nAskid = 0,
    nCount = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nCount)
        return bos
    end
}

TeaHouseProtocol.ReqReduceCard = {
    XY_ID = 43 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
    },
    nAskid = 0,
    ucFlag = 0,
    nCardNum = 0,
    nTeaID = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeUInt8(self.ucFlag)
        bos:writeInt32(self.nCardNum)
        bos:writeInt32(self.nTeaID)
        return bos
    end
}

TeaHouseProtocol.ReqSetTeaHouseDailyProps = {
    XY_ID = 44 + XY_ID_PLUS,
    nAskid = 0,
    nTeaid = 0,
    nPropCnt = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        bos:writeInt32(self.nPropCnt)
        return bos
    end
}

TeaHouseProtocol.RespSetTeaHouseDailyProps = {
    XY_ID = 45 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOAGENT = 1, --用户不存在
        NOTEAHOUSE = 2, --比赛场不存在
        OTHER = 3, --其他错误
    },
    nAskid = 0,
    nTeaid = 0,
    ucFlag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        return self
    end
}

TeaHouseProtocol.ReqSetPlayerDailyProps = {
    XY_ID = 46 + XY_ID_PLUS,
    nAreaid = 0,
    nNumid = 0,
    nAskid = 0,
    nTeaid = 0,
    nPropCnt = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAreaid)
        bos:writeInt32(self.nNumid)
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        bos:writeInt32(self.nPropCnt)
        return bos
    end
}

TeaHouseProtocol.RespSetPlayerDailyProps = {
    XY_ID = 47 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOAGENT = 1, --用户不存在
        NOTEAHOUSE = 2, --比赛场不存在
        OTHER = 3, --其他错误
    },
    nAskid = 0,
    nTeaid = 0,
    ucFlag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        return self
    end
}

TeaHouseProtocol.DealPowersReturn = {
    XY_ID = 48 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        OTHER = 1, --失败
        PLAYER_MAX_HOUSE = 2, -- 满了
        PLAYER_GAMING = 3, --玩家游戏中
        WAITING = 4, --等待回复
        NORIGHT = 5,
        NOT_FENGXIN_RIGHT = 6,
        PLAYER_IS_AGRRED = 7,
        PLAYER_IS_REFUSED = 8,
        MAX_MEMBERS = 9,--比赛场人数满了
        LIMIT = 10,--玩家加入了其他用户的比赛场
        NO_DEAL_NUM = 11,--没有合适的可以审批的成员
        BAN = 12,--玩家被禁比赛场功能
    },
    nAskid = 0,
    ucFlag = 0,
    nEvtType = 0,
    nErrorCode = 0,
    nSize = 0,
    aucDealRet = 0,
    anErrorCode = 0,


    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeUInt8(self.ucFlag)
        bos:writeInt32(self.nEvtType)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.nEvtType = bis:readInt32()
            self.nErrorCode = bis:readInt32()
            self.nSize = bis:readInt32()
            self.aucDealRet = {}
            self.anErrorCode = {}
            for i=1 , self.nSize do
                if bis:getAvailableSize() > 0 then                    
                    self.aucDealRet[i] = bis:readUInt8()
                    self.anErrorCode[i] = bis:readInt32()                    
                end                
            end            
        end

        return self
    end
}

TeaHouseProtocol.RespBillWinData = {
    XY_ID = 49 + XY_ID_PLUS,
    FLAG = {
        UNBILL = 0, --未计算
        BILL = 1, --已计算
    },
    nBillID = 0, --账单序号
    nWinCnt = 0, --冠军个数
    nAreaid = {}, --玩家区号
    nNumid = {}, --玩家数字帐号
    nUseProp = {}, --玩家
    ucFlag = {}, --是否计算标示 0 未计算 1 已计算
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nBillID)
        bos:writeInt32(self.nWinCnt)
        for i = 1, self.nWinCnt do
            bos:writeInt32(self.nAreaid[i])
            bos:writeInt32(self.nNumid[i])
            bos:writeInt32(self.nUseProp[i])
            bos:writeUInt8(self.ucFlag[i])
        end
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nBillID = bis:readInt32()
        self.nWinCnt = bis:readInt32()
        for i = 1, self.nWinCnt do
            self.nAreaid[i] = bis:readInt32()
            self.nNumid[i] = bis:readInt32()
            self.nUseProp[i] = bis:readInt32()
            self.ucFlag[i] = bis:readUInt8()
        end
        return self
    end
}

TeaHouseProtocol.ReqBillInfoTest = {
    FLAG = {
        UNBILL = 0, --未计算
        BILL = 1, --已计算
    },
    XY_ID = 50 + XY_ID_PLUS,
    askid = 0,
    areaid = 0,
    numid = 0,
    teaNumber = 0, --比赛场编号
    billCnt = 0, --获取帐单数量，0 获取所有，
    billID = 0, --开始帐单号，不包含当前帐单，默认 0 
    ucFlag = 0, --uchar

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)
        bos:writeInt32(self.teaNumber)
        bos:writeInt32(self.billCnt)
        bos:writeInt32(self.billID)
        bos:writeUInt8(self.ucFlag)
        return bos
    end,
}

TeaHouseProtocol.ReqTeaHouseRight = {
    XY_ID = 51 + XY_ID_PLUS,
    nAskid = 0, --序号
    nAreaid = 0,
    nNumid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nAreaid)
        bos:writeInt32(self.nNumid)
        return bos
    end,
}

TeaHouseProtocol.RespTeaHouseRight = {
    XY_ID = 52 + XY_ID_PLUS,
    RETVAL = {
        OK = 0,
        ERROR = 1,
    },
    nAskid = 0,
    nSize = 0,
    nTeaHouseId = {},
    nResult = 0,
    nErrorCode = 0,
    nLastLeaveTeaID = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nSize = bis:readInt32()
        self.nTeaHouseId = {}
        for i = 1, self.nSize do
            self.nTeaHouseId[i] = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nResult = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nLastLeaveTeaID = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.ReqPauseTeaHouse = {
    XY_ID = 53 + XY_ID_PLUS,
    nAskid = 0, --序号
    nTeaid = 1, --比赛场标号
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end,
}

TeaHouseProtocol.RespPauseTeaHouse = {
    XY_ID = 54 + XY_ID_PLUS,
    nAskid = 0, --序号
    nTeaid = 1, --比赛场标号
    bFlag = false, --是否关闭
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.bFlag = bis:readBool()
        return self
    end
}

TeaHouseProtocol.ReqReUseTeaHouse = {
    XY_ID = 55 + XY_ID_PLUS,
    nAskid = 0, --序号
    nTeaid = 1, --比赛场标号
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end,
}

TeaHouseProtocol.RespReUseTeaHouse = {
    XY_ID = 56 + XY_ID_PLUS,
    nAskid = 0, --序号
    nTeaid = 0, --比赛场标号
    bFlag = false, --是否关闭
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.bFlag = bis:readBool()
        return self
    end
}

TeaHouseProtocol.ReqSubProp = {
    XY_ID = 57 + XY_ID_PLUS,
    nAskid = 0, --序号
    nTeaid = 1, --比赛场标号
    nPropCnt = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        bos:writeInt32(self.nPropCnt)
        return bos
    end,
}

TeaHouseProtocol.RespSubProp = {
    XY_ID = 58 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NO_OWNER = 1, --非法用户
        NO_RIGHT = 2, --没权限
        NOT_ENOUGH = 3, --道具不足
    },
    nAskid = 0, --序号
    nTeaid = 0, --比赛场标号
    nCurSubPropCnt = 0, --本次划卡
    nTotalPropCnt = 0, --总卡    
    nTotalSubPropCnt = 0, --总划卡
    ucFlag = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.nCurSubPropCnt = bis:readInt32()
        self.nTotalPropCnt = bis:readInt32()
        self.nTotalSubPropCnt = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        return self
    end
}

TeaHouseProtocol.ReqPropCnt = {
    XY_ID = 59 + XY_ID_PLUS,
    nAskid = 0, --序号
    nTeaid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end,
}

TeaHouseProtocol.RespPropCnt = {
    XY_ID = 60 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NO_OWNER = 1, --领队不存在
    },
    nAskid = 0, --序号
    nPropCnt = 0,
    ucFlag = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nPropCnt = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        return self
    end
}

TeaHouseProtocol.ReadModeInfo = function(bis)
    local modeInfo = {}
    modeInfo.nGameid = bis:readInt32() --游戏编号
    modeInfo.nBase = bis:readInt32() --底数
    modeInfo.nCont = bis:readInt32() --局数
    modeInfo.nType = bis:readInt32() --类型(包房模式 0 定局包房 1 定分包房 2 定时包房)
    modeInfo.nSize = bis:readInt16() --椅子数short
    modeInfo.szName = bis:readString()
    modeInfo.szData = bis:readString() --包房游戏规则 char
    modeInfo.nTableCnt = bis:readInt32() --桌子数
    modeInfo.nPropID = bis:readInt32() --房卡ID
    modeInfo.nPrePropID = bis:readInt32() --房卡ID
    modeInfo.ucFlag = bis:readUInt8() --创建者类型unsigned char
    modeInfo.nModeId = bis:readInt32()
    local nIsEnable = bis:readInt32()
    modeInfo.nIsEnable = nIsEnable ~= 0
    ----------------新增start----------------
    if bis:getAvailableSize() > 0 then
        modeInfo.nTeaId = bis:readInt32()
    end
    ----------------新增end----------------
    return modeInfo
end

TeaHouseProtocol.WriteModeInfo = function(bos, modeInfo)
    bos:writeInt32(modeInfo.nGameid)
    bos:writeInt32(modeInfo.nBase)
    bos:writeInt32(modeInfo.nCont)
    bos:writeInt32(modeInfo.nType)
    bos:writeInt16(modeInfo.nSize)
    bos:writeString(modeInfo.szName)
    bos:writeString(modeInfo.szData)
    bos:writeInt32(modeInfo.nTableCnt)
    bos:writeInt32(modeInfo.nPropID)
    bos:writeInt32(modeInfo.nPrePropID)
    bos:writeUInt8(modeInfo.ucFlag)
    bos:writeInt32(modeInfo.nModeId)
    local nIsEnable = modeInfo.nIsEnable and 1 or 0
    bos:writeInt32(nIsEnable)
    if modeInfo.nTeaId then
        bos:writeInt32(modeInfo.nTeaId)
    end
end

TeaHouseProtocol.ReqPlayModeInfo = {
    XY_ID = 61 + XY_ID_PLUS,
    nAskid = 0,
    nTeaid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end,
}

TeaHouseProtocol.RespPlayModeInfo = {
    XY_ID = 62 + XY_ID_PLUS,
    nAskid = 0, --序号
    nSize = 0,
    astMode = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nSize = bis:readInt32()
        self.astMode = {}
        for i = 1, self.nSize do
            local modeInfo = TeaHouseProtocol.ReadModeInfo(bis)
            table.insert(self.astMode, modeInfo)
        end
        return self
    end
}

TeaHouseProtocol.ReqSetPlayMode = {
    XY_ID = 63 + XY_ID_PLUS,
    nAskid = 0,
    nTeaid = 0,
    stMode = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        TeaHouseProtocol.WriteModeInfo(bos, self.stMode)
        return bos
    end,
}

TeaHouseProtocol.RespSetPlayMode = {
    RETVAL = {
        OK = 0, --设置成功
        ERROR = 1, --设置失败
    },
    XY_ID = 64 + XY_ID_PLUS,
    nAskid = 0, --序号
    nTeaid = 0,
    nModeId = 0,
    ucFlag = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.nModeId = bis:readInt32()
        self.ucFlag = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqEnablePlayMode = {
    XY_ID = 65 + XY_ID_PLUS,
    nAskid = 0,
    nTeaid = 0,
    nModeId = 0,
    nEnable = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        bos:writeInt32(self.nModeId)
        bos:writeInt32(self.nEnable)
        return bos
    end
}

TeaHouseProtocol.RespEnablePlayMode = {
    XY_ID = 66 + XY_ID_PLUS,
    RETVAL = {
        OK = 0, --设置成功
        ERROR = 1 --设置失败
    },
    nAskid = 0, --序号
    nTeaid = 0,
    nModeId = 0,
    ucFlag = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.nModeId = bis:readInt32()
        self.ucFlag = bis:readUInt32()
        return self
    end
}

TeaHouseProtocol.ReqCreateTableWithMode = {
    XY_ID = 67 + XY_ID_PLUS,
    nAskid = 0,
    nTeaid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end
}

TeaHouseProtocol.RespPlayerModeInfo = {
    XY_ID = 68 + XY_ID_PLUS,
    nGameid = 0, --游戏编号
    nBase = 0, --底数
    nCont = 0, --局数
    nType = 0, --类型(包房模式 0 定局包房 1 定分包房 2 定时包房)
    nSize = 0, --椅子数    
    szName = "", --包房名称
    szData = "", --包房游戏规则
    nTableCnt = 0, --桌子数
    nPropID = 10, --房卡ID
    nPrePropID = 10, --房卡ID
    ucFlag = 0, --创建者类型
    nId = 0, --规则ID
    nIsEnable = 0, --规则是否启用。0表示未启用，1表示启用
    nTeaId = 0, --比赛场id

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nGameid = bis:readInt32()
        self.nBase = bis:readInt32()
        self.nCont = bis:readInt32()
        self.nType = bis:readInt32()
        self.nSize = bis:readInt16()
        self.szName = bis:readString()
        self.szData = bis:readString()
        self.nTableCnt = bis:readInt32()
        self.nPropID = bis:readInt32()
        self.nPrePropID = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        self.nId = bis:readInt32()
        self.nIsEnable = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nTeaId = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.ReqSimpleTeaHouseInfo = {
    XY_ID = 69 + XY_ID_PLUS,

    nAgentAreaid = 0,
    nGameLobbyId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAgentAreaid)
        bos:writeInt32(self.nGameLobbyId)
        return bos
    end
}

TeaHouseProtocol.RespSimpleTeaHouseInfo = {
    XY_ID = 70 + XY_ID_PLUS,

    nTeaid = 0,
    nTeaPwd = 0,
    nAreaid = 0,
    nNumid = 0, -- 领队ID
    nTeaHouseCnt = 0,
    szUrl = "",
    szNickName = "",
    szData = "",


    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nTeaid = bis:readInt32()
        self.nTeaPwd = bis:readInt32()
        self.nAreaid = bis:readInt32()
        self.nNumid = bis:readInt32()
        self.nTeaHouseCnt = bis:readInt32()
        self.szUrl = bis:readString()
        self.szNickName = bis:readString()
        self.szData = bis:readString()
        return self
    end
}

TeaHouseProtocol.ReqBuyProp = {
    XY_ID = 71 + XY_ID_PLUS,
    nAskid = 0,
    nTeaid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end
}

TeaHouseProtocol.RespBuyProp = {
    XY_ID = 72 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NO_RIGHT = 1, --非法用户          
        NO_BUY = 2, --无法购买
    },
    nAskid = 0, --序号
    ucFlag = 0, --uchar
    nBuyProp = 0, --购买的卡数
    nAllProp = 0, --购买后的总卡数
    nTeaid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        self.nBuyProp = bis:readInt32()
        self.nAllProp = bis:readInt32()
        self.nTeaid = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqAddPlayerProp = {
    XY_ID = 73 + XY_ID_PLUS,
    nAskid = 0,
    nAreaid = 0,
    nNumid = 0,
    nAddCnt = 0,
    nTeaid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nAreaid)
        bos:writeInt32(self.nNumid)
        bos:writeInt32(self.nAddCnt)
        bos:writeInt32(self.nTeaid)
        return bos
    end
}

TeaHouseProtocol.RespAddPlayerProp = {
    XY_ID = 74 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NO_MINUS = 1, --数值不能为负          
        NO_RIGHT = 2, --非法用户
        NO_USER = 3, --没有该用户
        NOT_FENGXIN_RIGHT = 4,
        NOT_ENOUGH = 5,--用户卡不足
        OTHER = 6,
        NOT_ENOUGH_BY_FREEZE = 7,       -- 冻结导致无法划卡
        NOT_ENOUGH_BY_TIMECARD = 8,       -- 时效卡无法划出导致不足
    },
    nAskid = 0, --序号
    ucFlag = 0, --uchar
    nAddCnt = 0, --购买的卡数
    nAllProp = 0, --购买后的总卡数
    nTeaid = 0,
    nErrorCode = 0,
    nTimeCardCnt =0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        self.nAddCnt = bis:readInt32()
        self.nAllProp = bis:readInt32()
        self.nTeaid = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
            if bis:getAvailableSize() > 0 then
                self.nTimeCardCnt = bis:readInt32()
            end
        end
        return self
    end
}

TeaHouseProtocol.ReqAskOwnerByTeaHousePassword = {
    XY_ID = 75 + XY_ID_PLUS,

    askid = 0,
    password = 0,
    areaID = 0,
    numID = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.password)
        bos:writeInt32(self.areaID)
        bos:writeInt32(self.numID)
        return bos
    end
}

TeaHouseProtocol.RespAskOwnerByTeaHousePassword = {
    XY_ID = 76 + XY_ID_PLUS,

    FLAG = {
        SUCCESS = 0, --成功
        NO_TEAHOUSE = 1,
        NO_OWNER = 2,
    },

    askId = 0,
    password = 0,
    ownerId = 0,
    canEnter = 0,
    flag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askId = bis:readInt32()
        self.password = bis:readInt32()
        self.ownerId = bis:readInt32()
        self.canEnter = bis:readInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

TeaHouseProtocol.ReqSetPayType = {
    XY_ID = 77 + XY_ID_PLUS,

    PayType = {
        TYPE_TEA_OWNER = 0, --比赛场消耗
        TYPE_TEA_PLAYER_AA = 1, --比赛场内玩家支付，扣玩家房卡
        TYPE_TEA_ROOM_OWNER = 6, --比赛场内创建桌子的玩家支付，扣玩家房卡
        TYPE_TEA_PLAYER_OWNER_CARD_AA = 7, --比赛场内玩家AA支付
        TYPE_TEA_PLAYER_OWNER_CARD_ROOMOWNER  = 8, --比赛场内房主支付

        TYPE_AGENT_PLAYER_AA = 20, --游戏结束后，扣用户大厅的房卡(user_props)，aa扣除
        TYPE_AGENT_PLAYER_WINNER = 21, --游戏结束后，扣用户大厅的房卡(user_props)，冠军出

        TEA_PLAYER_OWNER_TEACARD_AA      = 22, -- 比赛场内玩家AA支付，扣user_props表道具，和TEA_PLAYER_AA道具id不同， -- 商城自己购买比赛场卡
        TEA_PLAYER_OWNER_TEACARD_WIN     = 23, --比赛场内玩家冠军支付，扣user_props表道具 --  商城自己购买比赛场卡

        TEA_AA  = 24, --新增支付模式，比赛场领队模式、平摊消耗，扣比赛场房卡
        TYPE_TEA_OWNER_YUFU_MODE_AA = 999, -- 预付模式下模拟的AA支付,服务端不处理这个类型,实际的支付类型是领队付预付模式下，规则中带PrevAA=1的表示aa支付,不带的默认是冠军支付。
    },
    ----------------新增start----------------
    PayModePype =    {
        TYPE_TEA_NULL = 0, -- 兼容线上
        TYPE_PAY_MODEL_FRON = 1, -- 前项收费
        TYPE_PAY_MODEL_BEHID = 2, -- 后项收费
    },
    ----------------新增end----------------
    nAskid = 0,
    nTeaid = 0,
    nPayType = 0, --最好传anPaySet数组中的第一个
    nSize = 0, --支付方式个数
    anPaySet = {}, --支付方式集合
    ----------------新增start----------------
    nPayModeType = 0,
    bCurrencyFirst = false,
    bLastCost = false,
    ----------------新增end----------------
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        bos:writeInt32(self.nPayType)
        bos:writeInt32(self.nSize)
        for i = 1, self.nSize do
            bos:writeInt32(self.anPaySet[i])
        end
        ----------------新增start----------------
        bos:writeInt32(self.nPayModeType)
        bos:writeInt32(self.bCurrencyFirst and 1 or 0)
        bos:writeInt32(self.bLastCost and 1 or 0)
        ----------------新增end----------------
        return bos
    end
}

TeaHouseProtocol.RespSetPayType = {
    XY_ID = 78 + XY_ID_PLUS,

    FLAG = {
        SUCCESS = 0, --成功
        NO_TEAHOUSE = 1, --比赛场不存在
        NO_NORIGHT = 2, --没有权限
        HAVE_UNDEALCOST = 3,--有未完成账单
        PAYTYPE_ERROR = 4,--设置前项收费时，paytype只能是领队付
        PARAM_ERROR = 5,--参数错误
        EXIST_TABLE = 6,--有桌子存在，不允许切换支付模式 2022.3.29新增
    },

    nAskid = 0,
    nTeaid = 0,
    ucFlag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        return self
    end
}

TeaHouseProtocol.ReqPayType = {
    XY_ID = 79 + XY_ID_PLUS,

    nAskid = 0,
    nTeaid = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end
}

TeaHouseProtocol.RespPayType = {
    XY_ID = 80 + XY_ID_PLUS,

    nAskid = 0,
    nTeaid = 0,
    nPayType = 0,
    nSize = 0,
    anPaySet = {},
    nPayModeType = 0, --前项收费 后项收费的模式
    bCurrencyFirst = false, --是否优先使用一卡通
    nErrorCode = 0,
    bLastCost = false, --是否末位消耗

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.nPayType = bis:readInt32()
        self.nSize = bis:readInt32()
        self.anPaySet = {}
        for i = 1, self.nSize do
            table.insert(self.anPaySet, bis:readInt32())
        end
        if bis:getAvailableSize() > 0 then
            self.nPayModeType = bis:readInt32()
        end
        if bis:getAvailableSize() >= 4 then
            self.bCurrencyFirst = bis:readInt32() == 1
        end
        if bis:getAvailableSize() >= 4 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() >= 4 then
            self.bLastCost = bis:readInt32() == 1
        end
        return self
    end
}

TeaHouseProtocol.ReqTeaHouseInfoByPlayerType = {
    XY_ID = 100 + XY_ID_PLUS,
    PLAYER_TYPE = {
        PT_PLAYER = 0,
        PT_TEAHOUSEOWN = 1,
    },

    REQ_BIT = {
        TEAHOUSE_TABLECOUNT = 1,    -- 是否请求比赛场桌子数
        TEAHOUSE_CAN_QUIT = 2,      -- 请求是否可以退出比赛场
    },

    nAskid = 0,
    nPlayerType = 0,
    szUrl = "",
    szName = "",
    nAgentAreaid = 0,
    nGameLobbyid = 0,
    bReqUserRight = false,          -- 是否请求比赛场桌子数
    nReqBit = 0,                    -- 请求是否可以退出比赛场

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nPlayerType)
        bos:writeString(self.szUrl)
        bos:writeString(self.szName)
        bos:writeInt32(self.nAgentAreaid)
        bos:writeInt32(self.nGameLobbyid)
        bos:writeBool(self.bReqUserRight)
        bos:writeInt32(self.nReqBit)
        return bos
    end
}

TeaHouseProtocol.RespTeaHouseInfoByPlayerType = {
    XY_ID = 101 + XY_ID_PLUS,

    nAskid = 0,
    nPlayerType = 0,
    nTotal = 0,
    nCurrent = 0,
    teahouseSummery = {},
    nUserRight = 0,
    nManagerRight = 0,
    nErrorCode = 0,
    bUseBuyedProp = true,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nPlayerType = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurrent = bis:readInt32()
        self.teahouseSummery = {}
        self.teahouseSummery.nTeaHouseAppid = bis:readInt32()
        self.teahouseSummery.nTeaNumber = bis:readInt32()
        self.teahouseSummery.szTeaName = bis:readString()
        self.teahouseSummery.nPasswd = bis:readInt32()

        self.teahouseSummery.nUserCnt = bis:readInt32()
        self.teahouseSummery.szUrl = bis:readString()
        self.teahouseSummery.szData = bis:readString()
        self.teahouseSummery.nOnLineUserCnt = bis:readInt32()
        self.teahouseSummery.ucState = bis:readUInt8()
        self.teahouseSummery.nTodayUseProps = bis:readInt32()
        self.teahouseSummery.nAreaid = bis:readInt32()
        self.teahouseSummery.nTeaOwnerNumid = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.teahouseSummery.acOwnerNick = bis:readString() -- 领队昵称
            self.teahouseSummery.acNotice = bis:readString() --比赛场公告
            self.teahouseSummery.nSubAreaId = bis:readInt32() --子区
            self.teahouseSummery.nDismissTime = bis:readInt32() --申请解散比赛场时间
        end

        self.teahouseSummery.splitTeaName = function(self, name)
            local lp, rp = 0, 0
            if string.sub(name, #name, #name) == ')' then
                rp = #name
                for i = #name - 1, 1, -1 do
                    local c = string.sub(name, i, i)
                    if c == '(' then
                        lp = i
                        break
                    end
                end
            end
            if lp > 0 and rp > 0 and rp > lp then
                local ext = string.sub(name, lp + 1, rp - 1)
                local num = tonumber(ext)
                if num ~= nil then
                    self.szTeaName = string.sub(name, 1, lp - 1)
                    return
                end
            end

            self.szTeaName = name
        end

        self.teahouseSummery.showTeaName = function(self)
            local txt = self.szTeaName
            if self.szData and #self.szData > 0 then
                txt = string.format("%s(%s)", txt, self.szData)
            end
            return txt
        end

        -- 扩展信息
        if bis:getAvailableSize() > 0 then
            self.teahouseSummery.acExtraData = bis:readString()
        end

        if bis:getAvailableSize() > 0 then
            self.nUserRight = bis:readInt32()
        end

        if bis:getAvailableSize() > 0 then
            self.nManagerRight = bis:readInt32()
        end

        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bUseBuyedProp = bis:readBool()
        end
        
        return self
    end,
}

TeaHouseProtocol.ReqAppidByTeaHousePwd = {
    XY_ID = 102 + XY_ID_PLUS,

    nAskid = 0,
    nTeaHousePwd = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaHousePwd)
        return bos
    end
}

TeaHouseProtocol.RespAppidByTeaHousePwd = {
    XY_ID = 103 + XY_ID_PLUS,

    nAskid = 0,
    nAppid = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nAppid = bis:readInt32()

        return self
    end
}

TeaHouseProtocol.ReqTeaHouseUsePropCnt = {
    XY_ID = 104 + XY_ID_PLUS,
    ASK_TYPE = {
        AT_DAILY = 0,
        AT_DEFULT = 1,
        AT_TEAPROP = 2,
        AT_ALL = 10
    },
    nAskid = 0,
    nTeaid = 0,
    nAskType = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        bos:writeInt32(self.nAskType)
        return bos
    end
}

TeaHouseProtocol.RespTeaHouseUsePropCnt = {
    XY_ID = 105 + XY_ID_PLUS,

    ASK_TYPE = {
        AT_DAILY = 0,
        AT_DEFULT = 1,
        AT_TEAPROP = 2,
        AT_ALL = 10
    },

    nAskid = 0,
    nTeaid = 0,
    nAskType = 0,
    nCount = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaid = bis:readInt32()
        self.nAskType = bis:readInt32()
        self.nCount = bis:readInt32()

        return self
    end
}

TeaHouseProtocol.ReqServerAppid = {
    XY_ID = 106 + XY_ID_PLUS,

    nAskid = 0,
    szUrl = "",
    szName = "",
    nGameLobbyId = 0,
    nAgentAreaId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeString(self.szUrl)
        bos:writeString(self.szName)
        bos:writeInt32(self.nGameLobbyId)
        bos:writeInt32(self.nAgentAreaId)
        return bos
    end
}

TeaHouseProtocol.RespServerAppid = {
    XY_ID = 107 + XY_ID_PLUS,

    APPID_RESP_TYPE = {
        SUCCESS = 0,
        APPID_ERROR = -1
    },
    nAskid = 0,
    nAppid = 0,
    ucFlag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nAppid = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.ucFlag = bis:readUInt8()
        end
        return self
    end
}

TeaHouseProtocol.ReqUserInfoListCnt = {
    XY_ID = 137 + XY_ID_PLUS,

    nAskid = 0,
    nTeaNumber = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaNumber)
        return bos
    end
}

TeaHouseProtocol.RespUserInfoListCnt = {
    XY_ID = 138 + XY_ID_PLUS,

    nAskid = 0,
    nCnt = 0,
    nTotal = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nCnt = bis:readInt32()
        self.nTotal = bis:readInt32()

        return self
    end
}

TeaHouseProtocol.ReqOperatorManager = {
    XY_ID = 109 + XY_ID_PLUS,
    nAskid = 0,
    nTeaNumber = 0,
    nAreaid = 0,
    nNumid = 0,
    nGameLobbyId = 0,
    active = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaNumber)
        bos:writeInt32(self.nAreaid)
        bos:writeInt32(self.nNumid)
        bos:writeInt32(self.nGameLobbyId)
        bos:writeInt32(self.active)
        return bos
    end
}

TeaHouseProtocol.RespOperatorManager = {
    XY_ID = 110 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0,
        NO_RIGHT = 1,
        NO_USER = 2,
        NOT_FENGXIN_RIGHT = 3,
        ALREADY_STATUS = 4,
        MAX_NUM = 5,
        DB_ERR = 10,
    },
    nAskid = 0,
    nTeaNumber = 0,
    nAreaid = 0,
    nNumid = 0,
    active = 0,
    serialid = 0,
    ucFlag = 0,
    nErrorCode = 0,
    nUnLockActiveValue = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaNumber = bis:readInt32()
        self.nAreaid = bis:readInt32()
        self.nNumid = bis:readInt32()
        self.active = bis:readInt32()
        self.serialid = bis:readInt32()
        self.ucFlag = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nUnLockActiveValue = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.RespTeaHouseManager = {
    XY_ID = 111 + XY_ID_PLUS,
    nTeaNumber = 0,
    nOwnerAreaid = 0,
    nOwnerNumid = 0,
    nSize = 0,
    nAreaid = {},
    nNumid = {},
    nActive = {},
    nSerialid = {},
    nManagerRight = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nTeaNumber = bis:readInt32()
        self.nOwnerAreaid = bis:readInt32()
        self.nOwnerNumid = bis:readInt32()
        self.nSize = bis:readInt32()
        self.nAreaid = {}
        self.nNumid = {}
        self.nActive = {}
        self.nSerialid = {}
        for i = 1, self.nSize do
            table.insert(self.nAreaid, bis:readInt32())
            table.insert(self.nNumid, bis:readInt32())
            table.insert(self.nActive, bis:readInt8())
            table.insert(self.nSerialid, bis:readInt32())
        end
        self.nManagerRight = {}
        for i = 1, self.nSize do
            if bis:getAvailableSize() > 0 then
                table.insert(self.nManagerRight, bis:readInt32())
            end
        end
        return self
    end
}

TeaHouseProtocol.FinishReqUserInfo = {
    XY_ID = 112 + XY_ID_PLUS,
    nAskid = 0,
    nTeaNumber = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nTeaNumber = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.MsgUserIsKickOff = {
    XY_ID = 113 + XY_ID_PLUS,
    nTeaNumber = 0,
    nAreaid = 0,
    nNumid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nTeaNumber = bis:readInt32()
        self.nAreaid = bis:readInt32()
        self.nNumid = bis:readInt32()
        return self
    end
}

-- 返回固定玩法(s->c)
TeaHouseProtocol.PlayModeInfoEx = {
    XY_ID = 114 + XY_ID_PLUS,
    MAX_COUNT = 4,
    MAX_COUNT = 8,

    nPlayModeId = 0, -- 规则ID
    bIsEnable = false, -- 规则是否启用
    nGameId = 0, -- 游戏编号
    bIsCountLock = false, -- 局数是否设定
    bIsPlayerLock = false, -- 人数是否设定
    bIsPlayModeLock = false, -- 玩法是否设定
    nCountSize = 0, -- 设定的局数个数
    anCount = {}, -- 局数 MAX_COUNT
    nPlayerSize = 0, -- 设定的人数个数
    anPlayerCount = {}, -- 人数 MAX_PLAYER

    nBase = 0, -- 底数
    nType = 0, -- 类型(包房模式 0 定局包房 1 定分包房 2 定时包房)
    acName = "", -- 包房名称
    acData = "", -- 包房游戏规则
    nPropID = 0, -- 房卡ID

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)


        self.nPlayModeId = bis:readInt32()
        self.bIsEnable = bis:readBool()
        self.nGameId = bis:readInt32()
        self.bIsCountLock = bis:readBool()
        self.bIsPlayerLock = bis:readBool()
        self.bIsPlayModeLock = bis:readBool()

        self.nCountSize = bis:readInt32()
        self.anCount = {}
        for i = 1, self.nCountSize do
            self.anCount[i] = bis:readInt32()
        end
        self.nPlayerSize = bis:readInt32()
        self.anPlayerCount = {}
        for i = 1, self.nPlayerSize do
            self.anPlayerCount[i] = bis:readInt32()
        end

        self.nBase = bis:readInt32()
        self.nType = bis:readInt32()
        self.acName = bis:readString()
        self.acData = bis:readString()
        self.nPropID = bis:readInt32()

        return self
    end
}

-- 请求固定玩法规则
TeaHouseProtocol.ReqPlayModeInfoEx = {
    XY_ID = 115 + XY_ID_PLUS,

    nAskId = 0,
    nTeaId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)

        return bos
    end
}

-- 返回请求固定玩法规则
TeaHouseProtocol.RespPlayModeInfoEx = {
    XY_ID = 116 + XY_ID_PLUS,
    MODE_MAXSIZE = 5,

    nAskId = 0, -- 规则ID
    nSize = 0, -- 规则数量
    astMode = {}, -- PlayModeInfoEx
    nTotalSize = 0,         --下发的总固定玩法个数
    nCurPkgIndex = 0,        --当前返回的是第几个包
    nTotalPkgNum = 0,        --总共有多少个包
    nErrorCode = 0,
    aPlayModeType = {},
    aAwarded = {},
    aRemainTime = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)


        self.nAskId = bis:readInt32()
        self.nSize = bis:readInt32()
        self.astMode = {}
        for i = 1, self.nSize do
            self.astMode[i] = {}

            self.astMode[i].nPlayModeId = bis:readInt32()
            self.astMode[i].bIsEnable = bis:readBool()
            self.astMode[i].nGameId = bis:readInt32()
            self.astMode[i].bIsCountLock = bis:readBool()
            self.astMode[i].bIsPlayerLock = bis:readBool()
            self.astMode[i].bIsPlayModeLock = bis:readBool()

            self.astMode[i].nCountSize = bis:readInt32()
            self.astMode[i].anCount = {}
            for k1 = 1, self.astMode[i].nCountSize do
                self.astMode[i].anCount[k1] = bis:readInt32()
            end
            self.astMode[i].nPlayerSize = bis:readInt32()
            self.astMode[i].anPlayerCount = {}
            for k2 = 1, self.astMode[i].nPlayerSize do
                self.astMode[i].anPlayerCount[k2] = bis:readInt32()
            end

            self.astMode[i].nBase = bis:readInt32()
            self.astMode[i].nType = bis:readInt32()
            self.astMode[i].acName = bis:readString()
            self.astMode[i].acData = bis:readString()
            self.astMode[i].nPropID = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nTotalSize = bis:readInt32()
            self.nCurPkgIndex = bis:readInt32()
            self.nTotalPkgNum = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.aPlayModeType = {}
            for i = 1, self.nSize do
                self.aPlayModeType[i] = bis:readInt32()
                self.astMode[i].aPlayModeType = self.aPlayModeType[i]
            end
            self.aAwarded = {}
            for i = 1, self.nSize do
                self.aAwarded[i] = bis:readInt32()
                self.astMode[i].aAwarded = self.aAwarded[i]
            end
            self.aRemainTime = {}
            for i = 1, self.nSize do
                self.aRemainTime[i] = bis:readInt32()
                self.astMode[i].aRemainTime = self.aRemainTime[i]
            end
        end

        return self
    end
}

-- 增加或修改固定玩法规则
TeaHouseProtocol.ReqSetPlayModeEx = {
    XY_ID = 117 + XY_ID_PLUS,

    nAskId = 0,
    nTeaId = 0,
    stMode = 0, -- PlayModeInfoEx
    aPlayModeType = 0,
    aAwarded = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)

        bos:writeInt32(self.stMode.nPlayModeId)
        bos:writeBool(self.stMode.bIsEnable)
        bos:writeInt32(self.stMode.nGameId)
        bos:writeBool(self.stMode.bIsCountLock)
        bos:writeBool(self.stMode.bIsPlayerLock)
        bos:writeBool(self.stMode.bIsPlayModeLock)

        bos:writeInt32(self.stMode.nCountSize)
        for i = 1, self.stMode.nCountSize do
            bos:writeInt32(self.stMode.anCount[i])
        end
        bos:writeInt32(self.stMode.nPlayerSize)
        for i = 1, self.stMode.nPlayerSize do
            bos:writeInt32(self.stMode.anPlayerCount[i])
        end

        bos:writeInt32(self.stMode.nBase)
        bos:writeInt32(self.stMode.nType)
        bos:writeString(self.stMode.acName)
        bos:writeString(self.stMode.acData)
        bos:writeInt32(self.stMode.nPropID)

        bos:writeInt32(self.aPlayModeType)
        bos:writeInt32(self.aAwarded)

        return bos
    end
}

-- 返回增加或修改固定玩法规则
TeaHouseProtocol.RespSetPlayModeEx = {
    XY_ID = 118 + XY_ID_PLUS,
    RETVAL = {
        OK = 0, -- 设置成功
        NOT_ENABLE = 1, -- 规则未启用，不能修改
        NOT_FOUND = 2, -- 规则未找到
        NO_RIGHT = 3, -- 没有权限
        CONFLICT = 4, -- 规则冲突
        MODE_MAX = 5, -- 规则数达到上限
        ERROR = 6, -- 设置失败
    },

    nAskId = 0,
    nTeaId = 0,
    nModeId = 0, -- 规则ID
    ucFlag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)


        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nModeId = bis:readInt32()
        self.ucFlag = bis:readUInt8()

        return self
    end
}

-- 启用/禁用固定玩法规则
TeaHouseProtocol.ReqEnablePlayModeEx = {
    XY_ID = 119 + XY_ID_PLUS,

    nAskId = 0,
    nTeaId = 0,
    nModeId = 0, -- 启用规则的ID
    bEnable = false, -- false表示禁用，true表示启用

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nModeId)
        bos:writeBool(self.bEnable)

        return bos
    end
}

-- 返回启用/禁用固定玩法规则
TeaHouseProtocol.RespEnablePlayModeEx = {
    XY_ID = 120 + XY_ID_PLUS,
    RETVAL = {
        OK = 0, -- 设置成功
        NO_RIGHT = 1, -- 没有权限
        NOT_FOUND = 2, -- 规则未找到
        CONFLICT = 3, -- 规则冲突
        ALREADY_SET = 4, -- 已经启用或禁用了
        ERROR = 5, -- 设置失败
    },

    nAskId = 0,
    nTeaId = 0,
    nModeId = 0, -- 启用第几个规则，1表示第一个规则。
    ucFlag = 0,
    nConflictModeId = 0, -- 冲突的规则id

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)


        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nModeId = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        self.nConflictModeId = bis:readInt32()

        return self
    end
}

-- 删除固定玩法
TeaHouseProtocol.ReqDelPlayModeEx = {
    XY_ID = 121 + XY_ID_PLUS,

    nAskId = 0,
    nTeaId = 0,
    nModeId = 0, -- 删除规则的ID

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nModeId)

        return bos
    end
}

-- 返回删除固定玩法
TeaHouseProtocol.RespDelPlayModeEx = {
    XY_ID = 122 + XY_ID_PLUS,
    RETVAL = {
        OK = 0, -- 删除成功
        NO_RIGHT = 1, -- 没有权限
        NOT_FOUND = 2, -- 规则未找到
        ERROR = 3, -- 删除失败
        REQ_APPID_ERR = 4,  -- 请求到错误的appid
        TIME_NOT_EXPIRED = 5, -- 时间未过期
    },

    nAskId = 0,
    nTeaId = 0,
    nModeId = 0, 
    ucFlag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)


        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nModeId = bis:readInt32()
        self.ucFlag = bis:readUInt8()

        return self
    end
}

TeaHouseProtocol.ReqOtherHideTHInfo = {
    XY_ID = 141 + XY_ID_PLUS,

    nAskid = 0,
    nTeaid = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end
}

TeaHouseProtocol.RespOtherHideTHInfo = {
    XY_ID = 142 + XY_ID_PLUS,

    nAskid = 0,
    bHide = false,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.bHide = bis:readBool()
        return bis
    end
}

--玩家申请退出比赛场(c->s) 
TeaHouseProtocol.ReqQuitTeaHouse = {
    XY_ID = 139 + XY_ID_PLUS,
    askid = 0, --序号
    teaNumber = 0, -- 比赛场num

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaNumber)
        return bos
    end,

}

--返回玩家申请退出比赛场(s->c)
TeaHouseProtocol.RespQuitTeaHouse = {
    XY_ID = 140 + XY_ID_PLUS,
    REQ_STATE = {
        AGREE = 0, --成功
        REFUSE = 1, --拒绝
        WAIT = 2, --请求成功/等待领队处理
        NOT_IN = 3, --不在比赛场中
        OTHER_ERROR = 4, --其他错误
    },

    askid = 0, --序号
    state = 0, --请求状态


    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.state = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqCreateTableAutoSit = {
    XY_ID = CMDT_REQCREATETABLEAUTOSIT,
    CREATETYPE = {
        TY_PROXY = 0, --用户
        TY_TEA_PlAYER = 1, --比赛场中玩家
    },
    HARDWAREFLAG = {
        HF_NONE = 0,
        HF_CAMERA = 1, --摄像头
        HF_MICROPHONE = 2, --麦克风
        HF_JOYPAD = 4 --游戏手柄，不区分有线无线
    },
    CLIENTTYPE = {
        PC = 0, --计算机
        TV = 1, --电视
        MOBILE = 2, --手机
        WEB = 3, --浏览器
    },
    GAMETYPE = {
        CT_NORMAL = 0, --普通
        CT_SPORTS = 1, --竞技
    },
    SITTYPE = {
        ST_RAND = 0, --0为随机
        ST_SET = 1, --1为指定
    },
    nAskId = 0, --序号
    nGameId = 0, --游戏编号
    nBase = 0, --底数
    nCount = 0, --局数
    nType = 0, --类型(包房模式 0 定局包房 1 定分包房 2 定时包房)
    sSize = 0, --椅子数
    acName = "", --包房名称
    acRuleData = "", --包房游戏规则
    nPropID = 0, --房卡ID
    ucCreateType = 0, --创建者类型

    --JoinRoom相关数据
    nRoomId = 0,
    nClientType = 0, --客户端类型, 见宏CLIENTTYPE
    nHardWareFlag = 0, --硬件标识
    nRoomVer = 0, --房间版本
    nChannelId = 0, --渠道号
    ucGameType = 0, --标示客户端游戏方式
    nOsVer = 0, --client OS版本号
    acIdentify = "",
    llIp = 0, --客户端ip
    bReConnect = false, --是否重连标志, 1为重连,0为正常
    nClientTypeCustom = 0, --客户端自定义类型
    acHeadUrl = "", --玩家头像url
    nTableId = 0, --桌号
    nChairId = 0, --座位号
    ucSitType = 0, --是否按指定座位标志,1为指定,0为随机
    acLogicData = "",
    nPayType = 0, -- 默认0，比赛场消耗
    nTableIndex = 0, -- 对应比赛场的序列号
    nModelIndex = 0, --代表自定义  123 对应的固定玩法的序号
    bNotAutoSit = false, --true不入座，false入座
    nLastTableid = 0, --续桌上次桌子的id号

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nGameId)
        bos:writeInt32(self.nBase)
        bos:writeInt32(self.nCount)
        bos:writeInt32(self.nType)
        bos:writeInt32(self.sSize)
        bos:writeString(self.acName)
        bos:writeString(self.acRuleData)
        bos:writeInt32(self.nPropID)
        bos:writeUInt8(self.ucCreateType)
        bos:writeInt32(self.nRoomId)
        bos:writeInt32(self.nClientType)
        bos:writeInt32(self.nHardWareFlag)
        bos:writeInt32(self.nRoomVer)
        bos:writeInt32(self.nChannelId)
        bos:writeUInt8(self.ucGameType)
        bos:writeInt32(self.nOsVer)
        bos:writeString(self.acIdentify)
        bos:writeInt64(self.llIp)
        bos:writeBool(self.bReConnect)
        bos:writeInt32(self.nClientTypeCustom)
        bos:writeString(self.acHeadUrl)
        bos:writeInt32(self.nTableId)
        bos:writeInt32(self.nChairId)
        bos:writeUInt8(self.ucSitType)
        bos:writeString(self.acLogicData)
        bos:writeInt32(self.nPayType)
        bos:writeInt32(self.nTableIndex)
        bos:writeInt32(self.nModelIndex)
        bos:writeBool(self.bNotAutoSit)
        bos:writeInt32(self.nLastTableid)
        return bos
    end,
}

TeaHouseProtocol.RespCreateTableAutoSit = {
    XY_ID = CMDT_RESPCREATETABLEAUTOSIT,

    FLAG = {
        --比赛场返回
        SUCCESS = 0, --成功
        NOT_RIGHT = 1, --没有权限
        MAXTABLE = 2, --已经达到创建上限
        NOT_APPID = 3, --没有app
        NOT_SETUP = 4, --没有对应局数配置
        OTHER = 5, --其他错误
        NOT_PROP = 6,
        NOT_TABLE = 7,
        NOT_ENOUGHPROP = 8, --沒有足夠分配的足夠道具
        MAX_CREAT_TABLE = 9, --玩家已达创建最大数量的桌子
        BAN = 10, --玩家被禁游戏
        TEAHOUSE_CLOESD = 11, --比赛场已暂时关闭
        TEAHOUSE_WITHOUT_PLAYMODE = 12, --比赛场不使用固定玩法
        TEAHOUSE_MAX_DAILY_COST = 13, --比赛场达每日最大消耗
        TEAHOUSE_FORBIDDEN = 16, --被拉黑
        TEAHOUSE_HAVE_THE_SAME_DESK = 20, --被拉黑
        --GP返回
        NOT_EMPTY_TABLE = 31, --没有空卓
        NOT_PROP_BY_GP = 32, --没有足够道具
        EXP_PROP = 33, --时效道具已失效
        NOENOUGH_PROP = 34, --没有足够的普通道具
        ERR_DATA = 35, --数据不正确
        NO_TYPEID = 36, --没有扣除道具类型id
        ERR_INTABLE = 37, --玩家已经在桌子上
        ERR_USEPROP = 38, --使用道具失败
        ERR_TABLEID = 39, --错误的房间号
        ERR_EMPTY_SEAT = 40, --无法获取空位置
        ERR_NOT_CREATE_TABLE = 41, --未创建桌子
        ERR_ALREADY_GAME = 42, --已经开始游戏了
        ERR_ALREADY_CREATE = 43, --已经在创建桌子了
        ERR_ALREADY_JOIN = 44, --已经在加入桌子了
        ERR_TABLE_FULL = 45, --桌子已经满了
        FAILED = 46, --其他错误
        ERR_GPS_OPEN = 47, --未开启GPS
        ERR_DISTANCE = 48, --与桌子上其余玩家距离太近，不符合入座条件
    },

    nAskId = 0, --序号
    ucFlag = 0, --返回标示
    nTableId = 0, --桌号
    acPasswd = "", --进入包房密码
    nUsePropCnt = 0, --消耗房卡数
    nGameAppId = 0,
    nRoomId = 0,
    nGameId = 0,
    ucSeat = 0,
    bIsNewProcedure = true, --判断新老流程
    nTeaPwd = 0,
    nTeaAppId = 0,
    nErrorCode = 0,
    lastsize = 0,
    lastnumids = {},
    lasturls = {},
    lastnicks = {},
    szData = "",
    nUnLockActiveValue = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskId = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        self.nTableId = bis:readInt32()
        self.acPasswd = bis:readString()
        self.nUsePropCnt = bis:readInt32()
        self.nGameAppId = bis:readInt32()
        self.nRoomId = bis:readInt32()
        self.nGameId = bis:readInt32()
        self.ucSeat = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.bIsNewProcedure = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.nTeaPwd = bis:readInt32()
            self.nTeaAppId = bis:readInt32()
            self.nErrorCode = bis:readInt32()
            self.lastsize = bis:readInt32()
            for i = 1, self.lastsize do
                self.lastnumids[i] = bis:readInt32()
                self.lasturls[i] = bis:readString()
                self.lastnicks[i] = bis:readString()
            end
            self.szData = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.nUnLockActiveValue = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.ReqJoinTeaTable = {
    XY_ID = CMDT_REQJIONTAETABLE,

    CREATETYPE = {
        TY_PROXY = 0, --用户
        TY_TEA_PlAYER = 1, --比赛场中玩家
    },
    HARDWAREFLAG = {
        HF_NONE = 0,
        HF_CAMERA = 1, --摄像头
        HF_MICROPHONE = 2, --麦克风
        HF_JOYPAD = 4 --游戏手柄，不区分有线无线
    },
    CLIENTTYPE = {
        PC = 0, --计算机
        TV = 1, --电视
        MOBILE = 2, --手机
        WEB = 3, --浏览器
    },
    GAMETYPE = {
        CT_NORMAL = 0, --普通
        CT_SPORTS = 1, --竞技
    },
    SITTYPE = {
        ST_RAND = 0, --0为随机
        ST_SET = 1, --1为指定
    },

    nAskId = 0, --序号
    nTeaId = 0, --比赛场id

    --JoinRoom相关数据
    nRoomId = 0,
    nClientType = 0, --客户端类型，见宏CLIENTTYPE
    nHardWareFlag = 0, --硬件标识
    nRoomVer = 0, --房间版本
    nChannelId = 0, --渠道号
    ucGameType = 0, --标示客户端游戏方式
    nOsVer = 0, --client OS版本号
    acIdentify = "",
    llIp = 0, --客户端ip
    bReConnect = false, --是否重连标志, 1为重连,0为正常
    nClientTypeCustom = 0, --客户端自定义类型
    acHeadUrl = "", --玩家头像url
    nTableId = 0, --桌号
    nChairId = 0, --座位号
    ucSitType = 0, --是否按指定座位标志,1为指定,0为随机 
    logicData = "", -- 暂时无用
    acOtherInfo = "", -- 逻辑扩展字段
    bChangeTable = false,     --是否是因为换桌而加入桌子
    bSeer = false,            --是否观战

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nRoomId)
        bos:writeInt32(self.nClientType)
        bos:writeInt32(self.nHardWareFlag)
        bos:writeInt32(self.nRoomVer)
        bos:writeInt32(self.nChannelId)
        bos:writeUInt8(self.ucGameType)
        bos:writeInt32(self.nOsVer)
        bos:writeString(self.acIdentify)
        bos:writeInt64(self.llIp)
        bos:writeBool(self.bReConnect)
        bos:writeInt32(self.nClientTypeCustom)
        bos:writeString(self.acHeadUrl)
        bos:writeInt32(self.nTableId)
        bos:writeInt32(self.nChairId)
        bos:writeUInt8(self.ucSitType)
        bos:writeString(self.logicData)
        bos:writeString(self.acOtherInfo)
        bos:writeBool(self.bChangeTable)
        bos:writeBool(self.bSeer)
        return bos
    end,
}

TeaHouseProtocol.RespJoinTeaTable = {
    XY_ID = CMDT_RESPJIONTAETABLE,

    FLAG = {
        SUCCESS = 0, --成功
        NOT_RIGHT = 1, --没有权限
        NOT_EMPTY = 2, --没有空位
        OTHER = 3, --其他的错误
        NOT_ENOUGHPROP = 4, --沒有足夠分配的足夠道具
        TEAHOUSE_CLOESD = 5, --比赛场已暂时关闭
        TEAHOUSE_IP_LIMIT = 8, --同ip限制
        TEAHOUSE_FORBIDDEN = 9, --黑名单
        NOT_PROP = 10, -- 道具不足
        GPS_NOT_OPEN = 12, -- 没有开启GPS定位 
        DISTANCE_TOO_CLOSE = 13, --与桌子上其余玩家距离太近，不符合入座条件
        FORBID_PLAY_IN_SAME_TABLE = 14,  -- 限制玩家同桌功能，桌上有玩家被限制同桌
        BAN = 17,--玩家被禁玩游戏
        NOT_EMPTY_TABLE = 31, --没有空卓
        NOT_PROP_BY_GP = 32, --没有时效道具
        EXP_PROP = 33, --时效道具已失效
        NOENOUGH_PROP = 34, --没有足够的普通道具
        ERR_DATA = 35, --数据不正确
        NO_TYPEID = 36, --没有扣除道具类型id
        ERR_INTABLE = 37, --玩家已经在桌子上
        ERR_USEPROP = 38, --使用道具失败
        ERR_TABLEID = 39, --错误的房间号
        ERR_EMPTY_SEAT = 40, --无法获取空位置
        ERR_NOT_CREATE_TABLE = 41, --未创建桌子
        ERR_ALREADY_GAME = 42, --已经开始游戏了
        ERR_ALREADY_CREATE = 43, --已经在创建桌子了
        ERR_ALREADY_JOIN = 44, --已经在加入桌子了
        ERR_TABLE_FULL = 45, --桌子已经满了
        FAILED = 46, --其他错误
        ERR_GPS_OPEN = 47, --未开启GPS
        ERR_DISTANCE = 48, --与桌子上其余玩家距离太近，不符合入座条件
        ERR_CONTINUE = 242,
    },

    nAskId = 0, --序号
    ucFlag = 0, --返回标示
    nTableId = 0, --桌号
    nChairId = 0,
    nGameId = 0,
    nAppId = 0,
    nRoomId = 0, --客户端展示的房间号
    bIsNewProcedure = true, --判断新老流程

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskId = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        self.nTableId = bis:readInt32()
        self.nChairId = bis:readInt32()
        self.nGameId = bis:readInt32()
        self.nAppId = bis:readInt32()
        self.nRoomId = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.bIsNewProcedure = bis:readBool()
        end

        return self
    end
}

--85 搜索比赛场
TeaHouseProtocol.ReqSearchTeaHouse = {
    XY_ID = 85 + 200,
    askid = 0, --序号
    password = 0, -- 比赛场id
    url = "",
    nickname = "",

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.password)
        bos:writeString(self.url)
        bos:writeString(self.nickname)
        return bos
    end,
}

--86 返回比赛场信息
TeaHouseProtocol.RespSearchTeaHouse = {
    XY_ID = 86 + 200,
    REQ_STATE = {
        SUCCESS = 0,
        NOT_EXIST = 1,
        WAITING = 2, --申请中
        HAVE_RIGHT = 3, --已经在该比赛场
    },
    flag = 0,
    askid = 0, --序号
    --teaID = 0, --请求状态
    teahouseSummery = {},
    --ownerName = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readUInt32()
        self.askid = bis:readInt32()
        --self.teaID = bis:readInt32()
        self.teahouseSummery.nTeaHouseAppid = bis:readInt32()
        self.teahouseSummery.nTeaNumber = bis:readInt32()
        self.teahouseSummery.szTeaName = bis:readString()
        self.teahouseSummery.nPasswd = bis:readInt32()

        self.teahouseSummery.nUserCnt = bis:readInt32()
        self.teahouseSummery.szUrl = bis:readString()
        self.teahouseSummery.szData = bis:readString()
        self.teahouseSummery.nOnLineUserCnt = bis:readInt32()
        self.teahouseSummery.ucState = bis:readUInt8()
        self.teahouseSummery.nTodayUseProps = bis:readInt32()
        self.teahouseSummery.nAreaid = bis:readInt32()
        self.teahouseSummery.nTeaOwnerNumid = bis:readInt32()

        if bis:getAvailableSize() > 0 then
            self.teahouseSummery.ownerName = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.teahouseSummery.teaNotice = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.teahouseSummery.nSubAreaid = bis:readInt32()
        end
        return self
    end
}

--87 设置比赛场信息(名字、公告内容) 
TeaHouseProtocol.ReqSetTeaInfo = {
    XY_ID = 87 + 200,
    askid = 0, --序号
    nTeaId = 0,
    acTeaName = "",
    acNotice = "",

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.nTeaId)
        bos:writeString(self.acTeaName)
        bos:writeString(self.acNotice)
        return bos
    end,
}

--88 返回比赛场信息
TeaHouseProtocol.RespSetTeaInfo = {
    XY_ID = 88 + 200,
    REQ_STATE = {
        SUCCESS = 0,
        NOT_OWNER = 1,
        TEA_NOT_EXIST = 2,
        TEA_NAME_EXIIST = 999, --弃用
        OTHER = 3,
    },
    flag = 0,
    askid = 0, --序号


    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readUInt8()
        self.askid = bis:readInt32()
        return self
    end
}

--89 获取比赛场创建配置(是否允许成员、系统开房的配置) 
TeaHouseProtocol.ReqGetCreateTableCfg = {
    XY_ID = 89 + 200,
    askid = 0, --序号
    nTeaId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.nTeaId)
        return bos
    end,
}

--90 返回比赛场创建配置
TeaHouseProtocol.RespGetCreateTableCfg = {
    XY_ID = 90 + 200,
    REQ_STATE = {
        SUCCESS = 0,
        ERROR = 1,
    },
    flag = 0,
    askid = 0, --序号
    bAllowSys = false,
    bAllowMem = false,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readUInt8()
        self.askid = bis:readInt32()
        self.bAllowSys = bis:readInt32() == 1
        self.bAllowMem = bis:readInt32() == 1
        print(" recv -- -- -- ---RespGetCreateTableCfg", self.flag, self.bAllowSys, self.bAllowMem)
        return self
    end
}

--91 设置比赛场创建配置(是否允许成员、系统开房的配置) 
TeaHouseProtocol.ReqSetCreateTableCfg = {
    XY_ID = 91 + 200,
    askid = 0, --序号
    nTeaId = 0,
    bAllowSys = false,
    bAllowMem = false,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.bAllowSys and 1 or 0)
        bos:writeInt32(self.bAllowMem and 1 or 0)
        print(" send -- -- -- ---ReqSetCreateTableCfg", self.bAllowSys, self.bAllowMem)
        return bos
    end,
}

--92 设置返回
TeaHouseProtocol.RespSetCreateTableCfg = {
    XY_ID = 92 + 200,
    REQ_STATE = {
        SUCCESS = 0,
        ERROR = 1,
    },
    flag = 0,
    askid = 0, --序号
    teaID = 0,
    bAllowSys = false,
    bAllowMem = false,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readUInt8()
        self.askid = bis:readInt32()
        self.teaID = bis:readInt32()
        self.bAllowSys = bis:readInt32() == 1
        self.bAllowMem = bis:readInt32() == 1
        print(" recv -- -- -- ---RespSetCreateTableCfg", self.flag, self.bAllowSys, self.bAllowMem)
        return self
    end
}

--93 请求快速加入桌子
TeaHouseProtocol.ReqQuickJoinTable = {
    XY_ID = 93 + 200,
    askid = 0, --序号
    teaid = 0, --标志
    gameid = 0, --游戏编号
    roomid = 0,
    clientType = 0,
    hardWareFlag = 0,
    roomVer = 0,
    channelID = 0,
    gameType = 0,
    osVer = 0,
    identify = 0,
    headUrl = "",

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.teaid)
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.roomid)
        bos:writeInt32(self.clientType)
        bos:writeInt32(self.hardWareFlag)
        bos:writeInt32(self.roomVer)
        bos:writeInt32(self.channelID)
        bos:writeUInt8(self.gameType)
        bos:writeInt32(self.osVer)
        bos:writeString(self.identify)
        bos:writeString(self.headUrl)
        return bos
    end,
}

--94 玩家请求申请玩家列表
TeaHouseProtocol.ReqAskList = {
    XY_ID = 94 + XY_ID_PLUS,
    askid = 0,
    nTeaId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.nTeaId)
        return bos
    end,
}

--95 返回申请玩家列表
TeaHouseProtocol.RespAskList = {
    XY_ID = 95 + XY_ID_PLUS,
    FLAG = {
        SUCCESS = 0, --成功
        NOT_RIGHT = 1, --没有权限
        ERROR = 2,
    },
    flag = 0, --标志
    askid = 0, --序号
    teaid = 0,
    askCount = 0,
    playerInfo = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readUInt8()
        self.askid = bis:readInt32()
        self.teaid = bis:readInt32()
        self.askCount = bis:readInt32()
        self.playerInfo = {}
        for i = 1, self.askCount do
            self.playerInfo[i] = {
                nAreaId = bis:readInt32(),
                nNumId = bis:readInt32(),
                nAskTime = bis:readInt32(), --申请加入时间
                acAksPowerData = bis:readString(),
                url = bis:readString(),
                nickName = bis:readString(),
                sex = bis:readInt32()
            }
        end
        return self
    end
}

TeaHouseProtocol.ReqSetManagerRight = {
    XY_ID = CMDT_REQSETMANAGERRIGHT,

    nAskid = 0,
    nTeaId = 0,
    nManagerAreaId = 0,
    nManagerNumId = 0,
    nManagerRight = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nManagerAreaId)
        bos:writeInt32(self.nManagerNumId)
        bos:writeInt32(self.nManagerRight)
        return bos
    end,
}

TeaHouseProtocol.RespSetManagerRight = {
    XY_ID = CMDT_RESPSETMANAGERRIGHT,

    FLAG = {
        SUCCESS = 0,
        NO_RIGHT = 1,
        NOT_MANAGER = 2,
    },

    ucFlag = 0,
    nAskid = 0,
    nTeaId = 0,
    nRight = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskid = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nRight = bis:readInt32()
        return self
    end,
}

TeaHouseProtocol.ReqInvitePlayer = {
    XY_ID = CMDT_REQINVITEPLAYER,
    nAskId = 0,
    nTeaId = 0,
    nInviteAreaId = 0,
    nInviteNumId = 0,
    nChannel = 0,
    nTime = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nInviteAreaId)
        bos:writeInt32(self.nInviteNumId)
        bos:writeInt32(self.nChannel)
        bos:writeInt32(self.nTime)
        return bos
    end,
}

TeaHouseProtocol.RespInvitePlayer = {
    XY_ID = CMDT_RESPINVITEPLAYER,

    FLAG = {
        SUCCESS = 0,
        NO_RIGHT = 1,
        MAX_TEAHOUSE = 2,
        MAX_MEMBERS = 3,
        IS_MEMBER = 4,
    },

    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nErrorCode = 0,
    nNumid = 0,
    nChannel = 0,
    nTime = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nNumid = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nChannel = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nTime = bis:readInt32()
        end
        return self
    end,
}

TeaHouseProtocol.ReqCreateJoinConfig = {
    XY_ID = CMDT_REQCREATEJOINCONFIG,

    nAskId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        return bos
    end
}

TeaHouseProtocol.RespCreateJoinConfig = {
    XY_ID = CMDT_RESPCREATEJOINCONFIG,

    Config = {
        USE_NEW_PROCEDURE = 0,
        USE_OLD_PROCEDURE = 1,
    },

    nAskId = 0,
    nConfig = 1,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskId = bis:readInt32()
        self.nConfig = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqCreateAutoSitWithMode = {
    XY_ID = CMDT_REQCREATEAUTOSITWITHMODE,

    nAskId = 0,
    nTeaId = 0,

    nRoomId = 0,
    nClientType = 0,
    nHardWareFlag = 0,
    nRoomVer = 0,
    nChannelId = 0,
    ucGameType = 0,
    nOsVer = 0,
    acIdentify = "",
    bReConnect = false,
    nClientTypeCustom = 0,
    acHeadUrl = "",
    nTableId = 0,
    nChairId = 0,
    ucSitType = 0,
    acLogicData = "", -- 暂时无用
    acOtherInfo = "", -- 逻辑扩展字段
    nPayType = 0, --支付类型  0比赛场消耗 1AA支付 6其他支付

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nRoomId)
        bos:writeInt32(self.nClientType)
        bos:writeInt32(self.nHardWareFlag)
        bos:writeInt32(self.nRoomVer)
        bos:writeInt32(self.nChannelId)
        bos:writeUInt8(self.ucGameType)
        bos:writeInt32(self.nOsVer)
        bos:writeString(self.acIdentify)
        bos:writeBool(self.bReConnect)
        bos:writeInt32(self.nClientTypeCustom)
        bos:writeString(self.acHeadUrl)
        bos:writeInt32(self.nTableId)
        bos:writeInt32(self.nChairId)
        bos:writeUInt8(self.ucSitType)
        bos:writeString(self.acLogicData)
        bos:writeString(self.acOtherInfo)
        bos:writeInt32(self.nPayType)
        return bos
    end,
}

TeaHouseProtocol.ReqRankUserInfo = {
    XY_ID = CMDT_REQRANKUSERINFO,

    nAskId = 0,
    nTeaId = 0,
    nStartIndex = 0, -- 0表示从第1个开始
    nCount = 0, -- 请求总数
    nBigSmall = 0, --1表示从大到小，0表示从小到大
    acRankMode = "", --排序的维度，"todayxxxxx"形式的维度，表示需要按天排序的
    --"teaprops"表示比赛场房卡
    --"online"表示比赛场在线时间
    --"todayprivatecount"表示今日局数排行
    --"privatecount"表示总局数排行
    --上面信息记录在比赛场redis中，下面信息记录在账单redis中
    --"todaycost"表示日消耗排行
    --"todaybigwinner"表示每日冠军排行
    --"bigwinner"表示总冠军排行
    --"historycost"表示历史消耗
    --"todayscore"表示优胜值排行
    nStartDay = 0, --开始天，0表示今天，1表示昨天，2表示前天，以此类推，最多7天
    nEndDay = 0, --结束天，0表示今天，1表示昨天，2表示前天，以此类推，最多7天
    bFliter = false,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nStartIndex)
        bos:writeInt32(self.nCount)
        bos:writeInt32(self.nBigSmall)
        bos:writeString(self.acRankMode)
        bos:writeInt32(self.nStartDay)
        bos:writeInt32(self.nEndDay)
        bos:writeBool(self.bFliter)
        return bos
    end,
}

TeaHouseProtocol.RespRankUserInfo = {
    XY_ID = CMDT_RESPRANKUSERINFO,

    RETVAL = {
        OK = 0, -- 找到
        NOT_FOUND = 1, -- 未找到
        TEA_NOTEXIST = 2, -- 比赛场不存在
        PARAM_ERROR = 3, -- 参数错误
    },

    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nTotal = 0, --总共有几个。
    nCurIndex = 0, --当前是第几个。从0开始
    stUserInfo = {},
    nErrorCode = 0,
    acRankMode = "",
    nScore = 0,
    nRank = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurIndex = bis:readInt32()
        local tempUserInfo = TeaHouseProtocol.UserInfo:new()
        tempUserInfo.areaid = bis:readInt32()
        tempUserInfo.numid = bis:readInt32()
        tempUserInfo.tableid = bis:readInt32()
        tempUserInfo.seat = bis:readInt16()
        tempUserInfo.url = bis:readString()
        tempUserInfo.nickName = bis:readString()
        tempUserInfo.sex = bis:readUInt8()
        tempUserInfo.nPropCnt = bis:readInt32()
        tempUserInfo.bHaveRight = bis:readBool()
        tempUserInfo.nDailyCost = bis:readInt32()
        tempUserInfo.nHistoryCost = bis:readInt32()
        tempUserInfo.nJoinTime = bis:readInt32()
        tempUserInfo.nAskid = bis:readInt32()
        tempUserInfo.teaNumber = bis:readInt32()
        tempUserInfo.nUserShowProps = bis:readInt32()
        tempUserInfo.nAgentShowProps = bis:readInt32()
        tempUserInfo.bOffLine = bis:readBool()
        tempUserInfo.ucState = bis:readUInt8()
        tempUserInfo.nChangeTime = bis:readInt32()
        tempUserInfo.nLastFightTime = bis:readInt32()
        tempUserInfo.nIdx = bis:readInt32()
        tempUserInfo.nTotal = bis:readInt32()
        tempUserInfo.nUserEvent = bis:readInt32()
        tempUserInfo.nUserRight = bis:readInt32()
        tempUserInfo.acAksPowerData = bis:readString()
        tempUserInfo.nAskTime = bis:readInt32()
        tempUserInfo.nLastLeaveTime = bis:readInt32()
        tempUserInfo.bCanPlay = bis:readBool()
        tempUserInfo.nPlayerOwnerCards = bis:readInt32()
        self.stUserInfo = tempUserInfo
        self.nErrorCode = bis:readInt32()
        self.acRankMode = bis:readString()
        self.nScore = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nRank = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.ReqDismissTeaHouse = {
    XY_ID = CMDT_REQDISMISSTEAHOUSE,
    nAskId = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}

TeaHouseProtocol.RespDismissTeaHouse = {
    XY_ID = CMDT_RESPDISMISSTEAHOUSE,
    FLAG = {
        SUCCESS = 0, -- 找到
        NO_RIGHT = 1, -- 没权限
        DISMISSING = 2, -- 解散中
        NOT_FOUND = 3, -- 没找到比赛场
        PARAM_ERR = 4, -- 参数错误
        DISMISSED = 5
    },
    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqCancelDismissTeaHouse = {
    XY_ID = CMDT_REQCANCELDISMISSTEAHOUSE,
    nAskId = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}

TeaHouseProtocol.RespCancelDismissTeaHouse = {
    XY_ID = CMDT_RESPCANCELDISMISSTEAHOUSE,
    FLAG = {
        SUCCESS = 0, -- 找到
        NO_RIGHT = 1, -- 没权限
        PARAM_ERR = 2, -- 参数错误
        NOT_DISMISS = 3 -- 不是正在解散中的比赛场
    },
    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqAgentBindUser = {
    XY_ID = CMDT_REQAGENTBINDUSER,
    nAskId = 0,
    nTeaId = 0,
    nFilterRightUser = 0, -- 过滤有权限玩家，0不过滤，1过滤
    nStartIndex = 0, -- 0表示从第1个开始
    nCount = 0, -- 请求数量

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nFilterRightUser)
        bos:writeInt32(self.nStartIndex)
        bos:writeInt32(self.nCount)
        return bos
    end
}

TeaHouseProtocol.SimpleUserInfo = {
    STATE = {
        ST_OFFLINE = 0, -- 离线玩家
        ST_ONLINE = 1, -- 在线
        ST_GAME = 2, -- 在游戏中
    },
    RIGHT = {
        NORIGHT = 0,
        TEARIGHT = 1,
    },

    nAreaId = 0,
    nNumId = 0,
    nTeaRight = 0, --0无比赛场权限，1有比赛场权限
    acUrl = "",
    acNickName = "",
    ucGameStatus = 0, --游戏状态
    nGameTime = 0, --游戏时长
    nTeaId = 0,
    nGameCount = 0, --玩家总游戏局数
    nBigWinnerCount = 0, --玩家总游戏冠军次数
    nJoinTeaTime = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end
}

TeaHouseProtocol.RespAgentBindUser = {
    XY_ID = CMDT_RESPAGENTBINDUSER,
    FLAG = {
        SUCCESS = 0, -- 找到
        PARAM_ERR = 1, -- 参数错误
        NO_DATA = 2, -- 没有数据
        NO_RIGHT = 3 -- 没权限
    },
    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nTotal = 0, -- 返回的个数
    nCurIndex = 0, -- 当前是第几个。从0开始
    stUserInfo = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurIndex = bis:readInt32()
        local tempStUserInfo = TeaHouseProtocol.SimpleUserInfo:new()
        tempStUserInfo.nAreaId = bis:readInt32()
        tempStUserInfo.nNumId = bis:readInt32()
        tempStUserInfo.nTeaRight = bis:readInt32()
        tempStUserInfo.acUrl = bis:readString()
        tempStUserInfo.acNickName = bis:readString()
        self.stUserInfo = tempStUserInfo
        return self
    end
}

TeaHouseProtocol.ReqOthersHideTHInfo = {
    XY_ID = CMDT_REQOTHERSHIDTHINFO,
    nAskid = 0,
    nTeaid = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaid)
        return bos
    end
}

TeaHouseProtocol.RespOthersHideTHInfo = {
    XY_ID = CMDT_RESPOTHERSHIDTHINFO,
    nAskid = 0,
    bHide = false,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.bHide = bis:readBool()
        return self
    end
}

TeaHouseProtocol.ReqForbiddenPlay = {
    XY_ID = CMDT_REQFORBIDDENPLAY,
    nAskId = 0,
    nTeaId = 0,
    nForbiddenAreaId = 0,
    nForbiddenNumId = 0,
    bCanPlay = false,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nForbiddenAreaId)
        bos:writeInt32(self.nForbiddenNumId)
        bos:writeBool(self.bCanPlay)
        return bos
    end
}

TeaHouseProtocol.RespForbiddenPlay = {
    XY_ID = CMDT_RESPFORBIDDENPLAY,
    FLAG = {
        SUCCESS = 0,
        NO_RIGHT = 1,
        PLAYER_NORIGHT = 2
    },
    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqInviteHistory = {
    XY_ID = CMDT_REQINVITEHISTORY,
    nAskId = 0,
    nTeaId = 0,
    nCount = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nCount)
        return bos
    end,
}

TeaHouseProtocol.InviteInfo = {
    nInviterAreaId = 0,
    nInviterNumId = 0,
    acInviterNick = "",
    acInviterUrl = "",
    nInviteeAreaId = 0,
    nInviteeNumId = 0,
    acInviteeNick = "",
    acInviteeUrl = "",
    ntime = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end
}

TeaHouseProtocol.RespInviteHistory = {
    XY_ID = CMDT_RESPINVITEHISTORY,
    FLAG = {
        SUCCESS = 0,
        NO_RIGHT = 1,
        COUNT_ERR = 2,
    },
    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nCurIndex = 0,
    nTotalNum = 0,
    tInviteInfo = {
    },
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nCurIndex = bis:readInt32()
        self.nTotalNum = bis:readInt32()
        local inviteInfo = TeaHouseProtocol.InviteInfo:new()
        inviteInfo.nInviterAreaId = bis:readInt32()
        inviteInfo.nInviterNumId = bis:readInt32()
        inviteInfo.acInviterNick = bis:readString()
        inviteInfo.acInviterUrl = bis:readString()
        inviteInfo.nInviteeAreaId = bis:readInt32()
        inviteInfo.nInviteeNumId = bis:readInt32()
        inviteInfo.acInviteeNick = bis:readString()
        inviteInfo.acInviteeUrl = bis:readString()
        inviteInfo.nTime = bis:readInt32()
        self.tInviteInfo = inviteInfo
        return self
    end,
}

TeaHouseProtocol.IMToolConfig = {
    XY_ID = CMDT_IMTOOLCONFIG,
    nToolConfig = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nToolConfig)
        return bos
    end,
}

TeaHouseProtocol.ReqRankSelfInfo = {
    XY_ID = CMDT_REQRANKSELFINFO,

    nAskId = 0,
    nTeaId = 0,
    acRankMode = "", --排序的维度，"todayxxxxx"形式的维度，表示需要按天排序的
    --"teaprops"表示比赛场房卡
    --"online"表示比赛场在线时间
    --"todayprivatecount"表示今日局数排行
    --"privatecount"表示总局数排行
    --上面信息记录在比赛场redis中，下面信息记录在账单redis中
    --"todaycost"表示日消耗排行
    --"todaybigwinner"表示每日冠军排行
    --"bigwinner"表示总冠军排行
    --"historycost"表示历史消耗
    --"todayscore"表示优胜值排行
    nStartDay = 0, --开始天，0表示今天，1表示昨天，2表示前天，以此类推，最多7天
    nEndDay = 0, --结束天，0表示今天，1表示昨天，2表示前天，以此类推，最多7天

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeString(self.acRankMode)
        bos:writeInt32(self.nStartDay)
        bos:writeInt32(self.nEndDay)
        return bos
    end,
}

TeaHouseProtocol.RespRankSelfInfo = {
    XY_ID = CMDT_RESPRANKSELFINFO,

    RETVAL = {
        OK = 0, -- 找到
        NOT_FOUND = 1, -- 未找到
        TEA_NOTEXIST = 2, -- 比赛场不存在
        PARAM_ERROR = 3, -- 参数错误
    },

    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nRank = 0,
    nScore = 0,
    nErrorCode = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nRank = bis:readInt32()
        self.nScore = bis:readInt32()
        if (bis:getAvailableSize() > 0) then
            self.nErrorCode = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.ReqTeaMemberList = {
    XY_ID = CMDT_REQTEAMEMBERLIST,

    nAskId = 0,
    nTeaId = 0,
    bReqOnline = false,
    bReqGameCount = false, --是否请求玩家游戏局数
    bReqBigWinnerCount = false, --是否请求玩家冠军次数

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeBool(self.bReqOnline)
        bos:writeBool(self.bReqGameCount)
        bos:writeBool(self.bReqBigWinnerCount)
        return bos
    end,
}

TeaHouseProtocol.RespTeaMemberList = {
    XY_ID = CMDT_RESPTEAMEMBERLIST,

    RETVAL = {
        OK = 0, -- 找到
        PARAM_ERR = 1, -- 参数错误
        NO_DATA = 2, -- 没有数据
        NO_RIGHT = 3, -- 没有权限
        GET_ERR = 4, -- 获取数据失败
    },

    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nOnLineCnt = 0,
    nTotal = 0,
    nCurIndex = 0,
    stUserInfo = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nOnLineCnt = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurIndex = bis:readInt32()
        local tempStUserInfo = TeaHouseProtocol.SimpleUserInfo:new()
        tempStUserInfo.nAreaId = bis:readInt32()
        tempStUserInfo.nNumId = bis:readInt32()
        tempStUserInfo.nTeaRight = bis:readInt32()
        tempStUserInfo.acUrl = bis:readString()
        tempStUserInfo.acNickName = bis:readString()
        tempStUserInfo.ucGameStatus = bis:readUInt8()
        tempStUserInfo.nGameTime = bis:readInt32()
        tempStUserInfo.nTeaId = bis:readInt32()
        tempStUserInfo.nGameCount = bis:readInt32()
        tempStUserInfo.nBigWinnerCount = bis:readInt32()
        tempStUserInfo.nJoinTeaTime = bis:readInt32()
        self.stUserInfo = tempStUserInfo
        return self
    end
}

TeaHouseProtocol.ReqSelfFightInfo = {
    XY_ID = CMDT_REQSELFFIGHTINFO,

    nAskId = 0,
    nTeaId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end,
}

TeaHouseProtocol.RespSelfFightInfo = {
    XY_ID = CMDT_RESPSELFFIGHTINFO,

    RETVAL = {
        OK = 0, -- 找到
        PARAM_ERR = 1, -- 参数错误
        NO_DATA = 2, -- 没有数据
        NO_RIGHT = 3, -- 没有权限
    },

    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nLastFightTime = 0,
    nTotal = 0,
    nCurIndex = 0,
    stUserInfo = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nLastFightTime = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurIndex = bis:readInt32()
        local tempStUserInfo = TeaHouseProtocol.SimpleUserInfo:new()
        tempStUserInfo.nAreaId = bis:readInt32()
        tempStUserInfo.nNumId = bis:readInt32()
        tempStUserInfo.nTeaRight = bis:readInt32()
        tempStUserInfo.acUrl = bis:readString()
        tempStUserInfo.acNickName = bis:readString()
        tempStUserInfo.ucGameStatus = bis:readUInt8()
        tempStUserInfo.nGameTime = bis:readInt32()
        tempStUserInfo.nTeaId = bis:readInt32()
        tempStUserInfo.nGameCount = bis:readInt32()
        tempStUserInfo.nBigWinnerCount = bis:readInt32()
        tempStUserInfo.nJoinTeaTime = bis:readInt32()
        self.stUserInfo = tempStUserInfo
        return self
    end
}

TeaHouseProtocol.TeaOperRecord = {
    PLAYER_OP = {
        NONE = -1,
        APPLY = 0, --玩家申请权限
        AGREE = 1, --领队同意玩家申请
        REFUSE = 2, --领队拒绝玩家申请
        KICK = 3, --领队踢人
        QUIT = 4, --玩家申请退出
        INVITE = 5, --领队邀请玩家
        AGREEQUIT = 6, --领队同意玩家退出
        REFUSEQUIT = 7, --领队拒绝玩家退出
        FORCEQUIT = 8, --玩家强制退出
    },

    nTeaId = 0,
    nPlayerAreaId = 0,
    nPlayerNumId = 0,
    acNickName = "",
    acUrl = "",
    cOperType = 0, --操作类型
    nTime = 0,
    nTeaPwd = 10,
    nOperAreaId = 0, -- 操作者areaid
    nOperNumId = 0, -- 操作者numid
    acOperNickName = "", -- 操作者昵称
    acOperUrl = "", -- 操作者头像
    bReOper = false, -- 是否是重复操作
    acExtraData = "", -- 其他备注信息
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
}

TeaHouseProtocol.ReqOperationHistory = {
    XY_ID = CMDT_REQOPERATIONHISTORY,

    TYPE = {
        PLAYER = 1,
        TEA = 2,
        TEA_CARD = 3,
    },

    nAskId = 0,
    nTeaId = 0,
    nAskType = 0, --请求类型，1玩家记录，2比赛场记录
    nStartIndex = 0, --从第几条开始请求。0表示第一条
    nCount = 0, --请求多少条，最多100
    nReqHisBit = 0, --请求哪些操作的历史记录，默认0表示所有，不支持分页请求

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nAskType)
        bos:writeInt32(self.nStartIndex)
        bos:writeInt32(self.nCount)
        bos:writeInt32(self.nReqHisBit)
        return bos
    end,
}

TeaHouseProtocol.RespOperationHistory = {
    XY_ID = CMDT_RESPOPERATIONHISTORY,

    RETVAL = {
        OK = 0, -- 找到
        PARAM_ERR = 1, -- 参数错误
        NO_DATA = 2, -- 没有数据
        NO_RIGHT = 3, -- 没有权限
    },

    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nTotal = 0,
    nCurIndex = 0,
    stHis = {},
    nErrorCode = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurIndex = bis:readInt32()
        local tempTeaOperRecord = TeaHouseProtocol.TeaOperRecord:new()
        tempTeaOperRecord.nTeaId = bis:readInt32()
        tempTeaOperRecord.nPlayerAreaId = bis:readInt32()
        tempTeaOperRecord.nPlayerNumId = bis:readInt32()
        tempTeaOperRecord.acNickName = bis:readString()
        tempTeaOperRecord.acUrl = bis:readString()
        tempTeaOperRecord.cOperType = bis:readUInt8()
        tempTeaOperRecord.nTime = bis:readInt32()
        tempTeaOperRecord.nTeaPwd = bis:readInt32()
        tempTeaOperRecord.nOperAreaId = bis:readInt32()
        tempTeaOperRecord.nOperNumId = bis:readInt32()
        tempTeaOperRecord.acOperNickName = bis:readString()
        tempTeaOperRecord.acOperUrl = bis:readString()
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32() 
        end
        if bis:getAvailableSize() > 0 then
            tempTeaOperRecord.bReOper = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            tempTeaOperRecord.acExtraData = bis:readString()
        end
        self.stHis = tempTeaOperRecord
        return self
    end
}

-- 请求玩家领队卡数,玩家向领队用户后台购的卡
TeaHouseProtocol.ReqPlayerOwnerCard = {
    XY_ID = CMDT_REQPLAYEROWNERCARD,

    nAskId = 0,
    nTeaId = 0,
    nPropId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nPropId)
        return bos
    end,
}

-- 返回玩家领队卡数,玩家向领队用户后台购的卡
TeaHouseProtocol.RespPlayerOwnerCard = {
    XY_ID = CMDT_RESPPLAYEROWNERCARD,

    RETVAL = {
        OK = 0,
        NO_RIGHT = 1,
    },
    ucFlag = 0,
    nAskId = 0,
    nTeaId = 0,
    nPropId = 0,
    nPropCnt = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nPropId = bis:readInt32()
        self.nPropCnt = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqGetTeaTableRuleVisible = {
    XY_ID = CMDT_REQGETTEATABLERULEVISIBLE,

    nAskId = 0,
    nTeaId = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end,
}

TeaHouseProtocol.RespGetTeaTableRuleVisible = {
    XY_ID = CMDT_RESPGETTEATABLERULEVISIBLE,

    RETVAL = {
        OK = 0,
        NO_RIGHT = 1,
        PARAM_ERROR = 2,
        GET_ERROR = 3,
    },
    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    bVisible = false,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.bVisible = bis:readBool()
        return self
    end
}

TeaHouseProtocol.ReqSetAutoTransferCard = {
    XY_ID = CMDT_REQSETAUTOTRANSFERCARD,

    nAskId = 0,
    nTeaId = 0,
    nEnable = 0, --是否启用自动划卡功能，1启用，0未启用
    nLowCardNum = 0, --比赛场房卡低于这个数值时自动划卡
    nTransferCardNum = 0, --自动划卡数量
    nRemindLowCardNum = -1, --缺卡提醒数量，<0为不提醒
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nEnable)
        bos:writeInt32(self.nLowCardNum)
        bos:writeInt32(self.nTransferCardNum)
        bos:writeInt32(self.nRemindLowCardNum)
        return bos
    end,
}

TeaHouseProtocol.RespSetAutoTransferCard = {
    XY_ID = CMDT_RESPSETAUTOTRANSFERCARD,

    RETVAL = {
        OK = 0,
        NO_RIGHT = 1,       --没有权限
        PARAM_ERROR = 2,    --参数错误
    },
    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nEnable = 0, --是否启用自动划卡功能
    nLowCardNum = 0, --比赛场房卡低于这个数值时自动划卡
    nTransferCardNum = 0, --自动划卡数量
    nRemindLowCardNum = -1, --缺卡提醒数量
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nEnable = bis:readInt32()
        self.nLowCardNum = bis:readInt32()
        self.nTransferCardNum = bis:readInt32()
        self.nRemindLowCardNum = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqSetTeaTableRuleVisible = {
    XY_ID = CMDT_REQSETTEATABLERULEVISIBLE,

    nAskId = 0,
    nTeaId = 0,
    bVisible = false,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeBool(self.bVisible)
        return bos
    end,
}

TeaHouseProtocol.RespSetTeaTableRuleVisible = {
    XY_ID = CMDT_RESPSETTEATABLERULEVISIBLE,

    RETVAL = {
        OK = 0,
        NO_RIGHT = 1,
        PARAM_ERROR = 2,
        TEA_NOT_FOUND = 3,
    },
    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    bVisible = false,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.bVisible = bis:readBool()
        return self
    end
}

TeaHouseProtocol.ReqGetAutoTransferCard = {
    XY_ID = CMDT_REQGETAUTOTRANSFERCARD,

    nAskId = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end,
}

TeaHouseProtocol.RespGetAutoTransferCard = {
    XY_ID = CMDT_RESPGETAUTOTRANSFERCARD,

    RETVAL = {
        OK = 0,
        NO_RIGHT = 1, --没有权限
        PARAM_ERROR = 2, --参数错误
    },
    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nEnable = 0,
    nLowCardNum = 0,
    nTransferCardNum = 0,
    nRemindLowCardNum = -1, --缺卡提醒数量

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nEnable = bis:readInt32()
        self.nLowCardNum = bis:readInt32()
        self.nTransferCardNum = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nRemindLowCardNum = bis:readInt32() 
        end
        return self
    end
}

TeaHouseProtocol.ReqSetPlayerCustomInfo = {
    XY_ID = CMDT_REQSETPLAYERCUSTOMINFO,
 
    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    acInfo = "",
    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nNumId)
        bos:writeString(self.acInfo)
        return bos
    end
}

TeaHouseProtocol.RespSetPlayerCustomInfo = {
    XY_ID = CMDT_RESPSETPLAYERCUSTOMINFO,

    RETVAL = {
         OK = 0,
         PARAM_ERROR = 1,   -- 参数错误
         NO_PLAYER = 2,     -- 没有该玩家
         NO_RIGHT = 3,      -- 没有权限
         SENSITIVE = 4,     -- 有敏感词
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    acInfo = "",

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nNumId = bis:readInt32()
        self.acInfo = bis:readString()
        return self
    end
}

TeaHouseProtocol.ReqGetPlayerCustomInfo = {
    XY_ID = CMDT_REQGETPLAYERCUSTOMINFO,
 
    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nNumId)
        return bos
    end
}

TeaHouseProtocol.RespGetPlayerCustomInfo = {
    XY_ID = CMDT_RESPGETPLAYERCUSTOMINFO,

    RETVAL = {
         OK = 0,
         PARAM_ERROR = 1,    -- 参数错误
         NO_PLAYER = 2,       -- 没有该玩家
         NO_RIGHT = 3,    -- 没有权限
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    acInfo = "",

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nNumId = bis:readInt32()
        self.acInfo = bis:readString()
        return self
    end
}

TeaHouseProtocol.ReqForbidPlayInSameTable = {
    XY_ID = CMDT_REQFORBIDPLAYINSAMETABLE,
 
    nAskId = 0,
    nTeaId = 0,
    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}

TeaHouseProtocol.RespForbidPlayInSameTable = {
    XY_ID = CMDT_RESPFORBIDPLAYINSAMETABLE,
    MAX_RULE_NUM = 100,
    MAX_PLAYER = 10,

    RETVAL = {
         OK = 0,
         PARAM_ERROR = 1,    -- 参数错误
         NO_RIGHT = 2,    -- 没有权限
         ERROR = 3,
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nRuleSize = 0,
    ruleTable = {},
    nTotalSize = 0, -- 总的规则个数
    nCurPkgIndex = 0, -- 当前返回的是第几个包，从0开始
    nTotalPkgNum = 0, -- 总共有几个包

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nRuleSize = bis:readInt32()
        
        self.ruleTable = {}
        if self.nRuleSize > self.MAX_RULE_NUM then
            self.nRuleSize = self.MAX_RULE_NUM
        end
        for i = 1, self.nRuleSize do
            self.ruleTable[i] = {}
            local nPlayerSize = bis:readInt32()
            local nRuleId = bis:readInt32()
            if nPlayerSize > self.MAX_PLAYER then
                nPlayerSize = self.MAX_PLAYER
            end
            local anNumId = {}
            for j = 1, nPlayerSize do
                anNumId[j] = bis:readInt32()
            end
            self.ruleTable[i].playerSize = nPlayerSize
            self.ruleTable[i].ruleId = nRuleId
            self.ruleTable[i].anNumId = anNumId
        end
        if bis:getAvailableSize() > 0 then
            self.nTotalSize = bis:readInt32() 
        end
        if bis:getAvailableSize() > 0 then
            self.nCurPkgIndex = bis:readInt32() 
        end
        if bis:getAvailableSize() > 0 then
            self.nTotalPkgNum = bis:readInt32() 
        end
        return self
    end
}

TeaHouseProtocol.ReqTransferTeaHouse = 
{
    XY_ID = CMDT_REQTRANSFERTEAHOUSE,
    nAskId = 0,
    nTeaHouseId = 0,       -- id(等于teaid)
    nToNumId = 0,       -- 用户平台numid

   new = function(self, o)
        local o = o or { }
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function (self)
    local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaHouseId)
        bos:writeInt32(self.nToNumId)
        return bos
    end
}

TeaHouseProtocol.RespTransferTeaHouse = 
{
    XY_ID = CMDT_RESPTRANSFERTEAHOUSE,
    RETVAL = 
    {
        OK = 0,
        PARAM_ERROR = 1,
        NO_RIGHT = 2,
        NOT_DEPUTY_LEADER = 3,
        NOT_AGENT = 4,
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaHouseId = 0,
    nToNumId = 0,

    new = function(self, o)
        local o = o or { }
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaHouseId = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nToNumId = bis:readInt32() 
        end
        return self
    end
}

TeaHouseProtocol.ReqDelForbidPlayInSameTable = {
    XY_ID = CMDT_REQDELFORBIDPLAYINSAMETABLE,
 
    nAskId = 0,
    nTeaId = 0,
    nRuleId = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nRuleId)
        return bos
    end
}

TeaHouseProtocol.RespDelForbidPlayInSameTable = {
    XY_ID = CMDT_RESPDELFORBIDPLAYINSAMETABLE,
    MAX_RULE_NUM = 100,
    MAX_PLAYER = 10,

    RETVAL = {
         OK = 0,
         PARAM_ERROR = 1,    -- 参数错误
         NO_RIGHT = 2,    -- 没有权限
         NOT_FOUND = 3,
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nRuleId = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nRuleId = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqSetForbidPlayInSameTable = {
    XY_ID = CMDT_REQSETFORBIDPLAYINSAMETABLE,
    MAX_PLAYER_NUM = 10,
 
    nAskId = 0,
    nTeaId = 0,
    nSize = 0,
    anNumId = {},

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nSize)
        local size = self.nSize > self.MAX_PLAYER_NUM and self.MAX_PLAYER_NUM or self.nSize
        for i = 1, size do
            bos:writeInt32(self.anNumId[i])
        end

        return bos
    end
}

TeaHouseProtocol.RespSetForbidPlayInSameTable = {
    XY_ID = CMDT_RESPSETFORBIDPLAYINSAMETABLE,

    RETVAL = {
         OK = 0,
         PARAM_ERROR = 1,    -- 参数错误
         NO_RIGHT = 2,    -- 没有权限
         ERROR = 3,
         REPEATED = 4, --重复设置
         MAX_SIZE = 5, --超过上限
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nRuleId = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nRuleId = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqSetRanklistVisible = {
    XY_ID = CMDT_REQSETRANKLISTVISIBLE,
    TYPE = {
        PLAYER  = 0, -- 对玩家设置
        TEA     = 1, -- 对比赛场设置
    },

    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    nSetType = 0,                 -- TYPE
    nVisibleRankBit = 0,          -- 可见排行榜，定义见Define.h rankbit

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nNumId)
        bos:writeInt32(self.nSetType)
        bos:writeInt32(self.nVisibleRankBit)
        return bos
    end
}

TeaHouseProtocol.RespSetRanklistVisible = {
    XY_ID  = CMDT_RESPSETRANKLISTVISIBLE,
    RETVAL = {
        OK          = 0,
        PARAM_ERROR = 1, --参数错误
        NO_RIGHT    = 2,
        NOT_TEAPLAYER = 3,
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    nSetType = 0,                 -- TYPE
    nVisibleRankBit = 0,          -- 可见排行榜，定义见Define.h rankbit

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nNumId = bis:readInt32()
        self.nSetType = bis:readInt32()
        self.nVisibleRankBit = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqGetRanklistVisible = {
    XY_ID = CMDT_REQGETRANKLISTVISIBLE,
    TYPE = {
        PLAYER = 0,
        TEA = 1,
    },
    
    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    nReqType = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nNumId)
        bos:writeInt32(self.nReqType)
        return bos
    end
}

TeaHouseProtocol.RespGetRanklistVisible = {
    XY_ID    = CMDT_RESPGETRANKLISTVISIBLE,
    MAX_RANK = 100,
    RETVAL = {
        OK          = 0,
        PARAM_ERROR = 1, --参数错误
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nNumId = 0,
    nReqType = 0,
    nVisibleRankBit = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nNumId = bis:readInt32()
        self.nReqType = bis:readInt32()
        self.nVisibleRankBit = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqCanQuitTeaHouse = {
    XY_ID = CMDT_REQCANQUITTEAHOUSE,

    nAskId = 0,
    nTeaId = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}

TeaHouseProtocol.RespCanQuitTeaHouse = {
    XY_ID = CMDT_RESPCANQUITTEAHOUSE,
    RETVAL = {
            OK = 0,
            PARAM_ERROR       = 1,  -- 参数错误
            NO_RIGHT          = 2,  -- 非比赛场成员
            NOT_COMMON_MEMBER = 3,  -- 不是普通成员
            COST_COUNT_ERROR  = 4,  -- 比赛场昨日有消耗，且玩家近3日有对局
        },

    ucFlag = "",
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqGetTeaTableCard = {
    XY_ID = CMDT_REQGETTEATABLECARD,
    nAskId = 0,      
    nTeaId = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}

TeaHouseProtocol.RespGetTeaTableCard = {
    XY_ID = CMDT_RESPGETTEATABLECARD,

    RETVAL = {
         OK = 0,
         PARAM_ERROR = 1,    -- 参数错误
         NO_RIGHT = 2,    -- 没有权限
         ERROR = 3,
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nTotalPropCnt = 0,      -- 库存房卡，放大100倍
    nTotalTableCard = 0,    -- 总桌卡，放大100倍
    nUsedTableCard = 0,     -- 占用房卡

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nTotalPropCnt = bis:readInt32()
        self.nTotalTableCard = bis:readInt32()
        self.nUsedTableCard = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqRegisterAgent = 
{
    XY_ID = CMDT_REQREGISTERAGENT ,
    nAskId = 0,
    nAgentAreaId = 0,
    acPhoneNum = "",
    acHeadUrl = "",
    acNickName = "",

    new = function(self, o)
        local o = o or { }
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nAgentAreaId)
        bos:writeString(self.acPhoneNum)
        bos:writeString(self.acHeadUrl)
        bos:writeString(self.acNickName)
        return bos
    end
}

TeaHouseProtocol.RespRegisterAgent = 
{
    XY_ID = CMDT_RESPREGISTERAGENT ,

    RETVAL = {
            OK = 0,
            PARAM_ERROR = 1,
            NOT_BIND = 2,   -- 未绑定手机号
            IS_AGENT = 3,   -- 已经是用户了
            REGISTER_ERROR = 4, -- 注册失败
            PHONE_ERROR = 5,    -- 手机号不是绑定的手机号
        },
    ucFlag = 0,
    nErrorCode = 0,
    nFengxinErrorCode = 0,
    nAskId = 0,
    nAgentAreaId = 0,
    nAgentNumId = 0,

    new = function(self, o)
        local o = o or { }
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nFengxinErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nAgentAreaId = bis:readInt32()
        self.nAgentNumId = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqUnLockTeaInfo = {
    XY_ID = CMDT_REQUNLOCKTEAINFO,
    UNLOCK_TYPE = {
        TEACOUNT = 1, --比赛场数量
        MANAGERCOUNT = 2, -- 副领队数量
        TABLECOUNT = 3 -- 桌子数量
    },
    nAskid = 0,
    nUnlockType = 0,
    nTeaId = 0, -- 解锁比赛场数量时不用填，只能解锁高级比赛场个数
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nUnlockType)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}


TeaHouseProtocol.RespUnLockTeaInfo = {
    XY_ID = CMDT_RESPUNLOCKTEAINFO,
    FLAG = {
        SUCCESS = 0,
        PARAM_ERROR = 1,
        NO_RIGHT = 2,
        NOT_ENOUGH = 3,
        FORBID_UPGRADE = 4,
        MAX_COUNT = 5
    },
    nFlag = 0,
    nErrorCode = 0,
    nAskid = 0,
    nUnlockType = 0,
    nTeaId = 0,
    nCount = 0, -- 返回解锁之后的数量，比赛场数量/副领队数量/桌子数量
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskid = bis:readInt32()
        self.nUnlockType = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nCount = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqUpgradeTeaHouse = {
    XY_ID = CMDT_REQUPGRADETEAHOUSE,
    nAskid = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}

TeaHouseProtocol.RespUpgradeTeaHouse = {
    XY_ID = CMDT_RESPUPGRADETEAHOUSE,
    FLAG = {
        SUCCESS = 0,
        PARAM_ERROR = 1,
        NO_RIGHT = 2,
        FORBID_UPGRADE = 4,
        NO_ENOUGH_ACTIVEVALUE = 5,
        MAX_TEACOUNT = 6 --高级比赛场上限
    },
    nFlag = 0,
    nErrorCode = 0,
    nAskid = 0,
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskid = bis:readInt32()
        self.nTeaId = bis:readInt32()
        return self
    end
}


TeaHouseProtocol.ReqGetActiveValue = {
    XY_ID = CMDT_REQGETACTIVEVALUE,
    nAskId = 0,
    bLastmonth = false, -- 如果为true则表示获取上月的活跃值
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeBool(self.bLastmonth)
        return bos
    end
}

TeaHouseProtocol.RespGetActiveValue = {
    XY_ID = CMDT_RESPGETACTIVEVALUE,
    FLAG = {
        SUCCESS = 0
    },
    nFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nLastmonth = 0,
    nValue = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nLastmonth = bis:readInt32()
        self.nValue = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.TeaLevelConfig = {    
    XY_ID = CMDT_TEALEVELCONFIG,
    nErrorCode = 0,
    levelConfig = {},
    nUpgradeActiveCount = 0, --升级为高级比赛场需要的活跃值
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nErrorCode = bis:readInt32()
        for i = 1,3 do
            local tempData =  {}
            tempData.tCanCreateTeaCount = bis:readInt32()
            tempData.tLevelCardNum = bis:readInt32()
            tempData.tMaxTeaCount = bis:readInt32()
            tempData.tUpgradeTeaCount = bis:readInt32()
            tempData.tUpgradeManagerCount = bis:readInt32()
            tempData.tUpgradeTableCount = bis:readInt32()
            self.levelConfig[i] = tempData
        end
        self.nUpgradeActiveCount = bis:readInt32()
        return self
    end
 }

 TeaHouseProtocol.ReqGetAddCardLog = {
    XY_ID = CMDT_REQGETADDCARDLOG,

    nAskId  = 0,
    nTeaId = 0,
    nDay = 0,    -- 0表示今天，1表示昨天，以此类推
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nDay)
        return bos
    end
}

TeaHouseProtocol.RespGetAddCardLog = {
    XY_ID = CMDT_RESPGETADDCARDLOG,
    FLAG = {
        OK = 0,
        PARAM_ERROR = 1,
        NO_RIGHT = 2,
    },
    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nDay = 0,      -- 0表示今天，1表示昨天，以此类推
    nTotal = 0;
    nCurIndex = 0,  -- 从0开始
    tFromUserinfo = {},
    tToUserinfo = {},
    nPropCount = 0,
    nOptTime = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nDay = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurIndex = bis:readInt32()

        local fromUserinfo = {}
        fromUserinfo.nAreaId = bis:readInt32()
        fromUserinfo.nNumId = bis:readInt32()
        fromUserinfo.acHeadUrl = bis:readString()
        fromUserinfo.acNickName = bis:readString()
        fromUserinfo.acExtraData = bis:readString()
        self.tFromUserinfo = fromUserinfo

        local toUserinfo = {}
        toUserinfo.nAreaId = bis:readInt32()
        toUserinfo.nNumId = bis:readInt32()
        toUserinfo.acHeadUrl = bis:readString()
        toUserinfo.acNickName = bis:readString()
        toUserinfo.acExtraData = bis:readString()
        self.tToUserinfo = toUserinfo

        self.nPropCount = bis:readInt32()
        self.nOptTime = bis:readInt32()
        return self
    end
}


TeaHouseProtocol.ReqSetTeaCustomInfo = {
    XY_ID = CMDT_REQSETTEACUSTOMINFO,
    nAskId = 0,
    nTeaId = 0,
    nConfig = 0,  -- 设置比赛场开启的功能，按bit位开启，见Define.h中客户端设置比赛场功能
    acInfo = "",  -- lua格式
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nConfig)
        bos:writeString(self.acInfo)
        return bos
    end
}

TeaHouseProtocol.RespSetTeaCustomInfo = {
    XY_ID = CMDT_RESPSETTEACUSTOMINFO,
    RETVAL = {
        OK = 0,
        PARAM_ERROR = 1,    -- 参数错误
        NO_RIGHT = 2,       -- 没有权限
        NOT_AGENT = 3,      -- 不是用户
    },
    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nConfig = 0,
    acInfo = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nConfig = bis:readInt32()
        self.acInfo = bis:readString()
        return self
    end
}

TeaHouseProtocol.ReqGetTeaCustomInfo = {
    XY_ID = CMDT_REQGETTEACUSTOMINFO,
    nAskId = 0, 
    nTeaId = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        return bos
    end
}

TeaHouseProtocol.RespGetTeaCustomInfo = {
    XY_ID = CMDT_RESPGETTEACUSTOMINFO,
    RETVAL = {
        OK = 0,
        PARAM_ERROR = 1,    -- 参数错误
        NO_RIGHT = 2,       -- 没有权限
        NOT_AGENT = 3,      -- 不是用户
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nConfig = 0,
    acInfo = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nConfig = bis:readInt32()
        self.acInfo = bis:readString()
        return self
    end
}

TeaHouseProtocol.ReqTeaAndPlayerOperation = {
    XY_ID = CMDT_REQTEAANDPLAYEROPERATION,
    nAskId = 0,
    nTeaId = 0,
    nStart = 0, -- 从第几条开始请求。0表示第一条
    nCount = 0,-- 请求多少条，最多100
    nDayLimit = 0, -- 请求最近几天的记录,默认0请求全部
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTeaId)
        bos:writeInt32(self.nStart)
        bos:writeInt32(self.nCount)
        bos:writeInt32(self.nDayLimit)
        return bos
    end
}

TeaHouseProtocol.RespTeaAndPlayerOperation = {
    XY_ID = CMDT_RESPTEAANDPLAYEROPERATION,
    RETVAL = {
        OK = 0,
        PARAM_ERROR = 1,    -- 参数错误
        NO_RIGHT = 2,       -- 没有权限
    },
    OPERTYPE = {
        TRANSFERCARD_TO_PLAYER = 22,
        ADD_PLAYERFEE = 27,
        TRANSFERCARD = 1021,
        AUTO_TRANSFERCARD_LOBBY = 1028,
    },
    RIGHT = {
        PLAYER = 0,
        MANAGER = 1,
        OWNER = 2,
    },

    ucFlag = 0,
    nErrorCode = 0,
    nAskId = 0,
    nTeaId = 0,
    nTotal = 0,
    index = 0,
    tRecord = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nErrorCode = bis:readInt32()
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.index = bis:readInt32()
        local recordData = {}
        recordData.teaid = bis:readInt32()
        recordData.oper_areaid = bis:readInt32()
        recordData.oper_numid = bis:readInt32()
        recordData.oper_nick = bis:readString()
        recordData.oper_url = bis:readString()
        recordData.oper_right = bis:readInt32()
        recordData.player_areaid = bis:readInt32()
        recordData.player_numid = bis:readInt32()
        recordData.player_nick = bis:readString()
        recordData.player_url = bis:readString()
        recordData.oper_type = bis:readInt32()
        recordData.time = bis:readInt32()
        recordData.comments = bis:readString()
        self.tRecord = recordData
        return self
    end
}

TeaHouseProtocol.NotifyCardCount = {
    XY_ID = CMDT_NOTIFYCARDCOUNT,
    ECARDTYPE = {
        OWNER = 0,
        TEAHOUSE = 1,
    },

    cardtype = 0,
    nowcount = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.cardtype = bis:readInt32()
        self.nowcount = bis:readInt32()
        return self
    end
}

--领队在比赛场内
TeaHouseProtocol.ReqRecomendInvitelist = {
    XY_ID = CMDT_REQRECOMENDINVITELIST,
    nAskId = 0,
    getdata = false, -- false时只拉取状态，对应resp中的flag
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeBool(self.getdata)
        return bos
    end
}

TeaHouseProtocol.RespRecomendInvitelist = 
{
    XY_ID = CMDT_RESPRECOMENDINVITELIST,
    UCFLAG = {
        EMPTY = 0,
        HAVEDATA = 1,
        NOTOWNER = 2,
        OTHER = 3,
    },
    nAskId = 0,
    ucflag = 0,
    curindex = 0,
    endindex = 0, -- index 从0开始，cur=end 即为最后一条
    subsize = 0,
    playerInfo = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskId = bis:readInt32()
        self.ucFlag = bis:readInt32()
        self.curindex = bis:readInt32()
        self.endindex = bis:readInt32()
        self.subsize = bis:readInt32()
        local tplayerInfo = {}
        for i = 1, self.subsize do 
            local info = {}
            info.numid = bis:readInt32()
            info.url = bis:readString()
            info.nickName = bis:readString()
            info.state = bis:readInt32()
            table.insert(tplayerInfo,info)
        end
        self.playerInfo = tplayerInfo
        return self
    end
}

TeaHouseProtocol.ReqSendRecomendInvite = {
    XY_ID = CMDT_REQSENDRECOMENDINVITE,
    nAskId = 0,
    teaid = 0,
    exceptsize = 0,
    exceptnumid = {}, --排除的numid
    dealtype = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.teaid)
        bos:writeInt32(self.exceptsize)
        for i = 1, self.exceptsize do
            bos:writeInt32(self.exceptnumid[i])
        end
        bos:writeInt32(self.dealtype)
        return bos
    end
}

TeaHouseProtocol.RespSendRecomendInvite = {
    XY_ID = CMDT_RESPSENDRECOMENDINVITE,
    nAskId = 0,
    successcnt = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskId = bis:readInt32()
        self.successcnt = bis:readInt32()
        return self
    end
}

TeaHouseProtocol.ReqGetInviteState = {
    XY_ID = CMDT_REQGETINVITESTATE,
    nAskId = 0,
    teaid = 0,
    fromtime = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.teaid)
        bos:writeInt32(self.fromtime)
        
        return bos
    end
}

TeaHouseProtocol.RespGetInviteState = {
    XY_ID = CMDT_RESPGETINVITESTATE,
    nAskId = 0,
    nTotal = 0,
    nCurrent = 0,
    count = 0,
    numid = {},
    state = {},
    invitetime = {},
    nickname = {},
    headurl = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskId = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.nCurrent = bis:readInt32()
        self.count = bis:readInt32()
        local tempUserStateList = {}
        for i = 1 , self.count do 
            local info = {}
            info.numid = bis:readInt32()
            info.state = bis:readInt32()
            info.invitetime = bis:readInt32()
            info.nickname = bis:readString()
            info.headurl = bis:readString()
            table.insert(tempUserStateList,info)
        end
        self.playerInfo = tempUserStateList
        return self
    end
}

TeaHouseProtocol.ReqDelKickLog = {
    XY_ID = CMDT_REQDELKICKLOG,
    nAskId = 0,
    nPlayerAreaId = 0,
    nPlayerNumId = 0,
    nOperAreaId = 0,
    nOperNumId = 0,
    nTeaid = 0, 
    nTime = 0, 

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nPlayerAreaId)
        bos:writeInt32(self.nPlayerNumId)
        bos:writeInt32(self.nOperAreaId)
        bos:writeInt32(self.nOperNumId)
        bos:writeInt32(self.nTeaid)
        bos:writeInt32(self.nTime)        
        return bos
    end
}

TeaHouseProtocol.RespDelKickLog = {
    XY_ID = CMDT_RESPDELKICKLOG,
    nAskId = 0,
    ucFlag = 0,
    nErrorCode = 0,
    nPlayerAreaId = 0,
    nPlayerNumId = 0,
    nOperAreaId = 0,
    nOperNumId = 0,
    nTeaId = 0,
    nTime = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskId = bis:readInt32()
        self.ucFlag = bis:readInt8()
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
            self.nPlayerAreaId = bis:readInt32()
            self.nPlayerNumId = bis:readInt32()
            self.nOperAreaId = bis:readInt32()
            self.nOperNumId = bis:readInt32()
            self.nTeaId = bis:readInt32()
            self.nTime = bis:readInt32()
        end       
        return self
    end
}

TeaHouseProtocol.ReqNewOpenTeaHouse = {
    XY_ID = CMDT_REQNEWOPENTEAHOUSE,
    askid = 0, --序号
    name = "", --名称
    nDefaultProps = 0, --默认新会员可消耗道具数    
    propid = 0,
    nOverPropCnt = 0, --默认可透支道具数
    notice = "", --公告
    areaID = 0, --区域号
    acHeadUrl = "",
    acNickName = "",
    nAgentAreaId = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeString(self.name)
        bos:writeInt32(self.nDefaultProps or 0)
        bos:writeInt32(self.propid)
        bos:writeInt32(self.nOverPropCnt or 0)
        bos:writeString(self.notice or "")
        bos:writeInt32(self.areaID or 0)
        bos:writeString(self.acHeadUrl or "")
        bos:writeString(self.acNickName or "")
        bos:writeInt32(self.nAgentAreaId or 0)
        return bos
    end,
}

TeaHouseProtocol.RespNewOpenTeaHouse = {
    XY_ID = CMDT_RESPNEWOPENTEAHOUSE,
    FLAG = {
        SUCCESS = 0, --成功
        NOTRIGHT = 1, --不权限
        MAXHOUSE = 2, --已经达到创建上限
        OTHER = 3, --其他错误
        NOTPROP = 4, --没有足够的卡
        SENSITIVE = 5, --被MGC过滤
        BAN = 6, --被ban比赛场功能
        DAILYMAX = 7, --日常上限
        CREATEFAIL = 8, --注册失败
        JUNIORMAX = 9, --低级场上限
        SENIORMAX = 10, --高级场上限
    },
    askid = 0, --序号
    flag = 0, --返回标示 
    teaNumber = 0, --比赛场编号
    szTeaName = "",
    nErrorCode = 0,
    nPasswd = 0,
    nUnLockActiveValue = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.teaNumber = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.szTeaName = bis:readString()
        end
        if bis:getAvailableSize() > 0 then
            self.nErrorCode = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nPasswd = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.nUnLockActiveValue = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.ReqTeaHouseAutoUpgrade = {
    XY_ID = CMDT_REQTEAHOUSEAUTOUPGRADE,
    askid = 0, --序号

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        return bos
    end,
}

TeaHouseProtocol.RespTeaHouseAutoUpgrade = {
    XY_ID = CMDT_RESPTEAHOUSEAUTOUPGRADE,
    askid = 0, --序号
    size = 0, --返回标示 
    teaNumber = {}, --比赛场编号

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.size = bis:readUInt8()
        self.teaNumber = {}
        for i = 1, self.size do
            self.teaNumber[i] = bis:readInt32()
        end
        return self
    end
}

TeaHouseProtocol.ReqTeaTimeCardsInfo = {
    XY_ID = CMDT_REQTEATIMECARDS_INFO,

    nAskId = 0,
    nTeaId = 0,
    nTimePropsId = 0,
    nExporeDay = 0,

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function( self )
        local bos = un.network.IStream.new()
        bos:writeInt32( self.nAskId )
        bos:writeInt32( self.nTeaId )
        bos:writeInt32( self.nTimePropsId )
        bos:writeInt32( self.nExporeDay )
        return bos
    end,
}

TeaHouseProtocol.RespTeaTimeCardsInfo = {
    XY_ID = CMDT_RESPTEATIMECARDS_INFO,

    nAskId = 0,
    nTeaId = 0,
    ucFlag = 0,
    nTeaPropsCount = 0, --购买卡库存
    nTeaTimeCardsCount = 0, --时效卡库存
    nTeaTimePropSize = 0, --时效卡信息-包含过期的
    items = {},

    FLAG = {
        SUCCESS = 0,      
        REDIS_ERROR = 1, 
        NO_RIGHT = 2,
    },

    new = function ( self, o )
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.nAskId = bis:readInt32()
        self.nTeaId = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        self.nTeaPropsCount = bis:readInt32()
        self.nTeaTimeCardsCount = bis:readInt32()
        self.nTeaTimePropSize = bis:readInt32()
        self.items = {}
        for i=1, self.nTeaTimePropSize do
            self.items[i] = {
                id = bis:readUInt32(),
                count = bis:readUInt32(),
                expireTime = bis:readUInt64()
            }
        end
        return self
    end
}

TeaHouseProtocol.processid = 116
for k, v in pairs(TeaHouseProtocol) do
    if type(v) == "table" then
        v.processid = TeaHouseProtocol.processid
        if v.XY_ID then
            v.event_key = v.processid .. "_" .. v.XY_ID
        end
    end
end

return TeaHouseProtocolDg 