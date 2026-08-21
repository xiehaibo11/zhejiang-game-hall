local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldRoomsDefine = {}

local GOLD_MIN_JOIN = 3000 --最小加入限制

GoldRoomsDefine.GOLD_MIN_JOIN = GOLD_MIN_JOIN
-- 场次等级，写死本地
GoldRoomsDefine.ROOMS = {
    {
        GAMEID = GoldAreaConfig.LZDDZ,
        TITLE = "连炸斗地主",
        LEVEL = {
            {
                name = "初级场", -- 房间名称
                appId = 17804, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 13576, -- 房间id（用于取房间人数）
                base = 10, -- 底分
                minscore = GOLD_MIN_JOIN, -- 最小进入限制
                maxscore = 20000, -- 最大进入限制
                level = 1,
                appIds = { 17804, 17972 }, -- 多房间appids
                roomIds = { 13576, 13580 }, -- 多房间列表
            },
            {
                name = "中级场", -- 房间名称
                appId = 17803, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 13577, -- 房间id（用于取房间人数）
                base = 60, -- 底分
                minscore = 15000, -- 最小进入限制
                maxscore = 300000, -- 最大进入限制
                level = 2
            },
            {
                name = "高级场", -- 房间名称
                appId = 17802, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 13578, -- 房间id（用于取房间人数）
                base = 400, -- 底分
                minscore = 200000, -- 最小进入限制
                maxscore = 12000000, -- 最大进入限制
                level = 3
            },
            {
                name = "至尊场", -- 房间名称
                appId = 17805, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 13579, -- 房间id（用于取房间人数）
                base = 1000, -- 底分
                minscore = 2000000, -- 最小进入限制
                maxscore = -1, -- 最大进入限制
                level = 4
            }
        }
    },
    {
        GAMEID = GoldAreaConfig.MAH_BBXL,
        TITLE = "百变血流",
        LEVEL = {
            {
                name = "初级场", -- 房间名称
                appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 0, -- 房间id（用于取房间人数）
                base = 150, -- 底分
                minscore = 2000, -- 最小进入限制
                maxscore = 100000, -- 最大进入限制
                cost = 500,
                level = 1
            },
            {
                name = "中级场", -- 房间名称
                appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 0, -- 房间id（用于取房间人数）
                base = 500, -- 底分
                minscore = 50000, -- 最小进入限制
                maxscore = 1000000, -- 最大进入限制
                cost = 5000,
                level = 2
            },
            {
                name = "高级场", -- 房间名称
                appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 0, -- 房间id（用于取房间人数）
                base = 2000, -- 底分
                minscore = 300000, -- 最小进入限制
                maxscore = 12000000, -- 最大进入限制
                cost = 30000,
                level = 3
            },
            {
                name = "至尊场", -- 房间名称
                appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                roomId = 0, -- 房间id（用于取房间人数）
                base = 10000, -- 底分
                minscore = 2000000, -- 最小进入限制
                maxscore = -1, -- 最大进入限制
                cost = 200000,
                level = 4
            }
        }
    }
}

if GoldAreaConfig.BridgeIsDebug then
    GoldRoomsDefine.ROOMS = {
        {
            GAMEID = GoldAreaConfig.LZDDZ,
            TITLE = "连炸斗地主",
            LEVEL = {
                {
                    name = "初级场", -- 房间名称
                    appId = 102945, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 102968, -- 房间id（用于取房间人数）
                    base = 10, -- 底分
                    minscore = GOLD_MIN_JOIN, -- 最小进入限制
                    maxscore = 20000, -- 最大进入限制
                    level = 1
                },
                {
                    name = "中级场", -- 房间名称
                    appId = 102948, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 102969, -- 房间id（用于取房间人数）
                    base = 60, -- 底分
                    minscore = 15000, -- 最小进入限制
                    maxscore = 300000, -- 最大进入限制
                    level = 2
                },
                {
                    name = "高级场", -- 房间名称
                    appId = 102949, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 102970, -- 房间id（用于取房间人数）
                    base = 400, -- 底分
                    minscore = 200000, -- 最小进入限制
                    maxscore = 12000000, -- 最大进入限制
                    level = 3
                },
                {
                    name = "至尊场", -- 房间名称
                    appId = 102950, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 102971, -- 房间id（用于取房间人数）
                    base = 1000, -- 底分
                    minscore = 2000000, -- 最小进入限制
                    maxscore = -1, -- 最大进入限制
                    level = 4
                }
            }
        },
        {
            GAMEID = GoldAreaConfig.MAH_BBXL,
            TITLE = "百变血流",
            LEVEL = {
                {
                    name = "初级场", -- 房间名称
                    appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 0, -- 房间id（用于取房间人数）
                    base = 150, -- 底分
                    minscore = 2000, -- 最小进入限制
                    maxscore = 100000, -- 最大进入限制
                    cost = 500,
                    level = 1
                },
                {
                    name = "中级场", -- 房间名称
                    appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 0, -- 房间id（用于取房间人数）
                    base = 500, -- 底分
                    minscore = 50000, -- 最小进入限制
                    maxscore = 1000000, -- 最大进入限制
                    cost = 5000,
                    level = 2
                },
                {
                    name = "高级场", -- 房间名称
                    appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 0, -- 房间id（用于取房间人数）
                    base = 2000, -- 底分
                    minscore = 300000, -- 最小进入限制
                    maxscore = 12000000, -- 最大进入限制
                    cost = 30000,
                    level = 3
                },
                {
                    name = "至尊场", -- 房间名称
                    appId = 0, -- 房间的appId（用于进房间，发协议指定的appId）
                    roomId = 0, -- 房间id（用于取房间人数）
                    base = 10000, -- 底分
                    minscore = 2000000, -- 最小进入限制
                    maxscore = -1, -- 最大进入限制
                    cost = 200000,
                    level = 4
                }
            }
        }
    }
end

return GoldRoomsDefine   %!  