local TablePlayerBase = class("TablePlayerBase",  cc.load("mvc").ViewBase)
local GameBaseConfig = require("newgold.MatchGames.GamePublic.GameBaseConfig")

function TablePlayerBase:ctor()


    -- 新建一层，用于手牌
    self.playerLayer = display.newLayer():addTo(self)
    self.playerLayer:setContentSize(display.width,display.height)
    -- 手牌附加节点
    self.handCardNode = display.newNode():addTo(self.playerLayer)
    -- 出牌附加节点
    self.outCardNode = display.newNode():addTo(self.playerLayer)
    -- 出牌操作按钮节点
    self.opBtnNode = display.newNode():addTo(self.playerLayer)
    --玩家性别
    -- 闹钟节点
    self.clockNode = display.newNode():addTo(self.playerLayer)
    self.sex = 0
    self:registerVarObj()
    
    self.jiaoMode = g_gameConstant.DDZ_RULE_JIAO_DIZHU
    local ruleList = g_gameGlobal:getCurrentWanFa().ruleList
    for k, v in ipairs(ruleList) do
        if v == g_gameConstant.DDZ_RULE_JIAO_FEN then
            self.jiaoMode = v
            break
        end
    end
    
end 

-- 注册一下变量
function TablePlayerBase:registerVarObj()

    self.isWarning = false              -- 是否报单
    self.posState = 0                   -- 视图位置
    self.sanDaBiZhua = false            -- 三大必叫
    self.handCardData = {}
    self.isBaoDan = false 

    local gameIndex = g_gameGlobal:getCurrGameKind()
    local rootPath = GameBaseConfig.getCurrGameRootPath(gameIndex).path
    self.pukeData       = require(rootPath..".common.CardData")
    self.spriteCard     = require(rootPath..".common.DDZNewCard")
    self.logicAnalysis  = require(rootPath..".common.DDZCardAnalysis")
    self.publicFunc     = require(rootPath..".common.DDZPublicFunc")
    self.GameCMD        = require(rootPath..".common.DDZCMD")
    self.PKAnimation    = require(rootPath..".common.PKAnimation").new()
    self.GameAudioParser = import("newgold.MatchGames.GamePublic.GameAudioParser")

    self.canOutMustOut = self.logicAnalysis:initGameRule()
end 


function TablePlayerBase:initData()

    self.isWarning = false

    self.pukeData.initGParams()
end 

-- 设置报单状态
function TablePlayerBase:setBaoDanState(state)
    self.isBaoDan = state or false 
end 

function TablePlayerBase:removeHandCardUI()
    self.publicFunc.delAllChildrenNode(self.outCardNode)
    self.publicFunc.delAllChildrenNode(self.handCardNode)
end 

function TablePlayerBase:showCardTypeAction(cardType,isconnect)

    if type(cardType) ~= "number" then 
        return 
    end 

    if cardType <= 0 then 
        self.PKAnimation:showCardTypeAction(self.handCardNode,self.posState,cardType,isconnect)
    else
        self.PKAnimation:showCardTypeAction(self.outCardNode,self.posState,cardType,isconnect)
    end 
end 

function TablePlayerBase:clearPlayerOutAcitonRes()
    self.publicFunc.delAllChildrenNode(self.outCardNode)
end 

-- 初始化性别
function TablePlayerBase:init(sex)
    self.sex = sex or 0
end 

-- 初始化位置，除了自己，其他都是根据头像来调整
function TablePlayerBase:initPosition(headPos)
    local NomarlPos = {
        [1] = {handPos = cc.p(display.cx,0),outPos = cc.p(display.cx,270)},
        [2] = {handPos = cc.p(-50,-37),outPos = cc.p(-125,0) },
        [3] = {handPos = cc.p(-50,-37),outPos = cc.p(-125,0),},
        [4] = {handPos = cc.p(50,-37),outPos = cc.p(125,0),},
    }
    local LogPos = {
        [1] = {handPos = cc.p(display.cx,0),outPos = cc.p(display.cx,270)},
        [2] = {handPos = cc.p(43,72),outPos = cc.p(-90,0) },
        [3] = {handPos = cc.p(43,72),outPos = cc.p(-90,0),},
        [4] = {handPos = cc.p(-43,72),outPos = cc.p(90,0),},
    }

    local pos = NomarlPos
    if g_gameGlobal:getIsPlayingGameLog() then 
        pos = LogPos
    end 

    local handPos,outPos = pos[self.posState].handPos,pos[self.posState].outPos

    if self.posState == 1 then 
        handPos, outPos = handPos, outPos
    else 
        handPos = cc.p(headPos.x + handPos.x,headPos.y + handPos.y)
        outPos = cc.p(headPos.x + outPos.x, headPos.y + outPos.y)
    end 

    -- 手牌位置设置
    self.handCardNode:setPosition(handPos)
    -- 出牌位置设置
    self.outCardNode:setPosition(outPos)
    -- 闹钟节点位置
    self.clockNode:setPosition(outPos)
    -- 按钮位置设置
    local btnPos = cc.p(display.cx,outPos.y + 20)
    self.opBtnNode:setPosition(btnPos)
end 

-- 刷新出牌UI
-- 参数1：
-- 参数2：
function TablePlayerBase:updateOutCardUI(outData,isPlayTyepAction)

    local attrPos = {
        [1] = {anchor = cc.p(0.5,0),scale = 0.7},
        [2] = {anchor = cc.p(1,0.5),  scale = 0.6},
        [3] = {anchor = cc.p(1,0.5),scale = 0.6},
        [4] = {anchor = cc.p(0,0.5),  scale = 0.6},
    }

    -- 首出条件重置
    self.pukeData.GParames.mustOutData = 0

    local outCard = clone(outData)

    -- 排序出牌
    local outType,outValue,sortData = self.logicAnalysis.getCardType(outData,true,true)

    if outType == self.GameCMD.OUTTYPE_FEIJI_DUI 
    or outType == self.GameCMD.OUTTYPE_FEIJI_DAN 
    or outType == self.GameCMD.OUTTYPE_FEIJI
    or outType == self.GameCMD.OUTTYPE_THREEWITHTWO 
    or outType == self.GameCMD.OUTTYPE_THREEWITHONE then 
        outCard = sortData
    else
        self.publicFunc.sortByCardLogic(outCard,1)
    end 
    
    -- 移除手牌节点
    self.publicFunc.delAllChildrenNode(self.outCardNode)
    local outNode = self.spriteCard.newOutCardPanel(outCard)
    -- 设置属性，并添加到父节点去
    outNode:setAnchorPoint(attrPos[self.posState].anchor):setScale(attrPos[self.posState].scale)
    self.outCardNode:addChild(outNode)

    -- 播放对应牌型
    if isPlayTyepAction then 
        self:showCardTypeAction(outType)
    end 

    return outType,outValue
end

--==============================--
--desc: 显示对应的按钮操作
--time:2019-03-04 02:53:56
--@kind:按钮显示种类
--@return 
--==============================----
function TablePlayerBase:showOpBtnByState( kind )
    -- 能出必出筛选
    -- if kind == self.GameCMD.OPERATION_BTN_STATE_SECOND and self.canOutMustOut then 
    --     kind = self.GameCMD.OPERATION_BTN_STATE_FIRST
    -- end 

    self.opBtnObj:showBtnState(kind)
        -- if kind == self.GameCMD.OPERATION_BTN_STATE_HIDE or kind == self.GameCMD.OPERATION_BTN_STATE_CALL_DZ or kind == self.GameCMD.OPERATION_BTN_STATE_ROB_DZ then 
        --     self.opBtnObj:showBtnState(kind)
        -- else 
        --     self.opBtnObj:showBtnState(self.GameCMD.OPERATION_BTN_STATE_SECOND)
        -- end 
    -- self.opBtnObj:showBtnState(kind)
end

-- 播放春天的动画
function TablePlayerBase:playChunTianAction()
    self:showCardTypeAction(self.GameCMD.OUTTYPE_CHUNTIAN)
end 

function TablePlayerBase:respondJiabeiNotifyMsg(secTimeLeft)
    
    local jiabeiSelTime = secTimeLeft or 10
    -- 显示闹钟
    self:showAlarmClockAnimation(true, jiabeiSelTime)

    if self.posState == 1 then
        self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_JIA_BEI)
    end 
end

-- 响应抢地主通知的消息
function TablePlayerBase:respondRobDzNotifyMsg(timeLeft)
    -- 显示闹钟
    self:showAlarmClockAnimation(true, timeLeft ~= 0 and timeLeft or nil)

    if self.posState == 1 then
        -- 叫分
        if self.jiaoMode == g_gameConstant.DDZ_RULE_JIAO_FEN then
            self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_JIAO_FEN)
        
        -- 叫地主
        else
            self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_ROB_DZ)
        end
    end 
end 

-- 响应叫地主通知的消息
function TablePlayerBase:respondCallDzNotifyMsg(secTimeLeft)

    -- 叫分
    if self.jiaoMode == g_gameConstant.DDZ_RULE_JIAO_FEN then
        -- 显示闹钟 -- 叫分10s自动不叫
        self:showAlarmClockAnimation(true, secTimeLeft or 10)
    else
        -- 显示闹钟
        self:showAlarmClockAnimation(true)
    end
    
    
    if self.posState == 1 then
        -- 叫分
        if self.jiaoMode == g_gameConstant.DDZ_RULE_JIAO_FEN then
            
            self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_JIAO_FEN)
            local gameScene = g_gameGlobal:getGameScene()
            local gameBase = gameScene:getChildByName("gameBase")
            local fen = gameBase.callScore
            self:setJiaofenState(fen)
        
        -- 抢地主
        else
            self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_CALL_DZ)
        end
    end 
end 

function TablePlayerBase:dzCardsInsertToHandCard(cardData)
    if self.posState == 1 or g_gameGlobal:getIsPlayingGameLog() then
        for k, v in ipairs(cardData) do 
            table.insert(self.handCardData, v)
        end 
    else 
        for k, v in ipairs(cardData) do 
            table.insert(self.handCardData, 0)
        end 
    end 

    self:updateHandCardUI(self.handCardData)
end 

-- 清理手牌和出牌数据
function TablePlayerBase:removeSelfHandCardUI()
    self.publicFunc.delAllChildrenNode(self.handCardNode)
    self.publicFunc.delAllChildrenNode(self.outCardNode)
end 

-- 玩家叫地主结果处理
function TablePlayerBase:respondCallDzResultMsg(isCancel,isconnect)
    -- 清理掉自己的闹钟
    self:showAlarmClockAnimation(false)
    if self.posState == 1 then 
        self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_HIDE)
    end 

    local kind = self.GameCMD.PLAYER_CALL_DZ
    if isCancel then 
        kind = self.GameCMD.PLAYER_NO_CALL
    end 
    self:showCardTypeAction(kind,isconnect)
end 

function TablePlayerBase:respondJiaoFenResultMsg(isCancel, isconnect, fen)
    -- 清理掉自己的闹钟
    self:showAlarmClockAnimation(false)
    if self.posState == 1 then 
        self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_HIDE)
    end 

    local kind = self.GameCMD.PLAYER_NO_CALL
    if isCancel then
        kind = self.GameCMD.PLAYER_NO_CALL
    elseif fen == 1 then
        kind = self.GameCMD.BTNOPERATE_JIAO_FEN_1
    elseif fen == 2 then
        kind = self.GameCMD.BTNOPERATE_JIAO_FEN_2
    elseif fen == 3 then
        kind = self.GameCMD.BTNOPERATE_JIAO_FEN_3
    end 
    self:showCardTypeAction(kind,isconnect)
end

function TablePlayerBase:respondJiaBeiResultMsg(isCancel, isconnect)
    -- 清理掉自己的闹钟
    self:showAlarmClockAnimation(false)
    if self.posState == 1 then 
        self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_HIDE)
    end 

    local kind = self.GameCMD.BTNOPERATE_JIA_BEI
    if isCancel then 
        kind = self.GameCMD.BTNOPERATE_JIA_BEI_NO
    end 
    self:showCardTypeAction(kind,isconnect)
end

-- 玩家抢地主结果处理
function TablePlayerBase:respondRobDzResultMsg(isCancel,isconnect)
    -- 清理掉自己的闹钟
    self:showAlarmClockAnimation(false)
    if self.posState == 1 then 
        self:showOpBtnByState(self.GameCMD.OPERATION_BTN_STATE_HIDE)
    end

    local kind = self.GameCMD.PLAYER_ROB_DZ
    if isCancel then 
        kind = self.GameCMD.PLAYER_NO_ROB
    end 
    self:showCardTypeAction(kind,isconnect)
end 

-- 响应要不起消息并刷新UI
function TablePlayerBase:showPassStatus(isNew)
    if isNew == true then
        --self:hideYaoBuQiAnimation()
    else
        --self:showYaoBuQiAnimation()
    end
end 

function TablePlayerBase:passCardAction(status)

    if status == false then 
        return 
    end 
    -- 删除出牌数据
    self.publicFunc.delAllChildrenNode(self.outCardNode)
    -- 显示要不起动画
    self:showCardTypeAction(self.GameCMD.PLAYER_YAO_BU_QI)
    -- 要不起的声音
    NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzPass(self.sex or 0))
    -- 隐藏闹钟
    self:showAlarmClockAnimation(false)
end 

-- 显示出牌状态
--status: 牌权是否是自己
function TablePlayerBase:showOutCardStatus(time, status,isNew)

    if self.posState == 1 and not g_gameGlobal:getIsPlayingGameLog() then 
        return 
    end 
    -- 若该轮为新的一轮时，上次出牌数据要刷新掉
    if isNew == true then
        -- 隐藏要不起图片
        --self:hideYaoBuQiAnimation()
    end

    if status == false then 
        -- 隐藏自己的闹钟
        --self.alaramClockNode:hideAlarmClockAnimation();
        return
    end

    -- 隐藏要不起图片
    --self:hideYaoBuQiAnimation()
    -- 清理掉自己以前出过的牌
    self.publicFunc.delAllChildrenNode(self.outCardNode)
    -- 显示闹钟
    --self.alaramClockNode:showAlarmClockAnimation(time)
end

function TablePlayerBase:showAlarmClockAnimation(isShow, secTime)
    
    if isShow then
        self.publicFunc.delAllChildrenNode(self.outCardNode)
        
        --print("trace:\n"..debug.traceback())
    end
    
    if secTime then
        self.PKAnimation:showPassActionWithTime(self.clockNode,self.posState,isShow,self.GameCMD.ALARM_CLOCK,nil, secTime)
    else
        self.PKAnimation:showPassAction(self.clockNode,self.posState,isShow,self.GameCMD.ALARM_CLOCK,nil)
    end
end 


-- 回放专用
function TablePlayerBase:clearOutCard()
    self.publicFunc.delAllChildrenNode(self.outCardNode)
end 

-- 播放发牌动画
function TablePlayerBase:playStartCardsAnimation(handData,mustOutCard)

    if self.posState == 1 then 
        return 
    end 
    -- 设置必出的牌
    self.pukeData.GParames.mustOutData = mustOutCard

    self:updateHandCardUI(handData,false)
end

-- 更新手牌UI
function TablePlayerBase:updateHandCardUI(handData,isStart)

    if self.posState == 1 then 
        return 
    end 

    self.handCardData = handData

    local attrPos = {
        [1] = {anchor = cc.p(0.5,0),scale = 1},
        [2] = {anchor = cc.p(1,0),  scale = 0.4},
        [3] = {anchor = cc.p(1,0),  scale = 0.4},
        [4] = {anchor = cc.p(0,0),  scale = 0.4},
    } 

    -- 若手牌数量到达报警数量，则显示报警动画
    if #handData == self.GameCMD.WARN_CARDNUM and isStart ~= true then 
        if not tolua.isnull(self.warningNode) then 
            self.warningNode:showWarningAnimation()
        end 
    end 

    -- 移除手牌节点
    self.publicFunc.delAllChildrenNode(self.handCardNode)
    -- 判断手牌类型：正面还是背面
    local kind = self.GameCMD.DRAW_BGCARD
    if type(handData) == "table" and next(handData) ~= nil and  handData[1] > 0 then 
        kind = self.GameCMD.DRAW_FACECARD
        self.publicFunc.sortByCardLogic(handData,1)
    end 

    -- 创建手牌节点  
    local nodes = self.spriteCard.newHandCardPanel(handData,kind)
    -- 设置手牌锚点和大小
    nodes:setAnchorPoint(attrPos[self.posState].anchor):setScale(attrPos[self.posState].scale)
    -- 附加到父节点
    self.handCardNode:addChild(nodes)
end

function TablePlayerBase:showResultCardPanel(handData, outData)
    
    -- 清空打出牌
    self:clearOutCard()
    
    -- 移除手牌节点
    self.publicFunc.delAllChildrenNode(self.handCardNode)
    
    -- 
    local attrPos = {
        [1] = {anchor = cc.p(0.5,0),scale = 1},
        [2] = {anchor = cc.p(1,0),  scale = 0.4},
        [3] = {anchor = cc.p(1,0),  scale = 0.4},
        [4] = {anchor = cc.p(0,0),  scale = 0.4},
    } 
    
    local nodeCard = self.spriteCard.newOpenResultCardPanel(handData, outData)
    
    nodeCard:setAnchorPoint(attrPos[self.posState].anchor):setScale(attrPos[self.posState].scale)
    -- 附加到父节点
    self.handCardNode:addChild(nodeCard)
end

-- 速度档位
function TablePlayerBase:resetActionTime(speedLevel)


end 

function TablePlayerBase:setJiaofenState(fen)
    if tolua.isnull(self.opBtnObj) then
        return
    end
    self.opBtnObj:setJiaofenState(fen)
end

return TablePlayerBase  J?  