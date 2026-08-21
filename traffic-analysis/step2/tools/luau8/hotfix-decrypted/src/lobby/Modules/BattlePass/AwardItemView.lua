local BattlePassAwardItemView =
    class(
    "BattlePassAwardItemView",
    function()
        local ui = ccui.Layout:create()
        local csb = cc.CSLoader:createNode("hall/CSB/BattlePass/AwardItem.csb")
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
local BattlePassConfig = require("lobby.Modules.BattlePass.Config")

local lightAniPath = {
    {
        aniPath = "animation/Common/",
        fileName = "zzb_ty_jlgx",
        aniName = "animation"
    },
    {
        aniPath = "animation/Common/",
        fileName = "zzb_ty_caisegx",
        aniName = "animation"
    },
    {
        aniPath = "animation/Common/",
        fileName = "zzb_ty_caisegx",
        aniName = "animation"
    }
}

local resPath = "cocosStudio/hall/CSB/BattlePass/"
local awardLevelInfo = {
    {
        bg = "battlepass_zzzl_djk_01.png",
        font = resPath .. "Font/zzzl_fnt_num02.fnt",
        lock = "battlepass_zzzl_s_01.png"
    },
    {
        bg = "battlepass_zzzl_djk_02.png",
        font = resPath .. "Font/zzzl_fnt_num04.fnt",
        lock = "battlepass_zzzl_s_03.png"
    },
    {
        bg = "battlepass_zzzl_djk_03.png",
        font = resPath .. "Font/zzzl_fnt_num03.fnt",
        lock = "battlepass_zzzl_s_02.png"
    }
}

function BattlePassAwardItemView:ctor()
    local bindingInfo = self:getBindingInfo()
    XH.BindUITool.bindTo(self, self, bindingInfo)
    self:setCascadeOpacityEnabled(true)
end

function BattlePassAwardItemView:getBindingInfo()
    return {
        ["_KW_ITEM_AWARD_PANEL"] = {varName = "_imgAwardPanel", onTouch = "onTouchEventAward"},
        ["_KW_ITEM_AWARD_BG"] = {varName = "_imgAwardBg"},
        ["_KW_ITEM_AWARD"] = {varName = "_imgAward"},
        ["_KW_ITEM_AWARD_CNT"] = {varName = "_textAwardCnt"},
        ["_KW_ITEM_AWARD_LOCK"] = {varName = "_imgAwardLock"},
        ["_KW_ITEM_AWARD_GET"] = {varName = "_imgAwardGet"},
        ["_KW_ITEM_AWARD_ANI_NODE"] = {varName = "_awardAniNode"},
        ["_KW_ITEM_AWARD_ANI_NODE_SG"] = {varName = "_awardAniNodeSG"}
    }
end

---- awardInfo
-- image
-- propValue
---- extInfo
-- lock 是否已购买 --> 锁
-- haveGet 是否已领取  --> 勾
-- ani 是否有动画
-- isSingleItem 是否有扫光
function BattlePassAwardItemView:init(awardInfo, extInfo)
    self._imgAwardPanel:setSwallowTouches(false)
    extInfo = extInfo or {}
    extInfo.lock = extInfo.lock == nil and false or extInfo.lock
    extInfo.haveGet = extInfo.haveGet == nil and false or extInfo.haveGet
    extInfo.ani = extInfo.ani == nil and false or extInfo.ani
    extInfo.isSingleItem = extInfo.isSingleItem == nil and false or extInfo.isSingleItem
    extInfo.scale = extInfo.scale == nil and 1 or extInfo.scale
    extInfo.lv = extInfo.lv == nil and 1 or extInfo.lv
    extInfo.newStyle = extInfo.newStyle == nil and false or extInfo.newStyle
    extInfo.clickCallback = extInfo.clickCallback or function()
        end
    self._extInfo = extInfo

    local awardLevel = BattlePassConfig:getAwardLevel(awardInfo.propId)

    -- 道具背景
    self._imgAwardBg:loadTexture(awardLevelInfo[awardLevel].bg, ccui.TextureResType.plistType)

    -- 道具图片
    local imgAward = self._imgAward
    local propImage = XH.RemoteImage.new()
    propImage:setAnchorPoint(cc.p(0.5, 0.5))
    propImage:setPosition(imgAward:getContentSize().width * 0.5, imgAward:getContentSize().height * 0.5)
    propImage:ignoreContentAdaptWithSize(false)
    propImage:setContentSize(imgAward:getContentSize().width, imgAward:getContentSize().height)
    propImage:setMaxContentSize(cc.size(imgAward:getContentSize().width, imgAward:getContentSize().height))
    propImage:setUrl(awardInfo.image or "")
    imgAward:addChild(propImage)

    -- 道具数量
    if awardInfo.propValue then
        self._textAwardCnt:setString("x" .. XH.lobby:getModule("BattlePass"):getNumberString(awardInfo.propValue))
    else
        self._textAwardCnt:setString("")
    end

    -- 锁 标记
    self._imgAwardLock:setVisible(extInfo.lock)
    if extInfo.lv == 1 then
        self._imgAwardLock:loadTexture("battlepass_zzzl_s_01.png", ccui.TextureResType.plistType)
    elseif extInfo.lv == 2 and extInfo.newStyle then
        self._imgAwardLock:loadTexture("battlepass_zzzl_s_02.png", ccui.TextureResType.plistType)
    else
        self._imgAwardLock:loadTexture("battlepass_zzzl_s_03.png", ccui.TextureResType.plistType)
    end

    -- 领取标记
    self._imgAwardGet:setVisible(extInfo.haveGet)

    -- 可领取动画
    self._awardAniNode:removeAllChildren()
    if extInfo.ani then
        if extInfo.newStyle then
            self._awardAniNode:setScale(1)
            -- 添加黄色框
            local imgBorder = ccui.ImageView:create("cocosStudio/hall/CSB/BattlePass/animation/kuang.png")
            imgBorder:setAnchorPoint(cc.p(0.5, 0.5))
            imgBorder:setPosition(cc.p(self._awardAniNode:getContentSize().width * 0.5, self._awardAniNode:getContentSize().height * 0.5))
            self._awardAniNode:addChild(imgBorder)
            local aniInfo = {
                aniPath = "animation/Common/",
                fileName = "zzb_ty_xxgx",
                aniName = "animation"
            }
            XH.SpineManager:playAni(self._awardAniNode, aniInfo.aniPath, aniInfo.fileName, aniInfo.aniName, true)
        else
            self._awardAniNode:setScale(extInfo.lv ~= 1 and 1 or 0.65)
            local aniInfo = lightAniPath[extInfo.lv]
            XH.SpineManager:playAni(self._awardAniNode, aniInfo.aniPath, aniInfo.fileName, aniInfo.aniName, true)
        end
    end

    if extInfo.isSingleItem then
        XH.SpineManager:playAni(self._awardAniNodeSG, "animation/Common/", "zzb_ty_jlsg2", "animation", true)
    end

    self._imgAwardPanel:setScale(extInfo.scale)
    ccui.Helper:doLayout(self._imgAwardPanel)
    local x = self._imgAwardPanel:getContentSize()
    self:setContentSize(cc.size(x.width * extInfo.scale, x.height * extInfo.scale))
    self._imgAwardPanel:setPosition(cc.p(self._imgAwardPanel:getParent():getContentSize().width / 2, self._imgAwardPanel:getParent():getContentSize().height / 2))
end

function BattlePassAwardItemView:onTouchEventAward(sender, eventType)
    if eventType == ccui.TouchEventType.began then
        self._startMovePos = sender:getTouchBeganPosition()
    elseif eventType == ccui.TouchEventType.canceled or eventType == ccui.TouchEventType.ended then
        local endMovePos = sender:getTouchEndPosition()
        if self._startMovePos then
            if math.abs(self._startMovePos.x - endMovePos.x) > 30 or math.abs(self._startMovePos.y - endMovePos.y) > 30 then
                self._startMovePos = nil
                return
            end
        end
        if self._extInfo and self._extInfo.clickCallback then
            self._extInfo.clickCallback(self._extInfo, self)
        end
        self._startMovePos = nil
    end
end

return BattlePassAwardItemView
�