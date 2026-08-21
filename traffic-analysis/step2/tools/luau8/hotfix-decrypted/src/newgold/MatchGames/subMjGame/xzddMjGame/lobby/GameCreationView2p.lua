
local GameCreationView2p = class("GameCreationView2p", require("app.lobby.GameCreationOptionsBase"))

GameCreationView2p.resourceFilename = "creation_options_csb/xuezhandaodiMj2p.csb"
GameCreationView2p.defaultPeopleIdx = 1
GameCreationView2p.defaultJushuIdx = 2
GameCreationView2p.defaultWanfaNameIdx = 1
GameCreationView2p.defaultJuntan = false
GameCreationView2p.wanfaDescInfoTable = {

 }
GameCreationView2p.defaultCostDependPlayerNum = false
GameCreationView2p.defaultWanfaItemSelect = {
    {
        g_gameConstant.GAME_SUB_RULE_MJ_FANG_3,
        g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO,
        g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG,
        g_gameConstant.GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI,
        g_gameConstant.GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG,
        g_gameConstant.GAME_SUB_RULE_MJ_TIAN_DI_HU,
        g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI,
        g_gameConstant.GAME_SUB_RULE_AUTO_READY,
        
        g_gameConstant.GAME_SUB_RULE_WINNER_ZHUANG,
        
        g_gameConstant.GAME_SUB_RULE_1ST_RAND_ZHUANG,
    }
}

GameCreationView2p.itemLimitMap = 
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

function GameCreationView2p:ctor(initConfigData)
    GameCreationView2p.super.ctor(self, initConfigData)
    
    self.mMainGameRule = g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P
end

function GameCreationView2p:initWidget()
    GameCreationView2p.super.initWidget(self)

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

function GameCreationView2p:initWithConfigData(configData)
    GameCreationView2p.super.initWithConfigData(self, configData)

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
function GameCreationView2p:updateWanfa(selectWanfaPanelIdx, wanfaItemTable, target)
    local selectIdx = nil
    local isSelected = false
    if selectWanfaPanelIdx == 1 then
        for i, v in pairs(wanfaItemTable) do
            if v == target then
                local checkBox = v:getChildByName("checkBox")
                if i >= 1 and i <= 2 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 1, 2)
                elseif i >= 3 and i <= 6 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 3, 4)
                elseif i >= 7 and i <= 8 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 7, 2)
                elseif i >= 9 and i <= 10 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 9, 2)
                elseif i >= 11 and i <= 12 then
                    self:selectMostOneChoices(wanfaItemTable, i, 11, 2)
                elseif i >= 21 and i <= 22 then 
                    self:selectMostOneChoices(wanfaItemTable, i, 21, 2)
                elseif i >= 24 and i <= 25 then 
                    self:selectOneInSomesChoices(wanfaItemTable, i, 24, 2)
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
function GameCreationView2p:refreshWanfaItemEnable(selectWanfaPanelIdx, wanfaItemTable)    
    local playerNumber = self:getSelectPlayerNum()

    local wanfaItemTagMap = {}
    local checkBoxTagMap = {}
    for i,v in ipairs(wanfaItemTable) do
        wanfaItemTagMap[v:getTag()] = v
        checkBoxTagMap[v:getTag()] = v:getChildByName("checkBox")
    end

end
--]]


function GameCreationView2p:formatConfigOptBase()
    
    local ret = GameCreationView2p.super.formatConfigOptBase(self)

    local fenVal = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + fenVal - 1
    table.insert(ret.wanfa[1], difenVal)

    local shoujuSuijiFound = false
    for idx = #ret.wanfa[1], 1, -1 do
        local ival = ret.wanfa[1][idx]
        if g_gameConstant.GAME_SUB_RULE_1ST_RAND_ZHUANG == ival then
            shoujuSuijiFound = true
        end
    end
    
    if shoujuSuijiFound then
        return ret
    end
    
    
    table.insert(ret.wanfa[1], g_gameConstant.GAME_SUB_RULE_1ST_FANGZHU_ZHUANG)
    return ret
end

function GameCreationView2p:getCurrentConfigDataOptBase()
    local ret = GameCreationView2p.super.getCurrentConfigDataOptBase(self)

    local difen = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + difen - 1
    table.insert(ret.minorWanfa, difenVal)
    
    local shoujuSuijiFound = false
    
    for k, v in ipairs(ret.minorWanfa) do
        if v == g_gameConstant.GAME_SUB_RULE_1ST_RAND_ZHUANG then
            shoujuSuijiFound = true
        end
    end
    
    if not shoujuSuijiFound then
        
        table.insert(ret.minorWanfa, g_gameConstant.GAME_SUB_RULE_1ST_FANGZHU_ZHUANG)
    end
    
    return ret
end

function GameCreationView2p:initWithTableData(mainRuler, minorRulers, people, totoalRound, isJunTan)
    GameCreationView2p.super.initWithTableData(self, mainRuler, minorRulers, people, totoalRound, isJunTan)
     
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

return GameCreationView2pF