--选择需要创建的比赛场
local TeaHouseRemodelChoiceView = class("TeaHouseRemodelChoiceView", TeaHouse.View)

local LEVEL_MAX = 3

TeaHouseRemodelChoiceView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRemodelChoiceView.csb",
    binding = {
        ["_KW_BTN_CREATE"] = { tag = "_KW_BTN_CREATE", name = "_btnCreateMoments", class = "btn", events = "onCreateMomentsClicked" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_SHOW_TIP"] = { tag = "_KW_BTN_SHOW_TIP", name = "_btnshowTip", class = "btn", events = "onShowTipClicked"},
        ["_KW_COVER_LEVEL1"] = {tag = "_KW_COVER_LEVEL1", name = "_coverLevel1"},
        ["_KW_COVER_LEVEL2"] = {tag = "_KW_COVER_LEVEL2", name = "_coverLevel2"},
        ["_KW_COVER_LEVEL3"] = {tag = "_KW_COVER_LEVEL3", name = "_coverLevel3"},
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHouseRemodelChoiceView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_QUAN_LEVEL_", startNum = 1, endNum = LEVEL_MAX, preName = "_panelLevel_", class = "panel"
})

function TeaHouseRemodelChoiceView:ctor()
    TeaHouseRemodelChoiceView.super.ctor(self)
    self:initData()
    self:initUI()
    self:initEvents()
end

function TeaHouseRemodelChoiceView:initUI()
    for i =1 ,LEVEL_MAX do 
        local btnLevel= self["_panelLevel_" .. i]   
        btnLevel:addTouchEventListener(function(send, eventType)
            self:onLevelMomentsClicked(send, eventType, i)
        end)
        self:changeLevelMomentsState(i,false)
    end
    self:updateTeahouseCreateUI()
end

function TeaHouseRemodelChoiceView:initData()
    self._selectedLevelItem = nil
    self._createConditionData = TeaHouse.manager.teahouseData:getTeaLevelConfig()
    self._teaHouseLevelData = {}
end

function TeaHouseRemodelChoiceView:initEvents(  )
    local teahouseList = TeaHouse.manager.teahouseList
    self:createListener(teahouseList):addEventListener(teahouseList.EVENT_REMODEL_TEA_HOUSE_UPDATE_CREATE_CONDITION,handler(self, self.onTeaHouseUpdateCreateCondition))
    local teahouseSetup = TeaHouse.manager.teahouseSetup
    self:createListener(teahouseSetup):addEventListener(teahouseSetup.EVENT_UPDATE_CHOICEVIEW_TEAHOUSE_NUMBER,handler(self, self.onTeaHouseUpdateCreateCondition))
end

function TeaHouseRemodelChoiceView:close()
    for i = 1 ,LEVEL_MAX do 
        local btnLevel= self["_panelLevel_" .. i]
        local showPanel = ccui.Helper:seekWidgetByName(btnLevel,"_KW_PANEL_SHOW")
        local infoPanel = ccui.Helper:seekWidgetByName(btnLevel,"_KW_PANEL_INFO")
        showPanel:stopAllActions()
        infoPanel:stopAllActions()
    end
    TeaHouseRemodelChoiceView.super.close(self)
end

function TeaHouseRemodelChoiceView:selectMomentsLevelUI(selectedIndex)
    for i = 1 ,LEVEL_MAX do 
        local btnLevel= self["_panelLevel_" .. i]
        local selectWeight = ccui.Helper:seekWidgetByName(btnLevel,"_KW_CHECKBOX_MODEL_SELECTED")
        if selectWeight then
            selectWeight:setSelected(selectedIndex == i)
        end
        local selectWeightBg = ccui.Helper:seekWidgetByName(btnLevel,"_KW_LEVEL_SELECTED")
        if selectWeightBg then
            selectWeightBg:setVisible(selectedIndex == i)
        end
        self:changeLevelMomentsState(i,selectedIndex == i)
    end
end

function TeaHouseRemodelChoiceView:onLevelMomentsClicked(send, eventType,index)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._selectedLevelItem = index or 1
    self:selectMomentsLevelUI(self._selectedLevelItem)
end

function TeaHouseRemodelChoiceView:changeLevelMomentsState(selectedIndex,isSelected)
    local btnLevel = self["_panelLevel_" .. selectedIndex]
    if btnLevel then
        local showPanel = ccui.Helper:seekWidgetByName(btnLevel,"_KW_PANEL_SHOW")
        local infoPanel = ccui.Helper:seekWidgetByName(btnLevel,"_KW_PANEL_INFO")
        showPanel:setScale(1)
        infoPanel:setScale(1)
        showPanel:stopAllActions()
        infoPanel:stopAllActions()
        if isSelected then
            if showPanel:isVisible() then
                local TurnOverTime = 0.2
                showPanel:runAction(cc.Sequence:create(
                    cc.ScaleTo:create(TurnOverTime, 0, 1),
                    cc.CallFunc:create(
                        function()
                            showPanel:setVisible(not isSelected)
                        end
                    )
                ))
                infoPanel:runAction(cc.Sequence:create(
                    cc.DelayTime:create(TurnOverTime),
                    cc.CallFunc:create(
                        function()
                            infoPanel:setVisible(isSelected)
                            infoPanel:setScaleX(0)
                        end
                    ),
                    cc.ScaleTo:create(TurnOverTime, 1, 1)
                ))
            else
                showPanel:setVisible(not isSelected)
                infoPanel:setVisible(isSelected)
            end
        else
            showPanel:setVisible(not isSelected)
            infoPanel:setVisible(isSelected)
        end
    end
end

function TeaHouseRemodelChoiceView:onShowTipClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseRemodelMomentsTip")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_76)
end

function TeaHouseRemodelChoiceView:onCreateMomentsClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._selectedLevelItem == nil then
        TeaHouse.TipTool.showToast("请选择一种比赛场")
        return
    end
    local condition =  0
    if self._createConditionData and self._createConditionData[self._selectedLevelItem] then
        condition = self._createConditionData[self._selectedLevelItem].tLevelCardNum or 0
    end
    local levelName = {
        [1] = "初级",
        [2] = "中级",
        [3] = "高级",
    }
    local createConditionData = TeaHouse.manager.teahouseData:getTeaLevelConfig()
    local currentCount = self._teaHouseLevelData[self._selectedLevelItem] or 0
    local TeaHouseRemodelConfig = TeaHouse.manager.configManager.remodelConfig
    if not next(createConditionData) then
        --发生了意外情况,服务为下发配置,需要从本地读取创建配置
        createConditionData = TeaHouse.manager.configManager.remodelConfig._creatCondition
    end
    if currentCount >= createConditionData[self._selectedLevelItem].tMaxTeaCount then
        if  self._selectedLevelItem == TeaHouseRemodelConfig.TEAHOUSELEVEL.SENIOR  then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您的高级比赛场数量已达上限。")
        elseif self._selectedLevelItem == TeaHouseRemodelConfig.TEAHOUSELEVEL.INTERMEDIATE  then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您的中级比赛场数量已达上限")
        elseif self._selectedLevelItem == TeaHouseRemodelConfig.TEAHOUSELEVEL.JUNIOR  then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您的初级比赛场数量已达上限")
        end
    else
        --判断下是否需要解锁
        local multi =  1
        if self._teaHouseLevelData and self._teaHouseLevelData[self._selectedLevelItem] then
            multi = self._teaHouseLevelData[self._selectedLevelItem] + 1
        end
        if condition > 0 then
            if TeaHouse.BridgeData.getRoomCard() >= condition*multi then
                --TeaHouse.manager.viewManager:openView("TeaHouseCreateView",nil,{ momentLevel = self._selectedLevelItem})
                TeaHouse.manager.teaHouseRemodeCreate:createRemodelTeaHouse(self._selectedLevelItem)
            else
                local tipMsg = string.format("创建%s比赛场需要账户房卡大于%s张,是否前往充值？",levelName[self._selectedLevelItem],condition*multi)
                local info = {}
                info.type = XH.TIP_LAYER_TYPE.OK_CANCEL
                info.funcOK  = function()
                    TeaHouse.BridgeUI.openShopView()
                end
                TeaHouse.TipTool.showTip(info,tipMsg)
            end
            self:throwData(self._selectedLevelItem)
            self:close()
        else
            --TeaHouse.manager.viewManager:openView("TeaHouseCreateView",nil,{ momentLevel = self._selectedLevelItem})
            TeaHouse.manager.teaHouseRemodeCreate:createRemodelTeaHouse(self._selectedLevelItem)
            self:throwData(self._selectedLevelItem)
            self:close()
        end
    end
end

function TeaHouseRemodelChoiceView:throwData(SelectedLevel)
    local TeaHouseRemodelConfig = TeaHouse.manager.configManager.remodelConfig
    if SelectedLevel == nil then 
        return 
    end 
    if SelectedLevel == TeaHouseRemodelConfig.TEAHOUSELEVEL.SENIOR then 
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_75,{TEAHOUSELEVEL = "高级"})
    end
    if SelectedLevel == TeaHouseRemodelConfig.TEAHOUSELEVEL.INTERMEDIATE then 
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_75,{TEAHOUSELEVEL = "中级"})
    end
    if SelectedLevel == TeaHouseRemodelConfig.TEAHOUSELEVEL.JUNIOR then
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_75,{TEAHOUSELEVEL = "初级"}) 
    end
end

function TeaHouseRemodelChoiceView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

--创建等级选择界面的创建条件
function TeaHouseRemodelChoiceView:onTeaHouseUpdateCreateCondition(event)
    self._createConditionData = TeaHouse.manager.teahouseData:getTeaLevelConfig()
    self:updateTeahouseCreateUI()
end

function TeaHouseRemodelChoiceView:updateTeahouseCreateUI()
    if not next(self._createConditionData)  then--如果没有收到服务下发的数据，读取本地配置
        self._createConditionData = TeaHouse.manager.configManager.remodelConfig._creatCondition
    end
    if self._createConditionData then
        self._teaHouseLevelData = TeaHouse.manager.teahouseList:getEveryLevelTeaNumberResult()
        for i =1 ,LEVEL_MAX do 
            local teaCount = self._teaHouseLevelData[i] or 0
            local btnLevel= self["_panelLevel_" .. i]
            TeaHouse.BridgeUI.setText(btnLevel, "Text_level", TeaHouse.BridgeUI.getText(btnLevel, "Text_level"))
            TeaHouse.BridgeUI.setText(btnLevel, "Text_c_2_0", TeaHouse.BridgeUI.getText(btnLevel, "Text_c_2_0"))
            TeaHouse.BridgeUI.setText(btnLevel, "Text_c_2", TeaHouse.BridgeUI.getText(btnLevel, "Text_c_2"))
            TeaHouse.BridgeUI.setText(btnLevel, "Text_c_2_0_0", TeaHouse.BridgeUI.getText(btnLevel, "Text_c_2_0_0"))
            if self._createConditionData[i] then
                local creatNumNode = ccui.Helper:seekWidgetByName(btnLevel,"_KW_QUAN_CREATE_NUM")
                if creatNumNode then
                    creatNumNode:setText("拥有数量：" .. teaCount .. "/" .. self._createConditionData[i].tCanCreateTeaCount)
                end
                local playModeNumNode = ccui.Helper:seekWidgetByName(btnLevel,"_KW_SUPPORT_PLAYMODE")
                if playModeNumNode then
                    playModeNumNode:setString(self._createConditionData[i].tPlayModeNum)
                end

                local addAdminNode = ccui.Helper:seekWidgetByName(btnLevel,"_KW_SUPPORT_ADMIN")
                if addAdminNode then
                    if self._createConditionData[i].tHaveAddAdmin then
                        addAdminNode:loadTexture("remodel_tea_c.png",ccui.TextureResType.plistType)
                    else
                        addAdminNode:loadTexture("remodel_tea_x.png",ccui.TextureResType.plistType)
                    end
                end

                local levelUpNode = ccui.Helper:seekWidgetByName(btnLevel,"_KW_SUPPORT_LEVELUP")
                if levelUpNode then
                    if self._createConditionData[i].tHaveLevelUp then
                        levelUpNode:loadTexture("remodel_tea_c.png",ccui.TextureResType.plistType)
                    else
                        levelUpNode:loadTexture("remodel_tea_x.png",ccui.TextureResType.plistType)
                    end
                end

                local tableNumNode = ccui.Helper:seekWidgetByName(btnLevel,"_KW_SUPPORT_TABLE")
                if tableNumNode then
                    tableNumNode:setString(self._createConditionData[i].tTableNum)
                end

                local costTypeNumNode = ccui.Helper:seekWidgetByName(btnLevel,"_KW_SUPPORT_COST")
                if costTypeNumNode then
                    costTypeNumNode:setString(self._createConditionData[i].tCostTypeNum .. "种")
                end

                local propNumLimitNode = ccui.Helper:seekWidgetByName(btnLevel,"_KW_SUPPORT_PROP")
                if propNumLimitNode then
                    propNumLimitNode:setString(self._createConditionData[i].tHavePropNumLimit and "是" or "否")
                end
            end
        end
    end
    local setupConfig = TeaHouse.manager.configManager.SetupConfig
    if setupConfig.IsOpenAdjustableTeaLevel then
        if not setupConfig.IsOpenLevel1 then
            self._coverLevel1:setVisible(true)
        end
        if not setupConfig.IsOpenLevel2 then
            self._coverLevel2:setVisible(true)
        end
        if not setupConfig.IsOpenLevel3 then
            self._coverLevel3:setVisible(true)
        end
    end
end

return TeaHouseRemodelChoiceViewa7