local AgentTransferConfig = class("AgentTransferConfig")

AgentTransferConfig.WeChatInfo = 
{
	[XH.LOBBY_ID.SHAOXING] = "Hzyuepai01", --绍兴
	[XH.LOBBY_ID.HUZHOU] = "hzmj79", --湖州
	[XH.LOBBY_ID.QINGTIAN] = "qtcy100", -- 青田
}

AgentTransferConfig.ActivityTime = 
{
	[XH.LOBBY_ID.SHAOXING] = "6月11日-6月22日；",
	[XH.LOBBY_ID.HUZHOU] = "6月11日-6月29日；",
	[XH.LOBBY_ID.QINGTIAN] = "6月11日-6月29日；",
}

AgentTransferConfig.ActivityID = 
{
	[XH.LOBBY_ID.SHAOXING] = 484,
	[XH.LOBBY_ID.HUZHOU] = 477,
	[XH.LOBBY_ID.QINGTIAN] = 482,
}

AgentTransferConfig.AppId = 
{
	[XH.LOBBY_ID.SHAOXING] = 10008,
	[XH.LOBBY_ID.HUZHOU] = 10010,
	[XH.LOBBY_ID.QINGTIAN] = 10003,
}

AgentTransferConfig.Secrets = 
{
	[XH.LOBBY_ID.SHAOXING] = "6996e2f53835efd291315a6c7f09218a",
	[XH.LOBBY_ID.HUZHOU] = "1bfed3d3fa6a776bb17f7c926ea4fe01",
	[XH.LOBBY_ID.QINGTIAN] = "54472a4ad2052d481f0b17e9c9050ffe",
}

return AgentTransferConfig
