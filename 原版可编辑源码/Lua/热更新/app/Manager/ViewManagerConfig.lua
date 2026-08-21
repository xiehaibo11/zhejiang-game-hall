-- 配置权值，当前者UI存在，并且isForbidOtherView为true时，禁止并关闭其他弹窗
local ViewManagerConfig = {}

ViewManagerConfig.MultViews = {
    ["RecallNewEmailView"] = {
        "PopSystemView",
        "SxvipActView",
        "SxvipActTipView",
        "BindPhoneView",
    }
}

return ViewManagerConfig