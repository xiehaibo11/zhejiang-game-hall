local ClientData = class("ClientData")
local CURRENT_MODULE_NAME = ...
local CardFrameworkDefine = import(".CardFrameworkDefine",CURRENT_MODULE_NAME)
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)

function ClientData:ctor()
    self._gameStep = CardFrameworkDefine.ENUM_GAME_STEP.GAME_STEP_NONE
    self._sendMobileSignalMsgTime = 0
    
    self._playCount = 0
    self._maxplayCount = 0
	self._baseScore = 0
    self._roomHostSeat = -1
    self._haveMingPai = false
    self._gameType = 0
    
    self._outCardsRecord = {}
	
    self._openCardID = 0
	
    self._handCard = {}
    self._jokerData = {}
    self._lianZhaBuDai = false
    
    self._bChaoDi = {}
    
    self._sortCardIndex = GameKeyWord.KW_NUM_SORT_BY_COUNT
    self._gongXian = {}
	self._localtion = {}
	
    self._preOutSeat = 0
    self._powerSeat = 0
    
    self._openCardFirstSeat = 0
    self._openCardSecondSeat = 0
    
    self._preconditionOutCards = false
	
	self._playerHeartTime = {}
	
	--高德配置
	self._openAMapConfig = true
    self._autoReady = 0
    self._playType = 0 -- 0:不带连炸，1:带连炸
    self._dismissData = {}
    self._ruleStr = ''

    self._isFFZ = 0     --是否翻翻炸玩法
    self._showBombCards = {}
    self._scoreCard = {}
end
 
function ClientData:initEveryTime()
    self._gameStep = CardFrameworkDefine.ENUM_GAME_STEP.GAME_STEP_NONE
    
    self._localtion = {}
    self._openCardID = 0
    
    self._preconditionOutCards = false
    
    self:clearHandCardData()
    self:clearGongXian()
    self:resetChaoDiData()
    self:resetRecordData()
    
    self._preOutSeat = Game.FrameworkFunction.getMaxPlayer()
    self._powerSeat = Game.FrameworkFunction.getMaxPlayer()
    
end

function ClientData:addOutCardRecord(nSeat,outGroup )
    local cards = clone(outGroup)
    table.insert(self._outCardsRecord[nSeat],cards)
end

function ClientData:clearHandCardData()
    for i = 0 ,Game.FrameworkFunction.getMaxPlayer() - 1 do
        self._handCard[i] = {}
    end
end

function ClientData:clearGongXian()
    for i = 0 ,Game.FrameworkFunction.getMaxPlayer() - 1 do
        self._gongXian[i] = 0
    end
end

function ClientData:resetChaoDiData()
    for i = 0 ,Game.FrameworkFunction.getMaxPlayer() - 1 do
        self._bChaoDi[i] = false
    end
end

function ClientData:resetRecordData()  
    for i = 0 ,Game.FrameworkFunction.getMaxPlayer() - 1 do
        self._outCardsRecord[i] = {}
    end
end

function ClientData:setAMapOpen(bhaveAMap)
    if bhaveAMap ~= nil then
        self._openAMapConfig = bhaveAMap
    end
end

function ClientData:getAutoReady()
    return self._autoReady
end

function ClientData:setAutoReady(autoready)
    self._autoReady = autoready
end

function ClientData:setPlayType(playType)
    self._playType = playType
end

function ClientData:getPlayType()
    return self._playType
end

function ClientData:getBaseScore()
    return self._baseScore
end

function ClientData:setBaseScore(score)
    self._baseScore = score
end

function ClientData:setRuleStr(str)
    self._ruleStr = str
end

function ClientData:getRuleStr()
    return self._ruleStr
end

function ClientData:getShowBombCards()
    return self._showBombCards
end

function ClientData:getShowBombCardsBySeat(seat)
    return self._showBombCards[seat]
end

function ClientData:setShowBombCards(seat,bombCards)
    self._showBombCards[seat] = bombCards
end

function ClientData:clearShowBombCards()
    self._showBombCards = {}
end

function ClientData:setIsFFZ(flag)
    self._isFFZ = flag
end

function ClientData:getIsFFZ()
    return self._isFFZ
end

function ClientData:getScoreCards()
    return self._scoreCard
end

function ClientData:setScoreCards(cardIds)
    self._scoreCard = cardIds
end

return ClientData