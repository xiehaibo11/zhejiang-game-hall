local ReqPlayerData = class("ReqPlayerData", XH.ReqProtocol)

function ReqPlayerData:start(userType, strName, pwd, areaid, lobbyid, srsGroupID, timeout)
    if ReqPlayerData.super.start(self, timeout, srsGroupID) == false then
        return
    end

    local playerConnect = XH.SRSProtocol.PlayerConnect:new()
    playerConnect.areaid = areaid
    playerConnect.usertype = userType
    playerConnect.userid = strName
    playerConnect.pwd = pwd
    playerConnect.identify = XH.SysTool:GetDevid()
    playerConnect.osver = XH.SysTool:GetOsVersion()
    playerConnect.clienttype = XH.SRSProtocol.PlayerConnect.CLIENTTYPE.MOBILE
    playerConnect.channelid = XH.SysTool:getChannelID()
    playerConnect.nGameID = lobbyid
    playerConnect.isNew = XH.areaData:getIsNewLoginProtocol()

    self:sendMsg(playerConnect, XH.SRSProtocol.PlayerData, srsGroupID, 0)
end

function ReqPlayerData:onMsgReceive(msgData)
    if msgData.flag == XH.SRSProtocol.PlayerData.ERRORCODE.SUCCESS then
        self:success()
    else
        self:fail()
    end
end

return ReqPlayerData