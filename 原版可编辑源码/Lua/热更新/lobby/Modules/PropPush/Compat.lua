-- -*- coding: utf-8 -*-
--- 宝宝 → 浙江：房间/玩家查询（CF.roomData / CF.selfPlayerData）+ PropPush 配置

local Compat = {}

function Compat.safeTeaHouseId()
    if XH and XH.teaHouseManager then
        if XH.teaHouseManager.getCurTeaHouseId then
            return tonumber(XH.teaHouseManager:getCurTeaHouseId()) or 0
        end
        if XH.teaHouseManager.getTeaHouseId then
            return tonumber(XH.teaHouseManager:getTeaHouseId()) or 0
        end
    end
    if TeaHouse and TeaHouse.manager and TeaHouse.manager.getCurTeaHouseID then
        return tonumber(TeaHouse.manager:getCurTeaHouseID()) or 0
    end
    return 0
end

function Compat.safeKindId()
    if CF and CF.roomData and CF.roomData.getGameID then
        return tonumber(CF.roomData:getGameID()) or 0
    end
    return 0
end

function Compat.safeChairCount()
    if CF and CF.roomData then
        if CF.roomData.getChairs then
            local n = tonumber(CF.roomData:getChairs())
            if n and n > 0 then
                return n
            end
        end
        if CF.roomData.getMaxPlayer then
            return tonumber(CF.roomData:getMaxPlayer()) or 4
        end
    end
    return 4
end

--- 本机数字账号（浙江 PlayerData.numberID，替代宝宝 dwUserID）
function Compat.getMyNumberId()
    if CF and CF.selfPlayerData and CF.selfPlayerData.getNumberID then
        return tonumber(CF.selfPlayerData:getNumberID())
    end
    if XH and XH.playerData and XH.playerData.getNumberID then
        return tonumber(XH.playerData:getNumberID())
    end
    return nil
end

--- 本机座位；未入桌返回 nil（不使用 RoomData 在无玩家时返回 maxPlayer 的兜底）
function Compat.getSelfSeat()
    if not (CF and CF.roomData and CF.roomData.getSelfPlayerData) then
        return nil
    end
    if not CF.roomData:getSelfPlayerData() then
        return nil
    end
    return CF.roomData:getSelfSeat()
end

function Compat.isSelfInTable()
    return Compat.getSelfSeat() ~= nil
end

function Compat.isBoxRoom()
    return CF and CF.roomData and CF.roomData.isBoxRoom and CF.roomData:isBoxRoom() == true
end

function Compat.isGameStarted()
    if CF and CF.roomData and CF.roomData.getIsGameStarted then
        return CF.roomData:getIsGameStarted() == true
    end
    if CF and CF.roomData and CF.roomData.getIsGameStart then
        return CF.roomData:getIsGameStart() == true
    end
    if XH and XH.gameManager and XH.gameManager.isGameStart then
        return XH.gameManager:isGameStart() == true
    end
    if CF and CF.game and CF.game.isGameStart then
        return CF.game:isGameStart() == true
    end
    return false
end

function Compat.seatFromUserId(userId)
    userId = tonumber(userId)
    if not userId or userId == 0 or not (CF and CF.roomData and CF.roomData.getPlayerDatas) then
        return nil
    end
    for _, pd in pairs(CF.roomData:getPlayerDatas() or {}) do
        if pd and tonumber(pd:getNumberID()) == userId then
            return pd:getSeat()
        end
    end
    return nil
end

function Compat.userIdFromSeat(seatId)
    seatId = tonumber(seatId)
    if seatId == nil or seatId < 0 or not (CF and CF.roomData and CF.roomData.getPlayerDataBySeatId) then
        return nil
    end
    local pd = CF.roomData:getPlayerDataBySeatId(seatId)
    if not pd then
        return nil
    end
    local uid = tonumber(pd:getNumberID())
    if uid and uid > 0 then
        return uid
    end
    return nil
end

--- 通知/旧字段里可能是 dwUserID 或 numberID
function Compat.numberIdFromUserPayload(user)
    if not user then
        return nil
    end
    return tonumber(user.nNumberID or user.numberID or user.numberid or user.dwUserID or user.userid)
end

function Compat.playGameSound(path)
    if CF then
        CF.soundManager:playEffect(path)
    end
end

local function _areaData()
    return (XH and XH.areaData) or (CF and CF.areaData)
end

--- 钻石道具 id（替代宝宝 PROP_ID.DIAMOND）
function Compat.getDiamondPropId()
    local ad = _areaData()
    if ad and ad.getPropDiamndID then
        return tonumber(ad:getPropDiamndID()) or 0
    end
    return 0
end

--- 房卡道具 id（替代宝宝 PROP_ID.FK）
function Compat.getRoomCardPropId()
    local ad = _areaData()
    if ad and ad.getPropRoomCardID then
        return tonumber(ad:getPropRoomCardID()) or 0
    end
    return 0
end

--- 免费/绑定房卡道具 id（替代宝宝 PROP_ID.FREE_FK）
function Compat.getFreeRoomCardPropId()
    local ad = _areaData()
    if ad and ad.getPropBindRoomCardID then
        return tonumber(ad:getPropBindRoomCardID()) or 0
    end
    local list = ad and ad.getPropList and ad:getPropList()
    return list and tonumber(list.freeRoomCardID) or 0
end

function Compat.isDiamondPropId(propId)
    propId = tonumber(propId)
    local diamondId = Compat.getDiamondPropId()
    return propId ~= nil and diamondId ~= 0 and propId == diamondId
end

function Compat.isRoomCardPropId(propId)
    propId = tonumber(propId)
    if not propId then
        return false
    end
    local fk = Compat.getRoomCardPropId()
    local freeFk = Compat.getFreeRoomCardPropId()
    return (fk ~= 0 and propId == fk) or (freeFk ~= 0 and propId == freeFk)
end

function Compat.getPropPushAllCfg()
    local cfgMod = XH and XH.lobby and XH.lobby.getModule and XH.lobby:getModule("Configuration")
    if not (cfgMod and cfgMod.getAllConfigData) then
        return { PropPush = { open = 1 } }
    end
    local propPush = cfgMod:getAllConfigData("PropPush")
    return {
        PropPush = type(propPush) == "table" and propPush or { open = 1 },
    }
end

return Compat
