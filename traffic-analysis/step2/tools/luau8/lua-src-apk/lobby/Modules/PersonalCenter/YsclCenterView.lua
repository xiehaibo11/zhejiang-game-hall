local viewBase = require("lobby.Modules.PersonalCenter.CeLueCenterView")
local YsclCenterView = class("YsclCenterView", viewBase)

function YsclCenterView:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterYsclCenterLayer.csb"
end


return YsclCenterView