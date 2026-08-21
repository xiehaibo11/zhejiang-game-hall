-- 大部分逻辑沿用原先PopWindowsView，保证风信后台配置不用大范围修改
local viewBase = require("lobby.Modules.PopSystem.View")
local PopCommonLayer = class("PopCommonLayer", viewBase)

--local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"
--local KW_BG_SIZE = {
--    width = 1920,
--    height = 1080,
--}

function PopCommonLayer:ctor(param)
	PopCommonLayer.super.ctor(self, param)
end

return PopCommonLayer�