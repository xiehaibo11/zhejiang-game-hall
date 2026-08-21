local Cell = import(".Cell")
local CellProtocol = class("CellProtocol", Cell)

function CellProtocol:ctor()
    CellProtocol.super.ctor(self)
end

function CellProtocol:start(timeoutTime)
    CellProtocol.super.start(self,timeoutTime)   
end

function CellProtocol:success(data)
    CellProtocol.super.success(self,data)
    Game.Interface.removeProtocolScriptFuncByObj(self,nil)
end

function CellProtocol:fail(data)
    CellProtocol.super.fail(self,data)
    Game.Interface.removeProtocolScriptFuncByObj(self,nil)
end

function CellProtocol:timeout(data)
    CellProtocol.super.timeout(self,data)
    Game.Interface.removeProtocolScriptFuncByObj(self,nil)
end

return CellProtocol�