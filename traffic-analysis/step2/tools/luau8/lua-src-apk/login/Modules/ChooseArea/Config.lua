local tab = {
	ChooseArea = {
		{ CityName = "huzhou", IncludeLobbyID = { 900008 }, DisableImage = "huzhou_ban.png", AbleImage = "huzhou.png", CityChineseName = "湖州市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "jiaxing", IncludeLobbyID = { 40165 }, DisableImage = "jiaxing_ban.png", AbleImage = "jiaxing.png", CityChineseName = "嘉兴市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "hangzhou", IncludeLobbyID = { 900021, 900025 }, DisableImage = "hangzhou_ban.png", AbleImage = "hangzhou.png", CityChineseName = "杭州市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "shaoxing", IncludeLobbyID = { 900007, 900046 }, DisableImage = "shaoxing_ban.png", AbleImage = "shaoxing.png", CityChineseName = "绍兴市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "ningbo", IncludeLobbyID = { 900006, 900029 }, DisableImage = "ningbo_ban.png", AbleImage = "ningbo.png", CityChineseName = "宁波市", DistrictChineseName = { "宁波市", "余姚市" }, DistrictLobbyID = { 900006, 900029 } 	},
		{ CityName = "zhoushan", IncludeLobbyID = { 900043 }, DisableImage = "zhoushan_ban.png", AbleImage = "zhoushan.png", CityChineseName = "舟山市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "quzhou", IncludeLobbyID = { 900003 }, DisableImage = "quzhou_ban.png", AbleImage = "quzhou.png", CityChineseName = "衢州市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "jinhua", IncludeLobbyID = { 900020 }, DisableImage = "jinhua_ban.png", AbleImage = "jinhua.png", CityChineseName = "金华市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "taizhou", IncludeLobbyID = { 900023 }, DisableImage = "taizhou_ban.png", AbleImage = "taizhou.png", CityChineseName = "台州市", DistrictChineseName = {  }, DistrictLobbyID = {  } 	},
		{ CityName = "lishui", IncludeLobbyID = { 900038, 900039 }, DisableImage = "lishui_ban.png", AbleImage = "lishui.png", CityChineseName = "丽水市", DistrictChineseName = { "丽水市", "青田市" }, DistrictLobbyID = { 900038, 900039 } 	},
		{ CityName = "wenzhou", IncludeLobbyID = { 900037, 900017, 900036, 900031 }, DisableImage = "wenzhou_ban.png", AbleImage = "wenzhou.png", CityChineseName = "温州市", DistrictChineseName = { "乐清市", "瑞安市" }, DistrictLobbyID = { 900031, 900036 } 	}
	}

}


-- CityName
tab.ChooseAreaByCityName = {}
for _, rec in pairs(tab.ChooseArea) do
	tab.ChooseAreaByCityName[rec.CityName] = rec
end

tab.Enum = {
}

return tab/
