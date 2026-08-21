local tab = {
	DaTongShare = {
		{ ConfID = 30155, GameName = "台州打通", PackageName = "打通", WinLostToFriend = "", WinLostToCircle = "", SensitiveWords = { "\"支付\"", "\"麻将\"", "\"扑克\"" }, Title_1_1 = "\"二人对杀速度来！\"", Title_2_0 = "\"二人对杀速度来！\"", Title_1_2 = "\"一等二好无奈呀!\"", Title_2_1 = "\"二缺一速来速来!\"\",正在火拼速来组局!\"", Title_3_0 = "\"正在火拼速来组局!\"", Title_1_3 = "\"一等三牌搭子呢?\"", Title_2_2 = "\"二拖二好着急呀!\"", Title_3_1 = "\"三缺一速来速来!\"", Title_4_0 = "\"正在火拼速来组局!\"", Title_1_5 = "\"正在火拼速来组局!\"" 	},
	}
}

-- ConfID
tab.DaTongShareByConfID = {}
for _, rec in pairs(tab.DaTongShare) do
	tab.DaTongShareByConfID[rec.ConfID] = rec
end

tab.Enum = {
}

return tabQ