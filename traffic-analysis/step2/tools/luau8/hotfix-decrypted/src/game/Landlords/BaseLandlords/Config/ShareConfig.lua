local tab = {
	LandlordsShare = {
		{ ConfID = 30420, GameName = "丽水斗地主玩法", PackageName = "丽水", WinLostToFriend = "", WinLostToCircle = "", SensitiveWords = { "\"支付\"", "\"麻将\"", "\"扑克\"" }, Title_1_1 = "\"二人对杀速度来！\"", Title_2_0 = "\"二人对杀速度来！\"", Title_1_2 = "\"一等二好无奈呀!\"", Title_2_1 = "\"二缺一速来速来!\"\",正在火拼速来组局!\"", Title_3_0 = "\"正在火拼速来组局!\"", Title_1_3 = "\"一等三牌搭子呢?\"", Title_2_2 = "\"二拖二好着急呀!\"", Title_3_1 = "\"三缺一速来速来!\"", Title_4_0 = "\"正在火拼速来组局!\"" 	},
		{ ConfID = 30429, GameName = "杭州斗地主玩法", PackageName = "杭州", WinLostToFriend = "", WinLostToCircle = "", SensitiveWords = { "\"支付\"", "\"麻将\"", "\"扑克\"" }, Title_1_1 = "\"二人对杀速度来！\"", Title_2_0 = "\"二人对杀速度来！\"", Title_1_2 = "\"一等二好无奈呀!\"", Title_2_1 = "\"二缺一速来速来!\"\",正在火拼速来组局!\"", Title_3_0 = "\"正在火拼速来组局!\"", Title_1_3 = "\"一等三牌搭子呢?\"", Title_2_2 = "\"二拖二好着急呀!\"", Title_3_1 = "\"三缺一速来速来!\"", Title_4_0 = "\"正在火拼速来组局!\"" 	},
		{ ConfID = 30442, GameName = "舟山斗地主玩法", PackageName = "舟山", WinLostToFriend = "", WinLostToCircle = "", SensitiveWords = { "\"支付\"", "\"麻将\"", "\"扑克\"" }, Title_1_1 = "\"二人对杀速度来！\"", Title_2_0 = "\"二人对杀速度来！\"", Title_1_2 = "\"一等二好无奈呀!\"", Title_2_1 = "\"二缺一速来速来!\"\",正在火拼速来组局!\"", Title_3_0 = "\"正在火拼速来组局!\"", Title_1_3 = "\"一等三牌搭子呢?\"", Title_2_2 = "\"二拖二好着急呀!\"", Title_3_1 = "\"三缺一速来速来!\"", Title_4_0 = "\"正在火拼速来组局!\"" 	},
		{ ConfID = 30156, GameName = "台州斗地主玩法", PackageName = "台州", WinLostToFriend = "", WinLostToCircle = "", SensitiveWords = { "\"支付\"", "\"麻将\"", "\"扑克\"" }, Title_1_1 = "\"二人对杀速度来！\"", Title_2_0 = "\"二人对杀速度来！\"", Title_1_2 = "\"一等二好无奈呀!\"", Title_2_1 = "\"二缺一速来速来!\"\",正在火拼速来组局!\"", Title_3_0 = "\"正在火拼速来组局!\"", Title_1_3 = "\"一等三牌搭子呢?\"", Title_2_2 = "\"二拖二好着急呀!\"", Title_3_1 = "\"三缺一速来速来!\"", Title_4_0 = "\"正在火拼速来组局!\"" 	},
		{ ConfID = 30177, GameName = "余姚斗地主玩法", PackageName = "余姚", WinLostToFriend = "", WinLostToCircle = "", SensitiveWords = { "\"支付\"", "\"麻将\"", "\"扑克\"" }, Title_1_1 = "\"二人对杀速度来！\"", Title_2_0 = "\"二人对杀速度来！\"", Title_1_2 = "\"一等二好无奈呀!\"", Title_2_1 = "\"二缺一速来速来!\"\",正在火拼速来组局!\"", Title_3_0 = "\"正在火拼速来组局!\"", Title_1_3 = "\"一等三牌搭子呢?\"", Title_2_2 = "\"二拖二好着急呀!\"", Title_3_1 = "\"三缺一速来速来!\"", Title_4_0 = "\"正在火拼速来组局!\"" 	},
	}
}

-- ConfID
tab.LandlordsShareByConfID = {}
for _, rec in pairs(tab.LandlordsShare) do
	tab.LandlordsShareByConfID[rec.ConfID] = rec
end

tab.Enum = {
}

return tab�