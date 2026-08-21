---@class TeaHouseMemberModule : Module
local TeaHouseMemberModule = class("TeaHouseMemberModule", TeaHouse.Module)

TeaHouseMemberModule.EVENT_MEMBER_FRIEND_LIST_UPDATE = "EVENT_MEMBER_FRIEND_LIST_UPDATE"
TeaHouseMemberModule.EVENT_MEMBER_LIST_UPDATE = "EVENT_MEMBER_LIST_UPDATE"
TeaHouseMemberModule.EVENT_MEMBER_LIST_CHANGED = "EVENT_MEMBER_LIST_CHANGED"
TeaHouseMemberModule.EVENT_MEMBER_LIST_NOTICE = "EVENT_MEMBER_LIST_NOTICE"
TeaHouseMemberModule.EVENT_POWER_UPDATE = "EVENT_POWER_UPDATE"
TeaHouseMemberModule.EVENT_ADMIN_RIGHT_UPDATE = "EVENT_ADMIN_RIGHT_UPDATE"
TeaHouseMemberModule.EVENT_LOG_LIST_CHANGED = "EVENT_LOG_LIST_CHANGED"
TeaHouseMemberModule.EVENT_KICK_OUT_LOG_LIST_CHANGED = "EVENT_KICK_OUT_LOG_LIST_CHANGED"
TeaHouseMemberModule.EVENT_PLAYER_CUSTOM_INFO = "EVENT_PLAYER_CUSTOM_INFO"
TeaHouseMemberModule.EVENT_FORBID_LIST_CHANGED = "EVENT_FORBID_LIST_CHANGED"
TeaHouseMemberModule.EVENT_TEA_TABEL_CARD = "EVENT_TEA_TABEL_CARD"
TeaHouseMemberModule.EVENT_ADD_CADR_LOG_LIST_CHANGED = "EVENT_ADD_CADR_LOG_LIST_CHANGED"
TeaHouseMemberModule.EVENT_TEAMEMBER_HOUSE_CLOSED = "EVENT_TEAMEMBER_HOUSE_CLOSED"
TeaHouseMemberModule.EVENT_MEMBER_LIST_NEW_JION = "EVENT_MEMBER_LIST_NEW_JION"
TeaHouseMemberModule.EVENT_MEMBER_INVITE_LOG = "EVENT_MEMBER_INVITE_LOG"
TeaHouseMemberModule.EVENT_GET_INVITE_USER_INFO = "EVENT_GET_INVITE_USER_INFO"
TeaHouseMemberModule.EVENT_INACTIVE_LIST_CHANGED = "EVENT_INACTIVE_LIST_CHANGED"
---申请类型
TeaHouseMemberModule.APPLY_TYPE = {
    JOIN = 0, --加入申请
    QUIT = 1, --退出申请
}

---审批申请的标志
TeaHouseMemberModule.APPLY_FLAG = {
    REFUSE = 0, --拒绝
    AGREE = 1, --同意
}

TeaHouseMemberModule.LOG_TYPE = {
    JOIN = 1, --加入
    QUIT = 3, --退出
    MQUIT = 8, --自己退出
    INVITE = 5, --邀请回来  如果是踢出直接邀请回来，acExtraData带有"kick"
}

---打开成员管理的页签
TeaHouseMemberModule.OPEN_TAB_TYPE = {
    INACTIVIE_MEMBER = 2, --不活跃玩家
}

TeaHouseMemberModule.KW_SHOW_ADD_CARD_LOG_DAY = 7
TeaHouseMemberModule.KW_MEMBER_RECORD_MAX = 100

function TeaHouseMemberModule:onCreate()
    TeaHouseMemberModule.super.onCreate(self)

    self._isReqLog = false
    self._isReqAddCardLog = false
    self._teaHouseLogs = {}
    self._teaHouseLogCount = 0
    self._isReqKickLog = false
    self._teaHouseKickLogs = {}
    self._teaHouseKickLogCount = 0
    self._teaHouseSelectPlayers = {}

    self._isReqForbid = false
    self._teaHouseForbid = {}
    self._teaHouseAddCardLogs = {}
    self._currSystemTime = nil
end

function TeaHouseMemberModule:onDestroy()
    TeaHouseMemberModule.super.onDestroy(self)
end

function TeaHouseMemberModule:getTeaHouseForbid()
    return self._teaHouseForbid
end

function TeaHouseMemberModule:getTeaHouseLogs()
    return self._teaHouseLogs
end

function TeaHouseMemberModule:getTeaHouseKickLogs()
    return self._teaHouseKickLogs
end

function TeaHouseMemberModule:getTeaHouseSelectPlayers()
    return self._teaHouseSelectPlayers
end

function TeaHouseMemberModule:setTeaHouseSelectPlayers(numid,flag)
    self._teaHouseSelectPlayers[numid] = flag
end

function TeaHouseMemberModule:resetTeaHouseSelectPlayers()
    self._teaHouseSelectPlayers = {}
end

function TeaHouseMemberModule:getTeaHouseAddCardLogs()
    return self._teaHouseAddCardLogs
end

function TeaHouseMemberModule:getTeaHouseLogCount()
    return self._teaHouseLogCount
end

function TeaHouseMemberModule:getTeaHouseKickLogCount()
    return self._teaHouseKickLogCount
end

function TeaHouseMemberModule:reqDealPower()
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqDealPower = TeaHouse.manager.reqManager:createReq("NetReqDealPower")
    netReqDealPower:addReqCallBack(self, self.onNetReqDealPower)
    netReqDealPower:start(teahouseData:getAskPowerCount(), teahouseData:getTeaNumber(), 10)
end

function TeaHouseMemberModule:onNetReqDealPower(req, type)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:reqUserInfo(nil,16)--跟服务约定好的新加的字段，用来处理流通卡问题，写死传16
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "APPLY_RIGHTLIST_TIMEOUT")
    end
end

function TeaHouseMemberModule:reqUserInfo(askID, reqBit)
    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:resetMemberInfos()
    local reqUserInfo = TeaHouse.TeaHouseProtocol.ReqUserInfo:new()
    reqUserInfo.nAskid = askID or 10
    reqUserInfo.nTeaNumber = TeaHouse.manager.teahouseData:getTeaNumber()
    reqUserInfo.nReqBit = reqBit or 0
    TeaHouse.manager.netManager:sendProtocol(reqUserInfo)
end

function TeaHouseMemberModule:dealPower(areaID, numID, applyFlag, applyType)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "PLAYER_DATA_ERROR")
        return
    end
    if applyType == nil then
        if teahouseData:isMemberInJoin(memberInfo) then
            applyType = TeaHouseMemberModule.APPLY_TYPE.JOIN
        elseif teahouseData:isMemberInQuit(memberInfo) then
            applyType = TeaHouseMemberModule.APPLY_TYPE.QUIT
        else
            return
        end
    end
    TeaHouse.showLoading()
    local netReqDealPowers = TeaHouse.manager.reqManager:createReq("NetReqDealPowers")
    netReqDealPowers:addReqCallBack(self, self.onNetReqDealPowers)
    netReqDealPowers:start({ areaID }, { numID }, applyFlag, teahouseData:getTeaNumber(), applyType, 10)
end

function TeaHouseMemberModule:onNetReqDealPowers(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local joinTeaHouse = 0
        for i = 1, #data.areaID do
            local teahouseData = TeaHouse.manager.teahouseData
            local playerInfo = teahouseData:getPlayerInfo(data.areaID[1], data.numID[1])
            if data.ucflag == 0 and data.flag == 1 and data.type == 0 then ---同意加入比赛场且成功                
                if playerInfo ~= nil then
                    playerInfo.nPropCnt = teahouseData:getDefaultPropCount()
                    playerInfo.bHaveRight = true
                    playerInfo.nJoinTime = os.time()
                end
                teahouseData:setMemberInfo(data.areaID[1], data.numID[1], {
                    nPropCnt = teahouseData:getDefaultPropCount(),
                    bHaveRight = true,
                    nJoinTime = os.time(),
                })
                joinTeaHouse = joinTeaHouse + 1
            elseif data.ucflag == 0 and data.flag == 0 and data.type == 1 then ---拒绝退出申请 成功
                if playerInfo ~= nil then
                    playerInfo.nUserEvent = 0
                end
                teahouseData:setMemberInfo(data.areaID[1], data.numID[1], {
                    nUserEvent = 0
                })
            elseif data.ucflag == 1 and data.aucDealRet[i] and data.aucDealRet[i] == 12 then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "TEAHOUSE_BAN")     
            else
                teahouseData:removePlayerInfo(data.areaID[1], data.numID[1])
                teahouseData:removeMemberInfo(data.areaID[1], data.numID[1])
            end
        end
        --TODO
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_CHANGED, data = {joinTeaHouse = joinTeaHouse} })
        if data.ucflag == 2 and data.flag == 1 and data.type == 0 then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "PLAYER_JOINED_REACH_LIMIT")
        elseif data.ucflag == 3 and data.flag == 1 and data.type == 1 then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "PLAYER_IN_GAMING")
        elseif data.ucflag == 9 then                
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "TEAHOUSE_REACH_MAX_NUMBER") 
        elseif data.ucflag == 12 then                
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "TEAHOUSE_BAN")                                                       
        end
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "DEAL_POWER_TIMEOUT")
    end
end

function TeaHouseMemberModule:setPlayerDailyProp(areaID, numID, propCount)
    TeaHouse.showLoading()
    local netReqSetPlayerDailyProps = TeaHouse.manager.reqManager:createReq("NetReqSetPlayerDailyProps")
    netReqSetPlayerDailyProps:addReqCallBack(self, self.onNetReqSetPlayerDailyProps)
    netReqSetPlayerDailyProps:start(areaID, numID, propCount, TeaHouse.manager.teahouseData:getTeaNumber(), 10)
end

function TeaHouseMemberModule:onNetReqSetPlayerDailyProps(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        local playerInfo = teahouseData:getPlayerInfo(data.areaID, data.numID)
        if playerInfo ~= nil then
            playerInfo.nPropCnt = data.propCount
        end
        teahouseData:setMemberInfo(data.areaID, data.numID, {
            nPropCnt = data.propCount
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = data.areaID, numID = data.numID } })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "SET_DAYLY_CONSUME_FAILED")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "SET_DAYLY_CONSUME_TIMEOUT")
    end
end

function TeaHouseMemberModule:kickMember(areaID, numID, tableID, exceptnumid)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    -- if memberInfo == nil then
    --     return
    -- end
    TeaHouse.showLoading()
    local netReqKickUser = TeaHouse.manager.reqManager:createReq("NetReqKickUser")
    netReqKickUser:addReqCallBack(self, self.onNetReqKickUser)
    netReqKickUser:start(areaID, numID, tableID, teahouseData:getTeaNumber(), 10, exceptnumid)
end

function TeaHouseMemberModule:onNetReqKickUser(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        if data.numIDs and #data.numIDs > 0 then
            for i = 1, #data.numIDs do
                teahouseData:removePlayerInfo(data.areaID, data.numIDs[i])
                teahouseData:removeMemberInfo(data.areaID, data.numIDs[i])
                self:setTeaHouseSelectPlayers(data.numIDs[i], false)
            end
        else
            teahouseData:removePlayerInfo(data.areaID, data.numID)
            teahouseData:removeMemberInfo(data.areaID, data.numID)
            self:setTeaHouseSelectPlayers(data.numID, false)
        end
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_CHANGED })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "KICK_USER_TIMEOUT")
    end
end

function TeaHouseMemberModule:setBlackMember(areaID, numID, isBlack)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        return
    end
    TeaHouse.showLoading()
    local netReqForbiddenPlay = TeaHouse.manager.reqManager:createReq("NetReqForbiddenPlay")
    netReqForbiddenPlay:addReqCallBack(self, self.onNetReqForbiddenPlay)
    netReqForbiddenPlay:start(areaID, numID, teahouseData:getTeaNumber(), not isBlack, 10)
end

function TeaHouseMemberModule:onNetReqForbiddenPlay(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        local playerInfo = teahouseData:getPlayerInfo(data.areaID, data.numID)
        if playerInfo ~= nil then
            playerInfo.bCanPlay = data.canPlay
        end
        teahouseData:setMemberInfo(data.areaID, data.numID, {
            bCanPlay = data.canPlay
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = data.areaID, numID = data.numID } })
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMemberModule:setAdminMember(areaID, numID, isAdmin)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        return
    end
    TeaHouse.showLoading()
    local netReqOperatorManager = TeaHouse.manager.reqManager:createReq("NetReqOperatorManager")
    netReqOperatorManager:addReqCallBack(self, self.onNetReqOperatorManager)
    netReqOperatorManager:start(areaID, numID, teahouseData:getTeaNumber(), isAdmin and 1 or 0, 10)
end

function TeaHouseMemberModule:onNetReqOperatorManager(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        local playerInfo = teahouseData:getPlayerInfo(data.nAreaid, data.nNumid)
        local nUserRight = data.active == 1 and teahouseData.IDENTITY.ADMIN or teahouseData.IDENTITY.MEMBER
        if playerInfo ~= nil then
            playerInfo.nUserRight = nUserRight
        end
        teahouseData:setMemberInfo(data.nAreaid, data.nNumid, {
            nUserRight = nUserRight
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = data.nAreaid, numID = data.nNumid } })
    else
        if TeaHouse.BridgeData.isRemodelArea() and TeaHouse.manager.teahouseData:isOwner() and req:getMessage() == "SET_MANAGER_FAIL_MANAGER_COUNT_LIMIT_REACHED" then   
            local condition = data.nUnLockActiveValue or  2000
            self:showUnlockManagerDialog(condition)
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        end
    end
end

function TeaHouseMemberModule:setPlayerProp(areaID, numID, propCount, selfCardCnt, playerProps)
    self._selfCardCnt = selfCardCnt
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "玩家不存在,请刷新页面后重试")
        return
    end
    TeaHouse.showLoading()
    local netReqAddPlayerProp = TeaHouse.manager.reqManager:createReq("NetReqAddPlayerProp")
    netReqAddPlayerProp:addReqCallBack(self, self.onNetReqAddPlayerProp)
    netReqAddPlayerProp:start(areaID, numID, propCount, teahouseData:getTeaNumber(), 10, playerProps)
end

function TeaHouseMemberModule:onNetReqAddPlayerProp(req, type, data)
    TeaHouse.hideLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local playerInfo = teahouseData:getPlayerInfo(data.areaid, data.numid)
        if playerInfo ~= nil then
            playerInfo.nAgentShowProps = data.nAllProp
            playerInfo.nPlayerOwnerCards = data.nAllProp
        end
        teahouseData:setMemberInfo(data.areaid, data.numid, {
            nAgentShowProps = data.nAllProp,
            nPlayerOwnerCards = data.nAllProp
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = data.areaid, numID = data.numid } })
        local isAgentPlayer = teahouseData:isAgentPlayerPayType()
        local tips = ""
        if isAgentPlayer then
            tips = string.format("玩家%s了%.2f比赛场卡", data.nAddCnt > 0 and "增加" or "减少", math.abs(data.nAddCnt) / 100)
        else
            tips = string.format("玩家%s了%d张房卡", data.nAddCnt > 0 and "增加" or "减少", math.abs(data.nAddCnt))
        end
        if data.nTimeCardCnt > 0 then
            tips = tips .. "，其中"..data.nTimeCardCnt.."张为免费获得的绑定房卡，转入后永久有效，但该卡不可被扣回"
        end
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, tips)
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if SwitchConfig.MemberMangeProxyFeeInfo ~= 0 then
            local payTypes = teahouseData:getPayTypeByID()
            if payTypes then
                for _, payType in pairs(payTypes) do
                    if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA 
                    or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
                        TeaHouse.manager.teahouseMember:reqGetTeaTableCard()
                    end
                end
            end
        end
        TeaHouse.SysTool.performWithDelay(0.2, function()
            self:throwAddPlayerProp(data)
        end)
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        if not teahouseData:isOwner() and data and data.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NO_RIGHT then
            teahouseData:setIsisAdmin(false)
            self:dispatchEvent({ name = self.EVENT_POWER_UPDATE })
        end
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "请求服务器超时，请稍后尝试。")
    end
end

function TeaHouseMemberModule:setPlayerRight(areaID, numID, right)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "玩家不存在,请刷新页面后重试")
        return
    end
    if right == 0 then
        if teahouseData:isPlayerAdmin(memberInfo) then
            TeaHouse.showLoading()
            local netReqSetManagerRight = TeaHouse.manager.reqManager:createReq("NetReqSetManagerRight")
            netReqSetManagerRight:addReqCallBack(self, self.onNetReqSetManagerRightAdmin)
            netReqSetManagerRight:start(areaID, numID, right, teahouseData:getTeaNumber(), 10)
        end
    else
        TeaHouse.showLoading()
        if teahouseData:isPlayerAdmin(memberInfo) then
            local netReqSetManagerRight = TeaHouse.manager.reqManager:createReq("NetReqSetManagerRight")
            netReqSetManagerRight:addReqCallBack(self, self.onNetReqSetManagerRight)
            netReqSetManagerRight:start(areaID, numID, right, teahouseData:getTeaNumber(), 10)
        else
            local netReqOperatorManager = TeaHouse.manager.reqManager:createReq("NetReqOperatorManager")
            netReqOperatorManager.right = right
            netReqOperatorManager:addReqCallBack(self, self.onNetReqOperatorManagerRight)
            netReqOperatorManager:start(areaID, numID, teahouseData:getTeaNumber(), 1, 10)
        end
    end
end

function TeaHouseMemberModule:onNetReqSetManagerRightAdmin(req, type, data)
    local teahouseData = TeaHouse.manager.teahouseData
    if type == TeaHouse.Req.TYPE.SUCCESS then
        teahouseData:setMemberInfoEx(data.areaID, data.numID, {
            nManagerRight = data.nRight,
        })
        self:dispatchEvent({ name = self.EVENT_ADMIN_RIGHT_UPDATE })
        self:setAdminMember(data.areaID, data.numID, false)
        TeaHouse.hideLoading()
        TeaHouse.TipTool.showToast(req:getMessage())
    else
        TeaHouse.hideLoading()
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMemberModule:onNetReqOperatorManagerRight(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        local playerInfo = teahouseData:getPlayerInfo(data.nAreaid, data.nNumid)
        local nUserRight = data.active == 1 and teahouseData.IDENTITY.ADMIN or teahouseData.IDENTITY.MEMBER
        if playerInfo ~= nil then
            playerInfo.nUserRight = nUserRight
        end
        teahouseData:setMemberInfo(data.nAreaid, data.nNumid, {
            nUserRight = nUserRight
        })
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = data.nAreaid, numID = data.nNumid } })
        self:setPlayerRight(data.nAreaid, data.nNumid, req.right)
        TeaHouse.hideLoading()
    else
        TeaHouse.hideLoading()
        if TeaHouse.BridgeData.isRemodelArea() and  TeaHouse.manager.teahouseData:isOwner() and req:getMessage() == "SET_MANAGER_FAIL_MANAGER_COUNT_LIMIT_REACHED" then
            local condition = data.nUnLockActiveValue or  2000
            self:showUnlockManagerDialog(condition)
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        end
    end
end

function TeaHouseMemberModule:onNetReqSetManagerRight(req, type, data)
    TeaHouse.hideLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    if type == TeaHouse.Req.TYPE.SUCCESS then
        teahouseData:setMemberInfoEx(data.areaID, data.numID, {
            nManagerRight = data.nRight,
        })
        self:dispatchEvent({ name = self.EVENT_ADMIN_RIGHT_UPDATE })
        TeaHouse.TipTool.showToast(req:getMessage())
    else
        if data.ucFlag == TeaHouse.TeaHouseProtocol.RespSetManagerRight.FLAG.NOT_MANAGER then
            local teahouseData = TeaHouse.manager.teahouseData
            local playerInfo = teahouseData:getPlayerInfo(data.areaID, data.numID)
            local nUserRight = teahouseData.IDENTITY.MEMBER
            if playerInfo ~= nil then
                playerInfo.nUserRight = nUserRight
            end
            teahouseData:setMemberInfo(data.areaID, data.numID, {
                nUserRight = nUserRight
            })
            self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_UPDATE, msg = { areaID = data.areaID, numID = data.numID } })

            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "设置失败！")
        else
            TeaHouse.TipTool.showToast(req:getMessage())
        end
    end
end

function TeaHouseMemberModule:reqTeaHouseLog(startIndex, count, nReqHisBit)
    if self._isReqLog then
        return
    end
    self._isReqLog = true
    startIndex = startIndex or 0
    count = count or 50
    nReqHisBit = nReqHisBit or 0
    if startIndex == 0 then
        self._teaHouseLogs = {}
        self._teaHouseLogCount = 0
    end
    local netReqOperationHistory = TeaHouse.manager.reqManager:createReq("NetReqOperationHistory")
    netReqOperationHistory:addReqCallBack(self, self.onNetReqOperationHistory)
    netReqOperationHistory:start(TeaHouse.manager.teahouseData:getTeaNumber(),
    TeaHouse.TeaHouseProtocol.ReqOperationHistory.TYPE.TEA, startIndex, count, 10,nReqHisBit)
end

function TeaHouseMemberModule:onNetReqOperationHistory(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data and #data > 0 then
            for i = 1, #data do
                local item = data[i]
                if #self._teaHouseLogs >= TeaHouseMemberModule.KW_MEMBER_RECORD_MAX then
                    break
                end
                if item.cOperType == TeaHouseMemberModule.LOG_TYPE.JOIN or item.cOperType == TeaHouseMemberModule.LOG_TYPE.QUIT or
                 item.cOperType == TeaHouseMemberModule.LOG_TYPE.MQUIT or 
                 (item.cOperType == TeaHouseMemberModule.LOG_TYPE.INVITE and string.match(item.acExtraData, "kick")) --踢出又直接邀请回来
                 then
                    if self:judgeRecord7Day(item.nTime) then
                        self._teaHouseLogs[#self._teaHouseLogs + 1] = item
                    end
                end
            end
            self._teaHouseLogCount = self._teaHouseLogCount + #data
        end
        self:dispatchEvent({ name = self.EVENT_LOG_LIST_CHANGED })
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
    self._isReqLog = false
end

function TeaHouseMemberModule:reqTeaHouseKickLog(startIndex, count)
    if self._isReqKickLog then
        return
    end
    self._isReqKickLog = true
    startIndex = startIndex or 0
    count = count or 50
    if startIndex == 0 then
        self._teaHouseKickLogs = {}
        self._teaHouseKickLogCount = 0
    end
    local netReqOperationHistory = TeaHouse.manager.reqManager:createReq("NetReqOperationHistory")
    netReqOperationHistory:addReqCallBack(self, self.onNetReqKickHistory)
    netReqOperationHistory:start(TeaHouse.manager.teahouseData:getTeaNumber(),
    TeaHouse.TeaHouseProtocol.ReqOperationHistory.TYPE.TEA, startIndex, count, 10,8)
end

function TeaHouseMemberModule:onNetReqKickHistory(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data and #data > 0 then
            for i = 1, #data do
                local item = data[i]
                if #self._teaHouseKickLogs >= TeaHouseMemberModule.KW_MEMBER_RECORD_MAX then
                    break
                end
                if item.cOperType == TeaHouseMemberModule.LOG_TYPE.JOIN or item.cOperType == TeaHouseMemberModule.LOG_TYPE.QUIT or
                 item.cOperType == TeaHouseMemberModule.LOG_TYPE.MQUIT then
                    if self:judgeRecord7Day(item.nTime) then
                        self._teaHouseKickLogs[#self._teaHouseKickLogs + 1] = item
                    end
                end
            end
            self._teaHouseKickLogCount = self._teaHouseKickLogCount + #data
        end
        self:dispatchEvent({ name = self.EVENT_KICK_OUT_LOG_LIST_CHANGED })
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
    self._isReqKickLog = false
end

function TeaHouseMemberModule:reqTeaHouseAddCardLog(nday)
    if self._isReqAddCardLog then
        return
    end
    self._isReqAddCardLog = true
    local selectedDay = nday or 0
    local MIN_RECORD_INDEX = 0
    local MAX_RECORD_COUNT = 100
    -- 宝宝开发时间较早,方案和后面的有区别
    -- if TeaHouse.LOBBY_ID.BAOBAO  == TeaHouse.BridgeData.getLobbyID() then
    --     local netReqGetAddCardLog = TeaHouse.manager.reqManager:createReq("NetReqGetAddCardLog")
    --     netReqGetAddCardLog:addReqCallBack(self, self.onNetReqTeaHouseAddCardLog)
    --     netReqGetAddCardLog:start(TeaHouse.manager.teahouseData:getTeaNumber(),selectedDay,10)
    -- else
        local netReqGetAddCardLog = TeaHouse.manager.reqManager:createReq("NetReqTeaAndPlayerOperation")
        netReqGetAddCardLog:addReqCallBack(self, self.onNetReqTeaHouseAddCardLog)
        netReqGetAddCardLog:start(TeaHouse.manager.teahouseData:getTeaNumber(),MIN_RECORD_INDEX,MAX_RECORD_COUNT,10,7)
    -- end
end

--返回比赛场的全部操作记录,客户端自己区分数据
function TeaHouseMemberModule:onNetReqTeaHouseAddCardLog(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._teaHouseAddCardLogs = {}
        if data and #data > 0 then
            for i = 1, #data do
                -- 过滤掉不是划卡的操作,针对新协议
                if data[i].comments and #data[i].comments > 0 and self:checkIsLegalOperType(data[i].oper_type) then
                    self._teaHouseAddCardLogs[#self._teaHouseAddCardLogs + 1] = data[i]
                end
                if data[i].tFromUserinfo and #data[i].tToUserinfo  then
                    self._teaHouseAddCardLogs[#self._teaHouseAddCardLogs + 1] = data[i]
                end
            end
        end
        self:dispatchEvent({ name = self.EVENT_ADD_CADR_LOG_LIST_CHANGED })
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
    self._isReqAddCardLog = false
end

function TeaHouseMemberModule:checkIsLegalOperType(
    oper)
    if oper == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.TRANSFERCARD_TO_PLAYER
        or oper == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.TRANSFERCARD
            or oper == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.AUTO_TRANSFERCARD_LOBBY
            or oper == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.ADD_PLAYERFEE then
        return true
    end
    return false
end

function TeaHouseMemberModule:reqGetPlayerCustomInfo(areaID, numID)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "玩家不存在,请刷新页面后重试")
        return
    end
    TeaHouse.showLoading()
    local netReqGetPlayerCustomInfo = TeaHouse.manager.reqManager:createReq("NetReqGetPlayerCustomInfo")
    netReqGetPlayerCustomInfo:addReqCallBack(self, self.onNetReqGetPlayerCustomInfo)
    netReqGetPlayerCustomInfo:start(teahouseData:getTeaNumber(), numID, 10)
end

function TeaHouseMemberModule:onNetReqGetPlayerCustomInfo(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_PLAYER_CUSTOM_INFO, msg = { data = data } })
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMemberModule:reqSetPlayerCustomInfo(areaID, numID, data)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "玩家不存在,请刷新页面后重试")
        return
    end
    TeaHouse.showLoading()
    local netReqSetPlayerCustomInfo = TeaHouse.manager.reqManager:createReq("NetReqSetPlayerCustomInfo")
    netReqSetPlayerCustomInfo:addReqCallBack(self, self.onNetReqSetPlayerCustomInfo)
    netReqSetPlayerCustomInfo:start(teahouseData:getTeaNumber(), numID, data, 10)
end

function TeaHouseMemberModule:onNetReqSetPlayerCustomInfo(req, type)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showToast("保存成功")
        TeaHouse.manager.viewManager:closeView("TeaHouseMemberItem.TeaHouseMemberRemarkMenu")
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMemberModule:reqForbidPlayInSameTable()
    if self._isReqForbid then
        return
    end
    self._isReqForbid = true
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqForbidPlayInSameTable = TeaHouse.manager.reqManager:createReq("NetReqForbidPlayInSameTable")
    netReqForbidPlayInSameTable:addReqCallBack(self, self.onNetReqForbidPlayInSameTable)
    netReqForbidPlayInSameTable:start(teahouseData:getTeaNumber(), 10)
end

function TeaHouseMemberModule:onNetReqForbidPlayInSameTable(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._teaHouseForbid = data.ruleTable
        self:dispatchEvent({ name = self.EVENT_FORBID_LIST_CHANGED })
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
    self._isReqForbid = false
end

function TeaHouseMemberModule:reqSetForbidPlayInSameTable(anNumId)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqSetForbidPlayInSameTable = TeaHouse.manager.reqManager:createReq("NetReqSetForbidPlayInSameTable")
    netReqSetForbidPlayInSameTable:addReqCallBack(self, self.onNetReqSetForbidPlayInSameTable)
    netReqSetForbidPlayInSameTable:start(teahouseData:getTeaNumber(), anNumId, 10)
end

function TeaHouseMemberModule:onNetReqSetForbidPlayInSameTable(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showToast("设置互斥名单成功")
        TeaHouse.manager.viewManager:closeView("TeaHouseMutexView")
        self:reqForbidPlayInSameTable()
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMemberModule:reqDelForbidPlayInSameTable(ruleId)
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    funcOK = function()
        TeaHouse.showLoading()
        local teahouseData = TeaHouse.manager.teahouseData
        local netReqDelForbidPlayInSameTable = TeaHouse.manager.reqManager:createReq("NetReqDelForbidPlayInSameTable")
        netReqDelForbidPlayInSameTable:addReqCallBack(self, self.onNetReqDelForbidPlayInSameTable)
        netReqDelForbidPlayInSameTable:start(teahouseData:getTeaNumber(), ruleId, 10)
    end }, "是否要删除该名单？")
end

function TeaHouseMemberModule:onNetReqDelForbidPlayInSameTable(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        for i, forbidInfo in ipairs(self._teaHouseForbid) do
            if forbidInfo.ruleId == data.nRuleId then
                table.remove(self._teaHouseForbid, i)
                break
            end
        end
        TeaHouse.TipTool.showToast("删除互斥名单成功")
        self:dispatchEvent({ name = self.EVENT_FORBID_LIST_CHANGED })
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

--请求库存房卡、总桌卡、占用桌卡数据
function TeaHouseMemberModule:reqGetTeaTableCard()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqGetTeaTableCard = TeaHouse.manager.reqManager:createReq("NetReqGetTeaTableCard")
    netReqGetTeaTableCard:addReqCallBack(self, self.onNetReqGetTeaTableCard)
    netReqGetTeaTableCard:start(teahouseData:getTeaNumber(), 10)
end

function TeaHouseMemberModule:onNetReqGetTeaTableCard(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        -- 卡的信息全都放大了100倍
        local totolPropCntStr = data.nTotalPropCnt/100 or 0
        local totalTableCardStr = data.nTotalTableCard/100  or 0
        local usedTableCardStr = data.nUsedTableCard or 0   
        local info_text = "库存房卡: " .. totolPropCntStr .. "  总桌卡: " .. totalTableCardStr .. "  占用桌卡: " .. usedTableCardStr
        self:dispatchEvent({ name = self.EVENT_TEA_TABEL_CARD, info  = info_text })
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMemberModule:reqUnLockManagerNumber()
    TeaHouse.showLoading()
    local netReqUnLockTeaInfo = TeaHouse.manager.reqManager:createReq("NetReqUnLockTeaInfo")
    netReqUnLockTeaInfo:addReqCallBack(self, self.onNetRespUnLockManagerNumber)
    netReqUnLockTeaInfo:start(TeaHouse.TeaHouseProtocol.ReqUnLockTeaInfo.UNLOCK_TYPE.MANAGERCOUNT,TeaHouse.manager.teahouseData:getTeaNumber(),10)
end

function TeaHouseMemberModule:onNetRespUnLockManagerNumber(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showToast("UNLOCK_MANAGER_SUCCESS")
    else
        TeaHouse.TipTool.showToast(req:getMessage())
    end
end

function TeaHouseMemberModule:showUnlockManagerDialog(condition)
    local activeValue = tonumber(TeaHouse.manager.teahouseData:getTeaActiveValue())
    local tipMsg 
    if tonumber(condition) == 0 then
        tipMsg = string.format("您的副领队数量已达上限")
    else
        tipMsg = string.format("您的副领队数量已达上限，\n活跃值达到%s即可解锁一个副领队权限，\n当前活跃值为%s，是否解锁？",condition,activeValue)
    end
    local info = {}
    info.type = XH.TIP_LAYER_TYPE.OK_CANCEL
    info.funcOK  = function()
        local n_condi = tonumber(condition)
        if activeValue >= n_condi then
            if n_condi ~= 0 then
                self:reqUnLockManagerNumber()
            end
        else
            TeaHouse.TipTool.showToast("TEAHOUSE_ACTIVE_VALUE_NOT_ENOUGH")
        end
    end
    TeaHouse.TipTool.showTip(info,tipMsg)
end

-- 切换时间
function TeaHouseMemberModule:onChangeDate(index)
    if self._curAddCardLogTimeIndex == index then
        return
    end
    self._curAddCardLogTimeIndex = index
    self:reqTeaHouseAddCardLog(self.KW_SHOW_ADD_CARD_LOG_DAY - self._curAddCardLogTimeIndex)
end

function TeaHouseMemberModule:getCurAddCardLogTimeIndex()
    return self._curAddCardLogTimeIndex or 0
end

-- 领队转让功能
function TeaHouseMemberModule:transferOwner(areaID, numID)
    local teahouseData = TeaHouse.manager.teahouseData
    local memberInfo = teahouseData:getMemberInfo(areaID, numID)
    if memberInfo == nil then
        return
    end
    TeaHouse.showLoading()
    local netReqKickUser = TeaHouse.manager.reqManager:createReq("NetReqTransferOwner")
    netReqKickUser:addReqCallBack(self, self.onTransferOwner)
    netReqKickUser:start(numID, teahouseData:getTeaNumber(), 10)
end

function TeaHouseMemberModule:onTransferOwner(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        TeaHouse.manager.viewManager:closeView("TeaHouseMemberView")
        self:dispatchEvent({ name = self.EVENT_TEAMEMBER_HOUSE_CLOSED })
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "KICK_USER_TIMEOUT")
    end
end

function TeaHouseMemberModule:reqSystemTime()
    local TaskDefine = require("app.Define.TaskDefine")
    local reqTaskPercent = require("app.Req.Task.ReqTaskPercent")
    local TaskPercent = reqTaskPercent:new()
    TaskPercent:addReqCallBack(self, self.onReqSysTimeCallBack)
    local srsGroupID = TeaHouse.BridgeData.getSRSGroupID()
    TaskPercent:start(TeaHouse.BridgeData.getNumberID(), 0, 120, TaskDefine.KW_SYSTEM_TIME, srsGroupID, 10)
end

function TeaHouseMemberModule:onReqSysTimeCallBack(req, ctype, data)
    if ctype == TeaHouse.Req.TYPE.SUCCESS  then
        local timestamp = json.decode(data.acData).time
        if timestamp then
            self._currSystemTime = timestamp
        end
    end
end

function TeaHouseMemberModule:judgeRecord7Day(timeStamp)
    local nowTimeStamp = self._currSystemTime or os.time()
    if(tonumber(nowTimeStamp) - tonumber(timeStamp) < 7 * 24 * 60 * 60 ) then
        return true
    end

    return false
end

function TeaHouseMemberModule:onReqTeaInviteLog() 
    if TeaHouse.manager.teahouseData:isOwner() then
        local netReqBatchInviteInfo = TeaHouse.manager.reqManager:createReq("NetReqInviteLog")
        netReqBatchInviteInfo:addReqCallBack(self, self.onRespTeaInviteLog)
        netReqBatchInviteInfo:start(TeaHouse.manager.teahouseData:getTeaNumber())
    end
end

function TeaHouseMemberModule:onRespTeaInviteLog(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_MEMBER_INVITE_LOG , msg = data})
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMemberModule:reqTeaOtherMemberInfo(memberId)
    local netReqTeaMemberList = TeaHouse.manager.reqManager:createReq("NetReqOtherUserInfo")
    netReqTeaMemberList:addReqCallBack(self, self.onRespOtherUserInfo)
    netReqTeaMemberList:start(memberId)
end

function TeaHouseMemberModule:onRespOtherUserInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data.nNumid == 0 then
            TeaHouse.TipTool.showToast("输入错误，请重试")
        else
            TeaHouse.manager.viewManager:openView("TeaHouseInviteAssignPlayerView",nil,data)
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMemberModule:onReqInvitePlayer(nTeaId, nInviteAreaId,nInviteNumId,nChannel,nTime)
    TeaHouse.showLoading()
    local reqInvitePlayer = TeaHouse.manager.reqManager:createReq("NetReqInvitePlayer")
    reqInvitePlayer:addReqCallBack(self, function(tmp, req, type, data)
        self:onRespInvitePlayer(req, type, data, nTime, nInviteNumId)
    end)
    -- reqInvitePlayer:addReqCallBack(self, self.onRespInvitePlayer)
    local teahouseData = TeaHouse.manager.teahouseData
    reqInvitePlayer:start(nTeaId, nInviteAreaId,nInviteNumId,nChannel,nTime,30)
end

function TeaHouseMemberModule:onRespInvitePlayer(req, type, data,nTime, nNumid)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data.ucFlag == 0 then
            TeaHouse.TipTool.showToast("邀请成功!")
            for _, logInfo in pairs(self._teaHouseKickLogs) do
                -- if logInfo.nOperNumId == data.nNumid and logInfo.nTime == data.nTime then                
                if logInfo.nPlayerNumId == nNumid and logInfo.nTime == nTime then                
                    table.remove(self._teaHouseKickLogs, _)
                    break
                end
            end
            self:dispatchEvent({ name = self.EVENT_KICK_OUT_LOG_LIST_CHANGED })
            self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_NOTICE})
        elseif data.ucFlag == 1 then                
            TeaHouse.TipTool.showToast("INVITE_NOT_RIGHT")
        elseif data.ucFlag == 3 then                
            TeaHouse.TipTool.showToast("TEAHOUSE_REACH_MAX_NUMBER")
        else
            TeaHouse.TipTool.showToast("邀请失败,错误码:" .. data.ucFlag)
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseMemberModule:onReqDelKickLog(nPlayerAreaId, nPlayerNumId, nOperAreaId, nOperNumId, nTeaId, nTime)
    TeaHouse.showLoading()
    local reqDelKickLog = TeaHouse.manager.reqManager:createReq("NetReqDelKickLog")
    reqDelKickLog:addReqCallBack(self, self.onRespDelKickLog)
    local teahouseData = TeaHouse.manager.teahouseData
    reqDelKickLog:start(nPlayerAreaId, nPlayerNumId, nOperAreaId, nOperNumId, nTeaId, nTime, 30)
end

function TeaHouseMemberModule:onRespDelKickLog(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data.ucFlag == 0 then
            TeaHouse.TipTool.showToast("删除成功")
            for _, logInfo in pairs(self._teaHouseKickLogs) do
                if logInfo.nPlayerAreaId == data.nPlayerAreaId and logInfo.nPlayerNumId == data.nPlayerNumId 
                    and logInfo.nOperAreaId == data.nOperAreaId and logInfo.nOperNumId == data.nOperNumId 
                    and logInfo.nTime == data.nTime then                
                    table.remove(self._teaHouseKickLogs, _)
                    break
                end
            end
            self:dispatchEvent({ name = self.EVENT_KICK_OUT_LOG_LIST_CHANGED })
        else
            TeaHouse.TipTool.showToast("删除失败,错误码:" .. data.ucFlag)        
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end


function TeaHouseMemberModule:judgeRecordDay(timeStamp,day)
    local nowTimeStamp = self._currSystemTime or os.time()
    if(tonumber(nowTimeStamp) - tonumber(timeStamp) < day * 24 * 60 * 60 ) then
        return true
    end

    return false
end

function TeaHouseMemberModule:sendEvent(name, data)
    self:dispatchEvent({ name = name , msg = data})
end

function TeaHouseMemberModule:throwAddPlayerProp(data)
    local teahouseData = TeaHouse.manager.teahouseData
    local role = ""
    if teahouseData:isOwner() then
        role = "领队"
    elseif teahouseData:isAdmin() then
        role = "副领队"
    end
    local cardType = ""
    if self._selfCardCnt == teahouseData:getSelfPropcount() then
        cardType = "虚拟房卡"
    else
        cardType = "普通房卡"
    end
    local data2 = {
        club_id = tostring(XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber()),
        page_item_id = role,
        block_label = cardType,
        block_item_id = XH.areaData:getAreaID() .. "_" .. data.numid,
        item_id = data.nAddCnt > 0 and "加卡" or "减卡"
    }
    local customize = {
        count = data.nAddCnt, -- 加减卡数量
        count1 = self._selfCardCnt, -- 加卡前比赛场库存
        count2 = data.playerProps   -- 加卡前玩家库存
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lys25112601, data2, customize)
end

return TeaHouseMemberModule��