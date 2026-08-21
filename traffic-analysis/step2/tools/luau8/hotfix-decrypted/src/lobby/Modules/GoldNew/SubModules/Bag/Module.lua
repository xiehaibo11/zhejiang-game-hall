local BagModule = class("GoldShopModule", XH.ModuleBase)
local BagConfig = import(".Config")
local RemoteConfig = import("...Configs.RemoteConfig")

function BagModule:ctor()
    BagModule.super.ctor(self)
end

function BagModule:initCfg()
    -- Tab红点逻辑需要使用，需要提前初始化
    local cfg = RemoteConfig:getBagTagConfig()

    BagConfig.Tab = clone(cfg) or {}
    for _, v in ipairs(BagConfig.Tab) do
        for k, tabName in ipairs(v.subType or {}) do
            v.subType[k] = BagConfig.SubType[tabName]
        end
    end

    local appendPropcfg = RemoteConfig:getBagAppendPropIDConfig() or {}
    for i, v in ipairs(appendPropcfg) do
        table.insert(BagConfig.showPropIDs, v)
        BagConfig.ShowPropIDs[v] = true
    end
end

function BagModule:isPropTitle(propid)
    return propid == 150777 or propid == 150778
end
return BagModule
�