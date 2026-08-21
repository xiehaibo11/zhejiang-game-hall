
local TablePlayerMyWatchBase = {}


function TablePlayerMyWatchBase:ctor(...)
    -- body
    self.super.ctor(self, ...)

    self.posState = 1
    
--    self.coutAniPosition = cc.pAdd(self.outCardsStartPostion, cc.p(0, 100))
end


function TablePlayerMyWatchBase:playStartCardsAnimation(handData)
    self:updateHandCardUI({0},true)

--    self.super.playStartAciton(self, handData)
end


function TablePlayerMyWatchBase:passCardAction(status)
    
    self.super.passCardAction(self)
    
--    if status == false then 
--        return 
--    end 
    
--    self.super.passCardAction(self)

  -- 删除出牌数据
--    self.publicFunc.delAllChildrenNode(self.outCardNode)

    -- 显示要不起动画（接口暂时没做）
--    self:showYaoBuQiAnimation()

    -- 隐藏闹钟
--    self.clockNode:hideClockUI();
end 

-- 相应服务器出牌或要不起反馈操作
function TablePlayerMyWatchBase:outCardAction(status,outData,handData,lastTableID, isNew,isAward)
    -- 隐藏自己的闹钟
--    self.clockNode:hideClockUI();
    if isNew == true then
        self.publicFunc.delAllChildrenNode(self.outCardNode)
    end
    
    if status == false then  
        return
    end

    -- 刷新出牌数据（若有出牌动画，则播放出牌动画）
    local outType,outValue = self:updateOutCardUI(outData,true)
    
    if outType > 0 then
        NG.soundManager:playMatchEffect(self.GameAudioParser:getPdkEffectFileForOperation(outType,self.sex or 0))
        NG.soundManager:playMatchEffect(self.GameAudioParser:getPdkPaiValue(outValue,outType,self.sex or 0))
    end
    
    -- 更新手牌数据
    self:updateHandCardUI(handData)
end 

function TablePlayerMyWatchBase:showFuJiAnimation( ... )
    -- body
    self.super.showFuJiAnimation(self, cc.p(display.cx, display.cy));
end

-- 更新手牌UI
function TablePlayerMyWatchBase:updateHandCardUI(handData, isStart, insertActCards,iswait)
    if iswait then
        return
    end
    self.handCardData = handData
    
--    if self.grandBase then
--        self.grandBase.updateHandCardUI(self, handData)
--    else
--        self.super.updateHandCardUI(self, handData)
--    end
    
    -- 若手牌数量到达报警数量，则显示报警动画
--    if #handData == self.GameCMD.WARN_CARDNUM and isStart ~= true then 
--        self.warningNode:showWarningAnimation()
--    end

--    if not handData or next(handData) == nil then
        -- 出完牌
--        self.warningNode:hideWarningAnimation()
--    end

    -- 移除手牌节点
    self.publicFunc.delAllChildrenNode(self.handCardsParentNode)
    -- 判断手牌类型：正面还是背面
    local kind = self.GameCMD.DRAW_BGCARD

    -- 创建手牌节点  
    local nodes = self.spriteCard.newHandCardPanel(handData, kind, nil, nil, self.posState)
    -- 设置手牌锚点和大小
    nodes:setAnchorPoint(0.5, 0)
    nodes:setScale(0.8)
    nodes:setPositionY(display.cy * 0.15)
    
    -- 附加到父节点
    self.handCardNode:addChild(nodes)
    --移除手牌
    if #handData<=0 then 
        self.handCardNode:removeAllChildren()
    end
end

--[[
-- 更新出牌UI
function TablePlayerMyWatchBase:updateOutCardUI(outData)
    -- 清理掉自己以前出过的牌
    self.publicFunc.delAllChildrenNode(self.outCardNode)

    -- local outCard = clone(outData)
    -- 排序出牌
    local outType = self.logicAnalysis.getCardType(outData)
    if outType==self.GameCMD.OUTTYPE_SHUNZI or outType==self.GameCMD.OUTTYPE_TONG_HUA_SHUN then
        -- 顺子排序(小到大, 1<2<3...)
        self.publicFunc.sortByCardLogic(outData, 2, true)
    else
        -- (2>1>K...)
        self.publicFunc.sortByCardLogic(outData, 1, false)
    end 

    -- 设置属性，并添加到父节点去
    local outNode = self.spriteCard.newOutCardPanel(outData)

    if sszGameGlobal.outCardAmt==0 then
        outNode:setAnchorPoint(0.5,1):setScale(self.GameCMD.OUT_CARD_SCALE[self.posState])
        self.outCardNode:addChild(outNode)
        self.outCardNode:stopAllActions()
        self.outCardNode:setOpacity(0)
        self.outCardNode:runAction(cc.FadeIn:create(0.3))

    elseif sszGameGlobal.outCardAmt==1 then
        -- 设置属性，并添加到父节点去
        outNode:setAnchorPoint(0.5,1)
        outNode:setScale(1)
        outNode:setOpacity(150)

        local detalTime = 0.25
        local fadeTime = 0.25
        local fadeTime = 0.25
        local actions1 = cc.ScaleTo:create(detalTime, self.GameCMD.OUT_CARD_SCALE[self.posState])
        local actions2 = cc.FadeTo:create(detalTime, 255)   
        local spawnAction = cc.Spawn:create(actions1,actions2)
        outNode:runAction(spawnAction)
        self.outCardNode:addChild(outNode)

    end
end 
--]]


-- 显示出牌状态
--status: 牌权是否是自己
function TablePlayerMyWatchBase:showOutCardStatus(status,isNew)
    -- 若该轮为新的一轮时，上次出牌数据要刷新掉
    if isNew == true then
        -- 隐藏要不起图片
--        self:hideYaoBuQiAnimation()
    end

    if status == false then 
        -- 若牌权不为自己，那么就清理掉自己的UI数据
        self.btnPanel:hideAllBtn()
        return
    end

    -- 隐藏要不起图片
--    self:hideYaoBuQiAnimation()
end


--要不起动画
function TablePlayerMyWatchBase:showYaoBuQiAnimation( )
    -- body
--    self.super.showYaoBuQiAnimation(self, cc.p(self.outCardsStartPostion.x, self.outCardsStartPostion.y))
end

-- 响应要不起消息并刷新UI
function TablePlayerMyWatchBase:showPassStatus(isNew)
    -- print(debug.traceback() .. ", isNew: " .. tostring(isNew))
    if isNew == true then
--        self:hideYaoBuQiAnimation()
    else
--        self:showYaoBuQiAnimation()
    end
end 


-- 用于断线重连重置出牌数据
function TablePlayerMyWatchBase:setReconnectData(lastOutData,mustOutCard)
end

function TablePlayerMyWatchBase:setTuoGuanStatus(isTuoGuan)
end

function TablePlayerMyWatchBase:showOperationCallBtn(callMode, calledValue)
end

function TablePlayerMyWatchBase:showOpBtnByState(kind)

end

function TablePlayerMyWatchBase:dzCardsInsertToHandCard(cardData)
    
    for k, v in ipairs(cardData) do 
        table.insert(self.handCardData, 0)
    end

    self:updateHandCardUI(self.handCardData)
end 

return TablePlayerMyWatchBase~