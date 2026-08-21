
local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "丽水广式麻将手机游戏软件V3.2.0",ApprovalNumber ="新广出审[2017]9744号",ISBN = "ISBN 978-7-7979-4887-6",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "茶苑飞行棋",ApprovalNumber ="新广出审[2016]5100号",ISBN = "ISBN 978-7-7979-3616-3",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "景宁麻将",ApprovalNumber ="新广出审[2018]130号",ISBN = "ISBN978-7-498-03603-2",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1004, index = 104, Show = true, Abbreviation = "丽水茶苑双扣手机游戏软件V3.2.0",ApprovalNumber ="新广出审[2017]9745号",ISBN = "ISBN 978-7-7979-4842-5",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1005, index = 105, Show = true, Abbreviation = "放炮麻将",ApprovalNumber ="新广出审[2017]9752号",ISBN = "ISBN 978-7-498-00220-4",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1006, index = 106, Show = true, Abbreviation = "丽水茶苑缙云麻将",ApprovalNumber ="新广出审[2017]9747号",ISBN = "ISBN 978-7-7979-8302-0",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1007, index = 107, Show = true, Abbreviation = "丽水茶苑龙泉麻将",ApprovalNumber ="新广出审[2017]9748号",ISBN = "ISBN 978-7-7979-8305-1",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1008, index = 108, Show = true, Abbreviation = "丽水茶苑松阳麻将",ApprovalNumber ="新广出审[2017]9739号",ISBN = "ISBN 978-7-7979-8303-7",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1009, index = 109, Show = true, Abbreviation = "丽水茶苑遂昌麻将",ApprovalNumber ="新广出审[2017]9741号",ISBN = "ISBN 978-7-7979-8306-8",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1010, index = 110, Show = true, Abbreviation = "丽水茶苑庆元麻将",ApprovalNumber ="新广出审[2017]9740号",ISBN = "ISBN 978-7-7979-8304-4",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1011, index = 111, Show = true, Abbreviation = "丽水茶苑云和麻将",ApprovalNumber ="新广出审[2017]9746号",ISBN = "ISBN 978-7-7979-8301-3",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1012, index = 112, Show = true, Abbreviation = "丽水跑得快",ApprovalNumber ="新广出审[2018]1735号",ISBN = "ISBN 978-7-498-05071-7",Author = "杭州锋游网络技术有限公司"},
	},
	AgreementConfig = {
		{ConfID = 1001,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "SERVER",url = "http://fengyou123.com/app/protocol.html"},
		{ConfID = 1002,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "PARENT_ALGUIDANCE",url = "http://fengyou123.com/jiazhang.html"},
		{ConfID = 1003,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "PRIVACY",url = "http://fengyou123.com/game_center/game_rule/1/5040/5.html "},
		{ConfID = 1002,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "VIP_SERVER",url = "https://weixinhlmj.37gjw.com/zhanlong/awl_tweets/htmls/fy-hyfwxy.html"},
		{ConfID = 1002,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "VIP_RESTORE",url = "https://weixinhlmj.37gjw.com/zhanlong/awl_tweets/htmls/br-zdxfxy.html"},
	},
	CompanyNameConfig  = {
		{ConfID = 1001,Show = true,Platform = 3,DevicePlatform = "android",CompanyName = "杭州锋游网络科技有限公司"},
	} 
}


-- ConfID
tab.QualificationByConfID = {}
for i, rec in pairs(tab.QualificationConfig) do
	if rec.Show == true then 
		tab.QualificationByConfID[i] = rec
	end
end

tab.AgreementConfigByConfID = {}
for i, rec in pairs(tab.AgreementConfig) do
	if rec.Show == true then 
		tab.AgreementConfigByConfID[i] = rec
	end
end

tab.CompanyNameConfigByConfID = {}
for i, rec in pairs(tab.CompanyNameConfig) do
	if rec.Show == true then 
		tab.CompanyNameConfigByConfID[i] = rec
	end
end

return tab 