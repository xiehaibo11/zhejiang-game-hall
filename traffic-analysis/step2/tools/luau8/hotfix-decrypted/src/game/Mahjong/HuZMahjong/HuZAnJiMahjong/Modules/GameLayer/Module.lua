local GameModule = CF.gameClass("GameModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.GameLayer.Module")

GameModule.EVENT_REPLAYCE_SHOW_ANI = "EVENT_REPLAYCE_SHOW_ANI"
GameModule.EVENT_SHOW_FANCAISHEN_ANI = "EVENT_SHOW_FANCAISHEN_ANI"

local isFirstReplace = false

--出牌类型
local enumType = {
    REPLACE_FLOWER = 1, --补花
    TAKE_MAH = 2,  --摸牌
    PLAY_MAH = 3,  --出牌
    SHOW_POWER = 4, 
    SHOW_PLAY_LMT = 5
}

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgIsOnPiaoCai), msgClass = CF.GameProtocol.msgIsOnPiaoCai}
    return subXYDealList
end

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:getGameData():setIsJokerToFlower(true)
end

--是否在飘财中 anji
function GameModule:onMsgIsOnPiaoCai(msgData)
    self._isOnPiaoCai = msgData.isOnPiaoCai
end

-- 游戏开始
function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self,msgData)
    CF.roomData:setIsGameStart(true)
    self._isOnPiaoCai = false
    self._playerReplaceTakeIndex = 1
    self._palyerReplaceTakeList = {}
    self._isReplaceTakeEnd = true    
    --补花和抓牌
    self._isReplaceTakeTime = 0.25
    isFirstReplace = true
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self._showChipsList = self._showChipsList or {}
    self._showChipsList[#self._showChipsList + 1] = clone(chips)
    if #self._showChipsList >= 2 then
        -- 骰子动画，可能有队列动画
        self:showChips(self._showChipsList[1])        
        self._showChipsList = {}
    end
end

-- 开牌
function GameModule:onMsgOpenWall(msgData)
    local localCacheData = "" .. CF.roomData:getRoomID()
    local tempCacheData = cc.UserDefault:getInstance():getStringForKey("CURRENT_GAME_OPEN_MAH_ANIMATION_SHOW", "")
    if localCacheData and localCacheData == tempCacheData then
        GameModule.super.onMsgOpenWall(self,msgData)
    else
        CF.SysTool.performDelayOnce(function() 
            local tFunc = function ()
                GameModule.super.onMsgOpenWall(self,msgData)
             end
             if not localCacheData or localCacheData ~= tempCacheData then
                 cc.UserDefault:getInstance():setStringForKey("CURRENT_GAME_OPEN_MAH_ANIMATION_SHOW", localCacheData)
                 tempCacheData = localCacheData
                 self:dispatchEvent( { name = self.EVENT_SHOW_FANCAISHEN_ANI, msg = {mah = msgData.nMah,func = tFunc} })
             end
        end, 1.2)
    end
end

--解析花规则:"23花""
function GameModule:parseFlowerCnt(strFlowerCnt)
    local flowerCnt = string.sub(strFlowerCnt, 1, string.len(strFlowerCnt)-3)
    if flowerCnt then
        return tonumber(flowerCnt)
    end
    return nil
end

function GameModule:setPlayerReplaceTakeList(msgData,type,isStopAction)    
    msgData.type = type
    if not self._palyerReplaceTakeList then
        self._palyerReplaceTakeList = {}
    end
    table.insert(self._palyerReplaceTakeList, msgData)
    if not isStopAction then
        -- 开始补花和抓牌
        self:startTakeAndReplaceAction()
    end
end

-- 补花
function GameModule:onMsgReplace(msgData)
    if not CF.roomData:getIsGameStart() then
        return
    end
    if CF.roomData:getIsFastPlay() then
        GameModule.super.onMsgReplace(self, msgData)
        return
    end
    self:setPlayerReplaceTakeList(msgData,1,true)

    --播放补花动画
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    self:dispatchEvent( { name = self.EVENT_REPLAYCE_SHOW_ANI, msg = {seat = localSeat} })

    -- TODO 0721 补花音效
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.nSeat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = 3
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
end

-- 出牌
function GameModule:onMsgPlay(msgData)
    if not CF.roomData:getIsGameStart() then
        return
    end
    if CF.roomData:getIsFastPlay() then
        GameModule.super.onMsgPlay(self, msgData)
        return
    end
    self:setPlayerReplaceTakeList(msgData,3)
end

-- 限制牌
function GameModule:onMsgPlayLmts(msgData)
    if not CF.roomData:getIsGameStart() then
        return
    end
    if CF.roomData:getIsFastPlay() then
        GameModule.super.onMsgPlayLmts(self, msgData)
        return
    end
    self:setPlayerReplaceTakeList(msgData,5)
end

-- 抓牌
function GameModule:onMsgTake(msgData)
    if not CF.roomData:getIsGameStart() then
        return
    end
    if CF.roomData:getIsFastPlay() then
        GameModule.super.onMsgTake(self, msgData)
        return
    end
    self:setPlayerReplaceTakeList(msgData,2)
end

-- 牌权
function GameModule:onMsgPower(msgData)
    if CF.roomData:getIsFastPlay() then
        GameModule.super.onMsgPower(self, msgData)
        return
    end
    self:setPlayerReplaceTakeList(msgData,4)
end

function GameModule:startTakeAndReplaceAction()
    if not self._isReplaceTakeEnd  then
        return
    end
    self._isReplaceTakeEnd = false
    --显示吃碰杠权限
    local function showPowerFunction()
        local msgPower = self._palyerReplaceTakeList[self._playerReplaceTakeIndex]        
        GameModule.super.onMsgPower(self, msgPower)
        
        local powerByte = bit:d2b(msgPower.nPower)
        for i = 57, 64 do
            if powerByte[i] == 1 then
                if i == 59 then
                    self:getGameData():setPreviewShow(false)
                elseif i == 58 then
                    self:getGameData():setPreviewShow(false)
                elseif i == 57 then
                    self:getGameData():setPreviewShow(false)
                end                
            end
        end
    end

    --出牌函数
    local function palyMahFunction()
        local msgPlay = self._palyerReplaceTakeList[self._playerReplaceTakeIndex]
        GameModule.super.onMsgPlay(self, msgPlay)
        self:getGameData():setPreviewShow(false)
    end

    --补花函数
    local function replaceFlowerFunction()
        local msgReplace = self._palyerReplaceTakeList[self._playerReplaceTakeIndex]
        GameModule.super.onMsgReplace(self, msgReplace)
    end

    --抓牌函数
    local function takeMahFunction()
        local msgTake = self._palyerReplaceTakeList[self._playerReplaceTakeIndex]
        GameModule.super.onMsgTake(self, msgTake)
    end

    --出牌限制函数
    local function showPlayLmtFunction()
        local msgPlayLmts = self._palyerReplaceTakeList[self._playerReplaceTakeIndex]  
        GameModule.super.onMsgPlayLmts(self, msgPlayLmts)
    end

    -- 播放函数
    local repeatFunction = nil

    -- 延时函数
    local delayFunction = function(delayTime)        
        self._delayFuncListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._delayFuncListener)
            repeatFunction()
        end , delayTime, false)
    end

    -- 播放函数
    repeatFunction = function()
        if self._playerReplaceTakeIndex > #self._palyerReplaceTakeList then
            self._isReplaceTakeEnd = true       
            return
        end

        local delayTime = self._isReplaceTakeTime
        local tempMsgData = self._palyerReplaceTakeList[self._playerReplaceTakeIndex]
        local tempNextMsgData = self._palyerReplaceTakeList[self._playerReplaceTakeIndex + 1]

        --出牌回放时间加快
        if tempNextMsgData and tempNextMsgData.type == 2 then
            delayTime = 0.1
        end

        if tempMsgData.type == enumType.REPLACE_FLOWER then
            replaceFlowerFunction()
        elseif tempMsgData.type == enumType.TAKE_MAH then
            takeMahFunction()
        elseif tempMsgData.type == enumType.PLAY_MAH then
            palyMahFunction()
        elseif tempMsgData.type == enumType.SHOW_POWER then
            showPowerFunction()
        elseif tempMsgData.type == enumType.SHOW_PLAY_LMT then
            showPlayLmtFunction()
        end
        
        self._playerReplaceTakeIndex = self._playerReplaceTakeIndex + 1
        delayFunction(delayTime)
    end

    -- 开始补花抓牌和出牌
    delayFunction(0)
end

function GameModule:doServerToClientMessage(record, msgData, subXYID)
    if not CF.roomData:isInitTaleData() then
        return
    end
    if subXYID == CF.GameProtocol.msgReplace.XY_ID then
        if self:getGameData():getCurGameStep() >= CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_MAH then
            self:addProtocolToDelayQueue(record.callback, clone(msgData), 0.5, true, subXYID)
        else
            if isFirstReplace then
                isFirstReplace = false
                self:addProtocolToDelayQueue(record.callback, clone(msgData), 1.5, true, subXYID)
            else
                self:addProtocolToDelayQueue(record.callback, clone(msgData), 0.83, true, subXYID)
            end
        end
        return
    end
    GameModule.super.doServerToClientMessage(self, record, msgData, subXYID)
end

function GameModule:doActionChow()
    local jokerData = self:getGameData():getJokerData()
    local insteadData = self:getGameData():getInsteadMahData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()
    local openMahs = self:getGameData():getOpenData()

    local tempHands = clone(handMahs)
    if not CF.configData:canChowPungKongJoker() then
        for i = #tempHands,1,-1 do
            for j = 1,#jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands,i)
                    break
                end
            end
        end
    end

    local combs = self:getMahAlgorithm():findChow(tempHands, inMah, jokerData, insteadData, openMahs)
    local combsSize = #combs
    if combsSize == 1 then
        local msgCombs = {}
        msgCombs.mahs = combs[1]
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.CHOW
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif combsSize > 1 then
        local function reverseTable(tab)
            local tmp = {}
            for i = 1, #tab do
                tmp[i] = table.remove(tab)
            end
            return tmp
        end  
        combs = reverseTable(combs)
        local data = {}
        data.isShow = true
        data.combs = combs
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
    end
end

return GameModule0,