local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")
local UIMahJokerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahJokerArea")

local KW_JOKER_MAH = "KW_JOKER_MAH"

function UIMahLayer:getProxyEvents()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_JOKER_DATA_SET", callBack = "onEventSetJokerOpenData"}
    return proxyEvents
end

function UIMahLayer:onEventSetJokerOpenData(event)
    if event.msg == nil then
        return
    end
    self._openMahs:setJokerMahs(event.msg.openMahs)
end

function UIMahLayer:setOpenMahs(openMahs)
    if not self._KW_ADAPT_MAH_5 then
        return
    end
    local openMahsNode = self._KW_ADAPT_MAH_5:getChildByName(KW_JOKER_MAH)
    if not openMahsNode then
        return
    end
	self:clearOpenMahs()
    if not self._openMahs then
        self._openMahs = UIMahJokerArea.new()
        self._openMahs:init(openMahsNode)
        self._openMahs:retain() -- 因为UIMahJokerArea没有添加到场景中，会自动释放，所以需要添加引用
    end
    --财神标志变为花牌标志
    if self:getGameData():getIsJokerToFlower() then
        self._openMahs:setIsFlower(true)
    end
end

function UIMahLayer:onEventSurplusMah(event)
    local surplusCounts = self:getGameData():getSurPlusCounts()
    if self:getGameData():getSurPlusCounts() ~= 0 then
        surplusCounts = self:getGameData():getSurPlusCounts() - 1
    end
    local bShow = event.data.bShow
    self:setSurplusMahsCounts(surplusCounts, bShow)
end

return UIMahLayer�