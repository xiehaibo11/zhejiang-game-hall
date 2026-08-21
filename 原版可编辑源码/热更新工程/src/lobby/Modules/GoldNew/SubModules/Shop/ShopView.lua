local ShopView = class("GoldShopView", XH.Bridge.ViewBase)
local ShopConfig = import(".Config")
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local RedPointManager = import("...Manager.RedPointManager")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local ActionUtils = import("...Tool.ActionUtils")
local BagConfig = require("lobby.Modules.BagSysNew.Config")
local UI_PATH = LocalConfig.IMG_PATH.SHOP .. "tag/"
local IMG_CFG = {
    tagGiveImgs = {UI_PATH .. "Img_lan_big.png", UI_PATH .. "Img_hong_big.png", UI_PATH .. "Img_zi_big.png"},
    tagGiveOutLineColor = {cc.c3b(0x40, 0x82, 0xfd), cc.c3b(0xef, 0x50, 0x2b), cc.c3b(0xb7, 0x3e, 0xe2)},
    leftTagbg = {UI_PATH .. "Img_lan_tab.png", UI_PATH .. "Img_hong_tab.png", UI_PATH .. "Img_zi_tab.png"}
}

local ItemAniPosY = 60
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function ShopView:getCSBPath()
    return XH.Bridge:getCCSResPath("Shop/Shop.csb")
end

function ShopView:getBindingInfo()
    return {
        ["_panelLT"] = {varName = "_panelLT"},
        ["_panelTop"] = {varName = "_panelTop"},
        ["_panelLeft"] = {varName = "_panelLeft"},
        ["_panelRight"] = {varName = "_panelRight"},
        ["_panelRight2"] = {varName = "_panelRight2"},
        ["_panelSecondTab"] = {varName = "_panelSecondTab"},
        ["_listHot"] = {varName = "_listHot"},
        ["_listGoldVip"] = {varName = "_listGoldVip"},
        ["_listProduct"] = {varName = "_listProduct"},
        ["_listProductSmall"] = {varName = "_listProductSmall"},
        ["_nodeProduct"] = {varName = "_nodeProduct"},
        ["_itemProduct"] = {varName = "_itemProduct"},
        ["_itemProductAdt"] = {varName = "_itemProductAdt"},
        ["_itemLeftTab"] = {varName = "_itemLeftTab"},
        ["_listLeftTab"] = {varName = "_listLeftTab"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_btnExTipClose"] = {varName = "_btnExTipClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickExTipClose"},
        ["_btnExTipAdd"] = {varName = "_btnExTipAdd", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickExTipAdd"},
        ["_btnExTipSub"] = {varName = "_btnExTipSub", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickExTipSub"},
        ["_txtDiamondNum"] = {varName = "_txtDiamondNum"},
        ["_txtGoldNum"] = {varName = "_txtGoldNum"},
        ["_txtRoomCardNum"] = {varName = "_txtRoomCardNum"},
        ["_txtCouponNum"] = {varName = "_txtCouponNum"},
        ["_btnBag"] = {varName = "_btnBag", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBag"},
        ["_btnCus"] = {varName = "_btnCus", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickCus"},
        ["_panelRoomCard"] = {varName = "_panelRoomCard"},
        ["_panelCoupon"] = {varName = "_panelCoupon"},
        ["_panelAddDiamond"] = {varName = "_panelAddDiamond", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddDiamond"},
        ["_panelAddGold"] = {varName = "_panelAddGold", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddGold"},
        ["_panelAddRoomCard"] = {varName = "_panelAddRoomCard", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddRoomCard"},
        ["_listSecondMenu"] = {varName = "_listSecondMenu"},
        ["_itemSecondTab"] = {varName = "_itemSecondTab"},
        ["_txtSecondTabTitle1"] = {varName = "_txtSecondTabTitle1"},
        ["_txtSecondTabTitle2"] = {varName = "_txtSecondTabTitle2"},
        ["_txtNoneProduct"] = {varName = "_txtNoneProduct"},
        ["_KW_VIP_NOTICE"] = {varName = "_KW_VIP_NOTICE"},
        ["_KW_BTN_VIP_NOTICE"] = {varName = "_vipNoticeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchVipNotice"},
        ["_panelProductInfo"] = {varName = "_panelProductInfo"},
        ["_panelExchangeTip"] = {varName = "_panelExchangeTip"},
        ["_panelShowAni"] = {varName = "_panelShowAni"}
    }
end

function ShopView:getProxyEvents()
    return {
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "flushTopInfo"},
        {module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "flushTopInfo"},
        -- {module = XH.Bridge:getModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onRefresh"}, -- 获取钻石
        {module = self:getShopModule(), eventKeyName = "EVNET_DIAMONDS_GOODS_LIST", callBack = "onRefreshNewGoodsList"}, -- 获取钻石
        -- {module = XH.Bridge:getModule("Shop"), eventKeyName = "EVENT_PAGE_PRODUCTS_CONFIG", callBack = "onEventGetPagProducts"}, -- 获取金币
        {module = XH.Bridge:getModule("Shop"), eventKeyName = "EVNET_DIAMOND_BUY_RESULT", callBack = "onPayResut"}, -- 钻石支付结果
        {module = self:getShopModule(), eventKeyName = "EVENT_GOLDHALL_EXCHANGE_INFO", callBack = "onEventGetGoldHallProducts"},
        {module = XH.Bridge:getModule(LocalConfig.MP.ActPeGP), eventKeyName = "EVENT_ACT_INFO", callBack = "onUpdateRecUI"},
        {module = XH.Bridge:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_SHOP_ITEMS", callBack = "onUpdateRecUI"}
    }
end

function ShopView:ctor(param)
    param = param or {}
    self._openType = "GoldNew"
    if param and param.openType then
        self._openType = param.openType
    end
    ShopView.super.ctor(self, param)
    self._panelSecondTab:setVisible(false)
    self:setCascadeOpacityEnabled(true)
    self:adaptForLiuHai()
    -- 右边页签按钮
    self._leftTabBtns = {}
    self._upSecendTabBtns = {}

    self._displayListCopy = self._listProduct
    self._defaultTabName = param.productType or ShopConfig.SpecialTag.REC

    XH.playerData:flushGoldCoin()
    self:initBagBtnVisible()
    self:flushTopInfo()
    self:startShowUI()

    XH.sdkManager:callFunction("wechat_reset_pay_params")

    self:getShopModule():reqAllGoodsV2()

    self._listLeftTab:setScrollBarEnabled(false)
    self._listSecondMenu:setScrollBarEnabled(false)
    self._listHot:setScrollBarEnabled(false)
    self._listGoldVip:setScrollBarEnabled(false)
    self._listProduct:setScrollBarEnabled(false)
    self._listProductSmall:setScrollBarEnabled(false)
    self._panelProductInfo:setVisible(false)
    self._KW_VIP_NOTICE:setVisible(false)
    self:onClickExTipClose()

    self:addBaseAni()

    self:startHide()
    self:startShow()
    XH.lobby:getModule("RecallNew"):notifyReBackTaskRequest(RecallNewConfig.ReBackTaskType.Rtt_BrowseShop)
end

function ShopView:addBaseAni()
    Utils:addSpine(XH.UITool.seekNodeByName(self._panelProductInfo, "_nodeAniLight"), "Shop", "zzb_sc_djgx", "animation")
    Utils:addSpine(XH.UITool.seekNodeByName(self._panelProductInfo, "_nodeAniBtn"), "Shop", "zzb_ty_ansg", "animation")

    local moveUp = cc.MoveBy:create(1, cc.p(0, 10)) -- 向上移动10个单位，持续1秒
    local moveDown = cc.MoveBy:create(1, cc.p(0, -10)) -- 向下移动10个单位，持续1秒
    local sequence = cc.Sequence:create(moveUp, moveDown)
    local repeatForever = cc.RepeatForever:create(sequence)
    self._panelProductInfo:getChildByName("_imgProductIconFrame"):runAction(repeatForever)
end

function ShopView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({self._panelLeft, self._panelLT, self._panelRight, self._panelRight2})
        end
    end
end

function ShopView:initSecondMenus()
    local tabInfo = self:getShopModule():getFirstTabInfo(self._firstTabTag)
    self._listSecondMenu:removeAllChildren()
    if tabInfo.sub and #tabInfo.sub >= 1 then
        for _, v in ipairs(tabInfo.sub) do
            local seceondMenuModel = self._itemSecondTab:clone()
            local titleImg = ShopConfig.getSecondTitleImg(v.title, false)
            local imgNormal = XH.UITool.seekNodeByName(seceondMenuModel, "_imgTitleNormal")
            local imgSelected = XH.UITool.seekNodeByName(seceondMenuModel, "_imgTitleSelected")
            if titleImg then
                imgNormal:setVisible(true)
                imgSelected:setVisible(true)
                imgNormal:ignoreContentAdaptWithSize(true)
                imgSelected:ignoreContentAdaptWithSize(true)
                imgNormal:loadTexture(titleImg, ccui.TextureResType.plistType)
                imgSelected:loadTexture(ShopConfig.getSecondTitleImg(v.title, true), ccui.TextureResType.plistType)
            else
                -- v.title = "聊天语音"
                local panelNormal = XH.UITool.seekNodeByName(seceondMenuModel, "panelNormal")
                local panelSelected = XH.UITool.seekNodeByName(seceondMenuModel, "panelSelected")
                imgNormal:setVisible(false)
                imgSelected:setVisible(false)
                local midX = seceondMenuModel:getContentSize().width / 2
                local chars = Utils:utf8_chars(v.title)
                local labels = {{}, {}}
                for _, c in ipairs(chars) do
                    local txt = self._txtSecondTabTitle1:clone()
                    txt:setString(c)
                    txt:setOpacity(255)
                    table.insert(labels[1], 1, txt)
                    txt:setPositionX(midX)
                    panelNormal:addChild(txt)
                    local txt = self._txtSecondTabTitle2:clone()
                    txt:setString(c)
                    table.insert(labels[2], 1, txt)
                    txt:setPositionX(midX)
                    panelSelected:addChild(txt)
                end
                Utils:doLayoutVertical(labels[1], seceondMenuModel:getContentSize().height, -10)
                Utils:doLayoutVertical(labels[2], seceondMenuModel:getContentSize().height, -10)
            end
            seceondMenuModel.tag = v.tag
            XH.UIButton.create(seceondMenuModel, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:onSecondTabChanged(seceondMenuModel, v.tag)
            end)
            self._listSecondMenu:addChild(seceondMenuModel)
        end
        self._listSecondMenu:setVisible(true)
    else
        self._listSecondMenu:setVisible(false)
    end
    self._upSecendTabBtns = self._listSecondMenu:getChildren()
    for i, btn in pairs(self._upSecendTabBtns) do
        self:registerRedPoint(btn, string.format("shop/%s/%s", self._firstTabTag, tabInfo.sub[i].tag))
    end
end

function ShopView:flushTopInfo()
    self._txtGoldNum:setText(Utils:formatGoldNum2String(XH.playerData:getSR()))
    self._txtRoomCardNum:setText(Utils:formatGoldNum2String(XH.playerData:getRoomCard()))
    self._txtCouponNum:setText(Utils:formatGoldNum2String(XH.playerData:getLiQun()))
    self._txtDiamondNum:setText(Utils:formatGoldNum2String(XH.playerData:getDiamnd()))
end

-- 初始化item
function ShopView:updateItemUI(item, productData, index, isFirst)
    isFirst = isFirst or false

    item:setName(tostring(index))
    item:setTag(productData.id or 0)
    item:setVisible(true)

    -- 初始化子项
    if isFirst then
        local btnExchange = XH.UITool.seekNodeByName(item, "_btnExchange")
        -- local btnExchangeML = XH.UITool.seekNodeByName(item, "_btnExchangeML")
        XH.UIButton.create(btnExchange, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            if item.redPointPath then
                self:getShopModule():setRedPointStateByGoodInfo(productData)
                self:getShopModule():addRedPointInfo(productData)
            end
            if productData.scoreConf and #productData.scoreConf > 1 then
                self:showExchangeTip(productData, index)
            elseif self:isProp(self._firstTabTag) then
                self:showExchangeTip(productData, index)
            else
                self:onExchangeBtnTouchEvent(item, productData)
            end
        end)

        item.index = index
        item.productData = productData
        XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            if item.redPointPath then
                self:getShopModule():setRedPointStateByGoodInfo(productData)
                self:getShopModule():addRedPointInfo(productData)
            end
            if self:isAdornment(self._firstTabTag) then
                self:onItemBgClick(item)
            else
                if self:isProp(self._firstTabTag) or self._secondTabTag == ShopConfig.SpecialTag.GIFT then
                    self:showExchangeTip(productData, index)
                else
                    self:onExchangeBtnTouchEvent(item, productData)
                end
            end
        end)

        Utils:addSpine(XH.UITool.seekNodeByName(item, "_nodeAniBtn"), "Shop", "zzb_ty_ansg", "animation")
        -- local sten = btnExchange:clone()
        -- sten:setPosition(cc.p(0, 0))
        -- local clipNode, sten = XH.UITool.moveLight(btnExchange, "hall/Image/NewGoldHall/Pop/Btn_gm.png", 0.1)
        -- sten:setContentSize(800,80)
        -- sten:setPosition(0,0)
        -- XH.UITool.moveLight2(btnExchangeML)
    end

    -- 设置item属性
    XH.UITool.setTag(item, "_btnExchange", index)
    -- 按钮索引，点击的索引
    XH.UITool.setText(item, "_txtName", productData.name)

    -- 设置商品图片
    self:setItemImageOrign(item, productData, index)
    -- 设置商品价格
    self:setItemPrizeImage(item, productData)
    -- 设置商品动画
    self:onShowItemWithAction(item, productData, index)
    self:updateShopActInfo(item, productData)
    self:updateShopRecommend(item, productData)

    if self:isAdornment(self._firstTabTag) and index == 1 then
        self:setSelectProductItem(item)
    end
    self:registerRedPoint(item, string.format("shop/%s/%s/", self._firstTabTag, self._secondTabTag) .. productData.gid)
    return item
end

function ShopView:getLocalIconImgIdx(count, tag)
    if tag == ShopConfig.SpecialTag.DIAMOND then
        if count <= 100 then
            return 1
        elseif count <= 300 then
            return 2
        elseif count <= 600 then
            return 3
        elseif count <= 1200 then
            return 4
        elseif count <= 1800 then
            return 5
        elseif count <= 2500 then
            return 6
        elseif count <= 2800 then
            return 7
        else
            return 8
        end
    elseif tag == ShopConfig.SpecialTag.GOLD then
        if count <= 30000 then
            return 1
        elseif count <= 60000 then
            return 2
        elseif count <= 180000 then
            return 3
        elseif count <= 310000 then
            return 4
        elseif count <= 520000 then
            return 5
        elseif count <= 1030000 then
            return 6
        elseif count <= 1780000 then
            return 7
        else
            return 8
        end
    end
end

-- 设置图片来源
function ShopView:setItemImageOrign(item, productData, index)
    local tabInfo = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
    if ShopConfig.ProductDefaultIcon and tabInfo.tag then
        local productIcon = nil
        if ShopConfig.ProductDefaultIcon[tabInfo.tag] then
            local icoIdx = self:getLocalIconImgIdx(tonumber(productData.value), tabInfo.tag)
            productIcon = string.format(ShopConfig.ProductDefaultIcon[tabInfo.tag], icoIdx)
        end
        if productIcon then
            XH.UITool.loadTexture(item, "_imgIconLocal", productIcon, ccui.TextureResType.plistType)
            XH.UITool.setVisible(item, "_imgIconRemote", false)
            XH.UITool.setVisible(item, "_imgIconLocal", true)
            return
        end
    end
    XH.UITool.setVisible(item, "_imgIconRemote", true)
    XH.UITool.setVisible(item, "_imgIconLocal", false)
    Utils:setImgUrl(XH.UITool.seekNodeByName(item, "_imgIconRemote"), productData.image, true)
end

-- 单道具商品界面展示
function ShopView:setOneItemShow(item, prize, isDiamond, propImage)
    local itemBuyIco = XH.UITool.seekNodeByName(item, "_imgCostIcon")
    itemBuyIco:setVisible(not isDiamond)
    if propImage and propImage ~= "" then
        itemBuyIco:loadTexture(propImage, ccui.TextureResType.plistType)
        itemBuyIco:ignoreContentAdaptWithSize(true)
    end
    XH.UITool.setText(item, "_txtPrice", isDiamond and prize .. "元" or self:setMoreThanPrize(prize))
    local btnBuy = XH.UITool.seekNodeByName(item, "_btnExchange")
    Utils:doLayoutHoriz(btnBuy:getChildren(), btnBuy:getContentSize().width, 10)
end

-- 商品>10000情况下转换
function ShopView:setMoreThanPrize(prize)
    if tonumber(prize) >= 10000 then
        prize = tonumber(prize) / 10000 .. "万"
    end
    return prize
end

-- 多道具商品价格显示
function ShopView:setMoreItemsPrize(item, prizeConfig)
    -- table.sort(prizeConfig, function(v1, v2)
    --     return tonumber(v1.value) < tonumber(v2.value)
    -- end)
    for i = 1, #prizeConfig do
        XH.UITool.setText(item, "_KW_BMFONT_ITEMS_PRICE_" .. i, self:setMoreThanPrize(prizeConfig[i].value))
        local imagePath = self:getShopModule():getMoreItemsShopPropImage(prizeConfig[i].type)
        if imagePath then
            XH.UITool.loadTexture(item, "KW_IMG_LOGO_" .. i, imagePath, ccui.TextureResType.plistType)
            XH.UITool.ignoreContentAdaptWithSize(item, "KW_IMG_LOGO_" .. i, true)
        end
    end
end

-- 设置商品价格与图片显示
-- 单道具单规格 单道具多规格 多道具多规格
-- 目前支持上限为2个
function ShopView:setItemPrizeImage(item, productData)
    -- if productData.multi_score_config and #productData.multi_score_config > 0 then
    --     if productData.multi_goods_info == nil then
    --         if #productData.multi_score_config == 1 then
    --             local imagePath = self:getShopModule():getMoreItemsShopPropImage(productData.multi_score_config[1].type)
    --             self:setOneItemShow(item, tonumber(productData.multi_score_config[1].value), imagePath)
    --         elseif #productData.multi_score_config == 2 then
    --             self:setMoreItemsPrize(item, productData.multi_score_config)
    --         end
    --     else
    --         if #productData.multi_goods_info == 1 then
    --             self:setMoreItemsPrize(item, productData.multi_goods_info[1].multi_goods)
    --         elseif #productData.multi_goods_info == 2 then
    --             local setPrizeConfig = productData.multi_goods_info[1].multi_goods
    --             if productData.multi_goods_info[1].prop_count > productData.multi_goods_info[2].prop_count then
    --                 setPrizeConfig = productData.multi_goods_info[2].multi_goods
    --             end
    --             self:setMoreItemsPrize(item, setPrizeConfig)
    --         end
    --     end
    -- else
    local pruductSpecial = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
    if pruductSpecial.tag == ShopConfig.SpecialTag.DIAMOND then
        self:setOneItemShow(item, tonumber(productData.price), true)
    else
        local propImage = ""
        if productData.scoreConf and productData.scoreConf[1] then
            propImage = self:getPropImage(productData.scoreConf[1].propId)
        end
        self:setOneItemShow(item, tonumber(productData.condition), false, propImage)
    end
    -- end
end

-- 设置各个item动画
function ShopView:onShowItemWithAction(item, productData, idx)
    self:clearAni(item)
    if self:getShopModule():getTagWithShop(productData, ShopConfig.ItemsModifyKey.YPQ) then
        self:showPropsDargonAni(item, ShopConfig.YaPaiQiAni)
        return
    end
    if self:getShopModule():getTagWithShop(productData, ShopConfig.ItemsModifyKey.FRAME) then
        self:showPropsAni(item, ShopConfig.PropsIdAni[tonumber(productData.value)], 1)
        return
    end
    if self:getShopModule():getTagWithShop(productData, ShopConfig.ItemsModifyKey.TABLEBG) then
        self:showPropsAni(item, ShopConfig.TableBgAni, 1.5)
        return
    end
    local tabInfo = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
    if tabInfo.tag == ShopConfig.SpecialTag.DIAMOND or tabInfo.tag == ShopConfig.SpecialTag.GOLD then
        Utils:addSpine(XH.UITool.seekNodeByName(item, "_nodeAniLight"), "Shop", "zzb_ty_xingguang", (idx and idx > 6) and "animation2" or "animation")
    end
end

-- 用新的数据重新刷新UI,UI复用
function ShopView:loadProducts(productTag)
    local noAni = true
    if self._firstLoad == nil then
        noAni = false
    end
    self._firstLoad = false
    XH.TipTool.hideLoading()
    if self._secondTabTag == ShopConfig.SpecialTag.SXVIP then
        self._KW_VIP_NOTICE:setVisible(false)
        self._panelProductInfo:setVisible(false)
        self._txtNoneProduct:setVisible(false)
        self._listHot:setVisible(false)
        self._listGoldVip:setVisible(false)
        self._listProductSmall:setVisible(false)
        self._listProduct:setVisible(false)

        self._nodeProduct:setVisible(true)
        self._nodeProduct:removeAllChildren()
        local staticConfig = XH.lobby:getModule("Sxvip"):getStaticConfig()
        if #staticConfig <= 0 then
            XH.lobby:getModule("Sxvip"):reqPrivilege()
        end
        local view = require("lobby.Modules.Sxvip.SxvipShopView").new("", {isInCollection = true, parentSize = self._nodeProduct:getContentSize()})
        if view then
            self._nodeProduct:addChild(view)
        end
        self._panelSecondTab:setVisible(false)
        return
    end

    self._nodeProduct:setVisible(false)
    local productAllData = self:getShopModule():getShopItemsWithTag(self._secondTabTag)
    self._selectPageData = productAllData
    local tagInfo = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
    self._KW_VIP_NOTICE:setVisible(tagInfo.tag == ShopConfig.SpecialTag.GOLDVIP)
    if productAllData then
        if productTag and productTag ~= tagInfo.tag then
            -- 非当前页签商品不处理
            return
        end

        self._listHot:setVisible(false)
        self._listGoldVip:setVisible(false)
        self._listProduct:setVisible(false)
        self._listProductSmall:setVisible(false)
        local isAdornment = self:isAdornment(self._firstTabTag)
        local isProp = self:isProp(self._firstTabTag) and self._firstTabTag ~= ShopConfig.SpecialTag.COUPON
        if self._firstTabTag == ShopConfig.SpecialTag.REC then
            isProp = true
        end
        local listProduct = isAdornment and self._listProductSmall or self._displayListCopy
        self._listProduct:setPositionX(isProp and 50 or 0)
        listProduct:removeAllChildren()

        local productList = productAllData
        local totalCount = #productList
        self._txtNoneProduct:setVisible(totalCount == 0)
        if tagInfo.tag == ShopConfig.SpecialTag.GOLDVIP then
            local monthlyCardInfo = XH.lobby:getModule("MonthlyCard"):getMonthlyCardInfos()
            if next(monthlyCardInfo) then
                self._txtNoneProduct:setVisible(false)
            end
        end

        if tagInfo.tag == ShopConfig.SpecialTag.REC then
            self._listHot:removeAllChildren()
            self._listHot:setVisible(true)
            -- for i, v in ipairs(productList) do

            local itemGap = 40
            local lineCnt = 3
            local itemSize = cc.size(460, 615)
            for i = 1, totalCount, lineCnt do
                local layout = ccui.Layout:create()
                layout:setContentSize(cc.size(self._listHot:getContentSize().width, itemSize.height))
                self._listHot:pushBackCustomItem(layout)

                for j = 0, lineCnt - 1 do
                    if productList[i + j] then
                        local panel = require(productList[i + j].classPath)
                        if panel then
                            local item = panel.new(productList[i + j])
                            item:setPosition(20 + (itemSize.width + itemGap) * j, 0)
                            layout:addChild(item)
                            item:setCascadeOpacityEnabled(true)
                            if not noAni then
                                item:setOpacity(0)
                                ActionUtils:runEntryMoveOut(item, j + 1, true, nil, nil, true)
                            end
                        end
                    end
                end
            end
        elseif tagInfo.tag == ShopConfig.SpecialTag.GOLDVIP then
            self._listGoldVip:removeAllChildren()
            self._listGoldVip:setVisible(true)

            for i = 1, totalCount do
                if productList[i] then
                    local panel = require("lobby.Modules.GoldNew.SubModules.Shop.VipItem")
                    if panel then
                        local productData = productList[i]
                        local item = panel.new(productData)
                        item:refreshView(productData.condition, tonumber(productData.propid), false, i)
                        item.productData = productData
                        XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                            self:onExchangeBtnTouchEvent(item, productData)
                        end)

                        self._listGoldVip:pushBackCustomItem(item)
                        item:setCascadeOpacityEnabled(true)
                        if not noAni then
                            item:setOpacity(0)
                            item:runAction(cc.Sequence:create(cc.DelayTime:create(0), cc.CallFunc:create(function()
                                ActionUtils:runEntryMoveOut(item, 1, true, nil, nil, true)
                            end)))
                        end
                    end
                end
            end

            local monthlyCardInfo = XH.lobby:getModule("MonthlyCard"):getMonthlyCardInfos()
            for _, productData in pairs(monthlyCardInfo) do
                local panel = require("lobby.Modules.MonthlyCard.ShopVipItem")
                if panel then
                    local item = panel.new(productData)
                    item:refreshView(productData)
                    item.productData = productData
                    XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                        XH.lobby:getModule("MonthlyCard"):openMonthlyCardView(nil, {area = "商城金币月卡页", propId = productData.propId})
                    end)

                    self._listGoldVip:pushBackCustomItem(item)
                    item:setCascadeOpacityEnabled(true)
                    if not noAni then
                        item:setOpacity(0)
                        item:runAction(cc.Sequence:create(cc.DelayTime:create(0), cc.CallFunc:create(function()
                            ActionUtils:runEntryMoveOut(item, 1, true, nil, nil, true)
                        end)))
                    end
                end
            end
        else
            listProduct:setVisible(true)
            local itemMod = isAdornment and self._itemProductAdt or self._itemProduct
            local itemGap = isAdornment and 0 or 20
            local lineCnt = isAdornment and 3 or 4
            local itemSize = itemMod:getContentSize()
            local layout = ccui.Layout:create()
            layout:setContentSize(cc.size(listProduct:getContentSize().width, 20))
            listProduct:pushBackCustomItem(layout) -- 增加顶部空白区

            for i = 1, totalCount, lineCnt do
                local layout = ccui.Layout:create()
                layout:setContentSize(cc.size(listProduct:getContentSize().width, itemSize.height))
                listProduct:pushBackCustomItem(layout)

                for j = 0, lineCnt - 1 do
                    if productList[i + j] then
                        local item = itemMod:clone()
                        item:setPosition(20 + (itemSize.width + itemGap) * j, 0)
                        layout:addChild(item, 1000 - i - j)
                        self:updateItemUI(item, productList[i + j], i + j, true)
                        item:setCascadeOpacityEnabled(true)
                        if not noAni then
                            item:setOpacity(0)
                            ActionUtils:runEntryMoveOut(item, j + 1, true, nil, nil, true)
                        end
                    end
                end
            end
        end
        local isHaveGood = productAllData and productAllData[1] and true or false
        self._panelProductInfo:setVisible(isAdornment and isHaveGood)
        if not noAni then
            self._panelProductInfo:setOpacity(0)
            ActionUtils:runEntryMoveOut(self._panelProductInfo, 6, true, nil, nil, true)
        end
        self._panelSecondTab:setVisible(isProp)
        local pageInfo = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
        XH.Bridge:throwData("dj24080867", {page = self._openType == "Lobby" and "大厅" or "金币大厅", type = pageInfo.title})
        XH.Bridge:throwData("cy25090507", {page = self._openType == "Lobby" and "大厅" or "金币大厅", page_label = pageInfo.title})
    end
    return productAllData
end

local DEFAULT_TAB_TEXT_COLOR = cc.c3b(255, 255, 255)
local SELECTED_TAB_TEXT_COLOR = cc.c3b(0x9d, 0x46, 0)

function ShopView:setLeftTabStateChanged(autoJump)
    for idx, btn in ipairs(self._leftTabBtns) do
        local isSelected = btn.tag == self._firstTabTag
        if isSelected then
            if autoJump then
                self._listLeftTab:jumpToItem(idx, cc.p(0.5, 0.5), cc.p(1, 0))
            end
        end
        btn:setTouchEnabled(not isSelected)
        local textColor = isSelected and SELECTED_TAB_TEXT_COLOR or DEFAULT_TAB_TEXT_COLOR
        XH.UITool.setVisible(btn, "_imgSelected", isSelected)
        XH.UITool.setTextColor(btn, "_txtTitle", textColor)
        XH.UITool.setVisible(btn, "_nodeAni", isSelected)
    end
end

function ShopView:setTopTabStateChanged()
    for _, btn in pairs(self._upSecendTabBtns) do
        local isSelected = btn.tag == self._secondTabTag
        btn:setTouchEnabled(not isSelected)
        XH.UITool.setVisible(btn, "panelSelected", isSelected)
        XH.UITool.setVisible(btn, "panelNormal", not isSelected)
    end
end

------------------事件处理------------------------
-- 左边tab切换事件处理
function ShopView:onTabChanged(send, tag)
    self._firstTabTag = tag
    self:initSecondMenus()
    self:setLeftTabStateChanged()
    local secondProductLists = self:getShopModule():getFirstTabInfo(self._firstTabTag)
    if secondProductLists.sub and #secondProductLists.sub > 0 then
        self._secondTabTag = secondProductLists.sub[1].tag
    end
    self:setTopTabStateChanged(send)
    self:updateProductList()
end

function ShopView:onSecondTabChanged(send, tag)
    self._secondTabTag = tag
    self:setTopTabStateChanged(send)
    self:updateProductList()
end

-- 关闭按钮
function ShopView:onTouchEventClose(send, event)
    self:close()
end

function ShopView:onClickAddDiamond(send, event)
    self:getProductTypeWithShow(ShopConfig.SpecialTag.DIAMOND)
end

function ShopView:onClickAddGold(send, event)
    self:getProductTypeWithShow(ShopConfig.SpecialTag.GOLD)
end
function ShopView:onClickAddRoomCard(send, event)
    self:getProductTypeWithShow(ShopConfig.SpecialTag.ROOMCARD)
end
function ShopView:onClickCus(send, event)
    XH.Bridge:gotoKefu("GOLDLOBBY_SHOP")
end

-- 背包按钮
function ShopView:onClickBag(send, event)
    cc.UserDefault:getInstance():setIntegerForKey("IS_FIRST_CLICK_BAG_BTN", 1)
    XH.Bridge.viewManager:openView("GoldHallBagView", nil, {openType = self._openType})
    self:close(true)
end

function ShopView:close(notSend)
    ShopView.super.close(self)
    if not notSend then
        XH.Bridge:getModule("GoldNew"):closeFullView("shop", true)
    end
    XH.lobby:getModule("PayOderCheck"):resetData()
end

-- 单道具购买处理
function ShopView:onBuyBtnAloneEvent(send, product, cnt, payType)
    self._isQuickRecharge = false -- 埋点使用
    cnt = cnt or 1
    payType = payType or 1
    local propId = 0
    if product.scoreConf and product.scoreConf[payType] and product.scoreConf[payType].propId then
        propId = product.scoreConf[payType].propId
    end
    local propCnt = 0
    if product.scoreConf and product.scoreConf[payType] and product.scoreConf[payType].score then
        propCnt = product.scoreConf[payType].score
    end
    local isHave, tipMsg, isHideTips = self:getShopModule():isHaveEnoughDiamond(product, propId, propCnt * cnt, cnt)
    if isHave then
        self:getShopModule():reqExchangeGoodsV2(product, cnt, function(bSuccess, msg)
            local data = clone(self._buyData)
            data.page_item_id = bSuccess and "成功" or "失败"
            data.info = msg
            if bSuccess then
                self:onClickExTipClose()
            end
            self:throwData("sp25032002", data)
        end, true, propId)
        return
    else
        if not isHideTips then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
                funcOK = function()
                    self:getProductTypeWithShow(ShopConfig.SpecialTag.DIAMOND)
                end
            }, tipMsg)
        else
            self._isQuickRecharge = true
        end
    end
end

-- 获取页签名跳转
function ShopView:getProductTypeWithShow(tagName)
    local firstTag, secondTag = self:getShopModule():getTagsWithName(tagName)
    if firstTag and secondTag then
        self._firstTabTag = firstTag
        self._secondTabTag = secondTag
        self:setLeftTabStateChanged()
        self:setTopTabStateChanged()
        self:updateProductList()
        self:onClickExTipClose()
    end
end

-- 兑换按钮处理
function ShopView:onExchangeBtnTouchEvent(send, event, payType)
    local to_props_id = 0
    local choice = '钻石'
    local count = 0
    local count1 = 0
    local getShopTag = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
    local shopData = send.productData or {}
    local shopId = shopData.id
    if getShopTag and getShopTag.tag == ShopConfig.SpecialTag.DIAMOND then
        to_props_id = XH.areaData:getPropDiamndID()
        choice = "元"
        count = shopData.value
        count1 = XH.playerData:getDiamnd()
    else
        to_props_id = self:getShopModule():isGoldProduct(shopData) and XH.areaData:getGoldPropId() or shopData.value
        count = self:getShopModule():isGoldProduct(shopData) and shopData.value or shopData.prop_count
        count1 = self:getShopModule():isGoldProduct(shopData) and XH.playerData:getSR() or (XH.playerData:getPlayerDrop()[to_props_id] or 0)
    end
    self._buyData = {to_props_id = to_props_id, choice = choice, count = count, count1 = count1, item_id = shopId, page = self._openType == "Lobby" and "大厅" or "金币大厅"}
    self:throwData("dj24080868", self._buyData)
    -- XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080868, {costInfo = self._buyData})

    -- 未实名不能购买 海外玩家不用实名认证
    if XH.configerManager:getIsNewRealName() then
        if XH.playerData:checkNewRealName() ~= 0 then
            return
        end -- 实名限制
    else
        if not self:getShopModule():isAleardyRealName() then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    XH.Bridge.viewManager:openView("IdentityCheckView")
                end
            }, "PLEASE_REAL_NAME")
            return
        end
    end

    if getShopTag and getShopTag.tag == ShopConfig.SpecialTag.DIAMOND then
        if XH.playerData:checkNewRealNameVisitor() ~= 0 then
            return
        end
        XH.lobby:getModule("PayOderCheck"):check(shopData, function()
            XH.Bridge:getModule("Shop"):reqBuyDiamond(shopData)
        end, function()
            self:getShopModule():reqActGoodList(true)
        end)
    elseif getShopTag and getShopTag.tag == ShopConfig.SpecialTag.ROOMCARD then
        if XH.playerData:checkNewRealNameVisitor() ~= 0 then
            return
        end
        local cnt = 1
        payType = payType or 1
        local propId = 0
        if shopData.scoreConf and shopData.scoreConf[payType] and shopData.scoreConf[payType].propId then
            propId = shopData.scoreConf[payType].propId
        end
        local propCnt = 0
        if shopData.scoreConf and shopData.scoreConf[payType] and shopData.scoreConf[payType].score then
            propCnt = shopData.scoreConf[payType].score
        end
        local isHave, tipMsg, isHideTips = self:getShopModule():isHaveEnoughDiamond(shopData, propId, propCnt * cnt, cnt)
        if isHave then
            local tipStr = ""
            if shopData.scoreConf and shopData.scoreConf[payType] and shopData.scoreConf[payType].score then
                tipStr = XH.ConstString.getStr("TIP_SHOP_ENOUGH_MID_PROP", shopData.scoreConf[payType].score .. "钻石", shopData.name)
            end
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    local cnt = 1
                    if self._panelExchangeTip:isVisible() then
                        cnt = tonumber(XH.UITool.getText(self._panelExchangeTip, "txtCnt")) or 1
                    end
                    self:onBuyBtnAloneEvent(send, shopData, cnt, payType)
                end
            }, tipStr)
        else
            self:onBuyBtnAloneEvent(send, shopData, cnt, payType)
        end
    else
        local cnt = 1
        if self._panelExchangeTip:isVisible() then
            cnt = tonumber(XH.UITool.getText(self._panelExchangeTip, "txtCnt")) or 1
        end
        self:onBuyBtnAloneEvent(send, shopData, cnt, payType)
    end
end

function ShopView:onUpdateRecUI(event)
    if self:isRecommend(self._firstTabTag) then
        self:loadProducts(nil, true)
    end
end

function ShopView:onRefreshNewGoodsList(event)
    if self:isDiamond(self._firstTabTag) then
        self:onRefresh(event)
    end
    self:updateLeftTabTag()
end
-- 刷新界面消息  获取到钻石商品
function ShopView:onRefresh(event)
    XH.TipTool.hideLoading()
    local data = event and event.data or nil
    local specialTag = data and data.tag or nil
    self:flushTopInfo()
    self:setLeftTabStateChanged()
    self:loadProducts(specialTag)
    if data and data.isTip == true then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, data.msg)
    end
end

function ShopView:initBagBtnVisible()
    if not self._btnBag then
        return
    end
    self._btnBag:setVisible(true)
    self._btnBag:stopAllActions()
    local isFirstClickBag = cc.UserDefault:getInstance():getIntegerForKey("IS_FIRST_CLICK_BAG_BTN", 0)
    if isFirstClickBag == 0 then
        self._btnBag:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(2), cc.RotateTo:create(0.05, 20),
                                                                          cc.RotateTo:create(0.1, -20), cc.RotateTo:create(0.1, 20),
                                                                          cc.RotateTo:create(0.05, 0))))
    end
end

function ShopView:onBtnTouchEvent(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or ccui.TouchEventType.canceled then
        send:setScale(1.0)
        send:setColor(cc.c3b(255, 255, 255))
    end
end

function ShopView:onTouchEventGoLinkCharge(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.HTTP_ID_CHONG_ZHI)
    else
        cc.Application:getInstance():openURL(UrlConf.HTTP_ID_CHONG_ZHI_IOS)
    end
end

function ShopView:clearAni(itemNode)
    local aniNode = XH.UITool.seekNodeByName(itemNode, "_nodeAni")
    if aniNode then
        aniNode:removeAllChildren()
    end
    XH.UITool.setVisible(itemNode, "_KW_LAYOUT_ANI_BG", false)
end

-- 道具节点龙骨动画
function ShopView:showPropsDargonAni(itemNode, aniConfig)
    local aniNode = XH.UITool.seekNodeByName(itemNode, "_nodeAni")
    if aniNode and aniConfig then
        local propAni = display.playDargonBonesAnimByTimes(aniConfig, 0)
        if propAni then
            XH.UITool.setVisible(itemNode, "_KW_LAYOUT_ANI_BG", true)
            aniNode:addChild(propAni)
        end
    end
end

-- 道具节点动画
function ShopView:showPropsAni(itemNode, aniConfig, scale)
    scale = scale or 1
    local aniNode = XH.UITool.seekNodeByName(itemNode, "_nodeAni")
    if aniNode and aniConfig then
        pcall(function()
            if not cc.FileUtils:getInstance():isFileExist(aniConfig.path) then
                return
            end
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniConfig.path)
            local showArmature = ccs.Armature:create(aniConfig.amatureName)
            if showArmature then
                aniNode:addChild(showArmature)
                showArmature:setAnchorPoint(cc.p(0.5, 0.5))
                showArmature:getAnimation():play(aniConfig.animationName, -1, 1)
                showArmature:setScale(scale)
                showArmature:setPositionY(ItemAniPosY)
            end
        end)
    end
end

function ShopView:startShowUI()
    self:initLeftTypeList()
    local shopTags = self:getShopModule():getShopAllTags()
    if shopTags and #shopTags > 0 then
        self._firstTabTag = shopTags[1].tag
        self._secondTabTag = shopTags[1].sub[1].tag
        if self._defaultTabName then
            local defaultFirst, defaultSecond = self:getShopModule():getTagsWithName(self._defaultTabName)
            if defaultFirst and defaultSecond then
                self._firstTabTag = defaultFirst
                self._secondTabTag = defaultSecond
                if self._defaultTabName == ShopConfig.SpecialTag.REC then
                    self:updateProductList()
                end
            end
            self:setLeftTabStateChanged(true)
            -- self:updateProductList()
        end
    end
    self:initSecondMenus()
    self:setLeftTabStateChanged()
    local secondProductLists = self:getShopModule():getFirstTabInfo(self._firstTabTag)
    if secondProductLists.sub and #secondProductLists.sub > 0 then
        self._secondTabTag = secondProductLists.sub[1].tag
    end
    self:setTopTabStateChanged()
    self._panelRoomCard:setVisible(self._openType == "Lobby")
    self._panelCoupon:setVisible(self._openType == "Lobby")
end

-- 获取商品列表
function ShopView:onEventGetPagProducts(event)
    local specialTag = event.data.tag
    local pruductSpecial = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
    if specialTag == pruductSpecial.tag then
        self:updateProductList()
    end
end

function ShopView:onPayResut(event)
    if self._buyData == nil then
        return
    end
    local result = event.msg and event.msg.resultTag
    local bSuccess = result == 1
    local data = clone(self._buyData)
    data.page_item_id = bSuccess and "成功" or "失败"
    data.info = bSuccess and "" or "支付取消"
    if self._isQuickRecharge then
        data.count2 = self:getShopModule():getQuickRechargeProduct()
        self:throwData("sp25032004", data)
    else
        self:throwData("sp25032001", data)
    end
    if bSuccess then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function()
            -- XH.TipTool.showToast("数据刷新中...", 3)
            XH.playerData:flushPlayerDrop()
            XH.playerData:flushGoldCoin()
            self:getShopModule():reqActGoodList(true)
        end)))
        self:onClickExTipClose()
    end
end

-- 目前展示商品的逻辑
function ShopView:updateProductList()
    if self:getShopModule():getShopItemsWithTag(self._secondTabTag) then
        self:loadProducts()
    else
        self._listHot:setVisible(false)
        self._listGoldVip:setVisible(false)
        self._listProduct:setVisible(false)
        self._listProductSmall:setVisible(false)
        local tabInfo = self:getShopModule():getSecondTabInfo(self._firstTabTag, self._secondTabTag)
        self:getShopModule():reqProductList(tabInfo.tag)
    end
end

function ShopView:getShopModule()
    if self._openType == "Lobby" then
        return XH.Bridge:getModule(LocalConfig.MP.LobbyShop)
    end
    return XH.Bridge:getModule(LocalConfig.MP.SHOP)
end

function ShopView:initLeftTypeList()
    local leftTabData = self:getShopModule():getShopAllTags()

    for k, v in ipairs(leftTabData) do
        local btnTab = self._itemLeftTab:clone()
        XH.UITool.setText(btnTab, "_txtTitle", v.title)
        XH.UITool.setVisible(btnTab, "_txtTitle", true)
        local nodeAni = XH.UITool.seekNodeByName(btnTab, "_nodeAni")
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            local imgSelected = XH.UITool.seekNodeByName(btnTab, "_imgSelected")
            local itemSize = imgSelected:getContentSize()
            local bigScale = notchWidth / itemSize.width + 1
            imgSelected:setContentSize(notchWidth + itemSize.width, itemSize.height)
            nodeAni:setScaleX(bigScale)
            nodeAni:setPositionX(nodeAni:getPositionX() - notchWidth / 2)
        end
        btnTab.tag = v.tag
        btnTab.data = v
        XH.UIButton.create(btnTab, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onTabChanged(btnTab, v.tag)
        end)
        btnTab:setTag(k)

        Utils:addSpine(nodeAni, "Shop", "zzb_ty_xzl", "animation")
        self._listLeftTab:addChild(btnTab)
    end

    self._leftTabBtns = self._listLeftTab:getChildren()
    -- self._listLeftTab:setInnerContainerSize(cc.size(self._originalListViewWidth, #self._leftTabBtns * self._itemLeftTab:getContentSize().height))
    -- self._oriLeftBtnParentSize = self._listLeftTab:getContentSize()
    -- if self._itemProduct then
    --     self._productModSize = self._itemProduct:getContentSize()
    -- end

    for i, btn in pairs(self._leftTabBtns) do
        self:registerRedPoint(btn, string.format("shop/%s", leftTabData[i].tag))
    end
    self:updateLeftTabTag()
end

------------new
function ShopView:onEventGetGoldHallProducts(event)
    if self:isProp(self._firstTabTag) or self._firstTabTag == ShopConfig.SpecialTag.GOLD or self._firstTabTag == ShopConfig.SpecialTag.ROOMCARD or
        self._firstTabTag == ShopConfig.SpecialTag.GOLDVIP then
        self:updateProductList()
    end
    self:updateLeftTabTag()
end

function ShopView:isProp(tag)
    return tag ~= ShopConfig.SpecialTag.DIAMOND and tag ~= ShopConfig.SpecialTag.GOLD and tag ~= ShopConfig.SpecialTag.ROOMCARD and tag ~=
               ShopConfig.SpecialTag.GOLDVIP and tag ~= ShopConfig.SpecialTag.REC
end
function ShopView:isExchangeGood(tag)
    return tag ~= ShopConfig.SpecialTag.DIAMOND and tag ~= ShopConfig.SpecialTag.REC
end
function ShopView:isAdornment(tag) -- 装扮
    return tag == 'zhuangban'
end
function ShopView:isRecommend(tag) -- 推荐
    return tag == ShopConfig.SpecialTag.REC
end
function ShopView:isDiamond(tag)
    return tag == ShopConfig.SpecialTag.DIAMOND
end

function ShopView:updateProductInfo(info, index)
    if info == nil then
        self._panelProductInfo:setVisible(false)
        return
    end
    self._panelProductInfo:setVisible(true)
    XH.UITool.setText(self._panelProductInfo, "_txtName", info.name)
    local str = XH.StringTool.getTrimName(info.description, 70)
    str = string.gsub(str, "\n", "")
    XH.UITool.setText(self._panelProductInfo, "_txtDes", str)
    local btnExchange = XH.UITool.seekNodeByName(self._panelProductInfo, "_btnExchange")
    local btnYuLan = XH.UITool.seekNodeByName(self._panelProductInfo, "_btnYuLan")
    btnYuLan:setVisible(self._secondTabTag == ShopConfig.SpecialTag.ZUOJIA)
    self._panelProductInfo.productData = info
    XH.UIButton.create(btnExchange, XH.UIButton.CLICK_STYLE.NOSCALE, function()
        self:showExchangeTip(info, index)
    end)
    XH.UIButton.create(btnYuLan, XH.UIButton.CLICK_STYLE.NOSCALE, function()
        self._panelShowAni:setVisible(true)
        self:showZuoJiaAni(info.propid)
    end)

    self:onShowItemWithAction(self._panelProductInfo, info, index)
    self:setItemImageOrign(self._panelProductInfo, info, 1)
    self:setItemPrizeImage(self._panelProductInfo, info)
end

function ShopView:onItemBgClick(send, event)
    self:setSelectProductItem(send)
end

function ShopView:setSelectProductItem(item)
    if not self._selectPageData or not self._selectPageData[item.index] then
        return
    end
    self:updateProductInfo(self._selectPageData[item.index], item.index)
    if self._lastSelectItem and not tolua.isnull(self._lastSelectItem) then
        XH.UITool.setVisible(self._lastSelectItem, "_imgSelect", false)
    end
    self._lastSelectItem = item
    XH.UITool.setVisible(item, "_imgSelect", true)
end

function ShopView:registerRedPoint(node, path)
    node.redPointPath = path
    RedPointManager:registerNode(path)
    RedPointManager:addListener(path, function(state)
        if tolua.isnull(node) then
            return
        end
        XH.UITool.setVisible(node, "_imgRedPoint", state)
    end, true)
end

function ShopView:onCleanup()
    ShopView.super.onCleanup(self)
    RedPointManager:removeCallbacksForPathAndChildren("shop")
end

function ShopView:throwData(key, data)
    local cusKeys = {"to_props_id", "choice", "count", "count1", "info"}
    local custom = {}
    for _, v in ipairs(cusKeys) do
        if data[v] then
            custom[v] = data[v]
        end
    end
    XH.Bridge:throwData(key, data, custom)
end

-----------转场动效-----------
function ShopView:startShow()
    ActionUtils:runTopFadeIn(self._panelTop, true)
    ActionUtils:runTopFadeIn(self, true, 0)
    ActionUtils:runLeftMoveOut(self._panelLeft, false, true, 0, 0.2)
    ActionUtils:runLeftMoveOut(self._panelLeft, true)
    ActionUtils:runLeftMoveOut(self._panelLT, false, true, 0, 0.4)
    ActionUtils:runLeftMoveOut(self._panelLT, true)
end

function ShopView:startHide()
    ActionUtils:runLeftMoveOut(self._panelLeft, false, true, 0)
    ActionUtils:runLeftMoveOut(self._panelLT, false, true, 0)
end
-----------------------

function ShopView:updateLeftTabTag()
    for _, btn in pairs(self._leftTabBtns) do
        local info = self:getShopModule():getActInfoByTag(btn.data)
        local panelTag = XH.UITool.seekWidgetByName(btn, "_panelTag")
        if info.cornerName ~= "" then
            panelTag:setVisible(true)
            XH.UITool.setText(panelTag, "txtName", info.cornerName)
            if info.style > 0 and info.style <= 3 then
                XH.UITool.loadTexture(panelTag, "imgBg", IMG_CFG.leftTagbg[info.style], ccui.TextureResType.plistType)
            end
        else
            panelTag:setVisible(false)
        end
    end
end

function ShopView:updateShopRecommend(item, productData)
    local isRecommend = productData.data and productData.data.recommend == 1 -- math.random(1, 3) == 1 --tags[1] == "xxx"
    if isRecommend then
        XH.UITool.setVisible(item, "_imgRecommend", true)
        XH.UITool.setVisible(item, "_imgShuiYing", false)
        XH.UITool.setVisible(item, "_imgShuiYingRe", true)
        item:setBackGroundImage(LocalConfig.IMG_PATH.SHOP .. "Img_baidi2.png", ccui.TextureResType.plistType)
    end
    -- XH.UITool.loadTexture(item, "_imgShuiYing", LocalConfig.IMG_PATH.SHOP .. "Img_baidi_hb2.png", ccui.TextureResType.plistType)
end

function ShopView:updateShopActInfo(item, productData)
    local tagInfo = productData.act -- or {actType = math.random(1, 3), cornerName = "充值=加送", rebate = {{propid = "gold", propcnt = 444}}}
    if tagInfo then
        --[[
        限购说明：读取商品的配置，若为限购商品，档位增加对商品的限购说明。（N为已购次数，X为总限购次数）
        若为【单人限购N次】的商品，则文案为“*单人限购买（N/X）次”
        若为【单人单日限购N次】的商品，则文案为“*单人单日限购（N/X）次”
        若单个活动商品同时存在【单人限购+单人单日限购】，则说明文案为”*单人单日限购N次（N/X）“(X表示商品总限购次数）（剩余次数放在下一期做）
        ]]
        if tagInfo.limitBuy and tagInfo.limitBuy > 0 then
            if tagInfo.dailyLimitBuy and tagInfo.dailyLimitBuy > 0 then
                if tagInfo.buyTimes and tagInfo.dailyBuyTimes then
                    XH.UITool.setText(item, "_txtBuyTip", string.format("*日限购(%d/%d)次/总限购(%d/%d)次", tagInfo.dailyBuyTimes,
                                                                        tagInfo.dailyLimitBuy, tagInfo.buyTimes, tagInfo.limitBuy))
                else
                    XH.UITool.setText(item, "_txtBuyTip",
                                      string.format("*单人单日限购%d次(总限购%d次)", tagInfo.dailyLimitBuy, tagInfo.limitBuy))
                end
            else
                if tagInfo.buyTimes then
                    XH.UITool.setText(item, "_txtBuyTip", string.format("*单人限购买(%d/%d)次", tagInfo.buyTimes, tagInfo.limitBuy))
                else
                    XH.UITool.setText(item, "_txtBuyTip", string.format("*单人限购%d次", tagInfo.limitBuy))
                end
            end
        elseif tagInfo.dailyLimitBuy and tagInfo.dailyLimitBuy > 0 then
            if tagInfo.dailyBuyTimes then
                XH.UITool.setText(item, "_txtBuyTip", string.format("*单人单日限购(%d/%d)次", tagInfo.dailyBuyTimes, tagInfo.dailyLimitBuy))
            else
                XH.UITool.setText(item, "_txtBuyTip", string.format("*单人单日限购%d次", tagInfo.dailyLimitBuy))
            end
        end
    end

    local panelTag = XH.UITool.seekWidgetByName(item, "_panelTagGive")
    if panelTag == nil then
        return
    end
    if tagInfo and tagInfo.rebate[1] and tagInfo.actType > 0 then
        panelTag:setVisible(true)
        local topLayout = XH.UITool.seekWidgetByName(panelTag, "layoutInfo")
        local txtInfo = XH.UITool.seekWidgetByName(panelTag, "txtInfo")
        local imgBg = XH.UITool.seekWidgetByName(panelTag, "imgBg")
        local txtFirst = XH.UITool.seekWidgetByName(topLayout, "txtFirst")
        txtFirst:setSkewX(8)
        local txtSecond = XH.UITool.seekWidgetByName(topLayout, "txtSecond")
        txtSecond:setSkewX(8)
        local icon = XH.UITool.seekWidgetByName(topLayout, "icon")
        local names = string.split(tagInfo.cornerName[1] or "", "=")
        txtFirst:setString(names[1] or "")
        txtSecond:setString(names[2] or "")
        local awardStr = Utils:formatGoldNum2String(tonumber(tagInfo.rebate[1].award))
        txtInfo:setString(awardStr)
        txtInfo:setSkewX(6)
        Utils:doLayoutHoriz(topLayout:getChildren(), topLayout:getContentSize().width, 0)
        Utils:updatePropImg(icon, tagInfo.rebate[1].propId)
        imgBg:loadTexture(IMG_CFG.tagGiveImgs[tagInfo.actType], ccui.TextureResType.plistType)
        txtFirst:enableOutline(IMG_CFG.tagGiveOutLineColor[tagInfo.actType], 2)
        txtSecond:enableOutline(IMG_CFG.tagGiveOutLineColor[tagInfo.actType], 2)
    else
        panelTag:setVisible(false)
    end
end

function ShopView:onClickExTipClose()
    self._panelExchangeTip:setVisible(false)
    XH.UITool.setText(self._panelExchangeTip, "txtCnt", 1)
end
function ShopView:onClickExTipAdd()
    local curNum = tonumber(XH.UITool.getText(self._panelExchangeTip, "txtCnt"))
    self:updateExTipCount(curNum + 1)
end
function ShopView:onClickExTipSub()
    local curNum = tonumber(XH.UITool.getText(self._panelExchangeTip, "txtCnt"))
    if curNum <= 1 then
        XH.TipTool.showToast("已经最小了", 3)
        return
    end
    self:updateExTipCount(curNum - 1)
end

function ShopView:updateExTipCount(count)
    XH.UITool.setText(self._panelExchangeTip, "txtCnt", count)
    if count <= 1 then
        XH.UITool.gray(self._btnExTipSub)
        self._btnExTipSub:setTouchEnabled(false)
    else
        XH.UITool.resetGray(self._btnExTipSub)
        self._btnExTipSub:setTouchEnabled(true)
    end
    for i = 1, 10 do
        local cloneExchange = XH.UITool.seekNodeByName(self._panelExchangeTip, "_btnExchange_" .. i)
        if cloneExchange then
            -- 下面这个函数用到名字，_btnExchange
            cloneExchange:setName("_btnExchange")
            -- 下面这个函数用到名字
            self:setOneItemShow(cloneExchange, tonumber(self._panelExchangeTip.productData.scoreConf[i].score) * count, false)
            -- 修改节点名字
            cloneExchange:setName("_btnExchange_" .. i)
        end
    end
end
function ShopView:showExchangeTip(info, index)
    self._panelExchangeTip:setVisible(true)
    XH.UITool.setText(self._panelExchangeTip, "txtCnt", 1)
    XH.UITool.gray(self._btnExTipSub)
    self._btnExTipSub:setTouchEnabled(false)
    XH.UITool.setText(self._panelExchangeTip, "txtName", info.name)
    local desLen = XH.StringTool.simpleGetStrWidth(info.description)
    XH.UITool.setFontSize(self._panelExchangeTip, "txtDes", desLen < 40 and 40 or 36)
    local str = XH.StringTool.getTrimName(info.description, 70)
    str = string.gsub(str, "\n", "")
    XH.UITool.setText(self._panelExchangeTip, "txtDes", str)
    self._panelExchangeTip.productData = info
    local btnExchange = XH.UITool.seekNodeByName(self._panelExchangeTip, "_btnExchange")
    btnExchange:setVisible(false)
    local btnExchangeGroup = XH.UITool.seekNodeByName(self._panelExchangeTip, "_btnExchangeGroup")
    btnExchangeGroup:removeAllChildren()
    for i = 1, #info.scoreConf do
        local cloneExchange = btnExchange:clone()
        cloneExchange:setVisible(true)
        cloneExchange:setPosition(cc.p(0, 0))
        XH.UIButton.create(cloneExchange, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onExchangeBtnTouchEvent(self._panelExchangeTip, info, i)
        end)
        btnExchangeGroup:addChild(cloneExchange)
        -- 下面这个函数用到名字
        self:setOneItemShow(cloneExchange, tonumber(info.scoreConf[i].score), false, self:getPropImage(info.scoreConf[i].propId))
        -- 修改节点名字
        cloneExchange:setName("_btnExchange_" .. i)
    end
    Utils:doLayoutHoriz(btnExchangeGroup:getChildren(), btnExchangeGroup:getContentSize().width, 30)
    XH.UITool.setVisible(self._panelExchangeTip, "panelChangeNum", info.canMulti == 1)

    self:onShowItemWithAction(self._panelExchangeTip, info, index)
    self:setItemImageOrign(self._panelExchangeTip, info, 1)
    -- self:setItemPrizeImage(self._panelExchangeTip, info)
end

function ShopView:getPropImage(propId)
    local propImage = ""
    if propId == XH.areaData:getPropCouponID() then
        propImage = ShopConfig.ProductDetailIcon.couponID
    elseif propId == XH.areaData:getPropList().propDiamndID then
        propImage = ShopConfig.ProductDetailIcon.propDiamndID
    elseif propId == XH.areaData:getGoldPropId() then
        propImage = ShopConfig.ProductDetailIcon.gold
    elseif propId == XH.areaData:getPropList().roomCardID then
        propImage = ShopConfig.ProductDetailIcon.roomCardID
    end
    return propImage
end

function ShopView:onTouchVipNotice(send, eventType)
    XH.viewManager:openView("VipNoticeLayer")
end

function ShopView:showZuoJiaAni(propid)
    -- propid = 150691
    local aniParams = BagConfig.getZuoJiaAniCfg(propid)
    if not aniParams then
        return
    end
    local aniNode = XH.UITool.seekNodeByName(self._panelShowAni, "nodeAniHou")
    local aniNodeCar = XH.UITool.seekNodeByName(self._panelShowAni, "nodeAniCar")
    local aniNodeQian = XH.UITool.seekNodeByName(self._panelShowAni, "nodeAniQian")
    local parent = XH.UITool.seekNodeByName(self._panelShowAni, "mid")
    aniNode:setPosition(0, 0)
    local playAniFunc = function()
        local propAni
        local showTime = 2.1
        if aniParams.spine then
            parent:setScale(2)
            aniParams.armatureName = "hou"
            propAni = display.playDargonBonesSpine(aniParams)
            -- propAni:setPosition(cc.p(254/2, 125/2))
            aniNode:addChild(propAni)
            local id = propid--math.random(1, 29) + 150800
            local car = cc.Sprite:create("animation/GameCommon/EnterAni/car/icon/"..id..".png")
            car:setAnchorPoint(0.5, 0.5)
            aniNodeCar:addChild(car)
            car:tryAddLuaComponent(cc.ext.CompSpineAction,
                                {jsonFilePath = "animation/GameCommon/EnterAni/car/zzb_rcdj_xqc2.json", animationName = "qian", isLoop = false, boneName = "che", slotName = "che"})

            aniParams.armatureName = "qian"
            propAni = display.playDargonBonesSpine(aniParams)
            -- propAni:setPosition(cc.p(254/2, 125/2))
            aniNodeQian:addChild(propAni)
        else
            parent:setScale(1.5)
            propAni, showTime = display.playDargonBonesAnimByTimes(aniParams, 1)
            aniNode:addChild(propAni)
            if propid == 150300 then
                aniNode:setPositionY(-100)
            end
            -- local moveToAction = cc.MoveTo:create(0.5,toHeadNodePos)
            -- local scaleTo = cc.ScaleTo:create(0.5,0.1)
            -- local spawn = cc.Spawn:create(scaleTo, moveToAction)
            -- propAni:runAction(cc.Sequence:create(delay,spawn,endFunc))
        end
        self._panelShowAni:runAction(cc.Sequence:create(cc.DelayTime:create(showTime), cc.CallFunc:create(function()
            self._panelShowAni:setVisible(false)
            aniNode:removeAllChildren()
        end)))
    end
    playAniFunc()
end

return ShopView
