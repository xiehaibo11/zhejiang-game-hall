
local tab = {
	QualificationConfig = {
		{ ConfID = 1001, index = 101, Show = true, Abbreviation = "桐庐麻将",ApprovalNumber ="新广出审[2017]9035号",ISBN = "ISBN 978-7-498-01964-6",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1002, index = 102, Show = true, Abbreviation = "淳安麻将",ApprovalNumber ="新广出审[2017]9034号",ISBN = "ISBN 978-7-498-01963-9",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1003, index = 103, Show = true, Abbreviation = "萧山麻将",ApprovalNumber ="新广出审[2017]9309号",ISBN = "ISBN 978-7-498-02215-8",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1004, index = 104, Show = true, Abbreviation = "三人杭麻",ApprovalNumber ="新广出审[2018]1732号",ISBN = "ISBN 978-7-498-05068-7",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1005, index = 105, Show = true, Abbreviation = "边锋临安麻将",ApprovalNumber ="新广出审[2018]2026号",ISBN = "ISBN 978-7-498-05309-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1006, index = 107, Show = true, Abbreviation = "富阳麻将",ApprovalNumber ="新广出审[2018]1868号",ISBN = "ISBN 978-7-498-05198-1",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1007, index = 108, Show = true, Abbreviation = "茶苑关牌",ApprovalNumber ="新广出审[2018]1867号",ISBN = "ISBN 978-7-498-05197-4",Author = "杭州边锋软件技术有限公司"},
		{ ConfID = 1008, index = 109, Show = true, Abbreviation = "茶苑双扣",ApprovalNumber ="新广出审[2016]1598号",ISBN = "ISBN 978-7-7979-0419-3",Author = "杭州边锋网络技术有限公司"},
		{ ConfID = 1009, index = 110, Show = true, Abbreviation = "边锋杭麻圈手机游戏软件V1.0.0",ApprovalNumber ="新广出审[2017]9840号",ISBN = "ISBN 978-7-7979-4540-0",Author = "杭州边锋软件技术有限公司"},
	}
}


-- ConfID
tab.QualificationByConfID = {}
for i, rec in pairs(tab.QualificationConfig) do
	if rec.Show == true then 
		tab.QualificationByConfID[i] = rec
	end
end

return tab '