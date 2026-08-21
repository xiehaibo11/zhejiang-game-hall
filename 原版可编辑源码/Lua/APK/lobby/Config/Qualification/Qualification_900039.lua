--AgreementType 	协议种类

--SERVER			服务协议
--PARENT_ALGUIDANCE 家长监护
--PRIVACY			隐私协议

local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "茶苑关牌",ApprovalNumber ="新广出审[2018]1867号",ISBN = "ISBN 978-7-498-05197-4",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "茶苑双扣",ApprovalNumber ="新广出审[2016]1598号",ISBN = "ISBN 978-7-7979-0419-3",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "放炮麻将",ApprovalNumber ="新广出审[2017]9752号",ISBN = "ISBN 978-7-498-00220-4",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1004, index = 104, Show = true, Abbreviation = "温溪麻将",ApprovalNumber ="新广出审[2018]218号",ISBN = "ISBN978-7-498-03685-8",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1005, index = 105, Show = true, Abbreviation = "丽水茶苑双扣手机游戏软件V3.2.0",ApprovalNumber ="新广出审[2017]9745号",ISBN = "ISBN 978-7-7979-4842-5",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1006, index = 106, Show = true, Abbreviation = "丽水跑得快",ApprovalNumber ="新广出审[2018]1735号",ISBN = "ISBN 978-7-498-05071-7",Author = "杭州锋游网络技术有限公司"},
	},
	AgreementConfig = {
		{ConfID = 1001,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "SERVER",url = "http://fengyou123.com/app/protocol.html"},
		{ConfID = 1002,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "PARENT_ALGUIDANCE",url = "http://fengyou123.com/jiazhang.html"},
		{ConfID = 1003,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "PRIVACY",url = "http://fengyou123.com/game_center/game_rule/1/5040/5.html "},
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


return tab 