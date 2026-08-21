--[[
    author:{xiezhihan}
    time:2021-11-18 14:06:32
]]
--麻将是否展示点炮标志
--某些游戏会有番数,ShowPos为了不与其重叠
local tab = {
	MahEndIcon = {
		{ ConfID = 30320, GameName = "文成麻将", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},    
		{ ConfID = 30286, GameName = "龙港麻将", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},    
		{ ConfID = 30315, GameName = "放炮麻将", PackageName = "温州（茶）",isShowDianPao = true,showPos = 1},    
		{ ConfID = 30314, GameName = "温州麻将", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},  
		{ ConfID = 30324, GameName = "永强麻将", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},
		{ ConfID = 30316, GameName = "平阳台炮", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},		
		{ ConfID = 30317, GameName = "灵溪台炮", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},
		{ ConfID = 30322, GameName = "泰顺麻将", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},
		{ ConfID = 30327, GameName = "温州点炮", PackageName = "温州（茶）",isShowDianPao = true,showPos = 3},
		{ ConfID = 30068, GameName = "放炮麻将", PackageName = "熟客温州麻将",isShowDianPao = true,showPos = 1},   
		{ ConfID = 30066, GameName = "温州麻将", PackageName = "熟客温州麻将",isShowDianPao = true,showPos = 3},   
		{ ConfID = 30086, GameName = "永强麻将", PackageName = "熟客温州麻将",isShowDianPao = true,showPos = 3},   
		{ ConfID = 30183, GameName = "点炮麻将", PackageName = "熟客温州麻将",isShowDianPao = true,showPos = 3},   
		{ ConfID = 30287, GameName = "广式麻将", PackageName = "丽水",isShowDianPao = true,showPos = 1},
		{ ConfID = 30299, GameName = "龙泉麻将", PackageName = "丽水",isShowDianPao = true,showPos = 3},
		{ ConfID = 30300, GameName = "遂昌玩法", PackageName = "丽水",isShowDianPao = true,showPos = 1},
		{ ConfID = 30303, GameName = "庆元麻将", PackageName = "丽水",isShowDianPao = true,showPos = 1},
		{ ConfID = 30301, GameName = "缙云麻将", PackageName = "丽水",isShowDianPao = true,showPos = 1},
		{ ConfID = 30304, GameName = "松阳麻将", PackageName = "丽水",isShowDianPao = true,showPos = 3},
		{ ConfID = 30298, GameName = "放炮麻将", PackageName = "丽水",isShowDianPao = true,showPos = 1},
		{ ConfID = 30305, GameName = "景宁麻将", PackageName = "丽水",isShowDianPao = true,showPos = 1},
		{ ConfID = 30302, GameName = "云和麻将", PackageName = "丽水",isShowDianPao = true,showPos = 1},

	}
}

tab.MahjongDianPaoIconByConfID = {}
for _, rec in pairs(tab.MahEndIcon) do
    if rec.isShowDianPao == true then  
	    tab.MahjongDianPaoIconByConfID[rec.ConfID] = rec
    end
end

return tab

