--ganpengjin
local pukeTableBase = require("newgold.MatchGames.PDK.LYPDK.pukeTable.pukeTableBase")
local pukeTableLeft = class("pukeTableLeft", pukeTableBase)
local alaramClock   = require("newgold.MatchGames.PDK.LYPDK.common.pukeAlarmClock")

function pukeTableLeft:playOutCardsAnimation(  )
    -- body
end

function pukeTableLeft:playStartCardsAnimation(handData)
    self:updateHandCardUI({0},true)

    pukeTableLeft.super.playStartAciton(self)
end

function pukeTableLeft:initPaiUIs()
    -- body
    pukeTableLeft.super.initPaiUIs(self);

    self.anchpos = cc.p(0, 1)

    local outPos = cc.p(0,0)
    outPos.x,outPos.y = self.OutCardUIsParentNode:getPosition()
    local pos = cc.p(outPos.x + 20,outPos.y)
    
    self.alaramClockNode = alaramClock.new(self,pos,cc.p(0, 0.5))
end

function pukeTableLeft:passCardAction(status , isClick)

    if status == false then 
        return 
    end 

    -- 删除出牌数据
    PublicFunc.delAllChildrenNode(self.OutCardUIsParentNode)

    -- 显示要不起动画（接口暂时没做）
    self:showYaoBuQiAnimation(isClick)

    -- 隐藏闹钟
    self.alaramClockNode:hideClockUI();
end 

-- 相应服务器出牌或要不起反馈操作
function pukeTableLeft:outCardAction(status,outData,handData,lastTableID, isNew)
    -- 隐藏自己的闹钟
    self.alaramClockNode:hideClockUI();
    
    if status == false then  
        return
    end

    pukeTableLeft.super.outCardAction(self, outData,handData, cc.p(self.handCardsWaitPostion.x, self.handCardsWaitPostion.y), isNew)

    -- 更新出牌UI
    self:updateOutCardUI(outData)
    
    -- 更新手牌数据
    self:updateHandCardUI(handData)
end 

function pukeTableLeft:showFuJiAnimation( aniType )
    -- body
    pukeTableLeft.super.showFuJiAnimation(self, cc.p(self.handCardsWaitPostion.x + 256, self.handCardsWaitPostion.y) , aniType);
end

-- 更新手牌UI
function pukeTableLeft:updateHandCardUI(handData,isStart)
    -- 若手牌数量到达报警数量，则显示报警动画
    if #handData == GameCMD.WARN_CARDNUM and isStart ~= true then 
        self.warningNode:showWarningAnimation()
    end 

    -- 移除手牌节点
    PublicFunc.delAllChildrenNode(self.handCardsParentNode)
    -- 判断手牌类型：正面还是背面
    local kind = GameCMD.DRAW_BGCARD
    if self.gameModel == GameCMD.GAME_MODEL_RECORD then 
        kind = GameCMD.DRAW_FACECARD
        PublicFunc.sortByCardLogic(handData,1)
    end 

    -- 创建手牌节点  
    local nodes = self.spriteCard.newHandCardPanel(handData,kind)
    -- 设置手牌锚点和大小
    nodes:setAnchorPoint(0,0):setScale(0.3)
    -- 附加到父节点
    self.handCardsParentNode:addChild(nodes)
    -- self.handCardsParentNode:setPosition(self.handCardsWaitPostion.x, self.handCardsWaitPostion.y)
end

-- 更新出牌UI
function pukeTableLeft:updateOutCardUI(outData )
    -- 清理掉自己以前出过的牌
    PublicFunc.delAllChildrenNode(self.OutCardUIsParentNode)
    
    local outCard = clone(outData)
    -- 排序出牌
    local outType,outValue,sortData = self.logicAnalysis.getCardType(outData,true)

    if outType == GameCMD.OUTTYPE_FEIJI or outType == GameCMD.OUTTYPE_SIDAISAN or outType == GameCMD.OUTTYPE_THREEWITHTWO then 
        outCard = sortData
    else
        PublicFunc.sortByCardLogic(outCard,1)
    end 

    -- 设置属性，并添加到父节点去
    local outNode = self.spriteCard.newOutCardPanel(outCard)
    outNode:setAnchorPoint(0,1):setScale(0.6)
    self.OutCardUIsParentNode:addChild(outNode)
end 



function pukeTableLeft:showHandCardOnGameOver( handData )
    local kind = GameCMD.DRAW_FACECARD
    PublicFunc.sortByCardLogic(handData ,1)

      -- 移除手牌节点
    PublicFunc.delAllChildrenNode(self.handCardsParentNode)

    -- 创建手牌节点  

    self.handCardsParentNode:setPosition( self.handCardsWaitPostion.x   , self.handCardsWaitPostion.y  )

    local nodes = self.spriteCard.newHandCardPanel(handData,kind)
    -- 设置手牌锚点和大小
    nodes:setAnchorPoint(0,0):setScale(0.4)
    -- 附加到父节点
    self.handCardsParentNode:addChild(nodes)

end


-- 显示出牌状态
--status: 牌权是否是自己
function pukeTableLeft:showOutCardStatus(status,isNew)

    -- 若该轮为新的一轮时，上次出牌数据要刷新掉
    if isNew == true then
        -- 隐藏要不起图片
        self:hideYaoBuQiAnimation()
    end

    if status == false then 
        -- 若牌权不为自己，那么就清理掉自己的UI数据
        self.btnPanel:hideAllBtn()
        return
    end

    -- 隐藏要不起图片
    self:hideYaoBuQiAnimation()
end


--要不起动画
function pukeTableLeft:showYaoBuQiAnimation(isClick )
    -- body
    pukeTableLeft.super.showYaoBuQiAnimation(self, cc.p(self.handCardsWaitPostion.x+20, self.handCardsWaitPostion.y - 20) , isClick)
end

-- 响应要不起消息并刷新UI
function pukeTableLeft:showPassStatus(isNew)
    if isNew == true then
        self:hideYaoBuQiAnimation()
    else
        self:showYaoBuQiAnimation()
    end
end 

cc.exports.pukeTableLeft_createLeftTable = function (pos)
    -- body
    return pukeTableLeft.new(pos);
end

return pukeTableLeft;