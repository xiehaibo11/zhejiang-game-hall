
--ganpengjn
--Lua文件
local test_mode = 0
if test_mode == 0 then

    --打印日志
    cc.exports.print_log = release_print

    --打印dump
    cc.exports.dump_log  = dump;

    --打印堆栈
    cc.exports.print_debug_stack = function ( error )
        -- body
        release_print(debug.traceback("" .. tostring(error or "")))
    end
else
    cc.exports.print_log = function ( )
        -- body
    end

    cc.exports.dump_log = function ( )
        -- body
    end

    cc.exports.print_debug_stack = function( ... )
        -- body
    end
end

-----------------------------------------------------------------
--预加载Lua脚本文件
local preLoadLYPDKConfigClass = function ()
    -- body
    local require_files_list = { --文件列表
        "newgold.MatchGames.PDK.LYPDK.LYPDKResource",
        "newgold.MatchGames.PDK.LYPDK.LYPDKBigResult",
        "newgold.MatchGames.PDK.LYPDK.LYPDKResultLayer",
        "newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTable_config",
        -- "newgold.MatchGames.PDK.LYPDK.sanfuTable.sanfuTable_config",
        -- "newgold.MatchGames.PDK.LYPDK.liangfuTable.liangfuTable_config",
        -- "newgold.MatchGames.PDK.LYPDK.guandanTable.guandanTable_config",
        -- "newgold.MatchGames.PDK.LYPDK.tuosanziTable.tuosanziTable_config",
        -- "newgold.MatchGames.PDK.LYPDK.ddz.ddzTable.ddzTable_config",
    }

    for i,v in ipairs(require_files_list) do
        require(v);
    end 
end

--初始化龙岩麻将数据
local initLYPDKGame = function ( )
    -- body
    preLoadLYPDKConfigClass();

    --添加缓存数据
    LYPDKResource.preLoadLYPDKRes();
end


--配置类
local LYPDK_config = {}
function LYPDK_config.init_config()
    -- body
    initLYPDKGame();
end

return LYPDK_config;

