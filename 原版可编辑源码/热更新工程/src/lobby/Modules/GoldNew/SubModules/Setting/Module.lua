local SettingModule = class("GoldSettingModule", XH.ModuleBase)
local LocalConfig = import("...Configs.LocalConfig")
local PCConfig = import("..PersonalCenter.Config")

function SettingModule:ctor()
    SettingModule.super.ctor(self)
end

function SettingModule:getReqConfig()
    return {}
end

function SettingModule:getProxyEvents()
    return {}
end

function SettingModule:isVoiceMan()
    -- if XH.Bridge:getModule("GoldNew"):isSupport("PC") then
    --     return XH.Bridge:getModule(LocalConfig.MP.PC):getPlayerSex() == 1
    -- end
    return XH.Bridge:getModule("Set"):getVoiceType(true) == true
end
function SettingModule:setVoiceType(isMan)
    -- if XH.Bridge:getModule("GoldNew"):isSupport("PC") then
    --     XH.Bridge:getModule(LocalConfig.MP.PC):reqGoldPlayerInfoSet({type = PCConfig.SetType.SET_GOLD_SEX, sex = isMan and 1 or 0})
    -- end
    XH.Bridge:getModule("Set"):setVoiceType(isMan)
end
function SettingModule:initVoiceType()
    -- if XH.Bridge:getModule("GoldNew"):isSupport("PC") then
    --     return
    -- end
    -- 第一次会根据你本身的性别来设置
    local FIRSTGETSEX = "FIRST_GETSEX" .. XH.areaData:getAreaID()
    if not cc.UserDefault:getInstance():getBoolForKey(FIRSTGETSEX, false) then
        cc.UserDefault:getInstance():setBoolForKey(FIRSTGETSEX, true)
        if XH.playerData:getSex() == 1 then
            XH.Bridge:getModule("Set"):setVoiceType(true)
        else
            XH.Bridge:getModule("Set"):setVoiceType(false)
        end
    end
end

return SettingModule
