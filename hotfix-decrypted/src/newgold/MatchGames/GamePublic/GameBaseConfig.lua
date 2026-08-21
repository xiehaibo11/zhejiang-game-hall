local _M = {}

_M.GAME_UNKOWN    = -1       -- 未知游戏状态
_M.GAME_WAIT        = 0        -- 游戏等待界面
_M.GAME_PALY        = 1        -- 游戏进行中
_M.GAME_END        = 2        -- 游戏小局结束
_M.GAME_OVER        = 3        -- 游戏大结束

_M.GameDefaultConfig = {
    -- 麻将默认加载路径
    [g_gameConstant.GAME_TYPE_MJ] = {
        gameBasePath = "newgold.MatchGames.subMjGame.MJGamePublic.GameBase",
        gameLogPath = "newgold.MatchGames.subMjGame.MJGamePublic.GameLog",
        gameMainPath = "newgold.MatchGames.subMjGame.MJGamePublic.GameMainView",
        headViewPath = "newgold.MatchGames.GamePublic.HeadImgView"
    },
    -- 扑克默认加载路径
    [g_gameConstant.GAME_TYPE_POKER] = {
        gameBasePath = "newgold.MatchGames.subMjGame.MJGamePublic.GameBase",
        gameLogPath = "newgold.MatchGames.subMjGame.MJGamePublic.GameLog",
    },
    -- 字牌默认加载路径
    [g_gameConstant.GAME_TYPE_ZIPAI] = {
        gameBasePath = "newgold.MatchGames.subMjGame.MJGamePublic.GameBase",
        gameLogPath = "newgold.MatchGames.subMjGame.MJGamePublic.GameLog",
    },
}

_M.GamePathData = {
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK] = {
        path        = "newgold.MatchGames.subPKGame.pdkPokerGame.game", -- 游戏根目录
        baseFile    = "PDKGameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "PDKGameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "PDKGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P] = {
        path        = "newgold.MatchGames.subPKGame.pdkPokerGame.game", -- 游戏根目录
        baseFile    = "PDKGameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "PDKGameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "PDKGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P_HT3] = {            --跑得快黑桃3先出模式
        path        = "newgold.MatchGames.subPKGame.pdkPokerGame.game", -- 游戏根目录
        baseFile    = "PDKGameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "PDKGameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "PDKGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_15Z] = {              -- 跑得快15张
        path        = "newgold.MatchGames.subPKGame.pdkPokerGame.game", -- 游戏根目录
        baseFile    = "PDKGameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "PDKGameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "PDKGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_CHONGZHOU] = {              -- 崇州跑得快
        path        = "app.subGame.pdkChongzhou", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "PDKGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ] = {
        path        = "newgold.MatchGames.subPKGame.ddzPokerGame.game", -- 游戏根目录
        baseFile    = "DDZGameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "DDZGameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "DDZGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_LZ] = {
        path        = "newgold.MatchGames.subPKGame.ddzLaiZiPokerGame.game", -- 游戏根目录
        baseFile    = "DDZGameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "DDZGameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "DDZGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_HDZ] = {              -- 昏地主
        path        = "app.subGame.ddzHundizhu", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "HDZGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_2P] = {
        path        = "app.subGame.ddz2p", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "GameResultLayer", -- 小计分
        bigResult = "GameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SC_LSMJ] = {
        path        = "newgold.MatchGames.subMjGame.linshuiMjGame.game", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = nil, --"GameLog",                    -- 回放
        smallResult = "GameResultLayer", -- 小计分
        bigResult = nil, -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_DEYANG] = {              -- 德阳跑得快
        path        = "app.subGame.pdkDeYang", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = nil, -- 小计分
        bigResult = "PDKGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ] = {
        path        = "app.subGame.pzhMjGame", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "GameResultLayer", -- 小计分
        bigResult = nil, -- 大计分
        gameMainView = "GameMainView",
        headImgView = "HeadImgView",
    },
    [g_gameConstant.GAME_PLAY_RULE_SC_MJ_NANCHONG] = {
        path        = "app.subGame.mjNanchong", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "GameResultLayer", -- 小计分
        bigResult = "GameBigResultLayer", -- 大计分
        gameMainView = "GameMainView",
        headImgView = "HeadImgView",
    },
    [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ] = {
        path        = "app.subGame.dgkMjGame", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "DGKTFGameResultLayer", -- 小计分
        bigResult = nil, -- 大计分
        gameMainView = "GameMainView",
        headImgView = "HeadImgView",
    },
    [g_gameConstant.GAME_PLAY_RULE_SC_YJ] = {
        path        = "app.subGame.yjMjGame", --"newgold.MatchGames.subMjGame.yaoJiMJ",  -- 游戏根目录
        baseFile    = "UIGameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "UIGameResultLayer", -- 小计分
        bigResult = "UIGameBigResultLayer", -- 大计分
        gameMainView = "UIGameMainView",
        headImgView = "HeadImgView",
    },
    [g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF] = {
        path        = "newgold.MatchGames.subMjGame.rcMjGame", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        logFile    = "GameLog", -- 回放
        gameMainView = "GameMainView",
    },
    [g_gameConstant.GAME_PLAY_RULE_SCCP_DSS] = {
        path        = "app.subGame.dssCpGame", -- 游戏根目录
        baseFile    = "GameBase", -- 正常游戏
        logFile    = "GameLog", -- 回放
        smallResult = "ZPGameResultLayer", -- 小计分
        bigResult = "ZPGameBigResultLayer", -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7] = {
        path        = "app.subGame.xz7zMjGame", -- 游戏根目录 血战7张
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "GameResultLayer", -- 小计分
        bigResult = nil, -- 大计分
    },
    [g_gameConstant.GAME_PLAY_RULE_SC_MJ_MIANYANG] = {
        path        = "app.subGame.myMjGame", -- 游戏根目录 绵阳麻将
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "GameResultLayer", -- 小计分
        bigResult = "GameBigResultLayer", -- 大计分
        gameMainView = "GameMainView",
        headImgView = "HeadImgView",
    },
    [g_gameConstant.GAME_PLAY_RULE_SC_GAMJ] = {
        path        = "app.subGame.gaMjGame", -- 游戏根目录 广安麻将
        baseFile    = "GameBase", -- 正常游戏
        waitFile    = nil, -- 是否有等待界面，若有，则添加到场景中去，并在gamebase层级之上
        logFile    = "GameLog", -- 回放
        smallResult = "GameResultLayer", -- 小计分
        bigResult = nil, -- 大计分
    },
}


-- 桌面换肤配置数据
_M.GameDeskBGConfig = {
-- [g_gameConstant.GAME_QUAN_ZHOU] = {
--     rootPath    = "bigImg/",                -- 根目录
--     format      = "qzgame_bg%d.jpg",        -- 文件名称，格式：name_%d.png
--     startIndex  = 0,                        -- %d开始的下标数值
--     endIndex    = 3,                        -- %d最后的下标数值
--     delfault    = 0,                        -- 默认的桌面图片显示索引
-- },      
}

g_subGameType = {
    [17] = 0
}

-- 获取游戏VIP场启动文件
function _M.getNormalGamePath(gameIndex)
    local gameBase = nil
    local rootPath = _M.getCurrGameRootPath(gameIndex)
    -- 若不存在就加载默认的对应游戏
    if not rootPath or not rootPath.path or not rootPath.baseFile then
        local gameType = g_subGameType[gameIndex]
        if gameType and _M.GameDefaultConfig[gameType] then
            gameBase = _M.GameDefaultConfig[gameType].gameBasePath
        end
    else
        gameBase = rootPath.path .. "." .. rootPath.baseFile
    end

    if gameBase == nil then
        assert(gameBase ~= nil, " Not found gameBase file")
    end
    return gameBase
end

-- 获取游戏回放启动文件
function _M.getLogGamePath(gameIndex)
    local gameLog = nil
    local rootPath = _M.getCurrGameRootPath(gameIndex)
    -- 若不存在就加载默认的对应游戏
    if not rootPath or not rootPath.path or not rootPath.logFile then
        local gameType = g_subGameType[gameIndex]
        if gameType and _M.GameDefaultConfig[gameType] then
            gameLog = _M.GameDefaultConfig[gameType].gameLogPath
        end
    else
        gameLog = rootPath.path .. "." .. rootPath.logFile
    end

    if gameLog == nil then
        assert(gameLog ~= nil, " Not found gameLog file")
    end
    return gameLog
end

-- 获取对应等待界面
function _M.getGameWaiteFile(gameIndex)
    local gameBase = nil
    local rootPath = _M.getCurrGameRootPath(gameIndex)
    -- 若不存在就加载默认的对应游戏
    if not rootPath or not rootPath.waitFile then
        local gameType = g_subGameType[gameIndex]
        if gameType and _M.GameDefaultConfig[gameType] then
            gameBase = _M.GameDefaultConfig[gameType].gameWaitePath
        end
    else
        gameBase = rootPath.path .. "." .. rootPath.waitFile
    end

    return gameBase
end

function _M.getGameMainFile(gameIndex)
    local gameMain = nil
    local rootPath = _M.getCurrGameRootPath(gameIndex)
    -- 若不存在就加载默认的对应游戏
    if not rootPath or not rootPath.gameMainView then
        local gameType = g_subGameType[gameIndex]
        if gameType and _M.GameDefaultConfig[gameType] then
            gameMain = _M.GameDefaultConfig[gameType].gameMainPath
        end
    else
        gameMain = rootPath.path .. "." .. rootPath.gameMainView
    end

    return gameMain
end

function _M.getHeadViewFile(gameIndex)
    local viewFile = nil
    local rootPath = _M.getCurrGameRootPath(gameIndex)
    -- 若不存在就加载默认的对应游戏
    if not rootPath or not rootPath.headImgView then
        local gameType = g_subGameType[gameIndex]
        if gameType and _M.GameDefaultConfig[gameType] then
            viewFile = _M.GameDefaultConfig[gameType].headViewPath
        end
    else
        viewFile = rootPath.path .. "." .. rootPath.headImgView
    end

    return viewFile
end

-- 获取游戏根路径
function _M.getCurrGameRootPath(gameIndex)
    if _M.GamePathData[gameIndex] then
        return _M.GamePathData[gameIndex]
    end
end

-- 获取正常游戏根目录
function _M.getGameBasePath(gameIndex)
    local rootPath = _M.GamePathData[gameIndex]
    if rootPath then
        return rootPath.path
    end
end

-- 获取游戏回放根目录
function _M.getGameLogPath(gameIndex)
    local rootPath = _M.GamePathData[gameIndex]
    if rootPath then
        return rootPath.logFile
    end
end


-- 获取小局计分根目录
function _M.getGameSmallResultPath(gameIndex)
    local rootPath = _M.GamePathData[gameIndex]
    if rootPath then
        return rootPath.smallResult
    end
end

-- 获取小大局计分根目录
function _M.getGameBigResultPath(gameIndex)
    local rootPath = _M.GamePathData[gameIndex]
    if rootPath then
        return (rootPath.bigResult and rootPath.path and table.concat({ rootPath.path, ".", rootPath.bigResult })) or rootPath.bigResult
    end
end


return _M  n;  