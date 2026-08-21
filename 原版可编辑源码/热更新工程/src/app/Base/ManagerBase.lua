local ManagerBase = class("ManagerBase")

function ManagerBase:ctor(sceneTag)
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()
    self._sceneTag = sceneTag
    self._modules = {}

    self:initPermanentModules()
end

function ManagerBase:getSceneTag()
    return self._sceneTag
end

function ManagerBase:getModulePath(moduleName)
end

function ManagerBase:getModuleClass(moduleName)
    local modulePath = self:getModulePath(moduleName)
    if not modulePath or modulePath == "" then
        return nil
    end
    local luaFile = string.gsub(modulePath, "%.", "/") .. ".lua"
    local luaCFile = luaFile .. "c"
    local bHaveLua = cc.FileUtils:getInstance():isFileExist(luaFile)
    local bHaveLuac = cc.FileUtils:getInstance():isFileExist(luaCFile)
    if device.platform == "windows" then
        if not bHaveLua and not bHaveLuac then
            return nil
        end
    else
        if not bHaveLuac and not bHaveLua then
            return nil
        end
    end
    return require(modulePath)
end

function ManagerBase:createModule(moduleName)
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

function ManagerBase:getModule(moduleName)
    if not self._modules[moduleName] then
        self._modules[moduleName] = self:createModule(moduleName)
    end
    assert(self._modules[moduleName], tostring(moduleName or "") .. " ManagerBase:getModule module is nil")
    return self._modules[moduleName]
end

function ManagerBase:enter(isPushScene)
    XH.TipTool.resetLoading()
    XH.SceneManager:getInstance():enterScene(self:getSceneTag(), isPushScene)
end

function ManagerBase:exit()
    XH.SceneManager:getInstance():exitScene(self:getSceneTag())
    self:onDestroy(true)
end

function ManagerBase:destroyModule(moduleName)
    if not self._modules[moduleName] then
        return
    end
    self._modules[moduleName]:onDestroy()
    self._modules[moduleName] = nil
end

function ManagerBase:destroyNotPermanentModules()
    for moduleName, _ in pairs(self._modules) do
        if not self:isPermanentModule(moduleName) then
            self:destroyModule(moduleName)
        end
    end
end

function ManagerBase:destroyAllModules()
    for moduleName, _ in pairs(self._modules) do
        self:destroyModule(moduleName)
    end
    self._modules = {}
end

function ManagerBase:onDestroy(bIgnorePermanent)
    if bIgnorePermanent then
        self:destroyNotPermanentModules()
    else
        self:destroyAllModules()
    end
end

function ManagerBase:getPermanentModules()
    return nil
end

function ManagerBase:initPermanentModules()
    local permanentModules = self:getPermanentModules() or {}
      for _, name in pairs(permanentModules) do
        if not self._modules[name] then
            self._modules[name] = self:createModule(name)
        end
    end
end

function ManagerBase:isPermanentModule(moduleName)
    local permanentModules = self:getPermanentModules() or {}
    for _, name in pairs(permanentModules) do
        if name == moduleName then
            return true
        end
    end
    return false
end

return ManagerBase