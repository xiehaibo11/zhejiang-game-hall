--ganpengjin
local baseLayer     = require("newgold.MatchGames.PDK.LYPDK.common.baseLayer")
local pukeTableBase = class("pukeTableBase", baseLayer)
local warning       = require("newgold.MatchGames.PDK.LYPDK.common.pukeWarning")
local btnPanel      = require("newgold.MatchGames.PDK.LYPDK.common.pukeOperatorButton")
local errAction     = require("newgold.MatchGames.PDK.LYPDK.common.pukeErrorAction")

--pos结构：
--handp牌：游戏未开始开始位置
--endp牌 ：游戏中手牌位置
--outp牌 ：游戏未开始开始位置
--head_info：头像的位置及size大小
function pukeTableBase:ctor(pos)
    -- body
    pukeTableBase.super.ctor(self);
    self.handCardsParentNode  = nil --手牌父节点
    self.OutCardUIsParentNode = nil --出牌父节点
    self.handCardStartAnimationTime = 0.1;
    self.fujiAnimationScale   = 0.9;
    self.delegate      = nil; 
    self.handCardsWaitPostion  = pos.handp;          --手牌等待位置
    self.handCardsEndPostion   = pos.endp;           --游戏中手牌位置
    self.outCardsStartPostion  = pos.outp;           --出牌位置
    self.zhadanPos             = pos.zhadanPos;      --炸弹动画位置
    self.tuoGuanBtn            = nil
    self.scheduler      = cc.Director:getInstance():getScheduler()
    self.spriteCard     =  require("newgold.MatchGames.PDK.LYPDK.common.PDKNewCard")
    self.pukeData       =  require("newgold.MatchGames.PDK.LYPDK.pukeTable.pukeData")
    self.animation      =  require("newgold.MatchGames.PDK.LYPDK.common.pukeAnimation")

    if g_gameGlobal:isXuanChengPDK() then 
    elseif g_gameGlobal:isZYPDK() then 
    else
        self.logicAnalysis  =  require("newgold.MatchGames.PDK.LYPDK.common.PDKCardAnalysis")
    end

    
    self.headTablePosInfo = pos.head_info;
    self.sex            = LYPDKResource.SexMan
    self.gameModel      = GameCMD.GAME_MODEL_NORMAL
    self.anchpos = cc.p(0.5, 0.5);
    self.sendNode = nil 
    self.alaramClockNode = nil

    self.isWarning = false              -- 是否报单

    self.gameRuleInfo = {} 

    self:initPaiUIs();

    -- 初始化游戏数据
    self:initData();

    -- 将按钮层放在手牌层上面
    self.btnPanel = btnPanel.new(self,handler(self,self.btnNotify), self.handCardsEndPostion)
    -- 测试类 ---
    --pukeTestTable:test(self);
end

-- 初始化游戏规则数据
function pukeTableBase:initGameRuleInfo(info)
    local rule = {}
    rule.isBomb333  = false 

    if info.isBomb333 then 
        rule.isBomb333 = true
    end

    rule.firstCard = info.firstCard

    -- for k, v in pairs(info or {}) do 
    --     if next(v) ~= nil then 
    --         if v[1] == g_gameConstant.SAN_ZHANG_SHAO_DAI_CHU_WAN then 
    --             rule.threefirstout = true 
    --         end     
    --     end 
    -- end 
    
    self.logicAnalysis.initGameRuleData(rule)
    self.gameRuleInfo = rule
end 


function pukeTableBase:setWarnInfo(num)
    if num == GameCMD.WARN_CARDNUM then 
        self.isWarning = true 
    end 
end

-- 设置游戏模式，正常玩（0） or 回放（-1）
function pukeTableBase:setGameModel(model)
    self.gameModel = model
end 

-- 设置桌子玩家性别
function pukeTableBase:setSex( sex )
    -- body
    if not sex then
        return;
    end
    
    self.sex       = sex
end

function pukeTableBase:initData()

    self.isWarning = false

    self.pukeData.initGParams()
    -- 隐藏报警动画
    self.warningNode:hideWarningAnimation()
end 

function pukeTableBase:outCardAction(outData, handData, pos, isNew)

    self.stopSendAni = true

    local card_type = self.logicAnalysis.getCardType(outData, true)
    self.audio:playCardsSound(self.sex, card_type, outData or {}, isNew)

    if #handData == 1 then
        self.audio:shengPaiAlarmClockSFX(self.sex, #handData);
    end
    local newpos = cc.p(self.zhadanPos.x, self.zhadanPos.y)
    if  PublicFunc.isBomb(card_type) or 
        card_type == GameCMD.OUTTYPE_FEIJI or 
        card_type == GameCMD.OUTTYPE_FEIJINOMORE or 
        card_type == GameCMD.OUTTYPE_DOUBLELINK  or 
        card_type == GameCMD.OUTTYPE_SHUNZI or 
        card_type == GameCMD.OUTTYPE_THREEWITHTWO
    then
        local animation = self.animation:playCardsAnimationAttachNode(card_type, self, newpos);
        if animation and self.anchpos then
            animation:setAnchorPoint(self.anchpos)
        end
        
    end
end

function pukeTableBase:playGameRecordSound(outData, handData, isNew)

    local card_type = self.logicAnalysis.getCardType(outData, true , nil , nil , true , nil , self.gameModel)
    self.audio:playCardsSound(self.sex, card_type, outData or {}, isNew)

    if #handData == 1 then
        self.audio:shengPaiAlarmClockSFX(self.sex, #handData);
    end

    local newpos = cc.p(self.zhadanPos.x, self.zhadanPos.y)
 
    local newpos = cc.p(self.zhadanPos.x, self.zhadanPos.y)
    if  PublicFunc.isBomb(card_type) or 
        card_type == GameCMD.OUTTYPE_FEIJI or 
        card_type == GameCMD.OUTTYPE_FEIJINOMORE or 
        card_type == GameCMD.OUTTYPE_DOUBLELINK  or 
        card_type == GameCMD.OUTTYPE_SHUNZI or 
        card_type == GameCMD.OUTTYPE_THREEWITHTWO
    then

        local animation = self.animation:playCardsAnimationAttachNode(card_type, self, newpos);
        if animation and self.anchpos then
            animation:setAnchorPoint(self.anchpos)
        end
        
    end
end

function pukeTableBase:btnNotify(kind)

end 

--春天动画
function pukeTableBase:showFuJiAnimation( pos , aniType )
    -- body
    local animation = self.animation:playCardsAnimationAttachNode( aniType or GameCMD.PLAYER_FUJI, self, pos);
    if animation then
        animation:setScale(self.fujiAnimationScale);
    end
end

--要不起动画
function pukeTableBase:showYaoBuQiAnimation( pos , isClick )
    -- body
    self:hideYaoBuQiAnimation();
    local animation = self.animation:playCardsAnimationAttachNode(GameCMD.OPERATE_PASS, self, pos);
    if animation then
        animation:setScale(0.73);
        animation:setAnchorPoint(self.anchpos)

        --在回放添加  要不起提示  是玩家自己点的还是系统判断的
        if isClick then 
            animation:loadTexture(LYPDKResource.ResPath .. "deskUIs/pass1.png" , LYPDKResource.TextureLocalType);
        end

    end
    self.yaoBuQiNode = animation;
    self.audio:playCardsSound(self.sex, GameCMD.PLAYER_YAO_BU_QI);
end

function pukeTableBase:hideYaoBuQiAnimation()
    -- body
    if self.yaoBuQiNode then
        self.yaoBuQiNode:setVisible(false);
        self.yaoBuQiNode:removeFromParent();
        self.yaoBuQiNode  = nil;
    end
end

function pukeTableBase:hideFeiJiBoomAnimation()
    -- body
    if self.showAnimation then
        self.showAnimation:setVisible(false);
        self.showAnimation:removeFromParent();
        self.showAnimation  = nil;
    end
end

--炸弹动画
function pukeTableBase:showZhaDanAnimation( pos )
    -- body
    local animation = self.animation:playCardsAnimationAttachNode(GameCMD.OUTTYPE_BOMB, self, pos);
    if animation then
        animation:setScale(self.fujiAnimationScale);
    end
end



function pukeTableBase:refreshCardFrame()

    local nodes = self.handCardsParentNode:getChildren()
    if nodes and nodes[1] then 
        local childs = nodes[1]:getChildren()
        for i,card in ipairs(childs) do
            if card and card.refreshCardFrame then 
                card.refreshCardFrame()
            end
        end
    end

    local nodes = self.OutCardUIsParentNode:getChildren()

    if nodes and nodes[1] then 
        local childs = nodes[1]:getChildren()
        for i,card in ipairs(childs) do
            if card and card.refreshCardFrame then 
                card.refreshCardFrame()
            end
        end
    end

end


-------------------------------------------------------------------------------------------------------------------------------
function pukeTableBase:initPaiUIs()
    -- body
    self.handCardsParentNode  = cc.Node:create();
    self.OutCardUIsParentNode = cc.Node:create();
    if self.OutCardUIsParentNode then
        self:addChild(self.OutCardUIsParentNode)
        self.OutCardUIsParentNode:setPosition(self.outCardsStartPostion.x, self.outCardsStartPostion.y)
    end

    if self.handCardsParentNode then
        self:addChild(self.handCardsParentNode)
        self.handCardsParentNode:setPosition(self.handCardsWaitPostion.x, self.handCardsWaitPostion.y)
    end

    self.warningNode = warning.new();
    if self.warningNode then
        self.warningNode:setPosition(cc.p(self.handCardsEndPostion.x , self.handCardsEndPostion.y + 20))
        self:addChild(self.warningNode)
        self.warningNode:hideWarningAnimation();
    end

    --创建托管UI控件
    local button = ccui.Button:create()
    button:setTouchEnabled(true)
    button:loadTextures("MatchAH/"..LYPDKResource.TuoGuanRes, "MatchAH/"..LYPDKResource.TuoGuanRes, "", ccui.TextureResType.plistType);
    self.tuoGuanBtn = button;
    if self.tuoGuanBtn then
        self:addChild(self.tuoGuanBtn)
        self.tuoGuanBtn:setVisible(false);
    end

    self.errAction = errAction.new(self)
end

function pukeTableBase:playClockTime(time)

end

function pukeTableBase:hideClockUI()

end


function pukeTableBase:alaramClockFinishCallBack()
    -- body
end

--剩余时间的在一定时间的界限，发生警报, 该回调为警报逻辑处理
function pukeTableBase:doAlaramClockLogic()
    -- body

end

--设置代理对象
function pukeTableBase:setDelegate( d )
    -- body
    self.delegate = d;
end

--创建出牌接口
function pukeTableBase:createOutCard(outCards)
    -- body
    if not outCards and #outCards < 1 then
        return;
    end

    local childNum = self.OutCardUIsParentNode:getChildrenCount()
    if childNum > 0 then 
        self.OutCardUIsParentNode:removeAllChildren()
    end

    local handNodes = self.spriteCard.newOutCardPanel(outCards)
    if handNodes then
        handNodes:setAnchorPoint(0,0)
        self.OutCardUIsParentNode:addChild(handNodes);
    end
end

--隐藏牌警告
function pukeTableBase:hideCardsWarning()
    -- body
    if self.warningNode then
        self.warningNode:hideWarningAnimation();
    end
end

--显示牌警告
function pukeTableBase:showCardsWaring()
    -- body
    if self.warningNode then
        self.warningNode:showWarningAnimation();
    end
end

--创建手牌接口
function pukeTableBase:createHandCard(handCards)
   
end

--游戏开始播放手牌动画
function pukeTableBase:playStartCardsAnimation()
    -- body
end

--打牌过程中，出牌动画
function pukeTableBase:playOutCardsAnimation()
    -- body
end

--更新打牌中，手牌显示位置
function pukeTableBase:updatePlayingGameHandCardsPosition()
    -- body
    if self.node then
        self.node:setPosition(cc.p(self.handCardsEndPostion.x, self.handCardsEndPostion.y))
    end
end

function pukeTableBase:updateHandCardUI(handData)
    -- body
end

function pukeTableBase:updateOutCardUI(outData)
    -- body
end

function pukeTableBase:onExit()
    -- body
    if self.alaramClockNode ~= nil then 
        self.alaramClockNode:removeNodes()
    end 

    pukeTableBase.super.onExit(self)
    
    self:initData()
end

-- 响应tip消息
function pukeTableBase:respondTipMsg(time,status,isNew,flag)
     --flag  是否轮到自己操作，播放震动
      -- 若该轮为新的一轮时，上次出牌数据要刷新掉
    if isNew == true then
        -- 隐藏要不起图片
        self:hideYaoBuQiAnimation()
    end

    if status == false then 
        -- 若牌权不为自己，那么就清理掉自己的UI数据
        self.btnPanel:hideAllBtn()
        -- 隐藏自己的闹钟
        self.alaramClockNode:hideClockUI();
        return
    end

    -- 隐藏要不起图片
    self:hideYaoBuQiAnimation()

    self.alaramClockNode:playClockTime(time,nil,flag)

    -- 清理掉自己以前出过的牌
    PublicFunc.delAllChildrenNode(self.OutCardUIsParentNode)
end


function pukeTableBase:showHandCardOnGameOver( handData )
    -- body
end




-- 非本玩家的发牌动画
function pukeTableBase:playStartAciton()
    local nodes = self.handCardsParentNode:getChildren()

    local childs = nodes[1]:getChildren()

    local childPos = cc.p(0,0)
    childPos.x,childPos.y = childs[1]:getPosition()
    childs[1]:setVisible(false)

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

    --local sendBg = self.spriteCard.newCard(nil,GameCMD.DRAW_BGCARD):setScale(GameCMD.OTHER_HANDCARD_SCALE):setAnchorPoint(0,0):addTo(sendNode)

    -- 开始发牌
    local sendType = GameCMD.SENDCARD_MODEL
    local sendNum = #sendType                   -- 发送的次数
    local sendSchedulerTime = nil               -- 次数定时器
    local sendSchedulerNum = nil                -- 张数定时器
    local tmies = math.floor(self.handCardStartAnimationTime/sendNum)       -- 没隔多少秒发送sendType[i]张牌
   
    local roundTime = 1             -- 该轮是第几轮

    -- 获取目标位置
    local wPos = nodes[1]:convertToWorldSpace(childPos)
    -- 转化为相对发牌根节点的节点坐标
    local position = sendNode:convertToNodeSpaceAR(wPos)
    self:updateHandCardUI(data)
end 

return pukeTableBase;  7  