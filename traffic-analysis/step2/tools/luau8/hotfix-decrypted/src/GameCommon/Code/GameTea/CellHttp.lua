local Cell = import(".Cell")
local CellHttp = class("CellHttp", Cell)


function CellHttp:ctor()
    CellHttp.super.ctor(self)
end

function CellHttp:success(data)
    CellHttp.super.success(self,data)
    XH.GT.removeHttpScriptFuncByObj(self)
end

function CellHttp:fail(data)
    CellHttp.super.fail(self,data)
    XH.GT.removeHttpScriptFuncByObj(self)
end

function CellHttp:timeout(data)
    CellHttp.super.timeout(self,data)
    XH.GT.removeHttpScriptFuncByObj(self)
end



return CellHttp