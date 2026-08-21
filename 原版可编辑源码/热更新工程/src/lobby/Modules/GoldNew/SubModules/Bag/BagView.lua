-- 新背包系统界面
local BagView = class("BagView", XH.Bridge.ViewBase)
local ShowPropFunction = XH.Bridge:require("lobby.Modules.BagSysNew.ShowPropFunction")
local BagConfig = XH.Bridge:require("lobby.Modules.BagSysNew.Config")
local Config = import(".Config")
local ShopConfig = import("..Shop.Config")
local RedPointManager = import("...Manager.RedPointManager")
local Utils = import("...Tool.Utils")
local LocalConfig = import("...Configs.LocalConfig")
local RemoteConfig = import("...Configs.RemoteConfig")
local ActionUtils = import("...Tool.ActionUtils")

local KW_DAY_SECOND_TIME = 86400
local KW_MIN_SECOND_TIME = 3600
local KW_SECOND_TIME = 60
local KW_ADD_HOUR_STR = "addhour"

-- 道具标签（道具服配置的）
local KW_PROP_ALL_TAG_ID = "all_prop" -- 所有
local KW_PROP_COUPON_ID = "prop_coupon" -- 优惠卡券
local KW_PROP_HEAD_FRAME_TAG_ID = "head_frame" -- 头像框
local KW_PROP_MAH_BACK_TAG_ID = "mahback" -- 牌背
local KW_PROP_CARD_HOLDER_TAG_ID = "card_holder" -- 压牌器
local KW_PROP_JPQ_TAG_ID = "prop_jpq" -- 记牌器
local KW_PROP_XPQ_TAG_ID = "prop_xpq" -- 洗牌券
local KW_PROP_TABLE_TAG_ID = "table_bg" -- 桌布
local KW_PROP_ENTER_ANI_TAG_ID = "prop_rqdh" -- 入场动画
local KW_PROP_DOUBLE_CARD_ID = "cilent_double_card" -- 加倍卡
local KW_PROP_PEAK_RACE = "cilent_peak_race" -- 巅峰赛门票

-- 头像框动画配置
local HEAD_FRAME_ANI_CONFIG = {
    [150326] = {
        addAni = true,
        path = "animation/Lobby/Base/head-tx-zcjb/head-tx-zcjb.ExportJson",
        amatureName = "head-tx-zcjb",
        animationName = "Animation1"
    }
}

function BagView:getCSBPath()
    return XH.Bridge:getCCSResPath("Bag.csb")
end

function BagView:ctor(param)
    self._module = XH.Bridge:getModule("GoldNew"):getSubModule("Bag")
    BagView.super.ctor(self, param)
    self._openType = "GoldNew"
    if param and param.openType then
        self._openType = param.openType
    end
    self:setCascadeOpacityEnabled(true)
    self:adaptForLiuHai()
    -- 默认显示的行数
    self._curLineCount = 2

    -- 当前选中标签页
    self._displayCateory = '道具'
    self._displayCateoryIdx = 1
    self._subType = "洗牌券"

    -- 分类后的道具 propstag->props
    self._categoryDevideData = {}

    -- 当前时间             
    self:initRequest()
    self:initUI()
    self:flushTopInfo()

    self:addBaseAni()

    self:startHide()
    self:startShow()
end

function BagView:addBaseAni()
    Utils:addSpine(XH.UITool.seekNodeByName(self._panelProductInfo, "_nodeAniLight"), "Shop", "zzb_sc_djgx", "animation")

    local moveUp = cc.MoveBy:create(1, cc.p(0, 10)) -- 向上移动10个单位，持续1秒
    local moveDown = cc.MoveBy:create(1, cc.p(0, -10)) -- 向下移动10个单位，持续1秒
    local sequence = cc.Sequence:create(moveUp, moveDown)
    local repeatForever = cc.RepeatForever:create(sequence)
    self._panelProductInfo:getChildByName("_imgProductIconFrame"):runAction(repeatForever)
end

function BagView:getBindingInfo()
    return {
        ["_panelLT"] = {varName = "_panelLT"},
        ["_panelTop"] = {varName = "_panelTop"},
        ["_panelLeft"] = {varName = "_panelLeft"},
        ["_panelRight"] = {varName = "_panelRight"},
        ["_panelSecondTab"] = {varName = "_panelSecondTab"},
        ["_listProductSmall"] = {varName = "_listProductSmall"},
        ["_itemProductAdt"] = {varName = "_itemProductAdt"},
        ["_itemLeftTab"] = {varName = "_itemLeftTab"},
        ["_itemSecondTab"] = {varName = "_itemSecondTab"},
        ["_txtSecondTabTitle1"] = {varName = "_txtSecondTabTitle1"},
        ["_txtSecondTabTitle2"] = {varName = "_txtSecondTabTitle2"},
        ["_listLeftTab"] = {varName = "_listLeftTab"},
        ["_listSecondMenu"] = {varName = "_listSecondMenu"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},

        ["_txtDiamondNum"] = {varName = "_txtDiamondNum"},
        ["_txtGoldNum"] = {varName = "_txtGoldNum"},
        ["_txtRoomCardNum"] = {varName = "_txtRoomCardNum"},
        ["_btnShop"] = {varName = "_btnShop", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventOpenShopLayer"},
        ["_txtNoneProduct"] = {varName = "_imgNoItem"},
        ["_panelProductInfo"] = {varName = "_panelProductInfo"},
        ["_panelAddRoomCard"] = {varName = "_panelAddRoomCard", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickAddRoomCard"},
        ["_panelAddDiamond"] = {varName = "_panelAddDiamond", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddDiamond"},
        ["_panelAddGold"] = {varName = "_panelAddGold", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickAddGold"}
    }
end

function BagView:getProxyEvents()
    return {
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "flushTopInfo"},
        {module = XH.playerData, eventKeyName = "EVENT_SR_CHANGED", callBack = "flushTopInfo"},
        {module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_SELF_BACK_PACK_DATA", callBack = "onRefresh"}
    }
end

function BagView:initRequest()
    XH.Bridge:getModule("BagSysNew"):reqSelfBagData(true)
end

function BagView:initUI()
    self:flushTopInfo()
    if self._panelProductInfo then
        self._panelProductInfo:setVisible(false)
    end

    -- 如果是外省渠道包，对地区进行隐藏

    if self._listProductSmall then
        self._listProductSmall:setScrollBarEnabled(false)
    end
    if self._listLeftTab then
        self._listLeftTab:setScrollBarEnabled(false)
    end
    if self._listSecondMenu then
        self._listSecondMenu:setScrollBarEnabled(false)
    end
end

function BagView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({self._panelLeft, self._panelLT, self._panelRight})
        end
    end
end
-------------------------- custom event

-- 刷新界面消息
function BagView:onRefresh(event)
    self:flushTopInfo()
    self:showAllBagProp()
end

function BagView:flushTopInfo()
    self._txtRoomCardNum:setText(Utils:formatGoldNum2String(XH.playerData:getRoomCard()))
    self._txtGoldNum:setText(Utils:formatGoldNum2String(XH.playerData:getSR()))
    self._txtDiamondNum:setText(Utils:formatGoldNum2String(XH.playerData:getDiamnd()))
end

function BagView:close(notSend)
    BagView.super.close(self)
    if not notSend then
        XH.Bridge:getModule("GoldNew"):closeFullView("bag", true)
    end
end

-------------------------- touch event

-- 关闭按钮
function BagView:onTouchEventClose(send, event)
    self:close()
end

-- 打开商城按钮
function BagView:onTouchEventOpenShopLayer(send, event)
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = self._openType})
    self:close(true)
end

function BagView:onClickAddRoomCard(send, eventType)
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {productType = ShopConfig.SpecialTag.ROOMCARD, openType = self._openType})
    self:close(true)
end

function BagView:onClickAddDiamond(send, eventType)
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {productType = ShopConfig.SpecialTag.DIAMOND, openType = self._openType})
    self:close(true)
end

function BagView:onClickAddGold(send, eventType)
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {productType = ShopConfig.SpecialTag.GOLD, openType = self._openType})
    self:close(true)
end

function BagView:onBtnTouchEventPropItem(productData, send)
    XH.Bridge:throwData("bb25032002", {
        props_count_arr = {
            {props_id = XH.areaData:getGoldPropId(), props_count = XH.playerData:getSR()},
            {props_id = XH.areaData:getPropDiamndID(), props_count = XH.playerData:getDiamnd()}
        }
    })
    self:showPropItemSelected(send, productData)
    RedPointManager:setState(send.redPointPath, false)
end

function BagView:onSubTabChanged(cfg, send)
    if self._listSecondMenu then
        local tabBtns = self._listSecondMenu:getChildren()
        for _, btn in pairs(tabBtns) do
            local isSelected = btn == send
            btn:setTouchEnabled(not isSelected)
            XH.UITool.setVisible(btn, "panelSelected", isSelected)
            XH.UITool.setVisible(btn, "panelNormal", not isSelected)
        end
    end
    self._subType = send.cfg.name
    self:showPropByCateGory(self._subType)
end

function BagView:onTabChanged(cateGoryName, send)
    self:updateFirstTab(cateGoryName)
    self:showPropByCateGory(self._subType)
end

function BagView:updateSecondTab(firstTagCfg)
    local selectCfg = firstTagCfg
    if self._itemSecondTab and self._listSecondMenu and selectCfg then
        self._listSecondMenu:removeAllChildren()
        self._panelSecondTab:setVisible(true)
        local subType = selectCfg.subType
        if #subType == 1 and subType[1].name == "" then
            self._panelSecondTab:setVisible(false)
        end
        for idx, cfg in ipairs(subType) do
            local seceondMenuModel = self._itemSecondTab:clone()
            local titleImg = ShopConfig.getSecondTitleImg(cfg.name, false)
            local imgNormal = XH.UITool.seekNodeByName(seceondMenuModel, "_imgTitleNormal")
            local imgSelected = XH.UITool.seekNodeByName(seceondMenuModel, "_imgTitleSelected")
            if titleImg then
                imgNormal:setVisible(true)
                imgSelected:setVisible(true)
                imgNormal:ignoreContentAdaptWithSize(true)
                imgSelected:ignoreContentAdaptWithSize(true)
                imgNormal:loadTexture(titleImg, ccui.TextureResType.plistType)
                imgSelected:loadTexture(ShopConfig.getSecondTitleImg(cfg.name, true), ccui.TextureResType.plistType)
            else
                -- cfg.name = "聊天语音"
                local panelNormal = XH.UITool.seekNodeByName(seceondMenuModel, "panelNormal")
                local panelSelected = XH.UITool.seekNodeByName(seceondMenuModel, "panelSelected")
                imgNormal:setVisible(false)
                imgSelected:setVisible(false)
                local midX = seceondMenuModel:getContentSize().width / 2
                local chars = Utils:utf8_chars(cfg.name)
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


            local isSelected = idx == 1
            seceondMenuModel:setTouchEnabled(not isSelected)
            XH.UITool.setVisible(seceondMenuModel, "panelSelected", isSelected)
            XH.UITool.setVisible(seceondMenuModel, "panelNormal", not isSelected)


            self._listSecondMenu:pushBackCustomItem(seceondMenuModel)
            seceondMenuModel.cfg = cfg

            XH.UIButton.create(seceondMenuModel, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:onSubTabChanged(cfg, seceondMenuModel)
            end)

            seceondMenuModel:setTouchEnabled(idx ~= 1)

            self:registerRedPoint(seceondMenuModel, "bag/" .. selectCfg.name .. "/" .. cfg.name)
        end
        self._subType = subType[1] and subType[1].name
    end

    self._displayCateory = selectCfg.name
    -- self:showPropByCateGory(self._subType or selectCfg.name)
end

function BagView:onBtnTouchEventLoadProp(productData)
    local jumpParam = productData.props_jump
    local props_state = productData.props_state
    local bagsysModule = XH.Bridge:getModule("BagSysNew")
    -- if productData.props_tag_id == KW_PROP_JPQ_TAG_ID then
    --     if props_state == Config.PROPS_STATE.PS_IN_BACKPACK then -- 未装备 如果服务没有UseProp，需要先UseProp
    --         if bagsysModule:isTimeProp(productData) and productData.propscnt > 0 then
    --             bagsysModule:reqUseProps(productData.propsid, productData.propscnt)
    --         end
    --     end
    --     return
    -- end

    -- if jumpParam == "chooseroom" then
    --     self:toChooseRoom()
    -- elseif jumpParam == "equip" or jumpParam == "" then
    self._saveSelectInfo = productData
    if props_state == Config.PROPS_STATE.PS_IN_BACKPACK then -- 未装备 如果服务没有UseProp，需要先UseProp
        if bagsysModule:isTimeProp(productData) and productData.propscnt > 0 then
            -- 时效类需要使用的道具（记牌器）
            bagsysModule:reqUseProps(productData.propsid, productData.propscnt)
        else
            if productData.props_tag_id == KW_PROP_JPQ_TAG_ID then
                self:toChooseRoom()
                return
            end
            -- 装扮类道具
            bagsysModule:reqOperateProps(Config.OPERATE_PROPS.OP_EQUIP, productData.propsid)
        end
    else
        if bagsysModule:isTimeProp(productData) and productData.propscnt > 0 then
            bagsysModule:reqUseProps(productData.propsid, productData.propscnt)
        else
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "该道具已装备过!")
        end
    end
    -- end
end

function BagView:onBtnTouchEventUnloadProp(productData)
    local props_state = productData.props_state
    local bagsysModule = XH.Bridge:getModule("BagSysNew")
    if props_state == Config.PROPS_STATE.PS_IN_BACKPACK then -- 未装备
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "道具未装备!")
        return
    end
    self._saveSelectInfo = productData
    bagsysModule:reqOperateProps(Config.OPERATE_PROPS.OP_UNEQUIP, productData.propsid)
end

function BagView:toChooseRoom()
    local lastGameRoomConf = XH.Bridge:getModule("GoldNew"):getLastGameRoomConf()
    if lastGameRoomConf then
        XH.Bridge:getModule("GoldNew"):dispatchShowChooseRoom(lastGameRoomConf)
        self:close()
        return
    end

    local gameLID = RemoteConfig:getCurAreaGameInfoExcludeEntry()
    for _, v in ipairs(gameLID) do
        local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(v)
        local roomFlag = roomConf.roomInfo.roomFlag
        if roomFlag and #roomFlag > 1 then
            XH.Bridge:getModule("GoldNew"):dispatchShowChooseRoom(roomConf)
            self:close()
            return
        end
    end
end

-------------------------- show UI

function BagView:showPropItemSelected(itemNode, productData)
    if not itemNode then
        return
    end
    if not self._listProductSmall then
        return
    end
    if self._lastSelectItem and not tolua.isnull(self._lastSelectItem) then
        XH.UITool.setVisible(self._lastSelectItem, "_imgSelect", false)
    end
    self._lastSelectItem = itemNode
    XH.UITool.setVisible(itemNode, "_imgSelect", true)
    self:showPropItemDetail(productData)
end

-- 优化后的showPropItemDetail函数
function BagView:showPropItemDetail(productData)
    local item = self._panelProductInfo
    if not item then
        return
    end
    item:setVisible(true)
    self._panelProductInfo:getChildByName("_panelTitle"):setVisible(false)
    self._panelProductInfo:getChildByName("_imgProductIconFrame"):setVisible(true)

    self:updateProductName(item, productData)
    self:updateProductDescription(item, productData)
    self:updateProductTime(item, productData)
    self:updateProductButtons(item, productData)
    self:updateProductImage(item, productData)
    self:updateProductAnimation(item, productData)
end

-- 新增函数：更新产品名称
function BagView:updateProductName(item, productData)
    if productData.propsname then
        productData.propsname = string.gsub(productData.propsname, "（永久）", "")
    end
    XH.UITool.setFontSize(item, "_txtName", 50)
    -- if productData.propsname and XH.StringTool.simpleGetStrWidth(productData.propsname) > 16 then
    -- else
    --     XH.UITool.setFontSize(item, "_txtName", 60)
    -- end
    XH.UITool.setText(item, "_txtName", productData.propsname)
end

-- 新增函数：更新产品描述
function BagView:updateProductDescription(item, productData)
    local textStr = productData.props_overview or ""
    textStr = string.gsub(textStr, "\n", "")
    local str = XH.StringTool.getTrimName(textStr, 70)
    XH.UITool.setText(item, "_txtDes", str)
end

-- 新增函数：更新产品时间
function BagView:updateProductTime(item, productData)
    local bagModule = XH.Bridge:getModule("BagSysNew")
    if productData.is_time_prop then
        local nowTimestamp = XH.Bridge:getModule("GoldNew"):getServerTime()
        local endTimestamp = productData.endtime or 0
        local leftTime = endTimestamp - nowTimestamp
        if leftTime < 0 then
            leftTime = 0
        end
        local dayTime = math.floor(leftTime / KW_DAY_SECOND_TIME) or 0
        local hourTime = math.floor((leftTime - dayTime * KW_DAY_SECOND_TIME) / KW_MIN_SECOND_TIME) or 0
        local minuteTime = math.floor((leftTime - dayTime * KW_DAY_SECOND_TIME - hourTime * KW_MIN_SECOND_TIME) / KW_SECOND_TIME) or 0
        if hourTime < 0 then
            hourTime = 0
        end
        if minuteTime < 0 then
            minuteTime = 0
        end
        local showStr
        if dayTime == 0 then
            showStr = "剩余:" .. hourTime .. "小时" .. minuteTime .. "分钟"
        else
            showStr = "剩余:" .. dayTime .. "天" .. hourTime .. "小时" .. minuteTime .. "分钟"
        end
        if productData.propsid == BagConfig.PROP_ID_DOUBLE_CARD then
            showStr = showStr .. "\n剩余:" .. productData.propscnt
        end
        XH.UITool.setText(item, "_txtLeftDes", showStr)
    else
        XH.UITool.setText(item, "_txtLeftDes", "剩余:" .. tostring(productData.propscnt))
        if bagModule:isTimeProp(productData) then
            local script = productData.script or ""
            local addHourCount = bagModule:getBagData():getLuaStrValue(script, KW_ADD_HOUR_STR)
            local propscnt = productData.propscnt or 0
            addHourCount = tonumber(addHourCount)
            if addHourCount then
                local day = math.floor(addHourCount * propscnt / 24)
                local hour = math.floor(addHourCount * propscnt - day * 24)
                local showStr = "剩余:" .. tostring(day) .. "天" .. tostring(hour) .. "小时"
                XH.UITool.setText(item, "_txtLeftDes", showStr)
            end
        end
    end
    local isForever = bagModule:judgeForeverProp(productData.propsid)
    XH.UITool.setVisible(item, "_imgLeftBg", not isForever)
    XH.UITool.setVisible(item, "_imgForever", isForever)
end

-- 新增函数：更新产品按钮
function BagView:updateProductButtons(item, productData)
    local props_state = productData.props_state
    local isPropInBackpack = props_state == Config.PROPS_STATE.PS_IN_BACKPACK
    local btnUnload = XH.UITool.seekNodeByName(item, "_btnUnLoad")
    local btnLoad = XH.UITool.seekNodeByName(item, "_btnLoad")
    local bagModule = XH.Bridge:getModule("BagSysNew")

    local function setButtonVisibility(unloadVisible, loadVisible)
        btnUnload:setVisible(unloadVisible)
        btnLoad:setVisible(loadVisible)
        XH.UITool.setVisible(item, "_imgUsing", not unloadVisible and not loadVisible and not isPropInBackpack)
    end

    if bagModule:isTimeProp(productData) then
        if productData.props_tag_id == KW_PROP_JPQ_TAG_ID then
            setButtonVisibility(false, productData.propscnt > 0)
        elseif productData.propscnt > 0 then
            setButtonVisibility(false, true)
        else
            setButtonVisibility(not isPropInBackpack, isPropInBackpack)
        end
    elseif bagModule:judgeForeverProp(productData.propsid) then
        setButtonVisibility(not isPropInBackpack, isPropInBackpack)
    else
        -- local jumpParam = productData.props_jump
        -- setButtonVisibility(false, jumpParam ~= "")
        setButtonVisibility(false, false)
    end

    XH.UIButton.create(btnUnload, XH.UIButton.CLICK_STYLE.NOSCALE, function()
        Utils:delayTouchEnable(btnUnload)
        self:onBtnTouchEventUnloadProp(productData)
    end)
    XH.UIButton.create(btnLoad, XH.UIButton.CLICK_STYLE.NOSCALE, function()
        Utils:delayTouchEnable(btnLoad)
        self:onBtnTouchEventLoadProp(productData)
    end)
end

-- 新增函数：更新产品图片
function BagView:updateProductImage(item, productData)
    local imageUrl = Utils:getBasePropInfo(productData.propsid).imageUrl
    local propAniBG = XH.UITool.seekNodeByName(item, "_nodeAni")
    
    if self._module:isPropTitle(productData.propsid) then
        local titleNode = XH.Bridge:getModule(LocalConfig.MP.ActBJRank):createTitleNode({isInBag=true})
        item:getChildByName("_panelTitle"):removeAllChildren()
        item:getChildByName("_panelTitle"):addChild(titleNode)
        XH.Bridge:getModule(LocalConfig.MP.ActBJRank):addUpdateSelfRankInfo(titleNode, productData.propsid)
        item:getChildByName("_panelTitle"):setVisible(true)
        item:getChildByName("_imgProductIconFrame"):setVisible(false)
        XH.UITool.setVisible(item, "_imgIconRemote", false)
        XH.UITool.setVisible(item, "_nodeAni", false)
    elseif not ShowPropFunction.createHeadFrameAni(propAniBG, productData.propsid, 0.8) then
        Utils:setImgUrl(XH.UITool.seekNodeByName(item, "_imgIconRemote"), imageUrl, true)
        XH.UITool.setVisible(item, "_imgIconRemote", true)
        XH.UITool.setVisible(item, "_nodeAni", false)
    else
        XH.UITool.setVisible(item, "_nodeAni", true)
        XH.UITool.setVisible(item, "_imgIconRemote", false)
    end
end

-- 新增函数：更新产品动画
function BagView:updateProductAnimation(item, productData)
    local aniNode = XH.UITool.seekNodeByName(item, "_nodeAniBg")
    self:clearAni(aniNode)
    if productData.props_tag_id == KW_PROP_CARD_HOLDER_TAG_ID then
        self:showCardHolderAni(aniNode, 1.5)
    elseif productData.props_tag_id == KW_PROP_TABLE_TAG_ID then
        self:showTableBgAni(aniNode, 1.5)
    elseif productData.props_tag_id == KW_PROP_HEAD_FRAME_TAG_ID then
        self:showHeadFrameAni(aniNode, 1, productData.propsid)
    end
end

function BagView:clearAni(aniNode)
    if not tolua.isnull(aniNode) then
        aniNode:removeAllChildren()
    end
end

function BagView:showAllBagProp()
    -- 背包数据
    -- self._categoryDevideData = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfDevideCategoryDataTest()
    self._categoryDevideData = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfDevideCategoryData()

    if not self._isInit then
        -- 显示左边所有页签
        self:showLeftBtnType()
        -- 默认选中一个页签
        self:updateFirstTab(self._displayCateory)
        self._isInit = true
    end

    -- 选中页签展示的背包物品
    self:showPropByCateGory(self._subType, true)
end

-- 显示左边页签，按照客户端的 KW_CATEGORY_NAME_SORT table内容排序
function BagView:showLeftBtnType()
    -- 用来克隆页签按钮
    if self._itemLeftTab and self._listLeftTab then
        self._listLeftTab:removeAllChildren()
        local tabs = Config.Tab
        for idx, cfg in ipairs(tabs) do
            local btnTab = self._itemLeftTab:clone()
            local nodeAni = XH.UITool.seekNodeByName(btnTab, "_nodeAni")
            XH.UITool.setText(btnTab, "_txtTitle", cfg.name)
            XH.UITool.setVisible(btnTab, "_txtTitle", true)
            local notchWidth = XH.UITool.getLiuHaiWidth()
            if notchWidth > 0 then
                local imgSelected = XH.UITool.seekNodeByName(btnTab, "_imgSelected")
                local itemSize = imgSelected:getContentSize()
                local bigScale = notchWidth / itemSize.width + 1
                imgSelected:setContentSize(notchWidth + itemSize.width, itemSize.height)
                nodeAni:setScaleX(bigScale)
                nodeAni:setPositionX(nodeAni:getPositionX() - notchWidth / 2)
            end
            self._listLeftTab:pushBackCustomItem(btnTab)
            btnTab.cfg = cfg
            btnTab:setName(cfg.name)
            Utils:addSpine(nodeAni, "Shop", "zzb_ty_xzl", "animation")
            XH.UIButton.create(btnTab, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:onTabChanged(cfg.name, btnTab)
            end)
            self:registerRedPoint(btnTab, "bag/" .. cfg.name)
        end
    end
end

local DEFAULT_TAB_TEXT_COLOR = cc.c3b(255, 255, 255)
local SELECTED_TAB_TEXT_COLOR = cc.c3b(0x9d, 0x46, 0)
-- 选中某个页签
function BagView:updateFirstTab(cateGoryName)
    self._displayCateory = cateGoryName
    local selectCfg = nil
    if self._listLeftTab then
        local leftTabBtns = self._listLeftTab:getChildren()
        for _, btn in ipairs(leftTabBtns) do
            local isSelected = btn:getName() == cateGoryName
            if isSelected then
                selectCfg = btn.cfg
            end
            btn:setTouchEnabled(not isSelected)
            local textColor = isSelected and SELECTED_TAB_TEXT_COLOR or DEFAULT_TAB_TEXT_COLOR
            XH.UITool.setVisible(btn, "_imgSelected", isSelected)
            XH.UITool.setTextColor(btn, "_txtTitle", textColor)
            XH.UITool.setVisible(btn, "_nodeAni", isSelected)
        end
    end
    self:updateSecondTab(selectCfg)
end

-- 标签页内容显示
function BagView:showPropByCateGory(cateGoryName, withAni)
    local productList = self:getBagDataByType(cateGoryName)
    local totalCount = #productList
    -- 动态初始化滑动区域大小
    if self._imgNoItem then
        self._imgNoItem:setVisible(totalCount == 0)
    end
    local listProduct = self._listProductSmall
    listProduct:setPositionX(50)
    listProduct:removeAllChildren()

    local itemMod = self._itemProductAdt
    local itemGap = 0
    local lineCnt = 3
    local itemSize = itemMod:getContentSize()
    local selectPropIndex = 1
    local selectItem = nil
    for i = 1, totalCount, lineCnt do
        local layout = ccui.Layout:create()
        layout:setContentSize(cc.size(listProduct:getContentSize().width, itemSize.height))
        layout:setCascadeOpacityEnabled(true)
        listProduct:pushBackCustomItem(layout)

        for j = 0, lineCnt - 1 do
            local product = productList[i + j]
            if product then
                local item = itemMod:clone()
                item:setPosition((itemSize.width + itemGap) * j + 20, 0)
                layout:addChild(item)
                self:updateItemUI(item, product, i + j, true)
                XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                    self:onBtnTouchEventPropItem(product, item)
                end)
                if not selectItem then
                    selectItem = item
                end
                if self._saveSelectInfo then
                    if product.propsid == self._saveSelectInfo.propsid then
                        selectPropIndex = i + j
                        selectItem = item
                        self._saveSelectInfo = nil
                    end
                end

                local redPointPath = "bag/" .. self._displayCateory .. "/" .. product.propsid
                if self._subType then
                    redPointPath = "bag/" .. self._displayCateory .. "/" .. self._subType .. "/" .. product.propsid
                end
                item.redPointPath = redPointPath
                self:registerRedPoint(item, redPointPath)

                item:setCascadeOpacityEnabled(true)
                if withAni then
                    item:setOpacity(0)
                    ActionUtils:runEntryMoveOut(item, j + 1, true, nil, nil, true)
                end
            end
        end
    end
    -- 默认隐藏详情
    if self._panelProductInfo then
        if withAni then
            self._panelProductInfo:setOpacity(0)
            ActionUtils:runEntryMoveOut(self._panelProductInfo, 6, true, nil, nil, true)
        end
        self._panelProductInfo:setVisible(false)
    end

    -- 默认选中一个item
    if selectItem then
        self:showPropItemSelected(selectItem, productList[selectPropIndex])
    end

    -- 跳转到顶层
    if self._listProductSmall and self._listProductSmall.jumpToTop then
        self._listProductSmall:jumpToTop()
    end
    XH.Bridge:throwData("bb25032001", {block_item_id = self._subType})
end

function BagView:updateItemUI(item, productData, index)
    if tolua.isnull(item) then
        return
    end
    item:setName(tostring(index))
    item:setTag(productData.propsid or 0)
    item:setVisible(true)

    self:updateProductName(item, productData)
    if productData.propsname and XH.StringTool.simpleGetStrWidth(productData.propsname) > 12 then
        XH.UITool.setFontSize(item, "_txtName", 36)
    end
    if productData.propsname and XH.StringTool.simpleGetStrWidth(productData.propsname) > 16 then
        XH.UITool.setFontSize(item, "_txtName", 30)
    end
    -- local bagModule = XH.Bridge:getModule("BagSysNew")
    local propscnt = productData.propscnt or 0
    XH.UITool.setText(item, "_txtLeftDes", (propscnt > 999 and "999+" or 'x' .. propscnt))
    XH.UITool.setVisible(item, "_txtLeftDes", propscnt > 0)

    -- local isTimeProp = productData.is_time_prop
    -- local isForever = bagModule:judgeForeverProp(productData.propsid)
    local isEquip = productData.props_state == Config.PROPS_STATE.PS_IN_BODY
    XH.UITool.setVisible(item, "_imgUsing", isEquip)

    -- self:updateProductTime(item, productData)
    self:updateProductImage(item, productData)
end

-- 压牌器动画
function BagView:showCardHolderAni(parentNode, scale)
    scale = scale or 1
    if not parentNode then
        return
    end
    XH.UITool.setVisible(parentNode:getParent(), "_KW_LAYOUT_ANI_BG", true)
    local params1 = {
        path = "animation/Lobby/Base/zjb_ypq_sczs_ani/",
        ske = "zjb_ypq_sczs_ani_ske.json",
        tex = "zjb_ypq_sczs_ani_tex.json",
        armatureName = "Armature",
        dragonBonesName = "zjb_ypq_sczs_ani",
        animationName = "zjb_ypq_sc"
    }
    local propAni = display.playDargonBonesAnimByTimes(params1, 0)
    if propAni then
        parentNode:addChild(propAni)
        propAni:setScale(scale)
    end
end

-- 桌布动画
function BagView:showTableBgAni(parentNode, scale)
    scale = scale or 1
    if not parentNode then
        return
    end

    local aniConfig = {path = "animation/Lobby/Base/sy_light/sy_light.ExportJson", amatureName = "sy_light", animationName = "Animation1"}

    pcall(function()
        local OFFSET_Y = 36
        if not cc.FileUtils:getInstance():isFileExist(aniConfig.path) then
            return
        end
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniConfig.path)
        local showArmature = ccs.Armature:create(aniConfig.amatureName)
        if showArmature then
            parentNode:addChild(showArmature)
            showArmature:setAnchorPoint(cc.p(0.5, 0.5))
            showArmature:getAnimation():play(aniConfig.animationName, -1, 1)
            showArmature:setScale(scale)
            showArmature:setPositionY(showArmature:getPositionY() + OFFSET_Y)
        end
    end)
end

-- 头像框动画
function BagView:showHeadFrameAni(parentNode, scale, propsid)
    scale = scale or 1
    local aniConfig = HEAD_FRAME_ANI_CONFIG[tonumber(propsid)]
    if not aniConfig then
        return
    end
    local OFFSET_X = 0
    local OFFSET_Y = 35
    pcall(function()
        if not cc.FileUtils:getInstance():isFileExist(aniConfig.path) then
            return
        end
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniConfig.path)
        local showArmature = ccs.Armature:create(aniConfig.amatureName)
        if showArmature then
            parentNode:addChild(showArmature)
            showArmature:setAnchorPoint(cc.p(0.5, 0.5))
            showArmature:getAnimation():play(aniConfig.animationName, -1, 1)
            showArmature:setScale(scale)
            showArmature:setPosition(cc.p(showArmature:getPositionX() + OFFSET_X, showArmature:getPositionY() + OFFSET_Y))
        end
    end)
end

function BagView:registerRedPoint(node, path)
    RedPointManager:registerNode(path)
    RedPointManager:addListener(path, function(state)
        if tolua.isnull(node) then
            return
        end
        XH.UITool.setVisible(node, "_imgRedPoint", state)
    end)
end

function BagView:onCleanup()
    BagView.super.onCleanup(self)
    RedPointManager:removeCallbacksForPathAndChildren("bag")
end

function BagView:getBagDataByType(cateGoryName)
    local cateGoryCfg = Config:getTagCfgByName(cateGoryName)
    if not cateGoryCfg then
        return {}
    end
    local data = {}
    if cateGoryName == "全部" then
        for tag, temp in pairs(self._categoryDevideData) do
            for j = 1, #temp do
                if Config:isShow(temp[j].propsid) then
                    local find = false
                    for i = 1, #data do
                        if data[i].propsid == temp[j].propsid then
                            find = true
                            break
                        end
                    end
                    if not find then
                        table.insert(data, temp[j])
                    end
                end
            end
        end
    end
    for i = 1, #cateGoryCfg.tags do
        local tag = cateGoryCfg.tags[i]
        local temp = self._categoryDevideData[tag] or {}
        for j = 1, #temp do
            if Config:isShow(temp[j].propsid) then
                table.insert(data, temp[j])
            end
        end
    end
    return data
end

-----------转场动效-----------
function BagView:startShow()
    ActionUtils:runTopFadeIn(self._panelTop, true, 15 / 30)
    ActionUtils:runTopFadeIn(self, true, 0, 15 / 30)
    ActionUtils:runLeftMoveOut(self._panelLeft, false, true, 0, 0.2)
    ActionUtils:runLeftMoveOut(self._panelLeft, true)
    ActionUtils:runLeftMoveOut(self._panelLT, false, true, 0, 0.4)
    ActionUtils:runLeftMoveOut(self._panelLT, true)
end

function BagView:startHide()
    ActionUtils:runLeftMoveOut(self._panelLeft, false, true, 0)
    ActionUtils:runLeftMoveOut(self._panelLT, false, true, 0)
end
return BagView
