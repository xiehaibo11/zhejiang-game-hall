local CommonAniView = CF.gameClass("CommonAniView", CF.ViewBase)
local AnimationManager = CF.gameRequire("Manager.AnimationManager")

function CommonAniView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CommonAniLayer.csb"
end

function CommonAniView:getBindingInfo()
    local table = {
        ["_KW_PANEL_ANI_POS"] = { varName = "_KW_PANEL_ANI_POS" }
    }
    return table
end

function CommonAniView:getProxyEvents()
    local eventTable = {
    }
    return eventTable
end

return CommonAniView