local PersonalCenterConfig = {}

PersonalCenterConfig.KW_VIEW_TAB = {
    {tabName="个人资料",viewName = "PersonalInfoView"},
    {tabName="健康系统认证",viewName = "HealthSystemView"},
    {tabName="隐私权限",viewName = "YsclCenterView"},
    {tabName="手机绑定",viewName = "PersonalPhoneBindView"},
    {tabName="会员中心",viewName = "PersonalCenterVipLayer", judgeShowFun = "judgeShowVipLayer", throwData = XH.ThrowDataDefine.ButtonEnumTable.PERSONAL_CENTET_VIP_TAB_CLICK},
    {tabName="赠送房卡",viewName = "PersonalCenterGiveLayer", judgeShowFun = "judgeShowGiveLayer", throwData = XH.ThrowDataDefine.ButtonEnumTable.PERSONAL_CENTET_GIVE_TAB_CLICK},
}

PersonalCenterConfig.KW_QUICK_SET_NUMBER = {
    [900038] = {18,38,58},  -- 丽水
    [900037] = {18,38,200000,58},  -- 温茶
    [900017] = {10,20,100},  -- 熟客
    [900021] = {18,38,58}, -- 杭麻
    [900023] = {7,30,71}, -- 台州
    [900043] = {68,200}, -- 舟山
    [900008] = {18,38,58}, -- 湖州
    [900003] = {18,38,58}, -- 衢州
    [900036] = {25,68,158}, -- 瑞安
    [900020] = {18,38,58}, -- 金华
    [900025] = {18,38,58}, -- 宝宝
    [900031] = {18,38,58}, -- 乐清
    [900007] = {18,38,58}, -- 绍兴
    [900039] = {18,38,58}, -- 青田
    [900006] = {160000,200000}, -- 宁波
    [900029] = {10,20}, -- 余姚
    [40165]  = {18,38,58}, -- 嘉兴
    [900046] = {60,90,100}
}

return PersonalCenterConfig