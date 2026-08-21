
local GameCreationViewXZJoker = class("GameCreationViewXZJoker", require("app.lobby.GameCreationOptionsBase"))

GameCreationViewXZJoker.resourceFilename = "creation_options_csb/xuezhandaodiMj_Joker.csb"
GameCreationViewXZJoker.defaultPeopleIdx = 1  -- 4,3,2人
GameCreationViewXZJoker.defaultJushuIdx = 2
GameCreationViewXZJoker.defaultWanfaNameIdx = 1
GameCreationViewXZJoker.defaultJuntan = false
GameCreationViewXZJoker.wanfaDescInfoTable = {

 }
GameCreationViewXZJoker.defaultCostDependPlayerNum = false
GameCreationViewXZJoker.defaultWanfaItemSelect = {
    {
        g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO,
        g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG,
        g_gameConstant.GAME_PLAY_RULE_XZ_JIAFAN_NOJOKER,
        g_gameConstant.GAME_PLAY_RULE_XZ_2FEN_HU,
        g_gameConstant.GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI,
        g_gameConstant.GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG,
        g_gameConstant.GAME_SUB_RULE_MJ_TIAN_DI_HU,
        g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI,
        g_gameConstant.GAME_SUB_RULE_AUTO_READY,
        
        g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU,
    }
}



GameCreationViewXZJoker.itemLimitMap = 
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

function GameCreationViewXZJoker:ctor(initConfigData)
    GameCreationViewXZJoker.super.ctor(self, initConfigData)
    
    self.mMainGameRule = g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER
end

function GameCreationViewXZJoker:initWidget()
    GameCreationViewXZJoker.super.initWidget(self)
    
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

function GameCreationViewXZJoker:initWithConfigData(configData)
    GameCreationViewXZJoker.super.initWithConfigData(self, configData)

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
function GameCreationViewXZJoker:updateWanfa(selectWanfaPanelIdx, wanfaItemTable, target)
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
                elseif i >= 22 and i <= 23 then 
                    self:selectMostOneChoices(wanfaItemTable, i, 22, 2)
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
function GameCreationViewXZJoker:refreshWanfaItemEnable(selectWanfaPanelIdx, wanfaItemTable)    
    local playerNumber = self:getSelectPlayerNum()

    local wanfaItemTagMap = {}
    local checkBoxTagMap = {}
    for i,v in ipairs(wanfaItemTable) do
        wanfaItemTagMap[v:getTag()] = v
        checkBoxTagMap[v:getTag()] = v:getChildByName("checkBox")
    end
end
--]]

function GameCreationViewXZJoker:formatConfigOptBase()
    
    local ret = GameCreationViewXZJoker.super.formatConfigOptBase(self)

    local canFangniu = false
    for idx = #ret.wanfa[1], 1, -1 do
        local ival = ret.wanfa[1][idx]
        
        if g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU == ival then
            canFangniu = true
            break
        end
    end

    local fenVal = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + fenVal - 1
    table.insert(ret.wanfa[1], difenVal)
    
    if canFangniu then
        return ret
    end
    
    -- 未勾选 不可三不带
    table.insert(ret.wanfa[1], g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU_NOT)
    return ret
end



function GameCreationViewXZJoker:getCurrentConfigDataOptBase()
    local ret = GameCreationViewXZJoker.super.getCurrentConfigDataOptBase(self)
    
    local canFangniu = false
    
    for k, v in ipairs(ret.minorWanfa) do
        if v == g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU then
            canFangniu = true
            break
        end
    end

    local difen = tonumber(self.txtDifen:getString()) or 1
    local difenVal = g_gameConstant.GAME_SUB_RULE_MYMJ_DIFEN_MIX + difen - 1
    table.insert(ret.minorWanfa, difenVal)
    
    if canFangniu then
        return ret
    end
    
    table.insert(ret.minorWanfa, g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU_NOT)
    return ret
end


function GameCreationViewXZJoker:initWithTableData(mainRuler, minorRulers, people, totoalRound, isJunTan)
    
    minorRulers = clone(minorRulers)
    
    local ruleFound = false
    for k, v in ipairs(minorRulers) do
        if v == g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU_NOT
          or v == g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU then
            ruleFound = true
            break
        end
    end
    
    -- 当解析为主玩法时，不能取反
    if not ruleFound then
        table.insert(minorRulers, g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU)
    end
    
    GameCreationViewXZJoker.super.initWithTableData(self, mainRuler, minorRulers, people, totoalRound, isJunTan)

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

return GameCreationViewXZJoker   )!  