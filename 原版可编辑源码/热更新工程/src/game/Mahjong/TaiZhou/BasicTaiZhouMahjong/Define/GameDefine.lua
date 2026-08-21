
local GameDefine = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Define.GameDefine")

--结束时玩家状态
GameDefine.endPlayerState =
{
	EPS_NULL = 0,
	EPS_HU = 1,
	EPS_DISCARD = 2,
	EPS_ROBKONG = 3,
	EPS_GANGSHANGKAIHUA = 4,
	EPS_CHENGBAO = 5,
    EPS_DRAWN = 9,
}

GameDefine.totalResultInfoStr = {
	[30109] = { --台州麻将
		[1] = "自摸次数 ",
		[2] = "接炮次数 ",
		[3] = "点炮次数 ",
		[4] = "包牌次数 ",
		[5] = "腊子次数 ",
	},
	[30110] = { --温岭麻将
		[1] = "自摸次数 ",
		[2] = "接炮次数 ",
		[3] = "放铳次数 ",
		[4] = "包三家次数 ",
		[5] = "腊子次数 ",
	},
	[30111] = { --玉环麻将
		[1] = "自摸次数 ",
		[2] = "接炮次数 ",
		[3] = "放铳次数 ",
		[4] = "包三家次数 ",
		[5] = "腊子次数 ",
	},
	[30112] = { --推倒胡
		[1] = "自摸次数 ",
		[2] = "接炮次数 ",
		[3] = "放铳次数 ",
		[4] = "明杠次数 ",
		[5] = "暗杠次数 ",
	},
	[30113] = { --三门麻将
		[1] = "自摸次数 ",
		[2] = "接炮次数 ",
		[3] = "点炮次数 ",
	},
	[30114] = { --临海麻将
		[1] = "自摸次数 ",
		[2] = "接炮次数 ",
		[3] = "点炮次数 ",
	},
    [30399] = { --大溪麻将
		[1] = "自摸次数 ",
		[2] = "接炮次数 ",
		[3] = "放铳次数 ",
		[4] = "明杠次数 ",
		[5] = "暗杠次数 ",
	},
    [30250] = { --天台三阿磨
		[1] = "自摸次数 ",
		[2] = "点炮次数 ",
		[3] = "接炮次数 ",
	},
}

--提前开局状态标识
GameDefine.EarlyStartFlag = {
	EARLY_START_NONE = 0,   --没有玩家请求提前开局
	EARLY_START_CANCEL = 0, --取消提前开局请求
	EARLY_START_WAIT = 1,       --有玩家请求，正在等待其他玩家选择
	EARLY_START_DISAGREE = 2,   --有玩家不同意
	EARLY_START_AGREE = 3,      --所有玩家同意
	EARLY_START_SUCCESS = 4,    --提前开局成功
	EARLY_START_PLAYERCNT = 5,  --满足椅子数，取消提前开局
}

GameDefine.EarlyStartStatus = {
    DEFAULT = 1,    --待确认
    AGREE = 2,      --同意
    REFUSE = 3,     --拒绝
    REQUEST = 4     --请求开局
}

return GameDefine
