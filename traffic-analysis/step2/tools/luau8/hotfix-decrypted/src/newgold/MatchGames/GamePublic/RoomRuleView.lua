local _M = class("RoomRuleView",  cc.load("mvc").ViewBase)

--csb文件
_M.RESOURCE_FILENAME = "RoomRuleView.csb"

--节点绑定及事件
_M.RESOURCE_BINDING = {
["Panel_content/btn_close"] = {
    varname = "btnClose",
    events={
        {
            event="click", method="on_btn_click"}
        }
    },

    ["Panel_content/Node_rule"] = {
        varname="nodeRule",
    },
    
    ["Panel_content/Panel_ex_rule"] = {
        varname="panelRuleEx",
    },
}

function _M:ctor(params)
    _M.super.ctor(self, params)
    
    local mainRule = params.mainRule
    self.mainRule = mainRule
    
    self.tableID = params and params.vipTableId
    
    self:showWnfa(mainRule, 0, params.minorGamePlayRuleList, params.peopleNum, params.totalHandNum)
    
    self:initExRule()
    self:updateExRuleAttr(params.minorGamePlayRuleList)
end

function _M:initExRule()
    local exNode = self.panelRuleEx

    self.realTimeVoiceBtn = self:findChildWithName(exNode,"realTimeVoice")
    self.realTimeVoiceBtn.state  = false
    self.realTimeVoiceBtn:getChildByName("Image_sel"):setVisible(self.realTimeVoiceBtn.state)
    self.realTimeVoiceBtn:onClick(handler(self,self.ConfigrealTimeVoiceCallBack))

    self.sameIpLimitBtn = self:findChildWithName(exNode,"sameIpLimit")
    self.sameIpLimitBtn.state  = false
    self.sameIpLimitBtn:getChildByName("Image_sel"):setVisible(self.sameIpLimitBtn.state)
    self.sameIpLimitBtn:onClick(handler(self,self.ConfigSameIpLimitCallBack))
    local txtDesc = self.realTimeVoiceBtn:getChildByName("txtDesc")
    txtDesc:setString("实时语音")

    self.gpsLimitBtn = self:findChildWithName(exNode,"gpsLimit")
    self.gpsLimitBtn.state  = false
    self.gpsLimitBtn:getChildByName("Image_sel"):setVisible(self.gpsLimitBtn.state)
    self.gpsLimitBtn:onClick(handler(self,self.ConfiggpsLimitoiceCallBack))
    self.gpsLimitBtn:getChildByName("txtDesc"):setString("强制定位")

    self.gpsLimit300Btn = self:findChildWithName(exNode,"gpsLimit300")
    self.gpsLimit300Btn.state  = false
    self.gpsLimit300Btn:getChildByName("Image_sel"):setVisible(self.gpsLimit300Btn.state)
    self.gpsLimit300Btn:onClick(handler(self,self.ConfiggpsLimit300oiceCallBack))
    self.gpsLimit300Btn:getChildByName("txtDesc"):setString("")
    self.gpsLimit300Btn:setVisible(false)
    self.gpsLimit300Btn.specialType = true

    local panel_distance = self:findChildWithName(self.gpsLimit300Btn,"Panel_distance")
    local btn_addDistance = self:findChildWithName(panel_distance,"Button_add")
    btn_addDistance:onClick(handler(self,self.addDistance))
    local btn_lessDistance = self:findChildWithName(panel_distance,"Button_less")
    btn_lessDistance:onClick(handler(self,self.lessDistance))
    self.textDistance = self:findChildWithName(panel_distance,"texDis")
    local distance = g_gameGlobal:getNotEnterDistance()-10000  
    self.textDistance:setString(distance)

    -- self.huDongLimitBtn = self:findChildWithName(exNode,"hudongLimit")
    -- self.huDongLimitBtn.state  = false
    -- self.huDongLimitBtn:getChildByName("Image_sel"):setVisible(self.huDongLimitBtn.state)
    -- self.huDongLimitBtn:onClick(handler(self,self.ConfiggpsLimiHDCallBack))
    -- self.huDongLimitBtn:getChildByName("txtDesc"):setString("禁止互动")

    self.voidceLimitBtn = self:findChildWithName(exNode,"voiceLimit")
    self.voidceLimitBtn.state  = false
    self.voidceLimitBtn:getChildByName("Image_sel"):setVisible(self.voidceLimitBtn.state)
    self.voidceLimitBtn:onClick(handler(self,self.ConfigForbidVoiceCallBack))
    self.voidceLimitBtn:getChildByName("txtDesc"):setString("禁止语音")

    self.textLimitBtn = self:findChildWithName(exNode,"textLimit")
    self.textLimitBtn.state  = false
    self.textLimitBtn:getChildByName("Image_sel"):setVisible(self.textLimitBtn.state)
    self.textLimitBtn:onClick(handler(self,self.ConfigForbidTextCallBack))
    self.textLimitBtn:getChildByName("txtDesc"):setString("禁止文字")
end

function _M:updateExRuleAttr(wanfa)

    if wanfa and next(wanfa) == nil then 
        return 
    end 

    self.realTimeVoiceBtn.state = g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_REAL_TIME_SPEECH) 
    self.sameIpLimitBtn.state = g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_SAME_IP_LIMIT) 
    self.gpsLimitBtn.state = g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_LOCATION) 
    self.gpsLimit300Btn.state = g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_LESS_300_LOCATION) 
    --禁止互动
    --self.huDongLimitBtn.state = g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_NO_INTERACTION) 
    --禁止语音
    self.voidceLimitBtn.state = g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_VOICE) 
    self.textLimitBtn.state = g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_TEXT) 

    self.realTimeVoiceBtn:getChildByName("Image_sel"):setVisible(self.realTimeVoiceBtn.state)
    self.sameIpLimitBtn:getChildByName("Image_sel"):setVisible(self.sameIpLimitBtn.state)
    self.gpsLimitBtn:getChildByName("Image_sel"):setVisible(self.gpsLimitBtn.state)
    self.gpsLimit300Btn:getChildByName("Image_sel"):setVisible(self.gpsLimit300Btn.state)
    self.gpsLimit300Btn:setVisible(self.gpsLimitBtn.state)
    --self.huDongLimitBtn:getChildByName("Image_sel"):setVisible(self.huDongLimitBtn.state)
    --以前的老玩法可能还是勾选的禁止互动
    if g_gameGlobal:isHasMinorRule(wanfa,g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_NO_INTERACTION) then
        self.voidceLimitBtn:getChildByName("Image_sel"):setVisible(true)
        self.textLimitBtn:getChildByName("Image_sel"):setVisible(true)
        self.voidceLimitBtn.state = true
        self.textLimitBtn.state = true
    else
        self.voidceLimitBtn:getChildByName("Image_sel"):setVisible(self.voidceLimitBtn.state)
        self.textLimitBtn:getChildByName("Image_sel"):setVisible(self.textLimitBtn.state)
    end
end 

--function _M:genWanfaInfo(info)
--    return {}
--end

function _M:on_btn_click(sender)
    if sender == self.btnClose then
        self:removeSelf()
    end
end


function _M:createGameCreationView(mainRule, wanfaInfo, updateWanfa)
    local configs = self:getCreateRoomConfig()
    local key = "GameCreationOptionsSave_" .. mainRule
    local sMainRule = g_MainRuleLtoSMappingTable[mainRule]
    local initConfigData = {
        localConfigData = g_gameGlobal:checkLocalConfigDataMustOneMinor(mainRule, configs.parameter[key]),
        --isFree = gameBtn.isFree,
        --isNew = gameBtn.isNew,
        
        jushuSet = g_gameGlobal:getVipCostInfo(sMainRule).jushuSet,
        diamondCost = g_gameGlobal:getVipCostInfo(sMainRule).diamondCost,
        diamondCostAA = g_gameGlobal:getVipCostInfo(sMainRule).diamondCostAA,
        limitScore = g_gameGlobal:getVipCostInfo(sMainRule).limitScore,
        
        wanfaDescInfoTable = wanfaInfo,
        -- wanfaItemTouchListener = handler(self, self.wanfaItemTouchCall)
    }
    
    if g_GameTuoGuan[mainRule] and next(initConfigData.localConfigData) ~= nil then
        local tuoGuanTime = g_gameGlobal:getTuoGuanTimeFromMiniRule(mainRule,updateWanfa)
        --tuoGuanTime = g_gameGlobal:productTuoGuanTimeNum(mainRule,tuoGuanTime)
        local miniRule = initConfigData.localConfigData.wanfa[1]
        g_gameGlobal:getTuoGuanTimeAddConstant(miniRule,tuoGuanTime)
    end
    
    local creationView = require(g_GameCreationViewTable[mainRule]):create(initConfigData)
    creationView:setAnchorPoint(cc.p(0,0))
    creationView:setIsRealTimeVoiceSelected(configs.parameter[key].isRealTimeVoiceSelected)
    
    -- if self.huPaiTishiSelect:isVisible() then
    if configs.parameter[key].isHupaiTishiSelected == nil then
        --默认不勾
        configs.parameter[key].isHupaiTishiSelected = false
    end
    creationView:setIsHupaiTishiSelected(configs.parameter[key].isHupaiTishiSelected)
    
    -- 重设托管时间
    if g_GameTuoGuan[mainRule] and not next(initConfigData.localConfigData) then
        local tuoGuanTime = g_gameGlobal:getTuoGuanTimeFromMiniRule(mainRule, updateWanfa)
        creationView:updateTuoGuanTime(tuoGuanTime)
    end
    
    -- else
    --     creationView:setIsHupaiTishiSelected(false)
    -- end
    return creationView
end

function _M:showWnfa( mainRule,index,wanfa ,people,jushu)
--    self.listView_config_wf:removeAllChildren()
    local pdkData = {}
    for i,v in ipairs(g_WanfaCreateTable) do
        if v[1] and v[1][1] and v[1][1][1] == mainRule then
            pdkData = clone(v)
            break
        end
    end
    
    local  creationView = self:createGameCreationView(mainRule, pdkData,wanfa)
    if wanfa  then
        
        -- 跑得快自动准备勾选项值取反
        local t_wanfa = nil
        if g_gameGlobal:isAutoReadyInRule(mainRule) then
            
            t_wanfa = clone(wanfa)
            -- 跑得快自动开房选项值，取反
            local ruleFound = false
            for k, v in ipairs(t_wanfa) do
                if v == g_gameConstant.GAME_SUB_RULE_AUTO_READY then
                    table.remove(t_wanfa, k)
                    ruleFound = true
                    break
                end
            end
            
            if not ruleFound then
                self:safeInsertRule(t_wanfa, g_gameConstant.GAME_SUB_RULE_AUTO_READY)
            end
            -----
        end
        
        creationView:initWithTableData(mainRule, t_wanfa or wanfa, people or nil,jushu or nil)
    end
    
    
    self.nodeRule:addChild(creationView)
    
--    local viewSize = creationView:getContentSize();
    
--    local size = cc.size(830, 500)--self.listView_config_wf:getBoundingBox()
  --  ResourceNode:setConteneSize(size)
    local ResourceNode = creationView:getResourceNode_()
    local viewSize = ResourceNode:getContentSize()
--    ResourceNode:setContentSize(size)
    ccui.Helper:doLayout(ResourceNode)
    
    creationView:setAnchorPoint(cc.p(0.5, 1))
    creationView:setPosition(cc.p(- viewSize.width * 0.5, -viewSize.height))
    
    
    creationView.wanfaTouchEvent = function (_inst, event)
        return false
    end
--    creationView:setPosition(cc.p(-500, -500))
    
    -- 金币场移除局数显示.
    if not self.tableID or self.tableID <= 0 then
        self:removeJushu(creationView)
    end
    
    self:pushBackExRule(creationView)
    
    self:disableTouchs(creationView)
end

-- 金币场需要移除局数显示
function _M:removeJushu(view)
    
    local node = view.resourceNode_
    
    local scrollView = node:getChildByName("ScrollView_1")
    local innerContentSize = scrollView:getInnerContainerSize()
--    scrollView:addChild(self.panelRuleEx)
--    self.panelRuleEx:release()
--    scrollView:setInnerContainerSize(cc.size(innerContentSize.width, innerContentSize.height + ruleExSize.height + 20))
    
--    self.panelRuleEx:setPosition(cc.p(135, ruleExSize.height))
    
    local origPanel = scrollView:getChildByName("panel")
    local jushuPanel = origPanel:getChildByName("jushuPanel")
    local jushuPanelSize = jushuPanel:getContentSize()
    local difenPanel = origPanel:getChildByName("Panel_fen")
    local difenPanelSize = difenPanel:getContentSize()
    jushuPanel:setVisible(false)
    difenPanel:setVisible(false)
    scrollView:setInnerContainerSize(cc.size(innerContentSize.width, innerContentSize.height - jushuPanelSize.height-difenPanelSize.height))
end

function _M:disableTouchs(view)
    local node = view.resourceNode_
    
    local scrollView = node:getChildByName("ScrollView_1")
    local innerContentSize = scrollView:getInnerContainerSize()
    
    local touchClip = ccui.Layout:create()
    touchClip:setContentSize(innerContentSize)
--    touchClip:setSwallowsTouches(true)
    touchClip:setTouchEnabled(true)
    touchClip:onTouch(function(ref, eventType)
        return false
    end)
    touchClip:setAnchorPoint(0, 1)
    
--    local scrollViewSize = scrollView:getContentSize()
    scrollView:addChild(touchClip)
    touchClip:setPosition(cc.p(0, innerContentSize.height))
end

function _M:pushBackExRule(view)
    local ruleExSize = self.panelRuleEx:getContentSize()
    self.panelRuleEx:retain()
    self.panelRuleEx:removeFromParent()
    
    local node = view.resourceNode_
    
    local scrollView = node:getChildByName("ScrollView_1")
    local innerContentSize = scrollView:getInnerContainerSize()
    scrollView:addChild(self.panelRuleEx)
    self.panelRuleEx:release()
    scrollView:setInnerContainerSize(cc.size(innerContentSize.width, innerContentSize.height + ruleExSize.height + 20))
    
    self.panelRuleEx:setPosition(cc.p(135, ruleExSize.height))
    
    local origPanel = scrollView:getChildByName("panel")
    if not tolua.isnull(origPanel) then
        local origPos = cc.p(origPanel:getPosition())
        origPanel:setPosition(cc.p(origPos.x, origPos.y + ruleExSize.height + 20))
    end
end

function _M:getCreateRoomConfig()
    local config = nil
    
    local version = tostring(0)
    local gameVersion = version .. "_vipRoomConfig"
    config = g_UserDataTable[gameVersion]
    
    return self:arrangeConfigData(config)
end

function _M:arrangeConfigData(config)
    if config == nil then
        config = {}
    end
    
    if config.parameter == nil then
        config.parameter = {}
    end
    
    local formatParameter = {}
    setmetatable(formatParameter, { __index = function () return {} end })
    for k,v in pairs(config.parameter) do
        if type(k) == "number" then
            local mainRule = nil
            if g_WanfaCreateTable[k] and g_WanfaCreateTable[k][1] and g_WanfaCreateTable[k][1][1] then
                mainRule = g_WanfaCreateTable[k][1][1][1]
            end
            
            local gameCreationOptionsSaveKey = "GameCreationOptionsSave_".. tostring(mainRule)
            if mainRule ~= nil and config.parameter[gameCreationOptionsSaveKey] == nil then
                formatParameter[gameCreationOptionsSaveKey] = v
            end
        else
            formatParameter[k] = v
        end
    end
    
    
    local mainRule = config.selectVipGameMainRule
    if config.selectVipRoomIdx ~= nil and mainRule == nil then
        if g_WanfaCreateTable[config.selectVipRoomIdx] and g_WanfaCreateTable[config.selectVipRoomIdx][1] and g_WanfaCreateTable[config.selectVipRoomIdx][1][1] then
            mainRule = g_WanfaCreateTable[config.selectVipRoomIdx][1][1][1]
        end
    end
    
    return {parameter = formatParameter, selectVipGameMainRule = mainRule}
end


-- 若ruleList 不存在ruleVal才插入
function _M:safeInsertRule(ruleList, ruleVal)
    if not ruleList or type(ruleList) ~= "table" or not ruleVal or type(ruleVal) ~= "number" then
        print("param err.\n" .. debug.traceback())
        return
    end
    
    local found = false
    
    for k, v in ipairs(ruleList) do
        if v == ruleVal then
            return
        end
    end
    
    table.insert(ruleList, ruleVal)
end

return _M�<