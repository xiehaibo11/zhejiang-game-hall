
local GameDefine = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Define.GameDefine")

GameDefine.MAX_HAND_COUNT_TYPE = {
    EIGHT = 8,
    TEN = 10,
    FOURTEEN = 14,
    SEVENTEEN = 17,
    TWENTYONE = 21
}

GameDefine.MAX_FLOWER_COUNT_TYPE = {
    FOUR = 4,
    MAX = 10
}

--结束时玩家状态
GameDefine.endPlayerState =
{
	EPS_NULL = 0,
	EPS_HU = 1,
	EPS_DISCARD = 2,
	EPS_ROBKONG = 3,
	EPS_GANGSHANGKAIHUA = 4,
	EPS_CHENGBAO = 5,
	EPS_TAOHUA = 6,
	EPS_YAPO = 7,
}
GameDefine.endPlayerStatePng = {
    [1] = "tz_settle_icon_1.png",
    [2] = "tz_settle_icon_2.png",
    [3] = "tz_settle_icon_3.png",
    [4] = "tz_settle_icon_4.png",
    [5] = "tz_settle_icon_5.png",
    [6] = "tz_wahua_settle_taohua.png",
    [7] = "tz_wahua_settle_yapo.png",
}

GameDefine.totalResultInfoStr = {
	[30284] = { --挖花
		[1] = "自摸 ",
		[2] = "接炮 ",
		[3] = "点炮 ",
		[4] = "包牌 ",
		[5] = "逃花 ",
        [6] = "压迫 ",
	}
}

GameDefine.windFlagStr = {
    [0] = "tz_wahua_game_tian_flag.png",  -- 天
    [1] = "tz_wahua_game_di_flag.png",  -- 地
    [2] = "tz_wahua_game_yin_flag.png",  -- 银
    [3] = "tz_wahua_game_chang_flag.png",  -- 长
}

GameDefine.windWordStr = {
    [0] = "天",
    [1] = "地",
    [2] = "银",
    [3] = "长",
}

GameDefine.LineType = {
    Single = 1,     --单排
    Double = 2      --双排
}

GameDefine.MAH_DIVIDED = 21
GameDefine.YaoZhangCount = 3    --摇张个数
GameDefine.DoubleCombCount = 5

GameDefine.YAPO_WINLOST =
{
    [0] = "",
    [1] = "打白留白",
    [2] = "杠牌不送",
    [3] = "吃牌不送",
    [4] = "送子不送",
    [5] = "有杠不杠",
    [6] = "过胡不胡",
    [7] = "拆对压迫",
    [8] = "看花不胡",
    [9] = "打花留花",
}

GameDefine.MAH_FLOWER = {
    MS_WH_NONE = 0,            -- 空
    MS_WH_BAI = 1,             -- 白皮
    MS_WH_DOUBLE = 2,          -- 双框
    MS_WH_SINGLE = 3,          -- 单框
    MS_WH_BACK = 4,
    MS_WH_COUNT = 5,
}

GameDefine.FLOWER =
{
    MAH_HUA_BAI = 97,       -- 白皮
    MAH_HUA_CHUN = 98,      -- 春花
    MAH_HUA_XIA = 99,       -- 夏花
    MAH_HUA_QIU = 100,      -- 秋花
    MAH_HUA_DONG = 101,     -- 冬花
    MAH_HUA_MEI = 102,      -- 梅花
    MAH_HUA_LAN = 103,      -- 兰花
    MAH_HUA_ZHU = 104,      -- 竹花
    MAH_HUA_JU = 105,       -- 菊花    
}

GameDefine.ACTION = {
    NONE = 0,
    PASS = 1,
    TAOHUA = 2,
    CHOW = 3,
    TI   = 4,
    KONG = 5,
    HU   = 6,
    FLOWER = 7,
    XIANFLOWER = 8,     -- 献花
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
    [GameDefine.POWER.TWAIT]    = GameDefine.ACTION.TI,
    [GameDefine.POWER.CWAIT]    = GameDefine.ACTION.TI,
}

GameDefine.POWER_TO_COMB_FLAG = {
    [GameDefine.POWER.CHOW] = GameDefine.COMB_FLAG.CHOW,
    [GameDefine.POWER.MKONG] = GameDefine.COMB_FLAG.MKONG,
    [GameDefine.POWER.CKONG] = GameDefine.COMB_FLAG.CKONG,
    [GameDefine.POWER.TKONG] = GameDefine.COMB_FLAG.TKONG,
    [GameDefine.POWER.TWAIT] = GameDefine.COMB_FLAG.CHOW,
    [GameDefine.POWER.CWAIT] = GameDefine.COMB_FLAG.CHOW,
}

GameDefine.HU_TYPE =
{
    NONE = 0,
    TAKE_SELF = 1,
    TAKE_OTHER = 2,
    ROB_KONG = 3,
    TAO_HUA = 4,
    YAPO = 5,
}

return GameDefine
