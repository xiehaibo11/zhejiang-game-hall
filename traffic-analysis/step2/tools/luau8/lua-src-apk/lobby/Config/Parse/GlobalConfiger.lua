--------------------------------------------
-- Copyright © 2018 luaide-lite
-- File: GlobalConfiger.lua
-- Author: louis
-- Date: 2019-08-02 07:15:20
-- Desc: GlobalConfiger
--------------------------------------------

local GlobalCfg = require("app.Config.GlobalConfig")
local GlobalConfiger = class("GlobalConfiger")

function GlobalConfiger:ctor()
    self:initData()
end

function GlobalConfiger:initData()
    
end

function GlobalConfiger:getIsIosTiShen()
    return GlobalCfg.IsIosTiShen or false
end

function GlobalConfiger:getShopAppId()
    return GlobalCfg.ShopAppId 
end

function GlobalConfiger:getShopPackageAppId()
    return GlobalCfg.ShopPackgeId 
end

function GlobalConfiger:getIsWXBanUrl()
    return GlobalCfg.IsWXBanUrl or false
end

function GlobalConfiger:getIsOnlyWXShare()
    return GlobalCfg.IsOnlyWXShare or false
end

function GlobalConfiger:getIsKongZhi()
    return GlobalCfg.IsKongZhi or false
end

function GlobalConfiger:getIsBanQuan()
    return GlobalCfg.IsBanQuan or false
end

function GlobalConfiger:getIsJgSdk()
    return GlobalCfg.IsJgSdk or false
end

function GlobalConfiger:getIsNewRealName()
    return GlobalCfg.IsNewRealName or false
end

return GlobalConfiger�