CF.netEngine = XH.netEngine

CF.netEngine.sendGameProtocol = function(protocol, appID)
    appID = appID or CF.roomData:getAppID()
    XH.netEngine:sendProtocol(protocol, protocol.processid, appID, XH.areaData:getSrsGroupIDbyAppID(appID))
end

--逻辑so发送使用,appID可以不传
CF.netEngine.sendStreamPacket = function(protocol, appID,processID)
    local pID = processID or CF.GameMProtocol.ClientToServerMessage.processid
    local tClientToServerMessageData = nil
    if pID == CF.GameProtocolGT.ClientToServerMessage.processid then 
        tClientToServerMessageData = CF.GameProtocolGT.ClientToServerMessage:new()
    elseif pID == CF.GameMProtocol.ClientToServerMessage.processid then
        tClientToServerMessageData = CF.GameMProtocol.ClientToServerMessage:new()
    end
    local bos = protocol:bostream()
    tClientToServerMessageData.cmdid = protocol.XY_ID
    tClientToServerMessageData.message = bos:getBytes()
    tClientToServerMessageData.msglen = bos:getLength()
    appID = appID or CF.roomData:getAppID()
    XH.netEngine:sendProtocol(tClientToServerMessageData, pID, appID, XH.areaData:getSrsGroupIDbyAppID(appID))
end

CF.netEngine.sendToolProtocol = function(protocol)
    XH.netEngine:sendProtocol(protocol, protocol.processid, 0, XH.areaData:getSrsGroupID())
end

CF.netEngine.sendLobbyProtocol = function(protocol, srsLobby, groupId)
    XH.netEngine:sendProtocol(protocol, protocol.processid, srsLobby or 0, groupId or XH.areaData:getSrsGroupID())
end

return CF.netEngine
