
local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "茶苑关牌",ApprovalNumber ="新广出审[2018]1867号",ISBN = "ISBN 978-7-498-05197-4",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "游戏茶苑乐清麻将手机游戏软件V3.0.5",ApprovalNumber ="新广出审[2017]937号",ISBN = "ISBN 978-7-7979-4502-8",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "游戏茶苑温州双扣手机游戏软件V3.0.0",ApprovalNumber ="新广出审[2017]9755号",ISBN = "ISBN 978-7-498-00218-1",Author = "杭州边锋软件技术有限公司"}
	}
}


-- ConfID
tab.QualificationByConfID = {}
for i, rec in pairs(tab.QualificationConfig) do
	if rec.Show == true then 
		tab.QualificationByConfID[i] = rec
	end
end

return tab �