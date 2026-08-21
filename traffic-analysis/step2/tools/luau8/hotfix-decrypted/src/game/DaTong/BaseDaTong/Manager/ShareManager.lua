local ShareManager = CF.gameClass("ShareManager", "game.GameBase.Manager.ShareManager")

function ShareManager:getShareConfig()
    return CF.gameRequire("Config.ShareConfig").DaTongShareByConfID
end

return ShareManager�