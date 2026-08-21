-- 月卡UI
local MonthlyCardView = class("MonthlyCardView", XH.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")
local LocalConfig = require("lobby.Modules.GoldNew.Configs.LocalConfig")

function MonthlyCardView:getCSBPath()
    return "cocosStudio/hall/CSB/MonthlyCard/MonthlyCardView.csb"
end

function MonthlyCardView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_MONTHLY_"] = {varName = "_monthlyBtn", type = XH.UI_TYPE.BUTTON, beginIndex = 1, endIndex = 2, onTouchEnded = "onTouchEventChangeMonthlyCard"},
        ["_KW_IMAGE_MONTHLY_"] = {varName = "_monthlyImage", beginIndex = 1, endIndex = 2},
        ["_KW_ROOT_PANEL"] = {varName = "_rootPanel"},
        ["_KW_IMG_TITLE"] = {varName = "_titleImg"},
        ["_KW_TEXT_RATE"] = {varName = "_rateText"},
        ["_KW_MAIN_IMG_ANI"] = {varName = "_mainImgAni"},
        ["_KW_LIGHT_ANI_"] = {varName = "_lightAni", beginIndex = 1, endIndex = 4},
        ["_KW_TEXT_BUY_GET_AWARD"] = {varName = "_buyGetAwardText"},
        ["_KW_PANEL_LEFT_TIME"] = {varName = "_leftTimePanel"},
        ["_KW_TEXT_LEFT_TIME"] = {varName = "_leftTimeText"},
        ["_KW_BTN_BUY"] = {varName = "_buyBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventBuy"},
        ["_KW_PANEL_RATE"] = {varName = "_ratePanel"},
        ["_KW_ANI_BUY_GET_LIGHT"] = {varName = "_buyGetLightAni"},
        ["_KW_TEXT_BUY"] = {varName = "_buyText"},
        ["_KW_BTN_GET"] = {varName = "_getBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGet"},
        ["_KW_PANEL_TOTAL_AWARD"] = {varName = "_totalAwardPanel"},
        ["_KW_TEXT_TOTAL_AWARD"] = {varName = "_totalAwardText"},
        ["_KW_LIST_AWARD"] = {varName = "_totalAwardList"},
        ["_KW_UI_AWARD_ITEM"] = {varName = "_totalAwardItem"}
    }
end

function MonthlyCardView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootPanel}
end

function MonthlyCardView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("MonthlyCard"), eventKeyName = "EVENT_FLUSH_MONTHLY_CARD", callBack = "updateData"}
    }
end

function MonthlyCardView:ctor(param)
    self._isAutoPop = param and param.auto
    self._changeSceneName = param and param.changeSceneName or ""
    self._areaId = param and param.area or ""
    self._defalutpropId = param and param.propId
    MonthlyCardView.super.ctor(self)
    self._rootPanel:setOpacity(0)
    self._monthlyCardPropId = XH.lobby:getModule("MonthlyCard").MonthlyCardType.CAI_SHEN_PROP_ID
    if self._defalutpropId == XH.lobby:getModule("MonthlyCard").MonthlyCardType.CAI_SHEN_PROP_ID or self._defalutpropId == XH.lobby:getModule("MonthlyCard").MonthlyCardType.CHAO_ZHI_PROP_ID then
        self._monthlyCardPropId = self._defalutpropId
    end
    self:throwDataShow()

    self._totalAwardItem:setVisible(false)
    self._totalAwardList:setScrollBarEnabled(false)
    self._totalAwardList:setItemModel(self._totalAwardItem)
    self._titleImg:ignoreContentAdaptWithSize(true)

    self:updateTab()
    self:initUI()
    -- XH.lobby:getModule("MonthlyCard"):reqMonthlyCardInfo()
end

function MonthlyCardView:initAniUI()
    local filePath = "cocosStudio/hall/CSB/MonthlyCard/spine/"
    self._lightAni1:removeAllChildren()
    self._lightAni2:removeAllChildren()
    self._lightAni3:removeAllChildren()
    self._lightAni4:removeAllChildren()
    self._buyGetLightAni:removeAllChildren()

    -- 主界面后面的光（通用）
    XH.SpineManager:playAni(self._lightAni1, "animation/Common/", "zzb_ty_bhxz2", "animation", true)
    local spineDataEvent = {
        ["jin"] = function()
            XH.SpineManager:playAni(self._lightAni3, "animation/Common/", "zzb_ty_xgaung3", "animation", false)
        end,
        ["jinbi"] = function()
            XH.SpineManager:playAni(self._buyGetLightAni, filePath, "zzb_czyk_jbyk", "saoguang", false)
        end,
        ["jl"] = function()
            local items = self._totalAwardList:getItems()
            for _, item in pairs(items) do
                local aniNode = XH.UITool.seekNodeByName(item, "_KW_ANI_NODE")
                if aniNode then
                    XH.SpineManager:playAni(aniNode, "animation/Common/", "zzb_ty_jlsg3", "animation")
                end
            end
        end,
        ["bao"] = function()
            XH.SpineManager:playAni(self._lightAni4, "animation/Common/", "zzb_ty_baojinbi3", "animation", false)
        end
    }
    if self._monthlyCardPropId == XH.lobby:getModule("MonthlyCard").MonthlyCardType.CHAO_ZHI_PROP_ID then
        XH.SpineManager:playAniWithComplete(self._mainImgAni, filePath, "zzb_czyk_jbyk", "cx", false, "loop", true, nil, spineDataEvent)
        XH.SpineManager:playAni(self._lightAni2, "animation/Common/", "zzb_ty_piaolizi2", "animation", true)
    elseif self._monthlyCardPropId == XH.lobby:getModule("MonthlyCard").MonthlyCardType.CAI_SHEN_PROP_ID then
        XH.SpineManager:playAniWithComplete(self._mainImgAni, filePath, "zzb_czyk_csyk", "cx", false, "loop", true, nil, spineDataEvent)
        XH.SpineManager:playAni(self._lightAni4, "animation/Common/", "zzb_ty_baojinbi3", "animation", false)
    end

    self._closeBtn:stopAllActions()
    self._buyBtn:stopAllActions()
    self._getBtn:stopAllActions()
    self._totalAwardPanel:stopAllActions()
    self._ratePanel:stopAllActions()

    self._closeBtn:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = filePath .. "zzb_czyk_jbyk_animation.json", animationName = "cx", boneName = "x", slotName = "x"})
    self._buyBtn:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = filePath .. "zzb_czyk_jbyk_animation.json", animationName = "cx", boneName = "btn", slotName = "btn"})
    self._getBtn:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = filePath .. "zzb_czyk_jbyk_animation.json", animationName = "cx", boneName = "btn", slotName = "btn"})
    self._totalAwardPanel:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = filePath .. "zzb_czyk_jbyk_animation.json", animationName = "cx", boneName = "qipao", slotName = "qipao"})

    self._ratePanel:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = filePath .. "zzb_czyk_jbyk_animation.json", animationName = "cx", boneName = "tips", slotName = "tips"})
    self:stopAllActions()
    self:runAction(
        cc.RepeatForever:create(
            cc.Sequence:create(
                cc.DelayTime:create(2),
                cc.CallFunc:create(
                    function()
                        self._ratePanel:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = filePath .. "zzb_czyk_jbyk_animation.json", animationName = "cx", boneName = "tips"})
                    end
                )
            )
        )
    )
end

function MonthlyCardView:initUI()
    self:initAniUI()
    self:updateData()
end

function MonthlyCardView:updateData()
    self:updateConfigUI()
    self:updateState()
end

function MonthlyCardView:updateTab()
    local isMonthType1 = self._monthlyCardPropId == XH.lobby:getModule("MonthlyCard").MonthlyCardType.CHAO_ZHI_PROP_ID
    self._monthlyBtn1:setTouchEnabled(not isMonthType1)
    self._monthlyBtn2:setTouchEnabled(isMonthType1)
    self._titleImg:loadTexture(isMonthType1 and "MonthlyCard_Title_2.png" or "MonthlyCard_Title_1.png", ccui.TextureResType.plistType)
    self._monthlyBtn1:loadTexture(isMonthType1 and "MonthlyCard_Btn_on.png" or "MonthlyCard_Btn_off.png", ccui.TextureResType.plistType)
    self._monthlyBtn2:loadTexture(isMonthType1 and "MonthlyCard_Btn_off.png" or "MonthlyCard_Btn_on.png", ccui.TextureResType.plistType)
    self._monthlyImage1:loadTexture(isMonthType1 and "MonthlyCard_Btn_cz_off.png" or "MonthlyCard_Btn_cz_on.png", ccui.TextureResType.plistType)
    self._monthlyImage2:loadTexture(isMonthType1 and "MonthlyCard_Btn_cs_on.png" or "MonthlyCard_Btn_cs_off.png", ccui.TextureResType.plistType)
end

function MonthlyCardView:updateConfigUI()
    local monthlyCardConfig = XH.lobby:getModule("MonthlyCard"):getMonthlyCardInfo(self._monthlyCardPropId)
    if not monthlyCardConfig then
        return
    end
    self._rateText:setString(string.format("%d%%", monthlyCardConfig.returnRatio))
    self._buyGetAwardText:setString(XH.StringTool.changeNumByComma(monthlyCardConfig.purchaseRewards[1].count, 4))
    self._totalAwardText:setString(string.format("共计可得%s金币", XH.StringTool.numberToString(monthlyCardConfig.totalGold, 1)))

    self._totalAwardList:removeAllItems()
    for index, value in ipairs(monthlyCardConfig.dailyRewards) do
        self._totalAwardList:pushBackDefaultItem()
        local items = self._totalAwardList:getItems()
        local item = items[#items]
        item:setVisible(true)
        item:setTag(index)

        local text = XH.UITool.seekNodeByName(item, "_KW_TEXT_NAME")
        if text then
            text:setString(value.name)
        end

        local imgZaisong = XH.UITool.seekNodeByName(item, "_KW_IMG_ZAISONG")
        if imgZaisong then
            imgZaisong:setVisible(index == 3)
        end

        local txtNum = XH.UITool.seekNodeByName(item, "_KW_TEXT_NUM")
        if txtNum then
            if value.count and value.count > 0 then
                txtNum:setString("x" .. value.count)
            else
                txtNum:setString("")
            end
        end

        local awardPic = XH.UITool.seekNodeByName(item, "_KW_PIC_AWARD")
        if awardPic then
            local headImage = XH.RemoteImage.new()
            headImage:setAnchorPoint(cc.p(0.5, 0.5))
            headImage:setPosition(awardPic:getContentSize().width * 0.5, awardPic:getContentSize().height * 0.5)
            headImage:ignoreContentAdaptWithSize(false)
            headImage:setContentSize(awardPic:getContentSize().width, awardPic:getContentSize().height)
            headImage:setMaxContentSize(cc.size(awardPic:getContentSize().width, awardPic:getContentSize().height))
            headImage:setUrl(value.icon or "")
            awardPic:addChild(headImage)
        end
    end
end

function MonthlyCardView:updateState()
    local monthlyCardConfig = XH.lobby:getModule("MonthlyCard"):getMonthlyCardInfo(self._monthlyCardPropId)
    if not monthlyCardConfig then
        return
    end
    local price = XH.lobby:getModule("MonthlyCard"):getProductPrice(monthlyCardConfig.propId)
    if monthlyCardConfig.validityDays <= 0 then
        self._totalAwardPanel:setVisible(true)
        self._leftTimeText:setString("")
        self._leftTimePanel:setVisible(false)
        self._buyBtn:setVisible(true)
        self._buyText:setString(string.format("%s元", price))
        self._getBtn:setVisible(false)
    else
        self._leftTimeText:setString(string.format("剩余%d天", monthlyCardConfig.validityDays))
        self._leftTimePanel:setVisible(true)
        if monthlyCardConfig.dailyGetLimit <= 0 then
            self._totalAwardPanel:setVisible(true)
            self._buyBtn:setVisible(true)
            self._buyText:setString(string.format("续订%s元", price))
            self._getBtn:setVisible(false)
        else
            self._totalAwardPanel:setVisible(false)
            self._buyBtn:setVisible(false)
            self._getBtn:setVisible(true)
        end
    end
end

function MonthlyCardView:onTouchEventChangeMonthlyCard(send)
    local strName = send:getName()
    local touchIndex = XH.StringTool.getNumberSuffixByString(strName)
    if touchIndex == 1 then
        self._monthlyCardPropId = XH.lobby:getModule("MonthlyCard").MonthlyCardType.CHAO_ZHI_PROP_ID
    else
        self._monthlyCardPropId = XH.lobby:getModule("MonthlyCard").MonthlyCardType.CAI_SHEN_PROP_ID
    end
    self:throwDataShow()
    self:updateTab()
    self:initUI()
end

function MonthlyCardView:onTouchEventBuy()
    XH.lobby:getModule("MonthlyCard"):buyMonthlyCard(self._monthlyCardPropId)
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("buy", {id = "MonthlyCard"})
    end
    self:throwDataBuy()
    self._buyPropId = self._monthlyCardPropId

    self._buyBtn:setTouchEnabled(false)
    self._buyBtn:runAction(
        cc.Sequence:create(
            cc.DelayTime:create(1),
            cc.CallFunc:create(
                function()
                    self._buyBtn:setTouchEnabled(true)
                end
            )
        )
    )
end

function MonthlyCardView:onTouchEventGet()
    local monthlyCardConfig = XH.lobby:getModule("MonthlyCard"):getMonthlyCardInfo(self._monthlyCardPropId)
    if not monthlyCardConfig then
        return
    end
    XH.lobby:getModule("MonthlyCard"):getMonthlyCardAward(monthlyCardConfig.id)
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("buy", {id = "MonthlyCard"})
    end

    self._getBtn:setTouchEnabled(false)
    self._getBtn:runAction(
        cc.Sequence:create(
            cc.DelayTime:create(1),
            cc.CallFunc:create(
                function()
                    self._getBtn:setTouchEnabled(true)
                end
            )
        )
    )
    self:throwDataGet()
end

function MonthlyCardView:onTouchEventClose()
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("close", {id = "MonthlyCard"})
    end
    self:close()
end

function MonthlyCardView:getThrowDataExt()
    local area = ""
    if self._isAutoPop then
        area = "弹窗曝光" .. self._changeSceneName
    elseif self._areaId ~= "" then
        area = self._areaId
    end
    local monthlyCardType = ""
    if self._monthlyCardPropId == XH.lobby:getModule("MonthlyCard").MonthlyCardType.CHAO_ZHI_PROP_ID then
        monthlyCardType = "超值月卡"
    elseif self._monthlyCardPropId == XH.lobby:getModule("MonthlyCard").MonthlyCardType.CAI_SHEN_PROP_ID then
        monthlyCardType = "财神月卡"
    end
    return {page = area, page_item_id = monthlyCardType}
end

-- 上抛曝光
function MonthlyCardView:throwDataShow()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zzg2025101103, self:getThrowDataExt())
end

-- 上抛领奖
function MonthlyCardView:throwDataGet()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zzg2025101104, self:getThrowDataExt())
end

-- 上抛购买
function MonthlyCardView:throwDataBuy()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zzg2025101105, self:getThrowDataExt())
end

return MonthlyCardView
 �9  