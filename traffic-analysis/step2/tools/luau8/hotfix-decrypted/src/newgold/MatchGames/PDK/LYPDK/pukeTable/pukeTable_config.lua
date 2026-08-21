--ganpengjin
--预加载Lua脚本文件
local preLoadpukeTableConfigClass = function ()
    -- body
    local require_files_list = { --文件列表
        "newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTableLeft",
        "newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTableMy",
        "newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTableOpp",
        "newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTableRight",
        "newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTestTable", -- 消息类
    }

    for i,v in ipairs(require_files_list) do
        require(v);
    end 
end

preLoadpukeTableConfigClass();d