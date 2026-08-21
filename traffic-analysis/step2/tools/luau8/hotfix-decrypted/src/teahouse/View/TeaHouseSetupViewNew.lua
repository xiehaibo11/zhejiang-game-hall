local TeaHouseCreateView = import(".TeaHouseCreateViewNew")
local TeaHouseSetupView = class("TeaHouseSetupView", TeaHouseCreateView)

local KW_TEXTFIELD_FONT_COLOR = cc.c3b(255,250,235) --输入框字符颜色
local KW_TEXT_COLOR_ON_GRAYBG = cc.c3b(255,255,255)

local KW_IMG_NAME_INPUT_BG_NORMAL = "teahouse_setup_input_bg1.png"
local KW_IMG_NAME_INPUT_BG_GRAY = "teahouse_setup_input_bg2.png"

local KW_TEXT_STR_EVERYDAY_COSTLIMIT_GRAY = "仅领队模式可用"

function TeaHouseSetupView:ctor(info)
    self._isNowSelectFF = false
    self._info = info
    self:parseParams(info)
    TeaHouseSetupView.super.ctor(self)
end

function TeaHouseSetupView:initData()
    self.super.initData(self)
    TeaHouse.manager.teahouseSetup:openTeaHouseSetup(self._info.nTeaNumber)
    self._nTeaNumber = self._info.nTeaNumber
    self._szData = self._info.szData
    if self._info.momentLevel  then
        self._momentLevel = self._info.momentLevel 
    end
    self._selectTag = self._info.selectTag or self._selectTag
end

function TeaHouseSetupView:reqData()
    self.super.reqData(self)
    if TeaHouse.BridgeData.isRemodelArea() or TeaHouse.BridgeData.isNotTeaAgentMode() then
        self._textRechargeRoomCard:setString("个人账户可用房卡：" .. TeaHouse.BridgeData.getRoomCard())
    else
        TeaHouse.manager.teahouseSetup:reqAgentPropCnt()
    end
    TeaHouse.manager.teahouseSetup:reqTeaHousePropCnt()
    TeaHouse.manager.teahouseSetup:reqPlayModeInfo()
    -- 请求支付方式
    TeaHouse.manager.teahouseSetup:reqTeaHousePayType()

    TeaHouse.manager.teahouseSetup:reqOthersHideTHInfo()
    TeaHouse.manager.teahouseSetup:reqGetAutoTransferCard()
end

function TeaHouseSetupView:initEvents()
    self.super.initEvents(self)

    if self._teahouseSetupListener then
        local teahouseSetup = TeaHouse.manager.teahouseSetup
        self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_OTHER, handler(self, self.onUpdateOther))
        self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_REQ_PAYTYPE_SUCCESS, handler(self, self.onReqPayTypeSuccess))
        self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_REQ_USEPROPCNT_SUCCESS, handler(self, self.onReqUsePropCntSuccess))
        self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_PLAYMODEINFO, handler(self, self.onUpdatePlayModeInfo))
        self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_SINGLE_PLAYMODE, handler(self, self.onUpdateSinglePlayMode))
    end
    local gamePlayReachModule = XH.lobby:getModule("GamePlayReach")
    self:createListener(gamePlayReachModule)
    :addEventListener(gamePlayReachModule.EVENT_CONFIG_UPDATED, handler(self, self.onGamePlayReachConfigUpdated))
end

function TeaHouseSetupView:onGamePlayReachConfigUpdated()
    if self._btnSelectPlayMode and not tolua.isnull(self._btnSelectPlayMode) then
        XH.lobby:getModule("GamePlayReach"):attachBtnRedDot(self._btnSelectPlayMode)
    end
end

function TeaHouseSetupView:initNodePlayMode()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsOpenPlayMode then
        self._btnSelectPlayMode:setVisible(false)
        self._nodePlayMode:setVisible(false)
        return
    end
    self:initListViewPlayMode()
    self._btnSelectPlayMode:setVisible(true)
    -- 玩法触达：配置已在进入大厅时拉取，此处仅刷新功能更新红点
    XH.lobby:getModule("GamePlayReach"):attachBtnRedDot(self._btnSelectPlayMode)
    ---如果不是领队 则只显示固定玩法页签
    if not self._info.isOwner then
        self._btnSelectPlayMode:setPositionX(self._btnSelectBase:getPositionX())
        self._btnSelectBase:setVisible(false)
        self:onBtnEventPlayMode(self._btnSelectPlayMode, ccui.TouchEventType.ended)
    end
end

function TeaHouseSetupView:initListViewPlayMode()
    self:updatePlayModeList()
end

function TeaHouseSetupView:initBtnDissolve()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsOpenDissolve or not self._info.isOwner then
        self._btnDissolve:setVisible(false)
        return
    end
    self._btnDissolve:setVisible(true)
end

--比赛场备注节点初始化
function TeaHouseSetupView:initNodeTeaHouseNote()
    self.super.initNodeTeaHouseNote(self)
    if self._szData then
        self._textFieldNotes:setText(self._szData)
        self._textNotes:setString(self._szData)
    end
end

function TeaHouseSetupView:onBtnEventSure(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if TeaHouse.LOBBY_ID.NINGBO == TeaHouse.BridgeData.getLobbyID() or TeaHouse.LOBBY_ID.YUYAO == TeaHouse.BridgeData.getLobbyID() then
        if self._isNowSelectFF and self._selectMode ~= TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = function ()
                self:sureToSetup()
            end }, "切换模式后，将无法继续选择'其他模式'，确认切换？")
            return
        end
    end

    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    funcOK = function ()
        self:sureToSetup()
    end }, "修改消耗设置会影响玩家消耗统计，是否要继续修改设置？")
end

function TeaHouseSetupView:sureToSetup()
    local notesStr = self._textFieldNotes:getText()
    local everyDayCostLimitStr = self._textFieldEveryDayCostLimit:getText()
    local everyDayCostTouchEnable = self._textFieldEveryDayCostLimit:isTouchEnabled()
    local rechargeStr = self._textFieldRecharge:getText()

    if #notesStr > 4 then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "比赛场备注不能超过4个字符")
        return
    end
    if everyDayCostTouchEnable and #everyDayCostLimitStr == 0 then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "每日最大消耗不能为空")
        return
    end

    local notesNum = tonumber(notesStr)
    local rechargeNum = TeaHouse.StringTool.toPositiveIntNumber(rechargeStr)
    local everyDayCostLimitNum = TeaHouse.StringTool.toPositiveIntNumber(everyDayCostLimitStr)
    local newerNum = 8888
    local teaNumber = TeaHouse.manager.teahouseSetup:getTeaNumber()

    local agentPropCnt = TeaHouse.manager.teahouseSetup:getAgentPropCount()
    if rechargeNum == nil or rechargeNum < 0 then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "划卡数量不正确")
        return
    end
    --转型比赛场直接使用玩家的账号卡
    if TeaHouse.BridgeData.isRemodelArea() then
        if self._info.useBuyedProp == nil or self._info.useBuyedProp then
            agentPropCnt =  TeaHouse.BridgeData.getRoomCard()
        end
    end
    if rechargeNum > agentPropCnt then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "房卡库存不足")
        return
    end
    
    if #notesStr > 0 and notesNum == nil then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "比赛场备注只允许数字和小数点")
        return
    end
    if everyDayCostTouchEnable then
        if (everyDayCostLimitNum == nil or everyDayCostLimitNum <= 0) then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "每日最大消耗输入不正确")
            return
        end
    else
        everyDayCostLimitNum = TeaHouseCreateView.KW_DEFAULT_EVERYDAY_COSTLIMIT
    end

    local tempPayTypeTable = {}
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType then
        -- if not self._savePayTypeData or self._selectMode ~= self._savePayTypeData.selectModeType then
        --     TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "请先为您的比赛场选择消耗模式")
        --     return
        -- end
        tempPayTypeTable = self._savePayTypeData.payTypeTable
    end

    local bCurrencyFirst = false
    if self._savePayTypeData.bCurrencyFirst then
        bCurrencyFirst = true
    end

    local bOthersHiden = nil
    --是否开启陌生人可见选项
    if SetupConfig.IsOpenStrangerCanSee then
        bOthersHiden = not self._checkBoxStrangerCanSee:isSelected()
    end
    local bAutoAddRoomCard = nil
    local nTransferCardNum = 0
    local nRemindLowCardNum = -1
    --是否开启自动转入房卡选项
    if SetupConfig.IsOpenAutoAddRoomCard or TeaHouse.BridgeData.isRemodelArea() then
        bAutoAddRoomCard = self._nodeAutoAddRoomCard:isVisible() and self._checkBoxAutoAddRoomCard:isSelected()
        if bAutoAddRoomCard then
            if self:updateAutoAddErrStr() then return end
            nTransferCardNum = tonumber(self:getSelectedAutoNum(self._panelAutoAddNum))
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_AUTO_ADD_SELECTED_GEAR,{TeaHouseAutoAddGear = nTransferCardNum})
        end
        if self._nodeLackCardNotify:isVisible() and self._checkBoxLackCardNotify:isSelected() then
            if self:updateLackNotifyErrStr() then return end
            nRemindLowCardNum = tonumber(self:getSelectedAutoNum(self._panelNotifyNum))
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_AUTO_NOTIFY_SELECTED_GEAR,{TeaHouseAutoNotifyGear = nRemindLowCardNum})
        end
    end
    TeaHouse.manager.teahouseMain:dispatchEvent({ name = TeaHouse.manager.teahouseMain.EVENT_LACK_CARD_NOTIFY, show = false})

    local data = {}
    data.notesNum = tonumber(notesStr)
    data.everyDayCostLimitNum = everyDayCostLimitNum
    data.newerNum = 8888
    data.rechargeNum = TeaHouse.StringTool.toPositiveIntNumber(rechargeStr)
    data.bOthersHiden = bOthersHiden
    data.bAutoAddRoomCard = bAutoAddRoomCard
    data.nLowCardNum = SetupConfig.AutoAddRoomCardLowCardNum
    data.nTransferCardNum = nTransferCardNum
    data.nRemindLowCardNum = nRemindLowCardNum
    data.modeType = self:getPayModeType()
    local lobbyID = TeaHouse.BridgeData.getLobbyID()--处理台州转人人后，比赛场流通模式无法切换的问题。
    local payModeTypeConf = TeaHouse.manager.configManager:loadConfig("PayModeTypeConfig")
    if payModeTypeConf[tonumber(lobbyID)] and TeaHouse.BridgeData.isRemodelArea() and data.modeType == 0 then
        data.modeType = payModeTypeConf[tonumber(lobbyID)]
    end
    data.payTypeTable = tempPayTypeTable
    data.bCurrencyFirst = bCurrencyFirst
    data.bLastCost = self._checkBoxCostTypeLast:isSelected() and self._checkBoxCostTypeLast:isVisible()
    TeaHouse.manager.teahouseSetup:setupTeaHouse(data)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_78,{RechargeNum = rechargeNum})
    self:close()
end

function TeaHouseSetupView:onBtnEventSurePlayMode(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function TeaHouseSetupView:onBtnEventDissolve(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --2022.1.7全区退出解散比赛场统一弹一个弹窗
    TeaHouse.manager.viewManager:openView("TeaHouseRemodelDissolveView", nil, self:isShowQuanCard())
    --人人比赛场
    -- local tipMsg = "是否确认解散该比赛场?"
    -- if TeaHouse.BridgeData.isRemodelArea() then
    --     --领队向里面划过卡
    --     if TeaHouse.manager.teahouseSetup:getSubPropCnt() > 0 then
    --         TeaHouse.manager.viewManager:openView("TeaHouseRemodelDissolveView")
    --         return
    --     else
    --         tipMsg = "是否确认解散该比赛场?解散后比赛场数据不保留且不可恢复！"
    --     end
    -- end
    -- TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    --     funcOK = function()
    --         local teaNumber = TeaHouse.manager.teahouseSetup:getTeaNumber()
    --         TeaHouse.manager.teahouseList:closeTeaHouse(teaNumber)
    -- end,},tipMsg)
end

function TeaHouseSetupView:onUpdateOther(event)
    self._checkBoxStrangerCanSee:setSelected(TeaHouse.manager.teahouseSetup:getStrangerCanSeeBool())
    self._checkBoxAutoAddRoomCard:setSelected(TeaHouse.manager.teahouseSetup:getAutoAddRoomCardBool())
    local nTransferCardNum = TeaHouse.manager.teahouseSetup:getAutoAddRoomCardNum()
    local nRemindLowCardNum = TeaHouse.manager.teahouseSetup:getLackCardNotifyNum()
    if TeaHouse.manager.teahouseSetup:getAutoAddRoomCardBool() and nTransferCardNum > 0 then
        self._checkBoxAutoAddRoomCard:setSelected(true)
        self:selectSettingAutoGear(self._panelAutoAddNum, nTransferCardNum)
        self:onCheckBoxEventAutoAddCardSelect(self._checkBoxAutoAddRoomCard, ccui.CheckBoxEventType.selected)
    else
        self._checkBoxAutoAddRoomCard:setSelected(false)
        self:onCheckBoxEventAutoAddCardSelect(self._checkBoxAutoAddRoomCard, ccui.CheckBoxEventType.unselected)
    end
    if nRemindLowCardNum > 0 then
        self._checkBoxLackCardNotify:setSelected(true)
        self:selectSettingAutoGear(self._panelNotifyNum, nRemindLowCardNum)
        self:onCheckBoxEventLackCardNotifySelect(self._checkBoxLackCardNotify, ccui.CheckBoxEventType.selected)
    else
        self._checkBoxLackCardNotify:setSelected(false)
        self:onCheckBoxEventLackCardNotifySelect(self._checkBoxLackCardNotify, ccui.CheckBoxEventType.unselected)
    end
end

function TeaHouseSetupView:setEveryDayCostLimitEnabled(enable)
    local dailyUsePropStr = TeaHouse.manager.teahouseSetup:getDailyUsePropCnt()
    dailyUsePropStr = dailyUsePropStr or ""
    if enable then
        self._bgEveryDayCostLimit:loadTexture(KW_IMG_NAME_INPUT_BG_NORMAL, ccui.TextureResType.plistType)
        self._textFieldEveryDayCostLimit:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
        self._textFieldEveryDayCostLimit:setTouchEnabled(true)
        self._textFieldEveryDayCostLimit:setText(dailyUsePropStr)
        self._textEveryDayCostLimit:setString(dailyUsePropStr)
        self._textEveryDayCostLimit:setColor(KW_TEXTFIELD_FONT_COLOR)
    else
        self._bgEveryDayCostLimit:loadTexture(KW_IMG_NAME_INPUT_BG_GRAY, ccui.TextureResType.plistType)
        self._textFieldEveryDayCostLimit:setInputMode(cc.EDITBOX_INPUT_MODE_ANY)
        self._textFieldEveryDayCostLimit:setTouchEnabled(false)
        -- self._textFieldEveryDayCostLimit:setText(KW_TEXT_STR_EVERYDAY_COSTLIMIT_GRAY)
        self._textEveryDayCostLimit:setString(KW_TEXT_STR_EVERYDAY_COSTLIMIT_GRAY)
        self._textEveryDayCostLimit:setColor(KW_TEXT_COLOR_ON_GRAYBG)
    end
end

function TeaHouseSetupView:getSelectModeByModeTypeAndPayType(modeType, payTypeTable)
    local bPlayerOwnerCardAA = false
    local bAgentPlayerAA = false
    local bAgentPlayerWinner = false
    local bPlayerOwnerTeaCardAA = false
    local bPlayerOwnerTeaCardWinner = false
    local bPlayerAA = false
    local bSXPlayerAA = false
    for _, type in pairs(payTypeTable) do
        if type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
            bPlayerOwnerCardAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
            bAgentPlayerAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
            bAgentPlayerWinner = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN then
            bPlayerOwnerTeaCardWinner = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA then
            bPlayerOwnerTeaCardAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
            bPlayerAA = true
            bSXPlayerAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
            bPlayerAA = true
        end
    end
    -- 绍兴3d兼容
    if TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() then
        if bAgentPlayerAA or bSXPlayerAA then
            return TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU
        end
    end
    if bAgentPlayerAA or bAgentPlayerWinner then
        --其他模式
        return TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI
    elseif bPlayerOwnerTeaCardWinner or bPlayerOwnerTeaCardAA then
        --大厅模式
        return TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY
    elseif bPlayerOwnerCardAA then
        --流通模式
        return TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG
    elseif modeType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
        --预付模式
        return TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU
    end
    --领队模式
    return TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU
end

function TeaHouseSetupView:onReqPayTypeSuccess(event)
    local payModeType = TeaHouse.manager.teahouseSetup:getPayModeType() 
    local payTypeTable = TeaHouse.manager.teahouseSetup:getPayTypeTable() 
    local selectMode = self:getSelectModeByModeTypeAndPayType(payModeType, payTypeTable)
    local bCurrencyFirst = TeaHouse.manager.teahouseSetup:getCurrencyFirstBool() 
    -- payTypeTable = self:judgeNeedFitOld(payTypeTable)
    self._isNowSelectFF = selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI
    self:setPayModeTypeAndPayType(selectMode, payTypeTable, bCurrencyFirst)
end

function TeaHouseSetupView:onReqUsePropCntSuccess(event)
    local subPropCnt = TeaHouse.manager.teahouseSetup:getSubPropCnt() 
    local exchangeRate = TeaHouse.manager.teahouseSetup:getExchangeRate()
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.TAIZHOU then
        self._textRechargeRoomCard:setString("当前比赛场房卡：" .. subPropCnt/TeaHouse.BridgeData.getSmallRoomCardRatio())
    else
        self._textRechargeRoomCard:setString("当前比赛场房卡：" .. subPropCnt/exchangeRate)
    end
    local dailyUsePropStr = TeaHouse.manager.teahouseSetup:getDailyUsePropCnt()
    dailyUsePropStr = dailyUsePropStr or ""
    self._textFieldEveryDayCostLimit:setText(tostring(dailyUsePropStr))
    
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU then
        self._textEveryDayCostLimit:setString(tostring(dailyUsePropStr))
    end
end

function TeaHouseSetupView:onUpdatePlayModeInfo(event)
    self:updatePlayModeList()
end

function TeaHouseSetupView:updatePlayModeList()
    self._tbPlayModeItems = {}
    self._infoListSize = self._listPlayMode:getContentSize()
    self._itemOriginPos = cc.p(0, 0)
    self._itemOffsetPos = cc.p(self._itemOriginPos.x, self._itemOriginPos.y)
    self._listPlayMode:removeAllChildren()
    local playModeList = TeaHouse.manager.teahouseSetup:getPlayModeList()
    local tPlayModeInfos = {}
    for key, value in pairs(playModeList) do
        if not TeaHouse.ReadGameListAndRuleConfig.judgeIsCard13ByGameId(value.nGameId) then
            table.insert(tPlayModeInfos, value)
        end
    end
    
    for i = 1, #tPlayModeInfos do
        self:addInfoItem(tPlayModeInfos[i])
    end
    self:addPlayModeAddItem()
end

function TeaHouseSetupView:updateListSize()
    if self._listPlayMode == nil or self._infoListSize == nil or self._itemOffsetPos == nil then
        return
    end

    if self._itemOffsetPos.x < self._infoListSize.width then
        self._listPlayMode:setInnerContainerSize(self._infoListSize)
    else
        self._listPlayMode:setInnerContainerSize(cc.size(self._itemOffsetPos.x, self._infoListSize.height))
    end
end

function TeaHouseSetupView:addPlayModeAddItem()
    if self._listPlayMode == nil or self._itemOffsetPos == nil then
        return
    end

    local playModeAddItem = TeaHouse.manager.viewManager:createView("TeaHouseListItem.TeaHousePlayModeAddListItem")
    self._listPlayMode:addChild(playModeAddItem)
    playModeAddItem:setPosition(self._itemOffsetPos)
    self._itemOffsetPos.x = self._itemOffsetPos.x + playModeAddItem:getWidth()

    self:updateListSize()
end

function TeaHouseSetupView:addInfoItem(info, isFront)
    if self._listPlayMode == nil or self._itemOffsetPos == nil then
        return
    end
    isFront = isFront or false

    info.itemIndex = #self._tbPlayModeItems + 1
    local teaHousePlayModeListItem = TeaHouse.manager.viewManager:createView("TeaHouseListItem.TeaHousePlayModeListItem", info)
    table.insert(self._tbPlayModeItems, teaHousePlayModeListItem)
    self._listPlayMode:addChild(teaHousePlayModeListItem)
    teaHousePlayModeListItem:setPosition(isFront and self._itemOriginPos or self._itemOffsetPos)
    self._itemOffsetPos.x = self._itemOffsetPos.x + teaHousePlayModeListItem:getWidth()

    if isFront then
        local children = self._listPlayMode:getChildren()
        for i = 1, #children do
            local child = children[i]
            if child then
                child:setPosition(cc.pAdd(child:setPosition(), cc.p(teaHousePlayModeListItem:getWidth(), 0)))
            end
        end
    end

    self:updateListSize()
end

function TeaHouseSetupView:updateSinglePlayMode(playModeId)
    for _, item in pairs(self._tbPlayModeItems) do
        if item:getPlayModeId() == playModeId then
            item:updateItem(TeaHouse.manager.teahouseSetup:getPlayModeByPlayModeId(playModeId))
            return 
        end
    end
end

function TeaHouseSetupView:updateCostTypePanel()
    self.super.updateCostTypePanel(self)

    if self._savePayTypeData and self._savePayTypeData.selectModeType == self._selectMode then
        self:setPayModeTypeAndPayType(
            self._savePayTypeData.selectModeType, 
            self._savePayTypeData.payTypeTable,
            self._savePayTypeData.bCurrencyFirst)
    end
end

function TeaHouseSetupView:setPayModeTypeAndPayType(selectMode, payType, bCurrencyFirst)
    local bPlayerOwnerCardAA = false
    local bOwner = false
    local bPlayerAA = false
    local bRoomOwner = false
    local bAgentPlayerAA = false
    local bAgentPlayerWinner = false
    local bLobbyPlayerAA = false
    local bLobbyPlayerWinner = false
    local isYuFuAA = false
    for _, type in pairs(payType) do
        if type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
            bPlayerOwnerCardAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER then
            bOwner = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
            bPlayerAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
            bPlayerAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER then
            bRoomOwner = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
            bAgentPlayerAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
            bAgentPlayerWinner = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA then
            bLobbyPlayerAA = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN then
            bLobbyPlayerWinner = true
        elseif type == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
            isYuFuAA = true
        end
    end

    self:selectMode(selectMode)

    if bAgentPlayerAA or bAgentPlayerWinner then
        self:selectedCostTypeAll(bAgentPlayerWinner)
    elseif bLobbyPlayerWinner then
        self:selectedCostTypeAll(bLobbyPlayerWinner)
    elseif bPlayerOwnerCardAA  then
        self:selectedCostTypeAll(true)
    else
        self:selectedCostTypeAll(bOwner)
    end

    if selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU then
        self:selectedCostTypeAll(bOwner)
    end

    if bPlayerAA or bAgentPlayerAA or bLobbyPlayerAA or isYuFuAA then
        self:selectedCostTypeAverage(true) 
    else
        self:selectedCostTypeAverage(false)
    end

    -- 绍兴单独处理
    if TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() then
        if bAgentPlayerAA then
            self:selectedCostTypeAll(true)
        end
        if bPlayerAA or bLobbyPlayerAA or isYuFuAA then
            self:selectedCostTypeAverage(true) 
        else
            self:selectedCostTypeAverage(false)
        end
    end

    self:selectedCostTypeRoomOwner(bRoomOwner)

    self:savePayTypeData(selectMode, payType, bCurrencyFirst)
end

function TeaHouseSetupView:selectedCostTypeAll(bSelected)
    local teahouseData = TeaHouse.manager.teahouseData
    local isLastPay = teahouseData:isLastCost()
    self._checkBoxCostTypeAll:setSelected(bSelected and not isLastPay)
    self._checkBoxCostTypeLast:setSelected(bSelected and isLastPay)
end

function TeaHouseSetupView:selectedCostTypeAverage(bSelected)
    self._checkBoxCostTypeAverage:setSelected(bSelected)
end

function TeaHouseSetupView:selectedCostTypeRoomOwner(bSelected)
    self._checkBoxCostTypeRoomOwner:setSelected(bSelected)
end

function TeaHouseSetupView:isShowQuanCard()
    return not(self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI or self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY)
end

function TeaHouseSetupView:updateRoomCardVisible()
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI or self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
        self._textTotalRoomCard:setVisible(false)
        self._textRechargeRoomCard:setVisible(false)
    else
        self._textTotalRoomCard:setVisible(true)
        self._textRechargeRoomCard:setVisible(true)
    end
    if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
        if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU or self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
            self._textRechargeRoomCard:setVisible(false)
        else
            self._textRechargeRoomCard:setVisible(true)
        end
    end
end

-- -- 暂时加上特判,企业包未设置比赛场支付模式的情况
-- function TeaHouseSetupView:judgeNeedFitOld(payTypeTable)
--     if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
--         if #payTypeTable == 0 then
--             return { [1] = 0;[2] = 1 }
--         end
--     end
--     return payTypeTable
-- end

-- 选择设置的档位
function TeaHouseSetupView:selectSettingAutoGear(node, num)
    if not node or num <= 0 then
        return
    end
    local children = node:getChildren()
    for i = 1, #children - 1 do
        if tonumber(TeaHouse.BridgeUI.getText(children[i], "KW_TEXT_AUTO_NUM")) == num then
            -- 找到固定档位
            self:onCheckBoxEventAutoNumSelect(children[i], ccui.CheckBoxEventType.selected)
            return
        end
    end
    -- 设置自定义档位
    TeaHouse.BridgeUI.setText(children[#children], "KW_TEXT_AUTO_NUM", num)
    self:onCheckBoxEventAutoNumSelect(children[#children], ccui.CheckBoxEventType.selected)
end

function TeaHouseSetupView:close()
    TeaHouseSetupView.super.close(self)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RECORD_GUIDE_ENTRY,true)
    TeaHouse.manager.teaHouseGuide:startCreateTeaHouseGuide()
end

function  TeaHouseSetupView:createFirstGuide()
    local pointList = {
        self._guideTipPoint
    }
    local nodeList = {
        self._guideMaskPanel,
    }
    local tipType = {
        { showType = "down", text = "可以在【基础设置】中设置比赛场内扣卡及消耗模式哦" },
    }
    if not self._panelGuide:isVisible() then
        local teaHouseGuideTipItem = TeaHouse.manager.viewManager:createView("TeaHouseGuideTipItem.TeaHouseGuideTipItem")
        local tempNo = 1
        local node = nodeList[tempNo]
        local xPos = node:getPositionX()
        local yPos = node:getPositionY()
        local worldPos = node:getParent():convertToWorldSpace(cc.p(xPos, yPos))
        worldPos = self._panelGuide:convertToNodeSpace(worldPos)
        local size = node:getContentSize()
        cc.SpriteFrameCache:getInstance():addSpriteFrames("TeaHouse/Image/teahouse_guide.plist")
        -- 生成一个遮罩ClippingNode
        local uiClippingNode = cc.ClippingNode:create()
        uiClippingNode:setInverted(true)
        -- 是否裁剪模板之外的内容
        uiClippingNode:setAlphaThreshold(0.5)
        -- 设置阿发值
        -- 生成模板
        local clippingMask = cc.Sprite:create()
        clippingMask:setSpriteFrame("teahouse_guide_BG.png")
        clippingMask:setPosition(worldPos)
        clippingMask:setScaleX(size.width / 100)
        clippingMask:setScaleY(size.height / 100)
        clippingMask:setAnchorPoint(cc.p(0.5, 0.5))
        -- 设置模板
        uiClippingNode:setStencil(clippingMask)
        -- 生成背景
        local layerNode = cc.Sprite:create()
        layerNode:setSpriteFrame("teahouse_guide_BG.png")
        layerNode:setPosition(self._panelGuide:getContentSize().width/2, self._panelGuide:getContentSize().height/2)
        layerNode:setScaleX(30)
        layerNode:setScaleY(20)
        uiClippingNode:addChild(layerNode)
        self._panelGuide:addChild(uiClippingNode)
        self._panelGuide:addChild(teaHouseGuideTipItem)


        local point = pointList[tempNo]
         xPos = point:getPositionX()
         yPos = point:getPositionY()
         worldPos = point:getParent():convertToWorldSpace(cc.p(xPos, yPos))
         worldPos = self._panelGuide:convertToNodeSpace(worldPos)
        teaHouseGuideTipItem:setPosition(worldPos)
        teaHouseGuideTipItem:updata(tipType[tempNo].showType, tipType[tempNo].text,2)
        self._panelGuide:setVisible(true)
        self._panelGuide:addTouchEventListener( function(send, event)
            if event ~= ccui.TouchEventType.ended then
                return
            end
            tempNo = tempNo + 1
            node = nodeList[tempNo]
            if node then
                xPos = node:getPositionX()
                yPos = node:getPositionY()
                worldPos = node:getParent():convertToWorldSpace(cc.p(xPos, yPos))
                worldPos = self._panelGuide:convertToNodeSpace(worldPos)
                size = node:getContentSize()
                clippingMask:setPosition(worldPos)
                clippingMask:setScaleX(size.width / 100)
                clippingMask:setScaleY(size.height / 100)
                teaHouseGuideTipItem:setPosition(worldPos)
                teaHouseGuideTipItem:updata(tipType[tempNo].showType, tipType[tempNo].text,2)
            else
                self._panelGuide:setVisible(false) 
            --     TeaHouse.manager.teaHouseGuide:endCreateTeaHouseGuide()
            end
        end )
    end
end

return TeaHouseSetupView�|