---@class BridgeData
local BridgeData = class("BridgeData")

function BridgeData.getAreaDataByLobbyID(lobbyID)
    return XH.areaData:getAreaDataByLobbyID(lobbyID)
end

function BridgeData.getApiHubRid()
    return XH.areaData:getApiHubRid()
end

function BridgeData.getAreaID()
    return XH.areaData:getAreaID()
end

function BridgeData.getLobbyID()
    return XH.areaData:getLobbyID()
end

function BridgeData.getSRSGroupID()
    return XH.areaData:getSrsGroupID()
end

function BridgeData.getAreaTeaHouseAppID()
    return XH.areaData:getTeaHouseAppID()
end

function BridgeData.getRoomCardID()
    return XH.areaData:getPropRoomCardID()
end

function BridgeData.getSmallRoomCardID()
    return XH.areaData:getPropSmallRoomCardID()
end

function BridgeData.getSmallRoomCardRatio()
    return XH.areaData:getPropSmallRoomCardRatio()
end

function BridgeData.getLimitedTimeRoomCardRatio()
    return XH.areaData:getPropLimitedTimeRoomCardRatio()
end

function BridgeData.getLobbyVersion()
    return KW_CONFIG_LOBBY_VERSION
end

function BridgeData.playerData()
    return XH.playerData
end

function BridgeData.IsAgent()
    return XH.playerData:getPlayerIsAgent()
end

function BridgeData.setAgent(isAgent)
    return XH.playerData:setPlayerIsAgent(isAgent)
end

function BridgeData.getBrandID()
    return XH.playerData:getBrandID()
end

function BridgeData.getNumberID()
    return XH.playerData:getNumberID()
end

function BridgeData.getNickName()
    return XH.playerData:getNickName()
end

function BridgeData.getWeChatURL()
    return XH.playerData:getWeChatURL()
end

function BridgeData.getSex()
    return XH.playerData:getSex()
end

function BridgeData.getGameNameList()
    return XH.areaData:getAreaGameNameList()
end

function BridgeData.getBoxRoomGameList()
    return XH.areaData:getBoxRoomGameList()
end

function BridgeData.getTeaHouseRoomGameList()
    return XH.areaData:getTeaHouseRoomGameList()
end

function BridgeData.getppd()
    return XH.playerData:getppd()
end

function BridgeData.getXHLinkURL()
    return XH.areaData:getXHLinkURL()
end

function BridgeData.getRoomCard()
    return XH.playerData:getRoomCard() + XH.playerData:getLimitedTimeRoomCard()
end

function BridgeData.getRemodelRoomCard()
   return XH.playerData:getRemodelRoomCard()
end

function BridgeData.getIPass()
    return XH.playerData:getIPass()
end

function BridgeData.getPlayerPosition()
    return XH.playerData:getPlayerPosition()
end

function BridgeData.reqPlayerPosition()
    XH.playerData:flushPlayerPosition()
end

function BridgeData.getComplainData()
    return XH.playerData:getComplainData()
end

function BridgeData.checkPlayerPosition(position, teaHousePwd)
    return tonumber(position.teaID), tonumber(position.roomID)
end

function BridgeData.jumpPlayerPosition(position)
    XH.TipTool.showLoading()
    XH.SysTool.performDelayOnce(function()
        if tonumber(position.teaID) ~= 0 then
            XH.teaHouseManager:joinTeaHouse(position.teaID, position.roomID)
        else
            local func = function()
                local param = {}
                param.appID = position.gameAppID
                param.gameID = position.gameID
                param.roomMode = XH.ROOM_MODE.BOXROOM
                param.roomID = position.roomID
                param.srsGroupID = position.srsGroupID
                XH.roomManager:gameStart(param)
            end

            if XH.lobby:getModule("Lobby"):isNeedHotUpdata(position.gameID) then
                lobby.gameHotUpdateSuccessCallBack = func
            else
                func()
            end
        end
        XH.TipTool.hideLoading()
    end, 0.2)
end

function BridgeData.getBoxActivityGame()
     return XH.areaData:getBoxActivityGame()
end

function BridgeData.getActivityTime()
    return  XH.areaData:getActivityTime()
end

function BridgeData.isRemodelArea()
    return  XH.areaData:isRemodelArea()
end

function BridgeData.isFixPayTypeArea()
    return  XH.areaData:isFixPayTypeArea()
end

function BridgeData.isNotTeaAgentMode()
    return  XH.areaData:isNotTeaAgentMode()
end

function BridgeData.getPlayerPhone()
    return  XH.playerData:getBindPhone()
end

function BridgeData.reqPlayerDrop()
    return  XH.playerData:flushPlayerDrop()
end

function BridgeData.IsVirtualAgent()
    return XH.areaData:getVirtualAgentState()
end

function BridgeData.isTeaSvrSupportBacthInvite()
    return  XH.areaData:isTeaSvrSupportBacthInvite()
end

function BridgeData:getAreaWindID()
    return XH.areaData:getAreaWindID()
end

function BridgeData:getTeahouseAppid()
    return XH.areaData:getTeaHouseAppID()
end

function BridgeData.getFourToTwoConfig()
    return require("lobby.Config.FourToTwoActConfig")
end

function BridgeData.getIsNewBoxGameProcess()
    return XH.areaData:getIsNewBoxGameProcess()
end

function BridgeData.isShowMarkGame(gameID)
    return XH.lobby:getModule("Mark"):isShowMarkGame(gameID)
end

function BridgeData.getMarkTextByGameID(gameID)
    return XH.lobby:getModule("Mark"):getMarkTextByGameID(gameID)
end

function BridgeData.isTeaCreateGroup()
    return XH.playerData:isTeaCreateGroup()
end

function BridgeData.setTeaCreateGroup(bIsGroup)
    XH.playerData:setTeaCreateGroup(bIsGroup)
end

function BridgeData.getUsedOldGPGames()
    return XH.areaData:getUsedOldGPGames()  
end

function BridgeData.getShareModule()
    return XH.lobby:getModule("Share")
end

return BridgeData