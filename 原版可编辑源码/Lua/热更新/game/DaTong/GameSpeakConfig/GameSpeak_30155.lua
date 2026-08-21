
local tab = {
	GameSpeakConfig = {
		{ ConfID = 1001, index = 101, GameName = "打通", order = 1, SpeakText = "快点吧，等的花都谢了", M_SpeakFileName = "M_Speak101.mp3", W_SpeakFileName = "W_Speak101.mp3", listIndex = 1 	},
		{ ConfID = 1002, index = 102, GameName = "打通", order = 2, SpeakText = "急什么，让我想想怎么打", M_SpeakFileName = "M_Speak102.mp3", W_SpeakFileName = "W_Speak102.mp3", listIndex = 1 	},
		{ ConfID = 1003, index = 103, GameName = "打通", order = 3, SpeakText = "和你合作真是太愉快了", M_SpeakFileName = "M_Speak103.mp3", W_SpeakFileName = "W_Speak103.mp3", listIndex = 1 	},
		{ ConfID = 1004, index = 104, GameName = "打通", order = 4, SpeakText = "天下还有这样的烂牌", M_SpeakFileName = "M_Speak104.mp3", W_SpeakFileName = "W_Speak104.mp3", listIndex = 1 	},
		{ ConfID = 1005, index = 105, GameName = "打通", order = 5, SpeakText = "好牌！好牌！", M_SpeakFileName = "M_Speak105.mp3", W_SpeakFileName = "W_Speak105.mp3", listIndex = 1 	},
		{ ConfID = 1006, index = 106, GameName = "打通", order = 6, SpeakText = "别慌，看我的", M_SpeakFileName = "M_Speak106.mp3", W_SpeakFileName = "W_Speak106.mp3", listIndex = 1 	},
		{ ConfID = 1007, index = 107, GameName = "打通", order = 7, SpeakText = "炸弹带回家啊？", M_SpeakFileName = "M_Speak107.mp3", W_SpeakFileName = "W_Speak107.mp3", listIndex = 1 	},
		{ ConfID = 1008, index = 108, GameName = "打通", order = 8, SpeakText = "不要急，一手手来", M_SpeakFileName = "M_Speak108.mp3", W_SpeakFileName = "W_Speak108.mp3", listIndex = 1 	},
		{ ConfID = 1009, index = 109, GameName = "打通", order = 9, SpeakText = "对家不给力啊", M_SpeakFileName = "M_Speak109.mp3", W_SpeakFileName = "W_Speak109.mp3", listIndex = 1 	},
		{ ConfID = 1010, index = 110, GameName = "打通", order = 10, SpeakText = "又断网了，网络怎么这么差", M_SpeakFileName = "M_Speak110.mp3", W_SpeakFileName = "W_Speak110.mp3", listIndex = 1 	},
		{ ConfID = 1011, index = 111, GameName = "打通", order = 11, SpeakText = "各位对不住了，有事先走一步", M_SpeakFileName = "M_Speak111.mp3", W_SpeakFileName = "W_Speak111.mp3", listIndex = 1 	}
	}

}

-- ConfID
tab.GameSpeakConfigByConfID = {}
for _, rec in pairs(tab.GameSpeakConfig) do
	tab.GameSpeakConfigByConfID[rec.ConfID] = rec
end

tab.Enum = {
}

return tab