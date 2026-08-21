local MarkModule = class("MarkModule", XH.ModuleBase)

function MarkModule:ctor()
    MarkModule.super.ctor(self)
end

--合规角标 
-- 注意：SpecialName 全局搜这个，已开局的桌子名字要用原来的名字的话，要增加
local SHOWMARKGAMES = 
{
	[30588] = {markStr = "乌龙",	gameName = "  茶苑双扣"},
	[30317] = {markStr = "灵溪", 	gameName = "  台炮麻将"},					--温茶地区
	[30316] = {markStr = "平阳", 	gameName = "  台炮麻将"},
	[30020] = {markStr = "硬自摸",	gameName = "    嘉兴麻将"},				--嘉兴地区
	[30022] = {markStr = "触电胡",	gameName = "    嘉兴麻将"},
	[30021] = {markStr = "抬头胡",	gameName = "    嘉兴麻将"},	
	[30176]	= {markStr = "冲击",	gameName = "   余姚麻将"},					--余姚地区
	[30160] = {markStr = "宝宝",	gameName = "  茶苑双扣"},						--杭州宝宝
	[30172] = {markStr = "浙中",	gameName = "  茶苑双扣"},						--金华地区
	[30105] = {markStr = "吊头",	gameName = "  永康麻将"},						--金华地区
	[30405] = {markStr = "衢州",	gameName = "  茶苑双扣"},						--衢州
	[30142] = {markStr = "杭州",	gameName = "  双扣"},						--杭州
	[30388] = {markStr = "建德",	gameName = "  茶苑双扣"},						
	[30415] = {markStr = "硬爆头",	gameName = "    绍兴麻将"},				 --绍兴地区																	    --绍兴麻将
	[30419] = {markStr = "绍兴",	gameName = "  茶苑双扣"},
	[30116] = {markStr = "千变",	gameName = "  茶苑双扣"},						--金币场游戏 
	[42038] = {markStr = "千变",	gameName = "  茶苑双扣"},						--金币场游戏 
	[30386] = {markStr = "跑得快",	gameName = "茶苑关牌"},
	[30179] = {markStr = "冲击",	gameName = "余姚麻将"},

	[30159] = {markStr = "杭州",	gameName = "茶苑双扣"},
	[30117] = {markStr = "二人",	gameName = "温州麻将"},
	[30332] = {markStr = "灵溪",	gameName = "台炮麻将"},
	[30289] = {markStr = "青田",	gameName = "  茶苑双扣"},
	[30222] = {markStr = "乐清",	gameName = "  温州双扣"},
	[30063] = {markStr = "衢州",	gameName = "  茶苑双扣"},
	[30067] = {markStr = "熟客",	gameName = "  温州双扣"},
	[30130] = {markStr = "台州",	gameName = "  茶苑双扣"},
	[30446] = {markStr = "二人",	gameName = "  广式麻将"},
	[30227] = {markStr = "两帮",	gameName = "  茶苑双扣"},
	[30043] = {markStr = "长兴",	gameName = "  湖州麻将"},
	[30126] = {markStr = "织里",	gameName = "  湖州麻将"},
	[30579] = {markStr = "暗斗",	gameName = "暗斗双扣"},
	[30578] = {markStr = "限时",	gameName = "干瞪眼"},
	[30134] = {markStr = "限时",	gameName = "二人杭麻"},
}

function MarkModule:isShowMarkGame(gameid)
	local conf = SHOWMARKGAMES[gameid]
	if not conf then
		return false
	else
		return true
	end 
end

function MarkModule:getMarkTextByGameID(gameid)
	local showMark = self:isShowMarkGame(gameid)
	if showMark == true then
		return SHOWMARKGAMES[gameid]
	end
end


return MarkModule
�