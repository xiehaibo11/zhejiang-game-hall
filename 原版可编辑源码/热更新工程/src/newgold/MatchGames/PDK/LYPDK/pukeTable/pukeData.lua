local _M = {}

_M.GParames = {

    lastOutData = {},           -- 上家出牌数据

    tipsData = {},              -- 提示数据

    handData = {},              -- 手牌数据

    tipsIndex = 1,               -- 提示手牌索引号

    selectData = {},             -- 所选牌数据

    mustOutData = 0,                -- 是否必须出牌

    lastTableID = 0,                -- 上轮玩家出牌的桌子ID

    turnToSelf = false,             -- 是否为自己的牌权
}

-- 初始化游戏参数
function _M.initGParams()

    _M.GParames.lastOutData     = {}        -- 上家出牌数据

    _M.GParames.tipsData        = {}        -- 提示的数据   

    _M.GParames.handData        = {}        -- 手牌数据

    _M.GParames.tipsIndex       = 1         -- 提示的索引

    _M.GParames.selectData      = {}        -- 所选牌数据

    _M.GParames.mustOutData     = 0         -- 是否必须出牌

    _M.GParames.lastTableID = 0

    _M.GParames.turnToSelf = false

end 


return _M
 