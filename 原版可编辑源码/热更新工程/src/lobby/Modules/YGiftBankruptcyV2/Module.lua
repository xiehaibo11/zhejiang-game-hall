local YGiftBankruptcyModuleV2 = class("YGiftBankruptcyModuleV2", require("lobby.Modules.YGiftBankruptcy.Module"))
-- 创建V2模块，是为了实现2个不同的activityid 不冲突

function YGiftBankruptcyModuleV2:setActivityId(aid, gameID)
    self._aid[XH.areaData:getSrsGroupID()] = aid
    self:reqActDetail()
    self:reqPlayerInfo(nil, nil, nil, gameID)
end

return YGiftBankruptcyModuleV2
