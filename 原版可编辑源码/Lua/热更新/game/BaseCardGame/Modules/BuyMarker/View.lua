local BuyMarkerView = CF.gameClass("BuyMarkerView", CF.ViewBase)
local BuyMarkerConfig = CF.gameRequire("Modules.BuyMarker.Config")
-- UI名字定义
local KW_IMG_PRODUCT_IMG = "KW_IMG_PRODUCT_IMG"
local KW_BTN_BUY = "KW_BTN_BUY"

local KW_TXT_NAME = "KW_TXT_NAME"
local KW_TXT_DESP = "KW_TXT_DESP"
local KW_TXT_PRICE = "KW_TXT_PRICE"
-- local KW_TXT_TIPNONE = "KW_TXT_TIPNONE"
local KW_TXT_MARKER_TIPS = "KW_TXT_MARKER_TIPS"
local KW_IMG_FLAG = "KW_IMG_FLAG"
-- local KW_PNL_TIPNONE = "KW_PNL_TIPNONE"
local KW_TXT_NUM_LIMITED = "KW_TXT_NUM_LIMITED"
local KW_IMG_BUY_ICO = "KW_IMG_BUY_ICO"

-- local MARKER_TYPE = 4
local KW_ICON_SCALE = 0.75
local tblProductIcon = {
    [tostring(BuyMarkerConfig.KW_PROP_MARKER_ID)] = "sk_shop_ico_jipaiqi.png",
    [tostring(BuyMarkerConfig.KW_PROP_MARKER_GOLD_ID)] = "sk_shop_ico_jipaiqi_gold.png",
}

local ProductDetailIcon = {
    ["钻石"] = "ico_diamond.png",
    ["房卡"] = "ico_card.png",
    ["金币"] = "ico_gold.png"
}

-- 根据策划要求的的极其复杂的排序函数
-- 排序包厢场
local function cmpForNormal(a, b)
    if a.inner_game_sort ~= b.inner_game_sort then
        return a.inner_game_sort > b.inner_game_sort
    end
    -- 如果有一天的则一天的最优先
    if a.prop_count == 24 and b.prop_count ~= 24 then
        return true
    elseif b.prop_count == 24 then
        return false
    else
        -- 然后按时间排序
        return a.prop_count < b.prop_count
    end
end

-- 排序金币场
local function cmpForGold(a, b)
    if a.inner_game_sort ~= b.inner_game_sort then
        return a.inner_game_sort > b.inner_game_sort
    end
    -- 如果有2小时的则2小时的最优先
    if a.prop_count == 2 and b.prop_count ~= 2 then
        return true
    elseif b.prop_count == 2 then
        return false
    else
        -- 一天以内的计时要在计局前
        if a.prop_count <= 24 and b.prop_count <= 24 then
            if tonumber(a.value) == tonumber(b.value) then
                -- 然后按时间排序
                return a.prop_count < b.prop_count
            else
                return tonumber(a.value) < tonumber(b.value)
            end
        end
        -- 然后按时间排序
        return a.prop_count < b.prop_count
    end
end

function BuyMarkerView:ctor(param)
    BuyMarkerView.super.ctor(self,param)
    self:initUI()
    self:initLoadingAni()
end

function BuyMarkerView:getCSBPath()
    return "cocosStudio/Common/CSB/BaseCardGame/MarkerShopLayer.csb"
end

function BuyMarkerView:getBindingInfo()
    return {
        ["_KW_SCROLLVIEW_DISPLAY"] = { varName = "_displayList" },
        ["_KW_PANEL_PRODUCT_MOD"] = { varName = "_productMod" },
        ["_KW_PANEL_POS_LOADING"] = { varName = "_posLoading" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded="onTouchEventClose" },
        ["_KW_PANEL_PRODUCT_BIG"] = { varName = "_btnProductBig" },
        ["_KW_PANEL_PRODUCT_POS_"] = { varName = "_pnlPos", beginIndex = 1, endIndex = 4 },
    }
end

function BuyMarkerView:getProxyEvents()
    return {
        { module = CF.game:getModule("BuyMarker"), eventKeyName = "EVENT_PROPS_CHANGED", callBack = "onMarkerPropsChanged" },
        { module = CF.game:getModule("BuyMarker"), eventKeyName = "EVENT_EXCHANGE_SUCCESS", callBack = "onExchangeSuccess" },
        { module = CF.game:getModule("BuyMarker"), eventKeyName = "EVENT_SHOW_LOADING", callBack = "onShowLoading" },
    }
end

function BuyMarkerView:initLoadingAni()
    --init anim
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
        "animation/Lobby/Base/loading_small_ani/loading_small_ani0.png", 
        "animation/Lobby/Base/loading_small_ani/loading_small_ani0.plist", 
        "animation/Lobby/Base/loading_small_ani/loading_small_ani.ExportJson")

    local lastCreatArmature = ccs.Armature:create("loading_small_ani")
    if lastCreatArmature then
        self._posLoading:addChild(lastCreatArmature)
        lastCreatArmature:setAnchorPoint(cc.p(0.5, 0.5))
        lastCreatArmature:getAnimation():play("Animation1", -1, 1)
    end
end

function BuyMarkerView:onShowLoading(event)
    local visible = false
    if event.msg and event.msg.isShow then
        visible = true
    end
    if self._posLoading then
        self._posLoading:setVisible(visible)
    end
end

function BuyMarkerView:initUI()
    if self._productMod then
        -- 初始化小商品
        for i = 1, 4 do
            local tPos = self["_pnlPos" .. tostring(i)]
            if tPos and next(tPos:getChildren()) == nil then
                local item = self._productMod:clone()
                if item then
                    item:setPosition(cc.p(0, 0))
                    item:setVisible(true)
                    item:retain()
                    item:removeFromParent()
                    tPos:addChild(item)
                    item:release()
                    self:updateItemUI(item)
                    CF.UITool.addTouchEventListener(item, KW_BTN_BUY, handler(self, self.onBuyBtnTouchEvent))
                end
            end
        end
    end
    -- 初始化大商品
    self:updateItemUI(self._btnProductBig)
    CF.UITool.addTouchEventListener(self._btnProductBig, KW_BTN_BUY, handler(self, self.onBuyBtnTouchEvent))
end

function BuyMarkerView:onMarkerPropsChanged(event)
    self:loadProducts()
end

function BuyMarkerView:onExchangeSuccess(event)
    self:close()
end

-- 计算显示区域的大小的位置
function BuyMarkerView:resetDisPlayContentSize(productCount)
    if not productCount then
        return
    end
    local everyLineCount = 4
    local lineCount = math.ceil(productCount / everyLineCount)

    if lineCount ~= self._curLineCount then
        -- 现有的滑动区域需要变化
        local displayContentSize = self._displayList:getContentSize()
        local averageHeight = displayContentSize.height
        self._displayList:setInnerContainerSize(cc.size(displayContentSize.width, lineCount * averageHeight))
        self._curLineCount = lineCount
    end
end

-- 获得UI界面上item的总数
function BuyMarkerView:getProductCount()
    return self._displayList:getChildrenCount() or 0
end

-- 通过索引获得item
function BuyMarkerView:getProductByIndex(index)
    return self._displayList:getChildByName(tostring(index))
end

-- 清除所有显示的商品
function BuyMarkerView:clear()
    self._displayList:removeAllChildren()
end

-- 添加一个item到界面上
function BuyMarkerView:createNewProduct(productData, index)
    local item = self._productMod:clone()
    if item then
        -- 挂载到ScrollView中去
        item:retain()
        item:removeFromParent()
        self._displayList:addChild(item)
        item:release()
    end
    return item
end

-- 初始化item
function BuyMarkerView:updateItemUI(node, productData)
    local bShow = (productData ~= nil)
    CF.UITool.setVisible(node, KW_BTN_BUY, bShow)
    CF.UITool.setVisible(node, KW_TXT_NAME, bShow)
    CF.UITool.setVisible(node, KW_TXT_DESP, bShow)
    CF.UITool.setVisible(node, KW_TXT_PRICE, bShow)
    CF.UITool.setVisible(node, KW_IMG_PRODUCT_IMG, bShow)

    if productData then
        -- 设置item属性
        local btnBuy = CF.UITool.seekNodeByName(node, KW_BTN_BUY)
        if btnBuy then
            btnBuy.info = productData
        end
        CF.UITool.setText(node, KW_TXT_NAME, productData.name)
        CF.UITool.setText(node, KW_TXT_DESP, productData.des)
        -- 新商城
        if productData.price_config and #productData.price_config > 0 then
            local price = productData.price_config[1]
            CF.UITool.setText(node, KW_TXT_PRICE, price.value)
            CF.UITool.ignoreContentAdaptWithSize(node, KW_IMG_BUY_ICO, true)
            cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/PersonalCenter/personal_center.plist")
            CF.UITool.loadTexture(node, KW_IMG_BUY_ICO, ProductDetailIcon[price.name], ccui.TextureResType.plistType)
            CF.UITool.setScale(node, KW_IMG_BUY_ICO, KW_ICON_SCALE)
        else
            CF.UITool.setScale(node, KW_IMG_BUY_ICO, 1)
            CF.UITool.setText(node, KW_TXT_PRICE, tonumber(productData.price))
        end
        if tblProductIcon[productData.value] then
            CF.UITool.loadTexture(node, KW_IMG_PRODUCT_IMG, tblProductIcon[productData.value], ccui.TextureResType.plistType)
        end

        if productData.mark and productData.mark ~= "" then
            local hot = string.find(productData.mark, "特价")
            hot = hot or false
            if hot then
                --判断是否可以购买
                local buyTime = tonumber(string.match(productData.mark, "%d%d"))
                local isTimeToBuy = (CF.game:getModule("BuyMarker"):getSysTime() >= buyTime)
                CF.UITool.setVisible(node, KW_IMG_FLAG, true)
                CF.UITool.setText(node, KW_TXT_NUM_LIMITED, "每天限量100个") -- 后台不一定是100个
                CF.UITool.setVisible(node, KW_TXT_NUM_LIMITED, true)
                CF.UITool.setText(node, KW_TXT_MARKER_TIPS, "每日" .. buyTime .. "点开抢")
                CF.UITool.setVisible(node,KW_TXT_MARKER_TIPS,not isTimeToBuy)
                local btn = CF.UITool.seekNodeByName(node,KW_BTN_BUY)
                if btn then
                    btn:setEnabled(isTimeToBuy)
                    local shaderCmd = "ShaderUIGrayScale"
                    if isTimeToBuy then
                        shaderCmd = "ShaderPositionTextureColor_noMVP"
                    end
                    local glProgram = cc.GLProgramCache:getInstance():getGLProgram(shaderCmd)
                    local render = btn:getVirtualRenderer()
                    if glProgram and render then
                        render:setGLProgram(glProgram)
                    end
                    for _,v in pairs(btn:getChildren()) do
                        v:setGLProgram(glProgram)
                        local rChild = v:getVirtualRenderer()
                        if rChild then
                            rChild:setGLProgram(glProgram)
                        end
                    end
                end
            end
        end
    end
end


function BuyMarkerView:show()
    CF.game:getModule("BuyMarker"):RequestSysTime()
end

-- 用新的数据重新刷新UI,UI复用
function BuyMarkerView:loadProducts()
    local productList = CF.game:getModule("BuyMarker"):getProps()
    local totalNeedCount = #productList
    if totalNeedCount == 0 then
        CF.TipTool.showToast("获取商品列表失败,请重新获取...", 2)
        self._btnProductBig:setVisible(false)
    end

    table.walk(productList, function(v, _)
        if v.price == 0 and v.price_config and #v.price_config > 0 then
            v.price = tonumber(v.price_config[1].value)
        end
    end)
    
    if CF.game:getModule("BuyMarker"):isGold() then
        table.sort(productList, cmpForGold)
    else
        local tProductList = {}
        table.walk(productList, function(v, _)
            if v.value == tostring(BuyMarkerConfig.KW_PROP_MARKER_ID) then
                table.insert(tProductList, v)
            end
        end)
        productList = tProductList
        table.sort(productList, cmpForNormal)
    end

    self:updateItemUI(self._btnProductBig, productList[1])

    -- 创建商品UI
    for i = 1, 4 do
        self:updateItemUI(self["_pnlPos" .. tostring(i)], productList[i + 1])
    end
end

function BuyMarkerView:showSelf(zorder)
	zorder = zorder or CF.ZORDER.WINDOW
	local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)
        self:show()
	end
	return self
end

------------------事件处理------------------------
-- 关闭按钮
function BuyMarkerView:onTouchEventClose(send, event)
    self:close()
end

-- 购买按钮处理
function BuyMarkerView:onBuyBtnTouchEvent(send, event)
    self:onBtnTouchEvent(send, event)
    if event ~= ccui.TouchEventType.ended or not send then
        return
    end
    if not CF.getLobbyModule("QuickRecharge"):checkPropEnough(send.info.needPropId, send.info.price) then
        local Config = require("lobby.Modules.QuickRecharge.Config")
        CF.getLobbyModule("QuickRecharge"):reqSpecialSceneGoods(Config.SCENE_NAME.KW_BOX_MARKER)
    else
        CF.game:getModule("BuyMarker"):buyMarker(send.info, function() 
            XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080861, {costInfo={propid=send.info.value,costPropid=send.info.needPropId,cnt=send.info.price}})
        end)
    end
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080860, {costInfo={propid=send.info.value,costPropid=send.info.needPropId,cnt=send.info.price}})
end

-- 按钮音效动画等
function BuyMarkerView:onBtnTouchEvent(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or ccui.TouchEventType.canceled then
        send:setScale(1.0)
        send:setColor(cc.c3b(255, 255, 255))
    end
end

return BuyMarkerView
