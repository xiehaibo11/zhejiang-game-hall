local pukeOperatorButton = class("pukeOperatorButton")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

function pukeOperatorButton:ctor(baseNode,notify,pos , type)

    self.rootNode = baseNode

    self.notify = notify

    self.pos = pos 

    self.type = not type and g_gameConstant.GAME_PDK or type

    self:initNode()
    self:regEvent()
end 

function pukeOperatorButton:regEvent()
    self.rootNode:addChild(eventObj.new("cancelTuoguan", function (event, msg)        
        self:cancelTuoguan()
    end))
end


function pukeOperatorButton:initNode()
    -- csb路径
    local csbPath = LYPDKResource.OperatorBtnRes

    -- if self.type and self.type == g_gameConstant.GAME_SANFU then 
    --     csbPath = LYPDKResource.ResPath .. "SanFuOperateBtnNode.csb";  --操作按钮
    -- end

    -- 加载csb文件
    
    local offsetY = 55
    local offsetX = 0
    if self.type == g_gameConstant.GAME_SANFU or self.type == g_gameConstant.GAME_LIANGFU then 
        offsetY = 90
    elseif self.type == g_gameConstant.GAME_GUANDAN then 
        offsetY = -135
        offsetX = -40
    end


    self.initPos = {x = self.pos.x + offsetX, y = self.pos.y - offsetY}
    local btnRootNode = cc.CSLoader:createNode(csbPath):move(self.pos.x + offsetX ,self.pos.y - offsetY):addTo(self.rootNode)
    
    self.btnRootNode = btnRootNode

    -- PassNode 只有要不起
    self.passNode = btnRootNode:getChildByName("Node_Pass")
    -- OperateNode 包含：提示，出牌，重置
    self.operateNode = btnRootNode:getChildByName("Node_Operate")

    self.qipaiNode = btnRootNode:getChildByName("Node_qipai")
    -- 初始化按钮绑定事件
    self:initBtnEvent()

    self.passNode:setVisible(false)
    self.operateNode:setVisible(false)
    self.qipaiNode:setVisible(false)
end


function pukeOperatorButton:getRootNode()
    return self.btnRootNode
end

function pukeOperatorButton:cancelTuoguan()
    self.tuoGuanNode:setVisible(false)

    self.operateNode:setScale(1)
end



-- 初始化按钮绑定事件
function pukeOperatorButton:initBtnEvent()
    -- 要不起按钮事件
    self.passBtn   = self.passNode:getChildByName("Button_Pass"):onClick(function() 
        self.notify(GameCMD.BTNOPERATE_PASS) 
    end )
    
    if self.passBtn then
        self.passBtn:setPressedActionEnabled(true);
    end

    -- 要的起的对应按钮
    self.tipBtn    = self.operateNode:getChildByName("Button_Tips"):onClick(function() 
        -- self:onPlayTouchedSFX();
        self.notify(GameCMD.BTNOPERATE_TIPS) 
    end
    )
    if self.tipBtn then
        self.tipBtn:setPressedActionEnabled(true);
    end

    self.outBtn    = self.operateNode:getChildByName("Button_Out"):onClick(function() 
        -- self:onPlayTouchedSFX();
        self.notify(GameCMD.BTNOPERATE_OUT) 
    end     
    )
    if self.outBtn then
        self.outBtn:setPressedActionEnabled(true);
    end

    self.resetBtn  = self.operateNode:getChildByName("Button_Reset"):onClick(function() 
        -- self:onPlayTouchedSFX();

        self.notify(GameCMD.BTNOPERATE_RESET) 
    end )
    if self.resetBtn then
        self.resetBtn:setPressedActionEnabled(true);
    end
    
    -- 弃牌按钮事件
    self.qipaiBtn   = self.qipaiNode:getChildByName("Button_qipai"):onClick(function() 
        print("______________________点击弃牌按钮")
        local PlayerTableOperationFuMsg = {}
        PlayerTableOperationFuMsg.operation = g_gameConstant.MAHJONG_OPERTAION_FU_QI_CARDS
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION_FU, PlayerTableOperationFuMsg)
        self:hideAllBtn()
    end )
    if self.qipaiBtn then
        self.qipaiBtn:setPressedActionEnabled(true);
    end
    

    self.cancelBtn  = self.operateNode:getChildByName("Button_cancel"):onClick(function() 
        -- self:onPlayTouchedSFX();
        self.notify(GameCMD.BTNOPERATE_CANCEL) 
    end )
    if self.cancelBtn then
        self.cancelBtn:setPressedActionEnabled(true);
    end
    self.cancelBtn:hide()



    if self.type == g_gameConstant.GAME_GUANDAN or self.type == g_gameConstant.GAME_TUOSANZI  then 
        self.resetBtn:hide()

        local x  , y = self.resetBtn:getPosition()
        self.cancelBtn:setPosition(x - 70, y)

        self.passBtn:setPosition(80 , 0)
        self.qipaiBtn:setPosition(80 , 0)

    end

    self.tuoGuanNode = display.newNode():move(0,0)

    --创建托管UI控件
    self.tuoGuanBtn = ccui.ImageView:create("MatchAH/".."game/qxtuoguan.png", ccui.TextureResType.plistType):setTouchEnabled(true):onClick(function()
        -- 取消托管回调
        self.notify(GameCMD.BTNOPERATE_CANCELTUOGUAN) 
    end)



    
    local tuoGuanMask = display.newLayer({r=0,g=0,b=0,a=100}):setContentSize(display.width, 195)
    
    if self.type and self.type == g_gameConstant.GAME_SANFU then 
        tuoGuanMask:setPosition(0,64)
    elseif self.type and self.type == g_gameConstant.GAME_LIANGFU then 
        tuoGuanMask:setPosition(0,64)
    elseif self.type and self.type == g_gameConstant.GAME_DDZ then 
        tuoGuanMask:setPosition(0,60)
        tuoGuanMask:size(display.width ,156 )
    elseif self.type and self.type == g_gameConstant.GAME_TUOSANZI then 
        tuoGuanMask:size(display.width ,200 )
        tuoGuanMask:setPosition(0,60)
    elseif self.type and self.type == g_gameConstant.GAME_GUANDAN then 
        tuoGuanMask:size(display.width ,160 )
        tuoGuanMask:setPosition(0,60)
    else
        tuoGuanMask:setPosition(0,16)
    end
    


    
    self.tuoGuanBtn:setPosition(tuoGuanMask:getContentSize().width/2,tuoGuanMask:getContentSize().height/2):addTo(tuoGuanMask)


    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() ~= 0 then 
        self.tuoGuanBtn:setPositionY(tuoGuanMask:getContentSize().height/2 + 20)
        g_gameGlobal:newLabel({text = "托管代打只会出最小牌或者要不起等操作" , fontColor = display.COLOR_WHITE , fontSize = 25})
        :addTo(tuoGuanMask):setPosition(tuoGuanMask:getContentSize().width/2 , tuoGuanMask:getContentSize().height/2 - 40)
    end

    self.rootNode:addChild(self.tuoGuanNode)
    self.tuoGuanNode:addChild(tuoGuanMask)
    -- self.tuoGuanNode:addChild(self.tuoGuanBtn)

    self.tuoGuanNode:setVisible(false)
end 

function pukeOperatorButton:setTuoGuanStatus(isTuoGuan)
     --[[
    -- 根据状态隐藏
     self.passNode:setVisible(not isTuoGuan)
     self.operateNode:setVisible(not isTuoGuan)
     -- 显示
     self.tuoGuanNode:setVisible(isTuoGuan)
    ]]

    -- isTuoGuan = true
    self.operateNode:setScale(isTuoGuan and 0  or 1 )

    self.tuoGuanNode:setVisible(isTuoGuan)

end


function pukeOperatorButton:onPlayTouchedSFX(  )
    -- body
    NG.soundManager:playMatchEffect("sound/audio_button_click.mp3");    
end

-- 辨别需要显示按钮的类型
function pukeOperatorButton:showBtnPanel(Kind , params )

    if Kind == GameCMD.OPERATE_PASS then 
        self:showPassBtn()
    elseif Kind == GameCMD.OPERATE_MUSTOUT then 
        self:showOutBtn()
    elseif Kind == GameCMD.OPERATE_QIPAI then 
        self:showQipaiBtn(  params )
    else
        asset(false,"错误：显示操作按钮参数不对~！")
    end 
end 

-- 显示要不起按钮
function pukeOperatorButton:showPassBtn()
    -- 隐藏
    self.operateNode:setVisible(false)
    -- 显示
    self.passNode:setVisible(true)
    self.qipaiNode:setVisible(false)
end 

-- 显示：提示、出牌按钮
function pukeOperatorButton:showOutBtn()
    -- 隐藏
    self.operateNode:setVisible(true)
    -- 显示
    self.passNode:setVisible(false)
    self.qipaiNode:setVisible(false)
    --self:setOutBtnStatus(false)
end
--显示弃牌按钮
function pukeOperatorButton:showQipaiBtn(params)

    local showOp = params.showOp or false
    -- 隐藏
    self.operateNode:setVisible(showOp and true or false)
    -- 显示
    self.passNode:setVisible(false)

    if showOp then 
        self.qipaiNode:setPositionX( -280 )
    end

    self.qipaiNode:setVisible(true)
end
-- 隐藏操作按钮
function pukeOperatorButton:hideAllBtn()
    self.operateNode:setVisible(false)
    self.passNode:setVisible(false)
    self.qipaiNode:setVisible(false)
end 

function pukeOperatorButton:showCancelBtn(bool)

    -- print("_--------bool-- = "  ,bool)

    self.cancelBtn:setVisible(bool)
    if bool then
        self.operateNode:move(80 , 0)
        -- self.cancelBtn:move(0 , 50)
    else

        if self.type == g_gameConstant.GAME_GUANDAN or self.type == g_gameConstant.GAME_TUOSANZI  then 
            self.operateNode:move(80 , 0)
        else
            self.operateNode:move(0 , 0)
        end

        
        -- self.cancelBtn:move(0 , 50)
    end

end 

--重选改为上手牌,针对斗地主
function pukeOperatorButton:setLastHandBtn(flag)
    self.resetBtn:loadTextures("game/lyPuKe/ddzUI/btn_last_hand.png", "game/lyPuKe/ddzUI/btn_last_hand.png", "game/lyPuKe/ddzUI/btn_last_hand_2.png",ccui.TextureResType.localType)
    self.resetBtn:setEnabled(flag)
end
--斗地主不要重选按钮
function pukeOperatorButton:setResetBtnVisible()
    self.resetBtn:hide()
    self.tipBtn:setPositionX(self.resetBtn:getPositionX()+g_gameGlobal:getFixPosX(115))
    self.outBtn:setPositionX(self.resetBtn:getPositionX()+g_gameGlobal:getFixPosX(295))
    self.cancelBtn:setPositionX(self.resetBtn:getPositionX()-g_gameGlobal:getFixPosX(65))
end

-- 出牌按钮根据牌型改变状态
function pukeOperatorButton:setOutBtnStatus(status)
    -- 禁用 or 可用
    self.outBtn:setEnabled(status)
end 

function pukeOperatorButton:getInitPositionY()
    return self.initPos.y
end

function pukeOperatorButton:getPositionY()
    return self.btnRootNode:getPositionY()
end

function pukeOperatorButton:setInitPositionY()
    self.btnRootNode:setPositionY(self.initPos.y)
end

function pukeOperatorButton:setPositionY(posy)
    self.btnRootNode:setPositionY(posy)
end

return pukeOperatorButton

R(