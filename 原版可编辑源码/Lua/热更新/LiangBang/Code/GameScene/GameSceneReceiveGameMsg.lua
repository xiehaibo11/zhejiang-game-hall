local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local GameBaseProtocol = import("GameCommon.Code.GameBase.GameBaseProtocol")
local GameLogicProtocol = import("..GameProtocol.GameLogicProtocol",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local CellWXImageDownload = import("GameCommon.Code.GameTeaBusiness.CellWXImageDownload")
local MyCardsType = import("..GameAlgorithmTZ.MyCardsType",CURRENT_MODULE_NAME)
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)
local HintCard = import("..GameAlgorithmTZ.HintCard",CURRENT_MODULE_NAME)
local GameCard = import("..GameAlgorithm.GameCard",CURRENT_MODULE_NAME)
local MyCard = import("..GameAlgorithm.MyCard",CURRENT_MODULE_NAME)
local SetData = import("GameCommon.Code.GameData.SetData")
local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MODULE_NAME)
local SmartSelectCard = import("..GameAlgorithmTZ.SmartSelectCards",CURRENT_MODULE_NAME)
local ToolUtils = import("..Tool.ToolUtils")
local UICardsLayerBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsLayer")

local amapArrayList = {
    [0]= "",[1]= "",[2]= "",[3]= ""
} --  高德地理数据

function GameScene:onReciveGameMsg(XYID, buff, len)
    if XYID ~= GameMXY.ServerToClientMessage.XY_ID then 
        return 
    end 
    
    local tServerToClientMessageData = GameMXY.ServerToClientMessage:new()
    tServerToClientMessageData:bistream(buff, len)
    print(string.format("GameProtocol ID = %d ,len = %d",tServerToClientMessageData.cmdid,tServerToClientMessageData.msglen))
    
    local subXYID = tServerToClientMessageData.cmdid
    local subBuff = tServerToClientMessageData.message
    local subLen  = tServerToClientMessageData.msglen
    
    print(string.format("subXYID ID = %d ,len = %d", subXYID, subLen))
    
    if subXYID == GameBaseProtocol.msgPlayerData.XY_ID then
        self:onMsgPlayerData(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgPlayerDataEx.XY_ID then
        self:onMsgPlayerDataEx(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgPlayerEnter.XY_ID then
        self:onMsgPlayerEnter(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgPlayerLeave.XY_ID then
        self:onMsgPlayerLeave(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgPlayerStart.XY_ID then
        self:onMsgPlayerStart(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgBaseClientForwardEx.XY_ID then
        self:onMsgClientForwardBase(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgUUID.XY_ID then
        self:onMsgUUID(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgAskContinue.XY_ID then
        self:onMsgAskContinue(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgContinueFlag.XY_ID then
        self:onMsgContinueFlag(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgContinueTips.XY_ID then
        self:onMsgContinueTips(subXYID,subBuff,subLen)
    end

    --    ------------------自己玩家被踢掉不再接收游戏逻辑协议--------------------------------
    if Game.FrameworkFunction.getSelfPlayer() == nil then
        return
    end


    if subXYID == GameLogicProtocol.msgPlayCount.XY_ID then 
        self:onMsgPlayCount(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgRoomHostSeat.XY_ID then
        self:onMsgRoomHostSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgRequestDismiss.XY_ID then
        self:onMsgRequestDismiss(subXYID,subBuff,subLen) 
    elseif subXYID == GameLogicProtocol.msgRespondDismiss.XY_ID then
        self:onMsgRespondDismiss(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgDismissFlag.XY_ID then
        self:onMsgDismissFlag(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgClock.XY_ID then
        self:onMsgClock(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgSendAllCard.XY_ID then
        self:onMsgSpecfCards(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameStart.XY_ID then
        self:onMsgGameStart(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameStep.XY_ID then
        self:onMsgGameStep(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgAvatarUrl.XY_ID then
        self:onMsgAvatarUrl(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgTrust.XY_ID then
        self:onMsgTrust(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgJokerData.XY_ID then
        self:onMsgJokerData(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgAllOutRecord.XY_ID then
        self:onMsgAllOutRecord(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgWinLost.XY_ID then
        self:onMsgWinLost(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgHandCard.XY_ID then
        self:onMsgHandCard(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgShowOutCards.XY_ID then
        self:onMsgShowOutCards(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgLianZhaBuDai.XY_ID then
        self:onMsgLianZhaBuDai(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameType.XY_ID then
        self:onMsgGameType(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgHaveMingPai.XY_ID then
        self:onMsgHaveMingPai(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameMut.XY_ID then
        self:onMsgGameMut(subXYID,subBuff,subLen) 
    elseif subXYID == GameLogicProtocol.msgBase.XY_ID then
        self:onMsgBase(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameRule.XY_ID then
        self:onMsgGameRule(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameGong.XY_ID then
        self:onMsgGameGong(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgSwapSeat.XY_ID then
        self:onMsgSwapSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgOpenCard.XY_ID then
        self:onMsgOpenCard(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgOpenCardSeat.XY_ID then
        self:onMsgOpenCardSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgWinOrder.XY_ID then
        self:onMsgWinOrder(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgTotalResult.XY_ID then
        self:onMsgTotalResult(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgClientForward.XY_ID then
        self:onMsgClientForward(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameEnd.XY_ID then
        self:onMsgGameEnd(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgCanChaoDi.XY_ID then
        self:onMsgCanChaoDi(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgPower.XY_ID then
        self:onMsgPower(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgOutCards.XY_ID then
        self:onMsgOutCards(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgRequestSwapSeat.XY_ID then
        self:onMsgRequestSwapSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgRespondSwapSeat.XY_ID then
        self:onMsgRespondSwapSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgShowSwapSeat.XY_ID then 
        self:onMsgShowSwapSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgSwapSeatFlag.XY_ID then 
        self:onMsgSwapSeatFlag(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgObviousCardsData.XY_ID then
        self:onMsgObviousCardsData(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgAllHandCards.XY_ID then
        self:onMsgAllHandCards(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgNoOutGong.XY_ID then
        self:onMsgNoOutGong(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgSurrenderCountDown.XY_ID then
        self:onMsgSurrenderCountDown(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgScoreTableShowTurn.XY_ID then
        self:onMsgScoreTableShowTurn(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgScoreEveryPlayerTurn.XY_ID then
        self:onMsgScoreEveryPlayerTurn(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgScoreBombTurn.XY_ID then
        self:onMsgScoreBombTurn(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgWinLostDT.XY_ID then
        self:onMsgWinLostDT(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgTotalResultDT.XY_ID then
        self:onMsgTotalResultDT(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgSurrenderFlag.XY_ID then
        self:onMsgSurrenderFlag(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgTotalScore.XY_ID then
        self:onMsgTotalScore(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgShuffleSeats.XY_ID then
        self:onMsgShuffleSeats(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgShuffleFinish.XY_ID then
        self:onMsgShuffleFinish(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgDismissCountdown.XY_ID then
        self:omMsgDismissCountdown(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgFourJokerScore.XY_ID then
        self:omMsgFourJokerScore(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgStableBombSeat.XY_ID then
        self:omMsgStableBombSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgFFZSeat.XY_ID then
        self:omMsgFFZSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgFFZBomb.XY_ID then
        self:omMsgFFZBomb(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgFFZBombOnce.XY_ID then
        self:omMsgFFZBombOnce(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgWaitShowBombAni.XY_ID then
        self:onMsgWaitShowBombAni(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgFFZJoker.XY_ID then
        self:onMsgFFZJoker(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgSpecialBomb.XY_ID then
        self:onMsgSpecialBomb(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgScoreCard.XY_ID then
        self:onMsgScoreCard(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgTouJiaScore.XY_ID then
        self:onMsgTouJiaScore(subXYID,subBuff,subLen)
    end
end

-- uuid协议
function GameScene:onMsgUUID(XYID,buff,len)
    local msgUUID = GameBaseProtocol.msgUUID:new()
    msgUUID:bistream(buff, len)

    if msgUUID.strUUID == "" then
        self._uuid = msgUUID.uluuid
    else
        self._uuid = msgUUID.strUUID
    end
end

-- 局数信息
function GameScene:onMsgPlayCount(XYID,buff,len)
    local msgPlayCount = GameLogicProtocol.msgPlayCount:new()
    msgPlayCount:bistream(buff, len)
    self._clientData._playCount = msgPlayCount.playCount
    self._clientData._maxplayCount = msgPlayCount.maxPlayCount
    Game.UIFunction.setText(self:getRootNode(),GameSceneDefine.KW_TEXT_LB_ZHANJI,('战绩:' .. "("..msgPlayCount.playCount).."/"..msgPlayCount.maxPlayCount .. ')')
    Game.UIFunction.setText(self:getRootNode(),GameSceneDefine.KW_TEXT_INNING,tostring(msgPlayCount.playCount .. "/" .. msgPlayCount.maxPlayCount) ..'局')
end

function GameScene:onMsgPlayerData(XYID,buff,len)
    local msgPlayerData = GameBaseProtocol.msgPlayerData:new()
    msgPlayerData:bistream(buff, len)
    if msgPlayerData.nState == PlayerData.USER_STATE.US_SEEING then
        return
    end

    Game.PlayerData.updataPlayerData(msgPlayerData)
    
    local player = Game.PlayerData.getPlayerByPlayerID(msgPlayerData.nBrandID,msgPlayerData.nNumberID)
    if player == nil then
        return
    end

    local nickname = Game.Interface.getNickName2(msgPlayerData.nBrandID, msgPlayerData.nNumberID)
    if nickname and nickname ~= "" then 
        player:setNickName(nickname)
    end 

    local localSeat = Game.FrameworkFunction.seatToLocal(msgPlayerData.nSeat)
    -- 刷新UI

    local headUI = self:getUIPlayerHead(localSeat)
    if headUI then
        -- 刷新小头像相关
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_PANEL_HEAD_ .. localSeat,true)
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_HEAD_NICKNAME,player:getNickName())
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_SCORE,msgPlayerData.nPlayTypeScore)
        self:showPerPlayerAllScore(localSeat, msgPlayerData.nPlayTypeScore)

        if player:getAvatarUrl() == "" then
            Game.UIFunction.loadTexture(headUI,GameSceneDefine.KW_UI_HEAD_PIC,string.format(GameSceneDefine.KW_UI_PLAYER_HEAD_PNG,player:getSex()),ccui.TextureResType.plistType)
            local picAreaSize = Game.UIFunction.getContentSize(headUI, GameSceneDefine.KW_UI_HEAD_PIC_AREA)
            local picSize = Game.UIFunction.getContentSize(headUI, GameSceneDefine.KW_UI_HEAD_PIC)
            Game.UIFunction.setScaleX(headUI, GameSceneDefine.KW_UI_HEAD_PIC, picAreaSize.width/picSize.width)
            Game.UIFunction.setScaleY(headUI, GameSceneDefine.KW_UI_HEAD_PIC, picAreaSize.height/picSize.height)
        end

        -- 刷新信息面板相关
        local numOfAllGames = player:getWin() + player:getLose() + player:getEscape() + player:getDraw()
        local rank = Game.FrameworkFunction.getLvByTypeScore(player:getPlayTypeScore())
        local winRate = 0
        local eacapeRate = 0
        if numOfAllGames ~= 0 then
            winRate = player:getWin() / numOfAllGames
            eacapeRate = player:getEscape() / numOfAllGames
        end
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_NUMBER_ID,"帐号:" .. player:getNumberID())
        -- Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_MONEY_NUM,player:getPlayTypeScore())
        -- Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_MONEY_NUM,'0') --hcc
        -- Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_LEVEL,"等级: " .. rank)
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_GAME_NUM,numOfAllGames)
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_INFO_NICKNAME,player:getNickName())
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_WIN_RATE,string.format("%.2f",winRate * 100) .. '%')
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_ESCAPE_RATE,string.format("%.2f",eacapeRate * 100) .. '%')
        if player:getAvatarUrl() == "" then
            Game.UIFunction.loadTexture(headUI,GameSceneDefine.KW_UI_INFO_PIC,string.format(GameSceneDefine.KW_UI_PLAYER_HEAD_PNG,player:getSex()),ccui.TextureResType.plistType)
            local bigPicAreaSize = Game.UIFunction.getContentSize(headUI, GameSceneDefine.KW_UI_INFO_PIC_AREA)
            local bigPicSize = Game.UIFunction.getContentSize(headUI, GameSceneDefine.KW_UI_INFO_PIC)
            Game.UIFunction.setScaleX(headUI, GameSceneDefine.KW_UI_INFO_PIC, bigPicAreaSize.width/bigPicSize.width)
            Game.UIFunction.setScaleY(headUI, GameSceneDefine.KW_UI_INFO_PIC, bigPicAreaSize.height/bigPicSize.height)
        end
        local isBoxRoom = self._roomMode == Game.FrameworkFunction.ROOM_MODE.BOXROOM
        if isBoxRoom then
            Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_TEXT_LEVEL,false)
            Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_TEXT_IP,true)
            Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_IP,"" .. XH.GT.dimIpName(player:getIPName()))
        end

        if self._numidToSeat[player:getNumberID() ] == nil then
            self._numidToSeat[ player:getNumberID() ] = localSeat
            self._headFrameUrl[player:getNumberID()] = ""

            table.insert(self._numidList,player:getNumberID())
            if #self._numidList == 1 then
                self:reqPlayerPropTaskProtocol(msgPlayerData.nNumberID)    
            end
        end
    end
end

function GameScene:onMsgRoomHostSeat(XYID,buff,len)
    local msgRoomHostSeat = GameLogicProtocol.msgRoomHostSeat:new()
    msgRoomHostSeat:bistream(buff, len)
    self._clientData._roomHostSeat = msgRoomHostSeat.seat
    local localHostSeat = Game.FrameworkFunction.seatToLocal(msgRoomHostSeat.seat)
    for i = 0,Game.FrameworkFunction.getChairs() - 1 do
        local localSeat = Game.FrameworkFunction.seatToLocal(i)
        local panelHeadNode = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_HEAD_..localSeat)
        if panelHeadNode then
            Game.UIFunction.setVisible(panelHeadNode,GameSceneDefine.KW_UI_HEAD_HOST,localSeat == localHostSeat)
        end
    end
end

function GameScene:onMsgRequestDismiss(XYID,buff,len)
    local msgRequestDismiss = GameLogicProtocol.msgRequestDismiss:new()
    msgRequestDismiss:bistream(buff, len)

    local player = Game.FrameworkFunction.getPlayerBySeat(msgRequestDismiss.seat)
    if player == nil then
        return
    end
    if self._clientData._dismissData then
        self._clientData._dismissData = {}
    end

    self._clientData._dismissData[msgRequestDismiss.seat] = GameSceneDefine.DismissRoomType.REQUEST
    
    for i=0, Game.FrameworkFunction.getMaxPlayer()-1 do
        if i ~= msgRequestDismiss.seat and msgRequestDismiss.bAgree[i] == true then
            self._clientData._dismissData[i] = GameSceneDefine.DismissRoomType.AGREE
        end
    end

    if self._clientData._playCount > 0 then
        self:getDismissLayer():showDismissPanle(true)
        self:getDismissLayer():setLeftTime(msgRequestDismiss.nRemainingTime)
        local selfSeat = Game.FrameworkFunction.getSelfSeat()
        if msgRequestDismiss.seat == selfSeat or msgRequestDismiss.bAgree[selfSeat] then
            self:getDismissLayer():showBtn(false)
        else
            self:getDismissLayer():showBtn(true)
        end
        --[[
        local msg = "玩家【"..player:getNickName().."】申请解散房间，请等待其他玩家选择"
        self:getDismissLayer():setText(msg, 1)
        ]]

        self:getDismissLayer():setTitle(player:getNickName())

        local index = 1
        for i=0, Game.FrameworkFunction.getMaxPlayer()-1 do
            -- 此处设置其他玩家是否同意解散
            local iPlayer = Game.FrameworkFunction.getPlayerBySeat(i)
            if i == msgRequestDismiss.seat and iPlayer ~= nil then
                self:getDismissLayer():setInfo(iPlayer:getNickName(),index,GameSceneDefine.DismissRoomType.AGREE)
            elseif iPlayer ~= nil then
                self:getDismissLayer():setInfo(iPlayer:getNickName(),index,GameSceneDefine.DismissRoomType.REQUEST)
            end
            index = index+1
        end
    end
end

function GameScene:onMsgRespondDismiss(XYID,buff,len)
    local msgRespondDismiss = GameLogicProtocol.msgRespondDismiss:new()
    msgRespondDismiss:bistream(buff, len)
    local player = Game.FrameworkFunction.getPlayerBySeat(msgRespondDismiss.seat)
    if player == nil then
        return
    end

    local seat = msgRespondDismiss.seat
    local reqSeat = nil
    for i=0, Game.FrameworkFunction.getMaxPlayer()-1 do
        if self._clientData._dismissData[i] == GameSceneDefine.DismissRoomType.REQUEST then
            reqSeat = i
        end
    end

    if self._clientData._dismissData[seat] == nil then
        if msgRespondDismiss.agree then
            self._clientData._dismissData[seat] = GameSceneDefine.DismissRoomType.AGREE
        elseif not msgRespondDismiss.agree then
            self._clientData._dismissData[seat] = GameSceneDefine.DismissRoomType.DISAGREE
        end
    end

    local reqPlayer = Game.FrameworkFunction.getPlayerBySeat(reqSeat)
    if reqPlayer == nil then
        return
    end
    local msg = "玩家【"..reqPlayer:getNickName().."】申请解散房间，请等待其他玩家选择"
    self:getDismissLayer():setText(msg, 1)

    local index = 1
    for i=0, Game.FrameworkFunction.getMaxPlayer()-1 do
        -- 此处设置其他玩家是否同意解散
        local iPlayer = Game.FrameworkFunction.getPlayerBySeat(i)
        local tmpFlag = self._clientData._dismissData[i]
        if i == reqSeat and iPlayer ~= nil then
            self:getDismissLayer():setInfo(iPlayer:getNickName(),index,GameSceneDefine.DismissRoomType.AGREE)
        elseif iPlayer ~= nil then
            self:getDismissLayer():setInfo(iPlayer:getNickName(),index,tmpFlag)
        end
        index = index+1
    end

    if not msgRespondDismiss.agree then
        self:getDismissLayer():showDismissPanle(false)
        if msgRespondDismiss.seat ~= Game.FrameworkFunction.getSelfSeat() then
            local tipStr = "玩家【" .. tostring(player:getNickName()) .. "】不同意解散包厢!" 
            XH.TipTool.showToast(tipStr)
        end
    end
end

function GameScene:onMsgDismissFlag(XYID,buff,len)
    print('hcc>>GameScene:onMsgDismissFlag')
    local msgDismissFlag = GameLogicProtocol.msgDismissFlag:new()
    msgDismissFlag:bistream(buff, len)

    if msgDismissFlag.flag == 1 then
        if self._clientData._playCount == 0 then
            if self._clientData._roomHostSeat == Game.FrameworkFunction.getSelfSeat() then
                self:leaveGame()
            else
                XH.TipTool.showTip(
                  {
                      type = XH.TIP_LAYER_TYPE.OK,
                      funcOK = function()
                        self:leaveGame()
                      end,
                      funcClose = function()
                        self:leaveGame()
                    end
                  },
                  "房主已解散包厢！"
              )
            end
        else
            XH.TipTool.showTip({
              type = XH.TIP_LAYER_TYPE.OK,
                      funcOK = function()
                        self:leaveGame()
                      end,
                      funcClose = function()
                        self:leaveGame()
                    end          
          }, "房主已解散包厢")
        end
    elseif msgDismissFlag.flag == 2 then
        self:getDismissLayer():showDismissPanle(false)
    elseif msgDismissFlag.flag == 3 then
        XH.TipTool.showTip({
          type = XH.TIP_LAYER_TYPE.OK,
          funcOK = function()
            self:leaveGame()
          end,
          funcClose = function()
            self:leaveGame()
        end          
                }, "等待时间过长解散包厢")
        self:getDismissLayer():showDismissPanle(false)
    elseif msgDismissFlag.flag == 4 then
        self:getDismissLayer():showDismissPanle(false)
    end
end

function GameScene:omMsgDismissCountdown(XYID, buff, len)
    local msgDismissCountdown = GameBaseProtocol.msgDismissCountdown:new()
    msgDismissCountdown:bistream(buff, len)
    local sSeat = msgDismissCountdown.sSeat
    local reqSeat = msgDismissCountdown.reqSeat
    local nTime = msgDismissCountdown.reqSeat
    local iAgrees = msgDismissCountdown.iAgrees
end

function GameScene:onMsgPlayerDataEx(XYID,buff,len)
    local msgPlayerDataEx = GameBaseProtocol.msgPlayerDataEx:new()
    msgPlayerDataEx:bistream(buff, len)
    Game.PlayerData.updataPlayerDataEx(msgPlayerDataEx)
    local player = Game.PlayerData.getPlayerByPlayerID(msgPlayerDataEx.nBrandID,msgPlayerDataEx.nNumberID)
    if player == nil then
        return
    end

    if player:getState() == PlayerData.USER_STATE.US_SEEING then
        return
    end

    if player:getStateEx() == PlayerData.USER_STATEEX.psReady then
        Game.GameSound.playSoundReady()
    end
    
    
    local localSeat = Game.FrameworkFunction.seatToLocal(player:getSeat())
    local isReady = msgPlayerDataEx.nPlayState == PlayerData.USER_STATEEX.psReady

    print("tlg--GameScene:onMsgPlayerDataEx:"..tostring(isReady))
    dump(msgPlayerDataEx)
    dump(PlayerData.USER_STATEEX)
    -- 显示对应玩家准备中... 
    local headTipsUI = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_READY .. localSeat)
    if headTipsUI then
        headTipsUI:setVisible(true)
        if player == Game.FrameworkFunction.getSelfPlayer()then
            Game.UIFunction.setVisible(headTipsUI,GameSceneDefine.KW_UI_READY,isReady)
            if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM or self._clientData._playCount ~= 0 then 
            end
        else
            Game.UIFunction.setVisible(headTipsUI,GameSceneDefine.KW_UI_READY,isReady)
        end
    end

    if player == Game.FrameworkFunction.getSelfPlayer() then
        self:adapterButton(msgPlayerDataEx.nPlayState)
        if self._selfJustPlayState == 0 then
            self._selfJustPlayState = msgPlayerDataEx.nPlayState
        else
            if self._selfJustPlayState ~= msgPlayerDataEx.nPlayState then
                self._isChangeSelfState = true
            end
        end
    end
end

function GameScene:onMsgPlayerEnter(XYID,buff,len)
    local msgPlayerEnter = GameBaseProtocol.msgPlayerEnter:new()
    msgPlayerEnter:bistream(buff, len)
    local player = Game.PlayerData.getPlayerByPlayerID(msgPlayerEnter.nBrandID,msgPlayerEnter.nNumberID)
    if player == nil then
        return
    end

    if player:getState() == PlayerData.USER_STATE.US_SEEING then
        return
    end
    local selfPlayer = Game.FrameworkFunction.getSelfPlayer()

    self._isPlayerEnter = self._isPlayerEnter or {}
    if not self._isPlayerEnter[player:getSeat()] then
        if selfPlayer and selfPlayer:getIPName() ~= player:getIPName() then
            if string.find(player:getIPName(),".0.0") == nil and Game.PlayerData.isSameIP(player) then
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "当前游戏内存在同IP玩家，请注意！")
            end
        end
    end
    self._isPlayerEnter[player:getSeat()] = true
    if selfPlayer and player then
        if player == selfPlayer then
            -- 发送自身头像URL
            self:sendSelfHeadUrl()
            self:getUITipsLayer():showMiniTips(true)
            self:reqPlayerHeadEffectProps()
            if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
                self._clientData._playCount = 0
                self:sendGameStart()
            end
        end
    end
    if device.platform == "windows" then
        if selfPlayer then
        --self:sendGameStart()
        end
    end

    if player:getSeat() ~= Game.FrameworkFunction.getSelfSeat() then
        self._clientData._playerHeartTime[player:getSeat()] = socket.gettime()
        if self._isHaveHeadEffectProp then 
            self:sendPlayerHeadEffect()
        end
    end
    if player:getSeat() == Game.FrameworkFunction.getSelfSeat() then
        self:sendAMapMsg(self._strGPS or "")
        self:reqAMap()
    end 
    -------------------
   --TEST
    --[[
    self:getUIWinLost():showWinLostPanel(true)
    self:getUIWinLost():showSelfImg()
    local winlost = self:getUIWinLost()
    winlost:setEndTypeTitleRank(0)
    local winorder = {1,2,0,3}
    winlost:setWinOrder(winorder)

    for index = 1 , 3 do
        winlost:setScore(0,index,100)
        winlost:setScore(1,index,200)
        winlost:setScore(2,index,300)
        winlost:setScore(3,index,400)
    end
    ]]
end

function GameScene:onMsgPlayerLeave(XYID,buff,len)
    local msgPlayerLeave = GameBaseProtocol.msgPlayerLeave:new()
    msgPlayerLeave:bistream(buff, len)
    local player = Game.PlayerData.getPlayerByPlayerID(msgPlayerLeave.nBrandID,msgPlayerLeave.nNumberID)
    if player == nil then
        return
    end
    if player:getState() == PlayerData.USER_STATE.US_SEEING then
        return
    end

    local localSeat = Game.FrameworkFunction.seatToLocal(player:getSeat())
    local headUI = self:getUIPlayerHead(localSeat)

    if player ~= Game.FrameworkFunction.getSelfPlayer() then
        Game.PlayerData.removePlayersData(msgPlayerLeave.nBrandID,msgPlayerLeave.nNumberID)
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_PANEL_HEAD_..localSeat,false)
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_PANEL_READY .. localSeat,false)
    else
        for i = 1,Game.FrameworkFunction.getMaxPlayer() do
            if i ~= Game.FrameworkFunction.getSelfLocalSeat() then
                Game.UIFunction.setVisible(self:getUIPlayerHead(i),GameSceneDefine.KW_PANEL_HEAD_ .. i,false)
                Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_PANEL_READY .. i,false)
            end
            self:showPlayerHeadEffect(i, false)
            self:showWirebreakSign(i, false)
        end
        if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
            self:clearTable()
        end
        Game.PlayerData.clearPlayersData()  -- 清除所有玩家数据
        self._clientData._playerHeartTime = {}

    end

    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showHeadClock(false,0,i)
    end

    self._isPlayerEnter[player:getSeat()] = false
--    if self._clientData._localtion[player:getSeat()] ~= nil then
--        self._clientData._localtion[player:getSeat()] = {}
--    end

    if player:getSeat() ~= Game.FrameworkFunction.getSelfSeat() then
        self._clientData._playerHeartTime[player:getSeat()] = nil
        self:showPlayerHeadEffect(player:getSeat(), false)
        self:showWirebreakSign(player:getSeat(), false)
    end    
end

function GameScene:onMsgPlayerStart(XYID,buff,len)
    local msgPlayerStart = GameBaseProtocol.msgPlayerStart:new()
    msgPlayerStart:bistream(buff, len)

    local player = Game.PlayerData.getPlayerByPlayerID(msgPlayerStart.nBrandID,msgPlayerStart.nNumberID)

    if player == Game.FrameworkFunction.getSelfPlayer() then
        self._clientData:initEveryTime()
        self:clearTable()
        self:getUITipsLayer():showMiniTips(true)
    end
end

function GameScene:onMsgClock(XYID,buff,len)
    local msgClock = GameLogicProtocol.msgClock:new()
    msgClock:bistream(buff, len)

    local nTime = msgClock.sClock
    local localSeat = Game.FrameworkFunction.seatToLocal(msgClock.sSeat)
    
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showHeadClock(i == localSeat,nTime,i)
    end
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(msgClock.sSeat)
end

function GameScene:onMsgSpecfCards(XYID,buff,len)
    local msgAllCards = GameLogicProtocol.msgSendAllCard:new()
    msgAllCards:bistream(buff, len)
    if self._playback:isPlayback() then
        return
    end
    self:getUISpecfCardLayer():setAllCards(msgAllCards.ucCard,msgAllCards.ucCardCount)
    self:getUISpecfCardLayer():showSpecfLayer(true)
end

function GameScene:onMsgGameStart(XYID,buff,len)
    self:clearMatchUI()

    local date = os.date("%Y-%m-%d %H:%M:%S")
    print(date .. "----lcy onMsgStartGame")

    local msgStartGame = GameLogicProtocol.msgGameStart:new()
    msgStartGame:bistream(buff, len)
    
    if self._playback:isPlayback() then
        if self._playback:getGameStartCount() > 0 then
            return
        end 
        self._playback:addGameStartCount()
    end
    
    self:clearTable()
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showHeadClock(false,0,i)
    end
    Game.GameSound.playSoundStart()
    if not self._playback:isPlayback() then
        Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_BTN_SORT , true)
    end
    self:getUITipsLayer():showMiniTips(false)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_TEXT_SMALL_HINT,false)

    for index = 1 , Game.FrameworkFunction.getMaxPlayer() do
        self:showBombScore(index , 0)
        self:showPerPlayerScore(index , 0)
    end
    self:showTouJiaScore("0")
    if scoreAll then
        scoreAll:setString('桌面分数:0')
    end
    --回放，上下两家头像移动到旁边
    if self._playback:isPlayback() then
        self:moveHeadWithOpenHand(2,true)
        self:moveHeadWithOpenHand(4,true)
    end

    self:showShuffleAni(nil,false)
    self._clientData:clearShowBombCards()
    self._clientData:setScoreCards({})
end

function GameScene:onMsgGameStep(XYID,buff,len)
    local msgGameStep = GameLogicProtocol.msgGameStep:new()
    msgGameStep:bistream(buff, len)

    self._clientData._gameStep = msgGameStep.iGameStep
end

function GameScene:onMsgAvatarUrl(XYID, buff, len)
    local msgAvatarUrl = GameLogicProtocol.msgAvatarUrl:new()
    msgAvatarUrl:bistream(buff, len)

    local seat = msgAvatarUrl.seat
    local url = msgAvatarUrl.avatarUrl

    local localSeat = Game.FrameworkFunction.seatToLocal(msgAvatarUrl.seat)
    local player = Game.PlayerData.getPlayerBySeat(msgAvatarUrl.seat)
    if player then
        -- 头像url地址更新
        Game.PlayerData.updataPlayerAvatarUrl(player, url)
        -- 头像
        if url ~= "" then
            local cellWXImageDownload = CellWXImageDownload:new()
            cellWXImageDownload:addCellCallBack(self,function(self,cell, type, data)
                if type == 1 then
                    Game.UIFunction.loadTexture(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_UI_HEAD_PIC,data,ccui.TextureResType.localType)
                    local picAreaSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC_AREA)
                    local picSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC)
                    Game.UIFunction.setScaleX(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC, picAreaSize.width/picSize.width)
                    Game.UIFunction.setScaleY(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC, picAreaSize.height/picSize.height)

                    Game.UIFunction.loadTexture(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_UI_INFO_PIC,data,ccui.TextureResType.localType)
                    local bigPicAreaSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC_AREA)
                    local bigPicSize = Game.UIFunction.getContentSize(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC)
                    Game.UIFunction.setScaleX(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC, bigPicAreaSize.width/bigPicSize.width)
                    Game.UIFunction.setScaleY(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_INFO_PIC, bigPicAreaSize.height/bigPicSize.height)

                end
            end)
            cellWXImageDownload:start(url,60)
        end
    end 
end

function GameScene:onMsgJokerData(XYID,buff,len)
    local msgJokerData = GameLogicProtocol.msgJokerData:new()
    msgJokerData:bistream(buff, len)
    local jokerDara = {}
    for i = 1,msgJokerData.ucCount do
        local gameCard = GameCard:new()
        gameCard:setID(msgJokerData.ucCards[i])
        table.insert(jokerDara,gameCard)
    end
    self._clientData._jokerData = jokerDara
    dump(self._clientData._jokerData,'hcc>>jokerData')
end

function GameScene:onMsgAllOutRecord(XYID,buff,len)
    local msgAllOutRecord = GameLogicProtocol.msgAllOutRecord:new()
    msgAllOutRecord:bistream(buff, len)

    for i = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
        for j = 1,msgAllOutRecord.sOutRecordCount[i] do
            local cardGroup = {}
            cardGroup.Cards = {}
            cardGroup.tType = msgAllOutRecord.sOutRecorfCardsType[i][j]
            for k = 1,msgAllOutRecord.ucOutRecordCardsCount[i][j] do
                local gameCard = GameCard:new()
                gameCard:setID(msgAllOutRecord.ucOutRecordCards[i][j][k])
                table.insert(cardGroup.Cards,1,gameCard)
            end

            local cardIds = CardAlgorithm:gameCards2IDs(cardGroup.Cards)
            local cardType,cardEnum = CardAlgorithm:getCardTypesByIDsandType(cardIds,cardGroup.tType,self._clientData._jokerData,self._clientData._lianZhaBuDai)       
            local gameCardGroup = CardAlgorithm:getGameGroupByCardType(cardType,cardEnum)

            self._clientData:addOutCardRecord(i,gameCardGroup)
        end
    end

end

function GameScene:onMsgTrust(XYID,buff,len)
    local date = os.date("%Y-%m-%d %H:%M:%S")
    print(date .. "----lcy onMsgTrust")

    local msgTrust = GameLogicProtocol.msgTrust:new()
    msgTrust:bistream(buff, len)
    --托管，显示托管界面

    if msgTrust.sTrustSeat == Game.FrameworkFunction.getSelfSeat() then
        if msgTrust.bTrust then
            self:showTrustPanel(true)
        else
            self:showTrustPanel(false)
        end
    end
end

function GameScene:onMsgWinLost(XYID,buff,len)
    local msgWinLost = GameLogicProtocol.msgWinLost:new()
    msgWinLost:bistream(buff, len)
    
    -- 比赛中开始按钮处理
    self:hideMatchStartBtn()
    
    if self._clientData._playCount == self._clientData._maxplayCount then
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,false)
        self:getUIWinLost():setContinueBtnState(false)
    else 
        self:getUIWinLost():setContinueBtnState(true)
    end
    
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showHeadClock(false,0,i)
    end
    
    if self._roomMode == Game.FrameworkFunction.ROOM_MODE.BOXROOM and not self._playback:isPlayback()  then
        local history =  {}
        for i = 0, Game.FrameworkFunction.getMaxPlayer() - 1 do
            local playerdata = Game.PlayerData.getPlayerBySeat(i)
            if playerdata then
                history[#history + 1] = {nickName = playerdata:getNickName(), score = msgWinLost.iScore[i], numid = playerdata:getNumberID(), areaid = playerdata:getBrandID()}
            end
        end
        local boxroominfo =  XH.bf.BoxRoomCacheMgr:getInstance():getBoxRoomInfo()
        local boxroomnumber =  XH.bf.BoxRoomCacheMgr:getInstance():genBoxCode(boxroominfo.roomID, boxroominfo.tableID, 0, boxroominfo.password)
        XH.bf.BoxRoomCacheMgr:getInstance():addBoxRoomHistoryInfo(boxroominfo.gameID, boxroomnumber, history,self._playback:getRecordFilePath())
    end
    
    for seat = 0,Game.FrameworkFunction.getMaxPlayer()-1 do
        local player = Game.PlayerData.getPlayerBySeat(seat)
        if player then
            self:getUIWinLost():setPlayerName(seat,player:getNickName())
        end
    end 
    
    self:getUIWinLost():setEndType(msgWinLost.sEndType)
    self:getUIWinLost():setWinMut(msgWinLost.sWinMut)
    self:getUIWinLost():setWinOrder(msgWinLost.sWinOrder)
    self:getUIWinLost():setPlayerScore(msgWinLost.iScore)
    self:getUIWinLost():setEscapeSeat(msgWinLost.sEscapeSeat)
    self:getUIWinLost():setChaoDiSeat(msgWinLost.sChaoDiSeat)
    local ftime = 0
    if self:getUIWinLost():getINoOutZhaDan() then
    	ftime = 3
    end
    local delayTime= cc.DelayTime:create(ftime)
    local sequenceAction = cc.Sequence:create({delayTime, cc.CallFunc:create(
        function ()
            self:showNoOutZanDanGongXian({},false) 
            self:getUIWinLost():showWinLostPanel(true)
        end
    )})
    self:getRootNode():runAction(sequenceAction)

end

function GameScene:onMsgNoOutGong(XYID,buff,len)
    local msgNoOutGong = GameLogicProtocol.msgNoOutGong:new()
    msgNoOutGong:bistream(buff, len)
    self:getUIWinLost():setCaiXiangScore(msgNoOutGong.iCaiXiang, msgNoOutGong.sCaiXiang)
    self:showNoOutZanDanGongXian(msgNoOutGong.sNoOutGong,true) 
end

function GameScene:onMsgHandCard(XYID,buff,len)
    local msgHandCard = GameLogicProtocol.msgHandCard:new()
    msgHandCard:bistream(buff, len)

    self._clientData._handCard[msgHandCard.ucSeat] = {}
    for i = 1,msgHandCard.ucCount do
        local gameCard = GameCard:new()
        local cardId = msgHandCard.ucCards[i]
        if cardId == 0 then
            cardId = MyCard.CardID.CID_BACK
            msgHandCard.ucCards[i] = MyCard.CardID.CID_BACK
        end
        gameCard:setID(cardId)
        table.insert(self._clientData._handCard[msgHandCard.ucSeat],gameCard)
    end

    self._clientData._handCard[msgHandCard.ucSeat] = CardAlgorithm:sortCard(self._clientData._handCard[msgHandCard.ucSeat],self._clientData._sortCardIndex)

    local tmpHandCard = {}
    tmpHandCard = CardAlgorithm:gameCards2IDs(self._clientData._handCard[msgHandCard.ucSeat])

    local localSeat = Game.FrameworkFunction.seatToLocal(msgHandCard.ucSeat)
    if msgHandCard.bIsShow then
        if msgHandCard.bPlayAni then
            self:getUICardLayer():setFirstHandCards(localSeat,tmpHandCard,GameSceneDefine.CardAniType.FirstDealHandCard)
        else
            self:getUICardLayer():setNorMalHandCards(localSeat,tmpHandCard)
        end
    else
        self:getUICardLayer():clearHandCards(localSeat)
    end

    -- 对其他玩家做特殊处理，若手牌全为牌背则不显示手牌只显示张数，且头像移至特定位置。
    if localSeat ~= UICardsLayerBase.CardLocalSeat.Bottom then
        local isOpenHand = false
        if msgHandCard.bIsShow then
            if self:isBackHandCards(tmpHandCard) then
                isOpenHand = false
            else
                isOpenHand = true
            end
        end

        local headUI = self:getUIPlayerHead(localSeat)
        Game.UIFunction.setVisible(headUI, GameSceneDefine.KW_PANEL_CARD_LEFT, not isOpenHand)
        self:moveHeadWithOpenHand(localSeat,isOpenHand)
        if not isOpenHand then
            self:getUICardLayer():clearHandCards(localSeat)
        end
        self:showCardCount(localSeat,#self._clientData._handCard[msgHandCard.ucSeat],not isOpenHand)
    else
        self:moveHeadWithOpenHand(localSeat,msgHandCard.bIsShow)
        self:showCardCount(localSeat,#self._clientData._handCard[msgHandCard.ucSeat],not msgHandCard.bIsShow)
    end

    if self._clientData:getIsFFZ() == 1 then
        self:showCardLeftPanel(false)
    end
end

function GameScene:onMsgShowOutCards(XYID,buff,len)
    local msgShowOutCards = GameLogicProtocol.msgShowOutCards:new()
    msgShowOutCards:bistream(buff, len)
    
    if self._clientData._preconditionOutCards then
        return
    end
    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_PANEL_BTNS_GAME_NORMAL , false)
    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_BTN_CHAO_DI , false)

    local localSeat = Game.FrameworkFunction.seatToLocal(msgShowOutCards.sSeat)
    if msgShowOutCards.ucCount ~= 0 then
        local headPos = {}
        local boomStartUI = Game.UIFunction.seekWidgetByName(self:getUIPlayerHead(localSeat), GameSceneDefine.KW_UI_HEAD_PIC)
        if boomStartUI then
            headPos = boomStartUI:convertToWorldSpace(cc.p(0,0))
        end
        Game.GameSound.playSoundOut()
        local gameCards = CardAlgorithm:SZ2CardsGroup(msgShowOutCards.ucCards,msgShowOutCards.ucCount)
        local cardIds = CardAlgorithm:gameCards2IDs(gameCards)
        local cardType,cardEnum = CardAlgorithm:getCardTypesByIDsandType(cardIds,msgShowOutCards.sCardType,self._clientData._jokerData,self._clientData._lianZhaBuDai)
        local gameCardGroup = CardAlgorithm:getGameGroupByCardType(cardType,cardEnum)
        local player = Game.FrameworkFunction.getPlayerBySeat(msgShowOutCards.sSeat)
        if player ~= nil then
            -- TODO 压死音效增加
            Game.GameSound.playSoundPlayCardType(player:getSex(),gameCardGroup)
        end
        --显示附带动画
        self:showCardTypeAni(msgShowOutCards.sSeat,headPos,msgShowOutCards.sCardType)
        --显示出的牌
        local deleteCards = clone(gameCards)
        local isDelete = false
        local afterDeleteCards = {}
        if self._clientData._handCard[msgShowOutCards.sSeat] ~= nil and #self._clientData._handCard[msgShowOutCards.sSeat] > 0 then
            for i = 1,#self._clientData._handCard[msgShowOutCards.sSeat] do
                if self._clientData._handCard[msgShowOutCards.sSeat][i]:getID() == MyCard.CardID.CID_BACK then
                    for j = 1,msgShowOutCards.ucCount do
                        deleteCards[j]:setID(MyCard.CardID.CID_BACK)
                    end
                    break
                end
            end
            isDelete,afterDeleteCards = CardAlgorithm:deleteCards(self._clientData._handCard[msgShowOutCards.sSeat],deleteCards)
        end
        if self:getUICardLayer():getAllCardIDs(localSeat) ~= nil and #self:getUICardLayer():getAllCardIDs(localSeat) > 0 then
            if localSeat == Game.FrameworkFunction.getSelfLocalSeat() then
                local nowHandCardsID = self:getUICardLayer():getAllCardIDs(localSeat)
                local selfDragOutCardIndexs = self:getUICardLayer():getDragOutCardIndexes(Game.FrameworkFunction.getSelfLocalSeat())
                local selfCheckedCardIndexs = self:getUICardLayer():getCheckedCardIDIndexes(Game.FrameworkFunction.getSelfLocalSeat())
                local selfOutCardIndexes = {}
                if #selfDragOutCardIndexs > #selfCheckedCardIndexs then
                    selfOutCardIndexes = selfDragOutCardIndexs
                else
                    selfOutCardIndexes = selfCheckedCardIndexs
                end
                local deleteCardIndexes = CardAlgorithm:getPlayerCardsIndexByGroup(deleteCards,nowHandCardsID,selfOutCardIndexes)
                table.sort(deleteCardIndexes)
                local deleteCardIDs = {}
                for i = 1,#deleteCardIndexes do
                    table.insert(deleteCardIDs,nowHandCardsID[deleteCardIndexes[i]])
                end
                self:getUICardLayer():deleteHandCards(localSeat,nowHandCardsID,deleteCardIDs,deleteCardIndexes)
            else
                local afterDeleteCardsID = CardAlgorithm:gameCards2IDs(afterDeleteCards)
                self:getUICardLayer():setNorMalHandCards(localSeat,afterDeleteCardsID)
            end
        end

        local outCards = {}
        for i = #gameCards,1,-1 do
            table.insert(outCards,gameCards[i])
        end
        local outCardIDs = CardAlgorithm:gameCards2IDs(outCards)
        self:getUICardLayer():setOutCards(localSeat,outCardIDs)
    else        
        local player = Game.FrameworkFunction.getPlayerBySeat(msgShowOutCards.sSeat)
        if player then
            Game.GameSound.playSoundPass(player:getSex())
            self:showPassAni(localSeat)
        end
        return
    end
end

function GameScene:onMsgOutCards(XYID,buff,len)
    local msgOutCards = GameLogicProtocol.msgOutCards:new()
    msgOutCards:bistream(buff, len)

    if msgOutCards.sSeat == Game.FrameworkFunction.getSelfSeat() then
        self._clientData._preconditionOutCards = false
    end
    
    self._clientData._preOutSeat = msgOutCards.sSeat
    
    if msgOutCards.ucCount ~= 0 then
        local gameCards = CardAlgorithm:SZ2CardsGroup(msgOutCards.ucCards,msgOutCards.ucCount)
        local deleteCards = clone(gameCards)
        local isDelete = false
        local afterDeleteCards = {}
        if self._clientData._handCard[msgOutCards.sSeat] ~= nil and #self._clientData._handCard[msgOutCards.sSeat] > 0 then
            for i = 1,#self._clientData._handCard[msgOutCards.sSeat] do
                if self._clientData._handCard[msgOutCards.sSeat][i]:getID() == MyCard.CardID.CID_BACK then
                    for j = 1,msgOutCards.ucCount do
                        deleteCards[j]:setID(MyCard.CardID.CID_BACK)
                    end
                    break
                end
            end
            isDelete,afterDeleteCards = CardAlgorithm:deleteCards(self._clientData._handCard[msgOutCards.sSeat],deleteCards)
            self._clientData._handCard[msgOutCards.sSeat] = afterDeleteCards
        end
        local cardIds = CardAlgorithm:gameCards2IDs(gameCards)
        local cardType,cardEnum = CardAlgorithm:getCardTypesByIDsandType(cardIds,msgOutCards.sCardType,self._clientData._jokerData,self._clientData._lianZhaBuDai)
        local gameCardGroup = CardAlgorithm:getGameGroupByCardType(cardType,cardEnum)
        self._clientData:addOutCardRecord(msgOutCards.sSeat,gameCardGroup)
    end

    local localSeat = Game.FrameworkFunction.seatToLocal(msgOutCards.sSeat)
    local remainCardCount = #self._clientData._handCard[msgOutCards.sSeat]
    self:showCardCount(localSeat,remainCardCount,true)
    if self:getUICardLayer():getAllCardIDs(localSeat) ~= nil and #self:getUICardLayer():getAllCardIDs(localSeat) > 0 then
        local handUICardsID = self:getUICardLayer():getAllCardIDs(localSeat)
        local handUICards = CardAlgorithm:SZ2CardsGroup(handUICardsID,#handUICardsID)
        if not CardAlgorithm:cardsIsSame(handUICards, self._clientData._handCard[msgOutCards.sSeat]) then
            print("牌型不符合outcard")
            local afterDeleteCardsID = CardAlgorithm:gameCards2IDs(self._clientData._handCard[msgOutCards.sSeat])
            self:getUICardLayer():setNorMalHandCards(localSeat,afterDeleteCardsID)
        end
    end
end

function GameScene:onMsgLianZhaBuDai(XYID,buff,len)
    local msgLianZhaBuDai = GameLogicProtocol.msgLianZhaBuDai:new()
    msgLianZhaBuDai:bistream(buff, len)
    self._clientData._lianZhaBuDai = msgLianZhaBuDai.bLianZhaBuDai
end

function GameScene:onMsgGameType(XYID,buff,len)
    local msgGameType = GameLogicProtocol.msgGameType:new()
    msgGameType:bistream(buff, len)

    if msgGameType.ucGameType == GameKeyWord.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_QIANBIAN then
        CardAlgorithm.m_IsConformCardsType = CardAlgorithm.IsConformCardsTypeQianBian
        MyCardsType.m_MoreThanBoomXunWithNoXunFun = MyCardsType.MoreThanBoomXunWithNoXunQianBian
        MyCardsType.m_IsConformCardsType = MyCardsType.IsConformCardsTypeQianBian
        HintCard.m_IsConformCardsType = HintCard.IsConformCardsTypeQianBian
    elseif msgGameType.ucGameType == GameKeyWord.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_BAIBIAN then
        CardAlgorithm.m_IsConformCardsType = CardAlgorithm.IsConformCardsTypeBaiBian
        MyCardsType.m_MoreThanBoomXunWithNoXunFun = MyCardsType.MoreThanBoomXunWithNoXunQianBian
        MyCardsType.m_IsConformCardsType = MyCardsType.IsConformCardsTypeBaiBian
        HintCard.m_IsConformCardsType = HintCard.IsConformCardsTypeBaiBian
    elseif msgGameType.ucGameType == GameKeyWord.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_ERREN then
        MyCardsType.m_MoreThanBoomXunWithNoXunFun = MyCardsType.MoreThanBoomXunWithNoXunErRen
        MyCardsType.m_IsConformCardsType = MyCardsType.IsConformCardsTypeErRen
        HintCard.m_IsConformCardsType = HintCard.IsConformCardsTypeErRen
    elseif msgGameType.ucGameType == GameKeyWord.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_JINGDIAN then
        CardAlgorithm.m_IsConformCardsType = CardAlgorithm.IsConformCardsTypeBaiBian
        MyCardsType.m_IsConformCardsType = MyCardsType.IsConformCardsTypeClassical
        HintCard.m_IsConformCardsType = HintCard.IsConformCardsTypeClassical
    end

    self._clientData._gameType = msgGameType.ucGameType
    
    local logo = Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_PANEL_ROOM_RULE)
    if logo then 
        --Game.UIFunction.loadTexture(logo, GameSceneDefine.KW_UI_ROOM_RULE, string.format(GameSceneDefine.KW_UI_WIND_PNG,msgGameType.ucGameType),ccui.TextureResType.plistType)
        --logo:setVisible(true)
    end
end

function GameScene:onMsgHaveMingPai(XYID,buff,len)
    local msgHaveMingPai = GameLogicProtocol.msgHaveMingPai:new()
    msgHaveMingPai:bistream(buff, len)

    self._clientData._haveMingPai = msgHaveMingPai.bMingPai
end

function GameScene:onMsgGameMut(XYID,buff,len)
    local msgGameMut = GameLogicProtocol.msgGameMut:new()
    msgGameMut:bistream(buff, len)
    
    
    local textWinTime = Game.UIFunction.getText(self._rootNode,GameSceneDefine.KW_TEXT_WIN_MUT)
    local numWinTime = Game.StringFunction.getNumberSuffixByString(textWinTime)
    
    if numWinTime < msgGameMut.iWinTime then 
        local winMutNode = Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_TEXT_WIN_MUT)
        if winMutNode then 
            winMutNode:stopAllActions()
            winMutNode:setString("x" .. msgGameMut.iWinTime)
            local winMutAction1 = cc.Sequence:create( cc.ScaleTo:create(GameKeyWord.NUM_PER_FRAME_TIME * 13,1.5),cc.ScaleTo:create(GameKeyWord.NUM_PER_FRAME_TIME * 13,1))
            winMutNode:runAction(winMutAction1)
        end
        local tmpWinMueNode = Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_TEXT_WIN_MUT_TMP)
        if tmpWinMueNode then 
            tmpWinMueNode:stopAllActions()
            tmpWinMueNode:setString("x" .. msgGameMut.iWinTime)
            tmpWinMueNode:setVisible(true)
            tmpWinMueNode:setOpacity(255)
            tmpWinMueNode:setScale(1)
            local winMutAction2 = cc.Spawn:create(cc.ScaleTo:create(2 * GameKeyWord.NUM_PER_FRAME_TIME * 13,4),cc.FadeOut:create(2 * GameKeyWord.NUM_PER_FRAME_TIME * 13))
            tmpWinMueNode:runAction(winMutAction2)
        end
    end
    Game.UIFunction.setText(self._rootNode,GameSceneDefine.KW_TEXT_WIN_MUT,"x" .. msgGameMut.iWinTime)
    Game.UIFunction.setText(self._rootNode,GameSceneDefine.KW_TEXT_LOST_MUT,"x" .. msgGameMut.iLostTime)
end 

function GameScene:onMsgBase(XYID,buff,len)
    local msgBase = GameLogicProtocol.msgBase:new()
    msgBase:bistream(buff, len) 

    self._clientData._baseScore = msgBase.iBase
    Game.UIFunction.setText(self._rootNode,GameSceneDefine.KW_TEXT_BASE_SCORE,"底分:" .. self._clientData._baseScore)
end

function GameScene:onMsgGameRule(XYID,buff,len)
    if KW_CONFIG_IS_IOS_CHECK then
        return
    end
    local msgGameRule = GameLogicProtocol.msgGameRule:new()
    msgGameRule:bistream(buff, len)
    local strRule = msgGameRule.strGameRule
    print('hcc>>strRule: ' .. tostring(strRule))
    local textRule = ""
    local cPlayType = ToolUtils.getLuaStrValue(strRule, "playType")
    local cpayType = ToolUtils.getLuaStrValue(strRule, "PayType")
    local autoReady = ToolUtils.getLuaStrValue(strRule, "autoReady")
    local forceGPS = ToolUtils.getLuaStrValue(strRule, "forceGPS")
    local baseScore = ToolUtils.getLuaStrValue(strRule,"baseScore")
    local tableRule = {}
    local tmpGameRule = ''
    local winLostRuleStr = ''
    local ruleToShow = ''

    if cPlayType == "0" then
        table.insert(tableRule, "不借风")
        tmpGameRule = tmpGameRule .. "不借风,"
        ruleToShow = ruleToShow .. "不借风/"
    elseif cPlayType == "1" then
        table.insert(tableRule, "借风")
        tmpGameRule = tmpGameRule .. "借风,"
        ruleToShow = ruleToShow .. "借风/"
    end
    
    if not self._bTeaHouse then
        if cpayType == "0" then
            tableRule[#tableRule + 1] = "房主支付"
            tmpGameRule = tmpGameRule .. "房主支付,"
            ruleToShow = ruleToShow .. "房主支付/"
        elseif cpayType == "1" then
            table.insert(tableRule, "平摊支付")
            tmpGameRule = tmpGameRule .. "平摊支付,"
            ruleToShow = ruleToShow .. "平摊支付/"
        end
    end

    if baseScore and baseScore ~= '' then
        local tmpStr = "底分：" .. tostring(baseScore)
        table.insert(tableRule, tmpStr)
        tmpGameRule = tmpGameRule .. tmpStr .. ','
        winLostRuleStr = winLostRuleStr .. tmpStr

        local s = forceGPS == "1" and '/' or ''
        ruleToShow = ruleToShow .. "底分" .. tostring(baseScore) .. s
    end

    if forceGPS == "1" then
        tableRule[#tableRule + 1] = "强制定位"
        tmpGameRule = tmpGameRule .. "强制定位,"
        ruleToShow = ruleToShow .. "强制定位"
    end

    self._clientData:setAutoReady(tonumber(autoReady))
    self._clientData:setBaseScore(tonumber(baseScore))

    self._clientData:setRuleStr(winLostRuleStr)

    self._strGameRule = self._strGameRule .. tmpGameRule

    local isSendGameStart = true
    if autoReady == "1" or autoReady == nil then
        self:sendGameStart()
        self:sendRoomNumber(self._boxRoomID)
    end
    self:showStartButton()
    self:showRule(tableRule)

    if self._clientData:getIsFFZ() == 1 then
        self:showCardLeftPanel(false)
    end

    --显示是否借风
    Game.UIFunction.setText(self:getRootNode(),GameSceneDefine.KW_TEXT_INNING_TITLE,tostring(cPlayType == '1' and "借风" or "不借风"))
    Game.UIFunction.setText(self:getRootNode(),GameSceneDefine.KW_TEXT_ROOM_RULE,ruleToShow)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_TEXT_ROOM_RULE,true)
end

function GameScene:onMsgGameGong(XYID,buff,len)
end

function GameScene:onMsgSwapSeat(XYID,buff,len)
    local msgSwapSeat = GameLogicProtocol.msgSwapSeat:new()
    msgSwapSeat:bistream(buff, len)
    
    --获取换位后亮牌位置
    local function getOpenCardLocalSeat(firstSeat,secondSeat)
        local afterLocalSeat = {1,2,3,4}
        local localFirst = Game.FrameworkFunction.seatToLocal(firstSeat)
        local localSecond = Game.FrameworkFunction.seatToLocal(secondSeat)
        if localFirst == Game.FrameworkFunction.getSelfLocalSeat() or localSecond == Game.FrameworkFunction.getSelfLocalSeat() then
            local notSelfLocal = localFirst
            if localFirst == Game.FrameworkFunction.getSelfLocalSeat() then
                notSelfLocal = localSecond
            end
            afterLocalSeat[4] = (notSelfLocal + 2) % Game.FrameworkFunction.getMaxPlayer()
            afterLocalSeat[(notSelfLocal + 2) % Game.FrameworkFunction.getMaxPlayer()] = notSelfLocal
            afterLocalSeat[notSelfLocal] = 4
        else
            afterLocalSeat[localFirst] = localSecond
            afterLocalSeat[localSecond] = localFirst
        end
        
        local bigCardLocalSeat = 0
        local smallCardLocalSeat = 0
        for k,v in ipairs(afterLocalSeat) do
            if v == localFirst then
                smallCardLocalSeat = k
            end
        end
        local smallSeat = Game.FrameworkFunction.localToSeat(smallCardLocalSeat)
        bigCardLocalSeat = Game.FrameworkFunction.seatToLocal((smallSeat + 2 ) % Game.FrameworkFunction.getMaxPlayer())
        return bigCardLocalSeat,smallCardLocalSeat
    end
    
    --获取换位顺序
    local function getSwapSeatOrder(firstSeat,secondSeat)
        local swapSeatOrder = {}
        if firstSeat % 2 == secondSeat % 2 then
            return swapSeatOrder
        end

        local needSecondSwap = false
        if firstSeat == Game.FrameworkFunction.getSelfSeat() or secondSeat == Game.FrameworkFunction.getSelfSeat() then
            needSecondSwap = true
        end

        if needSecondSwap then
            local oneOrder = {}
            oneOrder[1] = Game.FrameworkFunction.seatToLocal((firstSeat + 2) % Game.FrameworkFunction.getChairs())
            oneOrder[2] = Game.FrameworkFunction.seatToLocal((secondSeat + 2) % Game.FrameworkFunction.getChairs())
            table.insert(swapSeatOrder,clone(oneOrder))
            
            local list = {1,2,3,4}
            local first = oneOrder[1]
            local second = oneOrder[2]
            list[first],list[second] = second,first

            oneOrder = {}
            oneOrder[1] = list[1]
            oneOrder[2] = list[3]
            table.insert(swapSeatOrder,clone(oneOrder))
        else
            local oneOrder = {}
            oneOrder[1] = Game.FrameworkFunction.seatToLocal(firstSeat)
            oneOrder[2] = Game.FrameworkFunction.seatToLocal(secondSeat)
            table.insert(swapSeatOrder,clone(oneOrder))
        end
        return swapSeatOrder
    end
    
    --克隆头像背景面板
    local function cloneAllHeadBG(cloneNodeTable)
        for i = 0,Game.FrameworkFunction.getChairs() - 1 do
            local localSeat = Game.FrameworkFunction.seatToLocal(i)
            local headPanel = self:getUIPlayerHead(localSeat)
            if headPanel then
                if localSeat ~= Game.FrameworkFunction.getSelfLocalSeat() then
                    local headBG = Game.UIFunction.seekWidgetByName(headPanel,GameSceneDefine.KW_UI_PLAYER_HEAD_BG)
                    if headBG then
                        cloneNodeTable[localSeat] = headBG:clone()
                        headBG:getParent():addChild(cloneNodeTable[localSeat])
                    end
                end
            end
        end
        return cloneNodeTable
    end

    --控制 除自己外的 头像背景面板的显示
    local function showHeadBG(bShow)
        for i = 0,Game.FrameworkFunction.getChairs() - 1 do
            local localSeat = Game.FrameworkFunction.seatToLocal(i)
            local headPanel = self:getUIPlayerHead(localSeat)
            if headPanel then
                if localSeat ~= Game.FrameworkFunction.getSelfLocalSeat() then
                    Game.UIFunction.setVisible(headPanel,GameSceneDefine.KW_UI_PLAYER_HEAD_BG,bShow)
                end
            end
        end
    end
    
    --获取两座位的相对坐标
    local function getRelativeEndPos(sourceNode,targetNode)
        local targetPosWorld = targetNode:getParent():convertToWorldSpace(cc.p(0,0))
        local targetPosToSourceNode = sourceNode:getParent():convertToNodeSpace(targetPosWorld)
        local endPos = {}
        endPos.x = targetPosToSourceNode.x + targetNode:getPositionX()
        endPos.y = targetPosToSourceNode.y + targetNode:getPositionY()
        return endPos
    end
    
    
    local bigOpenCardLocalSeat = 0
    local smallOpenCardLocalSeat = 0
    local bigOpenCardLocalSeat,smallOpenCardLocalSeat = getOpenCardLocalSeat(msgSwapSeat.ucotherseat,msgSwapSeat.ucnowseat)
    --座位交换结束
    local function endMoveSeat(cloneNodeTable)
        for i = 0,Game.FrameworkFunction.getChairs() - 1 do
            local localSeat = Game.FrameworkFunction.seatToLocal(i)
            if cloneNodeTable[localSeat] then
                cloneNodeTable[localSeat]:removeFromParent(false)
            end
        end
        local callBack = function()
            self:sendWaitSwapSeat()
            self:reqHeadImg() --防止换位后头像不准确
            --换位后校验牌是否匹配(用于回放)
            for i = 1,Game.FrameworkFunction.getMaxPlayer() do
                local seat = Game.FrameworkFunction.localToSeat(i)
                local handUICardsID = self:getUICardLayer():getAllCardIDs(i)
                if handUICardsID ~= nil and  #handUICardsID > 0 then
                    local handUICards = CardAlgorithm:SZ2CardsGroup(handUICardsID,#handUICardsID)
                    local dataCards = self._clientData._handCard[seat]
                    local tmpHandCard = CardAlgorithm:gameCards2IDs(dataCards)
                    if not CardAlgorithm:cardsIsSame(handUICards, dataCards) then
                        print("牌型不符合")
                        self:getUICardLayer():setNorMalHandCards(i,tmpHandCard)
                    end
                end
            end
        end
        local openCardID = {}
        table.insert(openCardID,self._clientData._openCardID)
        self:getUICardLayer():showOpenCardAfterSwapSeat(bigOpenCardLocalSeat,smallOpenCardLocalSeat,openCardID,callBack)
        showHeadBG(true)
        --重发位置  
        self:changePlayerAmapMsg()

        for i = 1, 4 do
            local headUI = self:getUIPlayerHead(i)
            local hf = Game.UIFunction.seekWidgetByName(headUI,"KW_UI_PLAYER_HEAD")
            local frameNode = Game.UIFunction.seekWidgetByName(hf, "KW_HEAD_FRAME")
            if frameNode then
                frameNode:removeFromParent()
            end
            local player = Game.FrameworkFunction.getPlayerBySeat(i - 1)
            if player then
                local localSeat = Game.FrameworkFunction.seatToLocal(i - 1)
                self._numidList[#self._numidList + 1] = player:getNumberID()
                self._numidToSeat[player:getNumberID()] = localSeat
            end    
        end
        for k,v in pairs(self._numidToSeat) do
            self:showHeadFrameInfo(v, self._headFrameUrl[k])
        end
    end
    
    --左右两座位位移(第二次座位交换)
    local function secondMoveSeatAni(cloneNodeTable,swapSeatOrder)
        if not next(swapSeatOrder) then
            endMoveSeat(cloneNodeTable)
        else
            local firstNodeNum = swapSeatOrder[1][1]
            local firstNode = cloneNodeTable[firstNodeNum]
            local secondNodeNum = swapSeatOrder[1][2]
            local secondNode = cloneNodeTable[secondNodeNum]

            local moveDis = -200
            local firstEndPos = getRelativeEndPos(firstNode,secondNode)
            local firstMoveOut = cc.MoveBy:create(0.5,cc.p(moveDis,0))
            local firstChangePosition = cc.CallFunc:create(function()
                firstNode:setPosition(firstEndPos.x - moveDis,firstEndPos.y)
            end)
            local firstMoveIn = cc.MoveBy:create(0.5,cc.p(moveDis,0))
            local firstMoveAction = cc.Sequence:create(firstMoveOut,firstChangePosition,firstMoveIn)
            firstNode:runAction(firstMoveAction)

            local secondEndPos = getRelativeEndPos(secondNode,firstNode)
            local secondMoveOut = cc.MoveBy:create(0.5,cc.p(-moveDis,0))
            local secondChangePosition = cc.CallFunc:create(function()
                secondNode:setPosition(secondEndPos.x + moveDis,secondEndPos.y)
            end)
            local secondMoveIn = cc.MoveBy:create(0.5,cc.p(-moveDis,0))
            local secondMoveAction = cc.Sequence:create(secondMoveOut,secondChangePosition,secondMoveIn)
            if endMoveSeat then
                local endFunction = cc.CallFunc:create(function()
                endMoveSeat(cloneNodeTable)
                end)
                secondMoveAction = cc.Sequence:create(secondMoveOut,secondChangePosition,secondMoveIn,endFunction)
            end
            secondNode:runAction(secondMoveAction)
        end
    end
    
    --上左 或 上右 座位位移(第一次座位交换)
    local function firstMoveSeatAni(cloneNodeTable,swapSeatOrder)
        if next(swapSeatOrder) then
            local firstNodeNum = swapSeatOrder[1][1]
            local firstNode = cloneNodeTable[firstNodeNum]
            local secondNodeNum = swapSeatOrder[1][2]
            local secondNode = cloneNodeTable[secondNodeNum]
            
            local firstEndPos = getRelativeEndPos(firstNode,secondNode)
            local firstMove = cc.MoveTo:create(0.5,firstEndPos)
            local firstMoveAction = firstMove
            firstNode:runAction(firstMoveAction)
            
            local secondEndPos = getRelativeEndPos(secondNode,firstNode)
            local secondMove = cc.MoveTo:create(0.5,secondEndPos)
            local secondMoveAction = secondMove
            if secondMoveSeatAni then
                local functionCall = cc.CallFunc:create(function()
                    table.remove(swapSeatOrder,1)
                    secondMoveSeatAni(cloneNodeTable,swapSeatOrder)
                end)
                secondMoveAction = cc.Sequence:create(secondMove,functionCall)
            end
            secondNode:runAction(secondMoveAction)
        end
    end
    
    local swapSeatOrder = getSwapSeatOrder(msgSwapSeat.ucnowseat,msgSwapSeat.ucotherseat)
    --换位
     if msgSwapSeat.bIsSwapSeatEnd == false then
        if msgSwapSeat.bIsHuanWei then
            local tempcards = self._clientData._handCard[msgSwapSeat.ucotherseat]
            self._clientData._handCard[msgSwapSeat.ucotherseat] = self._clientData._handCard[msgSwapSeat.ucnowseat]
            self._clientData._handCard[msgSwapSeat.ucnowseat] = tempcards
            
            --高德位置互换
            local str = amapArrayList[msgSwapSeat.ucotherseat]
            amapArrayList[msgSwapSeat.ucotherseat] = amapArrayList[msgSwapSeat.ucnowseat]
            amapArrayList[msgSwapSeat.ucnowseat] = str
            
            local cloneHeadBG = {}
            cloneHeadBG = cloneAllHeadBG(cloneHeadBG)
            showHeadBG(false)
            firstMoveSeatAni(cloneHeadBG,swapSeatOrder)
        else
            self:sendWaitSwapSeat()
        end
    end
end

function GameScene:onMsgOpenCard(XYID,buff,len)
    local msgOpenCard = GameLogicProtocol.msgOpenCard:new()
    msgOpenCard:bistream(buff, len)
    self._clientData._openCardID = msgOpenCard.ucCardID

    -- 设置明牌显示
    self:showOpenCardValue(msgOpenCard.ucCardID)

    if msgOpenCard.bPlayAni then
        local callBack = function()
            self:sendWaitOpenCard()
        end
        local openCardID = {}
        table.insert(openCardID,self._clientData._openCardID)
       self:getUICardLayer():showOpenCardAni(openCardID,callBack)
        local cardPileAniPos = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_ANI_CARD_PILE)
        if cardPileAniPos then
            cardPileAniPos:removeAllChildren()
            if ccs.ArmatureDataManager:getInstance():getAnimationData("card_fly_movie") == nil then
                ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
                    GameSceneDefine.KW_GAME_PATH.."/LiangBang/Json/card_pile_movie/card_fly_movie0.png",
                    GameSceneDefine.KW_GAME_PATH.."/LiangBang/Json/card_pile_movie/card_fly_movie0.plist",
                    GameSceneDefine.KW_GAME_PATH.."/LiangBang/Json/card_pile_movie/card_fly_movie.ExportJson")    
            end
            if ccs.ArmatureDataManager:getInstance():getAnimationData("card_fly_movie") then
                local armature = ccs.Armature:create("card_fly_movie")
                if armature then 
                    armature:setAnchorPoint(cc.p(0.5, 0.5))
                    cardPileAniPos:addChild(armature) 
                    armature:getAnimation():playWithIndex(0,-1,0)
                    armature:getAnimation():setMovementEventCallFunc(function()
                        cardPileAniPos:removeChild(armature)
                        end)
                end
            end   
        end
    end
end

function GameScene:onMsgOpenCardSeat(XYID,buff,len)
    local msgOpenCardSeat = GameLogicProtocol.msgOpenCardSeat:new()
    msgOpenCardSeat:bistream(buff, len)
    self._clientData._openCardFirstSeat = msgOpenCardSeat.sFirstSeat
    self._clientData._openCardSecondSeat = msgOpenCardSeat.sSecondSeat

    if msgOpenCardSeat.bPlayAni then
        local localFirstcardSeat = Game.FrameworkFunction.seatToLocal(msgOpenCardSeat.sFirstSeat)
        local localSecondcardSeat = Game.FrameworkFunction.seatToLocal(msgOpenCardSeat.sSecondSeat)
        local callBack = function()
            self:sendWaitTakeCard()
        end
        local openCardID = {}
        table.insert(openCardID,self._clientData._openCardID)
        self:getUICardLayer():showSepCardsAni(localFirstcardSeat,localSecondcardSeat,openCardID,callBack)
    else
        local firstFlyNode = ccui.Helper:seekWidgetByName(self._rootNode, "KW_FLY_CARD_1")
        if firstFlyNode then
            firstFlyNode:setVisible(false)
        end
    end
end

function GameScene:onMsgCanChaoDi(XYID,buff,len)
    local msgCanChaoDi = GameLogicProtocol.msgCanChaoDi:new()
    msgCanChaoDi:bistream(buff, len)
    
    self._clientData._bChaoDi[msgCanChaoDi.sSeat] = msgCanChaoDi.bCanChaodi
    if msgCanChaoDi.sSeat == Game.FrameworkFunction.getSelfSeat() then
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_CHAO_DI,true)
    end
end

function GameScene:onMsgPower(XYID,buff,len)
    local time1 = socket.gettime()
    local msgPower = GameLogicProtocol.msgPower:new()
    msgPower:bistream(buff, len)
    self._clientData._preOutSeat = msgPower.sPrePowerSeat
    self._clientData._powerSeat = msgPower.sPowerSeat
    HintCard.ReCalHintCard()
    if msgPower.sPrePowerSeat ~= Game.FrameworkFunction.getMaxPlayer() then
        local sEndSeat = msgPower.sPowerSeat
        if msgPower.sPrePowerSeat >= msgPower.sPowerSeat then
            sEndSeat =  msgPower.sPowerSeat + Game.FrameworkFunction.getMaxPlayer()
        end
        for i = msgPower.sPrePowerSeat + 1,sEndSeat do
            local localSeatNeedClear = Game.FrameworkFunction.seatToLocal(i % Game.FrameworkFunction.getMaxPlayer())
            self:getUICardLayer():clearOutCards(localSeatNeedClear)
        end
    end
    
    self._clientData._preconditionOutCards = false

    local localSeat = Game.FrameworkFunction.seatToLocal(msgPower.sPowerSeat)
    local handUICardsID = self:getUICardLayer():getAllCardIDs(localSeat)
    if handUICardsID ~= nil and  #handUICardsID > 0 then
        local handUICards = CardAlgorithm:SZ2CardsGroup(handUICardsID,#handUICardsID)
        local dataCards = self._clientData._handCard[msgPower.sPowerSeat]
        local tmpHandCard = CardAlgorithm:gameCards2IDs(dataCards)
        if not CardAlgorithm:cardsIsSame(handUICards, dataCards) then
            print("牌型不符合")
            self:getUICardLayer():setNorMalHandCards(localSeat,tmpHandCard)
        end
    end
    
    SmartSelectCard._canFlower = true
    if msgPower.sPowerSeat ~= Game.FrameworkFunction.getSelfSeat() then
        return
    end

    local handCards = {}
    for i = 1,#self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()] do
        local gameCard = GameCard:new()
        table.insert(handCards,MyCard.new(self._clientData._handCard[Game.FrameworkFunction.getSelfSeat()][i].id))
    end
    local jokerData = {}
    for i = 1,#self._clientData._jokerData do
        table.insert(jokerData,MyCard.new(self._clientData._jokerData[i].id))
    end
    
    local preOutCards = {}
    local isFirstSeat = self._clientData._preOutSeat == Game.FrameworkFunction.getMaxPlayer() or self._clientData._preOutSeat == Game.FrameworkFunction.getSelfSeat()
    if not isFirstSeat then
        local lastOut = self._clientData._outCardsRecord[self._clientData._preOutSeat]
        local preOut = lastOut[#lastOut]
        for i = 1,#preOut.Cards do
            table.insert(preOutCards,MyCard.new( preOut.Cards[i].id))
        end
    end   
    
    local outCardsType = {}    
    MyCardsType.GetCardsTypeComb(preOutCards,jokerData,outCardsType)
    HintCard.ReCalHintCard()  
    local time2 = socket.gettime()
    local aa = HintCard.GetHintCards(handCards,jokerData,self._clientData._lianZhaBuDai,outCardsType[1])  
    local time3 = socket.gettime()
    HintCard.ReCalHintCard()   
    local hintCards = {}
    for i = 1,#aa do
        local gameCard = GameCard:new()
        gameCard:setID(aa[i]:GetID())
        table.insert(hintCards,gameCard)
    end
    
    if self._clientData._bChaoDi[msgPower.sPowerSeat] then
        self._clientData._bChaoDi[msgPower.sPowerSeat] = false
    else
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_CHAO_DI,false)
        if #hintCards == 0 then
            --显示    没有大过上家的牌   动画
            self:showNoBigAni()
        end
    end
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_PANEL_BTNS_GAME_NORMAL,true)
    self:showSurrederBtn()

    local firstOut = msgPower.sPrePowerSeat == Game.FrameworkFunction.getSelfSeat() or msgPower.sPrePowerSeat == Game.FrameworkFunction.getMaxPlayer()
    Game.UIFunction.setButtonState(self:getRootNode(),GameSceneDefine.KW_BTN_PASS,not firstOut)
    local checkCardsID = self:getUICardLayer():getCheckedCardIDs(Game.FrameworkFunction.getSelfLocalSeat())
    local dragCardsID = self:getUICardLayer():getDragOutCardIDs(Game.FrameworkFunction.getSelfLocalSeat())
    local bCanOut = CardAlgorithm:canOut(self._clientData._preOutSeat,
                                        self._clientData._powerSeat,
                                        checkCardsID,
                                        dragCardsID,
                                        self._clientData._outCardsRecord,
                                        self._clientData._jokerData,
                                        self._clientData._lianZhaBuDai,
                                        self._clientData._gameType)
    Game.UIFunction.setButtonState(self:getRootNode(),GameSceneDefine.KW_BTN_OUT_CARD,bCanOut)
end

function GameScene:onMsgWinOrder(XYID,buff,len)
    local msgWinOrder = GameLogicProtocol.msgWinOrder:new()
    msgWinOrder:bistream(buff, len)
    if Game.FrameworkFunction.getSelfSeat() == msgWinOrder.ucSeat then 
        self:getUITipsLayer():showMiniTips(true)
    end
    local localSeat = Game.FrameworkFunction.seatToLocal(msgWinOrder.ucSeat)
    local headUI =  self:getUIPlayerHead(localSeat)
    if headUI then 
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_UI_GAME_END_RANK,msgWinOrder.ucOrder + 1) 
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_UI_GAME_END_RANK,true) 
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_UI_PLAYER_CARD_LEFT,false)
    end
    if localSeat == UICardsLayerBase.CardLocalSeat.Top then
        self:moveHeadWithOpenHand(localSeat,false)
    end
end

function GameScene:onMsgTotalResult(XYID,buff,len)
    local msgTotalResult = GameLogicProtocol.msgTotalResult:new()
    msgTotalResult:bistream(buff, len)
    if not msgTotalResult.show then
        return
    end
    local tmpPlayers = {}
    for i = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
        tmpPlayers[i] = clone(Game.FrameworkFunction.getPlayerBySeat(i))
    end

    local delayTime = 1
    if self._clientData._playCount == self._clientData._maxplayCount then
        delayTime = 6
    end


    XH.SysTool.performWithDelayGlobal(function()
        local layer = Game.Interface.showPopLayer("GameBigWinLostLayer",{function (send, eventType)
            if display.getRunningScene() == self._gameScene then
                self:sendRespContinue(false)
                self:leaveGame()
            end
        end,Game.FrameworkFunction.getChairs()})
        layer:setRoomHost(self._clientData._roomHostSeat + 1)
    
        local maxTotalScore = 0
        local maxTotalScoreSeat = 0
        local isOnlyMaxTotalScore = false
        for i = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
            local pos = i + 1
            local player = tmpPlayers[i]
            if player then
                local tmpUrl = player:getAvatarUrl()
                layer:setAvatarPic(pos, player:getSex(), tmpUrl)
                layer:setPlayerName(pos,player:getNickName())
                layer:setPlayerNumberID(pos,"帐号:" .. player:getNumberID())
                local strType = {}
                strType[#strType + 1] = "最大线数:" .. msgTotalResult.maxXian[i]
                strType[#strType + 1] = "最高得分:" .. msgTotalResult.maxWin[i]
                strType[#strType + 1] = "双扣次数:" .. msgTotalResult.totalDoubleKou[i]
                for j = 1,#strType do
                    layer:setType(pos,j,strType[j])
                end
            end
        end
        for i = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
            local pos = i + 1
            local totalScore = 0
            for j = 1,msgTotalResult.playCount do
                totalScore = totalScore + msgTotalResult.boxRoomTotalWinLost[i][j]
            end
            if totalScore >= 0 then
                layer:setTotalScore(pos,"+" .. totalScore)
            else
                layer:setTotalScore(pos,totalScore)
            end
            if maxTotalScore < totalScore then
                maxTotalScore = totalScore
                maxTotalScoreSeat = i
                isOnlyMaxTotalScore = true
            elseif maxTotalScore == totalScore then
                isOnlyMaxTotalScore = false
            end
        end
        if not isOnlyMaxTotalScore then
            maxTotalScoreSeat = Game.FrameworkFunction.getMaxPlayer()
        end
        layer:setBestWinner(maxTotalScoreSeat + 1)
    
        if layer.setPlayCount then
            layer:setPlayCount(self._clientData._playCount, self._clientData._maxplayCount)
        end
        if layer.setRoomNumber then
            layer:setRoomNumber(self._boxRoomID)
        end
        if layer.setCanContinue then
            layer:setCanContinue(self._canContinue)
        end
        self:reqLedger()
    end,delayTime)
end

function GameScene:onMsgClientForward(XYID, buff, len)
    local msgClientForward = GameLogicProtocol.msgClientForward:new()
    msgClientForward:bistream(buff, len)
    if msgClientForward.id == GameLogicProtocol.msgClientForward.CF_ID.FastVoice then
        self:onMsgClientForwardFastVoice(msgClientForward)
    elseif msgClientForward.id == GameLogicProtocol.msgClientForward.CF_ID.PlayerHeadEffect then
        self:onMsgClientForwardPlayerHeadEffect(msgClientForward)
    elseif msgClientForward.id == GameLogicProtocol.msgClientForward.CF_ID.WireBreakSignal then
        self:onMsgClientForwardWireBreakSignal(msgClientForward)
    elseif msgClientForward.id == GameLogicProtocol.msgClientForward.CF_ID.MobileSignal then
        self:onMsgClientForwardMobileSignalMsg(msgClientForward)
    elseif msgClientForward.id == GameLogicProtocol.msgClientForward.CF_ID.Speak then
        self:onMsgSpeak(msgClientForward)
    elseif msgClientForward.id == GameLogicProtocol.msgClientForward.CF_ID.ChatMsgEmoji then
        self:onMsgExpression(msgClientForward)
    end
end

function GameScene:onMsgExpression(msgClientForward)
    self:onMsgClientForwardExpression(msgClientForward)
end

function GameScene:onMsgClientForwardExpression(msgClientForward)
    local seat = msgClientForward.seat or msgClientForward.sSeat 
    local localSeat = Game.FrameworkFunction.seatToLocal(seat)
    local headPanel = self:getUIPlayerHead(localSeat)
    if headPanel then
        local node = ccui.Helper:seekWidgetByName(headPanel, GameSceneDefine.KW_POS_EXPRESSION)
        if node then
            node:removeAllChildren()
            Game.UIFunction.setVisible(headPanel, GameSceneDefine.KW_UI_EXPRESSION, true)
            local aniKeyWord = "" .. string.format("%02d",tonumber(msgClientForward.strData))
            local animationName = "" .. aniKeyWord
            local atlasPath = GameSceneDefine.KW_PATH_RESOUCE_JASON ..'/emoj_ani/biaoq_01.atlas'
            local jsonPath = GameSceneDefine.KW_PATH_RESOUCE_JASON ..'/emoj_ani/biaoq_01.json'
            if cc.FileUtils:getInstance():isFileExist(jsonPath) and cc.FileUtils:getInstance():isFileExist(atlasPath) then
                local skeletonNode = sp.SkeletonAnimation:create(jsonPath, atlasPath, 0.7)
                if skeletonNode then
                    node:addChild(skeletonNode)
                    skeletonNode:setAnimation(0, animationName, false)
                end
            end
        end
    end
end

function GameScene:onMsgClientForwardMobileSignalMsg(msgClientForward)
    if msgClientForward.seat == Game.FrameworkFunction.getSelfSeat() then
        local delayTime = socket.gettime() - self._clientData._sendMobileSignalMsgTime
        self._clientData._sendMobileSignalMsgTime = 0
        self:showWifiState(delayTime * 1000)
    end

    if msgClientForward.seat ~= Game.FrameworkFunction.getSelfSeat() then
        self._clientData._playerHeartTime[msgClientForward.seat] = socket.gettime()
    end
end

function GameScene:onMsgClientForwardWireBreakSignal(msgBaseClientForward)
    if msgBaseClientForward.seat ~= Game.FrameworkFunction.getSelfSeat() then
        self._clientData._playerHeartTime[msgBaseClientForward.seat] = 0
    end
end

function GameScene:onMsgGameEnd(XYID,buff,len)
    local msgGameEnd = GameLogicProtocol.msgGameEnd:new()
    msgGameEnd:bistream(buff, len)

    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self:showHeadClock(false,0,i)
    end
    
    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_PANEL_BTNS_READY , false)
    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_PANEL_BTNS_GAME_NORMAL , false)
    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_BTN_SORT , false)

    self._playback:stopRecord()
    self._playerEndState = true -- 玩家状态
end

function GameScene:onMsgClientForwardFastVoice(msgClientForward)
    if Game.FrameworkFunction.isVoiceLimitVersion() then
        -- self:onMsgSpeak(msgClientForward)
        local localSeat = Game.FrameworkFunction.seatToLocal(msgClientForward.seat)
        self:showFastVoiceSpeakBg(localSeat)
        return
    end

    if Game.FrameworkFunction.isVoicePreDeal() then
        if msgClientForward.seat == Game.FrameworkFunction.getSelfSeat() then
            return
        end
    end
    local localSeat = Game.FrameworkFunction.seatToLocal(msgClientForward.seat)
    local playVoiceInfo = {}
    playVoiceInfo["voicelocalSeat"] = localSeat
    playVoiceInfo["voiceUrl"] = msgClientForward.strData
    self._playVoiceList[#self._playVoiceList + 1] = playVoiceInfo
    self:showPlayVoice()

    Game.UIFunction.setButtonState(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_BTN_REPLAY,true)
end

function GameScene:onMsgSpeak(msgClientForward)
    print('GameScene:onMsgSpeak')
    local localSeat = Game.FrameworkFunction.seatToLocal(msgClientForward.seat)
    local headPanel = self:getUIPlayerHead(localSeat)
    local speakInfo = Game.StringFunction.spiltStringByFlag(msgClientForward.strData,"/")
    local speakIndexNum = 1
    local speakContentNum = 2
    local index = 0
    if speakInfo[speakIndexNum] then
        index = speakInfo[speakIndexNum]
    end
    local content = ""
    if speakInfo[speakContentNum] then
        content = speakInfo[speakContentNum]
    end

    if headPanel then
        Game.UIFunction.setVisible(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_PLAY_RECORD_POS,false)

        local speakText = ""
        if index == 0 then
            speakText = "使用语音中..."
        else
            speakText = self:getUITalk():getSpeakText(index)
        end
        
        if #speakText < 1 then
            speakText = content
        end

        local wordNode = ccui.Helper:seekWidgetByName(headPanel,GameSceneDefine.KW_TEXT_SPEAK )
        if wordNode then
            wordNode:setString(speakText)
            wordNode:setVisible(true)
        end

        local KW_HEIGHT_UI_SPEAK = 85
        local KW_WIDTH_UI_SPEAK_EVERY_CHAR = 30
        local KW_WIDTH_UI_SPEAK_MIN = 72
        local speakoutPanel = ccui.Helper:seekWidgetByName(headPanel,GameSceneDefine.KW_UI_SPEAK_BG)
        if speakoutPanel then
            local hanziCharCount = (#speakText - string.utf8len(speakText))/2
            local englishCharCount = string.utf8len(speakText) - hanziCharCount
            local charCount = math.floor((hanziCharCount * 2 + englishCharCount) / 2)
            local height = speakoutPanel:getContentSize().height
            speakoutPanel:setContentSize(cc.size(KW_WIDTH_UI_SPEAK_MIN + charCount * KW_WIDTH_UI_SPEAK_EVERY_CHAR,KW_HEIGHT_UI_SPEAK,height))
            speakoutPanel:setVisible(true)
            speakoutPanel:stopAllActions()
            speakoutPanel:runAction(cc.Sequence:create(cc.FadeIn:create(0.4),cc.DelayTime:create(1),cc.FadeOut:create(0.4),cc.CallFunc:create(function()
                wordNode:setVisible(false)
            end)))
        end
    end
    
    local isCSBFileExit = cc.FileUtils:getInstance():isFileExist(GameSceneDefine.KW_GAME_CSB_PATH .."Talk/Talk_" .. self._gameID .. ".csb")
    if isCSBFileExit == false then
        Game.GameSound.playSoundQiaoPiHua(msgClientForward.seat,index,nil, SetData.getDialectOpen())
    else
        Game.GameSound.playSoundQiaoPiHua(msgClientForward.seat,index,self._gameID, SetData.getDialectOpen())
    end
end

function GameScene:onMsgChatMsgData(XYID, buff, len)
    print('GameScene:onMsgChatMsgData')
    local agbasexy = require("GameCommon.Code.GameProtocol.agbasexy")
    if XYID ~= agbasexy.ChatMsg.XY_ID then
        return
    end

    local chatMsg = agbasexy.ChatMsg:new()
    chatMsg:bistream(buff,len)
    
    if chatMsg.m_channel == agbasexy.ChatMsg.CHANNEL.TABLE or chatMsg.m_channel == agbasexy.ChatMsg.CHANNEL.ROOM then
        local strFront = Game.StringFunction.getFrontStringByFlag(chatMsg.m_msg,'|')
        local strBack = Game.StringFunction.getBackStringByFlag(chatMsg.m_msg,'|')
        if strFront == "XIAOHAO" then
            return 
        end
        if strFront ~= "" then
            return 
        end
    end
    
    local speakText = ""
    local localSeat = 0
    
    local color = chatMsg.m_color
    if color ~= agbasexy.ChatMsg.COLORTYPE.CT_COMMON then
        localSeat = 2
        speakText = un.StringUtils.GB_18030_2000_TO_UTF8(chatMsg.m_msg)
    else
        local player = Game.PlayerData.getPlayerByPlayerID(chatMsg.m_areaid,chatMsg.m_numberid)
        if player == nil then
            return
        end
        localSeat = Game.FrameworkFunction.seatToLocal(player:getSeat())
        speakText = chatMsg.m_msg
    end
    local headPanel = self:getUIPlayerHead(localSeat)
    if headPanel then
        Game.UIFunction.setVisible(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_PLAY_RECORD_POS,false)
        local wordNode = ccui.Helper:seekWidgetByName(headPanel,GameSceneDefine.KW_TEXT_SPEAK )
        if wordNode then
            wordNode:setString(speakText)
            wordNode:setVisible(true)
        end

        local KW_HEIGHT_UI_SPEAK = 85
        local KW_WIDTH_UI_SPEAK_EVERY_CHAR = 30
        local KW_WIDTH_UI_SPEAK_MIN = 72
        local speakoutPanel = ccui.Helper:seekWidgetByName(headPanel,GameSceneDefine.KW_UI_SPEAK_BG)
        if speakoutPanel then
            local hanziCharCount = (#speakText - string.utf8len(speakText))/2
            local englishCharCount = string.utf8len(speakText) - hanziCharCount
            local charCount = math.floor((hanziCharCount * 2 + englishCharCount) / 2)
            local height = speakoutPanel:getContentSize().height
            speakoutPanel:setContentSize(cc.size(KW_WIDTH_UI_SPEAK_MIN + charCount * KW_WIDTH_UI_SPEAK_EVERY_CHAR,KW_HEIGHT_UI_SPEAK,height))
            speakoutPanel:setVisible(true)
            speakoutPanel:stopAllActions()
            speakoutPanel:runAction(cc.Sequence:create(cc.FadeIn:create(0.4),cc.DelayTime:create(1),cc.FadeOut:create(0.4),cc.CallFunc:create(function()
                wordNode:setVisible(false)
            end)))
        end
    end
    --[[
    local isCSBFileExit = cc.FileUtils:getInstance():isFileExist(GameSceneDefine.KW_GAME_CSB_PATH .."Talk/Talk_" .. self._gameID .. ".csb")
    if isCSBFileExit == false then
        Game.GameSound.playSoundQiaoPiHua(msgClientForward.seat,index,nil, SetData.getDialectOpen())
    else
        Game.GameSound.playSoundQiaoPiHua(msgClientForward.seat,index,self._gameID, SetData.getDialectOpen())
    end
    ]]
end

function GameScene:onMsgClientForwardPlayerHeadEffect(msgClientForward)
    if msgClientForward.seat ~= Game.FrameworkFunction.getSelfSeat() then
        self:showPlayerHeadEffect(msgClientForward.seat, true)
    end
end

function GameScene:onMsgAllHandCards(XYID,buff,len)
    local msgAllHandCards = GameLogicProtocol.msgAllHandCards:new()
    msgAllHandCards:bistream(buff, len)

    --获取全部人手牌并展示
    local setHandCardsTimes = {}
    for i = 1, msgAllHandCards.allRoundCount do
            local localSeat = Game.FrameworkFunction.seatToLocal(i - 1)
            local handCardPanel = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_ADAPT_CARDS_..localSeat)
            if handCardPanel then
                local handCardNode = handCardPanel:getChildByName(GameSceneDefine.KW_UI_GAMEAREA_HAND_CARD)
                if handCardNode then
                    handCardNode:setVisible(true)
                end
            end
            
            local handCards
            for n = 1, msgAllHandCards.allRoundCount do
                local player = Game.PlayerData.getPlayerBySeat(n - 1)
                if msgAllHandCards.playerID[i] == player:getNumberID() then
                    handCards = CardAlgorithm:SZ2CardsGroup(msgAllHandCards.ObviousCards[n].ucCards,msgAllHandCards.ObviousCards[n].ucCount)
                end
            end
            
            local orderCards = handCards
            orderCards = CardAlgorithm:sortCard(orderCards, self._clientData._sortCardIndex)
            orderCards = CardAlgorithm:gameCards2IDs(orderCards)
            self:getUICardLayer():setNorMalHandCards(localSeat,orderCards)
            self._clientData._handCard[i - 1] = CardAlgorithm:sortCard(handCards,self._clientData._sortCardIndex)
            --剩余手牌数可以隐藏
            local headUI = self:getUIPlayerHead(localSeat)
            if headUI then 
                local cardLeftPanel = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_PANEL_CARD_LEFT)
                if cardLeftPanel then
                    cardLeftPanel:setVisible(false)
                end
            end
        end

        if self._clientData:getIsFFZ() == 1 then
            self:showCardLeftPanel(false)
        end
end

function GameScene:onMsgRequestSwapSeat(XYID, buff, len)
    local msgRequestSwapSeat = GameLogicProtocol.msgRequestSwapSeat:new()
    msgRequestSwapSeat:bistream(buff, len)
    if msgRequestSwapSeat.srcSeat == Game.FrameworkFunction.getSelfSeat() then
        return 
    end

    local srcPlayer = Game.FrameworkFunction.getPlayerBySeat(msgRequestSwapSeat.srcSeat)
    local destPlayer = Game.FrameworkFunction.getPlayerBySeat(msgRequestSwapSeat.destSeat)

    if srcPlayer and destPlayer then
        XH.TipTool.showTip( {
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function()
          self:sendRespondSwapSeat(true)
        end,
        funcCancel = function ()
          self:sendRespondSwapSeat(false)
        end,
        funcClose = function ()
          self:sendRespondSwapSeat(false)
        end,
    } , srcPlayer:getNickName() .. "请求和" .. destPlayer:getNickName() .. "交换位置!")
    end
end

function GameScene:onMsgRespondSwapSeat(XYID,buff,len)
    local msgRespondSwapSeat = GameLogicProtocol.msgRespondSwapSeat:new()
    msgRespondSwapSeat:bistream(buff, len)    

    if msgRespondSwapSeat.seat ~= Game.FrameworkFunction.getSelfSeat() then
        if not msgRespondSwapSeat.agree then
            local player = Game.FrameworkFunction.getPlayerBySeat(msgRespondSwapSeat.seat)
            Game.Interface.showPopLayer("WeakHintLayer",{player:getNickName() .. "不同意交换位置!"})
        end
    end
end

function GameScene:onMsgShowSwapSeat(XYID,buff,len)
    local msgShowSwapSeat = GameLogicProtocol.msgShowSwapSeat:new()
    msgShowSwapSeat:bistream(buff, len)

    --注释请求换位
    -- for i = 1,Game.FrameworkFunction.getMaxPlayer() do
    --     local panelHeadNode = self:getUIPlayerHead(i)
    --     if panelHeadNode then
    --         local swapSeatBtnNode = ccui.Helper:seekWidgetByName(panelHeadNode,GameSceneDefine.KW_BTN_SWAP)
    --         if swapSeatBtnNode then
    --             swapSeatBtnNode:setVisible(msgShowSwapSeat.bIsShowSwapSeat)
    --         end
    --     end
    -- end
end

function GameScene:onMsgSwapSeatFlag(XYID,buff,len)
    local msgSwapSeatFlag = GameLogicProtocol.msgSwapSeatFlag:new()
    msgSwapSeatFlag:bistream(buff, len)

    local srcPlayer = Game.FrameworkFunction.getPlayerBySeat(msgSwapSeatFlag.srcSeat)
    local dstPlayer = Game.FrameworkFunction.getPlayerBySeat(msgSwapSeatFlag.destSeat)
    if srcPlayer and dstPlayer then 
        for i = 1,Game.FrameworkFunction.getMaxPlayer() do 
            local headTipsUI = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_READY .. i)
            if headTipsUI then
                headTipsUI:setVisible(false)
                Game.UIFunction.setVisible(headTipsUI,GameSceneDefine.KW_UI_READY,false)
            end
        end

        XH.TipTool.showToast(srcPlayer:getNickName() .. "和" .. dstPlayer:getNickName() .. "成功交换位置!", 2)
    end 
    --重发位置
    local str = amapArrayList[msgSwapSeatFlag.srcSeat]
    amapArrayList[msgSwapSeatFlag.srcSeat] = amapArrayList[msgSwapSeatFlag.destSeat]
    amapArrayList[msgSwapSeatFlag.destSeat] = str
    self:changePlayerAmapMsg()
end

function GameScene:onMsgObviousCardsData(XYID,buff,len)
    if self._playback:isPlayback() or self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
        return
    end

    local msgAllDirCards = GameLogicProtocol.msgObviousCardsData:new()
    msgAllDirCards:bistream(buff, len)

    local createBoxRoomTime = XH.bf.BoxRoomCacheMgr:getInstance():getCreateRoomTime()
    self._playback:recordFillPlayBackGameMsg(self._boxRoomID,createBoxRoomTime,XYID, buff, len,self._uuid)
    --服务端账单不需要再往本地写。
    if XH.bf.BoxRoomCacheMgr.addAllDirectionFilePath then
        XH.bf.BoxRoomCacheMgr:getInstance():addAllDirectionFilePath(self._playback:getFillFilePath())
    end
end

function GameScene:onMsgAskContinue(XYID, buff, len)
    local msgAskContinue = GameBaseProtocol.msgAskContinue:new()
    msgAskContinue:bistream(buff, len)

    if msgAskContinue.nflag == msgAskContinue.ENUM_FLAG.NONE then
        self._canContinue = false
    elseif msgAskContinue.nflag == msgAskContinue.ENUM_FLAG.RELINK then      --弹出提示框
        self._canContinue = true
        if Game.Interface.getLayer("GameBigWinLostLayer") then 
            return 
        end
        XH.TipTool.showTip( {
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function()
          if display.getRunningScene() == self._gameScene then
            local btnStart = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_START)
            if btnStart then
                self:onTouchEventStart(btnStart,ccui.TouchEventType.ended) 
            end
            self:getUIWinLost():showWinLostPanel(false)
        end
        end,
        funcCancel = function ()
          if display.getRunningScene() == self._gameScene then
            self:sendRespContinue(false)
        end
        end,
        funcClose = function ()
          if display.getRunningScene() == self._gameScene then
            self:sendRespContinue(false)
        end
        end,
    } ,  "是否续桌？")
    elseif msgAskContinue.nflag == msgAskContinue.ENUM_FLAG.WAITING then
        self._canContinue = true
        Game.Interface.showPopLayer("WeakHintLayer",{"等待其它玩家续桌，5分钟后未成功续桌将自动解散"})
    else
        self._canContinue = true
    end
end

function GameScene:onMsgContinueFlag(XYID, buff, len)
    local tMsgContinueFlag = GameBaseProtocol.msgContinueFlag:new()
    tMsgContinueFlag:bistream(buff, len)

    local function leavegame()
        if display.getRunningScene() == self._gameScene then
            Game.Interface.popLayer("GameBigWinLostLayer")
            self:leaveGame()
        end
    end
    if tMsgContinueFlag.sFlag == tMsgContinueFlag.ENUM_FLAG.DISAGREE then
        local layer = Game.Interface.getLayer("GameBigWinLostLayer")
        if layer then
            layer:setCanContinue(false)
        else
            
        end
        XH.TipTool.showTip(
        {
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
              leavegame()
            end,
            funcClose = function()
              leavegame()
          end
        },
        "有人不同意续桌，房间已解散！"
    )
    elseif tMsgContinueFlag.sFlag == tMsgContinueFlag.ENUM_FLAG.SUCCESS then
        self._canContinue = false
        self:getUIWinLost():showWinLostPanel(false)
        --        self:getUIWinLost():setContinueBtnState(true)
        Game.Interface.popLayer("GameBigWinLostLayer")
        Game.Interface.showPopLayer("WeakHintLayer",{"续桌成功！"})
        if Game.FrameworkFunction.getSelfPlayer()._nStateEx ~= PlayerData.USER_STATEEX.psReady then
            Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,true)
        end
        self:reqLedger()
    elseif tMsgContinueFlag.sFlag == tMsgContinueFlag.ENUM_FLAG.TIME_OUT then
        XH.TipTool.showTip(
        {
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
              leavegame()
            end,
            funcClose = function()
              leavegame()
          end
        },
        "续桌等待时间过长，房间已解散！"
    )
    end
end

function GameScene:onMsgContinueTips(XYID, buff, len)
    local tMsgContinueFlag = GameBaseProtocol.msgContinueTips:new()
    tMsgContinueFlag:bistream(buff, len)

    local layer = Game.Interface.getLayer("GameBigWinLostLayer")
    if layer then
        XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "其它玩家已续桌，点击【继续游戏】即可加入！点击【回到大厅】即可离开！")
    end
end

function GameScene:onMsgClientForwardBase(XYID, buff, len)
    local msgBaseClientForwardEx = GameBaseProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx:bistream(buff, len) 
    if msgBaseClientForwardEx.sID == GameBaseProtocol.msgBaseClientForwardEx.CF_ID.AMap then
        self:onMsgClientForwardAMap(msgBaseClientForwardEx)
    end
end

function GameScene:onMsgClientForwardAMap(msgBaseClientForward)
    local nLocalSeat = Game.FrameworkFunction.seatToLocal(msgBaseClientForward.sSeat)
    local headUI = self:getUIPlayerHead(nLocalSeat)
    local tBackTable = Game.StringFunction.getTableByString(msgBaseClientForward.strData,";","=")
    local sAddress = tBackTable["address"] or "获取中..."
    if sAddress == '' then 
        sAddress = "获取中..."
    end
    local nAverLen = Game.StringFunction.subStringGetTotalIndex(sAddress)
    local nLimitWidth = 23
    if nAverLen > nLimitWidth then
        local sTmpAddress = Game.StringFunction.subStringUTF8(sAddress, 1, nLimitWidth)
        sAddress = sTmpAddress.."..."
    end
    amapArrayList[msgBaseClientForward.sSeat] = sAddress
    --位置信息
    if headUI then
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_TEXT_AMAP_POS_FIRST,true)
        Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_AMAP_ADDRESS,true)
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_AMAP_POS_FIRST, sAddress)   
    end
end
function GameScene:changePlayerAmapMsg()
    for i=0, #amapArrayList do  
        local nLocalSeat = Game.FrameworkFunction.seatToLocal(i)
        local headUI = self:getUIPlayerHead(nLocalSeat)
        --位置信息
        if headUI and  amapArrayList[i] then
            Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_TEXT_AMAP_POS_FIRST,true)
            Game.UIFunction.setVisible(headUI,GameSceneDefine.KW_AMAP_ADDRESS,true)
            Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_AMAP_POS_FIRST, amapArrayList[i])   
        end
    end
    
end

function GameScene:onMsgSurrenderCountDown(XYID,buff,len)
    local msgSurrenderCountDown = GameLogicProtocol.msgSurrenderCountDown:new()
    msgSurrenderCountDown:bistream(buff, len)
    dump(msgSurrenderCountDown.sReqSeat, 'hcc>>投降')
    print("投降：", msgSurrenderCountDown.sReqSeat , msgSurrenderCountDown.sResSeat , msgSurrenderCountDown.sFlag , msgSurrenderCountDown.nTime)
    local flag = msgSurrenderCountDown.sFlag
    local reqSeat = msgSurrenderCountDown.sReqSeat
    local reqTime = msgSurrenderCountDown.nTime
    --发出请求的队友家
    local friendSeat = msgSurrenderCountDown.sResSeat

    local reqplayer = Game.PlayerData.getPlayerBySeat(reqSeat)
    local fplayer = Game.PlayerData.getPlayerBySeat(friendSeat)

    Game.Interface.popLayer('SurrenderLayer')

    local surrenderLayer = Game.Interface.showPopLayer("SurrenderLayer")
    if not surrenderLayer then return end

    surrenderLayer:setLeftTime(reqTime)

    local fnicName = fplayer:getNickName()
    local rnicName = reqplayer:getNickName()

    local mySeat =  Game.FrameworkFunction.getSelfSeat()
    if flag == 0 then
        --一开始请求投降
        if friendSeat == mySeat then
            surrenderLayer:setTextToPanel(rnicName)
            surrenderLayer:showTextInfo(true)
        elseif reqSeat == mySeat then
            local nText = "您正在申请投降中..."
            surrenderLayer:setTextToPanel(nText)
            --自家隐藏掉投降按钮
            surrenderLayer:isShowSurrenderBtn(false)
            self:showSurrederBtn()
            surrenderLayer:showTextInfo(false)
        else
            local text = rnicName .. "玩家正在申请投降"
            surrenderLayer:setTextToPanel(text)
            surrenderLayer:isShowSurrenderBtn(false)
            self:showSurrederBtn()
            surrenderLayer:showTextInfo(false)
        end
    elseif flag == 1 then
        --收到对家是投降
        if reqSeat == mySeat then
            local text = "您的队友同意了投降"
            surrenderLayer:setTextToPanel(text)
            -- surrenderLayer:showCloseBtn(true)
            surrenderLayer:showTextInfo(false)
            surrenderLayer:isShowSurrenderBtn(false)
            surrenderLayer:closeSurrenderLayerDelay()
        elseif friendSeat == mySeat then
            surrenderLayer:closeSurrenderLayer()
        else
            local text = fnicName .. "玩家同意了投降"
            surrenderLayer:setTextToPanel(text)
            surrenderLayer:isShowSurrenderBtn(false)
            self:showSurrederBtn()
            surrenderLayer:showTextInfo(false)
            surrenderLayer:closeSurrenderLayerDelay()
        end
    elseif flag == 2 then
        --收到对家是买牌
        if reqSeat == mySeat then
            local text = "您的队友同意了买牌"
            surrenderLayer:setTextToPanel(text)
            -- surrenderLayer:showCloseBtn(true)
            surrenderLayer:showTextInfo(false)
            surrenderLayer:isShowSurrenderBtn(false)
            surrenderLayer:closeSurrenderLayerDelay()
        elseif friendSeat == mySeat then
            surrenderLayer:closeSurrenderLayer()
        else
            local text = fnicName .. "玩家同意了买牌"
            surrenderLayer:setTextToPanel(text)
            surrenderLayer:isShowSurrenderBtn(false)
            self:showSurrederBtn()
            surrenderLayer:showTextInfo(false)
            surrenderLayer:closeSurrenderLayerDelay()
        end
    end
end

function GameScene:onMsgScoreTableShowTurn(XYID,buff,len)
    local msgScoreTableShowTurn = GameLogicProtocol.msgScoreTableShowTurn:new()
    msgScoreTableShowTurn:bistream(buff, len)
    
    local score = msgScoreTableShowTurn.sScore
    local scoreNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_SCORE_TABLE_SCORE)
    if scoreNode then
        if scoreNode:isVisible() == false then
            scoreNode:setVisible(true)
        end
        scoreNode:setString('+' .. tostring(score))
        print('hcc>> benlunfen: ' .. score)
    end
    local panel = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_PANEL_BENLUNFEN)
    if panel then
        panel:setVisible(true)
    end
end

function GameScene:onMsgScoreEveryPlayerTurn(XYID,buff,len)
    local msgScoreEveryPlayerTurn = GameLogicProtocol.msgScoreEveryPlayerTurn:new()
    msgScoreEveryPlayerTurn:bistream(buff, len)
    local everyScore = msgScoreEveryPlayerTurn.sScore
    dump(everyScore,'hcc>>everyScore')
    
    --自己的座位号和队友的座位号
    local mySeat = Game.FrameworkFunction.seatToLocal(Game.FrameworkFunction.getSelfSeat())
    local friSeat = Game.FrameworkFunction.seatToLocal(Game.FrameworkFunction.getFriendSeat())

    if everyScore == nil or next(everyScore) == nil then
        return
    end
    local myScore = 0
    local eneScore = 0
    for sSeat,score in pairs(everyScore) do
        local localSeat = Game.FrameworkFunction.seatToLocal(sSeat - 1)
        self:showPerPlayerScore(localSeat, score)
        if mySeat == localSeat or friSeat == localSeat then
            myScore = myScore + score
        else
            eneScore = eneScore + score
        end
    end
end

function GameScene:onMsgScoreBombTurn(XYID,buff,len)
    local msgScoreBombTurn = GameLogicProtocol.msgScoreBombTurn:new()
    msgScoreBombTurn:bistream(buff, len)
    local bombScore = msgScoreBombTurn.sBombScore
    if bombScore == nil or next(bombScore) == nil then
        return
    end

    for seat = 1, Game.FrameworkFunction.getMaxPlayer() do
        local localSeat = Game.FrameworkFunction.seatToLocal(seat-1)
        self:showBombScore(localSeat, bombScore[seat])
    end
end

function GameScene:onMsgWinLostDT(XYID,buff,len)
    local msgWinLostDT = GameLogicProtocol.msgWinLostDT:new()
    msgWinLostDT:bistream(buff, len)
    self._isFinalLost = msgWinLostDT.bIsFinal

    local winLostNode = self:getUIWinLost()
    if not winLostNode then return end
    winLostNode:clearWinLostPanelUI()

    winLostNode:setEndType(msgWinLostDT.sEndType)
    winLostNode:setWinOrder(msgWinLostDT.sWinOrder)
    winLostNode:setWinLostTitle(msgWinLostDT.sOneScore)
    winLostNode:showBigWinLostBtn(msgWinLostDT.bIsFinal)
    winLostNode:setEndTypeTitleRank(msgWinLostDT.sEndType) --结束类型
    winLostNode:showSelfImg()
    winLostNode:setImgBg()
    winLostNode:setBothSiceScore(msgWinLostDT.sGraspScore)

    local tmpPlayers = {}
    for i = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
        tmpPlayers[i + 1] = clone(Game.FrameworkFunction.getPlayerBySeat(i))
    end

    for sSeat = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
        local tmpSeat = sSeat + 1
        local player = tmpPlayers[tmpSeat]
        if player then
            winLostNode:setPlayerName(sSeat , player:getNickName())
            winLostNode:setPlayerNumberID(sSeat , "帐号:" .. player:getNumberID())
            winLostNode:setPlayerPic(sSeat, player:getSex(), player:getAvatarUrl())
            winLostNode:showHeadFrame(sSeat, self._headFrameUrl[player:getNumberID()])
        end
        winLostNode:setScore(sSeat,1,msgWinLostDT.sGraspScore[tmpSeat])     --抓分
        winLostNode:setScore(sSeat,2,msgWinLostDT.sOneScore[tmpSeat])       --单局总优胜值
        winLostNode:setScore(sSeat,3,msgWinLostDT.sTotalScore[tmpSeat])     --历史总优胜值
    end

    winLostNode:setPlayCount("第" .. tostring(self._clientData._playCount) .. '/' .. tostring(self._clientData._maxplayCount) .. "局")
    winLostNode:setSystemTime()
    winLostNode:setRomNumber("房间号:" .. tostring(self._boxRoomID))
    winLostNode:setRoomHost(self._clientData._roomHostSeat)
    winLostNode:setGameRule(self._clientData:getRuleStr())
    winLostNode:setShuffleBtnEnable(tonumber(self._clientData._playCount) ~= tonumber(self._clientData._maxplayCount))
    if self._playback:isPlayback() then
        winLostNode:setShuffleBtnEnable(false)
    end

    local delayTime = 3.0
    local endType = 0
    for seat,score in pairs(msgWinLostDT.sOneScore) do
        if seat-1 == Game.FrameworkFunction.getSelfSeat() then
            if score >= 0 then
                endType = 1 --win
            else 
                endType = 2 --lose
            end
        end
    end
    if msgWinLostDT.sEndType == 3 then
        endType = 3 -- mianda
    end
    XH.SysTool.performWithDelayGlobal(function()
        local layer = Game.Interface.showPopLayer("EndTypeLayer")
        layer:setEndType(endType)
    end,2.0)

    XH.SysTool.performWithDelayGlobal(function()
        Game.Interface.popLayer("EndTypeLayer")
        winLostNode:showWinLostPanel(true)
    end,3.0)

    if self._playback:isPlayback() then
        self:getDismissLayer():showDismissPanle(false)
    end
    if self._playback:isPlayback() == false then
        if self._lobbyActInfoFunc and type(self._lobbyActInfoFunc) == "function" then
            self._lobbyActInfoFunc()
        end
    end

    --分享信息
    local shareDataInfo = {}
    shareDataInfo.roomId = self._boxRoomID
    shareDataInfo.roomRule = self._strGameRule
    shareDataInfo.playCnt = self._clientData._playCount
    shareDataInfo.gameId = self._gameID

    for i = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
        local tmpPlayers = clone(Game.FrameworkFunction.getPlayerBySeat(i))
        shareDataInfo[i] = {}
        if tmpPlayers then
            shareDataInfo[i].name = tmpPlayers:getNickName()
            shareDataInfo[i].numid = tmpPlayers:getNumberID()
            if shareDataInfo[i] then
                shareDataInfo[i].totalScore = msgWinLostDT.sOneScore[i+1]
            end
        end
    end
    if self:getUIWinLost().setShareData then
        self:getUIWinLost():setShareData(shareDataInfo)
    end 
end

function GameScene:onMsgTotalResultDT(XYID,buff,len)
    local msgTotalResultDT = GameLogicProtocol.msgTotalResultDT:new()
    msgTotalResultDT:bistream(buff, len)

    local tmpPlayers = {}
    for i = 0, Game.FrameworkFunction.getMaxPlayer() -1 do
        tmpPlayers[i] = clone(Game.FrameworkFunction.getPlayerBySeat(i))
    end

    local delayTime = 1
    local isEndGame = false
    if self._isFinalLost then
        delayTime = 0
        isEndGame = true
    end

    local chairs = Game.FrameworkFunction.getChairs()
    local isShow = msgTotalResultDT.bShow
    if isShow == false then
        --不显示大
        return
    end

    local layer = Game.Interface.showPopLayer("GameBigWinLostLayerDT",{function (send, eventType)
        if display.getRunningScene() == self._gameScene then
            self:sendRespContinue(false)
            self:leaveGame()
        end
    end,chairs})
    if layer.setRoomNumber then
       layer:setRoomNumber(self._boxRoomID)
    end
    XH.lobby:getModule("Sxvip.FriendInfo"):onGameEnd()
    if isEndGame then
        self:getUIWinLost():setBigWinLostPanel(layer)
        layer._popLayer:setVisible(false)
    end
    local maxTotalScore     = 0
    local maxTotalScoreSeat = 0
    for seat = 0, Game.FrameworkFunction.getMaxPlayer()-1 do
        local localSeat = Game.FrameworkFunction.seatToLocal(seat)
        local player = tmpPlayers[seat]
        if player ~= nil then
            local allScore = msgTotalResultDT.sTotalScore[seat]
            if allScore > 0 then
                allScore = "+"..allScore
            end
            layer:setPerTotoalScore(localSeat, allScore)
            local tempTab = msgTotalResultDT.sEveryScore[seat]
            if tempTab ~= nil or next(tempTab) ~= nil then
                for num, score in pairs(tempTab) do
                    if score > 0 then
                        score = "+"..score
                    end
                    layer:setPerPlayCountScore(localSeat, num + 1, score)
                end
            end
            layer:setAvatarPic(localSeat, player:getSex(), player:getAvatarUrl())
            layer:setPlayerName(localSeat, player:getNickName())
            layer:setPlayerNumberID(localSeat,"" .. player:getNumberID())
            layer:showPlayerFrameByUrl(localSeat, self._headFrameUrl[player:getNumberID()])
            if maxTotalScore < msgTotalResultDT.sTotalScore[seat] then
                maxTotalScore = msgTotalResultDT.sTotalScore[seat]
                maxTotalScoreSeat = localSeat
            end
        end
    end
    layer:setRoomHost(Game.FrameworkFunction.seatToLocal(self._clientData._roomHostSeat))

    local getBestWinnerSeatOrderTable = function()
        local seatOrder = {}
        local hostSeat = self._clientData._roomHostSeat
        for index = 0 ,Game.FrameworkFunction.getMaxPlayer()-1 do
            local tmpSeat = ( self._clientData._roomHostSeat + index ) % Game.FrameworkFunction.getMaxPlayer()
            seatOrder[index] = tmpSeat
        end
        return seatOrder
    end

    maxTotalScore     = 0
    maxTotalScoreSeat = 0

    local seatOrder = getBestWinnerSeatOrderTable()
    for _ , serverSeat in pairs(seatOrder) do
        local localSeat = Game.FrameworkFunction.seatToLocal(serverSeat)
        if maxTotalScore < msgTotalResultDT.sTotalScore[serverSeat] then
            maxTotalScore = msgTotalResultDT.sTotalScore[serverSeat]
            maxTotalScoreSeat = localSeat
        end
    end

    if maxTotalScore > 0 then
        -- layer:setBestWinner(maxTotalScoreSeat)
    end

    if msgTotalResultDT.sBigWinnerSeat ~= -1 then
        layer:setBestWinner(Game.FrameworkFunction.seatToLocal(msgTotalResultDT.sBigWinnerSeat))
    end

    XH.SysTool.performWithDelayGlobal(function()
        self:reqLedger()
    end,2)

    --分享信息
    local shareDataInfo = {}
    local playerScoreLists= {}

    shareDataInfo.roomId = self._boxRoomID
    shareDataInfo.roomRule = self._strGameRule
    shareDataInfo.playCnt = self._clientData._playCount
    shareDataInfo.gameId = self._gameID

    for i = 0,Game.FrameworkFunction.getMaxPlayer() - 1 do
        local player = clone(Game.FrameworkFunction.getPlayerBySeat(i))
        shareDataInfo[i] = {}
        if player then
            shareDataInfo[i].name = player:getNickName2()
            shareDataInfo[i].numid = player:getNumberID()
        end
        shareDataInfo[i].totalScore = msgTotalResultDT.sTotalScore[i]

        if player then
            local playerScore = {}
            playerScore["numid"] = player:getNumberID()
            playerScore["score"] = msgTotalResultDT.sTotalScore[i]
            table.insert(playerScoreLists,playerScore)
        end
    end
    shareDataInfo.playerScoreLists = playerScoreLists
    if layer.setShareData then
        layer:setShareData(shareDataInfo)
    end
end

function GameScene:onMsgSurrenderFlag(XYID,buff,len)
    local msgSurrenderFlag = GameLogicProtocol.msgSurrenderFlag:new()
    msgSurrenderFlag:bistream(buff, len)

    local KW_CAN_SURRENDER = 0
    local KW_CAN_NOT_SURRENDER = 1

    local flag = msgSurrenderFlag.sflag
    if flag ~= nil or next(flag) ~= nil then
        local mySeat = Game.FrameworkFunction.getSelfSeat()
        for i=1, #flag do
            if (i-1) == mySeat then
                if flag[i] == KW_CAN_SURRENDER then
                    --可投降
                    self._surrenderBtn = true
                elseif flag[i] == KW_CAN_NOT_SURRENDER then
                    --不可投降
                    self._surrenderBtn = false
                end
            end
        end
    end
end
-- 每个玩家总优胜值(tally发送)
function GameScene:onMsgTotalScore(XYID,buff,len)
    local msgTotalScore = GameLogicProtocol.msgTotalScore:new()
    msgTotalScore:bistream(buff, len)

    local ttScore = msgTotalScore.sTotalScore
    if ttScore == nil or next(ttScore) == nil then
        return
    end
 end
-- 洗牌协议
function GameScene:onMsgShuffleSeats(XYID,buff,len)
    local msgShuffleSeats = GameLogicProtocol.msgShuffleSeats:new()
    msgShuffleSeats:bistream(buff, len)

    Game.UIFunction.setText(self:getRootNode(),"KW_TXT_SHUFFLE_PLAYER", "")
    dump(msgShuffleSeats.sSeat,'hcc>>GameScene:onMsgShuffleSeats')

    local shufferText = ""
    local shufferCount = 0
    for i = 0, Game.FrameworkFunction.getMaxPlayer() - 1 do
        local player = Game.FrameworkFunction.getPlayerBySeat(i)
        if player and msgShuffleSeats.sSeat[i] == 1 then
            if shufferCount == 0 then
                shufferText = string.format("玩家【%s】正在洗牌...", player:getNickName())
            else
                shufferText = shufferText .. "\n" .. string.format("玩家【%s】正在洗牌...", player:getNickName())
            end
            shufferCount = shufferCount + 1
        end
    end
    self:showShuffleAni(shufferText, true)
    Game.GameSound.playSoundShuffle(true)
end
-- 洗牌结束
function GameScene:onMsgShuffleFinish(XYID,buff,len)
    local msgShuffleFinish = GameLogicProtocol.msgShuffleFinish:new()
    msgShuffleFinish:bistream(buff, len)

    if msgShuffleFinish.bFlag then
        self:showShuffleAni(nil,false)
    end
    --Game.GameSound.stopAllEffects()
    Game.GameSound.playSoundShuffle(false)
end
--四王分数
function GameScene:omMsgFourJokerScore(XYID,buff,len)
    local msgFourJokerScore = GameLogicProtocol.msgFourJokerScore:new()
    msgFourJokerScore:bistream(buff, len)
    print('hcc>>omMsgFourJokerScore'.. 'seat:' .. tostring(msgFourJokerScore.sSeat) .. ',sScore:' .. tostring(msgFourJokerScore.sScore))
end
-- 定型炸座位
function GameScene:omMsgStableBombSeat(XYID,buff,len)
    local msgStableBombSeat = GameLogicProtocol.msgStableBombSeat:new()
    msgStableBombSeat:bistream(buff, len)
   print('hcc>>omMsgStableBombSeat'.. 'seat:' .. tostring(msgStableBombSeat.sSeat))
   local localSeat = Game.FrameworkFunction.seatToLocal(msgStableBombSeat.sSeat)
   self:getUICardLayer():showStableBombIcon(localSeat)
end
--翻炸顺序座位
function GameScene:omMsgFFZSeat(XYID,buff,len)
    local msgFFZSeat = GameLogicProtocol.msgFFZSeat:new()
    msgFFZSeat:bistream(buff, len)
    dump(msgFFZSeat.sSeat,"hcc>>GameScene:omMsgFFZSeat")
end
--一个个玩家显示炸弹
function GameScene:omMsgFFZBomb(XYID,buff,len)
    local msgFFZBomb = GameLogicProtocol.msgFFZBomb:new()
    msgFFZBomb:bistream(buff, len)
    print("hcc>>GameScene:omMsgFFZBomb,seat:",msgFFZBomb.sSeat)
    print("hcc>>GameScene:omMsgFFZBomb,sCombCount",msgFFZBomb.sCombCount)
    print("hcc>>GameScene:omMsgFFZBomb,bAnimation",tostring(msgFFZBomb.bAnimation))
    dump(msgFFZBomb.allComb,"hcc>>GameScene:omMsgFFZBomb,allComb")

    self._clientData:setShowBombCards(msgFFZBomb.sSeat,msgFFZBomb.allComb)

    local isNoBomb          = msgFFZBomb.bIsNoBomb
    local bAnimation        = msgFFZBomb.bAnimation
    local showCardTypeTime  = bAnimation and 0.2 or 0
    local showCardScoreTime = bAnimation and 0.2 or 0
    local endWiatTime       = bAnimation and 0.8 or 0
    local showNoBombTime    = bAnimation and 1.2 or 0
    local allTime           = showCardTypeTime + showCardScoreTime + endWiatTime
    local tmpTime           = 0
    local seqList           = {}

    local localSeat = Game.FrameworkFunction.seatToLocal(msgFFZBomb.sSeat)
    local allComb = msgFFZBomb.allComb

    for index = 1 , #allComb do
        local combScore = allComb[index].combScore
        local cardType = allComb[index].cardType
        local isTongSe = allComb[index].isTongSe
        local ucCount = allComb[index].ucCount
        local ucCards = allComb[index].ucCards

        local combCards = CardAlgorithm:SZ2CardsGroup(ucCards,ucCount)
        local cards = {}
        for i = #combCards,1,-1 do
            table.insert(cards,combCards[i])
        end
        local outCardIDs = CardAlgorithm:gameCards2IDs(cards)

        local showCardCfk = cc.CallFunc:create(function()
            -- self:getUICardLayer():setBombCards(localSeat,outCardIDs,index)   --老的牌
            self:getUICardLayer():setBombCardsNew(localSeat,outCardIDs,index)   --新的牌
            self:getUICardLayer():setBombCardSameColor(localSeat,isTongSe,index)
        end)

        local showTypeCfk = cc.CallFunc:create(function()
            self:getUICardLayer():setBombCardType(localSeat,cardType,index,bAnimation)
            --音效
            local gameCards = CardAlgorithm:SZ2CardsGroup(ucCards,ucCount)
            local cardIds = CardAlgorithm:gameCards2IDs(gameCards)
            local tmpCardType,cardEnum = CardAlgorithm:getCardTypesByIDsandType(cardIds,cardType,self._clientData._jokerData,self._clientData._lianZhaBuDai)
            if tmpCardType and cardEnum then
                local gameCardGroup = CardAlgorithm:getGameGroupByCardType(tmpCardType,cardEnum)
                local player = Game.FrameworkFunction.getPlayerBySeat(msgFFZBomb.sSeat)
                if player then
                    Game.GameSound.playSoundPlayCardType(player:getSex(),gameCardGroup)
                    print('hcc>>play effect')
                end
            end
        end)

        local showScoreCfk = cc.CallFunc:create(function()
            self:getUICardLayer():setBombCardScore(localSeat,combScore,index,bAnimation)    
        end)
        
        local tmpAllTime = allTime*(index-1)
        local seq = cc.Sequence:create(
            cc.DelayTime:create(tmpAllTime),
            showCardCfk,
            cc.DelayTime:create(showCardTypeTime),
            showTypeCfk,
            cc.DelayTime:create(showCardScoreTime),
            showScoreCfk,
            cc.DelayTime:create(endWiatTime))
        seqList[#seqList+1] = seq
        tmpTime = tmpAllTime + allTime
    end

    if isNoBomb == true then
        tmpTime = tmpTime + showNoBombTime
        local seq = cc.Sequence:create(
            cc.DelayTime:create(showCardTypeTime),
            cc.CallFunc:create(function()self:showNoBomb(localSeat,true)end))
        seqList[#seqList+1] = seq
    end

    local seq = cc.Sequence:create(
        cc.DelayTime:create(tmpTime),
        cc.CallFunc:create(function()
            if bAnimation then
                self:sendEndWaitShowBomb(msgFFZBomb.sSeat)
            end
        end))
    seqList[#seqList+1] = seq

    for i = 1 , #seqList do
       self._gameScene:runAction(seqList[i]) 
    end
end
--一次显示完整所有炸弹
function GameScene:omMsgFFZBombOnce(XYID,buff,len)
    local msgFFZBombOnce = GameLogicProtocol.msgFFZBombOnce:new()
    msgFFZBombOnce:bistream(buff, len)
    dump(msgFFZBombOnce.sCombCount,"hcc>>msgFFZBombOnce.sCombCount")
    dump(msgFFZBombOnce.allComb,"hcc>>msgFFZBombOnce.allComb",5)
end

--显示炸弹动画
function GameScene:onMsgWaitShowBombAni(XYID,buff,len)
    local msgWaitShowBombAni = GameLogicProtocol.msgWaitShowBombAni:new()
    msgWaitShowBombAni:bistream(buff, len)
    self:showStartShowBombAni(function()
        local seq = cc.Sequence:create(
            cc.DelayTime:create(1.0),
            cc.CallFunc:create(function()self:sendEndWaitShowBombAni()end))
        if self._gameScene then
            self._gameScene:runAction(seq)
        end
    end)
    Game.GameSound.playSoundBomb()
end
--显示王
function GameScene:onMsgFFZJoker(XYID,buff,len)
    local msgFFZJoker = GameLogicProtocol.msgFFZJoker:new()
    msgFFZJoker:bistream(buff, len)
    print("hcc>>GameScene:onMsgFFZJoker,seat:" .. tostring(msgFFZJoker.sSeat) .. ' ,ucCount:' .. tostring(msgFFZJoker.ucCount))
    dump(msgFFZJoker.ucCards,"GameScene:onMsgFFZJoker")
    
    local localSeat = Game.FrameworkFunction.seatToLocal(msgFFZJoker.sSeat) 
    if msgFFZJoker.ucCount <= 0 then
        self:showNoJoker(localSeat,true)
    else
        local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MODULE_NAME)
        local combCards = CardAlgorithm:SZ2CardsGroup(msgFFZJoker.ucCards,msgFFZJoker.ucCount)
        local cards = {}
        for i = #combCards,1,-1 do
            table.insert(cards,combCards[i])
        end
        local outCardIDs = CardAlgorithm:gameCards2IDs(cards)
        self:showJokerCard(localSeat,outCardIDs,true)
    end
end 

function GameScene:onMsgSpecialBomb(XYID, buff, len)
    local msgSpecialBomb = GameLogicProtocol.msgSpecialBomb:new()
    msgSpecialBomb:bistream(buff, len)
    print("hcc>>GameScene:msgSpecialBomb,seat:" .. tostring(msgSpecialBomb.sSeat) .. ' ,ucCount:' .. tostring(msgSpecialBomb.ucCount))
    dump(msgSpecialBomb.ucCards,"GameScene:onMsgSpecialBomb")

    local gameCards = CardAlgorithm:SZ2CardsGroup(msgSpecialBomb.ucCards,msgSpecialBomb.ucCount)
    local localSeat = Game.FrameworkFunction.seatToLocal(msgSpecialBomb.sSeat) 

    local outCards = {}
    for i = #gameCards,1,-1 do
        table.insert(outCards,gameCards[i])
    end

    local outCardIDs = CardAlgorithm:gameCards2IDs(outCards)
    self:getUICardLayer():setOutCards(localSeat,outCardIDs)
end

function GameScene:onMsgScoreCard(XYID, buff, len)
    local msgScoreCard = GameLogicProtocol.msgScoreCard:new()
    msgScoreCard:bistream(buff, len)
    print("hcc>>GameScene:msgScoreCard,count: " .. tostring(msgScoreCard.ucCount))
    dump(msgScoreCard.ucCards,"GameScene:msgScoreCard")
    local ucCount = msgScoreCard.ucCount
    local ucCards = msgScoreCard.ucCards
    if ucCount > 0 then
        local gameCards = CardAlgorithm:SZ2CardsGroup(ucCards,ucCount)
        local cards = {}
        for i = #gameCards,1,-1 do
            table.insert(cards,gameCards[i])
        end
        local outCardIDs = CardAlgorithm:gameCards2IDs(cards)
        self._clientData:setScoreCards(outCardIDs)
    else
        self._clientData:setScoreCards({})
    end
end

function GameScene:onMsgTouJiaScore(XYID,buff,len)
    local msgTouJiaScore = GameLogicProtocol.msgTouJiaScore:new()
    msgTouJiaScore:bistream(buff, len)
    local score = msgTouJiaScore.sScore
    print('hcc>>toujiaScore:' .. score)    
    self:showTouJiaScore(score)
end

return GameScene