local CaiYunPropNewView = CF.gameClass("CaiYunPropNewView", CF.ViewBase)
local CaiYunPropNewConfig = CF.gameRequire("Modules.CaiYunPropNew.Config")
local CURRENT_MOUDLE_NAME = ...
local KW_HORIZONTAL_DIS = 30 -- 左右边距
local KW_HORIZONTAL_MID_DIS = 30 -- 纵向上下间距
local KW_VECTICAL_MID_DIS = 40 -- 横向中间间距
local KW_VECTICAL_DIS = 20 -- VIP顶边距
local KW_DEFAULT_ITEM_SIZE = cc.size(204, 257)

local KW_IMG_PROP_FRAME = "KW_IMG_PROP_FRAME"
local KW_TEXT_PROP_COST = "KW_TEXT_PROP_COST"
local KW_IMG_PROP_COST = "KW_IMG_PROP_COST"
local KW_TEXT_PROP_COUNT = "KW_TEXT_PROP_COUNT"
local IMG_TIME_BG = "IMG_TIME_BG"
local KW_TEXT_TIME = "KW_TEXT_TIME"
local IMG_REMAIN_TIME_BG = "IMG_REMAIN_TIME_BG"
local KW_REMAIN_TIME = "KW_REMAIN_TIME"
local IMG_TIPS_BG = "IMG_TIPS_BG"
local KW_ITEM_PROP_ICON = "KW_ITEM_PROP_ICON"
local KW_IMG_CAI_ICON = "KW_IMG_CAI_ICON"
local KW_IMG_YUN_ICON = "KW_IMG_YUN_ICON"

local CAIYUN_TYPE = {
    TYPE_CAI = 1,
    TYPE_YUN = 2,
}

local imageMap = {
    [CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL] = "Img_long.png",
    [CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL] = "Img_feng.png",
}

local isShowTips = true

function CaiYunPropNewView:ctor()
    CaiYunPropNewView.super.ctor(self)
    self._curLineCount = 2
    self._timeMap = {}
    self._multiple = 1
    self:initUI()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUNNEW_SHOW_LAYER)
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080826)

    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:updateLeftTime()
    end, 1, false)
end

function CaiYunPropNewView:getCSBPath()
    return "cocosStudio/Common/CSB/CaiYunNewLayer.csb"
end

function CaiYunPropNewView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        ["_KW_TEXT_PROGRESS_CAI"] = {varName = "_progressCaiText"},
        ["_KW_TEXT_PROGRESS_YUN"] = {varName = "_progressYunText"},
        ["_KW_PROGRESS_CAI"] = {varName = "_progressCai"},
        ["_KW_PROGRESS_YUN"] = {varName = "_progressYun"},
        ["_KW_IMG_BAOXIANG"] = {varName = "_baoxiangImg", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchBaoXiang"},
        ["_KW_IMG_NORMAL_REWARD"] = {varName = "_normalImg", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchAward"},
        ["_KW_IMG_DRAGON_REWARD"] = {varName = "_dragonImg", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchAward"},
        ["_KW_IMG_TIPSBG"] = {varName = "_tipsImg"},
        ["_KW_IMG_FINGER"] = {varName = "_fingerImg"},
        ["_KW_BTN_SUB"] = {varName = "_subBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchSub"},
        ["_KW_BTN_ADD"] = {varName = "_addBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchAdd"},
        ["_KW_FNT_MULTI"] = { varName = "_multiNumFnt"},
        ["_KW_FNT_DISCOUNT"] = { varName = "_discountNum"},
        ["_KW_IMG_DISCOUNTBG"] = {varName = "_discountBg"},
        ["_KW_PANEL_DRAGON_ITEM"] = {varName = "_propItemJinlong"},
        ["_KW_PANEL_NORMAL_ITEM"] = {varName = "_propItemNormal"},
        -- ["_KW_LIST_PROP"] = {varName = "_propItemList"},
        ["_KW_SCORLL_PROP"] = {varName = "_propItemList"},
        ["_KW_CAI_ANI_PANEL"] = {varName = "_caiAniNode"},
        ["_KW_YUN_ANI_PANEL"] = {varName = "_yunAniNode"},
    }
end

function CaiYunPropNewView:getProxyEvents()
    return {
        {module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_UPDATE_CAIYUN_PROPLISTINFO", callBack = "onPropListInfoChange"},
        {module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_UPDATE_CAIYUN_INFO", callBack = "onUpdateCaiYunInfo"},
        {module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_PROP_GETAWARD_SUCC", callBack = "onGetCaiYunAward"},
        {module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_UPDATE_PROPS_COUNT", callBack = "onUpdatePropsCount"},
        {module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_PROP_TRANSFER_PROP_SUCC", callBack = "onTransferProps"},
        {module = CF.game:getModule("CaiYunPropNew.Strategy"), eventKeyName = "NUIPRAYSTRATEGY", callBack = "onPrayStrategy" },
    }
end

function CaiYunPropNewView:initUI()
    self:updateAddSubBtn()
    self:showMsgTips()
    CF.game:getModule("CaiYunPropNew"):reqExchangeProductsInfo()
end

function CaiYunPropNewView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.TIPLAYER
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName("CaiYunPropNewView")
        runningScene:addChild(self, zorder)
    end
    return self
end

-- 打开界面无奖励时，显示tips
function CaiYunPropNewView:showMsgTips()
    -- 在请求到是没有奖励时调用
    local caiyunModule = CF.game:getModule("CaiYunPropNew")
    local awardType = caiyunModule:getCurAwardType()
    self._tipsImg:setVisible(awardType == caiyunModule.AWARD_TYPE.NoAward)
    CF.SysTool.performWithDelayGlobal(function()
        if not self or tolua.isnull(self) or not self._tipsImg or not self._tipsImg:isVisible() then
            return
        end
        self._tipsImg:setVisible(false)
    end, 5)
end

function CaiYunPropNewView:onTouchClose(send, eventType)
    local module = CF.game:getModule("JuBaoPen")
    module:updateYS()
    module:playTitleAnimation()
    self:close()
end

function CaiYunPropNewView:onTouchAdd()
    local multiNum = tonumber(self._multiNumFnt:getString()) + 1
    self._multiNumFnt:setString(tostring(multiNum))
    self._multiple = multiNum
    self:showDiscount(multiNum)
    self:updateAddSubBtn()
    self:updateItemPrice(multiNum)
end

function CaiYunPropNewView:onTouchSub()
    local multiNum = tonumber(self._multiNumFnt:getString()) - 1
    self._multiNumFnt:setString(tostring(multiNum))
    self._multiple = multiNum
    self:showDiscount(multiNum)
    self:updateAddSubBtn()
    self:updateItemPrice(multiNum)
end

function CaiYunPropNewView:updateItemPrice(multiNum)
    local childrenItem = self._propItemList:getChildren()
    local needShowTip = isShowTips
    for k, v in pairs(childrenItem) do
        local buyBtn = CF.UITool.seekNodeByName(v, KW_IMG_PROP_FRAME)
        local propId = tonumber(buyBtn.caiyuninfo.value)
        if buyBtn and buyBtn.caiyuninfo then
            if needShowTip and CF.game:getModule("CaiYunPropNew"):isLong(propId) and self._multiple > 1 then
                CF.SysTool.performDelayOnce(function()
                    XH.UITool.setVisible(buyBtn, IMG_TIPS_BG, false)
                end, 3);
                XH.UITool.setVisible(buyBtn, IMG_TIPS_BG, true)
                isShowTips = false
            end
            if buyBtn.propCount and buyBtn.propCount >= multiNum then
                XH.UITool.setVisible(buyBtn, KW_TEXT_PROP_COUNT, true)
                XH.UITool.setVisible(buyBtn, KW_IMG_PROP_COST, false)
            else
                local priceData = CF.game:getModule("CaiYunPropNew"):getNeedPropIDAndPrice(buyBtn.caiyuninfo, multiNum)
                local discount = self:updateItemStrategy(v, tonumber(buyBtn.caiyuninfo.value))
                local cost = (priceData.price or 100) * discount
                local txtCost = cost == 0 and "免费" or cost
                XH.UITool.setText(v, KW_TEXT_PROP_COST,  txtCost)
                XH.UITool.setVisible(buyBtn, KW_TEXT_PROP_COUNT, false)
                XH.UITool.setVisible(buyBtn, KW_IMG_PROP_COST, true)
            end
        end
    end
end

function CaiYunPropNewView:isStrategyActProp(propid)
    local isStrategyProp =  self._multiple == 1 and self:getPrayStrategyModule():isActProp(propid)
    return isStrategyProp
end

-- 显示折扣UI
function CaiYunPropNewView:showDiscount(multiNum)
    if not multiNum then
        self._discountBg:setVisible(false)
        return
    end
    self._discountBg:setVisible(multiNum > 1 or false)
    local discount = CaiYunPropNewConfig.KW_MULTI_DISCOUNT[multiNum]
    self._discountNum:setString(discount)
end

function CaiYunPropNewView:updateAddSubBtn()
    local multiNum = tonumber(self._multiNumFnt:getString())
    if multiNum <= 1 then
        self:setButtonState(self._subBtn, false)
    elseif multiNum >= 10 then
        self:setButtonState(self._addBtn, false)
    else
        self:setButtonState(self._subBtn, true)
        self:setButtonState(self._addBtn, true)
    end
end

function CaiYunPropNewView:setButtonState(node, enable)
    if not node then
        return
    end
    node:setEnabled(enable)
    node:setTouchEnabled(enable)
    node:setBright(enable)
end

function CaiYunPropNewView:onPropListInfoChange(event)
    self:updateItemList()
    self:onUpdatePropsCount()
end

function CaiYunPropNewView:onUpdatePropsCount()
    local propInfo = CF.game:getModule("CaiYunPropNew"):getPropsCount()
    if not propInfo or #propInfo == 0 then
        return
    end
    local childrenItem = self._propItemList:getChildren()
    for k, item in pairs(childrenItem) do
        local buyBtn = CF.UITool.seekNodeByName(item, KW_IMG_PROP_FRAME)
        if buyBtn and buyBtn.caiyuninfo then
            for i, info in pairs(propInfo) do
                if info.prop_id == tonumber(buyBtn.caiyuninfo.value) then
                    if info.count ~= 0 then
                        if info.count_big and info.count_big > 0 then
                            buyBtn.propCount = info.count_big
                        else
                            buyBtn.propCount = info.count
                        end
                        local count = info.count or 0
                        XH.UITool.setText(buyBtn, KW_TEXT_PROP_COUNT, "x" .. tostring(count))
                        XH.UITool.setVisible(buyBtn, KW_TEXT_PROP_COUNT, true)
                        XH.UITool.setVisible(buyBtn, KW_IMG_PROP_COST, false)
                    end
                    if CF.game:getModule("CaiYunPropNew"):isLong(info.prop_id) then
                        local timeBg = CF.UITool.seekNodeByName(item, IMG_REMAIN_TIME_BG)
                        timeBg:setVisible(true)
                        local txtTime = CF.UITool.seekNodeByName(item, KW_REMAIN_TIME)
                        txtTime:setVisible(true)
                        local time
                        if info.time == nil or info.time <= 0 then
                            time = 0
                        else
                            time = info.time
                        end
                        self._timeMap[info.prop_id] = {
                            ["timeBg"] = timeBg,
                            ["txtTime"] = txtTime,
                            ["time"] = time
                        }
                    end
                end
                
            end
        end
    end
    if self._timeMap[CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL] then
        self._timeMap[CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL].time = math.min(self._timeMap[CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL].time, self._timeMap[CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL].time)
        self:updateLeftTime()
    end
end

function CaiYunPropNewView:onPrayStrategy(event)
    self:updateItemPrice(self._multiple)
end

function CaiYunPropNewView:onTransferProps(event)
    if self._reportData then
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080828, self._reportData)
    end
    self:close()
end

function CaiYunPropNewView:getRandomPropId()
    local itemListInfo = CF.game:getModule("CaiYunPropNew"):getPropListInfo()
    local propCnt = 0
    for i=1, #itemListInfo do
        if not CF.game:getModule("CaiYunPropNew"):isLong(tonumber(itemListInfo[i].value)) then
            propCnt = propCnt +1
        end
    end 
    local rt = {}
    -- for j=1, 1 do
        local randIdx = math.random(1, propCnt)
        local idx = 0
        local propid = nil
        for i=1, #itemListInfo do
            if not CF.game:getModule("CaiYunPropNew"):isLong(tonumber(itemListInfo[i].value)) then
                idx = idx +1
                if idx == randIdx then
                    table.insert(rt, tonumber(itemListInfo[i].value))
                end
            end
        end 
    -- end
    return rt
end

-- 更新风信后台请求的道具列表刷新Item信息
function CaiYunPropNewView:updateItemList()
    local itemListInfo = CF.game:getModule("CaiYunPropNew"):getPropListInfo()
    if self:getPrayStrategyModule():getPrayStrategyID() > 0 then
        self:getPrayStrategyModule():setPrayStrategyPropid(self:getRandomPropId())
    end
    self:resetDisPlayContentSize(#itemListInfo)
    local index = 0
    for k,v in pairs(itemListInfo) do
        if tonumber(v.value) ~= CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL then
            index = index + 1
        end
        self:createPropItem(v, index)
    end
    self:onUpdateCaiYunInfo()
end

function CaiYunPropNewView:getPrayStrategyModule()
    return CF.game:getModule("CaiYunPropNew.Strategy")
end

function CaiYunPropNewView:updateItemStrategy(item, propId)
    local panel = XH.UITool.seekNodeByName(item, "KW_PABEL_STRATEGY")
    local timedown = XH.UITool.seekNodeByName(panel, "KW_TEXT_TIME_STRATEGY")
    local nameBg = XH.UITool.seekNodeByName(panel, "KW_IMG_NAME_BG")
    local name = XH.UITool.seekNodeByName(panel, "KW_TXT_NAME")
    local discount = 1
    if panel then
        timedown:removeAllChildren()
        local haveCnt = CF.game:getModule("PropUse"):getPropCnt(propId) 
        if self:isStrategyActProp(propId) and haveCnt == 0 then
            discount = self:getPrayStrategyModule():getDiscount()
            local node = import("../CaiYunAni/TimeDownView", CURRENT_MOUDLE_NAME).new(timedown, function() 
                -- self:updateItemPrice(self._multiple)
            end)
            local info = self:getPrayStrategyModule():getPrayStrategy()
            timedown:addChild(node)
            name:setString(info.name)
            -- nameBg:setContentSize(cc.size(name:getContentSize().width + 16,42))
            panel:setVisible(true)
        else
            panel:setVisible(false)
        end
    end
    return discount
end

function CaiYunPropNewView:createPropItem(info, index)
    local propId = tonumber(info.value)
    local islongfeng = propId == CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL
    local tmpItem = islongfeng and self._propItemJinlong:clone() or self._propItemNormal:clone()
    XH.UITool.addTouchEventListener(tmpItem, KW_IMG_PROP_FRAME, handler(self, self.onBuyPropItem))
    local buyBtn = CF.UITool.seekNodeByName(tmpItem, KW_IMG_PROP_FRAME)
    
    local priceData = CF.game:getModule("CaiYunPropNew"):getNeedPropIDAndPrice(info)
    local discount = self:updateItemStrategy(tmpItem, propId)
    local cost = (priceData.price or 100) * discount
    if buyBtn then
        buyBtn.caiyuninfo = info
        buyBtn.discount = discount
    end
    local txtCost = cost == 0 and "免费" or cost
    XH.UITool.setText(tmpItem, KW_TEXT_PROP_COST,  txtCost)

    if propId == CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL or propId == CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL then
        CF.UITool.loadTexture(tmpItem, KW_IMG_PROP_FRAME, imageMap[propId], ccui.TextureResType.plistType)
    elseif propId ~= CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL then
        self:updateItemIcon(tmpItem, info.image)
    end

    if CF.game:getModule("CaiYunPropNew"):isLong(propId) then
        XH.UITool.setVisible(tmpItem, IMG_TIME_BG, true)
        XH.UITool.setVisible(tmpItem, KW_TEXT_TIME, true)
        XH.UITool.setText(tmpItem, KW_TEXT_TIME,  (info.prop_count or "1").."小时")
    else 
        XH.UITool.setVisible(tmpItem, IMG_TIME_BG, false)
        XH.UITool.setVisible(tmpItem, KW_TEXT_TIME, false)
    end
    local posX, posY = self:getItemPos(tmpItem, index, islongfeng)
    tmpItem:setPosition(cc.p(posX, posY))
    self._propItemList:addChild(tmpItem)
end

function CaiYunPropNewView:getItemPos(item, index, isJinlong)
    local listSize = self._propItemList:getInnerContainerSize()
    local itemSize = item:getContentSize()
    local posX = 0
    local posY = 0
    if isJinlong then
        posX = itemSize.width/2 + KW_VECTICAL_DIS
        posY = listSize.height - itemSize.height/2 - KW_HORIZONTAL_DIS
    else
        local everyLineCount = index <= 4 and 2 or 4
        local tmpXIndex = math.floor((index+everyLineCount-1)%everyLineCount) + (everyLineCount == 2 and 2 or 0)
        local tmpYIndex = math.floor((index-1)/everyLineCount) + (everyLineCount == 2 and 0 or 1)
        posX = (itemSize.width + KW_VECTICAL_MID_DIS)*tmpXIndex + KW_HORIZONTAL_DIS + itemSize.width/2
        posY = listSize.height - itemSize.height*tmpYIndex - itemSize.height/2 - KW_HORIZONTAL_MID_DIS*(tmpYIndex+1)
    end
    return posX, posY
end

function CaiYunPropNewView:updateItemIcon(item, url)
    if not item or not url then
        return
    end

    local node = CF.UITool.seekNodeByName(item, KW_ITEM_PROP_ICON)
    local itemIcon = CF.UITool.seekNodeByName(node, "ITEM_ICON")
    if itemIcon == nil then
        local size = node:getContentSize()
        itemIcon = CF.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        -- :setContentSize(size.width, size.height)
        :setName("ITEM_ICON")
        :addTo(node)
    end
    itemIcon:setUrl(url)
end
-- 计算显示区域的大小的位置
function CaiYunPropNewView:resetDisPlayContentSize(productCount)
    if not productCount then
        return
    end
    -- 每个item的大小
    local productModSize = KW_DEFAULT_ITEM_SIZE
    if self._propItemNormal then
        productModSize = self._propItemNormal:getContentSize()
    end
    local everyLineCount = 4
    -- 龙凤占用4个 所以一个数量算 4个 所以 +3
    local lineCount = math.ceil((productCount + 3) / everyLineCount)
    if lineCount ~= self._curLineCount then
        -- 现有的滑动区域需要变化
        local displayContentSize = self._propItemList:getContentSize()
        self._propItemList:setInnerContainerSize(cc.size(displayContentSize.width, lineCount * (productModSize.height + KW_VECTICAL_MID_DIS) + 80))
        self._curLineCount = lineCount
    end
end

-- 更新服务请求的数据财运数据信息
function CaiYunPropNewView:onUpdateCaiYunInfo(event)
    self:updateCaiYunItemIcon()
    self:updateSelfCaiYun()
    self:updateAwardInfo()
end

-- 更新item财运icon显示
function CaiYunPropNewView:updateCaiYunItemIcon()
    local caiyunInfo = CF.game:getModule("CaiYunPropNew"):getCaiYunInfo()
    if not caiyunInfo or not caiyunInfo.conf_list or #caiyunInfo.conf_list <= 0 then
        return
    end
    local childrenItem = self._propItemList:getChildren()
    for k, item in pairs(childrenItem) do
        local buyBtn = CF.UITool.seekNodeByName(item, KW_IMG_PROP_FRAME)
        if buyBtn and buyBtn.caiyuninfo then
            for i, info in pairs(caiyunInfo.conf_list) do
                if info.prop_id == tonumber(buyBtn.caiyuninfo.value) then
                    self:rePosCaiYunItemIcon(item, info)
                end
            end
        end
    end
end
-- 更新每个Item财运Icon的位置
function CaiYunPropNewView:rePosCaiYunItemIcon(item, info)
    local caiIcon = CF.UITool.seekNodeByName(item, KW_IMG_CAI_ICON)
    local yunIcon = CF.UITool.seekNodeByName(item, KW_IMG_YUN_ICON)
    if not caiIcon or not yunIcon then
        return
    end
    caiIcon:setVisible(info.cai and info.cai ~= 0)
    yunIcon:setVisible(info.yun and info.yun ~= 0)
    if info.cai == 0 and info.yun ~= 0 then
        yunIcon:setPosition(cc.p(caiIcon:getPosition()))
    end
end

-- 更新自己财运值
function CaiYunPropNewView:updateSelfCaiYun()
    local caiyunInfo = CF.game:getModule("CaiYunPropNew"):getCaiYunInfo()
    if not caiyunInfo or not caiyunInfo.cai_cur or not caiyunInfo.cai_max or not caiyunInfo.yun_cur or not caiyunInfo.yun_max then
        return
    end
    if caiyunInfo.cai_cur >= caiyunInfo.cai_max then
        caiyunInfo.cai_cur = caiyunInfo.cai_max
        self:playCaiyunFullAni(CAIYUN_TYPE.TYPE_CAI)
    end
    if caiyunInfo.yun_cur >= caiyunInfo.yun_max then
        caiyunInfo.yun_cur = caiyunInfo.yun_max
        self:playCaiyunFullAni(CAIYUN_TYPE.TYPE_YUN)
    end
    local strCai = string.format("%d/%d", caiyunInfo.cai_cur or 0, caiyunInfo.cai_max or 8888)
    local strYun = string.format("%d/%d", caiyunInfo.yun_cur or 0, caiyunInfo.yun_max or 6666)
    self._progressCaiText:setString(strCai or "")
    self._progressYunText:setString(strYun or "")
    self._progressCai:setPercent(caiyunInfo.cai_cur/(caiyunInfo.cai_max or 8888) * 100)
    self._progressYun:setPercent(caiyunInfo.yun_cur/(caiyunInfo.yun_max or 6666) * 100)
end

-- 更新奖励信息，是否可领奖
function CaiYunPropNewView:updateAwardInfo()
    local caiyunModule = CF.game:getModule("CaiYunPropNew")
    local awardType = caiyunModule:getCurAwardType()
    if awardType == caiyunModule.AWARD_TYPE.FirstAward or awardType == caiyunModule.AWARD_TYPE.GoldDragonAward then
        self:showJinlongAward()
        self:playFingerAni()
    elseif awardType == caiyunModule.AWARD_TYPE.NormalAward then
        self:showNormalAward()
        self:playFingerAni()
    else
        self._baoxiangImg:setVisible(true)
        self._normalImg:setVisible(false)
        self._dragonImg:setVisible(false)
    end
end

-- 展示金龙领奖动画
function CaiYunPropNewView:showJinlongAward()
    if self._baoxiangImg and self._dragonImg then
        self._baoxiangImg:setVisible(false)
        self._dragonImg:setVisible(true)
    end
    local function playAni(node)
        if not node or not node:isVisible() then
            return 
        end
        local big = cc.ScaleTo:create(1,1.3)
        local small = cc.ScaleTo:create(1,1.2)
        local seq = cc.Sequence:create(big, small)
        node:runAction(seq)
    end
    playAni(self._dragonImg)
    CF.UITool.createRepeateAction(self._dragonImg, 2, function()
        if not self or tolua.isnull(self) or not self._dragonImg then
            return
        end
        if not self._dragonImg:isVisible() then
            self._dragonImg:stopAllActions()
            return
        end
        playAni(self._dragonImg)
    end)
end

-- 播放宝箱可领奖动画
function CaiYunPropNewView:showNormalAward()
    if self._baoxiangImg and self._normalImg then
        self._baoxiangImg:setVisible(false)
        self._normalImg:setVisible(true)
    end
    local function playAni(node)
        if not node or not node:isVisible() then
            return 
        end
        local rotateRight = cc.RotateTo:create(0.1, 10);
        local rotateLeft = cc.RotateTo:create(0.1, -10);
        local rotateCenter = cc.RotateTo:create(0.1, 0);
        local seq = cc.Sequence:create(rotateRight, rotateLeft, rotateRight:clone(), rotateLeft:clone(), rotateCenter)
        node:runAction(seq)
    end
    playAni(self._normalImg)
    CF.UITool.createRepeateAction(self._normalImg, 1, function()
        if not self or tolua.isnull(self) or not self._normalImg then
            return
        end
        if not self._normalImg:isVisible() then
            self._normalImg:stopAllActions()
            return
        end
        playAni(self._normalImg)
    end)
end

function CaiYunPropNewView:onTouchBaoXiang(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._tipsImg:setVisible(not self._tipsImg:isVisible())
end

function CaiYunPropNewView:onTouchAward(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local extraData = {}
    local caiyunNewModule = CF.game:getModule("CaiYunPropNew")
    local awardType = caiyunNewModule:getCurAwardType()
    if awardType == caiyunNewModule.AWARD_TYPE.FirstAward then
        extraData.click_source = "首次奖励"
    elseif awardType == caiyunNewModule.AWARD_TYPE.GoldDragonAward then
        extraData.click_source = "金龙奖励"
    elseif awardType == caiyunNewModule.AWARD_TYPE.NormalAward then
        extraData.click_source = "普通奖励"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUNNEW_CLICK_AWARD, nil, extraData)
    
    caiyunNewModule:reqGetCaiYunAward()
end

-- 领取奖励成功
function CaiYunPropNewView:onGetCaiYunAward(event)
    self:close()
end

-- 使用财运道具，区分金龙和普通道具，金龙需要先兑换成中间货币，再请求服务使用
function CaiYunPropNewView:onBuyPropItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not send.caiyuninfo then
        return
    end
    local propid = tonumber(send.caiyuninfo.value)
    local conventionData = {item_id = propid}
    local extraData = {}
    if CF.roomData:isNewGoldRoom() or CF.roomData:isGoldRoom() then
        extraData.room_type = 3
    elseif CF.teaHouseManager:isInTeaHouse() then
        extraData.room_type = 1
    else
        extraData.room_type = 2
    end

    local multiNum = tonumber(self._multiNumFnt:getString())
    extraData.select_state = CF.game:getModule("CaiYunPropNew"):resetMulti(send.caiyuninfo, multiNum)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUNNEW_CLICK_CAIYUNITEM, conventionData, extraData)
    local strategy_id = -1
    local haveCnt = CF.game:getModule("PropUse"):getPropCnt(propid) 
    if send.discount < 1 and multiNum == 1 and self:getPrayStrategyModule():isActProp(tonumber(send.caiyuninfo.value)) and haveCnt == 0 then
        strategy_id = self:getPrayStrategyModule():getPrayStrategyID()
    end
    local discount = strategy_id > 0 and send.discount or 1
    CF.game:getModule("CaiYunPropNew"):buyCaiYunProp(send.caiyuninfo, multiNum, nil, discount, strategy_id)

    local costInfo = CF.game:getModule("CaiYunPropNew"):getNeedPropIDAndPrice(send.caiyuninfo)
    local reportData = {costInfo={propid=send.caiyuninfo.value, cnt=costInfo.price, costPropid=costInfo.propID}, task_id = strategy_id}
    if send.propCount and send.propCount >= multiNum then
        reportData = {propid=send.caiyuninfo.value, cnt=multiNum, costPropid=send.caiyuninfo.value}
    end
    self._reportData = reportData
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080827, reportData)
end

-- 播放财运值满了的动画
function CaiYunPropNewView:playCaiyunFullAni(type)
    local animations = type == CAIYUN_TYPE.TYPE_CAI and "cai-jdt" or "yun-jdt"
    local parentNode = type == CAIYUN_TYPE.TYPE_CAI and self._caiAniNode or self._yunAniNode
    local params = {path = "animation/GameCommon/prop_ani/cy-jdt/", tex = "jindutiao.json", ske = "jindutiao.atlas", armatureName = animations}
    if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            parentNode:removeAllChildren()
            parentNode:addChild(spineNode)
            spineNode:setScale(1.6)
        end
    end
end

-- 播放手指动画
function CaiYunPropNewView:playFingerAni()
    self._fingerImg:setVisible(true)
    local startPos = cc.p(self._fingerImg:getPosition())

    local function playAni(node)
        if not node or not node:isVisible() then
            return 
        end
        local endPos = cc.p(startPos.x - 20, startPos.y + 20)
        local moveEnd = cc.MoveTo:create(0.5, endPos)
        local moveStart = cc.MoveTo:create(0.5, startPos)
        local seq = cc.Sequence:create(moveEnd, moveStart, moveEnd, moveStart)
        node:runAction(seq)
    end
    playAni(self._fingerImg)
    CF.UITool.createRepeateAction(self._fingerImg, 3, function()
        if not self or tolua.isnull(self) or not self._fingerImg then
            return
        end
        if not self._fingerImg:isVisible() then
            self._fingerImg:stopAllActions()
        else
            self._fingerImg:setPosition(startPos)
            playAni(self._fingerImg)
        end
    end)
end

function CaiYunPropNewView:updateLeftTime()
    for k, item in pairs(self._timeMap) do
        if item.time <= 0 then
            item.timeBg:setVisible(false)
            item.txtTime:setVisible(false)
        else
            item.txtTime:setText(XH.StringTool.formatRemainingTime(item.time))
            item.time = item.time - 1
        end
    end
end

function CaiYunPropNewView:onCleanup()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
    CaiYunPropNewView.super.onCleanup(self)
end

return CaiYunPropNewView�s