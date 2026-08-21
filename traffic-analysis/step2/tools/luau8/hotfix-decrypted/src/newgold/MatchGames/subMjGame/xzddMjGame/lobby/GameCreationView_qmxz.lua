
local GameCreationView = class("GameCreationView", require("app.lobby.GameCreationOptionsBase"))

GameCreationView.resourceFilename = "creation_options_csb/quanminxuezhanMj.csb"
GameCreationView.defaultPeopleIdx = 1
GameCreationView.defaultJushuIdx = 2
GameCreationView.defaultWanfaNameIdx = 1
GameCreationView.defaultJuntan = false
GameCreationView.wanfaDescInfoTable = {

 }
GameCreationView.defaultCostDependPlayerNum = false
GameCreationView.defaultWanfaItemSelect = {
    {
        g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_3_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_DIAN_PAO,
        g_gameConstant.GAME_SUB_RULE_MJ_DUI_DUI_HU_1_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_QUAN_YAO_JIU_2_FAN  ,
        g_gameConstant.GAME_SUB_RULE_MJ_DA_DAN_DIAO,
        g_gameConstant.GAME_SUB_RULE_AUTO_READY,
    }
}


GameCreationView.itemLimitMap = 
{
    {
        item = g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM,
        limit = {
            selected = {
            },
            selectedOne = {
                g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG,
                g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG,
            },
            unselected = {
            },
            playerNumber = {
            },
        }
    },
}

local LimitDifen = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_COUNT

function GameCreationView:ctor(initConfigData)
    GameCreationView.super.ctor(self, initConfigData)
    
    self.mMainGameRule = g_gameConstant.GAME_PLAY_RULE_SCMJ_QMXZ
end

function GameCreationView:initWidget()
    GameCreationView.super.initWidget(self)
    
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

function GameCreationView:initWithConfigData(configData)
    GameCreationView.super.initWithConfigData(self, configData)

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
function GameCreationView:updateWanfa(selectWanfaPanelIdx, wanfaItemTable, target)
    local selectIdx = nil
    local isSelected = false
    if selectWanfaPanelIdx == 1 then
        for i, v in pairs(wanfaItemTable) do
            if v == target then
                local checkBox = v:getChildByName("checkBox")
                if i >= 1 and i <= 4 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 1, 4)
                elseif i >= 5 and i <= 6 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 5, 2)
                elseif i >= 7 and i <= 8 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 7, 2)
                elseif i >= 9 and i <= 10 then
                    self:selectMostOneChoices(wanfaItemTable, i, 9, 2)
                elseif i >= 13 and i <= 14 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 13, 2)
                elseif i >= 11 and i <= 12 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 11, 2)
                elseif i >= 24 and i <= 25 then 
                    self:selectMostOneChoices(wanfaItemTable, i, 24, 2)
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

--[[
-- 重写 更新选项后 游戏选项是否显示和可用
function GameCreationView:refreshWanfaItemEnable(selectWanfaPanelIdx, wanfaItemTable)    
    local playerNumber = self:getSelectPlayerNum()

    local wanfaItemTagMap = {}
    local checkBoxTagMap = {}
    for i,v in ipairs(wanfaItemTable) do
        wanfaItemTagMap[v:getTag()] = v
        checkBoxTagMap[v:getTag()] = v:getChildByName("checkBox")
    end
end
--]]

function GameCreationView:formatConfigOptBase()
    
    local ret = GameCreationView.super.formatConfigOptBase(self)
    
    local fenVal = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + fenVal - 1
    table.insert(ret.wanfa[1], difenVal)
    return ret
end

function GameCreationView:getCurrentConfigDataOptBase()
    local ret = GameCreationView.super.getCurrentConfigDataOptBase(self)

    local difen = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + difen - 1
    table.insert(ret.minorWanfa, difenVal)
    
    return ret
end

function GameCreationView:initWithTableData(mainRuler, minorRulers, people, totoalRound, isJunTan)
    GameCreationView.super.initWithTableData(self, mainRuler, minorRulers, people, totoalRound, isJunTan)
     
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

return GameCreationView