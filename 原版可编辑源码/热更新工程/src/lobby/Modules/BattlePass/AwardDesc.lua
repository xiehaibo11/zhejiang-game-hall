local BattlePassAwardDescView = class("BattlePassAwardDescView", XH.ViewBase)

function BattlePassAwardDescView:getCSBPath()
    return "hall/CSB/BattlePass/AwardDesc.csb"
end

function BattlePassAwardDescView:ctor(param)
    param = param or {}
    BattlePassAwardDescView.super.ctor(self)
    self._panel:setSwallowTouches(false)
    self:init(param)
end

function BattlePassAwardDescView:getBindingInfo()
    return {
        ["_KW_PANEL"] = {varName = "_panel", onTouch = "onTouchEventPanel"},
        ["_KW_TEXT_BACK"] = {varName = "_imgTextBack"},
        ["_KW_TEXT_DESC"] = {varName = "_textDesc"}
    }
end

function BattlePassAwardDescView:init(param)
    self._textDesc:setString(param.desc)
    ccui.Helper:doLayout(self._textDesc)
    local size = self._textDesc:getContentSize()
    local wSize = math.max(size.width + 40, 145)
    local hSize = self._imgTextBack:getContentSize().height
    self._textDesc:setPositionX(wSize / 2)
    self._imgTextBack:setContentSize(cc.size(wSize, hSize))
    self._imgTextBack:setPosition(param.wPos)
end

function BattlePassAwardDescView:onTouchEventPanel(sender, eventType)
    if eventType == ccui.TouchEventType.began then
        self:close()
    end
end

return BattlePassAwardDescView
