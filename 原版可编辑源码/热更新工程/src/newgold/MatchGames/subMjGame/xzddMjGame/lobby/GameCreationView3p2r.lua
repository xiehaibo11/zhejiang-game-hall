
local GameCreationView3p2r = class("GameCreationView3p2r", require("app.lobby.GameCreationOptionsBase"))

GameCreationView3p2r.resourceFilename = "creation_options_csb/xuezhandaodiMj3p2r.csb"
GameCreationView3p2r.defaultPeopleIdx = 1
GameCreationView3p2r.defaultJushuIdx = 2
GameCreationView3p2r.defaultWanfaNameIdx = 1
GameCreationView3p2r.defaultJuntan = false
GameCreationView3p2r.wanfaDescInfoTable = {

 }
GameCreationView3p2r.defaultCostDependPlayerNum = false
GameCreationView3p2r.defaultWanfaItemSelect = {
    {
        g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO,
        g_gameConstant.GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI ,
        g_gameConstant.GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG ,
        g_gameConstant.GAME_SUB_RULE_MJ_TIAN_DI_HU,
        g_gameConstant.GAME_SUB_RULE_MJ_DUI_DUI_HU_2_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_JIA_XIN_WU,
        g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI,
        g_gameConstant.GAME_SUB_RULE_AUTO_READY,
    }
}

GameCreationView3p2r.itemLimitMap = 
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

function GameCreationView3p2r:ctor(initConfigData)
    GameCreationView3p2r.super.ctor(self, initConfigData)
    
    self.mMainGameRule = g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R
end

function GameCreationView3p2r:initWidget()
    GameCreationView3p2r.super.initWidget(self)
    
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

function GameCreationView3p2r:initWithConfigData(configData)
    GameCreationView3p2r.super.initWithConfigData(self, configData)

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
function GameCreationView3p2r:updateWanfa(selectWanfaPanelIdx, wanfaItemTable, target)
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
                elseif i >= 15 and i <= 16 then
                    self:selectMostOneChoices(wanfaItemTable, i, 15, 2)
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
function GameCreationView3p2r:refreshWanfaItemEnable(selectWanfaPanelIdx, wanfaItemTable)    
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
--]]

function GameCreationView3p2r:formatConfigOptBase()
    
    local ret = GameCreationView3p2r.super.formatConfigOptBase(self)
    
    local fenVal = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + fenVal - 1
    table.insert(ret.wanfa[1], difenVal)
    return ret
end

function GameCreationView3p2r:getCurrentConfigDataOptBase()
    local ret = GameCreationView3p2r.super.getCurrentConfigDataOptBase(self)
    
    for k, v in ipairs(ret.minorWanfa or {}) do
        -- 勾选2人玩法，就开2人房间
        if v == g_gameConstant.GAME_SUB_RULE_2_REN_WAN then
            ret.playerNumber = 2
        end
    end

    local difen = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + difen - 1
    table.insert(ret.minorWanfa, difenVal)
    
    return ret
end

function GameCreationView3p2r:initWithTableData(mainRuler, minorRulers, people, totoalRound, isJunTan)
    GameCreationView3p2r.super.initWithTableData(self, mainRuler, minorRulers, people, totoalRound, isJunTan)
     
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

return GameCreationView3p2r