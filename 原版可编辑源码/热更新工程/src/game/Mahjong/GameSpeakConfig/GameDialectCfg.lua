-- 普通话的index必须配置1，index不允许重复
local DialectConfig = {
    [0] = {
        {name = "普通话", index = 1},
        {name = "本地话", index = 2},
    },
    [30286] = {
        {name = "普通话", index = 1},
        {name = "本地话", index = 2},
        {name = "蛮话",   index = 3},
        {name = "金乡话", index = 4},
        {name = "闽南话", index = 5},
    },
    [30316] = {
        {name = "普通话", index = 1},
        {name = "本地话", index = 2},
        {name = "闽南话", index = 3},
    },
    [30317] = {
        {name = "普通话", index = 1},
        {name = "本地话", index = 2},
        {name = "闽南话", index = 3},
    },
}

return DialectConfig