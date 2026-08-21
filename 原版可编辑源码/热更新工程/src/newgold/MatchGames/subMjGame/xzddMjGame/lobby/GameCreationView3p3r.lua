
local GameCreationView3p3r = class("GameCreationView3p3r", require("app.lobby.GameCreationOptionsBase"))

GameCreationView3p3r.resourceFilename = "creation_options_csb/xuezhandaodiMj3p3r.csb"
GameCreationView3p3r.defaultPeopleIdx = 1
GameCreationView3p3r.defaultJushuIdx = 2
GameCreationView3p3r.defaultWanfaNameIdx = 1
GameCreationView3p3r.defaultJuntan = false
GameCreationView3p3r.wanfaDescInfoTable = {

 }
GameCreationView3p3r.defaultCostDependPlayerNum = false
GameCreationView3p3r.defaultWanfaItemSelect = {
    {   g_gameConstant.GAME_SUB_RULE_MJ_MO_13_ZHANG,
        g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_DI,
        g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO,
        g_gameConstant.GAME_SUB_RULE_AUTO_READY,
        
    }
}

local LimitDifen = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_COUNT

function GameCreationView3p3r:ctor(initConfigData)
    GameCreationView3p3r.super.ctor(self, initConfigData)
    
    self.mMainGameRule = g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R
end

function GameCreationView3p3r:initWidget()
    GameCreationView3p3r.super.initWidget(self)
    
    -----
    -- 底分
    local rootPanel = g_gameGlobal:findChildWithName(self.resourceNode_, "panel")
    
    local difenPanel = rootPanel:getChildByName("Panel_fen")
    local txtDifen = difenPanel:getChildByName("Text")
    self.txtDifen = txtDifen
    local btnAdd = difenPanel:getChildByName("Button_more")
    btnAdd:onClick(function ()
        if self.curDifen >= LimitDifen then
            return
        end
        self.curDifen = self.curDifen + 1
        txtDifen:setString(tostring(self.curDifen) or 1)
    end)
    local btnSub = difenPanel:getChildByName("Button_less")
    btnSub:onClick(function ()
        if self.curDifen <=1 then
            return
        end
        self.curDifen = self.curDifen - 1
        txtDifen:setString(tostring(self.curDifen) or 1)
    end)
end

function GameCreationView3p3r:initWithConfigData(configData)
    GameCreationView3p3r.super.initWithConfigData(self, configData)

    -- 底分初始值
    local wanfaTb = configData.wanfa
    local fenFound = false
    for k, v in ipairs(wanfaTb or {}) do
        for idx, value in ipairs(v) do
            if value >= g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX and value < g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + LimitDifen then
                local difenValue = value - g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + 1
                self.txtDifen:setString(tostring(difenValue))
                self.curDifen = difenValue
                fenFound = true
                break;
            end
        end
    end
    
    if not fenFound then
        self.txtDifen:setText("1")
        self.curDifen = 1
    end
end

-- 重写更新玩法
function GameCreationView3p3r:updateWanfa(selectWanfaPanelIdx, wanfaItemTable, target)
    local selectIdx = nil
    local isSelected = false
    if selectWanfaPanelIdx == 1 then
        for i, v in pairs(wanfaItemTable) do
            if v == target then
                local checkBox = v:getChildByName("checkBox")
                if i >= 1 and i <= 3 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 1, 3)
                elseif i >= 4 and i <= 6 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 4, 3)
                elseif i >= 7 and i <= 8 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 7, 2)
                elseif i >= 9 and i <= 10 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 9, 2)
                elseif i >= 19 and i <= 20 then 
                    self:selectMostOneChoices(wanfaItemTable, i, 19, 2)
                else
                    checkBox:setSelected(not checkBox:isSelected())
                end
                isSelected=checkBox:isSelected()
                selectIdx = i
                local wanfaDesc = v:getChildByName("txtDesc")
                if wanfaDesc then
                    wanfaDesc:setColor(isSelected and cc.c3b(222,103,71) or cc.c3b(160,113,93))
                end
            end
        end
    end
end

-- 重写 更新选项后 游戏选项是否显示和可用
function GameCreationView3p3r:refreshWanfaItemEnable(selectWanfaPanelIdx, wanfaItemTable)    
    local playerNumber = self:getSelectPlayerNum()

    local wanfaItemTagMap = {}
    local checkBoxTagMap = {}
    for i,v in ipairs(wanfaItemTable) do
        wanfaItemTagMap[v:getTag()] = v
        checkBoxTagMap[v:getTag()] = v:getChildByName("checkBox")
    end

    if selectWanfaPanelIdx == 1 then
    end
end

function GameCreationView3p3r:formatConfigOptBase()
    
    local ret = GameCreationView3p3r.super.formatConfigOptBase(self)
    
    local fenVal = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + fenVal - 1
    table.insert(ret.wanfa[1], difenVal)
    return ret
end

function GameCreationView3p3r:getCurrentConfigDataOptBase()
    local ret = GameCreationView3p3r.super.getCurrentConfigDataOptBase(self)
    
    -- 测试版本未配置钻石消耗 写个默认的
    if device.platform == "windows" or G_IS_TEST then
        if ret.jushu == 0 then
            ret.jushu = 8
        end
    end

    local difen = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + difen - 1
    table.insert(ret.minorWanfa, difenVal)
    
    return ret
end

function GameCreationView3p3r:initWithTableData(mainRuler, minorRulers, people, totoalRound, isJunTan)
    GameCreationView3p3r.super.initWithTableData(self, mainRuler, minorRulers, people, totoalRound, isJunTan)
     
    local isStaticDizhu = false
    local fenVal = nil
    for k, v in ipairs(minorRulers) do
        if v >= g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX and v < g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + LimitDifen then 
            fenVal = v - g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + 1
        end
    end
    
    if fenVal then
        self.txtDifen:setString(tostring(fenVal))
        self.curDifen = fenVal
    else
        self.txtDifen:setString(1)
        self.curDifen = 1
    end
end

return GameCreationView3p3r