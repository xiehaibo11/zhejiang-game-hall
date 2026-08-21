
local AreaExternConfiger = class("AreaExternConfiger")
local conf = CF.gameRequire("Modules.Setting.AreaExtern").GameMenuListByConfID

local defaultAreaId = 1001

function AreaExternConfiger:ctor()
	
end

--获取当期区的设置面板默认值
function AreaExternConfiger:getSettingDataAreaid(areid)
    local curDefaultSetting = conf[areid] or conf[defaultAreaId]
    return curDefaultSetting.DefaultValue
end

return AreaExternConfiger�