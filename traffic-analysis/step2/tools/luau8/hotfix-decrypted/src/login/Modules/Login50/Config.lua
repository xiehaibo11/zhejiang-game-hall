local Login50Config = {}

local GlobalCfg = require("app.Config.GlobalConfig")
Login50Config.GroupID = 7160
if GlobalCfg.IsDebug then
    Login50Config.GroupID = 5009
end

return Login50Config�