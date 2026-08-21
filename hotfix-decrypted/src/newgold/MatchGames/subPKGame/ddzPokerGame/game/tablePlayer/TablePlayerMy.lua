local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerMy = class("TablePlayerMy", tablePlayerBase)
local OpBtnLayer = import("..common.DDZBtnOperate")
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")

function TablePlayerMy:ctor()

    TablePlayerMy.super.ctor(self)

    self.posState = 1
    -- 创建并注册按钮对象
    self.opBtnObj = OpBtnLayer.new(self.opBtnNode,handler(self,self.onClickBtnCallBack))

    -- 托管背景
    self.touGuanBg = ccui.Layout:create()
    :setVisible(false)
    :addTo(self, 200)
    self.touGuanBg:setTouchEnabled(true)
    self.touGuanBg:setContentSize(g_gameGlobal:getDisplayWidth(),g_gameGlobal:getDisplayHeight())

    local tuoguanMask = ccui.ImageView:create("noplist/mask2.png", ccui.TextureResType.localType):setAnchorPoint(cc.p(0,0))
    :setScale9Enabled(true)
    :setContentSize(g_gameGlobal:getDisplayWidth(), 150)
    :move(0, -10)
    :addTo(self.touGuanBg)

    --取消托管
    self.tuoGuanCancel = ccui.ImageView:create("Match/".."game/qxtuoguan.png", ccui.TextureResType.plistType)
    :move(tuoguanMask:getContentSize().width/2, tuoguanMask:getContentSize().height/2 + 20)
    :addTo(tuoguanMask)
    :setScale(0.8)
    :setTouchEnabled(true)
    :onClick(handler(self, self.cancelTuoGuan))

    --托管提示语
    self.tipLabel = ccui.Text:create("托管中,系统将自动出牌", "", 22)
    :setTextColor(cc.c4b(255, 255, 255, 255))
    :move(tuoguanMask:getContentSize().width/2, tuoguanMask:getContentSize().height/2 - 30)
    :addTo(tuoguanMask)
    self.tipLabel:setFontName("fonts/fzzhunyuanjianti.ttf")
    self.tipLabel:enableOutline(cc.c4b(0,0,0,255), 1)
end 

function TablePlayerMy:cancelTuoGuan( event )
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_SET_TUOGUAN
    playerGameOpertaionMsg.opValue = 0
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    self:setTuoGuanState(false)
end

function TablePlayerMy:setTuoGuanState( state )
    self.touGuanBg:setVisible(state)
    --手牌是否可以触摸和托管状态相反
    self.canTouchHandCard = not state
    self.isTuoGuan = state
    ExternalFunc.sendCustomEvent(state and eventType.TUO_GUAN_BEGAIN or eventType.TUO_GUAN_CANCEL)
end

-- 播放发牌动画
function TablePlayerMy:playStartCardsAnimation(handData,mustOutCard)
    -- 清理数据
    TablePlayerMy.super.initData(self)
    -- 设置必出的牌
    self.pukeData.GParames.mustOutData = mustOutCard

    self:updateHandCardUI(handData,true)
end

-- 刷新手牌UI
function TablePlayerMy:updateHandCardUI(handData,isStart)
    -- 排序手牌
    if type(handData) == "table" and next(handData) ~= nil then 
        self.publicFunc.sortByCardLogic(handData,1)
    end

    self.handCardData = handData

    -- 清除选牌数据
    self.pukeData.GParames.selectData = {}

    -- 若手牌数量到达报警数量，则显示报警动画
    if #handData == self.GameCMD.WARN_CARDNUM then 
        --self.warningNode:showWarningAnimation()
    end 

    -- 重置手牌数据
    self.pukeData.GParames.handData = handData
    -- 移除手牌节点
    local childNum = self.handCardNode:getChildrenCount()
    if childNum > 0 then self.handCardNode:removeAllChildren() end

    local isAdd = true 
    -- 回放模式不添加手牌监听事件
    if g_gameGlobal:getIsPlayingGameLog() or isStart == true then 
        isAdd = false
    end 

    -- 创建手牌节点  
    local nodes = self.spriteCard.newHandCardPanel(handData, 1, isAdd, handler(self, self.onClickCardCallBack))
    -- 设置手牌锚点和大小
    nodes:setAnchorPoint(0.5,0):setScale(1.07)
    -- 附加到父节点
    self.handCardNode:addChild(nodes)

    if isStart then
        local childs = nodes:getChildren()
        local childNum = #childs
        -- 先隐藏
        for k,v in ipairs(childs) do 
            v:setVisible(false)
        end 

        -- 屏幕外的点
        local outDisplayPos = cc.p(display.width*1.5,0)
        local time = 0.25
        local speed = 3000
        for i=1, childNum do 
            local obj = childs[i]
            performWithDelay(self.handCardNode,function()
                if not tolua.isnull(nodes) and not tolua.isnull(nodes:getParent()) then 
                    local backCard = self.spriteCard.newCard(1,2)
                    nodes:addChild(backCard)
                    backCard:setAnchorPoint(0,0)
                    backCard:setPosition(outDisplayPos)
                    local toPos = cc.p(obj:getPositionX(),obj:getPositionY())
                    local moveTime = (outDisplayPos.x - toPos.x)/speed
                    local mAction = cc.MoveTo:create(moveTime,toPos)

                    backCard:runAction(cc.Sequence:create(mAction,cc.CallFunc:create(function()
                        if not tolua.isnull(obj) then 
                            obj:setVisible(true)
                            performWithDelay(backCard,function()
                                backCard:removeSelf()
                                if i == childNum then 
                                    self:updateHandCardUI(self.handCardData)
                                end 
                            end,0)
                        end 
                    end)))
                end 
            end,0.04*i)
        end 
    end 
end 


--==============================--
--desc:点击操作按钮回调函数
--time:2019-03-04 02:54:36
--@return 
--==============================--
function TablePlayerMy:onClickBtnCallBack(kind)
    
    if kind == self.GameCMD.BTNOPERATE_ROB_DZ then 
        self:sendRobOrCallDzMsg(1,101)
    elseif kind == self.GameCMD.BTNOPERATE_NO_ROB then 
        self:sendRobOrCallDzMsg(0,101)
    elseif kind == self.GameCMD.BTNOPERATE_CALL_DZ then 
        self:sendRobOrCallDzMsg(1,102)
    elseif kind == self.GameCMD.BTNOPERATE_NO_CALL then 
        self:sendRobOrCallDzMsg(0,102)
    elseif kind == self.GameCMD.BTNOPERATE_PASS then                                 -- 不出按钮响应
        self:sendPassCardMsg()
    elseif kind == self.GameCMD.BTNOPERATE_OUT  then                             -- 出牌按钮响应

         -- 判断牌的合法性
         local result,errorCode = self:onClickCardCallBack(self.pukeData.GParames.selectData)

         if result == true then  
            self:sendOutCardMsg(self.pukeData.GParames.selectData)
         else
            -- 显示不合法提示
            self:showCardTypeAction(errorCode)
            --ShowToastMsg("出牌不合法~~！")
         end 
    elseif kind == self.GameCMD.BTNOPERATE_TIPS  then                            -- 提示出牌响应
        local count = self.pukeData.GParames.tipsIndex
        local tipsData = self.pukeData.GParames.tipsData[count]
        
        local handData = self.pukeData.GParames.handData
        local outData = self.pukeData.GParames.lastOutData
        local mustOutCard = self.pukeData.GParames.mustOutData

        if next(self.pukeData.GParames.tipsData) == nil then 
            local tipsCount = 0
            self.pukeData.GParames.tipsData,tipsCount = self.logicAnalysis.aiTips(handData,outData,mustOutCard,false,true,self.isBaoDan)

            self.pukeData.GParames.tipsIndex = 1
        end 

        -- 获取对应的数据
        local count = self.pukeData.GParames.tipsIndex
        local tipsData = self.pukeData.GParames.tipsData[count]

        -- 若出牌所以没有到达最大时， 出牌索引加1，否则强制置为1
        if self.pukeData.GParames.tipsIndex == #self.pukeData.GParames.tipsData then 
            self.pukeData.GParames.tipsIndex = 1
        else
            self.pukeData.GParames.tipsIndex = self.pukeData.GParames.tipsIndex + 1      
        end
         
        -- 调用手牌响应提示功能函数
        self.spriteCard.setCardStatusByTipsData(self.handCardNode,tipsData)
        -- 临时禁用
        self.pukeData.GParames.selectData = tipsData or {}
    
    -----
    -- 不加倍
    elseif kind == self.GameCMD.BTNOPERATE_JIA_BEI_NO then
        self:sendRobOrCallDzMsg(0, g_gameConstant.POKER_OPERATION_NOTIFY_JIA_BEI)
    -- 加倍
    elseif kind == self.GameCMD.BTNOPERATE_JIA_BEI then
        self:sendRobOrCallDzMsg(1, g_gameConstant.POKER_OPERATION_NOTIFY_JIA_BEI)
    
    -----
    -- 叫分
    -- 叫分1
    elseif kind == self.GameCMD.BTNOPERATE_JIAO_FEN_1 then
        self:sendRobOrCallFenMsg(1, 102, 1)
        
    -- 叫分2
    elseif kind == self.GameCMD.BTNOPERATE_JIAO_FEN_2 then
        self:sendRobOrCallFenMsg(1, 102, 2)
        
    -- 叫分3
    elseif kind == self.GameCMD.BTNOPERATE_JIAO_FEN_3 then
        self:sendRobOrCallFenMsg(1, 102, 3)
        
    end 
end


function TablePlayerMy:testCheckTipFunc()
    local outData = {}
    local handData = {11,11,11,10,10,10,1,12,8,6,6,4}
    local mustOutCard = 0
    local isNew = true 
    local isSelectAllHandCard = true

    local outType,outMiniValue = self.logicAnalysis.getCardType(outData)
    local isValid,errorCode = self.logicAnalysis.compareWithOutData(handData,isSelectAllHandCard,outType,outMiniValue,mustOutCard,isNew,self.isBaoDan)
    
    local changeData,changeCount,validCount =self.logicAnalysis.aiTips(handData,outData,mustOutCard,false,false,true,self.isBaoDan)

end 

-- 点击牌回调函数
function TablePlayerMy:onClickCardCallBack(data)

    -- 选牌的增量（可负可正）
    local addNum = #data - #self.pukeData.GParames.selectData

    -- 每次点击牌以后，出牌提示索引要重新置为1
    self.pukeData.GParames.tipsIndex = 1
    self.pukeData.GParames.selectData = data or {}

    -- do return true end 

    if next(data) == nil then 
        return false,self.GameCMD.OUTTYPE_UNSELECTED_CARD
    end 

    local outData = self.pukeData.GParames.lastOutData
    local isNew = false 
    if next(outData) == nil then 
        isNew = true 
    end 
    local outType,outMiniValue = self.logicAnalysis.getCardType(outData)

    -- 相信服务器的数据，若出牌数据判断为-1时改为0
    if outType == self.GameCMD.OUTTYPE_ERROR then outType = self.GameCMD.OUTTYPE_NOCARD end

    local isSelectAllHandCard = #self.pukeData.GParames.selectData == #self.pukeData.GParames.handData
    local mustOutCard = self.pukeData.GParames.mustOutData

    --传入一个出牌的数量，连队或者顺子类型时，要判断数量是否相等
    local isValid,errorCode = self.logicAnalysis.compareWithOutData(data,isSelectAllHandCard,outType,outMiniValue,mustOutCard,isNew,#outData)

    -- 满足条件才进入，1：必须是false类型；2：划牌数量一次性大于1；3、选牌总数大于出牌总数；4、总牌数大于4
    if isValid == false and addNum >= 3 and (#data - #outData > 0) and #data > 4 then 
        -- 修改所选牌数据
        local isAllData = #data == #self.pukeData.GParames.handData and true or false
        local changeData,changeCount,validCount = self.logicAnalysis.aiTips(data,outData,mustOutCard,true,isAllData,self.isBaoDan)

        if validCount == 1 then 
            self.pukeData.GParames.selectData = changeData[1] or {}
            -- 刷新手牌选中数据
            self.spriteCard.setCardStatusByTipsData(self.handCardNode,changeData[1])
            isValid = true 
        end
    end

    return isValid,errorCode
end 

function TablePlayerMy:outCardAction(status,outData,handData,lastTableID, isNew)
    -- 将必出牌恢复原来数据
    self.pukeData.GParames.mustOutData = 0
    -- 刷新上轮出牌ID
    self.pukeData.GParames.lastTableID = lastTableID
    -- 刷新出牌数据
    self.pukeData.GParames.lastOutData = outData
    
    -- 隐藏操作按钮面板
    self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_HIDE)
    -- 刷新手牌数据
    if type(handData) == "table" then 
        self:updateHandCardUI(handData)
    end 
    -- 刷新出牌数据（若有出牌动画，则播放出牌动画）
    local outType,outValue = self:updateOutCardUI(outData,true)

    if outType > 0 then
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzEffectFileForOperation(outType,self.sex or 0))
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzPaiValue(outValue,outType,self.sex or 0))
    end


    -- 播放音效
    if #handData == 1 then
       -- 延时0.5秒报单
    else

    end

    -- 动画

      -- 若status不为true，那说明并非自己操作，这时只刷新出牌数据
      if status == false then 
          self.pukeData.GParames.lastOutData = outData
          return
      end

      self.pukeData.GParames.selectData = {}
end


function TablePlayerMy:passCardAction(status)

    TablePlayerMy.super.passCardAction(self)
    -- 隐藏操作按钮面板
    self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_HIDE)
    -- 
end

-- 显示出牌状态
-- 参数1：闹钟显示开始倒计时时间
-- 参数2：是否为自己标识位
function TablePlayerMy:showOutCardStatus(time, status,isNew)

    -- 若该轮为新的一轮时，上次出牌数据要刷新掉
    if isNew == true then
        self.pukeData.GParames.lastOutData = {}
        -- 隐藏要不起图片
        --self:hideYaoBuQiAnimation()
    end

    if status == false then 
        -- 若牌权不为自己，那么就清理掉自己的UI数据
        self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_HIDE)
        -- 隐藏自己的闹钟
        --self.alaramClockNode:hideAlarmClockAnimation();
        return
    end

    -- 更新牌权
    self.pukeData.GParames.turnToSelf = true 

    -- 隐藏要不起图片
    --self:hideYaoBuQiAnimation()

    -- 判断上轮玩家是否为自己，若是为自己，那么就要清空上轮出牌数据，因为新的一轮可以出任意符合牌规的牌
    -- if self.pukeData.GParames.lastTableID == 1 then
    --     self.pukeData.GParames.lastOutData = {}
    -- end

    -- 清理掉自己以前出过的牌
    self.publicFunc.delAllChildrenNode(self.outCardNode)

    local outData = self.pukeData.GParames.lastOutData
    local handData = self.pukeData.GParames.handData

    local tipsCount,validCount = 0,0
    -- 获取提示的牌
    self.pukeData.GParames.tipsData,tipsCount,validCount = self.logicAnalysis.aiTips(handData,outData,self.pukeData.GParames.mustOutData,false,true,self.isBaoDan)

    self.pukeData.GParames.tipsIndex = 1
    
    -- date：20190918 产品要求取消斗地主自动出完与自动提牌 hulin
    -- 若手牌只剩最后一手牌数据，且出牌权在自己，那么就全出   
--    local isOutData = self.pukeData.GParames.tipsData[1] or {}
--    if #isOutData == #handData and isNew == true then 
--        local callBack = function()
--            self:sendOutCardMsg(isOutData)
--        end

--        if self.logicAnalysis.isLastCardsCanOut(isOutData) then 
--            performWithDelay(self,callBack,2)
--        end 
--    end

    -- 显示按钮
    if validCount > 0 then

        local btnKind = isNew and self.GameCMD.OPERATION_BTN_STATE_FIRST or self.GameCMD.OPERATION_BTN_STATE_SECOND
 
        self:showOpBtnByState(btnKind)
        -- 只有一手牌大得过上家时，弹出该手牌
--        if validCount == 1 then
--            self.pukeData.GParames.selectData = isOutData or {}
--            self.spriteCard.setCardStatusByTipsData(self.handCardNode,isOutData)
--        end
    else
        -- 显示要不起按钮
        self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_PASS)
        -- 延时两秒，直接过牌
        local passFunc = function()
            self:sendPassCardMsg()
        end
        
        -- performWithDelay(self,passFunc, 0.5)
    end

    -- 显示闹钟
    --self.alaramClockNode:showAlarmClockAnimation(time)
end

-- 用于断线重连重置出牌数据
function TablePlayerMy:setReconnectData(lastOutData,mustOutCard)
    self.pukeData.GParames.mustOutData = mustOutCard
    self.pukeData.GParames.lastOutData = lastOutData[#lastOutData] or {}
end







------------------------------------------------  消息函数  --------------------------------------------
function TablePlayerMy:sendOutCardMsg(card)

    local msgStruct = {}
    msgStruct.operation = g_gameConstant.MAHJONG_OPERTAION_CHU
    msgStruct.putOutCards = card
    msgStruct.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msgStruct)

end 

function TablePlayerMy:sendPassCardMsg()

    local msgStruct = {}
    msgStruct.operation = g_gameConstant.MAHJONG_OPERTAION_CANCEL
    msgStruct.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msgStruct)

end 

-- 玩家抢地主、叫地主
function TablePlayerMy:sendRobOrCallDzMsg(opValue,operation)
    local sendMsg = {}
    sendMsg.operation = operation
    sendMsg.opValue = opValue
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, sendMsg)
end 

function TablePlayerMy:sendRobOrCallFenMsg(opValue, operation, fen)
    local sendMsg = {}
    sendMsg.operation = operation
    sendMsg.opValue = opValue
    sendMsg.unused0 = fen
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, sendMsg)
end 

function TablePlayerMy:checkHand3Big()
    if not self.handCardData then
        return
    end
    
    local handData = self.handCardData
    local bigCount = 0
    for k, v in ipairs(handData) do
        local value, color = self.publicFunc.getCardLogicValue(v)
        if value >= 15 then
            bigCount = bigCount + 1
        end
    end
    
    return bigCount >= 3
end

function TablePlayerMy:setJiaofenState(fen)
    if tolua.isnull(self.opBtnObj) then
        return
    end
    
    local hand3BigAnd3BigInRule = false
    -- 三大必抓时，必须叫三分，不可选择1，2分； 优化需求 20200525
    if g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_PK_RULE_SAN_DA_BI_ZHUA) then
        
        if self:checkHand3Big() then
            hand3BigAnd3BigInRule = true
        end
    end
    
    self.opBtnObj:setJiaofenState(fen, hand3BigAnd3BigInRule)
end

return TablePlayerMy�I  