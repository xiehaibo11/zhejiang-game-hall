local MessageBoxView = require("app.Tip.MessageBoxView")
local MessageBoxLogOffView = class("MessageBoxLogOffView", MessageBoxView)

function MessageBoxLogOffView:getCSBPath()
    return "cocosStudio/hall/CSB/MessageBoxLogOff.csb"
end

return MessageBoxLogOffView