local SettingModule = CF.gameClass("SettingModule", "game.Mahjong.BasicMahjong.Modules.Setting.Module")

function SettingModule:reqDismiss()
    CF.game:getModule("Dismiss"):sendRequestDismiss()
end

return SettingModule