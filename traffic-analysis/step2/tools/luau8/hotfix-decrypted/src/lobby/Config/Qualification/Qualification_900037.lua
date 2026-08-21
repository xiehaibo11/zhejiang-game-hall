
local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "游戏茶苑台炮麻将手机游戏软件V3.0.0",ApprovalNumber ="新广出审[2017]9753号",ISBN = "ISBN 978-7-498-00219-8",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "边锋棋牌游戏温州麻将手机游戏软件V3.0.0",ApprovalNumber ="新广出审[2017]9754号",ISBN = "ISBN 978-7-498-00334-8",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "游戏茶苑温州双扣手机游戏软件V3.0.0",ApprovalNumber ="新广出审[2017]9755号",ISBN = "ISBN 978-7-498-00218-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1004, index = 104, Show = true, Abbreviation = "游戏茶苑泰顺麻将手机游戏软件V3.0.0",ApprovalNumber ="新广出审[2018]1122号",ISBN = "ISBN 978-7-498-04518-8",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1005, index = 105, Show = true, Abbreviation = "游戏茶苑龙港麻将手机游戏软件V3.0.0",ApprovalNumber ="新广出审[2017]9749号",ISBN = "ISBN 978-7-7979-6578-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1006, index = 106, Show = true, Abbreviation = "文成麻将",ApprovalNumber ="新广出审[2017]9496号",ISBN = "ISBN 978-7-498-02400-8",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1007, index = 107, Show = true, Abbreviation = "放炮麻将",ApprovalNumber ="新广出审[2017]9752号",ISBN = "ISBN 978-7-498-00220-4",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1008, index = 108, Show = true, Abbreviation = "茶苑红中麻将",ApprovalNumber ="新广出审[2017]9308号",ISBN = "ISBN 978-7-498-02214-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1009, index = 109, Show = true, Abbreviation = "永嘉麻将",ApprovalNumber ="新广出审[2018]164号",ISBN = "ISBN978-7-498-03684-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1010, index = 110, Show = true, Abbreviation = "永强麻将",ApprovalNumber ="新广出审[2018]1655号",ISBN = "ISBN 978-7-498-04993-3",Author = "杭州边锋边软技术有限公司"},
		{ ConfID = 1011, index = 111, Show = true, Abbreviation = "点炮麻将",ApprovalNumber ="新广出审[2018]531号",ISBN = "ISBN 978-7-498-03991-0",Author = "杭州边锋边软技术有限公司"},
		{ ConfID = 1012, index = 112, Show = true, Abbreviation = "平阳原子四副头",ApprovalNumber ="新广出审[2017]10073号",ISBN = "ISBN 978-7-498-02862-4",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1013, index = 113, Show = true, Abbreviation = "茶苑关牌",ApprovalNumber ="新广出审[2018]1867号",ISBN = "ISBN 978-7-498-05197-4",Author = "杭州锋游网络技术有限公司"},
		{ ConfID = 1014, index = 114, Show = true, Abbreviation = "龙港三副头",ApprovalNumber ="新广出审[2017]9495号",ISBN = "ISBN 978-7-498-02399-5",Author = "杭州边锋网络技术有限公司"},
	}
}


-- ConfID
tab.QualificationByConfID = {}
for i, rec in pairs(tab.QualificationConfig) do
	if rec.Show == true then 
		tab.QualificationByConfID[i] = rec
	end
end

return tab �