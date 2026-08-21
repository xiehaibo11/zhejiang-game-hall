local AwardGroupView =
    class(
    "AwardGroupView",
    function()
        local ui = ccui.Layout:create()
        local csb = cc.CSLoader:createNode("hall/CSB/DarkShuangKouChallenge/AwardGroup.csb")
        ui:setAnchorPoint(csb:getAnchorPoint())
        ui:setPosition(csb:getPosition())
        ui:setContentSize(csb:getContentSize())
        for _, child in ipairs(csb:getChildren()) do
            child:removeFromParent()
            ui:addChild(child)
        end
        return ui
    end
)

function AwardGroupView:getBindingInfo()
    return {
        ["_KW_PANEL_AWARD_MORE"] = {varName = "_panelAwardMore"},
        ["_KW_LISTVIEW_AWARD_MORE"] = {varName = "_listViewAwardMore"},
        ["_KW_IMG_AWARD_BG"] = {varName = "_imgAwardBg"}
    }
end

function AwardGroupView:ctor()
    local bindingInfo = self:getBindingInfo()
    XH.BindUITool.bindTo(self, self, bindingInfo)
    self:setCascadeOpacityEnabled(true)
end

function AwardGroupView:flushAwardItems(curRewards, state)
    local nowBgSize = self._panelAwardMore:getContentSize()
    local width = 100 * #curRewards
    local addWidth = 10
    self:setAnchorPoint(cc.p(0.5, 0.5))
    self:setContentSize(cc.size(width + addWidth, nowBgSize.height))
    -- self._panelAwardMore:setPositionPercent(cc.p(0.5, 0.5))
    -- self._imgAwardBg:setPositionPercent(cc.p(0.5, 0.5))
    self._panelAwardMore:setContentSize(cc.size(width + addWidth, nowBgSize.height))
    self._imgAwardBg:setContentSize(cc.size(width + addWidth, self._imgAwardBg:getContentSize().height))
    if state == 1 then
        self._imgAwardBg:loadTexture("DarkShuangKouChallenge_ImgBqh3.png", ccui.TextureResType.plistType)
    else
        self._imgAwardBg:loadTexture("DarkShuangKouChallenge_ImgBql3.png", ccui.TextureResType.plistType)
    end

    local awardListMore = self._listViewAwardMore
    awardListMore:setContentSize(cc.size(width, nowBgSize.height))
    awardListMore:setScrollBarOpacity(0)
    awardListMore:setPositionX((width + addWidth) / 2)
    awardListMore:removeAllChildren()

    for i = 1, #curRewards do
        local node = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.AwardItemView").new()
        if node then
            node:showAward(curRewards[i], state, "TaskProcess")
            if state == 2 then
                node:setGrayedAndEnabled(true)
            end
            awardListMore:addChild(node)
        end
    end

    ccui.Helper:doLayout(self)
end

return AwardGroupView
�	