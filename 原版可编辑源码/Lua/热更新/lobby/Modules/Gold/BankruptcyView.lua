local BaseLiveView = require("lobby.Modules.Gold.BaseLiveView")
local BankruptcyView = class("BankruptcyView", BaseLiveView)
local TaskDefine = require("app.Define.TaskDefine")
local ShopConfig = require("lobby.Modules.Shop.Config")
local YGiftBankruptcyDefine = require("lobby.Modules.YGiftBankruptcy.Define")
function BankruptcyView:getCSBPath()
    return "cocosStudio/hall/CSB/goldroom/GoldBaseLiveNew2.csb"
end

function BankruptcyView:ctor(param)
    param = param or {}
    self._minDiamondProduct = nil
    self._maxDiamondProduct = nil
    self._diamondProducts = {}
    self._goldExchangeProducts = {}
    self._goldNotEnough = param.goldNotEnough or false
    self._roomFlag = param.roomFlag or -1
    self._showBankupt = param.showBankupt or false -- 是否只显示新破产礼包（从大厅入口进）
    self._gameID = param.gameID or 0 -- 判断是否用新的界面
    self._scene = param.scene or 0   -- 进入场景(大厅，金币场大厅，游戏区)
    self._adShow = false
    local gameNotify = param.gameNotify or false
    BaseLiveView.super.ctor(self, param)
    XH.taskManager:reqBaseLiveTask()
    XH.playerData:flushGoldCoin()
    self:getBankruptModule():reqPlayerInfo(nil, nil, nil, self._gameID, gameNotify)
end

function BankruptcyView:getProxyEvents()
    local info2 = {
        { module = XH.taskManager, eventKeyName = "BASE_LIVE_SUCCESS", callBack = "onEventBaseLive" },
        { module = self:getBankruptModule(), eventKeyName = "FLUSH_BANKRUPTCY_ACT_INFO", callBack = "onEventBankruptPreference" },
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onEventProductRefresh" },
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_REQ_EXCHANGE_GOLD_SUCCESS", callBack = "onEventExchangeGold" },
        { module = XH.sdkManager, eventKeyName = "EVENT_TOPONSDK_CALLBACK", callBack = "onToponAdsShowCallBack" },
        { module = self:getBankruptModule(), eventKeyName = "FLUSH_BANKRUPTCY_ACT_INFO_AD", callBack = "onEventBankruptAD" },
        { module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "onDataChanged" },
    }
    return info2
end

function BankruptcyView:getBindingInfo()
    local info = BankruptcyView.super.getBindingInfo()
    local info2 = {
        ["_KW_UI_TITLE"] = { varName = "_uiTitle" },
        ["_KW_UI_PREFERENCE_GOLD_1"] = { varName = "_preferenceGold1" },
        ["_KW_UI_PREFERENCE_GOLD_2"] = { varName = "_preferenceGold2" },
        ["_KW_IIMG_FRAME_BG"] = { varName = "_itemBreakNormal" },
        ["_KW_IIMG_FRAME_BG_AD"] = { varName = "_itemBreakAd" },
    }
    for k, v in pairs(info2) do
        info[k] = v
    end
    return info
end

function BankruptcyView:getBankruptModule()
    local module = XH.lobby:getModule("YGiftBankruptcy")
    if self._gameID == 30579 then
        module = XH.lobby:getModule("YGiftBankruptcyV2")
    end
    return module
end

function BankruptcyView:onEventBaseLive(event)
    local baseLiveInfo = event.baseLiveInfo
    if not baseLiveInfo then return end
    self._uiTitle:setVisible(true)
    if self._roomFlag and self._roomFlag > 0 and self._roomFlag%10 >= 4 then 
        self._uiTitle:loadTexture("Titile_dszq.png", ccui.TextureResType.plistType)
        return
    end 
    local goldCount = baseLiveInfo.addcnt or 0
    local currentPrograss = baseLiveInfo.nComplete or 0
    local totalPrograss = baseLiveInfo.total or 0
    local isFinish = currentPrograss == totalPrograss
    XH.UITool.setText(self._itemBreakNormal, "_KW_TEXT_ITEM_CNT", "x" .. goldCount)
    XH.UITool.setText(self._itemBreakNormal, "_KW_TEXT_ITEM_LEFT_TIMES_CURRENT", currentPrograss )
    XH.UITool.setText(self._itemBreakNormal, "_KW_TEXT_ITEM_LEFT_TIMES_TOTAL","/" .. totalPrograss)
    self._itemBreakNormal:setVisible(not isFinish)
    local playerSR = XH.playerData:getSR() or 0
    if baseLiveInfo.nExtraParam2 and playerSR >= baseLiveInfo.nExtraParam2 then 
        self._itemBreakNormal:setVisible(false)
    elseif baseLiveInfo.sTip and playerSR >= baseLiveInfo.sTip then 
        self._itemBreakNormal:setVisible(false)
    end
    if isFinish then 
        self._uiTitle:loadTexture("Titile_dszq.png", ccui.TextureResType.plistType)
        -- 请求广告领取次数
        self:getBankruptModule():reqDoBankruptcyAd(YGiftBankruptcyDefine.ACTION_TYPE.QUERY)
    else
        self._uiTitle:loadTexture("Titile_jbbz.png", ccui.TextureResType.plistType)
        local extraDataInfo = {
            strType = "救济金",
            strPrice = "null",
            strGold = goldCount .. "金币",
            goodsId = "null",
            page_item_id = "领取",
        }
        XH.UITool.addTouchEventListener(self._itemBreakNormal, "_KW_BTN_ITEM_GET", handler(extraDataInfo, handler(self, self.onTouchEventReq)))
        self:pushThrowExtraInfo(extraDataInfo, true)
    end 
end

function BankruptcyView:onEventBankruptAD(event)
    if not event or not event.msg then
        return
    end
    self._itemBreakNormal:setVisible(false)
    local total = event.msg.total
    local complete = event.msg.complete
    local max_cnt = event.msg.maxCnt
    local min_cnt = event.msg.minCnt
    local isFinish = total == complete
    XH.UITool.setText(self._itemBreakAd, "_KW_TEXT_ITEM_CNT_AD", min_cnt .. "-" .. max_cnt)
    XH.UITool.setText(self._itemBreakAd, "_KW_TEXT_ITEM_LEFT_TIMES_AD", "今日已领取" .. complete .. "/" .. total)
    self._itemBreakAd:setVisible(not isFinish)
    local playerSR = XH.playerData:getSR() or 0
    if event.msg.addCnt + playerSR >= YGiftBankruptcyDefine.BreakGold then
        self._itemBreakAd:setVisible(false)
    end
    if self._itemBreakAd:isVisible() then
        self._adShow = true
    end
    if not isFinish then
        local extraDataInfo = {
            strType = "广告奖励",
            strPrice = "null",
            strGold = min_cnt .. "-" .. max_cnt .. "金币",
            goodsId = "null",
            page_item_id = "观看视频",
        }
        XH.UITool.addTouchEventListener(self._itemBreakAd, "_KW_BTN_ITEM_GET_AD", handler(extraDataInfo, handler(self, self.onTouchEventReqAD)))
        self:pushThrowExtraInfo(extraDataInfo, true)
    end
end

function BankruptcyView:onEventBankruptPreference(event)
    local goods = self:getBankruptModule():getPlayerActInfo()
    if goods == nil or #goods == 0 then 
        local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
        if not XH.lobby:getModule("Shop"):getShopItemsWithId(subId) then
            XH.lobby:getModule("Shop"):reqProductList(ShopConfig.ProductType.DIAMOND)
        end
        local _, goldSubId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.GOLD)
        if goldSubId and not XH.lobby:getModule("Shop"):getShopItemsWithId(goldSubId) then
            XH.lobby:getModule("Shop"):reqShopProductByConfig(goldSubId)
        end
        XH.lobby:getModule("Shop"):reqProductList(ShopConfig.ProductType.GOLD)
        return 
    end 

    local currentCount, totalCount = self:getBankruptModule():getPlayerCnt()
    local isFinish = currentCount == totalCount
    local preferenceGoldPanel = self._preferenceGold1
    if #goods > 1 then 
        preferenceGoldPanel = self._preferenceGold2
    end
    for i, v in ipairs(goods) do
        local infoPanel = XH.UITool.seekWidgetByName(preferenceGoldPanel, "_KW_PANEL_INFO_" .. i )
        if infoPanel then
            local strGoldCount = XH.StringTool.numberToString(goods[i].gold or 0, 1) .. "金币"
            XH.UITool.setText(infoPanel,"_KW_GOLD_COUNT_TEXT",strGoldCount)
            local strPrice = XH.StringTool.numberToString(goods[i].price or 9999, 1) .. "元"
            XH.UITool.setText(infoPanel,"_KW_PRICE_TEXT",strPrice)
            XH.UITool.setText(infoPanel,"_KW_PREFERENCE_TEXT",goods[i].remark)
            XH.UITool.setVisible(infoPanel,"_KW_UI_PREFERENCE",goods[i].remark ~= "")
            local needDelete = false
            local extraDataInfo = {
                strType = "直充礼包",
                strPrice = strPrice,
                strGold = strGoldCount,
                goodsId = tostring(goods[i].goodsId),
                page_item_id = "充值",
                gameId = goods[i].gameId
            }
            if i == 1 then 
                needDelete = true
            end 
            XH.UITool.addTouchEventListener(infoPanel, "_KW_BTN_BUY", handler(extraDataInfo, handler(self, self.onTouchEventBreakGiftNew)))
            self:pushThrowExtraInfo(extraDataInfo, needDelete)
        end
    end
    self:showPreferenceGoldPanel(#goods)
end

function BankruptcyView:onEventProductRefresh(data)
    if data then
        local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
        self._diamondProducts = XH.lobby:getModule("Shop"):getShopItemsWithId(subId) or {}
        -- 设置充值按钮的值
        self._goldExchangeProducts = XH.lobby:getModule("Shop"):getProductList(ShopConfig.ProductType.GOLD) or {}
        if next(self._diamondProducts) and next(self._goldExchangeProducts) then
            self:setExchageProductInfo()
        end
        local product = self:getExchangeProduct()
        if product then 
            local preferenceGoldPanel = self._preferenceGold1
            local infoPanel = XH.UITool.seekWidgetByName(preferenceGoldPanel, "_KW_PANEL_INFO_" .. 1 )
            local extraDataInfo = {
                strType = "普通商品",
                strPrice = (product.price or 0) .. "钻石",
                strGold = product.name or "",
                goodsId = "null",
                page_item_id = "领取"
            }
            if infoPanel then
                XH.UITool.setText(infoPanel,"_KW_GOLD_COUNT_TEXT",product.name or "")
                local strPrice = (product.price or 0) .. "钻石"
                XH.UITool.setText(infoPanel,"_KW_PRICE_TEXT",strPrice)
                XH.UITool.addTouchEventListener(infoPanel, "_KW_BTN_BUY", handler(extraDataInfo, handler(self, self.onTouchEventExchange)))
            end
            self:pushThrowExtraInfo(extraDataInfo, true)
            self:showPreferenceGoldPanel(1)
        end 
    end
end

function BankruptcyView:onTouchEventBreakGiftNew(extraDataInfo, send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:throwClickData(extraDataInfo)
    if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
    if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
    if self:isNewBankupt() and self:isBankruptBuy() then
        self:getBankruptModule():reqBuyBankuptcyGift(false, extraDataInfo.goodsId, extraDataInfo.gameId or 0)
        self:close()
        return
    end
    XH.viewManager:openView("GiftBagView")
    self:close()
end

function BankruptcyView:onTouchEventExchange(extraDataInfo, send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:throwClickData(extraDataInfo)
    BankruptcyView.super.onTouchEventChargeNew(self)
end

function BankruptcyView:onTouchEventCloseBtn(send, eventType)
    if self._itemBreakNormal and self._itemBreakNormal:isVisible() then
        if XH.isEmbeddedApp() then
            self:getBankruptModule():reqBaseLiveAward()
        else
            XH.taskManager:reqTaskGetAward(TaskDefine.TASK_ID.BASE_LIVE_THREE)
        end
    end
    self:close()
end

function BankruptcyView:onTouchEventReq(extraDataInfo, send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not self:JudgeBankrupt() then
        return
    end
    if self:isNewBankupt() then
        self:throwClickData(extraDataInfo)
    end
    if XH.isEmbeddedApp() then
        self:getBankruptModule():reqBaseLiveAward()
    else
        XH.taskManager:reqTaskGetAward(TaskDefine.TASK_ID.BASE_LIVE_THREE)
    end
end

function BankruptcyView:showPreferenceGoldPanel(count)
    if count <= 1 then 
        self._preferenceGold1:setVisible(true)
        self._preferenceGold2:setVisible(false)
    else 
        self._preferenceGold2:setVisible(true)
        self._preferenceGold1:setVisible(false)
    end

end 

function BankruptcyView:pushThrowExtraInfo(extraInfo, needDelete)
    if self._extraDataInfo == nil then
        self._extraDataInfo = {}
    end
    if needDelete then
        for i = #self._extraDataInfo, 1, -1 do
            if self._extraDataInfo[i].strType == extraInfo.strType then
                table.remove(self._extraDataInfo, i)
            end
        end
    end
    self._extraDataInfo[#self._extraDataInfo + 1] = extraInfo
end

function BankruptcyView:startThrowData()
    local throwInfo = "startThrowData1"
    if self._extraDataInfo then
        -- 构建conventionData
        throwInfo = "startThrowData2"
        local gameid = self:getBankruptModule():getThrowDataGameID()
        local block_label = "游戏房间"
        if self._scene == XH.LOBBY_TYPE.YUEJU then
            block_label = "大厅"
        elseif self._scene == XH.LOBBY_TYPE.XIUXIAN then
            block_label = "金币场大厅"
        end
        local createType = self:getBankruptModule():getCreateType()
        local conventionData = { 
            page_label = "破产礼包", 
            block_item_id = gameid,
            page = block_label,
            item_id = createType or 0,
            game_id = string.format("%d_%d", XH.areaData:getAreaID(), gameid),
        }
        -- 构建extraData
        local roomLevel = self:getBankruptModule():getRoomLevel()
        local strInfo = ""
        for k, v in pairs(self._extraDataInfo) do 
            local tmpStr = string.format("%s_%s_%s_%s", v.strType, v.strPrice, v.strGold, v.goodsId)
            if k ~= #self._extraDataInfo then
                tmpStr = tmpStr .. ";"
            end
            strInfo = strInfo .. tmpStr
        end
        local extraData = {
            source = roomLevel or -1,  -- 房间等级
            info = strInfo or "",      -- info信息
        }
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052903, conventionData, extraData)
    end
    if self._adShow then
        self:throwADData(XH.NewThrowDataDefine.ws24120401)
    end
    self._extraDataInfo = {}
    if self._scene and self._scene ~= XH.LOBBY_TYPE.YUEJU and self._scene ~= XH.LOBBY_TYPE.XIUXIAN then
        self:throwExceptionData(throwInfo)
    end
end

function BankruptcyView:throwClickData(extraData)
    local block_label = "游戏房间"
    if self._scene == XH.LOBBY_TYPE.YUEJU then
        block_label = "大厅"
    elseif self._scene == XH.LOBBY_TYPE.XIUXIAN then
        block_label = "金币场大厅"
    end
    local gameid = self:getBankruptModule():getThrowDataGameID()
    local conventionData = { 
        page_label = "破产礼包", 
        block_item_id = gameid,
        page = block_label,
        page_item_id = extraData.page_item_id,
        game_id = string.format("%d_%d", XH.areaData:getAreaID(), gameid),
    }
    -- 构建extraData
    local roomLevel = self:getBankruptModule():getRoomLevel()
    local strInfo = string.format("%s_%s_%s_%s", extraData.strType, extraData.strPrice, extraData.strGold, extraData.goodsId or "null")
    local extraData = {
        source = roomLevel or -1,  -- 房间等级
        info = strInfo or "",      -- info信息
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052904, conventionData, extraData)
end

function BankruptcyView:onCleanup()
    self:startThrowData()
    BaseLiveView.super.onCleanup(self)
    XH.lobby:getModule("AutoPop"):onChangeScene("closeBrokenGiftView")
    XH.lobby:getModule("AutoPop"):whenBackLobbyCheckPop()
end

-- 破产看视频，播放完成
function BankruptcyView:onToponAdsShowCallBack(event)
    local code = event.data.code
    if (code == XH.ThirdDefine.TOPONSDK_CALLBACK_CODE.TOPON_FLAG_SDK_JLSUCCESS) then
        -- 激励视频播放成功
        self:getBankruptModule():reqDoBankruptcyAd(YGiftBankruptcyDefine.ACTION_TYPE.GETWARD)
    elseif code == XH.ThirdDefine.TOPONSDK_CALLBACK_CODE.TOPON_FLAG_SDK_SHOWFAILED or 
        code == XH.ThirdDefine.TOPONSDK_CALLBACK_CODE.TOPON_FLAG_SDK_LOADFAIL then
        XH.TipTool.showToast("加载广告失败，请下次再尝试")
    end
end

function BankruptcyView:onTouchEventReqAD(extraDataInfo, send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- 打开广告
    self:throwClickData(extraDataInfo)
    self:throwADData(XH.NewThrowDataDefine.ws24120402)
    XH.sdkManager:addToponAds(XH.ThirdDefine.TOPONSDK_AD_TYPE.REWARDEVIDEO ,"show", false)
end

function BankruptcyView:onDataChanged()
    local playerSR = XH.playerData:getSR() or 0
    if playerSR >= YGiftBankruptcyDefine.BreakGold then 
        self._itemBreakNormal:setVisible(false)
        self._itemBreakAd:setVisible(false)
        return
    end
    local normalCurrCnt = XH.UITool.getText(self._itemBreakNormal, "_KW_TEXT_ITEM_LEFT_TIMES_CURRENT")
    local normalTotalCnt = XH.UITool.getText(self._itemBreakNormal, "_KW_TEXT_ITEM_LEFT_TIMES_TOTAL")
    if normalCurrCnt ~= "-" and normalCurrCnt < normalTotalCnt then
        self._itemBreakNormal:setVisible(true)
        return
    end
    -- 不在分群内，不显示广告
    local aidAd = self:getBankruptModule():getADActivityId()
    if not aidAd then
        return
    end
    local strAd = XH.UITool.getText(self._itemBreakAd, "_KW_TEXT_ITEM_LEFT_TIMES_AD")
    local nums = {}
    for number in string.gmatch(strAd, "%d+") do
        table.insert(nums, tonumber(number))
    end
    if #nums > 0 and nums[1] < nums[2] and nums[2] ~= 0 then
        self._itemBreakAd:setVisible(true)
        self._adShow = true
    end
end

function BankruptcyView:throwExceptionData(info)
    local params = {
        createType = self:getBankruptModule():getCreateType(),
        roomLevel = self:getBankruptModule():getRoomLevel(),
        gameID = self:getBankruptModule():getThrowDataGameID(),
        request_code = "",
        info = info or ""
    }
end

return BankruptcyView