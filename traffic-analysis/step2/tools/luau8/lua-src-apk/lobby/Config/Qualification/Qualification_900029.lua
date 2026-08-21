
local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "茶苑关牌",ApprovalNumber ="新广出审[2018]1867号",ISBN = "ISBN 978-7-498-05197-4",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "茶苑双扣",ApprovalNumber ="新广出审[2016]1598号",ISBN = "ISBN 978-7-7979-0419-3",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "边锋余姚约牌麻将手机游戏软件V1.0.0",ApprovalNumber ="新广出审[2018]535号",ISBN = "ISBN 978-7-498-03978-1",Author = "杭州边趣网络技术有限公司"},
		{ ConfID = 1004, index = 104, Show = true, Abbreviation = "宁波斗地主",ApprovalNumber ="新广出审[2016]672号",ISBN = "ISBN 978-7-89988-677-9",Author = "杭州边锋网络技术有限公司"},
	}
}


-- ConfID
tab.QualificationByConfID = {}
for i, rec in pairs(tab.QualificationConfig) do
	if rec.Show == true then 
		tab.QualificationByConfID[i] = rec
	end
end

return tab 9