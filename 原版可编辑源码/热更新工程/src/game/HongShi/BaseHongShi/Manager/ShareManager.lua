local ShareManager = CF.gameClass("ShareManager", "game.GameBase.Manager.ShareManager")

function ShareManager:getShareConfig()
    return CF.gameRequire("Config.ShareConfig").HongShiShareByConfID
end

return ShareManager