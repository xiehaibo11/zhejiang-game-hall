
local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "游戏茶苑温州双扣手机游戏软件V3.0.0",ApprovalNumber ="新广出审[2017]9755号",ISBN = "ISBN 978-7-498-00218-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "放炮麻将",ApprovalNumber ="新广出审[2017]9752号",ISBN = "ISBN 978-7-498-00220-4",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "点炮麻将",ApprovalNumber ="新广出审[2018]531号",ISBN = "ISBN 978-7-498-03991-0",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1004, index = 104, Show = true, Abbreviation = "永强麻将",ApprovalNumber ="新广出审[2018]1655号",ISBN = "ISBN 978-7-498-04993-3",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1005, index = 105, Show = true, Abbreviation = "茶苑红中麻将",ApprovalNumber ="新广出审[2017]9308号",ISBN = "ISBN 978-7-498-02214-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1006, index = 106, Show = true, Abbreviation = "茶苑关牌",ApprovalNumber ="新广出审[2018]1867号",ISBN = "ISBN 978-7-498-05197-4",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1007, index = 107, Show = true, Abbreviation = "熟客温州麻将",ApprovalNumber ="新广出审[2017]10683号",ISBN = "ISBN 978-7-498-03435-9",Author = "杭州网澄网络技术有限公司"},
	}   
}


-- ConfID
tab.QualificationByConfID = {}
for i, rec in pairs(tab.QualificationConfig) do
	if rec.Show == true then 
		tab.QualificationByConfID[i] = rec
	end
end

return tab �