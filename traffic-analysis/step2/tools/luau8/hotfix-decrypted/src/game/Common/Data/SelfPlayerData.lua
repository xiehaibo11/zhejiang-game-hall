local SelfPlayerData = class("SelfPlayerData")

function SelfPlayerData:getNumberID()
    return XH.playerData:getNumberID()
end

function SelfPlayerData:getBrandID()
    return XH.playerData:getBrandID()
end

function SelfPlayerData:getUserID()
    return XH.playerData:getUserID()
end

function SelfPlayerData:getDiamnd()
    return XH.playerData:getDiamnd()
end

function SelfPlayerData:getRoomCard()
    return XH.playerData:getRoomCard()
end

function SelfPlayerData:getLimitedTimeRoomCard()
    return XH.playerData:getLimitedTimeRoomCard()
end

function SelfPlayerData:getIsForeignIP()
    return CF.getLobbyModule("Lobby"):getIsForeignIP()
end

function SelfPlayerData:isAleardyRealName()
    if XH.configerManager:getIsNewRealName() then 
        return XH.playerData:getIdentityStatus() == 0 or XH.playerData:getIdentityStatus() == 1
    else
        return XH.playerData:getIdentityStatus() == 2
    end 
end

function SelfPlayerData:getSR()
    return XH.playerData:getSR()
end

function SelfPlayerData:getWeChatURL()
    return XH.playerData:getWeChatURL()
end

function SelfPlayerData:getIsNewUserGuide()
    return XH.playerData:getIsNewUserGuide()
end

function SelfPlayerData:getIsFirstGoldGame(  )
    return XH.playerData:getIsFirstGoldGame()
end

function SelfPlayerData:setIsFirstGoldGame(isFirst)
    XH.playerData:setIsFirstGoldGame(isFirst)
end

function SelfPlayerData:getAllTags()
    return XH.playerData:getAllTags()
end

function SelfPlayerData:getppd()
    return XH.playerData:getppd()
end

function SelfPlayerData:setSex(sex)
    XH.playerData:setSex(sex)
end

function SelfPlayerData:getSex()
    return XH.playerData:getSex()
end

function SelfPlayerData:getNickName()
    return XH.playerData:getNickName()
end

function SelfPlayerData:getIsShieldBaseLiveView()
    return XH.playerData:getIsShieldBaseLiveView() or false
end

function SelfPlayerData:setIsShieldBaseLiveView(isShieldBase)
    XH.playerData:setIsShieldBaseLiveView(isShieldBase)
end

function SelfPlayerData:flushGoldCoin()
    XH.playerData:flushGoldCoin()
end

function SelfPlayerData:getIsBoxRoomGuide(  )
    return XH.playerData:getIsBoxRoomGuide()
end

function SelfPlayerData:setIsBoxRoomGuide(isguide)
    XH.playerData:setIsBoxRoomGuide(isguide)
end

-- 仅本次允许权限录音
function SelfPlayerData:getVoicePermissionOnlyOnce()
    return XH.playerData:getVoicePermissionOnlyOnce()
end

function SelfPlayerData:setVoicePermissionOnlyOnce(perm)
    XH.playerData:setVoicePermissionOnlyOnce(perm)
end

-- 仅本次允许权限位置
function SelfPlayerData:getPositionPermissionOnlyOnce()
    return XH.playerData:getPositionPermissionOnlyOnce()
end

function SelfPlayerData:setPositionPermissionOnlyOnce(perm)
    XH.playerData:setPositionPermissionOnlyOnce(perm)
end

function SelfPlayerData:reqChangePlayerSex(bMan)
    if bMan == true then 
        XH.playerData:reqChangePlayerInfo(1,XH.playerData:getNickName(),XH.playerData:getWeChatURL(),true,XH.playerData:isBindPhone())
    else
        XH.playerData:reqChangePlayerInfo(0,XH.playerData:getNickName(),XH.playerData:getWeChatURL(),true,XH.playerData:isBindPhone())
    end
end

function SelfPlayerData:getEnterTeaHouseID()
    return  CF.getLobbyModule("Im"):getIMData():getEnterTeaHouseID()
end

function SelfPlayerData:flushPlayerDrop()
    XH.playerData:flushPlayerDrop()
end

function SelfPlayerData:getFreezePropCountByID(propID)
    return XH.playerData:getFreezePropCountByID(propID)
end

function SelfPlayerData:setDiamnd(nDiamd)
    XH.playerData:setDiamnd(nDiamd)
end

function SelfPlayerData:setRoomCard(nRoomCard)
    XH.playerData:setRoomCard(nRoomCard)
end

function SelfPlayerData:getFreeRoomCard()
    return XH.playerData:getFreeRoomCard()
end

function SelfPlayerData:setFreeRoomCard(nRoomCard)
    XH.playerData:setFreeRoomCard(nRoomCard)
end

function SelfPlayerData:getPropCountByID(propId)
    local playerPropsInfo = XH.playerData:getPlayerDrop()
    return playerPropsInfo[propId] or 0
end

return SelfPlayerDataG