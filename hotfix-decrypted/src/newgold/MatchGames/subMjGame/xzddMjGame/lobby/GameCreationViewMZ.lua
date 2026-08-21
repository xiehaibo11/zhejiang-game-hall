
local selectedColor = cc.c4b(222, 103, 71, 255)
local unSelectedColor = cc.c4b(160, 113, 93, 255)
local disabledColor = cc.c4b(202, 202, 202, 255)

local GameCreationView = class("GameCreationView", require("app.lobby.GameCreationOptionsBase"))

GameCreationView.resourceFilename = "creation_options_csb/mianzhuMj.csb"
GameCreationView.defaultPeopleIdx = 1
GameCreationView.defaultJushuIdx = 2
GameCreationView.defaultWanfaNameIdx = 1
GameCreationView.defaultJuntan = false
GameCreationView.wanfaDescInfoTable = {

 }
GameCreationView.defaultCostDependPlayerNum = false
GameCreationView.defaultWanfaItemSelect = {
    {
        g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_2_FAN,
        g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN,
        
        g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI,
        g_gameConstant.GAME_SUB_RULE_AUTO_READY,
    }
}

GameCreationView.itemLimitMap = 
{
    {
        item = g_gameConstant.GAME_SUB_RULE_MENQING_KE_JIEPAO,
        limit = {
            selected = {
                g_gameConstant.GAME_SUB_RULE_MENQING,
            },
            unselected = {
            },
            playerNumber = {
            },
        }
    },
    {
        item = g_gameConstant.GAME_SUB_RULE_PINGHU_KE_JIEPAO,
        limit = {
            selected = {
            },
            unselected = {
            },
            playerNumber = {
                3, 2
            },
        }
    },
    {
        item = g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM,
        limit = {
            selected = {
                g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG,
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
    
    self.mMainGameRule = g_gameConstant.GAME_PLAY_RULE_SC_MZMJ
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
                if i >= 1 and i <= 3 then
                    self:selectOneInSomesChoices(wanfaItemTable, i, 1, 3)
                elseif i >= 6 and i <= 8 then
                    self:selectMostOneChoices(wanfaItemTable, i, 6, 3)
                elseif i >= 15 and i <= 16 then
                    self:selectMostOneChoices(wanfaItemTable, i, 15, 2)
                -- 自摸翻番必须勾选
                elseif i == 4 then
                    checkBox:setSelected(true)
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

function GameCreationView:getSelectPlayerNum()
    
    local playerNum = 4
    local wanfaItemTbl = self.WanfaItemsTable[self.selectWanfaPanelIdx]
    
    for i,v in ipairs(wanfaItemTbl) do
        
        -- 换三张 2、3人互斥
        -- 勾选2人玩法，就开2人房间
        if v:getTag() == g_gameConstant.GAME_SUB_RULE_2_REN_WAN then
            local cBox = v:getChildByName("checkBox")
            if not tolua.isnull(cBox) and cBox:isSelected() then
                playerNum = 2
                break
            end
        
        elseif v:getTag() == g_gameConstant.GAME_SUB_RULE_3_REN_WAN then
            local cBox = v:getChildByName("checkBox")
            if not tolua.isnull(cBox) and cBox:isSelected() then
                playerNum = 3
                break
            end
        end
    end
    
    return playerNum
end
--[[
local wanfaItemTagMap = {}
local checkBoxTagMap = {}
local descTagMap = {}

-- 重写 更新选项后 游戏选项是否显示和可用
function GameCreationView:refreshWanfaItemEnable(selectWanfaPanelIdx, wanfaItemTable)    
    
    local playerNumber = self:getSelectPlayerNum()
    
    if #wanfaItemTagMap == 0 then
        for i,v in ipairs(wanfaItemTable) do
            wanfaItemTagMap[v:getTag()] = v
            checkBoxTagMap[v:getTag()] = v:getChildByName("checkBox")
            descTagMap[v:getTag()] = v:getChildByName("txtDesc")
        end
    end
    
    if selectWanfaPanelIdx == 1 then
        for j,data in ipairs(itemLimitMap) do
            if wanfaItemTagMap[data.item] then
                local condition = true
                if data.limit then
                    if data.limit.playerNumber and next(data.limit.playerNumber) then
                        local pNumMap = {}
                        for _,v in ipairs(data.limit.playerNumber) do
                            pNumMap[v] = true
                        end
                        condition = condition and pNumMap[playerNumber]
                    end
                    if data.limit.selected then
                        for _,v in ipairs(data.limit.selected) do
                            if checkBoxTagMap[v] then
                                condition = condition and checkBoxTagMap[v]:isSelected()
                            end
                        end
                    end
                    if data.limit.unselected then
                        for _,v in ipairs(data.limit.unselected) do
                            if checkBoxTagMap[v] then
                                condition = condition and not checkBoxTagMap[v]:isSelected()
                            end
                        end
                    end
                end
                
                wanfaItemTagMap[data.item]:setEnabled(condition)
--                wanfaItemTagMap[data.item]:setVisible(condition)
                if not condition then
                    checkBoxTagMap[data.item]:setSelected(false)
                    descTagMap[data.item]:setColor(disabledColor)
                else
                    if checkBoxTagMap[data.item]:isSelected() then
                        descTagMap[data.item]:setColor(selectedColor)
                    else
                        descTagMap[data.item]:setColor(unSelectedColor)
                    end
                end
                
            end
        end
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
    
    table.removebyvalue(ret.minorWanfa, g_gameConstant.GAME_OPT_MJ_DING_QUE, true)
    
    local playerNum = 4
    
    -- 换三张 2、3人互斥
    for k, v in ipairs(ret.minorWanfa or {}) do
        -- 勾选2人玩法，就开2人房间
        if v == g_gameConstant.GAME_SUB_RULE_2_REN_WAN then
            playerNum = 2
            break
        
        elseif v == g_gameConstant.GAME_SUB_RULE_3_REN_WAN then
            playerNum = 3
            break
        
        -- 四人
        elseif v == g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG then
            break
        end
    end
    
    ret.playerNumber = playerNum
    -- 四人默认有定缺
    if playerNum == 4 then
        table.insert(ret.minorWanfa, g_gameConstant.GAME_OPT_MJ_DING_QUE)
    end
    
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

return GameCreationView+  