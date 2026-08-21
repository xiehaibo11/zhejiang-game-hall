-- 财神引导UI
local ShuffleTextNode = CF.gameClass("ShuffleTextNode", CF.ViewBase)

local shuffleTextPos = {
    [1] = {pos = cc.p(80, -80), anchX = 0, anchY = 0.5},
    [2] = {pos = cc.p(100, -100), anchX = 0, anchY = 0.5},
    [3] = {pos = cc.p(-80, -80), anchX = 1, anchY = 0.5},
    [4] = {pos = cc.p(0, -100), anchX = 0.5, anchY = 0.5},
}

function ShuffleTextNode:getCSBPath()
    return "cocosStudio/Common/CSB/ShuffleTextNode.csb"
end

function ShuffleTextNode:getBindingInfo()
    return {
        ["_KW_IMG_SHUFFLE_TEXT"] = {varName = "_imgShuffleText"},
    }
end

function ShuffleTextNode:ctor(localSeat, isMahjong)
    ShuffleTextNode.super.ctor(self)
    self._localSeat = localSeat or -1
    if not isMahjong then
        shuffleTextPos[1] = {pos = cc.p(80, -30), anchX = 0, anchY = 0.5}
        shuffleTextPos[2] = {pos = cc.p(-40, 100), anchX = 0, anchY = 0.5}
        shuffleTextPos[3] = {pos = cc.p(-80, -30), anchX = 1, anchY = 0.5}
    end
    self:initUI()
end

function ShuffleTextNode:getProxyEvents()
    return {
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_UPDATE_SHUFFLE_TEXT", callBack = "updateShuffleText"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_START_SHUFFLE", callBack = "clearShuffleText"},
        -- {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_STATE_CHANGED", callBack = "onPlayerStateChanged"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "updateShuffleText"},
    }
end

function ShuffleTextNode:initUI()
    if self._localSeat and shuffleTextPos[self._localSeat] and self._imgShuffleText then
        self._imgShuffleText:setAnchorPoint(shuffleTextPos[self._localSeat].anchX, shuffleTextPos[self._localSeat].anchY)
        self._imgShuffleText:setPosition(shuffleTextPos[self._localSeat].pos)
    end
end

function ShuffleTextNode:updateShuffleText()
    local propUseModule = CF.game:getModule("PropUse")
    if not propUseModule then
        return
    end
    local isSupportAllShuffle = propUseModule:isSupportAllVisible()
    if not isSupportAllShuffle then
        return
    end
    local shuffleIds = propUseModule:getShuffleIds() or {}
    for k,v in pairs(shuffleIds) do
        local playerData = CF.roomData:getPlayerDataByNumberID(k)
        if playerData and v == CF.roomData:getPlayCount() + 1 then
            local localSeat = CF.roomData:seatToLocal(playerData:getSeat())
            if localSeat and localSeat~=-1 then
                local headNode = propUseModule:getHeadNode(localSeat)
                if not tolua.isnull(headNode) and headNode.getChildByName then
                    local shuffleImgNode = headNode:getChildByName("IMG_SHUFFLE_TIP")
                    if shuffleImgNode then
                        if CF.roomData:getIsGameStart() then
                            shuffleImgNode:setVisible(false)
                        else
                            shuffleImgNode:setVisible(true)
                        end
                    end
                end
            end
        end
    end
end

function ShuffleTextNode:clearShuffleText()
    local propUseModule = CF.game:getModule("PropUse")
    if not propUseModule or not propUseModule.getHeadNode then
        return
    end
    for i = 1, 4 do
        local headNode = propUseModule:getHeadNode(i)
        if not tolua.isnull(headNode) and headNode.getChildByName then
            local shuffleImgNode = headNode:getChildByName("IMG_SHUFFLE_TIP")
            if shuffleImgNode then
                shuffleImgNode:setVisible(false)
            end
        end
    end
end

function ShuffleTextNode:onPlayerStart()
    local propUseModule = CF.game:getModule("PropUse")
    if not propUseModule or not propUseModule.getShuffleIds then
        return
    end
    local isSupportAllShuffle = propUseModule:isSupportAllVisible()
    if not isSupportAllShuffle then
        return
    end
    local shuffleIds = propUseModule:getShuffleIds()
    local event = {}
    event.msg = {}
    event.msg.shuffleIds = {}
    for k,v in pairs(shuffleIds) do
        if v == CF.roomData:getPlayCount() then
            table.insert(event.msg.shuffleIds, k)
        end
    end
    if #event.msg.shuffleIds > 0 then
        self:updateShuffleText(event)
    end
end

return ShuffleTextNode
