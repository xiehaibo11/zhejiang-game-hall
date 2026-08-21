--local OpBtnLayer = import("..PDKBtnOperate")
--local TablePlayerBase = import(".TablePlayerBase")
local super = import(".TablePlayerMy")
local TablePlayerMyWatch = class("TablePlayerMyWatch", super)

local pubWatchMy = require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.TablePlayerMyWatchBase")

for k, v in pairs(pubWatchMy) do
    TablePlayerMyWatch[k] = v
end


return TablePlayerMyWatch