local GiftPackCollectionModule = class("GoldGiftPackCollectionModule", XH.ModuleBase)
local LocalConfig = import("...Configs.LocalConfig")
local RemoteConfig = import("...Configs.RemoteConfig")
local PCConfig = import("..PersonalCenter.Config")
local GPCConfig = import(".Config")

function GiftPackCollectionModule:ctor()
    GiftPackCollectionModule.super.ctor(self)
    self._allM = {
        {module = XH.Bridge:getModule(LocalConfig.MP.ActFR), cfg = GPCConfig.AllActInfo.firstRecharge},
        {module = XH.Bridge:getModule(LocalConfig.MP.ActPeGP), cfg = GPCConfig.AllActInfo.periodicGP, validFunc = "isAllValid"}
    }
end

function GiftPackCollectionModule:getReqConfig()
    return {}
end

function GiftPackCollectionModule:getProxyEvents()
    return {}
end

function GiftPackCollectionModule:isValid()
    -- for _, v in ipairs(self._allM) do
    --     if v.validFunc ~= nil then
    --         if v.module[v.validFunc](v.module) then
    --             return true
    --         end
    --     else
    --         if v.module:isValid() then
    --             return true
    --         end
    --     end
    -- end
    -- return false
    return true
end

function GiftPackCollectionModule:getAllGiftPackInfo()
    local info = {}
    for _, i in ipairs(self:getTabCfg()) do
        local v = self._allM[i]
        if v then
            if v.validFunc ~= nil then
                if v.module[v.validFunc](v.module) then
                    table.insert(info, v.cfg)
                end
            else
                if v.module:isValid() then
                    table.insert(info, v.cfg)
                end
            end
        end
    end

    return info
end

function GiftPackCollectionModule:getTabCfg()
    local info = RemoteConfig:getConfigByName("GPC") or {}
    return info.tab or {1, 2}
end

return GiftPackCollectionModule
