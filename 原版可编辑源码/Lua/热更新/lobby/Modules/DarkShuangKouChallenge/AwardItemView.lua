local AwardItemView =
    class(
    "AwardItemView",
    function()
        local ui = ccui.Layout:create()
        local csb = cc.CSLoader:createNode("hall/CSB/DarkShuangKouChallenge/AwardItem.csb")
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

function AwardItemView:getBindingInfo()
    return {
        ["_KW_POS_ANI"] = {varName = "_posAni"},
        ["_KW_AWARD_ITEM"] = {varName = "_awrdItem"},
        ["_KW_UI_PROP_IMG"] = {varName = "_uiPropImg"},
        ["_KW_UI_PROP_NAME"] = {varName = "_uiPropName"},
        ["_KW_UI_PROP_CNT"] = {varName = "_uiPropCnt"}
    }
end

function AwardItemView:ctor()
    local bindingInfo = self:getBindingInfo()
    XH.BindUITool.bindTo(self, self, bindingInfo)
    self:setCascadeOpacityEnabled(true)
end

function AwardItemView:showAward(award, state, ntype)
    self._uiPropName:setVisible(false)
    local addNode = self._uiPropImg
    local headImage = XH.RemoteImage.new()
    headImage:setAnchorPoint(cc.p(0.5, 0.5))
    headImage:setPosition(addNode:getContentSize().width * 0.5, addNode:getContentSize().height * 0.5)
    headImage:ignoreContentAdaptWithSize(false)
    headImage:setContentSize(addNode:getContentSize().width, addNode:getContentSize().height)
    headImage:setMaxContentSize(cc.size(addNode:getContentSize().width, addNode:getContentSize().height))
    headImage:setUrl(award.icon or "")
    addNode:addChild(headImage)
    local count = award.count
    self._uiPropCnt:setString("x" .. count)
    self._uiPropName:setString(award.name)

    self:setContentSize(self._awrdItem:getContentSize())

    if ntype == "TaskProcess" then
        if state == 1 then
            self._uiPropCnt:enableOutline(cc.c3b(0xaf, 0x51, 0x12), 2)
            XH.SpineManager:playAni(self._posAni, "animation/Common/", "zzb_ty_xingguang", "animation", true, nil, nil, false)
        else
            self._uiPropCnt:enableOutline(cc.c3b(0x32, 0x3A, 0x63), 2)
        end
    elseif ntype == "CardSkill" then
        self._uiPropCnt:enableOutline(cc.c3b(0x32, 0x3A, 0x63), 2)
        if state == 1 then
            local path = "hall/CSB/DarkShuangKouChallenge/spine/"
            self._awrdItem:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = path .. "prop_animation.json", animationName = "loop", boneName = "prop", slotName = "prop", isLoop = true})
            XH.SpineManager:playAni(self._posAni, "animation/Common/", "zzb_ty_xingguang", "animation", true, nil, nil, false)
        end
    elseif ntype == "QuizTitle" then
        if state == 1 then
            self._uiPropCnt:enableOutline(cc.c3b(0x92, 0x19, 0x30), 2)
        else
            self._uiPropCnt:enableOutline(cc.c3b(0x32, 0x3A, 0x63), 2)
        end
    elseif ntype == "TodayQuiz" then
        self._uiPropCnt:enableOutline(cc.c3b(0xaf, 0x51, 0x12), 2)
        self._uiPropCnt:setPosition(cc.p(92, 40))
        XH.SpineManager:playAni(self._posAni, "animation/Common/", "zzb_ty_xingguang", "animation", true, nil, nil, false)
    end

    ccui.Helper:doLayout(self)
end

return AwardItemView
