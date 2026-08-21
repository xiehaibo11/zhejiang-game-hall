local CURRENT_MODULE_NAME = ...
local GameSceneBase = import("..GameScene.GameSceneRequest",CURRENT_MODULE_NAME)
local GameScene = class("GameScene",GameSceneBase)
local MatchKeyWord = import("..Config.MatchKeyWord",CURRENT_MODULE_NAME)

-- 请求比赛报名人数
function GameScene:reqSignUpCnt(matchID, subID, appID)
    local CellReqSignUpCnt = import("GameCommon.Code.GameTeaBusiness.Match.CellReqSignUpCnt", CURRENT_MODULE_NAME)   
    local signUpCnt = CellReqSignUpCnt:new()
    local matchInfo = {}
    matchInfo.matchid = matchID
    matchInfo.subid = subID

    signUpCnt:start(MatchKeyWord.KW_PROTOCOL_TIME_OUT_TIME, 
        XH.bf.ProcessIDList.MatchServer, appID,matchInfo)
end

function GameScene:reqCancelSignUp(matchID, subID, appID)
    local CellCancelReqSignUp = import("GameCommon.Code.GameTeaBusiness.Match.CellCancelSignUp", CURRENT_MODULE_NAME)
    local cellCancelReqSignUp = CellCancelReqSignUp:new()

    cellCancelReqSignUp:addCellCallBack(self,self.onCellCancelSignUpCallBack)    
    cellCancelReqSignUp:start(MatchKeyWord.KW_PROTOCOL_TIME_OUT_TIME, 
        XH.bf.ProcessIDList.MatchServer, appID, matchID, subID)
end

function GameScene:reqLinkMatchGame()
    -- 游戏区走一遍link
    local TransmitLinkGame = import("GameCommon.Code.GameTeaBusiness.TransmitLinkGame",CURRENT_MODULE_NAME)
    local transmitLinkGame = TransmitLinkGame:new()
    transmitLinkGame:start(XH.areaData:getAreaID(),XH.playerData:getNumberID(),self._joinRoomID,XH.playerData:getSessionID(),MatchKeyWord.KW_PROTOCOL_TIME_OUT_TIME) 
end 

function GameScene:reqPlayerMatchInfo()
    if self._matchInfo == nil then
        return
    end
    local CellReqPlayerMatchInfo = import("GameCommon.Code.GameTeaBusiness.CellReqPlayerMatchInfo",CURRENT_MODULE_NAME)
    local playerMatchInfo = CellReqPlayerMatchInfo:new()
    local tempInfo = {}
    tempInfo.matchid = self._matchInfo.matchid
    tempInfo.subid = self._matchInfo.subid
    playerMatchInfo:start(MatchKeyWord.KW_PROTOCOL_TIME_OUT_TIME
        ,XH.bf.ProcessIDList.MatchServer,self._matchInfo.appID,tempInfo)
end 

-- 请求定人赛列表
function GameScene:reqMatchList(matchID, appID)
    -- 比赛列表
    local transmitMatchList = import("GameCommon.Code.GameTeaBusiness.Match.TransmitReqMatchList", CURRENT_MODULE_NAME)
    local matchList = transmitMatchList:new()
    matchList:addCellCallBack(self,self.onReceiveMatchListCallBack)
    matchList:start(matchID, MatchKeyWord.KW_CONFIG_PROTOCOL_TIME_OUT_TIME, appID)
end

--请求报名
function GameScene:reqSignUp(matchID, subID, appID)
    local CellSignUp = import("GameCommon.Code.GameTeaBusiness.Match.CellReqSignUpMatch", CURRENT_MODULE_NAME)   
    local cellSignUp = CellSignUp:new()
    local signMsg = {}
    signMsg.askid = 0
    signMsg.matchid = matchID
    signMsg.subid = subID
    signMsg.signuptype = 0
    signMsg.idx = 1
    signMsg.head = ""

    cellSignUp:addCellCallBack(self,self.onReceiveSignUpHumanMatchCallBack)
    cellSignUp:start(MatchKeyWord.KW_CONFIG_PROTOCOL_TIME_OUT_TIME,
        XH.bf.ProcessIDList.MatchServer, appID, signMsg)
end

return GameSceneq