local SettingModule = CF.gameClass("SettingModule", "game.GameBase.Modules.Setting.Module")
local MahSettingConfig = CF.gameRequire("Config.MahSettingConfig")

SettingModule.EVENT_HIGH_SETTING_BUTTON_TOUCHED = "EVENT_HIGH_SETTING_BUTTON"

function SettingModule:reqDismiss()   
    CF.game:getModule("Continue"):sendRespContinue(false)
    CF.game:getModule("Dismiss"):sendRequestDismiss()
    CF.game:getModule("Dismiss"):sendRespondDismiss(true)
end

function SettingModule:notfiySettingGuideStatus()
    self:dispatchEvent( { name = self.EVENT_HIGH_SETTING_BUTTON_TOUCHED } )
end

function SettingModule:getSkinBundlePropInfo(tagKey, index)
    local leftTime = 0
    local propID = MahSettingConfig.Index2PropID[tagKey] and MahSettingConfig.Index2PropID[tagKey][index]
    if propID == nil then
        propID = 0
    end
    if not XH.lobby:getModule("SkinBundle"):isPropIDInSkinBundle(propID) then
        return 0, 0
    end
    if propID ~= 0 then
        leftTime = XH.lobby:getModule("SkinBundle"):getPropState(propID).overdueTime
    end
    if leftTime <= 0 then
        leftTime = 0
    end
    return propID, leftTime
end

return SettingModule�