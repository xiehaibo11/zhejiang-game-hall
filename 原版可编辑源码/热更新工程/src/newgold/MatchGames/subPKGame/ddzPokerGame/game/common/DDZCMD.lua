local _M = {}

_M.MAX_HANDCOUNT    = 16        -- 最大手牌张数
_M.CARD_COUNT       = 48        -- 扑克总数量

_M.MAX_JOKER            = 0x42      -- 大王牌
_M.MINI_JOKER           = 0x41      -- 小王牌


-- 出牌类型
_M.OUTTYPE_SAN_DA_BI_ZHUA   = -5                -- 三大必抓
_M.OUTTYPE_BAODAN_MUST_MAX  = -4                -- 报单必须出最大
_M.OUTTYPE_UNSELECTED_CARD  = -3                -- 未选牌
_M.OUTTYPE_MUST_HEI3        = -2                -- 必须先出黑桃三
_M.OUTTYPE_ERROR			= -1				-- 错误类型	
_M.OUTTYPE_NOCARD			=  0				-- 上家没有出牌，重新出牌
_M.OUTTYPE_SINGLE			=  1				-- 单牌类型
_M.OUTTYPE_DOUBLE			=  2				-- 对子类型
_M.OUTTYPE_DOUBLELINK		=  3				-- 连对类型
_M.OUTTYPE_THREEWITHTWO 	=  4				-- 三带二类型
_M.OUTTYPE_FEIJI	        =  5				-- 飞机不带
_M.OUTTYPE_FEIJI_DAN	    =  6				-- 飞机带单类型
_M.OUTTYPE_FEIJI_DUI		=  7				-- 飞机带对类型
_M.OUTTYPE_SHUNZI			=  8				-- 顺子类型
_M.OUTTYPE_BOMBAAA			=  9				-- 三A炸弹类型
_M.OUTTYPE_BOMB 			=  10				-- 四炸类型
_M.OUTTYPE_SIDAISAN         =  11                -- 四带三类型
_M.OUTTYPE_SIDAIER          =  12               -- 四带二类型
_M.OUTTYPE_SIDAIERDUI       =  13               -- 四带二对类型
_M.OUTTYPE_SIDAIYI          =  14               -- 四带一类型
_M.OUTTYPE_THREEWITHONE     =  15               -- 三带一张类型
_M.OUTTYPE_THREE            =  16               -- 三张不带类型
_M.OUTTYPE_WANGZHA          =  17               -- 王炸
_M.OUTTYPE_CHUNTIAN         =  18               -- 春天

_M.PLAYER_CALL_DZ           = 205               -- 玩家叫地主
_M.PLAYER_NO_CALL           = 206               -- 玩家不叫地主
_M.PLAYER_ROB_DZ            = 207               -- 玩家抢地主
_M.PLAYER_NO_ROB            = 208               -- 玩家不抢地主

_M.PLAYER_FUJI              = 200               -- 玩家被伏击
_M.PLAYER_DA_PAI            = 201               -- 大过上家牌
_M.PLAYER_YAO_BU_QI         = 202               -- 要不起上家牌
_M.ALERR_SOUND              = 203               -- 警告声音
_M.ALARM_CLOCK              = 204               -- 显示闹钟


_M.DOWN_TIME                = 15                -- 倒计时时间

_M.OPERATE_PASS     = 1         -- 打不过类型
_M.OPERATE_MUSTOUT  = 2         -- 必出类型

_M.BTNOPERATE_PASS      = 101         -- 不出按钮
_M.BTNOPERATE_OUT       = 102         -- 出牌
_M.BTNOPERATE_TIPS      = 103         -- 提示
_M.BTNOPERATE_RESET     = 104         -- 重置
_M.BTNOPERATE_ROB_DZ    = 105         -- 抢地主
_M.BTNOPERATE_NO_ROB    = 106         -- 不抢
_M.BTNOPERATE_CALL_DZ   = 107         -- 叫地主
_M.BTNOPERATE_NO_CALL   = 108         -- 不叫

_M.BTNOPERATE_JIA_BEI   = 109         -- 加倍
_M.BTNOPERATE_JIA_BEI_NO   = 110

_M.BTNOPERATE_JIAO_FEN_1   = 111      -- 叫分 1
_M.BTNOPERATE_JIAO_FEN_2   = 112
_M.BTNOPERATE_JIAO_FEN_3   = 113


_M.WARN_CARDNUM = 1             -- 警告时临界张数

_M.GAME_MODEL_RECORD    =   -1  -- 回放模式
_M.GAME_MODEL_NORMAL    =   0   -- 正常玩牌模式

_M.DRAW_FACECARD    =   1       -- 绘制正面扑克
_M.DRAW_BGCARD      =   2       -- 绘制背面扑克

_M.SENDCARD_MODEL = {5,5,6}

_M.OTHER_HANDCARD_SCALE = 0.3

-- 按钮状态
_M.OPERATION_BTN_STATE_PASS     = 1     -- 玩家显示要不起按钮
_M.OPERATION_BTN_STATE_FIRST    = 2     -- 玩家首出按钮
_M.OPERATION_BTN_STATE_SECOND   = 3     -- 玩家跟出按钮
_M.OPERATION_BTN_STATE_HIDE     = 4     -- 隐藏玩家按钮
_M.OPERATION_BTN_STATE_CALL_DZ  = 5     -- 玩家叫地主按钮
_M.OPERATION_BTN_STATE_ROB_DZ   = 6     -- 玩家抢地主按钮

_M.OPERATION_BTN_STATE_JIAO_FEN  = 7     -- 玩家叫分按钮
_M.OPERATION_BTN_STATE_JIA_BEI   = 8     -- 玩家加倍按钮


_M.CARDPOSITION = {
    -- 自己
    [1] = {
        
    },
    -- 右家
    [2] = {

    },
    -- 对家
    [3] = {

    },
    -- 左家
    [4] = {

    },
}

return _M