---@class ModuleManager 模块管理
local ModuleManager = class("ModuleManager")

---@param path string 模块路径
function ModuleManager:ctor(path)
    ---模块路劲
    self._path = path

    ---模块表
    self._modules = {}
end

function ModuleManager:reset()
    for moduleName, module in pairs(self._modules) do
        module:onDestroy()
        -- package.loaded[self._path .. moduleName] = nil
    end
    self._modules = {}
end

---创建模块
---@param moduleName string 模块名称
---@return Module
function ModuleManager:createModule(moduleName)
    local module = self._modules[moduleName]
    if module ~= nil then
        return
    end
    local ok, Module = xpcall(function()
        return require(self._path .. moduleName)
    end, __G__TRACKBACK__)
    if not ok then
        return
    end

    ---@type Module
    module = Module.new()
    self._modules[moduleName] = module
    module:onCreate()
    return module
end

---销毁模块
---@param moduleName string 模块名称
function ModuleManager:destroyModule(moduleName)
    local module = self._modules[moduleName]
    if module == nil then
        return false
    end

    module:onDestroy()
    -- package.loaded[self._path .. moduleName] = nil
    self._modules[moduleName] = nil
    return true
end

---获取模块
---@param moduleName string 模块名称
---@return Module
function ModuleManager:getModule(moduleName)
    return self._modules[moduleName]
end

return ModuleManager