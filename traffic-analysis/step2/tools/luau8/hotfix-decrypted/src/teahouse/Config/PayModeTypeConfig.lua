--用于特判某些区payModetype为0，但实际为前项付费（1）或者后项付费（2）
---@type PayModeTypeConfig
local PayModeTypeConfig = {
    [900036] = 1, --瑞安 前项
    [900025] = 1, --宝宝杭麻 前项
    [900008] = 2, --湖州 后项
    [900031] = 2, --乐清 后项
    [900023] = 2, --台州 后项
}

return PayModeTypeConfign