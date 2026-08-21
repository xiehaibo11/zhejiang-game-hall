---@class TeaHouseTableModule : Module
local TeaHouseTableModule = class("TeaHouseTableModule", TeaHouse.Module)

function TeaHouseTableModule:joinPlayModeTable(playModeInfo)
    if not playModeInfo then
        return
    end
    if XH.playerData:checkNewRealName(playModeInfo.nGameId) ~= 0 then return end--实名限制
    if not TeaHouse.manager.teahouseGeneral:findGameByGameID(playModeInfo.nGameId) then
        return
    end
    if TeaHouse.manager.teahouseGeneral:checkIsInGame() then
        return
    end
    if not TeaHouse.manager.teahouseData:checkSelfPower("JoinTable") then
        return
    end

    if playModeInfo.bIsCountLock and playModeInfo.bIsPlayerLock and playModeInfo.bIsPlayModeLock and #playModeInfo.anPlayerCount == 1 and #playModeInfo.anCount == 1 then
        local data = {}
        data.gameid = playModeInfo.nGameId
        data.base = playModeInfo.nBase
        data.cont = playModeInfo.anCount[1]
        data.type = 0
        local lobbyID = TeaHouse.BridgeData.getLobbyID()
        if tonumber(lobbyID) == 900003 then
            data.type = (data.cont == 10000 or data.cont == 999) and 1 or 0
        end
        --宁波慈溪麻将特判
        if tonumber(lobbyID) == 900006 then
            data.type = (data.cont == 1100) and 1 or 0
        end
        --嵊州麻将特判
        if tonumber(lobbyID) == 900007 then
            if data.cont > 10000 then
                data.cont = (data.cont % 10000) * 100
            end
        end
        data.size = playModeInfo.anPlayerCount[1]
        data.name = playModeInfo.acName
        data.data = playModeInfo.acData
        if TeaHouse.manager.teahouseData:isLastCost() and not string.find(data.data, "loser_cost=1;") then
            data.data = data.data .. "loser_cost=1;"
        end
        data.tableCnt = 1
        data.payType = TeaHouse.SysTool.analysisPayType(playModeInfo.acData)
        local isCheckPayTypes = true
        local SetupConfig = TeaHouse.manager.configManager.SetupConfig
        if SetupConfig and SetupConfig.IsFixedPayType then
            isCheckPayTypes = false
        end
        if isCheckPayTypes then
            local payTypes = TeaHouse.manager.teahouseData:getPayTypeByID()
            if payTypes and #payTypes == 1 then
                data.payType = payTypes[1]
            end
        else
            -- 温茶预付AA的支付模式需要转化
            local teahousePayMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
            if TeaHouse.LOBBY_ID.WENZHOU == TeaHouse.BridgeData.getLobbyID() then
                if teahousePayMode  == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON  then
                    if data.payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                        data.payType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA
                    end
                else
                    if data.payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
                        data.payType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA
                    end
                end
            end
        end
        --服务端没有用到该值，但部分区客户端需要用到
        data.nPlayModeId = playModeInfo.nPlayModeId or 0
        data.data = TeaHouse.manager.teahouseMain:fixPrevAAPlayModelCreateRoomData(data.data,data.payType)
        TeaHouse.manager.teahouseMain:createBoxRoom(data)
        --数据埋点上传
        local tmpData = {}
        local teahouseData = TeaHouse.manager.teahouseData
        local Info = teahouseData:getPlayModeInfos()
        tmpData.userid = XH.playerData:getNumberID()
        tmpData.tablenumber = playModeInfo.anPlayerCount[1]
        tmpData.teaHouseTitle = teahouseData:getTeaHouseTitle()
        tmpData.teanumber = teahouseData:getTeaNumber()
        tmpData.game_type = Info[1].acName
        if playModeInfo.bIsPlayModeLock then
            tmpData.play_type = "固定玩法"
        else 
            tmpData.play_type = "玩家创建"
        end 
        XH.throwDataManager:throwData(XH.ThrowDataDefine.Tea_67, tmpData)
        return
    end

    if playModeInfo.bIsPlayModeLock then
        TeaHouse.manager.viewManager:openView("TeaHouseCreatePlayModeRoomView", 0, playModeInfo)
    else
        local teahouseData = TeaHouse.manager.teahouseData
        TeaHouse.manager.viewManager:openView("TeaHouseCreateNotLockRoomView", 0, playModeInfo, {
            payModeType = teahouseData:getTeaHousePayMode(),
            payTypeTable = teahouseData:getPayTypeByID()
        })
    end
    XH.throwDataManager:throwData(XH.ThrowDataDefine.TeaCreateSelected,{time1 = os.time(),userid = XH.playerData:getNumberID()})
end

return TeaHouseTableModule[