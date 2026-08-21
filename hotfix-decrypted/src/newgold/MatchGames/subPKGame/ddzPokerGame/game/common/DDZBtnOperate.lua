local GameCMD = import(".DDZCMD")
local DDZBtnOperate = class("pukeOperatorButton",cc.load("mvc").ViewBase)
local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")


DDZBtnOperate.RESOURCE_FILENAME = "poker/ddzGame/DDZOperateBtnNode.csb"

--节点绑定及事件
DDZBtnOperate.RESOURCE_BINDING = {
    -------------------  要不起   -----------------
    Node_Pass = {
        varname="pass_Node",
    },

    ["Node_Pass/Button_Pass"] = {
        varname = "btn_pass",
        events={
            {event="click",method="on_touch_func"}
        }
    },

    -------------------  首出牌   -----------------
    Node_First_Out = {
        varname="first_Node",
    },
    ["Node_First_Out/Button_Out"] = {
        varname = "btn_f_out",
        events={
            {event="click",method="on_touch_func"}
        }
    },
    ["Node_First_Out/Button_Tips"] = {
        varname = "btn_f_tips",
        events={
            {event="click",method="on_touch_func"}
        }
    },

    -------------------  次出牌   -----------------
    Node_Operated = {
        varname="second_Node",
    },
    ["Node_Operated/Button_No_Out"] = {
        varname = "btn_s_no_out",
        events={
            {event="click",method="on_touch_func"}
        }
    },
    ["Node_Operated/Button_Out"] = {
        varname = "btn_s_out",
        events={
            {event="click",method="on_touch_func"}
        }
    },
    ["Node_Operated/Button_Tips"] = {
        varname = "btn_s_tips",
        events={
            {event="click",method="on_touch_func"}
        }
    },

    -------------------  抢地主   -----------------
    Node_Rob_Dz = {
        varname="rob_dz_Node",
    },
    ["Node_Rob_Dz/Button_Rob"] = {
        varname = "btn_rob_dz",
        events={
            {event="click",method="on_touch_func"}
        }
    },
    ["Node_Rob_Dz/Button_No_Rob"] = {
        varname = "btn_no_rob",
        events={
            {event="click",method="on_touch_func"}
        }
    },



    -------------------  叫地主   -----------------
    Node_Call_Dz = {
        varname="call_dz_Node",
    },
    ["Node_Call_Dz/Button_Call"] = {            -- 叫地主
        varname = "btn_call_dz",  
        events={
            {event="click",method="on_touch_func"}
        }
    },
    ["Node_Call_Dz/Button_No_Call"] = {            -- 不叫
        varname = "btn_no_call",
        events={
            {event="click",method="on_touch_func"}
        }
    },
    
    
    -----
    -- 叫分
    Node_Jiao_Fen = {
        varname="jiaofen_Node",
    },
    
    ["Node_Jiao_Fen/Button_bujiao"] = {
        varname="btn_jiaofen_no",
        events={
            {event="click",method="on_touch_func"}
        }
    },
    
    Node_Jia_Bei = {
        varname="jiabei_node",
    },
    
    ["Node_Jia_Bei/Button_jia"] = {
        varname = "btn_jia_bei",
        events={
            {event="click",method="on_touch_func"}
        }
    },
    
    ["Node_Jia_Bei/Button_bujia"] = {
        varname = "btn_jia_bei_no",
        events={
            {event="click",method="on_touch_func"}
        }
    },
}

-- 参数1：csb附加节点
-- 参数2：回调函数
function DDZBtnOperate:ctor(rootNode,notify)

    DDZBtnOperate.super.ctor(self)

    self.rootNode = rootNode
    
    self.notify = notify

    if not tolua.isnull(self.resourceNode_) and not tolua.isnull(self.rootNode) then 
        self.rootNode:addChild(self)
        self.resourceNode_:setVisible(false)
    end 

    local btns = {self.btn_pass,self.btn_s_no_out,self.btn_f_out,self.btn_s_out,
        self.btn_s_tips,self.btn_f_tips,self.btn_rob_dz,self.btn_no_rob,
        self.btn_call_dz,self.btn_no_call,
        self.btn_jiaofen_no, self.btn_jia_bei, self.btn_jia_bei_no
    }
    for k, v in ipairs(btns) do 
        if not tolua.isnull(v) then 
            v:setPressedActionEnabled(true)
        end 
    end
    
    -- 叫分按钮
    if not tolua.isnull(self.jiaofen_Node) then
        for k = 1, 3 do
            local btn = self.jiaofen_Node:getChildByName("Button_"..k)
            if not tolua.isnull(btn) then
                btn:onClick(handler(self, self.on_touch_jiaofen))
                btn:setTag(k)
                btn:setPressedActionEnabled(true)
                self["jiaofenBtn"..k] = btn
            end
        end
    end

    local cardPanel = self.resourceNode_:getChildByName("cardPanel")
    local Panel_CardType = self.resourceNode_:getChildByName("Panel_CardType")
    if cardPanel then cardPanel:setVisible(false) end
    if Panel_CardType then Panel_CardType:setVisible(false) end
end

function DDZBtnOperate:showBtnState(kind)
    -- body
    self.pass_Node:setVisible(GameCMD.OPERATION_BTN_STATE_PASS == kind)
    self.first_Node:setVisible(GameCMD.OPERATION_BTN_STATE_FIRST  == kind)
    self.second_Node:setVisible(GameCMD.OPERATION_BTN_STATE_SECOND  == kind)
    self.call_dz_Node:setVisible(GameCMD.OPERATION_BTN_STATE_CALL_DZ  == kind)
    self.rob_dz_Node:setVisible(GameCMD.OPERATION_BTN_STATE_ROB_DZ  == kind)
    self.jiaofen_Node:setVisible(GameCMD.OPERATION_BTN_STATE_JIAO_FEN == kind)
    self.jiabei_node:setVisible(GameCMD.OPERATION_BTN_STATE_JIA_BEI == kind)
    self.resourceNode_:setVisible(true)
end

-- 
function DDZBtnOperate:on_touch_func( sender )

    if type(self.notify) ~= "function" then 
        return
    end 
    
    if sender == self.btn_pass or sender == self.btn_s_no_out then      -- 要不起 or 不出
        self.notify(GameCMD.BTNOPERATE_PASS)
        ExternalFunc.widgetTouchEnabledDelay(sender, 0.3)
    elseif sender == self.btn_f_out or sender == self.btn_s_out then    -- 出牌
        self.notify(GameCMD.BTNOPERATE_OUT)
        ExternalFunc.widgetTouchEnabledDelay(sender, 0.3)
    elseif sender == self.btn_s_tips or sender == self.btn_f_tips then                               -- 提示
        self.notify(GameCMD.BTNOPERATE_TIPS)
    elseif sender == self.btn_call_dz then              -- 叫地主
        self.notify(GameCMD.BTNOPERATE_CALL_DZ)
    elseif sender == self.btn_no_call then              -- 不叫
        self.notify(GameCMD.BTNOPERATE_NO_CALL)
    elseif sender == self.btn_rob_dz then               -- 抢地主
        self.notify(GameCMD.BTNOPERATE_ROB_DZ)
    elseif sender == self.btn_no_rob then               -- 不抢
        self.notify(GameCMD.BTNOPERATE_NO_ROB)
    
    elseif sender == self.btn_jia_bei then              -- 加倍
        self.notify(GameCMD.BTNOPERATE_JIA_BEI)
    
    elseif sender == self.btn_jia_bei_no then           -- 不加倍
        self.notify(GameCMD.BTNOPERATE_JIA_BEI_NO)
        
    elseif sender == self.btn_jiaofen_no then           -- 不叫分
        self.notify(GameCMD.BTNOPERATE_NO_CALL)
        g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 195)
    end 
end

function DDZBtnOperate:on_touch_jiaofen(sender)
    local tag = sender:getTag()
    if type(tag) == "number" and tag ~= 0 then
        if tag == 1 then
            self.notify(GameCMD.BTNOPERATE_JIAO_FEN_1)
        elseif tag == 2 then
            self.notify(GameCMD.BTNOPERATE_JIAO_FEN_2)
        elseif tag == 3 then
            self.notify(GameCMD.BTNOPERATE_JIAO_FEN_3)
        end
        g_gameGlobal:getClickCountInstance():nodeClick(g_gameConstant.BTN_COUNT_VALUE + 195 + tag)
    end
end

function DDZBtnOperate:setJiaofenState(fen, hand3BigAnd3BigInRule)
    
    -- 叫分按钮
    if tolua.isnull(self.jiaofen_Node) then
        return
    end
    
    -- 三大且三大必抓必抓 必须叫三分
    if hand3BigAnd3BigInRule then
        fen = 2
    end
    
    -- 不叫
    self.btn_jiaofen_no:setEnabled(not hand3BigAnd3BigInRule)
    
    for k = 1, fen do
        local btn = self["jiaofenBtn"..k]
        if not tolua.isnull(btn) then
            btn:setEnabled(false)
        end
    end
end


function DDZBtnOperate:delayTrigEvent(delay)
    local btnObj = self.btn_jia_bei_no
    if tolua.isnull(btnObj) then
        return
    end
    
    performWithDelay(btnObj, function ()
        self:on_touch_func(btnObj)
        btnObj:stopAllActions()
    end, delay)
end


return DDZBtnOperate

!  