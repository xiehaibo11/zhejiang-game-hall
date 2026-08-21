--[[
    --配置废牌堆的参数 
    --游戏是否开启
    author:{xiezhihan}
    time:2021-12-01 16:23:33
]]
local UIMahConfigDeadArea = {}

--非四方排布的默认参数
UIMahConfigDeadArea.OutMahsCountConf = {
    SingleLineMaxCount = 18,
    EmptyCount = {0,0,0,0,0,0},
}

--四方排布的默认参数 
UIMahConfigDeadArea.PlayerOutAreaSingleLineMaxCount =
{
    ["DEFAULT"] = 8,
    ["PEOPLE_TWO"] = 18,
}

UIMahConfigDeadArea.PlayerOutAreaMaxLineCount =
{
    ["DEFAULT"] = 3,
    ["PEOPLE_TWO"] = 3,
}

--默认开启查看废牌的游戏区域
UIMahConfigDeadArea.IsShowDeadArea = 
{
	[30287] = {gameName = "广式二人",playerCount = 2,IsOpen = "YES"},		
}


return UIMahConfigDeadArea�