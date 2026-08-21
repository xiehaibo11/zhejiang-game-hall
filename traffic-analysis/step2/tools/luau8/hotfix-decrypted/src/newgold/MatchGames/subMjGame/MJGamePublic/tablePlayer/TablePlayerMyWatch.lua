


local super = import(".TablePlayerMy")
local TablePlayerMyWatch = class("TablePlayerMyWatch", super)

local pubWatchMy = import(".TablePlayerMyWatchBase")

for k, v in pairs(pubWatchMy) do
    TablePlayerMyWatch[k] = v
end


return TablePlayerMyWatch
