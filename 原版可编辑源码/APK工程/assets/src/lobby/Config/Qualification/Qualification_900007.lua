
local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "茶苑关牌",ApprovalNumber ="新广出审[2018]1867号",ISBN = "ISBN 978-7-498-05197-4",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "茶苑双扣",ApprovalNumber ="新广出审[2016]1598号",ISBN = "ISBN 978-7-7979-0419-3",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "边锋嵊州麻将",ApprovalNumber ="新广出审[2017]9839号",ISBN = "ISBN 978-7-7979-9093-6",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1004, index = 104, Show = true, Abbreviation = "上虞花麻将",ApprovalNumber ="新广出审[2017]9843号",ISBN = "ISBN 978-7-498-00216-7",Author = "杭州边锋网络技术有限公司"},
	},
	AgreementConfig = {
		{ConfID = 1001,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "SERVER",url = "https://www.hzbianqu.com/protocol.html"},
		{ConfID = 1002,Show = true,Platform = 3,DevicePlatform = "android",AgreementType = "PRIVACY",url = "https://www.hzbianqu.com/game_center/game_rule/1/5040/3.html"},
	},
	CompanyNameConfig  = {
		{ConfID = 1001,Show = true,Platform = 3,DevicePlatform = "android",CompanyName = "杭州边趣网络技术有限公司"},
	},
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