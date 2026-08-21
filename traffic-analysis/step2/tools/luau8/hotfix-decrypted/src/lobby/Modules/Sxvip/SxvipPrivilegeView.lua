--会员特权V2
local SxvipPrivilegeView = class("SxvipPrivilegeView", XH.ViewBase)

local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function SxvipPrivilegeView:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipPrivilegeLayer.csb"
end

function SxvipPrivilegeView:getBindingInfo()
    return {
        ["_KW_TOUCH_LAYER"] = {varName = "_KW_TOUCH_LAYER" , onTouchEnded = "onTouchLayer"},
        ["_KW_PANEL_ANI_IN"] = {varName = "_KW_PANEL_ANI_IN"},
        ["_KW_ANI_ROOT"] = {varName = "_KW_ANI_ROOT"},
        ["_KW_LIST"] = {varName = "_sv", type = XH.UI_TYPE.LISTVIEW},
        ["_KW_ITEM_TITLE"] = {varName = "_itemTitle"},
        ["_KW_ITEM_TQ"] = {varName = "_itemTeQuan"}, --一行
        ["_KW_ITEM_TQ_ONE"] = {varName = "_itemTeQuanOne"},
        --一个
        ["_KW_TXT_TQ_NUM"] = {varName = "_txtTQNum", type = XH.UI_TYPE.TEXT},
        ["_KW_FNT_RIGHT_NUM_1"] = {varName = "_txtRight1", type = XH.UI_TYPE.TEXT},
        ["_KW_FNT_RIGHT_NUM_2"] = {varName = "_txtRight2", type = XH.UI_TYPE.TEXT},
        ["_KW_FNT_RIGHT_NUM_3"] = {varName = "_txtRight3", type = XH.UI_TYPE.TEXT},
        ["_KW_FNT_RIGHT_NUM_4"] = {varName = "_txtRight4", type = XH.UI_TYPE.TEXT},
        ["_KW_FNT_RIGHT_NUM_5"] = {varName = "_txtRight5", type = XH.UI_TYPE.TEXT},
        ["_KW_BTN_CLOSE"] = {varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_BUY"] = {varName = "_KW_BTN_BUY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnBuy"},
        ["_KW_BTN_GIVE"] = {varName = "_KW_BTN_GIVE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnGive"},
        ["_KW_BTN_FEEDBACK"] = {varName = "_KW_BTN_FEEDBACK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnFeedback"},
        ["_KW_SXVIP_XSYH"] = {varName = "_KW_SXVIP_XSYH"},
        ["_KW_SXVIP_XSYH_TEXT"] = {varName = "_KW_SXVIP_XSYH_TEXT"},
        ["_KW_SXVIP_XSYH_BG"] = {varName = "_KW_SXVIP_XSYH_BG"},
    }
end

function SxvipPrivilegeView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_STATIC_CONFIG_SUCC", callBack = "onStaticConfigSucc"},
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REWARD_STATUS", callBack = "onRewardStatus"},
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_CONFIG_SUCC", callBack = "onServerConfigSucc"},
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REMAINDER", callBack = "onRemainder"},
         {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_UPDATE_AD_FREE", callBack = "onUpdateAdFree"},
        {module = XH.lobby:getModule("BagSysNew"), eventKeyName = "EVENT_PLAYER_BAG_DATA", callBack = "onPlayerBagData"},
        { module = XH.lobby:getModule("SxvipAct"), eventKeyName = "SXVIP_ACT_FINISH", callBack = "onFlushSxVipAct" },
        { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_VIP_HIDE_TAG", callBack = "onFlushVipTagState" },
    }
end

function SxvipPrivilegeView:ctor(source)
    SxvipPrivilegeView.super.ctor(self)

    local productData = XH.lobby:getModule("Sxvip"):getVipShopList()
    if productData and productData.goods_list and #productData.goods_list > 0 then
        --
    else
        local prop_type = SxvipConfig:getSxvipShopId()
        XH.lobby:getModule("Sxvip"):reqExchangeProductsInfo(prop_type, true)
    end

    self:playAni()
    self._awardItems = {}
    self:initView()

    XH.lobby:getModule("Sxvip"):reqSxvipGetEquipState(XH.playerData:getNumberID())
    XH.lobby:getModule("Sxvip"):addSgAni(self._KW_SXVIP_XSYH_BG, 3)
    XH.lobby:getModule("Sxvip"):reqConfig()
    XH.lobby:getModule("Sxvip"):reqRemainder()
    XH.lobby:getModule("Sxvip"):reqPrivilege()
    XH.lobby:getModule("Sxvip"):reqDailyRewardStatus()
    if source then
        XH.lobby:getModule("Sxvip.ThrowData"):setThrowDataSource(source)
    end
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.zyt2024032803)
    self._KW_BTN_GIVE:setVisible(not XH.lobby:getModule("Sxvip"):isHideSendMenu())
    self:reqPlayerBagData()
    self:onFlushSxVipAct()
    self:showPopSubscription()

    self._listenerForeground = cc.EventListenerCustom:create("APP_ENTER_FOREGROUND_EVENT", handler(self, self.onEnterForeground))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithSceneGraphPriority(self._listenerForeground, self)
end

function SxvipPrivilegeView:onExit()
    SxvipPrivilegeView.super.onExit(self)

    if self._listenerForeground then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerForeground)
    end
end

function SxvipPrivilegeView:onEnterForeground()
    if device.platform == "android" then
        local m = XH.lobby:getModule("Sxvip")
        if m:getSubscribeBuy() then
            m:reqConfig()
            m:reqRemainder(true)
        end
    end
end

function SxvipPrivilegeView:showPopSubscription()
    local dateStr = os.date("%Y-%m-%d", os.time())
    local key = string.format("pop_subscription_%d", XH.playerData:getNumberID())
    local value = cc.UserDefault:getInstance():getStringForKey(key, "")
    if XH.lobby:getModule("Sxvip"):getPopSubscription() == false or value == dateStr then
        return
    end

    local formatStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='%s'>%s</font>"
    local Text = string.format(formatStr..formatStr..formatStr, "#CD8551", "尊敬的会员用户：\n\n    当前您未激活【", "#17A199", "免广告", "#CD8551", "】专属特权\n恢复订阅身份可立即激活")
    local msgBoxView = XH.TipTool.showTip({
        type = XH.TIP_LAYER_TYPE.OK,
        funcOK = function()
            XH.lobby:getModule("Sxvip"):subscribe("订阅提醒")
            XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hyys25070102)
        end,
        richText = true,
    }, Text)
    msgBoxView:updateButtonOK1Image("hall/Image/Sxvip/privilege/sxvip_privilege_Img_btnsub.png")
    msgBoxView:setEnableBGTouch(false)
    msgBoxView:getCloseBtn():setVisible(false)
    msgBoxView:runAction(cc.Sequence:create(cc.DelayTime:create(3),cc.CallFunc:create(function()
        msgBoxView:getCloseBtn():setVisible(true)
    end)))
    cc.UserDefault:getInstance():setStringForKey(key, dateStr)
    XH.lobby:getModule("Sxvip.ThrowData"):setThrowDataSource(SxvipConfig.ThrowData.source.subTip)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hyys25070101)
end

function SxvipPrivilegeView:reqPlayerBagData()
    local pcnt = 1
    local areaids = { XH.areaData:getAreaID() }
    local numids = { XH.playerData:getNumberID() }
    local propsids = { SxvipConfig.PROP_ID }
    XH.lobby:getModule("BagSysNew"):reqBagPackData(pcnt, areaids, numids, propsids)
end

function SxvipPrivilegeView:onPlayerBagData()
    local bagSysDataObj = XH.lobby:getModule("BagSysNew"):getBagData()
    if not bagSysDataObj then
        return
    end
    local playerBagData = bagSysDataObj:getPlayerBagData(XH.playerData:getNumberID()) or {}
    local timePropInfo = playerBagData.time_prop_info or {}
    for _, timeProp in pairs(timePropInfo) do
        if timeProp.propsid and timeProp.propsid == SxvipConfig.PROP_ID then
            self._isEquipVip = timeProp.props_state == 0
            if self._vipTagTextNode then
                self._vipTagTextNode:setString(self._isEquipVip and "已显示" or "已隐藏")
            end
            break
        end
    end
end

function SxvipPrivilegeView:onFlushVipTagState()
    self._isEquipVip = not XH.lobby:getModule("Sxvip"):getHideVipTag()
    if self._vipTagTextNode then
        self._vipTagTextNode:setString(self._isEquipVip and "已显示" or "已隐藏")
    end
end

-- 初始化动画
function SxvipPrivilegeView:playAni()
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hy_czhy/zzb_hy_czhy.atlas",
        tex = "animation/Lobby/Base/zzb_hy_czhy/zzb_hy_czhy.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    local size = self._KW_ANI_ROOT:getContentSize()
    dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
    self._KW_ANI_ROOT:addChild(dargonBones)

    -- 右侧透明度变化
    self._KW_PANEL_ANI_IN:setOpacity(0)
    local delayTime = cc.DelayTime:create(1/3)
    local showCard = cc.FadeIn:create(1/3)
    local allAction = cc.Sequence:create(delayTime, showCard)
    self._KW_PANEL_ANI_IN:runAction(allAction)

    -- 左侧列表位移+透明度变化
    local curPosX = self._sv:getPositionX()
    self._sv:setOpacity(0)
    local delayTime2 = cc.DelayTime:create(3/30)
    local showAni = cc.FadeIn:create(8/30)
    local allAction = cc.Sequence:create(delayTime2, showAni)
    self._sv:runAction(allAction)
    self._sv:setPositionX(curPosX + 338)
    local moveAni = cc.MoveTo:create(8/30, cc.p(curPosX - 13, self._sv:getPositionY()))
    local moveAni2 = cc.MoveTo:create(4/30, cc.p(curPosX, self._sv:getPositionY()))
    local allAction2 = cc.Sequence:create(delayTime2, moveAni, moveAni2)
    self._sv:runAction(allAction2)

    -- 头顶tip动画
    self._KW_BTN_FEEDBACK:setScale(0)
    local delayTime3 = cc.DelayTime:create(42/30)
    local scaleAni = cc.ScaleTo:create(7/30, 1.07)
    local scaleAni2 = cc.ScaleTo:create(5/30, 0.95)
    local scaleAni3 = cc.ScaleTo:create(5/30, 1)
    local allAction3 = cc.Sequence:create(delayTime3, scaleAni, scaleAni2)
    self._KW_BTN_FEEDBACK:runAction(allAction3)
end

function SxvipPrivilegeView:initView()
    self._sv:setScrollBarEnabled(false)
end

function SxvipPrivilegeView:refreshView()
    self._sv:removeAllChildren()
    self._awardItems = {}
    local isExpire = XH.lobby:getModule("Sxvip"):isExpire()
    local mrValue = XH.lobby:getModule("Sxvip"):getEveryDayAwardValue()
    local giftValue = XH.lobby:getModule("Sxvip"):getGiftValue()
    local staticConfig = XH.lobby:getModule("Sxvip"):getStaticConfig()
    local teQuanNum = XH.lobby:getModule("Sxvip"):getPrivilegeNum()
    self._txtTQNum:setString(teQuanNum)
    self._txtRight1:setString(teQuanNum .. "项游戏特权")
    self._txtRight2:setString("每日领取价值" .. mrValue .. "元礼品")
    self._txtRight3:setString(giftValue .. "元礼包")
    self._txtRight5:setString(isExpire and "立即开通" or "立即续费")
    local expireTime = XH.playerData:getSxvipRemainder()
    if isExpire then
        self._txtRight4:setString("")
    else
        local formattedDate = os.date("会员有效期至 %Y.%m.%d %H:%M", expireTime)
        self._txtRight4:setString(formattedDate)
    end
    if teQuanNum > 0 then
        local iopCfg = XH.lobby:getModule("Sxvip"):getStaticConfig()
        local privilegeList = XH.lobby:getModule("Sxvip"):getPrivilegeList()
        local duiJuList = {}
        local goldList = {}
        for i = 1, #iopCfg do
            for j = 1, #privilegeList do
                local info = iopCfg[i]
                if info.id == privilegeList[j] then
                    if info.benefit_type == nil or info.benefit_type == 1 then
                        table.insert(duiJuList, info)
                    else
                        table.insert(goldList, info)
                    end
                end
            end
        end

        local addItems = function(name, listInfo)
            -- 计算需要多少个item
            local itemNums = math.ceil(#listInfo / 4)
            local itemIndex = 1
            local item = self._itemTitle:clone()
            item:getChildByName("KW_TXT"):setString(name)
            -- item:setPosition(0, itemNums * 320 + 60)
            self._sv:pushBackCustomItem(item)
            -- self._sv:addChild(item)
            for i = 1, itemNums do
                local item = self._itemTeQuan:clone()
                -- item:setPosition(0, (i-1) * 320 + 60)
                self._sv:pushBackCustomItem(item)
                -- self._sv:addChild(item)
                local listView = item:getChildByName("_KW_LIST_TQ")
                -- local tqItems = listView:getChildren()
                for j = 1, 4 do
                    local subItem = self._itemTeQuanOne:clone()
                    listView:pushBackCustomItem(subItem)
                    if listInfo[itemIndex] then
                        subItem:setVisible(true)
                        self:updateSubItem(subItem, listInfo[itemIndex])
                    else
                        subItem:setVisible(false)
                    end
                    itemIndex = itemIndex + 1
                end
            end
        end
        if #duiJuList > 0 then
            addItems("对局特权", duiJuList)
        end
        if #goldList > 0 then
            addItems("金币特权", goldList)
        end
    end
end

-- 更新子类列表
function SxvipPrivilegeView:updateSubItem(subItem, privilege)
    if not privilege then
        return
    end
    if privilege.show_name then
        subItem:getChildByName("_KW_NAME"):setString(privilege.show_name or "")
    else
        subItem:getChildByName("_KW_NAME"):setString(privilege.name or "")
    end
    privilege.desc = string.gsub(privilege.desc, "\\n", "\n")
    subItem:getChildByName("_KW_DESC"):setString(privilege.desc or "")

    local item = subItem:getChildByName("_KW_ICON")
    item:removeAllChildren()
    local size = item:getContentSize()
    local itemIcon = XH.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(item)
    itemIcon:setUrl(privilege.pic)
    local btnGo = subItem:getChildByName("_KW_LOOK")
    local imgDI = btnGo:getChildByName("KW_DI")
    local txtLogic = subItem:getChildByName("_KW_LOGIC")
    btnGo:addTouchEventListener(handler(self, self.subItemClick))
    btnGo.customData = privilege
    -- 奖励已领取 XH.lobby:getModule("Sxvip"):isExpire() and "开通" or
    local jumpTxt = (privilege.jump_desc or "")
    txtLogic:setString(jumpTxt)
    if jumpTxt == "" then
        imgDI:setVisible(false)
        btnGo:setVisible(false)
    end

    if privilege.id == SxvipConfig.SXVIP_POWER.GET_PROPS or privilege.id == SxvipConfig.SXVIP_POWER.GOLDROOM_GET_PROPS then
        if XH.lobby:getModule("Sxvip"):getHadAwardStatus() == false then
            txtLogic:setString("已领")
            -- txtLogic:enableOutline(cc.c4b(127, 127, 127, 255), 2)
            -- btnGo:setTouchEnabled(false)
            -- imgDI:setBright(false)
            XH.UITool.gray(imgDI)
        end
        local isFind = false
        for i = 1, #self._awardItems do
            if self._awardItems[i].subItem == subItem then
                isFind = true
            end
        end
        if not isFind then
            table.insert(self._awardItems, {subItem = subItem, privilege = privilege})
        end
    elseif privilege.id == SxvipConfig.SXVIP_POWER.HIDE_VIP_TAG then
        txtLogic:setString(self._isEquipVip == false and "已隐藏" or "已显示")
        self._vipTagTextNode = txtLogic
    elseif privilege.id == SxvipConfig.SXVIP_POWER.SUBSCRIPTION_AD_FREE then
        self._vipAdFreeTextNode = txtLogic
        self:onUpdateAdFree()
    end
    imgDI:setContentSize(txtLogic:getContentSize().width + 42, 45)

    -- 详细描述
    local showDetail = privilege.detail_desc  and privilege.detail_desc ~= ""
    local detailText = privilege.detail_desc or ""
    local questionBtn = subItem:getChildByName("_KW_QUESTION")
    local detailTxtNode = subItem:getChildByName("_KW_SHOW_DETAIL")
    if detailTxtNode and questionBtn then
        questionBtn:setVisible(showDetail)
        local detailTxt = detailTxtNode:getChildByName("_KW_QUESTION_TXT")
        local detailImg = detailTxtNode:getChildByName("_KW_QUESTION_BG")
        detailTxt:setTextAreaSize(cc.size(320, 0))
        detailTxt:setString(detailText)
        detailImg:setContentSize(350 , detailTxt:getContentSize().height + 20)
        questionBtn:addTouchEventListener(function(sender, eventType)
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            self:showDetailScene(subItem)
        end)
    end 
end

function SxvipPrivilegeView:isShowShopType(type)
    return type == SxvipConfig.SXVIP_POWER.WATCH or type == SxvipConfig.SXVIP_POWER.NETWORK_FIRST or type == SxvipConfig.SXVIP_POWER.FREE_PROPS
end

function SxvipPrivilegeView:subItemClick(sender, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if sender.customData then
        local enabled = XH.lobby:getModule("Sxvip"):isAdFreeEnabled()
        XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090601, {page_item_id=sender.customData.name, block_item_id = enabled and "已激活" or "未激活"})
        if XH.lobby:getModule("Sxvip"):isExpire() and self:isShowShopType(sender.customData.id) then
            XH.viewManager:openView("SxvipShopView")
            return
        end
        -- 观战
        if sender.customData.id == SxvipConfig.SXVIP_POWER.WATCH then
            XH.lobby:getModule("Lobby"):openImView()
            self:close()
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.STATISTICS then
            -- 牌局统计
            XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxvipConfig.MENU_DEFINE.STAITISTICS})
            -- self:close()
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.FRIEND_INFO then
            -- 牌友信息
            XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxvipConfig.MENU_DEFINE.FRIEND_INFO})
            -- self:close()
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.NETWORK_FIRST or sender.customData.id == SxvipConfig.SXVIP_POWER.FREE_PROPS then
            -- 网络专线
            local position = XH.playerData:getPlayerPosition()
            if position.gameID ~= 0 then
                XH.TipTool.showLoading()
                local func = function()
                    if tonumber(position.teaID) ~= 0 and not XH.lobby:getModule("Im"):checkIsGroup(position.teaID) then
                        --事件分发,请求进入比赛场
                        XH.teaHouseManager:joinTeaHouse(position.teaID, position.roomID)
                    else
                        if position.teaNumber then
                            XH.lobby:getModule("Im"):getIMData():setEnterTeaHouseID(position.teaNumber)
                        end
                        local func = function()
                            local param = {}
                            param.appID = position.gameAppID
                            param.gameID = position.gameID
                            param.roomMode = XH.ROOM_MODE.BOXROOM
                            param.roomID = position.roomID
                            param.srsGroupID = position.srsGroupID
                            param.sRoomMode = position.roomMode
                            XH.roomManager:gameStart(param)
                        end

                        if XH.lobby:getModule("Lobby"):isNeedHotUpdata(position.gameID) then
                            lobby.gameHotUpdateSuccessCallBack = func
                        else
                            func()
                        end
                    end
                    XH.TipTool.hideLoading()
                    self:close()
                end
                performWithDelay(self, func, 0.2)
            else
                XH.viewManager:openView("CreateBoxRoomView")
            end
            self:close()
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.GET_PROPS or sender.customData.id == SxvipConfig.SXVIP_POWER.GOLDROOM_GET_PROPS then
            -- 领取道具
            XH.viewManager:openView("SxvipDailyGiftView")
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.OPEN_GET_GIFT or sender.customData.id == SxvipConfig.SXVIP_POWER.GOLDROOM_OPEN_GET_GOLD then
            XH.viewManager:openView("SxvipShopView")
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.GOLDROOM_STATISTICS then
            XH.viewManager:openView("PlayerBillView", nil, {tab = XH.PlayerBillTab.gold})
            self:close()
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.GOLDROOM_DATA then
            XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxvipConfig.MENU_DEFINE.GOLD_STAITISTICS})
            -- self:close()
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.HIDE_VIP_TAG then
            if XH.lobby:getModule("Sxvip"):isExpire() then
                XH.viewManager:openView("SxvipShopView")
            else
                self._isEquipVip = not self._isEquipVip
                XH.lobby:getModule("Sxvip"):reqChangeVipShowState(self._isEquipVip)
                if self._vipTagTextNode then
                    self._vipTagTextNode:setString(self._vipTagTextNode:getString() == "已显示" and "已隐藏" or "已显示")
                end
            end
        elseif sender.customData.id == SxvipConfig.SXVIP_POWER.SUBSCRIPTION_AD_FREE then
            if not XH.lobby:getModule("Sxvip"):isSubscription() then
                XH.lobby:getModule("Sxvip"):subscribe("免广告")
            else
                local m = XH.lobby:getModule("Sxvip")
                local enabled = m:isAdFreeEnabled()
                m:setAdFreeEnabled(not enabled)
                m:setAdFreeChangeBySelf()
                self:onUpdateAdFree()
            end
        end
    end
end

function SxvipPrivilegeView:onUpdateAdFree()
    if self._vipAdFreeTextNode and not tolua.isnull(self._vipAdFreeTextNode) then
        local isAdFreeEnabled = XH.lobby:getModule("Sxvip"):isAdFreeEnabled()
        self._vipAdFreeTextNode:setString(isAdFreeEnabled and "已激活" or "未激活")
    end
end

function SxvipPrivilegeView:onRemainder(data)
    self:refreshView()
end

function SxvipPrivilegeView:onStaticConfigSucc(data)
    self:refreshView()
end

function SxvipPrivilegeView:onServerConfigSucc(data)
    self:refreshView()
end

function SxvipPrivilegeView:onRewardStatus()
    -- self:refreshView()
    for i = 1, #self._awardItems do
        self:updateSubItem(self._awardItems[i].subItem, self._awardItems[i].privilege)
    end
end

function SxvipPrivilegeView:onBtnClose(sender, eventType)
    self:close()
end

function SxvipPrivilegeView:onBtnBuy(sender, eventType)
    -- self:close()
    XH.viewManager:openView("SxvipShopView")
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.zyt2024032808, {block_item_id='会员介绍页'})
end
function SxvipPrivilegeView:onBtnGive(sender, eventType)
    self:close()
    XH.viewManager:openView("SxvipGiveView")
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090608)
end
function SxvipPrivilegeView:onBtnFeedback(sender, eventType)
    -- self:close()
    XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxvipConfig.MENU_DEFINE.FEED_BACK})
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090606)
end

function SxvipPrivilegeView:onFlushSxVipAct()
    local item = XH.lobby:getModule("SxvipAct"):getShowAct()
    self._KW_SXVIP_XSYH:setVisible(item ~= nil)
    if item == nil then
        return
    end
    self._KW_SXVIP_XSYH_TEXT:removeAllChildren()
    local str = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='44' color='#FFFFFF'>" .. item.actDetail.day .. "天会员低至" .. "<font color='#FDFF73'>" .. item.actDetail.discounted_price .. "</font>" .. "元" .. "</font>"
    local richText = ccui.RichText:createWithXML(str, {})
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:ignoreContentAdaptWithSize(false)
    richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
    local contentSize = self._KW_SXVIP_XSYH_TEXT:getContentSize()
    richText:setContentSize(contentSize)
    self._KW_SXVIP_XSYH_TEXT:addChild(richText)
    richText:setPosition(cc.p(self._KW_SXVIP_XSYH_TEXT:getContentSize().width/2, self._KW_SXVIP_XSYH_TEXT:getContentSize().height/2))
end

function SxvipPrivilegeView:showDetailScene(subItem)
    self:hideDetailScene()
    local detailTxtNode = subItem:getChildByName("_KW_SHOW_DETAIL")
    detailTxtNode:setVisible(true)
    subItem:setLocalZOrder(1024)
    self.lastShowSubitem = subItem
    self._KW_TOUCH_LAYER:setVisible(true)
end

function SxvipPrivilegeView:hideDetailScene()
    if self.lastShowSubitem and not tolua.isnull(self.lastShowSubitem) then
        local lastDetailTxtNode = self.lastShowSubitem:getChildByName("_KW_SHOW_DETAIL")
        lastDetailTxtNode:setVisible(false)
        self.lastShowSubitem:setLocalZOrder(0)
        self.lastShowSubitem = nil
    end
    self._KW_TOUCH_LAYER:setVisible(false)
end

function SxvipPrivilegeView:onTouchLayer(sender, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:hideDetailScene()
end

return SxvipPrivilegeView
�e