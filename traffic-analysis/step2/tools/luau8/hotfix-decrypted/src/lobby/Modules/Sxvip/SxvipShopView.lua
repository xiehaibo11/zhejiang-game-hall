local SxvipShopView = class("SxvipShopView", XH.ViewBase)
local AGREEMENT_TYPE = {
    [1] = "SERVER",  --用户协议 
    [2] = "VIP_SERVER",  --vip服务
    [3] = "VIP_RESTORE"  --续费
}

local SxvipConfig = require("lobby.Modules.Sxvip.Config")
local ShopConfig = require("lobby.Modules.Shop.Config")
local UrlConf = require("app.Config.UrlConf")
local IMG_PATH = "hall/Image/Sxvip/buy/"
local PROP_BG_NAME = {
    "svip_buy_Img_wp_di.png",
    "svip_buy_Img_wp_di_lv.png",
    "svip_buy_Img_wp_di_lv.png",
    "svip_buy_Img_wp_di_zi.png"
}

function SxvipShopView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_KW_ROOT_LAYER"},
        ["_KW_BODY"] = {varName = "_KW_BODY"},
        ["_KW_ITEM_ANI_"] = {varName = "_KW_ITEM_ANI_", beginIndex = 1, endIndex = 3},
        ["_KW_PANEL_ITEM_"] = {varName = "_KW_PANEL_ITEM_", beginIndex = 1, endIndex = 4},
        ["_KW_FADE_ANI"] = {varName = "_KW_FADE_ANI"},
        ["_KW_ANI_ROOT"] = {varName = "_KW_ANI_ROOT"},
        ["_KW_LIST_SHOP"] = {varName = "_shopList"},
        ["_KW_ITEM_PROP"] = {varName = "_itemProp"},
        ["_KW_ITEM_PROP_LINE"] = {varName = "_itemPropLine"},
        ["_KW_TXT_TIME"] = {varName = "_txtTime"},
        ["_KW_TXT_TIME1"] = {varName = "_txtTimeTitle"},
        ["_KW_TXT_TITLE_TIP"] = {varName = "_txtTQTip"},
        ["_KW_TXT_TIP_LB"] = {varName = "_txtLB"},
        ["_KW_BTN_RESTORE"] = {varName = "_btnRestore", type = XH.UI_TYPE.BUTTON, onTouchEnded = "ON_KW_BTN_RESTORE"},
        ["_KW_CHECK_PROTOCOL"] = {varName = "_btnProtocol", onTouchEnded = "onTouchEventProtocol", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_VIPPROTOCOL"] = {varName = "_btnVipProtocol", onTouchEnded = "onTouchEventVipProtocol", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_RENEWPROTOCOL"] = {varName = "_btnRenewProtocol", onTouchEnded = "onTouchEventRenewProtocol", type = XH.UI_TYPE.BUTTON},
        ["_KW_BTN_CLOSE"] = {varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_GIVE"] = {varName = "_KW_BTN_GIVE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnGive"},
        ["_KW_BTN_TQ"] = {varName = "_KW_BTN_TQ", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnLookPri"},
        ["_KW_PANEL_ITEM_CLONE"] = {varName = "_KW_PANEL_ITEM_CLONE"},
    }
end

function SxvipShopView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_PAGE_PRODUCTS_CONFIG", callBack = "onEventGetPagProducts"},
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_SHOP_PAGE_MARK_TOP", callBack = "onEventMarkTop"},
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "EVENT_UPDATE_VIPSHOP_LIST", callBack = "onEventMarkTop"},
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REMAINDER", callBack = "onRemainder"},
        { module = XH.lobby:getModule("SxvipAct"), eventKeyName = "SXVIP_ACT_FINISH", callBack = "onFlushSxVipAct" },
    }
end

function SxvipShopView:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipShopLayer.csb"
end

function SxvipShopView:ctor(source, param)
    if param and param.isInCollection then
        self._isInCollection = true -- 初始化ui会用到，所以提前设置
    end
    SxvipShopView.super.ctor(self)
    self._productData = nil
    self._KW_BODY:setVisible(false)
    self:initView()
    if source then
        XH.lobby:getModule("Sxvip.ThrowData"):setThrowDataSource(source)
    end
    if param and param.isInCollection then
        self:setInCollection(true, param.parentSize)
    end
    XH.lobby:getModule("SxvipAct"):reqSxvipInfos()
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.zyt2024032802)
    self._KW_BTN_GIVE:setVisible(not XH.lobby:getModule("Sxvip"):isHideSendMenu())
end

function SxvipShopView:onEnter()
    SxvipShopView.super.onEnter(self)
    self._KW_BODY:runAction(cc.Sequence:create(cc.DelayTime:create(5), cc.CallFunc:create(function() 
        if not self._KW_BODY:isVisible() then
            XH.TipTool.showToast("获取会员商品失败", 3)
            self:close()
        end
    end)))
end

function SxvipShopView:createAni(aniName, loop)
    local startAni = "btcx"
    local loopAni = "btloop"
    local isExpire = XH.lobby:getModule("Sxvip"):isExpire()
    if not isExpire then
        startAni = "btcx2"
        loopAni = "btloop2"
    end
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hy_xfhy/zzb_hy_xfhy.atlas",
        tex = "animation/Lobby/Base/zzb_hy_xfhy/zzb_hy_xfhy.json",
        armatureName = aniName or startAni,
        scale = 1,
        loop = loop or false,
        lastArmatureName = loopAni,
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    return dargonBones, config
end

-- 初始化动画
function SxvipShopView:playAni()
    if self._KW_BODY:isVisible() then
        return
    end
    self._KW_BODY:setVisible(true)
    XH.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        local dargonBones, config = self:createAni()
        dargonBones:registerSpineEventHandler(function(event)
            if self and not tolua.isnull(self) then
                if event.type == 'complete' then
                    dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
                end
            end
        end, sp.EventType.ANIMATION_COMPLETE)
        local size = self._KW_ANI_ROOT:getContentSize()
        dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
        self._KW_ANI_ROOT:addChild(dargonBones)
    end, 4 / 30)

    -- 透明度变化
    if not self._isInCollection then
        self._KW_FADE_ANI:setOpacity(0)
        local delayTime = cc.DelayTime:create(8 / 30)
        local showCard = cc.FadeIn:create(22 / 30)
        local allAction = cc.Sequence:create(delayTime, showCard)
        self._KW_FADE_ANI:runAction(allAction)
    end

    -- 列表1动画
    local dargonBones2 = self:createAni("gx", true)
    self._KW_ITEM_ANI_1:addChild(dargonBones2)
    local dargonBones3 = self:createAni("hy", true)
    self._KW_ITEM_ANI_2:addChild(dargonBones3)
    local dargonBones5 = self:createAni("btn", true)
    self._KW_ITEM_ANI_3:addChild(dargonBones5)

    if not self._isInCollection then
        local text = self._KW_PANEL_ITEM_1:getChildByName("KW_BTN_BUY"):getChildByName("KW_TXT_PRICE")
        text:setOpacity(0)
        local textShowAni = cc.FadeIn:create(4 / 30)
        local textScaleAni = cc.ScaleTo:create(16 / 30, 1.08)
        local textScaleAni2 = cc.ScaleTo:create(20 / 30, 1)
        local allAction3 = cc.Sequence:create(textShowAni, textScaleAni, textScaleAni2)
        text:runAction(allAction3)
    end
    
    -- 气泡动画
    if self._isInCollection then
        self._KW_BTN_TQ:setScale(255)
    else
        self._KW_BTN_TQ:setScale(0)
        local tqDelayTime = cc.DelayTime:create(47 / 30)
        local tqScaleAni1 = cc.ScaleTo:create(7 / 30, 1.07)
        local tqScaleAni2 = cc.ScaleTo:create(5 / 30, 0.95)
        local tqScaleAni3 = cc.ScaleTo:create(5 / 30, 1)
        local allAction4 = cc.Sequence:create(tqDelayTime, tqScaleAni1, tqScaleAni2, tqScaleAni3)
        self._KW_BTN_TQ:runAction(allAction4)
    end

    -- 列表234动画
    for i = 1, self._shopList:getChildrenCount() do
        self:runRightListAni(i, not self._isInCollection)
    end
end

function SxvipShopView:runRightListAni(index, withAni)
    local node = self["_KW_PANEL_ITEM_" .. index]
    if not node then
        node = self._shopList:getChildren()[index]
        if not node then
            return
        end
    end
    if not withAni then
        node:setOpacity(255)
        return
    end
    local curPosX = node:getPositionX()
    node:setOpacity(0)
    node:setScale(0.35)
    node:setPositionX(curPosX + 169)
    local time = 1 / 30 + (index - 1) * 2 / 30
    local delayTime = cc.DelayTime:create(time)
    local showAni = cc.FadeIn:create(6 / 30)
    local scaleAni = cc.ScaleTo:create(5 / 30, 1.03)
    local moveAni = cc.MoveTo:create(8 / 30, cc.p(curPosX, node:getPositionY()))
    local scaleAni2 = cc.ScaleTo:create(10 / 30, 1)
    local allAction = cc.Sequence:create(delayTime, cc.Spawn:create(showAni, scaleAni, moveAni), scaleAni2)
    node:runAction(allAction)
end

function SxvipShopView:initView()
    self._shopList:setScrollBarEnabled(false)
    local isShowProto = device.platform == "ios" or device.platform == "windows"
    self._btnRestore:setVisible(isShowProto)
    -- self._btnProtocol:setVisible(isShowProto)
    -- self._btnVipProtocol:setVisible(isShowProto)
    -- self._btnRenewProtocol:setVisible(isShowProto)
    -- self._txtLB:setVisible(isShowProto)
    self:refreshView()
end

function SxvipShopView:refreshView()
    local productData = XH.lobby:getModule("Sxvip"):getVipShopList()
    if productData and productData.goods_list and #productData.goods_list > 0 then
        self._productData = productData.goods_list
        self:updateViplistView()
        self:playAni()
    else
        local prop_type = SxvipConfig:getSxvipShopId()
        XH.lobby:getModule("Sxvip"):reqExchangeProductsInfo(prop_type)
    end
    self._txtTQTip:setString(string.format("点击查看%d项特权详情", XH.lobby:getModule("Sxvip"):getPrivilegeNum()))
end

function SxvipShopView:onRemainder(event)
    self:refreshView()
    local data = event.data
    if data.afterBuy then
        XH.lobby:getModule("SxvipAct"):reqSxvipInfos(true)
    end
    if data.afterBuy and self._lastProductInfo then
        --showaward
        --赠送道具
        local actConfig = self._lastProductInfo.goods_act and self._lastProductInfo.goods_act.act_config or {}
        local rewards = actConfig.send and actConfig.send.props_arr
        if not rewards and actConfig.send then
            rewards = {actConfig.send}
        end
        if rewards then
            local awardInfo = {}
            for i = 1, #rewards do
                local showAwardUrl = XH.propsData:getExtendPropImgUrlByPropid(tonumber(rewards[i].prop_id))
                if XH.isEmbeddedApp() then
                    showAwardUrl = rewards[i].prop_img or XH.propsData:getExtendPropImgUrlByPropid(tonumber(rewards[i].prop_id))
                end
                awardInfo[i] = {
                    awardUrl = showAwardUrl,
                    propCnt = rewards[i].value,
                    propsname = rewards[i].name
                }
            end
            XH.lobby:getModule("Sxvip"):showAwardView(awardInfo)
        end
        self._lastProductInfo = nil
    end
end

function SxvipShopView:onEventMarkTop(event)
    XH.TipTool.hideLoading()
    self:refreshView()
end

function SxvipShopView:onEventGetPagProducts(event)
    local specialTag = event.data.tag
    if ShopConfig.SpecialTag.SXVIP == specialTag then
        XH.TipTool.hideLoading()
        self:refreshView()
    end
end

function SxvipShopView:updateViplistView()
    local totalNeedCount = #self._productData
    local itemsCnt = self._shopList:getChildrenCount()
    if totalNeedCount > itemsCnt then
        for i = itemsCnt + 1, totalNeedCount do
            local item = self._KW_PANEL_ITEM_CLONE:clone()
            item:setVisible(true)
            item:setPosition(item:getContentSize().width * (i - 0.5) + 10 * (i - 1), 425)
            item:getChildByName("KW_FNT_DAY"):setRotation3D(cc.vec3(8, 0, 0))
            self._shopList:addChild(item)
        end
    end
    -- 创建牌友UI
    local items = self._shopList:getChildren()
    for i = 1, totalNeedCount do
        local productData = self._productData[i]
        local item = items[i]
        if item then
            self:updateItem(item, productData, i)
            item:setVisible(true)
        end
    end
    itemsCnt = self._shopList:getChildrenCount()
    for i = totalNeedCount + 1, itemsCnt do
        if items[i] then
            items[i]:setVisible(false)
        end
    end
    self._shopList:setInnerContainerSize(cc.size(itemsCnt * (self._KW_PANEL_ITEM_CLONE:getContentSize().width + 10), self._shopList:getContentSize().height))
    -- 判断数量无法填充满，居中处理
    local shopListWidth = self._shopList:getContentSize().width
    local innerWidth = totalNeedCount * (self._KW_PANEL_ITEM_CLONE:getContentSize().width + 10)
    if shopListWidth > innerWidth and not self._isMovePos then
        self._isMovePos = true
        local moveY = math.floor((shopListWidth - innerWidth)/2)
        for i = 1, totalNeedCount do
            if items[i] then
                items[i]:setPositionX(items[i]:getPositionX() + moveY)
            end
        end
    end
end

function SxvipShopView:updateItem(vipItem, data, index)
    if tolua.isnull(vipItem) then
        return
    end
    local teQuanNum = XH.lobby:getModule("Sxvip"):getPrivilegeNum()
    local mrValue = XH.lobby:getModule("Sxvip"):getEveryDayAwardValue()
    local expireTime = XH.playerData:getSxvipRemainder()
    local isExpire = XH.lobby:getModule("Sxvip"):isExpire()
    if isExpire then
        self._txtTime:setString("")
    else
        local formattedDate = os.date("%Y.%m.%d %H:%M", expireTime)
        self._txtTime:setString(formattedDate)
    end
    if not self._isInCollection then
        self._txtTimeTitle:setVisible(not isExpire)
    end

    --赠送道具
    local actConfig = data.goods_act and data.goods_act.act_config or {}

    local useData, useSubscription = self:getUseData(data)
    local btnBuy = vipItem:getChildByName("KW_BTN_BUY")
    btnBuy:addTouchEventListener(handler(self, self.onBuy))

    local txtTQNum = vipItem:getChildByName("KW_TXT_TQ_NUM")
    txtTQNum:setString(teQuanNum .. "项")
    local txtMR = vipItem:getChildByName("KW_TXT_MR")
    txtMR:setString(mrValue .. "元")
    local txtMRCost = vipItem:getChildByName("KW_MR_COST")
    local txtDay = vipItem:getChildByName("KW_FNT_DAY")
    txtDay:setString(data.prop_count)
    txtDay:setScale(tonumber(data.prop_count) >= 100 and 0.75 or 1)

    -- 角标
    local tag = vipItem:getChildByName("KW_IMG_TAG")
    local tagConfig = SxvipConfig.TAG[useData.corner_tag]
    if tagConfig then
        tag:setVisible(true)
        pcall(function()
            tag:loadTexture(tagConfig.icon, ccui.TextureResType.plistType)
        end)
    else
        tag:setVisible(false)
    end

    btnBuy.customData = useData
    -- 价值
    local des = actConfig.description or ""
    local txtValue = vipItem:getChildByName("KW_TXT_SONG")
    local value = string.match(des, "value=%d+") or 35
    if txtValue then
        txtValue:setString("送价值" .. value .. "元礼包")
    end
    -- 价格
    local txtPrice = btnBuy:getChildByName("KW_TXT_PRICE")
    local price = useData.real_price or 0
    txtPrice:setString(useSubscription and "连续包月:" .. price .. "元" or price .. "元")
    local priceOneDay = price / data.prop_count
    local priceOneDay2 = math.floor(priceOneDay * 10) / 10
    txtMRCost:setString(string.format("每天仅%.1f元", priceOneDay2))

    local propList = vipItem:getChildByName("KW_LIST_PROPS") --大于3个道具用这个
    -- propList:setScrollBarEnabled(false)
    propList:removeAllChildren()
    -- local propLayout = vipItem:getChildByName("KW_LAYOUT_PROPS") --1-3个道具用这个
    -- propLayout:removeAllChildren()
    if actConfig.send then
        local rewards = actConfig.send.props_arr or {actConfig.send}
        if rewards then
            -- local isUseLayout = #rewards <= 3
            -- local list = nil
            -- if not isUseLayout then
            --     local propLine = self._itemPropLine:clone()
            --     list = propLine:getChildByName("KW_LIST")
            --     list:setScrollBarEnabled(false)
            --     propList:pushBackCustomItem(propLine)
            -- end
            -- propList:setVisible(not isUseLayout)
            -- propLayout:setVisible(isUseLayout)

            for i = 1, #rewards do
                local propItem = self._itemProp:clone()
                propList:addChild(propItem)

                if index == 1 then
                    local dargonBones4 = self:createAni("ss", true)
                    propItem:getChildByName("KW_ANI"):addChild(dargonBones4)
                end

                -- if isUseLayout then
                --     local oneLineStartX = {220, 220 - 145 / 2, 75}
                --     propItem:setPosition(oneLineStartX[#rewards] + (i - 1) * 145, 90)
                --     propLayout:addChild(propItem)
                -- else
                --     if i % 3 == 1 then
                --         local propLine = self._itemPropLine:clone()
                --         list = propLine:getChildByName("KW_LIST")
                --         list:setScrollBarEnabled(false)
                --         propList:pushBackCustomItem(propLine)
                --     end
                --     list:pushBackCustomItem(propItem)
                -- end

                local item = propItem:getChildByName("KW_ICON")
                local bg = propItem:getChildByName("KW_BG")
                if PROP_BG_NAME[index] then
                    bg:loadTexture(IMG_PATH .. PROP_BG_NAME[index], ccui.TextureResType.plistType)
                else
                    bg:loadTexture(IMG_PATH .. "svip_buy_Img_wp_di_zi.png", ccui.TextureResType.plistType)
                end
                local name = propItem:getChildByName("KW_NAME")
                name:setString(rewards[i].name)
                local cnt = propItem:getChildByName("KW_NUM")
                cnt:setString("x" .. rewards[i].value)
                local itemIcon = item:getChildByName("ITEM_ICON")
                local size = item:getContentSize()
                itemIcon = XH.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(item)
                if XH.isEmbeddedApp() then
                    itemIcon:setUrl(rewards[i].prop_img or XH.propsData:getExtendPropImgUrlByPropid(tonumber(rewards[i].prop_id)))
                else
                    itemIcon:setUrl(XH.propsData:getExtendPropImgUrlByPropid(tonumber(rewards[i].prop_id)))
                end
            end
            self:updatePropLayout(propList:getChildren(), propList)
        end
    end

    if data.tags and data.tags[1] then
        local item = XH.lobby:getModule("SxvipAct"):getTargetAct(data.prop_count, data.real_price, data.tags[1].key == "Subscription")
        local panelSxvipAct = vipItem:getChildByName("_KW_SXVIP_XSYH")
        local lineSxvip = ccui.Helper:seekWidgetByName(vipItem, "_KW_LINE")
        local textSxvip = ccui.Helper:seekWidgetByName(vipItem, "KW_TXT_PRICE")
        textSxvip:setPositionX(231)
        lineSxvip:setVisible(false)
        panelSxvipAct:setVisible(false)
        panelSxvipAct.customData = nil
        vipItem:getChildByName("_KW_DIS_PRIZE"):setVisible(false)
        if item then
            local remain = XH.lobby:getModule("SxvipAct"):getRemainTime(item.aid)
            if remain > 0 then
                panelSxvipAct.customData = item
                self:setActSchedule()
            end
        end
    end
end

-- 更新道具布局函数
-- 该函数根据给定的道具列表和父容器来计算并设置每个道具项的位置
-- 这是为了确保道具能够在父容器中以美观、规律的方式排列
--
-- @param items 表示需要在界面上显示的道具项列表
-- @param parent 表示道具项的父容器，通常是一个层或视图
function SxvipShopView:updatePropLayout(items, parent)
    -- 获取父容器的尺寸，用于计算道具布局
    local parentSize = parent:getContentSize()
    -- 计算需要布局的道具数量
    local itemCount = #items
    -- 定义每个布局模式下每行的道具数量
    local oneLineCnt = {{1, 0}, {2, 0}, {3, 0}, {2, 2}, {3, 2}, {3, 3}}
    -- 定义对应布局模式下的行数
    local lineNum = {1, 1, 1, 2, 2, 2}
    -- 设置道具之间的间距
    local gap = 5
    -- 遍历所有道具项，计算并设置其位置
    for i = 1, itemCount do
        -- 根据道具数量和当前道具的索引计算它所在的行数
        local yIdx = i > oneLineCnt[itemCount][1] and 2 or 1
        -- 获取当前行的道具数量
        local curLineCnt = oneLineCnt[itemCount][yIdx]
        -- 计算当前行道具的起始X坐标
        local startX = (parentSize.width - curLineCnt * 140 - (curLineCnt - 1) * gap) / 2 + 5
        -- 计算当前行道具的起始Y坐标
        local startY = (parentSize.height - lineNum[itemCount] * 140 - (lineNum[itemCount] - 1) * gap) / 2
        -- 计算当前道具在行中的索引
        local xIdx = (i - 1) % oneLineCnt[itemCount][yIdx]
        -- 根据当前道具在行中的索引计算其X坐标
        local x = startX + xIdx * 140 + 70 + (xIdx - 1) * gap
        -- 根据当前道具所在的行数计算其Y坐标
        local y = parentSize.height - startY - yIdx * 140 - (yIdx - 1) * gap + 70
        -- 设置道具项的位置
        items[i]:setPosition(x, y)
    end
end

-- 获得UI界面上item的总数
function SxvipShopView:getProductCount()
    return self._vipScrollList:getChildrenCount() or 0
end

-- 获取实际用的数据
function SxvipShopView:getUseData(data)
    local product = data
    local useSubscription = false
    if data.tags and data.tags[1] and data.tags[1].key and data.tags[1].key == "Subscription" then
        useSubscription = true
    end
    return product, useSubscription
end

function SxvipShopView:onBuy(sender, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not sender.customData then
        return
    end

    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090602, {page_item_id=sender.customData.name, block_item_id='会员系统'})
    -- 未实名不能购买 海外玩家不用实名认证
    if XH.configerManager:getIsNewRealName() then
        --实名限制
        if XH.playerData:checkNewRealName() ~= 0 then
            return
        end
    else
        if not XH.lobby:getModule("Shop"):isAleardyRealName() then
            XH.TipTool.showTip(
                {
                    type = XH.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        XH.viewManager:openView("IdentityCheckView")
                    end
                },
                "PLEASE_REAL_NAME"
            )
            return
        end
    end
    local reqBuyData = sender.customData
    local oriInfo = nil
    if sender.customData.tags and sender.customData.tags[1] then
        local item = XH.lobby:getModule("SxvipAct"):getActShopInfo(sender.customData.prop_count, sender.customData.real_price, sender.customData.tags[1].key == "Subscription")
        if item then
            reqBuyData = item
            oriInfo = sender.customData
        end
    end
    self._lastProductInfo = reqBuyData

    if device.platform == "android" or device.platform == "windows" then
        XH.lobby:getModule("Sxvip"):reqBuy(reqBuyData, nil, nil, '会员系统', oriInfo)
    else
        XH.viewManager:openView("SxvipInfoView", nil, reqBuyData, oriInfo)
    end
end

function SxvipShopView:ON_KW_BTN_RESTORE(sender, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.sdkManager:xhCallOCFunc("XH_IAP", "restoreSub:", {})
end

function SxvipShopView:ON_KW_BTN_VIP_PRIVIGATE(sender, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("SxvipPrivilegeView")
end

-- function SxvipShopView:ON_KW_CHECK_BOX(sender , eventType)
--     if eventType == ccui.CheckBoxEventType.selected then
--         self._selected = true
--     elseif eventType == ccui.CheckBoxEventType.unselected then
--         self._selected = false
--     end
--     self:updateViplistView()
-- end
-- 用户协议
function SxvipShopView:onTouchEventProtocol(send, event)
    if self:openUrlByAgreementType(AGREEMENT_TYPE[1]) then 
        return 
    end
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE)
        return
    end
    cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE_IOS)
end

-- 会员服务协议
function SxvipShopView:onTouchEventVipProtocol(send, event)
    if self:openUrlByAgreementType(AGREEMENT_TYPE[2]) then 
        return 
    end
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_USER_VIPPROTOCOL_ANDROID)
        return
    end
    cc.Application:getInstance():openURL(UrlConf.URL_USER_VIPPROTOCOL_IOS)
end

-- 自动续费协议
function SxvipShopView:onTouchEventRenewProtocol(send, event)
    if self:openUrlByAgreementType(AGREEMENT_TYPE[3]) then 
        return 
    end
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_USER_RENEWPROTOCOL_ANDROID)
        return
    end
    cc.Application:getInstance():openURL(UrlConf.URL_USER_RENEWPROTOCOL_IOS)
end

function SxvipShopView:openUrlByAgreementType(type)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    local AgreementConfig = XH.lobby:getModule("Set"):getAgreementConfig(XH.areaData:getLobbyID(),type,targetPlatform)
    if AgreementConfig and AgreementConfig.url then 
        cc.Application:getInstance():openURL(AgreementConfig.url)
        return true
    end
    return false
end

function SxvipShopView:onBtnClose(sender, eventType)
    self:close()
end

function SxvipShopView:onBtnGive(sender, eventType)
    if not self._isInCollection then
        self:close()
    end
    XH.viewManager:openView("SxvipGiveView")
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090608)
end

function SxvipShopView:onBtnLookPri(sender, eventType)
    if not self._isInCollection then
        self:close()
    else
        XH.viewManager:closeView("GoldHallShopView")
    end
    XH.viewManager:openView("SxvipPrivilegeView")
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090607)
end

function SxvipShopView:onFlushSxVipAct()
    self:refreshView()
end

function SxvipShopView:onCleanup()
    self:removeActSchedule()
    SxvipShopView.super.onCleanup(self)
end

function SxvipShopView:removeActSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function SxvipShopView:setActSchedule()
    self:removeActSchedule()
    self:showScheduleStart()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if not self or tolua.isnull(self) then
            return
        end
        self:showScheduleStart()
    end, 1, false)
end

function SxvipShopView:showScheduleStart()
    local showText = "连续包月可随时取消"
    for i = 1, self._shopList:getChildrenCount() do
        local item = self._shopList:getChildren()[i]
        local panelSxvipAct = item:getChildByName("_KW_SXVIP_XSYH")
        local disCountItem = item:getChildByName("_KW_DIS_PRIZE")
        local lineSxvip = ccui.Helper:seekWidgetByName(item, "_KW_LINE")
        local textSxvip = ccui.Helper:seekWidgetByName(item, "KW_TXT_PRICE")
        if panelSxvipAct.customData then
            local item = panelSxvipAct.customData
            local remain = XH.lobby:getModule("SxvipAct"):getRemainTime(item.aid)
            if remain > 0 then
                panelSxvipAct.customData = item
                panelSxvipAct:setVisible(true)
                disCountItem:setVisible(true)
                XH.lobby:getModule("Sxvip"):addSgAni(panelSxvipAct, 2, panelSxvipAct:getChildByName("KW_ANI"))
                lineSxvip:setVisible(true)
                -- lineSxvip:setContentSize(textSxvip:getContentSize().width, lineSxvip:getContentSize().height)
                lineSxvip:setPositionX(textSxvip:getContentSize().width)
                disCountItem:setString(item.actDetail.discounted_price .. "元")
                panelSxvipAct:getChildByName("_KW_LFET_TIME"):setString("限时特惠 " .. self:getLeftTime(remain))
                if item.actDetail.is_sub == 1 then
                    showText = "首月优惠" .. item.actDetail.discounted_price .. "元/月，次月起将于" .. item.actDetail.original_price .. "元/每月续费，可随时取消"
                end
                textSxvip:setPositionX(180)
            else
                textSxvip:setPositionX(231)
                lineSxvip:setVisible(false)
                panelSxvipAct:setVisible(false)
                disCountItem:setVisible(false)
                panelSxvipAct.customData = nil
            end
        end
    end
    self._txtLB:setString(showText)
end

function SxvipShopView:getLeftTime(remainTime)
    local hour = math.floor(remainTime / 3600)
    local minute = math.floor((remainTime - hour * 3600) / 60)
    local sec = remainTime - hour * 3600 - minute * 60
    return string.format("%02d", hour) .. ":" .. string.format("%02d", minute) .. ":" .. string.format("%02d", sec)
end

function SxvipShopView:setInCollection(bCollection, parentSize)
    self._isInCollection = bCollection
    self._KW_BTN_CLOSE:setVisible(not bCollection)
    if bCollection then
        local scale = 0.9
        if parentSize then
            local viewSize = parentSize
            self:setPosition(cc.p(viewSize.width / 2 - 30, viewSize.height / 2))
            self:setAnchorPoint(cc.p(0.5, 0.5))
            self:setScale(scale)
        end
        self._KW_ROOT_LAYER:setBackGroundColorType(ccui.LayoutBackGroundColorType.none)
        self._txtLB:setTextColor(cc.c3b(0, 0, 0))
        self._KW_BTN_TQ:setVisible(false)
        self._txtTimeTitle:setVisible(false)
        self._txtTime:setVisible(false)
        self._KW_ANI_ROOT:setVisible(false)
    end
end

return SxvipShopView
\y