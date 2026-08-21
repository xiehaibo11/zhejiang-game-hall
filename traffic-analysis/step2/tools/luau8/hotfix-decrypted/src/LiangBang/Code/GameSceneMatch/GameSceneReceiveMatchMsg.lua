local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local CellWXImageDownload = import("GameCommon.Code.GameTeaBusiness.CellWXImageDownload")
local MatchKeyWord = import("..Config.MatchKeyWord",CURRENT_MODULE_NAME)

function GameScene:onReciveMatchMessage(XYID, buff, len, processID)
    if processID ~= XH.bf.ProcessIDList.MatchServer then
        return
    end
    
    if XYID == XH.bf.Match32XY.NotifyContent.XY_ID then
        local matchHint = XH.bf.Match32XY.NotifyContent:new()
        matchHint:bistream(buff, len)
        self:onMsgNotifyContent(matchHint)
    elseif XYID == XH.bf.Match32XY.NotifyAward.XY_ID then
        local notifyAward = XH.bf.Match32XY.NotifyAward:new()
        notifyAward:bistream(buff, len)
        self:onMsgNotifyAward(notifyAward)
    elseif XYID == XH.bf.Match32XY.RespPlayerMatchinfo.XY_ID then
        self:onMsgRespPlayerMatchinfo(XYID, buff, len)
    elseif XYID == XH.bf.Match32XY.NotifyJoinGame.XY_ID then
        self:onMsgMatchingNotifyJoinGame(XYID, buff, len)
    elseif XYID == XH.bf.Match32XY.RespSignupcnt.XY_ID then
        self:onMatchSignUpCnt(XYID, buff, len)
    end
end

function GameScene:onReciveMatchGameMessage(XYID, buff, len)
    -- if XYID == XH.bf.GameXY.RespJoinRoom.XY_ID then
    --     self:onRespJoinRoom(XYID, buff, len)
    -- else
      if XYID == XH.bf.GameXY.StartGame.XY_ID then
        self:onStartGame(XYID, buff, len)
    end
end

function GameScene:onMsgNotifyContent(matchHint)
    local utf8msg = un.StringUtils.GB_18030_2000_TO_UTF8(matchHint.content)
    print("onMsgMatchHint "..utf8msg.." matchHint.msgtype:"..matchHint.contenttype)
    
    if self._matchInfo.matchid == matchHint.matchid
        and self._matchInfo.subid == matchHint.subid then
        if matchHint.contenttype == XH.bf.Match32XY.NotifyContent.CONTENTTYPE.CT_ASSIGNTIPS then --结束等人   
            local countBeg = string.find(utf8msg,"当前轮剩余")
            local countEnd = string.find(utf8msg,"桌")
            if countBeg and countEnd then
                local tableCount = string.sub(utf8msg, countBeg + string.len("当前轮剩余"), countEnd - 1)
                self:showMatchWaitUpAni(true, tableCount)
            end
        elseif matchHint.contenttype == XH.bf.Match32XY.NotifyContent.CONTENTTYPE.CT_FINALS then  
            self:getUIWinLost():showWinLostPanel(false)
            self:getUIWinLost():clearWinLostPanelUI()
            self:showMatchWaitUpAni(false)
            self:showMatchStartGameAni(true)
        elseif matchHint.contenttype == XH.bf.Match32XY.NotifyContent.CONTENTTYPE.CT_MATCHSTEP then
            -- 淘汰分数展示 
            if utf8msg ~= "" then
                self:showMatchStateHint(true, utf8msg)
            end
        end 
    end
end

function GameScene:onMsgNotifyAward(awardInfo)
    -- 比赛数据过滤
    if false == (self._matchInfo.matchid == awardInfo.matchid
        and self._matchInfo.subid == awardInfo.subid) then
        return 
    end

    Game.Interface.popLayer("MatchGameWaitMessage")
    self:showMatchWaitUpAni(false)
    -- 隐藏下方排名
    Game.UIFunction.setVisible(self:getRootNode(),"KW_UI_MATCH_INFO_PANEL", false)
    
    local lastGetAwardRank = self._matchInfo.matchaward
    local rankNum = 0
    if type(lastGetAwardRank) == "table" then
        local index = #lastGetAwardRank
        rankNum = lastGetAwardRank[index].endrank
    end

    local pop = nil
    local popStr = nil
    if awardInfo.rank <= rankNum then
        pop = Game.Interface.showPopLayer("Match32.MatchGameEndWin")
        local matchWinInfo = {}
        -- 昵称
        matchWinInfo.nickName = Game.Interface.getNickName(XH.areaData:getAreaID(), XH.playerData:getNumberID())

        -- 比赛名称
        matchWinInfo.matchName = un.StringUtils.GB_18030_2000_TO_UTF8(self._matchInfo.matchname)

        matchWinInfo.gameNameText = Game.Interface.getGameNameByGameID(self._gameID)

        -- 奖励
        local selfRank = awardInfo.rank
        for key, var in pairs(lastGetAwardRank) do
            if selfRank >= var.startrank and selfRank <= var.endrank then
                matchWinInfo.awardCnt = var.award[1].cnt
                matchWinInfo.awardDesc = var.description
                matchWinInfo.id = var.award[1].id
        	end
        end

        -- 头像
        local cellWXImageDownload = CellWXImageDownload:new()
        local url = XH.playerData:getWeChatURL()
        if url ~= "" then
            local cellWXImageDownload = CellWXImageDownload:new()
            cellWXImageDownload:addCellCallBack(self,function(self,cell, type, data)
                if type == 1 then
                    matchWinInfo.picPath = data
                    pop:setRewardInfo(matchWinInfo)
                else
                    matchWinInfo.picPath = ""
                    pop:setRewardInfo(matchWinInfo)
                end
            end)
            cellWXImageDownload:start(url,1)
        else
            matchWinInfo.picPath = ""
            pop:setRewardInfo(matchWinInfo)
        end
        
        popStr = "MatchGameEndWin"
    else
        -- 淘汰
        pop = Game.Interface.showPopLayer("Match32.MatchGameEndLost")
        popStr = "MatchGameEndLost"
    end

    if pop then
        -- 排名
        pop:setOrder(awardInfo.rank)
        pop:setBtnReturnLobbyEvent(function()
            Game.Interface.popLayer(popStr)
            if display.getRunningScene() == self._gameScene then
                self:leaveGame()
            end
        end)
        
        if self._matchInfo.starttype==MatchKeyWord.MatchTypes.Human_Match then
            pop:setBtnStateByMatchType(MatchKeyWord.MatchTypes.Human_Match)
        else
            pop:setBtnStateByMatchType(MatchKeyWord.MatchTypes.Time_Match)
        end
        
        -- 定人赛
        pop:setBtnContinueEvent(function(send,eventType)
            if eventType == ccui.TouchEventType.began then
                Game.GameSound.playButtonClick()
            end
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            
            local function onReqPlayerPlaceCallBack(lobbyScene,cellReqPlayerPlace, type, data) 
                if type == XH.GT.Cell.TYPE.SUCCESS then
                    local curAppID, curGameID = nil, nil
                    for i = 1,#cellReqPlayerPlace._playerPlace do
                        local gameid = XH.GT.getGameIDByRoomID(cellReqPlayerPlace._playerPlace[i].appid)
                        for index =1, #XH.GT.GAME_ID_LIST do
                            if gameid == XH.GT.GAME_ID_LIST[index] then
                                curAppID = cellReqPlayerPlace._playerPlace[i].appid
                                curGameID = gameid
                                break
                            end
                        end
                        if curAppID ~= nil then
                            break
                        end
                    end
                    if curAppID ~= nil then
                        XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "请先退出包厢再加入比赛")
                    else
--                        tipPlayer:setCustomBtnEvent(tipPlayer.ENUM_BUTTON_TYPE.BUTTON_OK,
--                            function()
--                                self:hotUpdataBeforeEnterMatch(matchID, starttype)
--                            end)
                        pop:showLayer(false) 
                        self:reqMatchList(self._matchInfo.matchid, self._matchInfo.appID)
                    end
                end
            end 
            
            local CellReqPlayerPlaceClass = import(KW_PATH_COMMON_GAMETEABUSSINESS .. ".CellReqPlayerPlace")
            local cellReqPlayerPlace = CellReqPlayerPlaceClass:new()
            cellReqPlayerPlace:addCellCallBack(self,onReqPlayerPlaceCallBack)
            cellReqPlayerPlace:start(KW_CONFIG_BOX_ROOM_GAME_ID,15)
                        
        end)
    end
end

function GameScene:onMsgRespPlayerMatchinfo(XYID, buff, len)
    local playerMatchInfo = XH.bf.Match32XY.RespPlayerMatchinfo:new()
    playerMatchInfo:bistream(buff, len)
    
    -- 比赛数据过滤
    if false == (self._matchInfo.matchid == playerMatchInfo.matchid
        and self._matchInfo.subid == playerMatchInfo.subid) then
        return 
    end

    local matchPanel = ccui.Helper:seekWidgetByName(self:getRootNode(), "KW_UI_MATCH_ROOM_INFO")
    matchPanel:setVisible(true)

    local miPanel = ccui.Helper:seekWidgetByName(self:getRootNode(), "KW_UI_MATCH_INFO_PANEL")
    local rankPanel = ccui.Helper:seekWidgetByName(miPanel, "KW_UI_MATCH_INFO_RANK")
    rankPanel:setVisible(true)
    Game.UIFunction.setText(rankPanel, "KW_TEXT_RANK", playerMatchInfo.rank.."/"..playerMatchInfo.matchcnt)
    
    -- 淘汰分数展示 
    local matchStep = un.StringUtils.GB_18030_2000_TO_UTF8(playerMatchInfo.matchstep)
    if matchStep ~= "" then
        self:showMatchStateHint(true, matchStep)
    end
    
    -- 等待其他桌结束
--    if self._clientData._gameStep > MahFrameworkDefine.ENUM_GAME_STEP.GAME_STEP_NONE then
--    else
--        local assignTip = un.StringUtils.GB_18030_2000_TO_UTF8(playerMatchInfo.assigntips)
--        if assignTip ~= "" then
--            local countBeg = string.find(assignTip,"还有")
--            local countEnd = string.find(assignTip,"桌)")
--            if countBeg and countEnd then
--                local tableCount = string.sub(assignTip, countBeg + string.len("还有"), countEnd - 1)
--                self:showMatchWaitUpAni(true, tableCount)
--            end    
--        end
--    end
end

function GameScene:onMsgMatchingNotifyJoinGame(XYID, buff, len)
    local msgNotifyJoinGame = XH.bf.Match32XY.NotifyJoinGame:new()
    msgNotifyJoinGame:bistream(buff, len)

    if self._matchInfo.matchid == msgNotifyJoinGame.matchid
        and self._matchInfo.subid == msgNotifyJoinGame.subid then
        
        -- roomID 保存
        self._joinRoomID = msgNotifyJoinGame.gsappid

        -- 比赛模式下， 再结束完每个阶段之后，需要重新joinroom 
        -- local tReqJoinRoomData = XH.bf.GameXY.ReqJoinRoom:new()
        -- tReqJoinRoomData.roomID = msgNotifyJoinGame.gsappid
        -- tReqJoinRoomData.clientType = XH.bf.GameXY.ReqJoinRoom.CLIENTTYPE.MOBILE
        -- tReqJoinRoomData.ver = KW_CONFIG_LOBBY_VERSION
        -- tReqJoinRoomData.hardWareFlag =  XH.bf.GameXY.ReqJoinRoom.HARDWAREFLAG.HF_NONE

        -- Game.Interface.sendMessage(tReqJoinRoomData,msgNotifyJoinGame.gsappid,1)
    end
end

function GameScene:onRespJoinRoom(XYID, buff, len)
    -- if XYID ~= XH.bf.GameXY.RespJoinRoom.XY_ID then
    --     return
    -- end

    -- local tRespJoinRoomData = XH.bf.GameXY.RespJoinRoom:new()
    -- tRespJoinRoomData:bistream(buff, len)
    -- if tRespJoinRoomData.flag == XH.bf.GameXY.RespJoinRoom.JOINROOMFLAG.SUCCESS then
    --     XH.GT.SRSManager:getInstance():setAppIDBySRSGroupID(KW_CONFIG_DEFAULT_SRS_GROUP_ID, self._joinRoomID)
    --     XH.GT.SRSManager:getInstance():setGameAppID(self._joinRoomID, KW_CONFIG_DEFAULT_SRS_GROUP_ID)
    --     XH.GT.SRSManager:getInstance():addAppID(self._joinRoomID, KW_CONFIG_DEFAULT_SRS_GROUP_ID)
        
    --     -- 重新组桌，心跳重发
    --     local CellRoomHeartBeat = import("GameCommon.Code.GameTeaBusiness.CellRoomHeartBeat", CURRENT_MODULE_NAME)
    --     CellRoomHeartBeat.start(nil,1,self._joinRoomID)
    -- end
end

function GameScene:onStartGame(XYID, buff, len)
    if XYID ~= XH.bf.GameXY.StartGame.XY_ID then
        return
    end
    
    self:reqLinkMatchGame()
end

--定人赛为开赛刷新人数
function GameScene:onMatchSignUpCnt(XYID, buff, len)
    if XYID ~= XH.bf.Match32XY.RespSignupcnt.XY_ID then
        return
    end

    local respMatchSignUpCnt = XH.bf.Match32XY.RespSignupcnt:new()
    respMatchSignUpCnt:bistream(buff, len)
    
    -- 刷新比赛报名人数
    if self._matchInfo.matchid == respMatchSignUpCnt.matchid
        and self._matchInfo.subid == respMatchSignUpCnt.subid then
        
        if self._matchInfo.starttype==MatchKeyWord.MatchTypes.Human_Match then 
            self:updateMatchSignUpCnt(respMatchSignUpCnt.matchid, respMatchSignUpCnt.cnt)
        end     
    end
end

function GameScene:onReceiveSignUpHumanMatchCallBack(cell, type, data)
    if data then
        if data.flag == XH.bf.Match32XY.RespSignUpMatch.FLAG.SUCCESS then
            -- 重置UI
            self:showMatchStateHint(false, "")
            self._joinRoomID = 0
            self._matchHintLayer = Game.Interface.showPopLayer("Match32.MatchGameWaitMessage")
            if self._matchHintLayer then
                self._matchHintLayer:setText("正在为您匹配中，请耐心等待...")
            end
            self:reqSignUpCnt(self._matchInfo.matchid, self._matchInfo.subid, self._matchInfo.appID)
        end    
    else
        XH.TipTool.showTip(
        {
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
              self:leaveGame()
            end
        },
        cell._message
    )
    end
end

function GameScene:onReceiveMatchListCallBack(cell, type, data)
    if data.cnt > 0 then
        self._matchInfo.subid = data.mlist[data.cnt]
        self:reqSignUp(self._matchInfo.matchid, self._matchInfo.subid, self._matchInfo.appID)
    end
end

return GameScene6