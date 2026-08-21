local PropUseModule = CF.gameClass("PropUseModule", "game.GameBase.Modules.PropUse.Module")
PropUseModule.EVENT_SHUFFLE_CLOSE_VIEW = "EVENT_SHUFFLE_CLOSE_VIEW"
PropUseModule.EVENT_UPDATE_SHUFFLE_PLAYER = "EVENT_UPDATE_SHUFFLE_PLAYER"
PropUseModule.EVENT_SHOW_SHUFFLE_LIST = "EVENT_SHOW_SHUFFLE_LIST"


function PropUseModule:getSubXYDealList()
    local subXYDealList = PropUseModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShuffleSeats),msgClass = CF.GameProtocol.msgShuffleSeats}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShuffleFinish),msgClass = CF.GameProtocol.msgShuffleFinish}
    return subXYDealList
end

function PropUseModule:getRespUsePropConfig()
    local config = PropUseModule.super.getRespUsePropConfig(self)
    config[#config + 1] = {keyStr = "nextDouble=1", callBack = handler(self, self.onUsePropNextDouble)}
    return config
end

function PropUseModule:onUsePropNextDouble(usePropMsg)
    self:dispatchEvent( { name = self.EVENT_UPDATE_DOUBLE_STATE , msg = {bShow = false, bClick = false}})
    local tipLayer = CF.TipTool.showPopLayer("TipLayer")
    tipLayer:setText("下一局成功加倍！")

    CF.msgManager:sendAddBei()
end

function PropUseModule:playLocalShuffle(usePropMsg)
    if self:getIsLocalShuffle() then
        CF.game:getModule("GameLayer"):clearAllMahData()
        local allShuffle = false
        usePropMsg = usePropMsg or {}
        if type(usePropMsg.param) == "string" and string.match(usePropMsg.param, "allShuffle=1") then
            allShuffle = true
        end
        if allShuffle then
            local shuffleList = {}
            local KW_TMP_THESAURUS = {"金主", "豪门", "富豪", "贵族", "财主"}
            for _,v in pairs(self._shuffleIdsCurRound) do
                local player = CF.roomData:getPlayerDataByNumberID(v)
                if player then
                    local shufferText = string.format("%s玩家%s，正在洗牌...", KW_TMP_THESAURUS[math.random(1, #KW_TMP_THESAURUS)], player:getNickName2())
                    table.insert(shuffleList, shufferText)
                end
            end
            if #shuffleList > 0 then
                local ShuffleView = CF.gameRequire("Modules.PropUse.ShuffleView")
                local runningScene = display.getRunningScene()
                if not runningScene :getChildByName(ShuffleView.ClassName) then
                    ShuffleView.new({isLocalShuffle = self:getIsLocalShuffle(), param = usePropMsg.param}):showSelf()
                end
                self:dispatchEvent({name = self.EVENT_SHOW_SHUFFLE_LIST, msg = {shufflelist = shuffleList}})
            else
                self:shuffleFinished()
            end
            return
        end
        local shufferText = string.format("玩家%s，正在洗牌...", CF.selfPlayerData:getppd().nickname2)
        shufferText = string.sub(shufferText, 1, #shufferText - 1)
        --播放洗牌动画
        CF.gameRequire("Modules.PropUse.ShuffleView").new({shufferText = shufferText, isLocalShuffle = self:getIsLocalShuffle(), param = usePropMsg.param}):showSelf()
    end
end

function PropUseModule:playShuffle(usePropMsg)
    if self:getIsLocalShuffle() then
        self:playLocalShuffle(usePropMsg)
    else
        CF.msgManager:sendPlayerShuffle()
        CF.TipTool.showToast("消耗成功，下一局开始时将会进行洗牌", 2)
    end
end

function PropUseModule:onUsePropShuffleCut(usePropMsg)
    CF.roomData:reqCutCardsState(1)  
    self:playLocalShuffle(usePropMsg)
end

function PropUseModule:onRespUseProp(event)
    local usePropMsg = PropUseModule.super.onRespUseProp(self, event)
    CF.msgManager:sendRequestPlayerProps()
    --洗牌后发送准备
    if string.match(usePropMsg.param, "shuffle=1") and not self:getIsLocalShuffle() then
        CF.msgManager:sendGameStart()
    end
    return usePropMsg
end

function PropUseModule:onMsgShuffleSeats(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if player then
        CF.game:getModule("GameLayer"):clearAllMahData()
        local shufferText = string.format("玩家%s，正在洗牌...", player:getNickName2())
        local ShuffleView = CF.gameRequire("Modules.PropUse.ShuffleView")
        local runningScene = display.getRunningScene()
        if not runningScene:getChildByName(ShuffleView.ClassName) then
            local shuffleAniLayer = CF.gameRequire("Modules.PropUse.ShuffleView").new({shufferText = shufferText, isLocalShuffle = self:getIsLocalShuffle()})
            shuffleAniLayer:showSelf()
        else
            self:dispatchEvent({name = self.EVENT_UPDATE_SHUFFLE_PLAYER, msg = {text = shufferText}})
        end 
    end
end

function PropUseModule:onMsgShuffleFinish(msgData)
    self:dispatchEvent({name = self.EVENT_SHUFFLE_CLOSE_VIEW})
end

function PropUseModule:getIsLocalShuffle()
    local bLocalShuffle = true
    if CF.configData and CF.configData.getIsLocalShuffle and CF.roomData:isBoxRoom() then
        bLocalShuffle = CF.configData:getIsLocalShuffle()
    end
    return bLocalShuffle
end

return PropUseModule