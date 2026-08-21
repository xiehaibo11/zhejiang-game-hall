un = un or {}

require("app.hotupdate.universe.Constants")
require("app.hotupdate.universe.table")
require("app.hotupdate.universe.instance")
require("app.hotupdate.universe.Url")
require("app.hotupdate.universe.basexx")
require("app.hotupdate.universe.Utils")
require("app.hotupdate.universe.FunctionCabinet")
require("app.hotupdate.universe.ListenerHub")

require("app.hotupdate.universe.hotfix.init")

math.randomseed( tonumber(tostring(os.time()):reverse():sub(1,6)) )
math.random()
math.random()
math.random()
