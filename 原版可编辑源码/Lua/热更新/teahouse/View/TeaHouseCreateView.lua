---@class TeaHouseCreateView : View
local TeaHouseCreateView = class("TeaHouseCreateView", TeaHouse.View)

TeaHouseCreateView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseSetupView.csb",
    binding = {
        ["_KW_BTN_SELECT_BASE"] = { tag = "_KW_BTN_SELECT_BASE", name = "_btnSelectBase", class = "btn" ,events = "onBtnEventBase" },
        ["_KW_BTN_SELECT_PLAYMODE"] = { tag = "_KW_BTN_SELECT_PLAYMODE", name = "_btnSelectPlayMode", class = "btn" ,events = "onBtnEventPlayMode" },
        --基础设置
        ["_KW_NODE_BASE"] = { tag = "_KW_NODE_BASE", name = "_nodeBase", class = "node" },

        ["_KW_NODE_TEAHOUSE_NOTES"] = { tag = "_KW_NODE_TEAHOUSE_NOTES", name = "_nodeNotes", class = "node" },
        ["_KW_TEXTFIELD_TEAHOUSE_NOTES"] = { tag = "_KW_TEXTFIELD_TEAHOUSE_NOTES", name = "_textFieldNotes", class = "textField" },
        ["_KW_TEXT_TEAHOUSE_NOTES"] = { tag = "_KW_TEXT_TEAHOUSE_NOTES", name = "_textNotes", class = "text" },

        ["_KW_NODE_TEAHOUSE_MODE"] = { tag = "_KW_NODE_TEAHOUSE_MODE", name = "_nodeModeSelect", class = "node" },
        ["_KW_TEXT_TEAHOUSE_MODE"] = { tag = "_KW_TEXT_TEAHOUSE_MODE", name = "_textModeSelect", class = "text" },
        ["_KW_IMG_TEAHOUSE_MODE_SELECT_BG"] = { tag = "_KW_IMG_TEAHOUSE_MODE_SELECT_BG", name = "_imgModeSelectBg", class = "img" },
        ["_KW_PANEL_TEAHOUSE_MODE_SELECT"] = { tag = "_KW_PANEL_TEAHOUSE_MODE_SELECT", name = "_panelModeSelectBtns", class = "panel" },
        ["_KW_BTN_TEAHOUSE_MODE_GUANZHU"] = { tag = "_KW_BTN_TEAHOUSE_MODE_GUANZHU", name = "_btnModeGuanzhu", class = "btn", events = "onBtnEventModeGuanzhu" },
        ["_KW_BTN_TEAHOUSE_MODE_YUFU"] = { tag = "_KW_BTN_TEAHOUSE_MODE_YUFU", name = "_btnModeYufu", class = "btn", events = "onBtnEventModeYufu" },
        ["_KW_BTN_TEAHOUSE_MODE_LIUTONG"] = { tag = "_KW_BTN_TEAHOUSE_MODE_LIUTONG", name = "_btnModeLiutong", class = "btn", events = "onBtnEventModeLiutong" },
        ["_KW_BTN_TEAHOUSE_MODE_FANGFEI"] = { tag = "_KW_BTN_TEAHOUSE_MODE_FANGFEI", name = "_btnModeFangFei", class = "btn", events = "onBtnEventModeFangFei" },
        ["_KW_BTN_TEAHOUSE_MODE_LOBBY"] = { tag = "_KW_BTN_TEAHOUSE_MODE_LOBBY", name = "_btnModeLobby", class = "btn", events = "onBtnEventModeLobby" },
        ["_KW_BTN_TEAHOUSE_MODE_SHAOXINGQUANZHU"] = { tag = "_KW_BTN_TEAHOUSE_MODE_SHAOXINGQUANZHU", name = "_btnModeShaoXingQuanzhu", class = "btn", events = "onBtnEventModeShaoXingQuanzhu" },
        ["_KW_CHECKBOX_TEAHOUSE_MODE_SELECT"] = { tag = "_KW_CHECKBOX_TEAHOUSE_MODE_SELECT", name = "_checkBoxModeSelect", class = "checkBox" },

        ["_KW_NODE_EVERYDAY_COST_LIMIT"] = { tag = "_KW_NODE_EVERYDAY_COST_LIMIT", name = "_nodeEveryDayLimit", class = "node" },
        ["_KW_TEXTFIELD_EVERYDAY_COST_LIMIT"] = { tag = "_KW_TEXTFIELD_EVERYDAY_COST_LIMIT", name = "_textFieldEveryDayCostLimit", class = "textField" },
        ["_KW_BG_EVERYDAY_COST_LIMIT"] = { tag = "_KW_BG_EVERYDAY_COST_LIMIT", name = "_bgEveryDayCostLimit", class = "img" },
        ["_KW_TEXT_EVERYDAY_COST_LIMIT"] = { tag = "_KW_TEXT_EVERYDAY_COST_LIMIT", name = "_textEveryDayCostLimit", class = "text" },

        -- ["_KW_NODE_NEWPLAYER_COST_LIMIT"] = {tag="_KW_NODE_NEWPLAYER_COST_LIMIT", name="_nodeNewPlayerLimit", class="node"},
        ["_KW_NODE_TEAHOUSE_RECHARGE"] = { tag = "_KW_NODE_TEAHOUSE_RECHARGE", name = "_nodeRecharge", class = "node" },
        ["_KW_TEXTFIELD_TEAHOUSE_RECHARGE"] = { tag = "_KW_TEXTFIELD_TEAHOUSE_RECHARGE", name = "_textFieldRecharge", class = "textField" },
        ["_KW_BG_TEAHOUSE_RECHARGE"] = { tag = "_KW_BG_TEAHOUSE_RECHARGE", name = "_bgRecharge", class = "img" },
        ["_KW_TEXT_TEAHOUSE_RECHARGE"] = { tag = "_KW_TEXT_TEAHOUSE_RECHARGE", name = "_textRecharge", class = "text" },

        ["_KW_NODE_OTHER_SETUP"] = { tag = "_KW_NODE_OTHER_SETUP", name = "_nodeOtherSetup", class = "node" },

        ["_KW_NODE_STRANGER_CAN_SEE"] = { tag = "_KW_PANEL_STRANGER_CAN_SEE", name = "_nodeStrangerCanSee", class = "node" },
        ["_KW_CHECKBOX_STRANGER_CAN_SEE"] = { tag = "_KW_CHECKBOX_STRANGER_CAN_SEE", name = "_checkBoxStrangerCanSee", class = "checkBox" },

        ["_KW_NODE_AUTO_ADD_CARD"] = { tag = "_KW_PANEL_AUTO_ADD_CARD", name = "_nodeAutoAddRoomCard", class = "node" },
        ["_KW_CHECKBOX_AUTO_ADD_CARD"] = { tag = "_KW_CHECKBOX_AUTO_ADD_CARD", name = "_checkBoxAutoAddRoomCard", class = "checkBox" },
        ["_KW_IMG_AUTO_ADD_CARD_WHAT_BG"] = { tag = "_KW_IMG_AUTO_ADD_CARD_WHAT_BG", name = "_imgAutoAddRoomCardWhat", class = "img" },
        ["_KW_TEXT_AUTO_ADD_CARD_WHAT"] = { tag = "_KW_TEXT_AUTO_ADD_CARD_WHAT", name = "_textAutoAddRoomCardWhat", class = "text" },
        ["_KW_BTN_AUTO_ADD_CARD_WHAT"] = { tag = "_KW_BTN_AUTO_ADD_CARD_WHAT", name = "_btnAutoAddRoomCardWhat", class = "btn", events = "onBtnEventAutoAddRoomCardWhat" },

        ["_KW_BTN_COST_TYPE_SELECT"] = { tag = "_KW_BTN_COST_TYPE_SELECT", name = "_btnCostTypeSelect", class = "btn", events = "onBtnEventCostTypeSelect" },
        ["_KW_BTN_DISSOLVE"] = { tag = "_KW_BTN_DISSOLVE", name = "_btnDissolve", class = "btn", events = "onBtnEventDissolve" },
        ["_KW_BTN_SURE"] = { tag = "_KW_BTN_SURE", name = "_btnSure", class = "btn", events = "onBtnEventSure" },
        ["_KW_BTN_CANCEL"] = { tag = "_KW_BTN_CANCEL", name = "_btnCancel", class = "btn" , events = "onBtnEventCancel"},
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onBtnEventClose" },
        ["_KW_BTN_SURE_PLAYMODE"] = { tag = "_KW_BTN_SURE_PLAYMODE", name = "_btnSurePlayMode", class = "btn", events = "onBtnEventSurePlayMode" },

        ["_KW_PANEL_SELECT_COSTTYPE"] = { tag = "_KW_PANEL_SELECT_COSTTYPE", name = "_panelCostTypeSelect", class = "panel" },
        ["_KW_BTN_COSTTYPE_CLOSE"] = { tag = "_KW_BTN_COSTTYPE_CLOSE", name = "_btnCloseCostType", class = "btn", events = "onBtnEventCloseCostType" },
        ["_KW_BTN_COSTTYPE_SURE"] = { tag = "_KW_BTN_COSTTYPE_SURE", name = "_btnCostTypeSure", class = "btn", events = "onBtnEventCostTypeSure" },
        ["_KW_CHECKBOX_COSTTYPE_ALL"] = { tag = "_KW_CHECKBOX_COSTTYPE_ALL", name = "_checkBoxCostTypeAll", class = "checkBox" },
        ["_KW_TEXT_COSTTYPE_ALL"] = { tag = "_KW_TEXT_COSTTYPE_ALL", name = "_textCostTypeAll", class = "text" },
        ["_KW_CHECKBOX_COSTTYPE_AVERAGE"] = { tag = "_KW_CHECKBOX_COSTTYPE_AVERAGE", name = "_checkBoxCostTypeAverage", class = "checkBox" },
        ["_KW_CHECKBOX_COSTTYPE_ROOMOWNER"] = { tag = "_KW_CHECKBOX_COSTTYPE_ROOMOWNER", name = "_checkBoxCostTypeRoomOwner", class = "checkBox" },
        ["_KW_TEXT_COST_TYPE_STATE"] = { tag = "_KW_TEXT_COST_TYPE_STATE", name = "_textCostTypeState", class = "text" },
        ["_KW_CHECKBOX_COST_YIKATONG"] = { tag = "_KW_CHECKBOX_COST_YIKATONG", name = "_checkBoxCostYiKaTong", class = "text" },

        --固定玩法设置
        ["_KW_NODE_PLAYMODE"] = { tag = "_KW_NODE_PLAYMODE", name = "_nodePlayMode", class = "node" },
        ["_KW_LISTVIEW_PLAYMODE"] = { tag = "_KW_LISTVIEW_PLAYMODE", name = "_listPlayMode", class = "scrollview" },

        ["_KW_TEXT_TOTAL_ROOMCARD"] = { tag = "_KW_TEXT_TOTAL_ROOMCARD", name = "_textTotalRoomCard", class = "text" },
        ["_KW_TEXT_RECHARGE_ROOMCARD"] = { tag = "_KW_TEXT_RECHARGE_ROOMCARD", name = "_textRechargeRoomCard", class = "text" },
        --转型后新增的内容(购买房卡的说明,划卡的说明)
        ["_KW_BTN_BUY_CARD_TIP"] = { tag = "_KW_BTN_BUY_CARD_TIP", name = "_buyCardTipBtn", class = "btn" ,events = "onBtnEventBuyRoomCardTip"},
        ["_KW_BTN_BUY_CARD_TIP_BG"] = { tag = "_KW_BTN_BUY_CARD_TIP_BG", name = "_buyCardTipBg", class = "img" },
        ["_KW_BTN_BUY_CARD_TIP_TEXT"] = { tag = "_KW_BTN_BUY_CARD_TIP_TEXT", name = "_buyCardTipText", class = "text" },
        ["_KW_BTN_CHARGE_CARD_TIP"] = { tag = "_KW_BTN_CHARGE_CARD_TIP", name = "_chargeCardTipBtn", class = "btn",events = "onBtnEventChargeRoomCardTip"},
        ["_KW_BTN_CHARGE_CARD_TIP_BG"] = { tag = "_KW_BTN_CHARGE_CARD_TIP_BG", name = "_chargeCardTipBg", class = "img" },
        ["_KW_BTN_CHARGE_CARD_TIP_TEXT"] = { tag = "_KW_BTN_CHARGE_CARD_TIP_TEXT", name = "_chargeCardTipText", class = "text" },
        --是否消耗房卡
        ["_KW_TEXT_NEED_COST_ROOMCARD"] = { tag = "_KW_TEXT_NEED_COST_ROOMCARD", name = "_textNeedCostRoomCard", class = "text" },
        --自动补卡
        ["_KW_NODE_LACK_CARD_NOTIFY"] = { tag = "_KW_NODE_LACK_CARD_NOTIFY", name = "_nodeLackCardNotify", class = "node" },
        ["_KW_AUTO_ADD_CARD_HISTORY_TIPS"] = { tag = "_KW_AUTO_ADD_CARD_HISTORY_TIPS", name = "_textAutoAddCardHistoryTips", class = "text" },
        ["_KW_CHECKBOX_LACK_CARD_NOTIFY"] = { tag = "_KW_CHECKBOX_LACK_CARD_NOTIFY", name = "_checkBoxLackCardNotify", class = "checkBox" },
        ["_KW_PANEL_AUTO_ADD_NUM"] = { tag = "_KW_PANEL_AUTO_ADD_NUM", name = "_panelAutoAddNum", class = "panel" },
        ["_KW_PANEL_NOTIFY_NUM"] = { tag = "_KW_PANEL_NOTIFY_NUM", name = "_panelNotifyNum", class = "panel" },
        ["_KW_BTN_LACK_CARD_WHAT"] = { tag = "_KW_BTN_LACK_CARD_WHAT", name = "_btnLackCardWhat", class = "btn", events = "onBtnEventLackCardWhat" },
        ["_KW_IMG_LACK_CARD_WHAT_BG"] = { tag = "_KW_IMG_LACK_CARD_WHAT_BG", name = "_imgLackCardWhat", class = "img" },
        ["_KW_TEXT_LACK_CARD_WHAT"] = { tag = "_KW_TEXT_LACK_CARD_WHAT", name = "_textLackCardWhat", class = "text" },
        ["_KW_TEXT_AUTO_ADD_CARD_SELECTED_ERR"] = { tag = "_KW_TEXT_AUTO_ADD_CARD_SELECTED_ERR", name = "_textErrSelectAutoAdd", class = "text" },
        ["_KW_TEXT_LACK_CARD_SELECTED_ERR"] = { tag = "_KW_TEXT_LACK_CARD_SELECTED_ERR", name = "_textErrSelectLackNotify", class = "text" },
    }
}

TeaHouseCreateView.KW_TEAHOUSE_MODE = {
    GUANZHU = 1, --后项支付包含支付方式【0,24】
    YUFU = 2, --前项支付包含支付方式【0,999】
    LIUTONG = 3,
    FANGFEI = 4,--包含支付方式【20,21】
    LOBBY = 5,--包含支付方式【22,23】
    SHAOXINGQUANZHU = 6,--后项支付,包含支付方式【1,20】(绍兴转转型人人前的线上模式,为了兼容2022/01/14新增)
}

TeaHouseCreateView.KW_MODE_TEXT_STR = {
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU] = "领队模式",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU] = "预付模式",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI] = "其他模式",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG] = "比赛场流通",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY] = "扣玩家卡模式", --扣玩家大厅卡(包含购买卡和赠送卡)
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU] = "老版领队模式" 
}

--paytype为0时，不同模式下叫法不同
TeaHouseCreateView.KW_COSTMODE_GUANZHU_TEXT_STR = {
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU] = "冠军消耗",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU] = "冠军消耗",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG] = "",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI] = "冠军消耗",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY] = "冠军消耗",
    [TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU] = "冠军消耗"
}

local KW_TEXTFIELD_FONT_COLOR = cc.c3b(255,250,235) --输入框字符颜色
local KW_TEXT_COLOR_ON_GRAYBG = cc.c3b(255,255,255)

local KW_IMG_NAME_INPUT_BG_NORMAL = "teahouse_setup_input_bg1.png"
local KW_IMG_NAME_INPUT_BG_GRAY = "teahouse_setup_input_bg2.png"

local KW_TEXT_STR_EVERYDAY_COSTLIMIT_GRAY = "仅领队模式可用"
local KW_TEXT_STR_AUTO_ADD_ROOMCARD = "当比赛场房卡数量少于%d后，从用户后台自动补入%d数量的房卡"
local KW_TEXT_STR_RECHARGE_GRAY = "当前模式不可用"

TeaHouseCreateView.KW_DEFAULT_EVERYDAY_COSTLIMIT = 888888
TeaHouseCreateView.KW_DEFAULT_RECHARGE = 0

TeaHouseCreateView.KW_SELECT_SETUP_NODE_TAG = {
    BASE = 1,
    PLAYMODE = 2
}

function TeaHouseCreateView:ctor(data)
    self:parseParams(data)
    self:initData()
    TeaHouseCreateView.super.ctor(self)
    self:initView()
    self:reqData()
end

function TeaHouseCreateView:initData()
    self._selectTag = self.KW_SELECT_SETUP_NODE_TAG.BASE --默认选择设置面板
    self._savePayTypeData = nil
    TeaHouse.manager.teahouseSetup:openTeaHouseCreate()
end

function TeaHouseCreateView:reqData()
    TeaHouse.manager.teahouseSetup:reqPlayerTeaHouseCost()
    --没有转型的地区需要请求创建比赛场人员的风信后台卡数量
    if (TeaHouse.BridgeData.isRemodelArea() or TeaHouse.BridgeData.isNotTeaAgentMode()) then
        self._textTotalRoomCard:setString("购买房卡总库存：" .. TeaHouse.BridgeData.getRoomCard())
    else
        TeaHouse.manager.teahouseSetup:reqAgentPropCnt()
    end
end

function TeaHouseCreateView:initView()
    self:initNodeTeaHouseNote()         --比赛场备注
    self:initNodeEveryDayCostLimit()    --每日消耗上限
    self:initNodeRecharge()             --比赛场充值
    self:initNodeOther()                --其他设置
    self:initNodeBase()
    self:initNodePlayMode()             --固定玩法
    self:initBtnDissolve()              --解散按钮
    self:initNodeModeSelect()           --比赛场模式
    self:initCostTypePanel()
    self:initRemodelCreateViewExtraUI()
    self:updateCostTypeSelectState()
    self:selectShowNode(self._selectTag)
end

function TeaHouseCreateView:onEnter()
    self:initEvents()
end

function TeaHouseCreateView:initEvents()
    local teahouseSetup = TeaHouse.manager.teahouseSetup
    self._teahouseSetupListener = self:createListener(teahouseSetup)
    self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_AGENTPROPCNT, handler(self, self.onUpdateAgentPropCnt))
    self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_CREATE_TEAHOUSE_ROOM, handler(self, self.onBtnEventSureCreate))
end

--比赛场模式选择节点初始化
function TeaHouseCreateView:initNodeModeSelect()
    self._checkBoxModeSelect:addEventListener(handler(self, self.onCheckBoxEventModeSelect))
    self._textModeSelect:setString("")
    self._textModeSelect:setColor(KW_TEXTFIELD_FONT_COLOR)
    self:closeModeSelectBtns()
    self._nodeModeSelect:setVisible(true)

    local startPosY = -5
    local singleHeight = 65
    local totalShowCount = 0
    local firstMode = nil
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    SetupConfig = self:filterModeRemodelTeaHouse(SetupConfig)
    if SetupConfig.IsOpenModeGuanZhu then
        if not firstMode then
            firstMode = TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU
        end
        self._btnModeGuanzhu:setVisible(true)
        self._btnModeGuanzhu:setPositionY(startPosY - singleHeight*totalShowCount)
        totalShowCount = totalShowCount + 1
    else
        self._btnModeGuanzhu:setVisible(false)
    end

    if SetupConfig.IsOpenModeYuFu then
        if not firstMode then
            firstMode = TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU
        end
        self._btnModeYufu:setVisible(true)
        self._btnModeYufu:setPositionY(startPosY - singleHeight*totalShowCount)
        totalShowCount = totalShowCount + 1
    else
        self._btnModeYufu:setVisible(false)
    end

    if SetupConfig.IsOpenModeLiuTong then
        if not firstMode then
            firstMode = TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG
        end
        self._btnModeLiutong:setVisible(true)
        self._btnModeLiutong:setPositionY(startPosY - singleHeight*totalShowCount)
        totalShowCount = totalShowCount + 1
    else
        self._btnModeLiutong:setVisible(false)
    end

    if SetupConfig.IsOpenModeFangFei then
        if not firstMode then
            firstMode = TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI
        end
        self._btnModeFangFei:setVisible(true)
        self._btnModeFangFei:setPositionY(startPosY - singleHeight*totalShowCount)
        totalShowCount = totalShowCount + 1
    else
        self._btnModeFangFei:setVisible(false)
    end

    if SetupConfig.IsOpenModeLobby then
        if not firstMode then
            firstMode = TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY
        end
        self._btnModeLobby:setVisible(true)
        self._btnModeLobby:setPositionY(startPosY - singleHeight*totalShowCount)
        totalShowCount = totalShowCount + 1
    else
        self._btnModeLobby:setVisible(false)
    end
    --# TODO 绍兴人人上线的时候需要修改这里
    if SetupConfig.IsOpenModeShaoXingQuanZhu then
        if not firstMode then
            firstMode = TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU
        end
        self._btnModeShaoXingQuanzhu:setVisible(true)
        self._btnModeShaoXingQuanzhu:setPositionY(startPosY - singleHeight*totalShowCount)
        totalShowCount = totalShowCount + 1
    else
        self._btnModeShaoXingQuanzhu:setVisible(false)
    end

    local oldSize = self._imgModeSelectBg:getContentSize()
    self._imgModeSelectBg:setContentSize(cc.size(oldSize.width,singleHeight*totalShowCount-startPosY*2))

    if firstMode ~= nil then
        self:selectMode(firstMode)
    end
end

function TeaHouseCreateView:updateCostModeSelectNode()
    
end

--比赛场备注节点初始化
function TeaHouseCreateView:initNodeTeaHouseNote()
    self:setTextFieldAlignmentCenter(self._textFieldNotes)
    self._textFieldNotes:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
    self._textFieldNotes:registerScriptEditBoxHandler(function(eventName)
        if eventName == "changed" then
            self._textNotes:setString(self._textFieldNotes:getText())
        elseif eventName == "began" then
            self._textNotes:setVisible(false)
        elseif eventName == "ended" or eventName == "return" then
            self._textNotes:setVisible(true)
        end
    end)
    self._textNotes:setColor(KW_TEXTFIELD_FONT_COLOR)
    self._nodeNotes:setVisible(true)
end

--每日消耗上限节点初始化
function TeaHouseCreateView:initNodeEveryDayCostLimit()
    self:setTextFieldAlignmentCenter(self._textFieldEveryDayCostLimit)
    self._textFieldEveryDayCostLimit:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
    self._textFieldEveryDayCostLimit:setFontColor(KW_TEXTFIELD_FONT_COLOR)
    self._textFieldEveryDayCostLimit:registerScriptEditBoxHandler(function(eventName)
        if eventName == "changed" then
            self._textEveryDayCostLimit:setString(self._textFieldEveryDayCostLimit:getText())
        elseif eventName == "began" then
            self._textEveryDayCostLimit:setVisible(false)
        elseif eventName == "ended" or eventName == "return" then
            self._textEveryDayCostLimit:setVisible(true)
        end
    end)
    self._textEveryDayCostLimit:setString(tostring(TeaHouseCreateView.KW_DEFAULT_EVERYDAY_COSTLIMIT))
    self._textEveryDayCostLimit:setColor(KW_TEXTFIELD_FONT_COLOR)
    self._nodeEveryDayLimit:setVisible(true)
    if TeaHouse.BridgeData.isNotTeaAgentMode() then 
        self._nodeEveryDayLimit:setVisible(false)
    end
end

--比赛场充值节点初始化
function TeaHouseCreateView:initNodeRecharge()
    self:setTextFieldAlignmentCenter(self._textFieldRecharge)
    self._textFieldRecharge:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
    self._textFieldRecharge:setFontColor(KW_TEXTFIELD_FONT_COLOR)
    self._textFieldRecharge:registerScriptEditBoxHandler(function(eventName)
        if eventName == "changed" then
            self._textRecharge:setString(self._textFieldRecharge:getText())
        elseif eventName == "began" then
            self._textRecharge:setVisible(false)
        elseif eventName == "ended" or eventName == "return" then
            self._textRecharge:setVisible(true)
        end
    end)
    self._textRecharge:setText(tostring(TeaHouseCreateView.KW_DEFAULT_RECHARGE))
    self._textRecharge:setColor(KW_TEXTFIELD_FONT_COLOR)
    self._nodeRecharge:setVisible(true)
    if TeaHouse.BridgeData.isNotTeaAgentMode() then
        self._nodeRecharge:setVisible(false)
    end
end

--陌生人可见节点初始化
function TeaHouseCreateView:initNodeStrangerCanSee()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsOpenStrangerCanSee then
        self._nodeOtherSetup:setVisible(false)
        return
    end
    if not SetupConfig.IsOpenAutoAddRoomCard and not TeaHouse.BridgeData.isRemodelArea() then
        local posX, posY = self._nodeAutoAddRoomCard:getPosition()
        self._nodeOtherSetup:setPosition(posX, posY)
    end
    self._checkBoxStrangerCanSee:setSelected(true)
    self._nodeOtherSetup:setVisible(true)
end

--自动补房卡节点初始化
function TeaHouseCreateView:initNodeAutoAddRoomCard()
    self._checkBoxAutoAddRoomCard:addEventListener(handler(self, self.onCheckBoxEventAutoAddCardSelect))
    self._checkBoxLackCardNotify:addEventListener(handler(self, self.onCheckBoxEventLackCardNotifySelect))
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig    
    if not TeaHouse.BridgeData.isRemodelArea() and not SetupConfig.IsOpenAutoAddRoomCard then
        self._nodeAutoAddRoomCard:setVisible(false)
        self._nodeLackCardNotify:setVisible(false)
        return
    end
    -- 舟山地区原有自动补卡功能兼容
    if not TeaHouse.BridgeData.isRemodelArea() then
        self._nodeLackCardNotify:setVisible(false)
    end

    local selfSelectNode = {self._panelNotifyNum, self._panelAutoAddNum}
    for i = 1, #selfSelectNode do
        if selfSelectNode[i] then
            for k, v in pairs(selfSelectNode[i]:getChildren()) do
                v:addEventListener(handler(self, self.onCheckBoxEventAutoNumSelect))
                if k == 1 then
                    self:onCheckBoxEventAutoNumSelect(v, ccui.CheckBoxEventType.selected)
                end
            end
        end
    end
    self:initAutoInput()
end

function TeaHouseCreateView:initAutoInput()
    local inputNodes = {}
    table.insert(inputNodes, self._panelAutoAddNum)
    table.insert(inputNodes, self._panelNotifyNum)
    for _, v in pairs(inputNodes) do
        local textFieldNode = ccui.Helper:seekWidgetByName(v, "_KW_TEXTFIELD_AUTO_DEFINE")
        local textNode
        if textFieldNode then 
            textNode = ccui.Helper:seekWidgetByName(textFieldNode:getParent(), "KW_TEXT_AUTO_NUM")
        end
        if textFieldNode and textNode then
            self:setTextFieldAlignmentCenter(textFieldNode)
            textFieldNode:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
            textFieldNode:registerScriptEditBoxHandler(function(eventName)
                if eventName == "changed" then
                    textNode:setString(textFieldNode:getText())
                elseif eventName == "began" then
                    self:selectAutoGeer(textFieldNode:getParent())
                    textNode:setVisible(false)
                elseif eventName == "ended" or eventName == "return" then
                    textNode:setVisible(true)
                end
            end)
            textNode:setColor(KW_TEXTFIELD_FONT_COLOR)
        end
    end
end

function TeaHouseCreateView:initNodeOther()
    self:initNodeStrangerCanSee()       --陌生人可见
    self:initNodeAutoAddRoomCard()      --自动补房卡
end

function TeaHouseCreateView:initBtnDissolve()
    self._btnDissolve:setVisible(false)
end

function TeaHouseCreateView:initNodeBase()
    self._btnSelectBase:setVisible(true)
end

function TeaHouseCreateView:initNodePlayMode()
    self._btnSelectPlayMode:setVisible(false)
    self._nodePlayMode:setVisible(false)
end

function TeaHouseCreateView:initCostTypePanel()
    self._panelCostTypeSelect:setVisible(false)

    self._checkBoxCostTypeAll:setVisible(false)
    self._checkBoxCostTypeAverage:setVisible(false)
    self._checkBoxCostTypeRoomOwner:setVisible(false)
    self._checkBoxCostYiKaTong:setVisible(false)
    self._checkBoxCostYiKaTong:setSelected(false)

    self._checkBoxCostTypeAll:addEventListener(handler(self, self.onCheckBoxEventCostType))
    self._checkBoxCostTypeAverage:addEventListener(handler(self, self.onCheckBoxEventCostType))
    self._checkBoxCostTypeRoomOwner:addEventListener(handler(self, self.onCheckBoxEventCostType))

    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    self._btnCostTypeSelect:setVisible(not SetupConfig.IsFixedPayType)
    self._textCostTypeState:setVisible(not SetupConfig.IsFixedPayType)
end

function TeaHouseCreateView:setEveryDayCostLimitEnabled(enable)
    if enable then
        self._bgEveryDayCostLimit:loadTexture(KW_IMG_NAME_INPUT_BG_NORMAL, ccui.TextureResType.plistType)
        self._textFieldEveryDayCostLimit:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
        self._textFieldEveryDayCostLimit:setTouchEnabled(true)
        self._textFieldEveryDayCostLimit:setText(TeaHouseCreateView.KW_DEFAULT_EVERYDAY_COSTLIMIT)
        self._textEveryDayCostLimit:setString(TeaHouseCreateView.KW_DEFAULT_EVERYDAY_COSTLIMIT)
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

--设置充值输入框是否可以输入
function TeaHouseCreateView:setRechargeEnabled(enable)
    if enable then
        self._bgRecharge:loadTexture(KW_IMG_NAME_INPUT_BG_NORMAL, ccui.TextureResType.plistType)
        self._textFieldRecharge:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
        self._textFieldRecharge:setTouchEnabled(true)
        self._textFieldRecharge:setText("0")
        self._textRecharge:setString("0")
        self._textRecharge:setColor(KW_TEXTFIELD_FONT_COLOR)
    else
        self._bgRecharge:loadTexture(KW_IMG_NAME_INPUT_BG_GRAY, ccui.TextureResType.plistType)
        self._textFieldRecharge:setInputMode(cc.EDITBOX_INPUT_MODE_ANY)
        self._textFieldRecharge:setTouchEnabled(false)
        self._textFieldRecharge:setText("0")
        self._textRecharge:setString(KW_TEXT_STR_RECHARGE_GRAY)
        self._textRecharge:setColor(KW_TEXT_COLOR_ON_GRAYBG)
    end
end

--设置输入框文本据中显示
function TeaHouseCreateView:setTextFieldAlignmentCenter(textField)
    -- textField:setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_RIGHT)   --水平居中
    -- textField:setTextVerticalAlignment(cc.VERTICAL_TEXT_ALIGNMENT_CENTER)   --垂直居中
end

--关闭
function TeaHouseCreateView:onBtnEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_70)
end

function TeaHouseCreateView:onBtnEventBase(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectShowNode(self.KW_SELECT_SETUP_NODE_TAG.BASE)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_33)
end

function TeaHouseCreateView:onBtnEventPlayMode(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectShowNode(self.KW_SELECT_SETUP_NODE_TAG.PLAYMODE)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_44)
end

--解散比赛场
function TeaHouseCreateView:onBtnEventDissolve(send, eventType)
    
end

--消耗模式选择
function TeaHouseCreateView:onBtnEventCostTypeSelect(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:updateCostTypePanel()
    self._panelCostTypeSelect:setVisible(true)
end

function TeaHouseCreateView:onCheckBoxEventCostType(send, eventType)
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsOpenCostTypeMultiSelect then
        self._checkBoxCostTypeAll:setSelected(self._checkBoxCostTypeAll == send)
        self._checkBoxCostTypeAverage:setSelected(self._checkBoxCostTypeAverage == send)
        self._checkBoxCostTypeRoomOwner:setSelected(self._checkBoxCostTypeRoomOwner == send)
    end
    self:updateCostYiKaTong()
end

function TeaHouseCreateView:throwDate()
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU then
        if self._checkBoxCostTypeAll:isSelected() == true  then 
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_35)
        end
        if self._checkBoxCostTypeAverage:isSelected() == true then 
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_36)
        end 
    end 
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU then
        if self._checkBoxCostTypeAll:isSelected() == true  then 
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_38)
        end
        if self._checkBoxCostTypeAverage:isSelected() == true then 
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_39)
        end 
    end 
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
        if self._checkBoxCostTypeAll:isSelected() == true  then 
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_41)
        end
        if self._checkBoxCostTypeAverage:isSelected() == true then 
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_42)
        end 
    end 
end 






function TeaHouseCreateView:updateCostYiKaTong()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsOpenSelectYiKaTong then
        self._checkBoxCostYiKaTong:setVisible(false)
        return 
    end
    if self._checkBoxCostTypeAverage:isVisible() and self._checkBoxCostTypeAverage:isSelected() then
        self._checkBoxCostYiKaTong:setVisible(true)
    else
        self._checkBoxCostYiKaTong:setVisible(false)
    end
end

local KW_POS_TABLE_COSTTYPE_CHECKBOX = {
    {x = -370   , y = 120},
    {x = 80     , y = 120},
    {x = -370   , y = 0},
    {x = 80   , y = 0},
}
function TeaHouseCreateView:updateCostTypePanel()
    self._checkBoxCostTypeAll:setEnabled(true)
    self._checkBoxCostTypeAverage:setEnabled(true)
    self._checkBoxCostTypeRoomOwner:setEnabled(true)

    self._checkBoxCostTypeAll:setVisible(false)
    self._checkBoxCostTypeAverage:setVisible(false)
    self._checkBoxCostTypeRoomOwner:setVisible(false)

    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    local tempShowCheckBoxs = {}
    local tempLockCheckBoxs = {}
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU then
        self._textCostTypeAll:setString(TeaHouseCreateView.KW_COSTMODE_GUANZHU_TEXT_STR[TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU])

        if SetupConfig.IsLockGuanZhuAllCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsLockGuanZhuAverageCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAverage)
        end
        if SetupConfig.IsLockGuanZhuRoomOwnerCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeRoomOwner)
        end

        if SetupConfig.IsOpenGuanZhuAllCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsOpenGuanZhuAverageCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAverage)
        end
        if SetupConfig.IsOpenGuanZhuRoomOwnerCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeRoomOwner)
        end
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU then
        self._textCostTypeAll:setString(TeaHouseCreateView.KW_COSTMODE_GUANZHU_TEXT_STR[TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU])

        if SetupConfig.IsLockYuFuAllCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsLockYuFuAverageCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAverage)
        end
        
        if SetupConfig.IsOpenYuFuAllCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsOpenYuFuAverageCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAverage)
        end
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG then
        table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAverage)
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI then
        self._textCostTypeAll:setString(TeaHouseCreateView.KW_COSTMODE_GUANZHU_TEXT_STR[TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI])

        if SetupConfig.IsLockFangFeiAllCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsLockFangFeiAverageCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAverage)
        end
        
        if SetupConfig.IsOpenFangFeiAllCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsOpenFangFeiAverageCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAverage)
        end
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
        self._textCostTypeAll:setString(TeaHouseCreateView.KW_COSTMODE_GUANZHU_TEXT_STR[TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY])

        if SetupConfig.IsLockLobbyAllCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsLockLobbyAverageCost then
            table.insert(tempLockCheckBoxs, self._checkBoxCostTypeAverage)
        end
        
        if SetupConfig.IsOpenLobbyAllCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsOpenLobbyAverageCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAverage)
        end
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU then
        self._textCostTypeAll:setString(TeaHouseCreateView.KW_COSTMODE_GUANZHU_TEXT_STR[TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU])

        if SetupConfig.IsOpenShaoXingQuanZhuAllCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAll)
        end
        if SetupConfig.IsOpenhaoXingQuanZhuAverageCost then
            table.insert(tempShowCheckBoxs, self._checkBoxCostTypeAverage)
        end
    end

    for i, checkBox in ipairs(tempLockCheckBoxs) do
        checkBox:setSelected(true)
        checkBox:setEnabled(false)
    end

    for i, checkBox in ipairs(tempShowCheckBoxs) do
        checkBox:setPosition(KW_POS_TABLE_COSTTYPE_CHECKBOX[i])
        checkBox:setSelected(i == 1)    --默认选中第一个选项
        if #tempShowCheckBoxs == 1 then
            --只有一个选项的时候，不让取消
            checkBox:setEnabled(false)
        end
        checkBox:setVisible(true)
    end
    if KW_POS_TABLE_COSTTYPE_CHECKBOX[#tempShowCheckBoxs + 1] then
        self._checkBoxCostYiKaTong:setPosition(KW_POS_TABLE_COSTTYPE_CHECKBOX[#tempShowCheckBoxs + 1])
    end
    self:updateCostYiKaTong()
end

--关闭消耗模式选择
function TeaHouseCreateView:onBtnEventCloseCostType(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self._panelCostTypeSelect:setVisible(false)
end

--消耗模式选择确定
function TeaHouseCreateView:onBtnEventCostTypeSure(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local payTypeTable = self:getPayType()
    if #payTypeTable == 0 then
        TeaHouse.TipTool.showToast("请至少选择一个消耗模式！")
        return 
    end

    local bCurrencyFirst = self:isFirstCostYiKaTong()
    self:savePayTypeData(self._selectMode, payTypeTable, bCurrencyFirst)

    self._panelCostTypeSelect:setVisible(false)

    -- TeaHouse.TipTool.showToast("消耗模式选择保存成功")
    self:throwDate()
end

function TeaHouseCreateView:savePayTypeData(selectMode, payTypeTable, bCurrencyFirst)
    self._savePayTypeData = {}
    self._savePayTypeData.payTypeTable = payTypeTable
    self._savePayTypeData.selectModeType = selectMode
    self._savePayTypeData.bCurrencyFirst = bCurrencyFirst

    self:updateCostTypeSelectState()
end

function TeaHouseCreateView:updateCostTypeSelectState()
    if not self._savePayTypeData 
        or self._selectMode ~= self._savePayTypeData.selectModeType
        or #self._savePayTypeData.payTypeTable <= 0 then
        self._textCostTypeState:setString("未选择消耗模式")
    else
        self._textCostTypeState:setString("已选择消耗模式")
    end
end

function TeaHouseCreateView:onBtnEventSure(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
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

    local agentPropCnt = TeaHouse.manager.teahouseSetup:getAgentPropCount()
    if rechargeNum == nil or rechargeNum < 0 then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "划卡数量不正确")
        return
    end
    --转型比赛场直接使用玩家的账号卡
    if TeaHouse.BridgeData.isRemodelArea() then
        agentPropCnt =  TeaHouse.BridgeData.getRoomCard() 
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
        if everyDayCostLimitNum == nil or everyDayCostLimitNum <= 0 then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "每日最大消耗输入不正确")
            return
        end
    else
        everyDayCostLimitNum = TeaHouseCreateView.KW_DEFAULT_EVERYDAY_COSTLIMIT
    end

    local tempPayTypeTable = {}
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsFixedPayType then
        if not self._savePayTypeData or self._selectMode ~= self._savePayTypeData.selectModeType then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "请先为您的比赛场选择消耗模式")
            return
        end
        tempPayTypeTable = self._savePayTypeData.payTypeTable
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
            if nTransferCardNum <= 0 then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "请填写正确补卡数值")
                return
            end
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_AUTO_ADD_SELECTED_GEAR,{TeaHouseAutoAddGear = nTransferCardNum})
        end
        if self._nodeLackCardNotify:isVisible() and self._checkBoxLackCardNotify:isSelected() then
            if self:updateLackNotifyErrStr() then return end
            nRemindLowCardNum = tonumber(self:getSelectedAutoNum(self._panelNotifyNum))
            if nRemindLowCardNum <= 0 then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "请填写正确提醒数值")
                return
            end
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_AUTO_NOTIFY_SELECTED_GEAR,{TeaHouseAutoNotifyGear = nRemindLowCardNum})
        end
    end

    TeaHouse.manager.teahouseList:setIsCreateTeaHouse(true) --插到第一个

    local data = {}
    data.notesNum = notesNum
    data.everyDayCostLimitNum = everyDayCostLimitNum
    data.newerNum = newerNum
    data.rechargeNum = rechargeNum
    data.bOthersHiden = bOthersHiden
    data.bAutoAddRoomCard = bAutoAddRoomCard
    data.nLowCardNum = SetupConfig.AutoAddRoomCardLowCardNum
    data.nTransferCardNum = nTransferCardNum
    data.nRemindLowCardNum = nRemindLowCardNum
    data.modeType = self:getPayModeType()
    data.payTypeTable = tempPayTypeTable
    data.nLevel = self._createMomentLevel or 0
    TeaHouse.manager.teahouseSetup:createTeaHouse(data)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_77,self:JudgeDate(data))
end

function TeaHouseCreateView:JudgeDate(tmpData)
    local TeaHouseRemodelConfig = TeaHouse.manager.configManager.remodelConfig
    local SelectedLevel = tmpData.nLevel
    local data = {}
    if TeaHouse.BridgeData:isRemodelArea() then
        data.TeaHouseModel = "人人比赛场"
    else
        data.TeaHouseModel = "老比赛场模式"
    end
    if SelectedLevel == TeaHouseRemodelConfig.TEAHOUSELEVEL.SENIOR then 
        data.TeaHouseLevel = "高级"
    elseif SelectedLevel == TeaHouseRemodelConfig.TEAHOUSELEVEL.INTERMEDIATE then 
        data.TeaHouseLevel = "中级"
    elseif SelectedLevel == TeaHouseRemodelConfig.TEAHOUSELEVEL.JUNIOR then
        data.TeaHouseLevel = "初级"
    else
        data.TeaHouseLevel = "非人人比赛场"
    end
    return data 
end

function TeaHouseCreateView:onBtnEventSurePlayMode(send, eventType)
    
end

--取消
function TeaHouseCreateView:onBtnEventCancel(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_70)
end

function TeaHouseCreateView:onBtnEventAutoAddRoomCardWhat(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._imgAutoAddRoomCardWhat then
        local isVisible = self._imgAutoAddRoomCardWhat:isVisible()
        self._imgAutoAddRoomCardWhat:stopAllActions()
        if isVisible then
            self._imgAutoAddRoomCardWhat:setVisible(not isVisible)
        else
            if self._textAutoAddRoomCardWhat then
                local oldStr = self._textAutoAddRoomCardWhat:getString() or ""
                local SetupConfig = TeaHouse.manager.configManager.SetupConfig
                self._textAutoAddRoomCardWhat:setString(string.format(oldStr, SetupConfig.AutoAddRoomCardLowCardNum))
            end
            local showAct = cc.CallFunc:create(function() self._imgAutoAddRoomCardWhat:setVisible(true) end)
            local delayAct = cc.DelayTime:create(5)
            local hideAct = cc.CallFunc:create(function() self._imgAutoAddRoomCardWhat:setVisible(false) end)
            local sequenceAct = cc.Sequence:create(showAct, delayAct, hideAct)
            self._imgAutoAddRoomCardWhat:runAction(sequenceAct)
        end
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_AUTO_ADD_TIPS)
    end
end

function TeaHouseCreateView:selectShowNode(tag)
    self._selectTag = tag

    self._nodeBase:setVisible(tag == self.KW_SELECT_SETUP_NODE_TAG.BASE)
    self._nodePlayMode:setVisible(tag == self.KW_SELECT_SETUP_NODE_TAG.PLAYMODE)

    self._btnSelectBase:setEnabled(tag ~= self.KW_SELECT_SETUP_NODE_TAG.BASE)
    self._btnSelectPlayMode:setEnabled(tag ~= self.KW_SELECT_SETUP_NODE_TAG.PLAYMODE)

    --层级调整
    self._btnSelectBase:setLocalZOrder(tag == self.KW_SELECT_SETUP_NODE_TAG.BASE and 2 or 1)
    self._btnSelectPlayMode:setLocalZOrder(tag == self.KW_SELECT_SETUP_NODE_TAG.PLAYMODE and 2 or 1)
end

--模式选择列表打开或关闭
function TeaHouseCreateView:onCheckBoxEventModeSelect(send, eventType)
    if send:isBright() and send:isSelected() == true then
        self._panelModeSelectBtns:setVisible(true)
    elseif send:isBright() and send:isSelected() == false then
        self._panelModeSelectBtns:setVisible(false)
    end
end

--关闭选择模式
function TeaHouseCreateView:closeModeSelectBtns()
    self._panelModeSelectBtns:setVisible(false)
    self._checkBoxModeSelect:setSelected(false)
end

--领队模式 按钮点击
function TeaHouseCreateView:onBtnEventModeGuanzhu(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectMode(TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU)
     TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_34)
end

--预付模式 按钮点击
function TeaHouseCreateView:onBtnEventModeYufu(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectMode(TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU)
     TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_37)
end

--流通模式 按钮点击
function TeaHouseCreateView:onBtnEventModeLiutong(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectMode(TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG)
end

--其他模式 按钮点击
function TeaHouseCreateView:onBtnEventModeFangFei(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectMode(TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI)
end

function TeaHouseCreateView:onBtnEventModeLobby(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectMode(TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_40)
end

function TeaHouseCreateView:onBtnEventModeShaoXingQuanzhu(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectMode(TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU)
end

function TeaHouseCreateView:selectMode(mode)
    if self._selectMode == mode then
        self:closeModeSelectBtns()
        return 
    end
    self._selectMode = mode
    self._textModeSelect:setString(TeaHouseCreateView.KW_MODE_TEXT_STR[mode])
    self:closeModeSelectBtns()

    self:updateRoomCardVisible()

    if mode == TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU then
        self:setEveryDayCostLimitEnabled(true)
        self:setRechargeEnabled(true)
    elseif mode == TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU then
        self:setEveryDayCostLimitEnabled(false)
        self:setRechargeEnabled(true)
    elseif mode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG then
        self:setEveryDayCostLimitEnabled(false)
        self:setRechargeEnabled(true)
    elseif mode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI then
        self:setEveryDayCostLimitEnabled(false)
        self:setRechargeEnabled(false)
    elseif mode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
        self:setEveryDayCostLimitEnabled(false)
        self:setRechargeEnabled(false)
    elseif mode == TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU then
        self:setEveryDayCostLimitEnabled(false)
        self:setRechargeEnabled(false)
    end
    self:updateCostTypeSelectState()
    -- 扣玩家卡模式不显示自动补卡/缺卡提醒
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if TeaHouse.BridgeData.isRemodelArea() or SetupConfig.IsOpenAutoAddRoomCard then
        if self._selectMode and (self._selectMode == self.KW_TEAHOUSE_MODE.LOBBY 
        or self._selectMode == self.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU 
        or self._selectMode == self.KW_TEAHOUSE_MODE.FANGFEI ) then
            self._nodeAutoAddRoomCard:setVisible(false)
            self._nodeLackCardNotify:setVisible(false)
        else
            self._nodeAutoAddRoomCard:setVisible(true)
            if TeaHouse.BridgeData.isRemodelArea() then
                self._nodeLackCardNotify:setVisible(true)
            else
                self._nodeLackCardNotify:setVisible(false)
            end
        end
    end
end

function TeaHouseCreateView:updateRoomCardVisible()
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI or self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
        self._textTotalRoomCard:setVisible(false)
        self._textRechargeRoomCard:setVisible(false)
        self:initNeedCostRoomCards()
    else
        self._textTotalRoomCard:setVisible(true)
        self._textRechargeRoomCard:setVisible(false)
        self:initNeedCostRoomCards()
    end
end

function TeaHouseCreateView:onUpdateSinglePlayMode(event)
    self:updateSinglePlayMode(event.msg.nPlayModeId)
end

function TeaHouseCreateView:onUpdateAgentPropCnt(event)
    local agentPropCnt = TeaHouse.manager.teahouseSetup:getAgentPropCount()
    self._textTotalRoomCard:setString("您的房卡总库存：" .. agentPropCnt)
end

function TeaHouseCreateView:initNeedCostRoomCards()
    local SetupConfig = TeaHouse.manager.configManager.SwitchConfig
    if SetupConfig.CheckCanCostRoomCard and SetupConfig.CheckCanCostRoomCard ~= 0 then
        self._textNeedCostRoomCard:setText("注：本次创建消耗房卡" .. SetupConfig.CheckCanCostRoomCard .. "张")
        self._textNeedCostRoomCard:setVisible(true)
    end
end

-----------------------------------------------------------------
--预付模式 前项收费
--领队模式 后项收费
function TeaHouseCreateView:getPayModeType()
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU then
        return TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.GUANZHU then
        return TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI then
        return TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
        return TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU then
        return TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
    end
    return TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_TEA_NULL
end

function TeaHouseCreateView:getPayType()
    local result = {}
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if SetupConfig.IsFixedPayType then
        return result
    end
    if self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LIUTONG then
        --平摊
        if self._checkBoxCostTypeAverage:isVisible() and (self._checkBoxCostTypeAverage:isSelected() or not self._checkBoxCostTypeAverage:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA)
        end
    elseif self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.FANGFEI  then
        --冠军
        if self._checkBoxCostTypeAll:isVisible() and (self._checkBoxCostTypeAll:isSelected() or not self._checkBoxCostTypeAll:isEnabled()) then
        end
        table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER)
        --平摊
        if self._checkBoxCostTypeAverage:isVisible() and (self._checkBoxCostTypeAverage:isSelected() or not self._checkBoxCostTypeAverage:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA)
        end

    elseif  self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.YUFU then
        --冠军(预付)
        if self._checkBoxCostTypeAll:isVisible() and (self._checkBoxCostTypeAll:isSelected() or not self._checkBoxCostTypeAll:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER)
        end
        --平摊(预付) 预付模式的AA是模拟的,还是走的领队付
        if self._checkBoxCostTypeAverage:isVisible() and (self._checkBoxCostTypeAverage:isSelected() or not self._checkBoxCostTypeAverage:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA)
        end
    elseif  self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.LOBBY then
        --冠军(大厅)
        if self._checkBoxCostTypeAll:isVisible() and (self._checkBoxCostTypeAll:isSelected() or not self._checkBoxCostTypeAll:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN)
        end
        --平摊(大厅)
        if self._checkBoxCostTypeAverage:isVisible() and (self._checkBoxCostTypeAverage:isSelected() or not self._checkBoxCostTypeAverage:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA)
        end
    elseif  self._selectMode == TeaHouseCreateView.KW_TEAHOUSE_MODE.SHAOXINGQUANZHU then
        --冠军
        if self._checkBoxCostTypeAll:isVisible() and (self._checkBoxCostTypeAll:isSelected() or not self._checkBoxCostTypeAll:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA)
        end
        --平摊
        if self._checkBoxCostTypeAverage:isVisible() and (self._checkBoxCostTypeAverage:isSelected() or not self._checkBoxCostTypeAverage:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA)
        end
    else
        --领队
        if self._checkBoxCostTypeAll:isVisible() and (self._checkBoxCostTypeAll:isSelected() or not self._checkBoxCostTypeAll:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER)
        end
        --平摊
        if self._checkBoxCostTypeAverage:isVisible() and (self._checkBoxCostTypeAverage:isSelected() or not self._checkBoxCostTypeAverage:isEnabled()) then
            if TeaHouse.BridgeData.isFixPayTypeArea() then--修复了领队平摊问题的区域，领队平摊走TEA_AA支付模式24，扣比赛场房卡
                table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA)
            else
                table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA)
            end
        end
        --房主
        if self._checkBoxCostTypeRoomOwner:isVisible() and (self._checkBoxCostTypeRoomOwner:isSelected() or not self._checkBoxCostTypeRoomOwner:isEnabled()) then
            table.insert(result, TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER)
        end
    end
    return result
end

function TeaHouseCreateView:isFirstCostYiKaTong()
    if self._checkBoxCostYiKaTong:isVisible() and self._checkBoxCostYiKaTong:isSelected() then
        return true
    end
    return false
end

function TeaHouseCreateView:initRemodelCreateViewExtraUI()
    if TeaHouse.BridgeData.isRemodelArea() then
        if self._buyCardTipBtn then
            self._buyCardTipBtn:setVisible(true)
        end
        if self._chargeCardTipBtn then
            self._chargeCardTipBtn:setVisible(true)
        end
    end
end

function TeaHouseCreateView:onBtnEventBuyRoomCardTip(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._buyCardTipBg then
        local isVisible = self._buyCardTipBg:isVisible()
        self._buyCardTipBg:setVisible(not isVisible)
        self._buyCardTipText:setText("购买房卡:只有在商城购买的房卡可以划入比赛场")
    end
end

function TeaHouseCreateView:onBtnEventChargeRoomCardTip(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._chargeCardTipBg then
        local isVisible = self._chargeCardTipBg:isVisible()
        self._chargeCardTipBg:setVisible(not isVisible)
        self._chargeCardTipText:setText("划入比赛场的房卡从游戏账户上扣除")
    end
end

function TeaHouseCreateView:parseParams(data)
    if data and data.momentLevel then
        self._createMomentLevel = data.momentLevel or  0
    end
end

--FIXME:因为配置不支持多级配置,比赛场模式代码进行筛选
function TeaHouseCreateView:filterModeRemodelTeaHouse(setupConfig)
    local config = clone(setupConfig)
    if TeaHouse.BridgeData.isRemodelArea() then
        if self._createMomentLevel == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.JUNIOR then
            -- 初级比赛场只允许支持大厅模式
            if config.IsOpenModeGuanZhu then
                config.IsOpenModeGuanZhu = false
            end
            if config.IsOpenModeYuFu then
                config.IsOpenModeYuFu = false
            end
            if config.IsOpenModeLiuTong then
                config.IsOpenModeLiuTong =false
            end
            if config.IsOpenModeFangFei then
                config.IsOpenModeFangFei = false
            end
            if config.IsOpenModeShaoXingQuanZhu then
                config.IsOpenModeShaoXingQuanZhu = false
            end
        end
    end
    return config
end

function TeaHouseCreateView:onBtnEventSureCreate(msg)
    self:onBtnEventSure(self._btnSure, ccui.TouchEventType.ended)
end

function TeaHouseCreateView:onCheckBoxEventAutoAddCardSelect(send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        self._panelAutoAddNum:setVisible(true)
        self._textAutoAddCardHistoryTips:setVisible(true)
        self:updateAutoAddErrStr()
    elseif eventType == ccui.CheckBoxEventType.unselected then
        self._panelAutoAddNum:setVisible(false)
        self._textAutoAddCardHistoryTips:setVisible(false)
        self._textErrSelectAutoAdd:setVisible(false)
    end
end

function TeaHouseCreateView:onCheckBoxEventLackCardNotifySelect(send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        self._panelNotifyNum:setVisible(true)
        self:updateLackNotifyErrStr()
    elseif eventType == ccui.CheckBoxEventType.unselected then
        self._panelNotifyNum:setVisible(false)
        self._textErrSelectLackNotify:setVisible(false)
    end
end

function TeaHouseCreateView:onBtnEventLackCardWhat(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._imgLackCardWhat then
        local isVisible = self._imgLackCardWhat:isVisible()
        self._imgLackCardWhat:stopAllActions()
        if isVisible then
            self._imgLackCardWhat:setVisible(not isVisible)
        else
            local showAct = cc.CallFunc:create(function() self._imgLackCardWhat:setVisible(true) end)
            local delayAct = cc.DelayTime:create(3)
            local hideAct = cc.CallFunc:create(function() self._imgLackCardWhat:setVisible(false) end)
            local sequenceAct = cc.Sequence:create(showAct, delayAct, hideAct)
            self._imgLackCardWhat:runAction(sequenceAct)
        end
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.TEA_AUTO_NOTIFY_TIPS)
    end
end

function TeaHouseCreateView:onCheckBoxEventAutoNumSelect(send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        send:setTouchEnabled(false)
        local parent = send:getParent()
        if parent then
            local otherChildren = parent:getChildren()
            for _, v in pairs(otherChildren) do
                if v ~= send then
                    v:setSelected(false)
                    v:setTouchEnabled(true)
                else
                    v:setSelected(true)
                end
            end
        end
    end
end

function TeaHouseCreateView:getSelectedAutoNum(parentNode)
    if not parentNode then
        return
    end
    local children = parentNode:getChildren()
    for _, v in pairs(children) do
        if v:isSelected() then
            return TeaHouse.BridgeUI.getText(v, "KW_TEXT_AUTO_NUM") or 0
        end
    end
    return 0
end

function TeaHouseCreateView:updateAutoAddErrStr()
    local myCardNum
    if TeaHouse.BridgeData.isRemodelArea() or TeaHouse.BridgeData.isNotTeaAgentMode() then
        myCardNum = TeaHouse.BridgeData.getRoomCard()
    else
        myCardNum =TeaHouse.manager.teahouseSetup:getAgentPropCount()
    end
    local selectedNum = 0
    local children = self._panelAutoAddNum:getChildren()
    for _, v in pairs(children) do
        if v:isSelected() then
            selectedNum = tonumber(TeaHouse.BridgeUI.getText(v, "KW_TEXT_AUTO_NUM"))
            break
        end
    end
    self._textErrSelectAutoAdd:setString("")
    if selectedNum then
        if selectedNum == 0 then
            self._textErrSelectAutoAdd:setString(TeaHouse.TextConfig["AUTO_ADD_ERR_NOT_SELECTE"])
        elseif myCardNum == 0 then
            self._textErrSelectAutoAdd:setString(TeaHouse.TextConfig["AUTO_ADD_ERR_NOT_ENOUGH"])
        elseif myCardNum < selectedNum then
            self._textErrSelectAutoAdd:setString(TeaHouse.TextConfig["AUTO_ADD_ERR_MORE"])
        elseif tonumber(selectedNum) ~= tonumber(math.floor(selectedNum)) then
            self._textErrSelectAutoAdd:setString(TeaHouse.TextConfig["AUTO_ADD_ERR_NOT_NUM"])
        end
    else
        self._textErrSelectAutoAdd:setString(TeaHouse.TextConfig["AUTO_ADD_ERR_NOT_NUM"])
    end
    if self._textErrSelectAutoAdd:getString() ~= "" then
        self._textErrSelectAutoAdd:stopAllActions()
        self._textErrSelectAutoAdd:runAction(cc.Sequence:create(cc.DelayTime:create(5),cc.CallFunc:create(function()
            self._textErrSelectAutoAdd:setVisible(fasle)
        end)))
        self._textErrSelectAutoAdd:setVisible(true)
        self._checkBoxAutoAddRoomCard:setSelected(false)
        return true
    end
    return false
end

function TeaHouseCreateView:updateLackNotifyErrStr()
    local selectedNum = 0
    local children = self._panelNotifyNum:getChildren()
    for _, v in pairs(children) do
        if v:isSelected() then
            selectedNum = tonumber(TeaHouse.BridgeUI.getText(v, "KW_TEXT_AUTO_NUM"))
            break
        end
    end
    self._textErrSelectLackNotify:setString("")
    if selectedNum then
        if selectedNum == 0 then
            self._textErrSelectLackNotify:setString(TeaHouse.TextConfig["AUTO_LACK_ERR_NOT_SELECTE"])
        elseif tonumber(selectedNum) ~= tonumber(math.floor(selectedNum)) then
            self._textErrSelectAutoAdd:setString(TeaHouse.TextConfig["AUTO_ADD_ERR_NOT_NUM"])
        end
    else
        self._textErrSelectLackNotify:setString(TeaHouse.TextConfig["AUTO_ADD_ERR_NOT_NUM"])
    end
    if self._textErrSelectLackNotify:getString() ~= "" then
        self._textErrSelectLackNotify:stopAllActions()
        self._textErrSelectLackNotify:runAction(cc.Sequence:create(cc.DelayTime:create(5),cc.CallFunc:create(function()
            self._textErrSelectLackNotify:setVisible(fasle)
        end)))
        self._textErrSelectLackNotify:setVisible(true)
        self._checkBoxLackCardNotify:setSelected(false)
        return true
    end
    return false
end

function TeaHouseCreateView:selectAutoGeer(node)
    if not node then
        return
    end
    self:onCheckBoxEventAutoNumSelect(node, ccui.CheckBoxEventType.selected)
end

return TeaHouseCreateView