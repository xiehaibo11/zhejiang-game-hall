local _M = {}

_M.MAX_HANDCOUNT    = 16        -- 最大手牌张数
_M.CARD_COUNT       = 48        -- 扑克总数量


-- 出牌类型
_M.OUTTYPE_ERROR			= -1				-- 错误类型	
_M.OUTTYPE_NOCARD			=  0				-- 上家没有出牌，重新出牌
_M.OUTTYPE_SINGLE			=  1				-- 单牌类型
_M.OUTTYPE_DOUBLE			=  2				-- 对子类型
_M.OUTTYPE_DOUBLELINK		=  3				-- 连对类型
_M.OUTTYPE_THREEWITHTWO 	=  4				-- 三带二类型
_M.OUTTYPE_FEIJI			=  5				-- 飞机类型
_M.OUTTYPE_SHUNZI			=  6				-- 顺子类型
_M.OUTTYPE_BOMBAAA			=  7				-- 三A炸弹类型
_M.OUTTYPE_BOMB 			=  8				-- 四炸类型
_M.OUTTYPE_SIDAISAN         =  9                -- 四带三类型
_M.OUTTYPE_SIDAIER          =  10               -- 四带二类型
_M.OUTTYPE_SIDAIYI          =  11               -- 四带一类型
_M.OUTTYPE_THREEWITHONE     =  12               -- 三带一张类型
_M.OUTTYPE_THREE            =  13               -- 三张不带类型
_M.OUTTYPE_FEIJINOMORE      =  14               -- 飞机少带类型
_M.OUTTYPE_BOMB333			=  15				-- 三三炸弹类型
_M.OUTTYPE_BOMBLINK			=  16				-- 连对炸弹类型
_M.OUTTYPE_TONGHUASHUN		=  17				-- 掼蛋同花顺炸弹类型
_M.OUTTYPE_510K		        =  18				--5 10 K 
_M.OUTTYPE_TONGXIN		    =  19				--同心牌
_M.OUTTYPE_SKING		    =  20				--小王
_M.OUTTYPE_BKING		    =  21				--大王
_M.OUTTYPE_SDKING		    =  22				--对小王
_M.OUTTYPE_BDKING		    =  23				--对大王

_M.PLAYER_FUJI              = 200               -- 玩家被春天
_M.PLAYER_DA_PAI            = 201               -- 大过上家牌
_M.PLAYER_YAO_BU_QI         = 202               -- 要不起上家牌
_M.ALERR_SOUND              = 203               -- 警告声音
_M.PLAYER_BADADUI           = 204               -- 八大对



_M.OPERATE_PASS                 = 1         -- 打不过类型
_M.OPERATE_MUSTOUT              = 2         -- 必出类型
_M.OPERATE_QIPAI                = 3          --弃牌类型

_M.BTNOPERATE_PASS              = 1         -- 不出按钮
_M.BTNOPERATE_OUT               = 2         -- 
_M.BTNOPERATE_TIPS              = 3
_M.BTNOPERATE_RESET             = 4
_M.BTNOPERATE_CANCELTUOGUAN     = 5         -- 托管
_M.BTNOPERATE_CANCEL            = 6          --过

_M.WARN_CARDNUM = 1             -- 警告时临界张数

_M.GAME_MODEL_RECORD    =   -1  -- 回放模式
_M.GAME_MODEL_NORMAL    =   0   -- 正常玩牌模式

_M.DRAW_FACECARD    =   1       -- 绘制正面扑克
_M.DRAW_BGCARD      =   2       -- 绘制背面扑克
_M.DRAW_SMALL      =   3       -- 绘制背面扑克
_M.DRAW_MIDDLE      =   4       -- 绘制正面中等大小扑克

_M.BAN_JU_DA      =   500       -- 本局打几

_M.SENDCARD_MODEL = {6,5,5}

_M.OTHER_HANDCARD_SCALE = 0.3

return _M