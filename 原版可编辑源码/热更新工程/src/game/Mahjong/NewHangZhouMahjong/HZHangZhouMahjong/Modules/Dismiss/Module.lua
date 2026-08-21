local DismissModule = CF.gameClass("DismissModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.Dismiss.Module")

function DismissModule:checkIsNeedLeaveFunc(flag)
    if flag == 3 then
        return true
    end
    return DismissModule.super.checkIsNeedLeaveFunc(self, flag)
end

return DismissModule