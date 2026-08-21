local TrustModule = CF.gameClass("TrustModule", CF.gameScriptRootPath .. ".GameBase.Modules.Trust.Module")

--##托管
function TrustModule:onMsgTrust(msgData)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    local bSelf, bTrust = self:checkShowTrust(msgData)
    if not bSelf then
        return
    end
    if bTrust then
        self:showTrustView()
    -- else
    -- self:hideTrustView()
    end
end

return TrustModule
�