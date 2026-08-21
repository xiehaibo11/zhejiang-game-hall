local GoldManagerBase = class("GoldManagerBase")

function GoldManagerBase:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()
    self._modules = {}

    self:initPermanentModules()
end

function GoldManagerBase:getModulePath(moduleName)
end

function GoldManagerBase:getModuleClass(moduleName)
    local modulePath = self:getModulePath(moduleName)
    if not modulePath or modulePath == "" then
        return nil
    end
    local luaFile = string.gsub(modulePath, "%.", "/") .. ".lua"
    local luaCFile = luaFile .. "c"
    local bHaveLua = cc.FileUtils:getInstance():isFileExist(luaFile)
    local bHaveLuac = cc.FileUtils:getInstance():isFileExist(luaCFile)
    if not bHaveLua and not bHaveLuac then
        return nil
    end
    return require(modulePath)
end

function GoldManagerBase:createModule(moduleName)
    local createFunc = self["create"..moduleName]
    if createFunc then
        return createFunc()
    end

    local moduleClass = self:getModuleClass(moduleName)
    if not moduleClass then
        return nil
    end
    return moduleClass.new()
end

function GoldManagerBase:getModule(moduleName)
    if not self._modules[moduleName] then
        self._modules[moduleName] = self:createModule(moduleName)
    end
    assert(self._modules[moduleName], "GoldManagerBase:getModule module is nil " .. moduleName)
    return self._modules[moduleName]
end

function GoldManagerBase:destroyModule(moduleName)
    if not self._modules[moduleName] then
        return
    end
    self._modules[moduleName]:onDestroy()
    self._modules[moduleName] = nil
end

function GoldManagerBase:destroyNotPermanentModules()
    for moduleName, _ in pairs(self._modules) do
        if not self:isPermanentModule(moduleName) then
            self:destroyModule(moduleName)
        end
    end
end

function GoldManagerBase:destroyAllModules()
    for moduleName, _ in pairs(self._modules) do
        self:destroyModule(moduleName)
    end
    self._modules = {}
end

function GoldManagerBase:onDestroy(bIgnorePermanent)
    if bIgnorePermanent then
        self:destroyNotPermanentModules()
    else
        self:destroyAllModules()
    end
end

function GoldManagerBase:getPermanentModules()
    return nil
end

function GoldManagerBase:initPermanentModules()
    local permanentModules = self:getPermanentModules() or {}
      for _, name in pairs(permanentModules) do
        if not self._modules[name] then
            self._modules[name] = self:createModule(name)
        end
    end
end

function GoldManagerBase:isPermanentModule(moduleName)
    local permanentModules = self:getPermanentModules() or {}
    for _, name in pairs(permanentModules) do
        if name == moduleName then
            return true
        end
    end
    return false
end

return GoldManagerBase