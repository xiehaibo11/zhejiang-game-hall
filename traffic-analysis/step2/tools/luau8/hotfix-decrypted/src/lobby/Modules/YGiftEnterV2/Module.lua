local YGiftEnterModuleV2 = class("YGiftEnterModuleV2", require("lobby.Modules.YGiftEnter.Module"))
-- 创建V2模块，是为了实现2个不同的activityid 不冲突

function YGiftEnterModuleV2:getGiftInfoByLevel(level, isRecharge)
    local info = self:getPlayerActInfo()
    if info == nil then
        return
    end
    local gifts = {}
    if info.gifts and #info.gifts > 0 then
        gifts = info.gifts
        for i = 1, #gifts do
            gifts[i].goods_id = gifts[i].goodsId
        end
        return gifts
    end
    return nil
end

return YGiftEnterModuleV2
W