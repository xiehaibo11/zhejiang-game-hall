local GameDefine = CF.gameClass("GameDefine", "game.GameBase.Define.GameDefine")

GameDefine.TUOGUAN = {
	START = 1,
	CLOSE = 0
}

GameDefine.MAX_HAND_COUNT_TYPE = {
    EIGHT = 8,
    FOURTEEN = 14,
    SEVENTEEN = 17
}

GameDefine.MAH_DIVIDED = 16

GameDefine.MAH_FLOWER = {
    NONE    = 0,    -- 空
    WAN     = 1,    -- 万
    TIAO    = 2,    -- 条
    TONG    = 3,    -- 筒
    FENG    = 4,    -- 风
    JIAN    = 5,    -- 箭
    HUA     = 6,    -- 花
    BACK    = 7,    -- 背（空白牌面、牌背、财神归入此类）
    COUNT   = 8     -- 花色数量
}

GameDefine.MAH_VALUE = {
    NONE                = 0,                                                                   -- 空麻将值
    WAN_1               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 1),              -- 一万
    WAN_2               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 2),              -- 二万
    WAN_3               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 3),              -- 三万
    WAN_4               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 4),              -- 四万
    WAN_5               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 5),              -- 五万
    WAN_6               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 6),              -- 六万
    WAN_7               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 7),              -- 七万
    WAN_8               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 8),              -- 八万
    WAN_9               = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 9),              -- 九万

    TIAO_1              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 1),             -- 一条
    TIAO_2              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 2),             -- 二条
    TIAO_3              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 3),             -- 三条
    TIAO_4              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 4),             -- 四条
    TIAO_5              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 5),             -- 五条
    TIAO_6              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 6),             -- 六条
    TIAO_7              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 7),             -- 七条
    TIAO_8              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 8),             -- 八条
    TIAO_9              = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 9),             -- 九条

    TONG_1              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 1),             -- 一筒
    TONG_2              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 2),             -- 二筒
    TONG_3              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 3),             -- 三筒
    TONG_4              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 4),             -- 四筒
    TONG_5              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 5),             -- 五筒
    TONG_6              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 6),             -- 六筒
    TONG_7              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 7),             -- 七筒
    TONG_8              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 8),             -- 八筒
    TONG_9              = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 9),             -- 九筒

    FENG_DONG           = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 1),             -- 东风
    FENG_NAN            = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 2),             -- 南风
    FENG_XI             = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 3),             -- 西风
    FENG_BEI            = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 4),             -- 北风
    JIAN_ZHONG          = (GameDefine.MAH_FLOWER.JIAN * GameDefine.MAH_DIVIDED + 1),             -- 红中
    JIAN_FA             = (GameDefine.MAH_FLOWER.JIAN * GameDefine.MAH_DIVIDED + 2),             -- 发财
    JIAN_BAI            = (GameDefine.MAH_FLOWER.JIAN * GameDefine.MAH_DIVIDED + 3),             -- 白板
    
    HUA_MEI             = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 1),              -- 梅花
    HUA_LAN             = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 2),              -- 兰花
    HUA_ZU              = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 3),              -- 竹花
    HUA_JU              = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 4),              -- 菊花
    HUA_CHUN            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 5),              -- 春花
    HUA_XIA             = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 6),              -- 夏花
    HUA_QIU             = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 7),              -- 秋花
    HUA_DONG            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 8),              -- 冬花
    HUA_DA_BAI_BAN      = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 9),              -- 大白板
    HUA_LAO_SHU         = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 10),             -- 老鼠
    HUA_MAO             = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 11),             -- 猫
    HUA_CAI_SHEN        = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 12),             -- 财神
    HUA_JIN_YUAN_BAO    = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 13),             -- 金元宝

    FACE                = (GameDefine.MAH_FLOWER.BACK * GameDefine.MAH_DIVIDED + 1),             -- 空白牌面
    BACK                = (GameDefine.MAH_FLOWER.BACK * GameDefine.MAH_DIVIDED + 2),             -- 牌背
    JOKER               = (GameDefine.MAH_FLOWER.BACK * GameDefine.MAH_DIVIDED + 6),             -- 财神
}

GameDefine.ACTION = {
    NONE    = 0,
    PASS    = 1,    -- 过
    CHOW    = 2,    -- 吃
    PONG    = 3,    -- 碰
    KONG    = 4,    -- 杠
    HU      = 5,    -- 胡
    FLOWER  = 6,    -- 补花
    TING    = 7,    -- 听
}

GameDefine.POWER = 
{
    NONE    = 0,            -- 无
    CANCEL  = 0x001,        -- 过
    PLAY    = 0x002,        -- 出
    CHOW    = 0x004,        -- 吃
    PUNG    = 0x008,        -- 碰
    HU      = 0x010,        -- 和
    MKONG   = 0x020,        -- 直杠
    CKONG   = 0x040,        -- 暗杠
    TKONG   = 0x080,        -- 补杠
    TWAIT   = 0x100,        -- 抓听
    CWAIT   = 0x200,        -- 吃听
    PWAIT   = 0x400,        -- 碰听
    REPLACE = 0x800,        -- 补
}

GameDefine.POWER_TO_ACTION = 
{
    [GameDefine.POWER.NONE]     = GameDefine.ACTION.NONE,
    [GameDefine.POWER.CANCEL]   = GameDefine.ACTION.PASS,     -- 过
    [GameDefine.POWER.CHOW]     = GameDefine.ACTION.CHOW,     -- 吃
    [GameDefine.POWER.PUNG]     = GameDefine.ACTION.PONG,     -- 碰
    [GameDefine.POWER.HU]       = GameDefine.ACTION.HU,       -- 和
    [GameDefine.POWER.MKONG]    = GameDefine.ACTION.KONG,     -- 直杠
    [GameDefine.POWER.CKONG]    = GameDefine.ACTION.KONG,     -- 暗杠
    [GameDefine.POWER.TKONG]    = GameDefine.ACTION.KONG,     -- 补杠
    [GameDefine.POWER.TWAIT]    = GameDefine.ACTION.TING,     -- 抓听
    [GameDefine.POWER.CWAIT]    = GameDefine.ACTION.TING,     -- 吃听
    [GameDefine.POWER.PWAIT]    = GameDefine.ACTION.TING,     -- 碰听
}

GameDefine.COMB_FLAG = 
{
    NONE    = 0,
    CHOW    = 1,    -- 吃顺子
    PUNG    = 2,    -- 碰刻子
    MKONG   = 3,    -- 明杠子
    CKONG   = 4,    -- 暗杠子
    TKONG   = 5,    -- 补杠子
    CCHOW   = 6,    -- 暗顺子
    CPUNG   = 7,    -- 暗刻子
    LKONG   = 8,    -- 乱杠子
    DOUBLE  = 9,    -- 对子、将
    JOKCMB  = 10,   -- 财神组
    JOKDBL  = 11,   -- 财神将
    HAND    = 12,   -- 整手牌
    SINGLE  = 13,   -- 单张 
    COUNT   = 14
}

GameDefine.COMB_TYPE = {
    NONE            = 0,
    CHOW            = 1,    -- 吃（顺子）
    PONG            = 2,    -- 碰（刻子）
    EXPOSED_KONG    = 3,    -- 明杠
    CONCEALED_KONG  = 4,    -- 暗杠
    FILL_KONG       = 5,    -- 补杠
    DOUBLE          = 6,    -- 对子
}

GameDefine.COMB_FLAG_TO_TYPE = 
{
    [GameDefine.COMB_FLAG.CHOW]    = GameDefine.COMB_TYPE.CHOW,
    [GameDefine.COMB_FLAG.PUNG]    = GameDefine.COMB_TYPE.PONG,
    [GameDefine.COMB_FLAG.MKONG]   = GameDefine.COMB_TYPE.EXPOSED_KONG,
    [GameDefine.COMB_FLAG.CKONG]   = GameDefine.COMB_TYPE.CONCEALED_KONG,
    [GameDefine.COMB_FLAG.TKONG]   = GameDefine.COMB_TYPE.FILL_KONG,
    [GameDefine.COMB_FLAG.CCHOW]   = GameDefine.COMB_TYPE.CHOW,
    [GameDefine.COMB_FLAG.CPUNG]   = GameDefine.COMB_TYPE.PONG,
    [GameDefine.COMB_FLAG.DOUBLE]  = GameDefine.COMB_TYPE.DOUBLE,
}

-- 胡牌类型
GameDefine.HU_TYPE = 
{
    NONE        = 0,
    TAKE_SELF   = 1,    -- 自摸
    TAKE_OTHER  = 2,    -- 点炮
    ROB_KONG    = 3,    -- 抢杠
}

GameDefine.END_TYPE = 
{
    ET_NONE = 0,        -- 逃跑
    ET_SELF = 1,        -- 自摸 
    ET_DISCARD = 2,     -- 点炮                                 
    ET_ROBKONG = 3,     -- 抢杠  
    ET_DRAWN = 5        -- 流局
}

-- 出牌区摆放方式
GameDefine.OUTMAHS_PUT_TYPE = {
    FOUR_DIRECTION = 1,   -- 四方出牌显示
    TOGETHER = 2,         -- 所有牌一起摆放
}

--游戏步骤
GameDefine.ENUM_GAME_STEP = 
{
    GAME_STEP_NONE = 0,                                         
    GAME_STEP_START_GAME = 1,                   -- 开始游戏
    GAME_STEP_ANTE = 2,
    GAME_STEP_SPECF_MAH = 3,                    -- 做牌
    GAME_STEP_THROW_CHIP_1 = 4,                 -- 掷骰子(定位骰子)
    GAME_STEP_THROW_CHIP_2 = 5,                 -- 掷骰子(开牌骰子)
    GAME_STEP_TAKE_FIRST = 6,                   -- 抓牌
    GAME_STEP_THROW_CHIP_3 = 7,                 -- 掷骰子(财神骰子)
    GAME_STEP_OPEN_MAH = 8,                     -- 翻开
    GAME_STEP_FIRST_REPLACE = 9,                -- 刚开始的补花
    GAME_STEP_PLAY_MAH = 10,                     -- 开始打麻将
    GAME_STEP_WIN_LOST = 11,                     -- 计算
    GAME_STEP_END_GAME = 12,                     -- 结束游戏
    GAME_STEP_SHUFFLE = 13, 
    GAME_STEP_ADD_MULTIPLE = 14,                 -- 加倍
    GAME_STEP_ADD_MULTIPLE_END = 15,             -- 加倍结束
    GAME_STEP_COUNT = 16, 
    GAME_STEP_USER = 100
}

GameDefine.GAME_STEP = GameDefine.ENUM_GAME_STEP

GameDefine.MDDType = 
{
    MAIDI = 1,
    DINGDI = 2,
}

GameDefine.MDDFlag = 
{
    MAIDI = 0,
    DINGDI = 1,
}

GameDefine.LOST_END_TYPE =
{
    NONE = -1,          -- 无
    BAOPAI = 0,         -- 包牌
    REBACKKUNG = 1,     -- 退杠
    THREEBACK = 2,      -- 三背
    DIANPAO = 3,        -- 点炮
    BAOPEI = 4,         -- 包赔
    FANGGANG = 5,       -- 放杠
    ZIMO = 6,           -- 自摸
}

GameDefine.MAH_TYPE = {
    STAND_FACE_FORWARD              = 1,    -- 站立牌，牌面朝前
    STAND_FACE_BACKWARD             = 2,    -- 站立牌，牌面朝后
    STAND_FACE_TOLEFT               = 3,    -- 站立牌，牌面朝左
    STAND_FACE_TORIGHT              = 4,    -- 站立牌，牌面朝右
    LIE_FACE_UP_VERTICAL_TOUP       = 5,    -- 躺倒牌，牌面朝上，竖直向上
    LIE_FACE_UP_VERTICAL_TODOWN     = 6,    -- 躺倒牌，牌面朝上，竖直向下
    LIE_FACE_UP_HORIZONTAL_TOLEFT   = 7,    -- 躺倒牌，牌面朝上，水平朝左
    LIE_FACE_UP_HORIZONTAL_TORIGHT  = 8,    -- 躺倒牌，牌面朝上，水平朝右
    LIE_FACE_DOWN_VERTICAL          = 9,    -- 躺倒牌，牌面朝下，竖直向上
    LIE_FACE_DOWN_HORIZONTAL        = 10,   -- 躺倒牌，牌面朝下，水平朝左
    LIE_FACE_DOWN_VERTICAL_TODOWN   = 11,   -- 躺倒牌，牌面朝下，竖直向下
    LIE_FACE_DOWN_HORIZONTAL_TORIGHT= 12,   -- 躺倒牌，牌面朝下，水平朝右
}

GameDefine.MAH_SHAPE_TYPE = {
    CIRCLE = 1,    --角为圆弧状
    SQUARE = 2,    --角为直角状
}

GameDefine.MAH_LIGHT_TYPE = {
    LIGHT = 1,    --亮牌面
    DARK = 2,     --暗牌面
    CHANGECARD = 3,--换牌卡
}

GameDefine.MAH_BACK_COLOR_TYPE = {
    ORANGE = 1,     --橙色
    YELLOW = 2,     --黄色
    GREEN = 3,      --绿色
    BLUE = 4,       --蓝色
    CHANGECARD = 5, --换牌卡
    XGSJ = 6,       -- 霞光胜境
}

GameDefine.MAH_FACE_TYPE = {
    FACE_1 = 1,
    FACE_2 = 2,
    FACE_3 = 3,
}

GameDefine.COMB_LIE_TYPE = {
    ARROW_BY_ICON = 1,  -- 图标显示喂牌方向
    ARROW_BY_MAH = 2,   -- 倒牌显示喂牌方向
}

-- 手牌摆放类型
GameDefine.HANDAREA_PLACE_TYPE = {
    COMB_AT_LEFT = 1,   -- 牌组在左手边
    COMB_AT_RIGHT = 2,  -- 牌组在右手边
}

-- 手牌出牌方式
GameDefine.HANDMAHS_PLAY_TYPE = {
    SINGLE_CLICK = 1,   -- 单击
    DOUBLE_CLICK = 2,   -- 双击
}

--麻将组标志
GameDefine.COM_MAH_FLAG = 
{
    CMF_NONE = 0,
    CMF_CHOW = 1,                                                       -- 吃顺子
    CMF_PUNG = 2,                                                       -- 碰刻子
    CMF_MKONG = 3,                                                      -- 明杠子
    CMF_CKONG = 4,                                                      -- 暗杠子
    CMF_TKONG = 5,                                                      -- 补杠子
    CMF_CCHOW = 6,                                                      -- 暗顺子
    CMF_CPUNG = 7,                                                      -- 暗刻子
    CMF_LKONG = 8,                                                      -- 乱杠子
    CMF_DOUBLE = 9,                                                     -- 对子、将
    CMF_JOKCMB = 10,                                                     -- 财神组
    CMF_JOKDBL = 11,                                                     -- 财神将
    CMF_HAND = 12,                                                       -- 整手牌
    CMF_SINGLE = 13,                                                     -- 单张 
    CMF_COUNT = 14
}

return GameDefine  �8  