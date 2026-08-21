local pukeTableBase = require("newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTableBase")
local pukeTableMy   = class("pukeTableMy", pukeTableBase)
local alaramClock   = require("newgold.MatchGames.PDK.LYPDK.common.pukeAlarmClock")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))


function pukeTableMy:playOutCardsAnimation( ... )
    -- body
end

function pukeTableMy:initPaiUIs(  )

    -- body
    pukeTableMy.super.initPaiUIs(self);

    self.anchpos = cc.p(0.5, 0)

    local pos = cc.p(self.handCardsEndPostion.x , self.handCardsEndPostion.y + 40)

    self.alaramClockNode = alaramClock.new(self,pos,cc.p(0, 0))

    self:regEvent()

end

function pukeTableMy:regEvent()

    
    self:addChild(eventObj.new("resetHandCard", function (event, msg)        
        self:btnNotify(  GameCMD.BTNOPERATE_RESET )
    end))

end


function pukeTableMy:playStartCardsAnimation(handData,mustOutCard)

    -- 清理数据
    pukeTableMy.super.initData(self)

    -- 设置必出的牌
    self.pukeData.GParames.mustOutData = mustOutCard

    -- 打乱手牌排序
    PublicFunc.randomData(handData)

    -- 绘制手牌 
    if g_gameGlobal:isZYPDK() then 
        self:updateHandCardUI(handData)
        local analyseResult = self.logicAnalysis.analyseCardData(handData )
        local bombData,bombCount = self.logicAnalysis.analyseBomb(analyseResult,1)
        if bombCount > 0 then
            NG.soundManager:playMatchEffect("sound/PDKZhadan.mp3")
        end
        return 
    else
        self:updateHandCardUI(handData,true)
    end


    local nodes = self.handCardsParentNode:getChildren()
    local childs = nodes[1]:getChildren()
    local childsPos = {}                                    -- 子节点位置

     -- 隐藏手牌
    for k, v in ipairs(childs) do 
        v:setVisible(false)
        childsPos[k] = cc.p(0,0)
        childsPos[k].x,childsPos.y = v:getPosition()
    end 

    -- 设置发牌位置为视图正中间
    local sendCardPos = cc.p(display.cx,display.cy)     
    
    PublicFunc.delAllChildrenNode(self.sendNode)
    -- 发牌节点
    local sendNode = display.newNode():move(sendCardPos):addTo(self)
    sendNode:registerScriptHandler(function (event)
        if event == "exit" then
            self.stopSendAni = true
        end
    end)

    self.sendNode = sendNode

    -- 开始发牌
    local sendType = GameCMD.SENDCARD_MODEL
    local sendNum = #sendType                   -- 发送的次数
    local sendSchedulerTime = nil               -- 次数定时器
    local sendSchedulerNum = nil                -- 张数定时器
    local tmies = math.floor(self.handCardStartAnimationTime/sendNum)       -- 没隔多少秒发送sendType[i]张牌
    if not self.handCardsParentNode then return end
    local mTime = 0.04
    for i=1, 16 do
        performWithDelay(self, function()
        if self == nil or GameCMD == nil or GameCMD.MAX_HANDCOUNT == nil or tolua.isnull(childs[i]) then
            return
        end
        if not tolua.isnull(childs[i]) then
            childs[i]:setVisible(true)
            childs[i]:setPosition(cc.p(childsPos[i].x,childsPos[i].y+15))
            local mAction = cc.MoveTo:create(mTime,childsPos[i])
            childs[i]:runAction(mAction)
        end
     end ,mTime*i)
    end
    performWithDelay(self, function()
        if self == nil or GameCMD == nil or GameCMD.MAX_HANDCOUNT == nil or childs == nil then
            return
        end
        self:updateHandCardUI(handData)
    end ,mTime*20)

    local roundTime = 1             -- 该轮是第几轮

    -- 手牌收缩并排序后铺开的动画
    local sortAction = function()
        
        -- 获取中间牌的位置
        local centerNum = 9 --sendNum%2 == 0 and math.floor(16/2) or math.floor((16/2)
        local centerPos = childsPos[centerNum]

        -- 收缩和散开的时间
        local mTime = 0.25

        -- 所有手牌向中靠拢动作
        for i=1, 16 do 
            local mAction = cc.MoveTo:create(mTime,centerPos)       -- 收缩动作
            childs[i]:runAction(cc.Sequence:create(mAction,cc.CallFunc:create(function() 
                if i == 16 then 
                    for k, v in ipairs(childs) do 
                        v:setLocalZOrder(k)
                    end 
                    -- 回调伸展开动画
                            -- 所有手牌向两边发散
                    for j=1, 16 do  
                        local mAction = cc.MoveTo:create(mTime,childsPos[j])
                        local eAction = cc.EaseBackOut:create(mAction)
                        childs[j]:runAction(cc.Sequence:create(eAction,cc.CallFunc:create(function()
                            if j == 16 then 
                                self:updateHandCardUI(handData)
                            end 
                        end)))
                    end 
                end 
            end)))
        end 

        -- 手牌排序函数：从大到小按逻辑值排序,相同逻辑值按黑红梅方排序
        local handCard_sort = function(a,b)
            local aValue = a:getCardInfo()
            local bValue = b:getCardInfo()
            local aLogic = PublicFunc.getCardLogicValue(aValue)
            local bLogic = PublicFunc.getCardLogicValue(bValue)
            if aLogic ~= bLogic then 
                do return aLogic > bLogic end 
            else
                return aValue > bValue 
            end 
        end 
        -- 排序手牌
        table.sort(childs,handCard_sort)
    end 
end


---------------------------------------------------------------   按钮回调    ---------------------------------------------------------
function pukeTableMy:btnNotify(kind)
    
    if kind == GameCMD.BTNOPERATE_CANCEL then 
        self:sendPassCardMsg(true)
    elseif kind == GameCMD.BTNOPERATE_PASS then                                 -- 不出按钮响应
        self.tuoGuanBtn:stopAllActions()
        self:sendPassCardMsg()
    
    elseif kind == GameCMD.BTNOPERATE_OUT  then                             -- 出牌按钮响应

        -- 判断牌的合法性
        local outData = self.pukeData.GParames.selectData

        local lastOutData = self.pukeData.GParames.lastOutData

        local mustOutCard = self.pukeData.GParames.mustOutData

        local handData = self.pukeData.GParames.handData

        local result = self.logicAnalysis.compareWithOutData(outData,self.pukeData.GParames.handData,lastOutData,mustOutCard)

        -- result = true

        if self.isWarning == true and result == true and #outData == 1 then 
            result = self.logicAnalysis.isMaxSingleCard(self.pukeData.GParames.handData,outData)
        end 

        if result == true then 
            self:sendOutCardMsg(outData)
        else

            if self.isWarning and #outData == 1 then 
                self.errAction:showOutErrorAction1("下家报单，上家要从最大的牌开始出")
                return 
            end

            -- 判断是否没出黑桃三
            local isInclude = self.logicAnalysis.isIncludeCard(outData,mustOutCard)  
            if isInclude == true then 
                -- 显示不合法提示显示不合法提示
                self.errAction:showOutErrorAction()
            else

                local cardname = self.spriteCard.getCardName(mustOutCard  )
                
                if mustOutCard == 34 then 
                    self.errAction:showOutErrorAction1("本局首次出A，有2必须压")
                else
                    ShowToastMsg("本局必先出"..cardname)
                end
            end 
        end 
    elseif kind == GameCMD.BTNOPERATE_TIPS  then                            -- 提示出牌响应
        local count = self.pukeData.GParames.tipsIndex
        local tipsData = self.pukeData.GParames.tipsData[count]
        
        local handData = self.pukeData.GParames.handData
        local outData = self.pukeData.GParames.lastOutData
        local mustOutCard = self.pukeData.GParames.mustOutData

        if next(self.pukeData.GParames.tipsData) == nil then 
            local tipsCount = 0
            self.pukeData.GParames.tipsData,tipsCount = self.logicAnalysis.aiTips(handData,outData,mustOutCard,false,handData,self.isWarning)

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
        self.spriteCard.setCardStatusByTipsData(self.handCardsParentNode,tipsData)
        -- 临时禁用
        --self.btnPanel:setOutBtnStatus(true)

        self.pukeData.GParames.selectData = tipsData

    elseif kind == GameCMD.BTNOPERATE_RESET  then                           -- 重置手牌响应
        self.spriteCard.resetHandCardStatus(self.handCardsParentNode)
        self.pukeData.GParames.tipsIndex = 1
        self.pukeData.GParames.selectData = {}
    elseif kind == GameCMD.BTNOPERATE_CANCELTUOGUAN then 
        self.sendCancelTuoGuan()
    end 
end 


---------------------------------------------------------------   发送消息    ---------------------------------------------------------
-- 相应服务器出牌或要不起反馈操作
function pukeTableMy:outCardAction(status,outData,handData,lastTableID, isNew )

    -- 将必出牌恢复原来数据
    self.pukeData.GParames.mustOutData = 0
    -- 刷新上轮出牌ID
    self.pukeData.GParames.lastTableID = lastTableID
    -- 刷新出牌数据
    self.pukeData.GParames.lastOutData = outData

    -- 若status不为true，那说明并非自己操作，这时只刷新出牌数据
    if status == false then 
        self.pukeData.GParames.lastOutData = outData
        return
    end

    pukeTableMy.super.outCardAction(self, outData,handData, cc.p(self.outCardsStartPostion.x, self.outCardsStartPostion.y), isNew)
    -- 
    self.pukeData.GParames.selectData = {}

    -- 隐藏对应的按钮和闹钟
    self.alaramClockNode:hideClockUI()
    -- 隐藏对应的按钮
    self.btnPanel:hideAllBtn()
 
    -- 刷新手牌数据
    if type(handData) == "table" then 
        self:updateHandCardUI(handData)
    end 
    -- 刷新出牌数据（若有出牌动画，则播放出牌动画）
    self:updateOutCardUI(outData )
end

function pukeTableMy:passCardAction(status  , isClick)

    if status == false then 
        return 
    end 

    -- 删除出牌数据
    PublicFunc.delAllChildrenNode(self.OutCardUIsParentNode)

    -- 显示要不起动画（接口暂时没做）
    self:showYaoBuQiAnimation(isClick)

    -- 隐藏按钮
    self.btnPanel:hideAllBtn()
    -- 隐藏闹钟
    self.alaramClockNode:hideClockUI();
end 

function pukeTableMy:setTuoGuanStatus(isTuoGuan)
    self.btnPanel:setTuoGuanStatus(isTuoGuan)
end




---------------------------------------------------------------   发送消息    ---------------------------------------------------------
function pukeTableMy:sendOutCardMsg(card)

    

    local msgStruct = {}
    msgStruct.operation = g_gameConstant.MAHJONG_OPERTAION_CHU
    msgStruct.putOutCards = card
    msgStruct.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION_PDK, msgStruct)

    -- self.btnPanel:hideAllBtn()

    -- 更新牌权
    --self.pukeData.GParames.turnToSelf = false 
end 

function pukeTableMy:sendPassCardMsg(isClick)

    local msgStruct = {}
    msgStruct.operation = g_gameConstant.MAHJONG_OPERTAION_CANCEL
    msgStruct.player_table_pos = g_gameGlobal:getMyTablePos()

    msgStruct.unused0 = isClick and 1 or 0

    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msgStruct)

    self.btnPanel:hideAllBtn()

    -- 更新牌权
    --self.pukeData.GParames.turnToSelf = false 
end 

function pukeTableMy:sendCancelTuoGuan()
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_SET_TUOGUAN
    playerGameOpertaionMsg.opValue = 0
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
end

---------------------------------------------------------------------------------------------------------------------------------------

function pukeTableMy:showFuJiAnimation(aniType)
    -- body
    pukeTableMy.super.showFuJiAnimation(self, cc.p(self.outCardsStartPostion.x, self.outCardsStartPostion.y + 163) , aniType);
end

-- 刷新手牌UI
function pukeTableMy:updateHandCardUI(handData,isStart , mustOutCard)

    -- handData = {12 , 12 , 12 , 12 , 4}

    if mustOutCard then 
        self.pukeData.GParames.mustOutData = mustOutCard
    end

    -- 排序手牌
    if type(handData) == "table" and next(handData) ~= nil and isStart ~= true then 
        PublicFunc.sortByCardLogic(handData,1)
    end

    -- 若手牌数量到达报警数量，则显示报警动画
    if #handData == GameCMD.WARN_CARDNUM then 
        --self.warningNode:showWarningAnimation()
    end 

    -- 重置手牌数据
    self.pukeData.GParames.handData = handData

    g_gameGlobal:setPdkHandData(handData)

    -- self.pukeData.GParames.handData = handData
    -- 移除手牌节点
    local childNum = self.handCardsParentNode:getChildrenCount()
    if childNum > 0 then self.handCardsParentNode:removeAllChildren() end

    local isAdd = true 
    -- 回放模式不添加手牌监听事件
    if self.gameModel == GameCMD.GAME_MODEL_RECORD or isStart == true then 
        isAdd = false
    end 

    -- 删除发牌节点
     if isStart ~= true then 
        PublicFunc.delAllChildrenNode(self.sendNode)
    end 

    -- 创建手牌节点  
    local nodes = self.spriteCard.newHandCardPanel(handData, 1, isAdd, handler(self, self.onClickCardCallBack))
    -- 设置手牌锚点和大小
    nodes:setAnchorPoint(0.5,0):setScale(1)
    -- 附加到父节点
    self.handCardsParentNode:addChild(nodes)
end 

-- 刷新出牌UI
-- 参数1：是否为该玩家标识，true为是，false为不是自己
-- 参数2：出牌数据
-- 参数3：手牌数据
-- 参数4：上一轮出牌玩家的ID
function pukeTableMy:updateOutCardUI(outData)

    local outCard = clone(outData)
    
    -- 排序出牌
    local outType,outValue,sortData = self.logicAnalysis.getCardType(outData,true)

    if outType == GameCMD.OUTTYPE_FEIJI or
    outType == GameCMD.OUTTYPE_SIDAISAN or 
    outType == GameCMD.OUTTYPE_THREEWITHTWO or 
    outType == GameCMD.OUTTYPE_SIDAIER or 
    outType == GameCMD.OUTTYPE_SIDAIYI or 
    outType == GameCMD.OUTTYPE_THREEWITHONE then 
       outCard = sortData
   else
       PublicFunc.sortByCardLogic(outCard,1)
   end 
    
    -- 移除手牌节点
    PublicFunc.delAllChildrenNode(self.OutCardUIsParentNode)
    local outNode = self.spriteCard.newOutCardPanel(outCard)
    -- 设置属性，并添加到父节点去
    outNode:setAnchorPoint(0.5,0):setScale(0.6)


    self.OutCardUIsParentNode:addChild(outNode)
end



-- 显示出牌状态
-- 参数1：闹钟显示开始倒计时时间
-- 参数2：是否为自己标识位
function pukeTableMy:showOutCardStatus(status, isNew , lastOpPos , lastOutCardData  , msg)

    self.pukeData.GParames.turnToSelf = false

    self.pukeData.GParames.lastOutData = lastOutCardData

    local lastTableID = g_gameGlobal:getTablePlayerPosWithTablePos(lastOpPos)

    --到自己出牌的时候  ， 新牌局和上一次出牌 也是自己的话 清空上轮出牌数据
    if lastTableID == 1 or isNew then
        self.pukeData.GParames.lastOutData = {}
    end

    local handData = self.pukeData.GParames.handData
    local outData = self.pukeData.GParames.lastOutData


    if status == false then 
        -- 若牌权不为自己，那么就清理掉自己的UI数据
        self.btnPanel:hideAllBtn()
        return
    end

    self.tuoGuanBtn:stopAllActions()

    self.pukeData.GParames.turnToSelf = true 

    -- 隐藏要不起图片
    self:hideYaoBuQiAnimation()

    if lastOpPos ~= -1 then 
        self.pukeData.GParames.mustOutData = 0
    end

    -- 清理掉自己以前出过的牌
    PublicFunc.delAllChildrenNode(self.OutCardUIsParentNode)


    local myTablePos = g_gameGlobal:getMyTablePos()

    local bixuguan =  g_gameGlobal:isBixuGuan()

    local isBiYa2 = false
    local hasBiya2 = false

    if g_gameGlobal:isXuanChengPDK() then 
        hasBiya2 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_XUANCHENG_FIRST_CHU_A_BI_YA )
    elseif g_gameGlobal:isZYPDK() then 
        hasBiya2 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ZONGYANG_FIRST_CHU_A_BI_YA )
    else
        hasBiya2 = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ANQING_FIRST_CHU_A_BI_YA )
    end

    
    if #lastOutCardData == 1 and not bixuguan and hasBiya2 then 
        local isLogicA = PublicFunc.getCardLogicValue( lastOutCardData[1] ) == 14
        if isLogicA then 
            local isFirstA = msg.unused1 == 1
            if isFirstA then 
                local has2 = self.logicAnalysis.hasCardInHand( handData , 34 )
                if has2 then 
                    self.pukeData.GParames.mustOutData = 34
                    isBiYa2 = true
                end
            end
        end
    end


    local tipsCount,validCount = 0,0
    -- 获取提示的牌
    self.pukeData.GParames.tipsData,tipsCount,validCount = self.logicAnalysis.aiTips(handData,outData,self.pukeData.GParames.mustOutData,false,handData,self.isWarning)

    -- validCount = 10

    -- local isA = PublicFunc.getCardLogicValue()

    --报单的时候  是不是上家出的 非单牌
    local flag = false
    if self.isWarning then  
        if lastOpPos ~= -1 then 
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(lastOpPos)

            if g_gameGlobal:isXuanChengPDK() then 
                flag = #lastOutCardData > 1
            else
                if posState == 4 then
                    flag =  #lastOutCardData > 1
                end
            end

            
        end    
    end
    


    if lastOpPos ~= -1 and lastOpPos ~= myTablePos and not bixuguan and not isBiYa2 and (not self.isWarning or flag )  then 
        self.btnPanel:showCancelBtn(true)
    else
        self.btnPanel:showCancelBtn(false)
    end
    


    --首家必出四个三
    if lastOpPos == -1 and ( g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ANQING_BI_43 ) or  g_gameGlobal:hasWanfa2( g_gameConstant.GR2_PDK_ZONGYANG_BI_43 ) ) then 
        for i,data in ipairs(self.pukeData.GParames.tipsData) do
            if #data == 4 then 
                local b = true
                for i,v in ipairs(data) do
                    if v%16 ~= 3 then 
                        b = false
                        break
                    end
                end
                if b then 
                    self.pukeData.GParames.tipsData = {}
                    self.pukeData.GParames.tipsData[#self.pukeData.GParames.tipsData+1] = data
                    break
                end
            end
        end
    end



    if self.isWarning == true and next(self.pukeData.GParames.tipsData) ~= nil then 
        self.logicAnalysis.sortDataWhenWarn(self.pukeData.GParames.tipsData)
    end 

    self.pukeData.GParames.tipsIndex = 1
   
    -- 若手牌只剩最后一手牌数据，且出牌权在自己，那么就全出   
    local isOutData = self.pukeData.GParames.tipsData[1] or {}
    if #isOutData == #handData and isNew == true then 

        -- 检查是否包含炸弹,若是有炸弹就不自动弹起
        local analyseResult = self.logicAnalysis.analyseCardData(handData )
        local bombData,bombCount = self.logicAnalysis.analyseBomb(analyseResult,1)

        if bombCount == 0 and next(bombData) == nil then 
            self.pukeData.GParames.selectData = isOutData
            self.spriteCard.setCardStatusByTipsData(self.handCardsParentNode,isOutData)
        end 

        local callBack = function()
            self:sendOutCardMsg(isOutData)
        end
    end

    -- 显示按钮
    -- validCount = 10

    if validCount then 

        if validCount and  validCount > 0 then
            self.btnPanel:showBtnPanel(GameCMD.OPERATE_MUSTOUT)
            -- 只有一手牌大得过上家时，弹出该手牌
            if validCount == 1 then

                -- 检查是否包含炸弹,若是有炸弹就不自动弹起
                local analyseResult = self.logicAnalysis.analyseCardData(handData)
                local bombData,bombCount = self.logicAnalysis.analyseBomb(analyseResult,1)

                if bombCount == 0 and next(bombData) == nil then 
                    self.pukeData.GParames.selectData = isOutData
                    self.spriteCard.setCardStatusByTipsData(self.handCardsParentNode,isOutData)
                end  
            end
        else
            -- 显示要不起按钮(  未勾选必须管的情况下)
            local isBixuGuan = g_gameGlobal:isBixuGuan()

            if not isBixuGuan then
                self.btnPanel:showBtnPanel(GameCMD.OPERATE_PASS)
                self.alaramClockNode:playClockTime(3)
            end
            
            -- 延时两秒，直接过牌
            local passFunc = function()
                self:sendPassCardMsg()
            end

            
            performWithDelay(self.tuoGuanBtn,passFunc, isBixuGuan and 0 or 3)
        end

    else
        --异常就再检测一次
        local function callBack()
            self:showOutCardStatus(status, isNew , lastOpPos , lastOutCardData  , msg)
        end
        performWithDelay(self.tuoGuanBtn,callBack,1)
    
    end
end

-- 用于断线重连重置出牌数据
function pukeTableMy:setReconnectData(lastOutData,mustOutCard)
    self.pukeData.GParames.mustOutData = mustOutCard
    self.pukeData.GParames.lastOutData = lastOutData
end

--要不起动画
function pukeTableMy:showYaoBuQiAnimation(isClick)
    -- body
    pukeTableMy.super.showYaoBuQiAnimation(self, cc.p(self.outCardsStartPostion.x, self.outCardsStartPostion.y) , isClick)
end

-- 响应要不起消息并刷新UI
function pukeTableMy:showPassStatus(isNew)
    if isNew == true then
        self:hideYaoBuQiAnimation()
    else
        self:showYaoBuQiAnimation()
    end
end 


function pukeTableMy:onClickCardCallBack(data)

     -- 选牌的增量（可负可正）
     local addNum = #data - #self.pukeData.GParames.selectData

    -- 每次点击牌以后，出牌提示索引要重新置为1
    self.pukeData.GParames.tipsIndex = 1
    self.pukeData.GParames.selectData = data

    if next(data) == nil then 
        return false 
    end 

    local outData = self.pukeData.GParames.lastOutData
    local outType,outMiniValue = self.logicAnalysis.getCardType(outData,true)

    -- 相信服务器的数据，若出牌数据判断为-1时改为0
    if outType == GameCMD.OUTTYPE_ERROR then outType = GameCMD.OUTTYPE_NOCARD end

    local mustOutCard = self.pukeData.GParames.mustOutData

    local isValid = self.logicAnalysis.compareWithOutData(data,self.pukeData.GParames.handData,outData,mustOutCard)

    -- 满足条件才进入，1：必须是false类型；2：划牌数量一次性大于1；3、选牌总数大于出牌总数；4、总牌数大于4
    if isValid == false and addNum >= 3 and (#data - #outData > 0) and #data > 4 and self.pukeData.GParames.turnToSelf == true then 
        -- 修改所选牌数据
        local allData = self.pukeData.GParames.handData

        local changeData,changeCount,validCount = self.logicAnalysis.aiTips(data,outData,mustOutCard,true,allData,self.isWarning)

        if validCount == 1 then 
            self.pukeData.GParames.selectData = changeData[1]
            -- 刷新手牌选中数据
            self.spriteCard.setCardStatusByTipsData(self.handCardsParentNode,changeData[1])
            isValid = true 
        end
    end

    return isValid
end

-- 牌型不合法
function pukeTableMy:outErorrCard()
    self.errAction:showServerOutErrorAction()
end

cc.exports.pukeTableMy_createMyTable = function (pos)
    -- body
    return pukeTableMy.new(pos);
end

return pukeTableMy; �b  